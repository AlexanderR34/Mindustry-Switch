#include "Clearwing.h"

#include "java/lang/Runnable.h"
#include "java/lang/Thread.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/String.h"
#include "java/lang/Object.h"
#include "java/lang/Throwable.h"

#include <thread>
#include <pthread.h>
#include <atomic>

extern "C" {

void threadEntrypoint(jcontext ctx, jthread thread) {
    printf("[threadEntrypoint] 1. Attaching thread...\n"); fflush(stdout);
    attachThread(ctx);

    try {
        jtype frame[1];
        FrameInfo frameInfo { "java/lang/Thread:threadEntrypoint", 1 };
        auto frameRef = pushStackFrame(ctx, &frameInfo, frame);

        thread->F_started = true;
        thread->F_alive = true;

        printf("[threadEntrypoint] 2. Running tryCatch for entrypoint...\n"); fflush(stdout);
        tryCatch(frameRef, [&]{
            if (thread->F_entrypoint) {
                printf("[threadEntrypoint] 3. Creating String args array...\n"); fflush(stdout);
                frame[0].o = (jobject) createArray(ctx, &class_java_lang_String, 0);
                printf("[threadEntrypoint] 4. Invoking main entrypoint function at %p...\n", (void*)thread->F_entrypoint); fflush(stdout);
                ((main_ptr) thread->F_entrypoint)(ctx, frame[0].o);
                printf("[threadEntrypoint] 5. Main entrypoint function returned!\n"); fflush(stdout);
            }
            else {
                printf("[threadEntrypoint] 3b. Invoking Thread.run()...\n"); fflush(stdout);
                invokeVirtual<func_java_lang_Thread_run, VTABLE_java_lang_Thread_run>(ctx, (jobject)thread);
            }
        }, &class_java_lang_Throwable, [&](jobject ex){
            printf("[threadEntrypoint] Uncaught exception thrown to thread top level!\n"); fflush(stdout);
            tryCatch(frameRef, [&] {
                auto throwable = (java_lang_Throwable *)ex;
                if (throwable && throwable->F_message)
                    printf("[threadEntrypoint] Exception message: %s\n", stringToNative(ctx, (jstring)throwable->F_message));
                INVOKE_VIRTUAL(java_lang_Throwable_printStackTrace, ex);
                fflush(stdout);
            }, &class_java_lang_Throwable, [&](jobject) {});
        });

        popStackFrame(ctx);
    } catch (ExitException &) {
        printf("[threadEntrypoint] Caught ExitException\n"); fflush(stdout);
    }

    printf("[threadEntrypoint] Thread finished execution.\n"); fflush(stdout);
    thread->F_alive = false;
    ctx->suspended = true;
    ctx->dead = true;

    unprotectObject((jobject)thread);
}

jobject SM_java_lang_Thread_currentThread_R_java_lang_Thread(jcontext ctx) {
    return (jobject) ctx->thread;
}

void SM_java_lang_Thread_sleepImpl_long_int(jcontext ctx, jlong millis, jint nanos) {
    auto end = std::chrono::system_clock::now() + std::chrono::milliseconds(millis) + std::chrono::nanoseconds(nanos);
    interruptedCheck(ctx);
    auto thread = (jobject) ctx->thread;
    while (std::chrono::system_clock::now() < end) {
        auto remaining = end - std::chrono::system_clock::now();
        auto remainingNanos = duration_cast<std::chrono::nanoseconds>(remaining);
        auto remainingMillis = std::chrono::round<std::chrono::milliseconds>(remaining);
        remainingNanos -= remainingMillis;
        monitorEnter(ctx, thread);
        M_java_lang_Object_wait_long_int(ctx, thread, remainingMillis.count(), (int) remainingNanos.count());
        monitorExit(ctx, thread);
        interruptedCheck(ctx);
    }
}

#include <switch.h>

struct JavaThreadArgs {
    jcontext ctx;
    jthread thread;
    Thread nxThread;
};

static void javaThreadRunner(void* arg) {
    JavaThreadArgs* args = (JavaThreadArgs*)arg;
    jcontext ctx = args->ctx;
    jthread thread = args->thread;

    threadEntrypoint(ctx, thread);

    // In libnx, _EntryWrap calls threadExit() right after this function returns,
    // which accesses args->nxThread. Calling threadClose/delete here causes a use-after-free
    // and Data Abort at 0xa0 in threadExit.
}

void M_java_lang_Thread_start(jcontext ctx, jobject self) {
    auto newContext = createContext();
    auto thread = (jthread) self;
    protectObject((jobject)thread);
    thread->F_nativeContext = (intptr_t) newContext;
    newContext->thread = thread;
    newContext->nativeThread = nullptr;

    JavaThreadArgs* args = new JavaThreadArgs{newContext, thread, {}};
    static std::atomic<int> s_coreDistributor{1};
    int targetCore = (s_coreDistributor.fetch_add(1) % 2) + 1; // 1 or 2
    Result rc = threadCreate(&args->nxThread, javaThreadRunner, args, NULL, 0x80000, 0x2C, targetCore);
    if (R_FAILED(rc)) {
        rc = threadCreate(&args->nxThread, javaThreadRunner, args, NULL, 0x80000, 0x2C, -1);
    }
    if (R_SUCCEEDED(rc)) {
        rc = threadStart(&args->nxThread);
        if (R_FAILED(rc)) {
            threadClose(&args->nxThread);
            delete args;
            unprotectObject((jobject)thread);
            newContext->thread = nullptr;
        }
    } else {
        delete args;
        unprotectObject((jobject)thread);
        newContext->thread = nullptr;
    }
}

void M_java_lang_Thread_interrupt(jcontext ctx, jobject self) {
    auto threadCtx = (jcontext) ((jthread) NULL_CHECK(self))->F_nativeContext;
    if (!threadCtx) return;
    threadCtx->lock.lock();
    if (threadCtx->thread)
        threadCtx->thread->F_interrupted = true;
    if (threadCtx->blockedBy)
        ((jmonitor) ((jobject) threadCtx->blockedBy)->monitor)->condition.notify_all();
    threadCtx->parkCond.notify_all();
    threadCtx->lock.unlock();
}

void M_java_lang_Thread_finalize(jcontext ctx, jobject selfObj) {
    auto self = (jthread) selfObj;
    auto context = (jcontext) self->F_nativeContext;
    if (context) {
        if (context->nativeThread) {
            delete context->nativeThread;
            context->nativeThread = nullptr;
        }
        destroyContext(context);
        self->F_nativeContext = 0;
    }
}

jobject M_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement(jcontext ctx, jobject self) {
    jtype frame[4];
    FrameInfo frameInfo { "java/lang/Thread:getStackTrace", sizeof(frame) / sizeof(jtype) };
    auto frameRef = pushStackFrame(ctx, &frameInfo, frame);

    jarray trace = createArray(ctx, &class_java_lang_StackTraceElement, ctx->stackDepth);
    frame[0].o = (jobject)trace;

    for (int i = 0; i < ctx->stackDepth; i++) {
        auto stackFrame = &ctx->frames[i];
        std::string_view method = stackFrame->info->method ? stackFrame->info->method : "";
        auto separator = method.find(':');
        frame[1].o = (jobject)stringFromNative(ctx, separator != std::string_view::npos ? method.substr(0, separator) : "Unknown");
        frame[2].o = (jobject)stringFromNative(ctx, separator != std::string_view::npos ? method.substr(separator + 1) : "unknown");
        frame[3].o = frame[1].o;
        ((jobject *)trace->data)[ctx->stackDepth - 1 - i] = constructObject<&class_java_lang_StackTraceElement, init_java_lang_StackTraceElement_java_lang_String_java_lang_String_java_lang_String_int>(ctx, frame[1].o, frame[2].o, frame[3].o, stackFrame->lineNumber);
    }

    popStackFrame(ctx);
    return frame[0].o;
}

}
