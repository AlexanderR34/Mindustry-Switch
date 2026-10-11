#include "mindustry/game/FogControl_StaticFogThread.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/InterruptedException.h"
#include "mindustry/game/FogControl.h"
#include "mindustry/game/FogControl_StaticFogThread.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_mindustry_game_FogControl$StaticFogThread(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Thread(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_FogControl$StaticFogThread *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_game_FogControl$StaticFogThread(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Thread(ctx);
}

void init_mindustry_game_FogControl$StaticFogThread_mindustry_game_FogControl(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl$StaticFogThread:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_FogControl$StaticFogThread(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(320);
	((mindustry_game_FogControl$StaticFogThread *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(321);
	init_java_lang_Thread_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"StaticFogThread"_j))));
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl$StaticFogThread_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl$StaticFogThread:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
label_12:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	LINE_NUMBER(328);
	clinit_mindustry_game_FogControl(ctx);
	sp[0].o = (jobject)SF_mindustry_game_FogControl_notifyStatic;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); bypasses[0] = true; goto label_16; } // goto label_5
	}
	{
	LINE_NUMBER(331);
	clinit_mindustry_game_FogControl(ctx);
	sp[0].o = (jobject)SF_mindustry_game_FogControl_notifyStatic;
	((func_java_lang_Object_wait) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_wait])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(335);
	{ popExceptionFrames(frameRef, 2); goto label_7; }
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(332);
	frame[2].o = sp[0].o;
	LINE_NUMBER(334);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_5; }
	}
	{
	LINE_NUMBER(336);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_18;
label_5:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_5; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_18:;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((mindustry_game_FogControl$StaticFogThread *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_game_FogControl_updateStatic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_updateStatic])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(340);
	goto label_12;
label_13:;
	INST_ASTORE(1);
	goto label_12;

	popStackFrame(ctx);
}

void *vtable_mindustry_game_FogControl$StaticFogThread[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Thread_toString_R_java_lang_String,
	(void *) M_java_lang_Thread_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_FogControl$StaticFogThread_run,
	(void *) M_java_lang_Thread_getId_R_long,
	(void *) M_java_lang_Thread_getName_R_java_lang_String,
	(void *) M_java_lang_Thread_setName_java_lang_String,
	(void *) M_java_lang_Thread_getPriority_R_int,
	(void *) M_java_lang_Thread_interrupt,
	(void *) M_java_lang_Thread_isAlive_R_boolean,
	(void *) M_java_lang_Thread_isInterrupted_R_boolean,
	(void *) M_java_lang_Thread_isDaemon_R_boolean,
	(void *) M_java_lang_Thread_setDaemon_boolean,
	(void *) M_java_lang_Thread_join,
	(void *) M_java_lang_Thread_join_long,
	(void *) M_java_lang_Thread_join_long_int,
	(void *) M_java_lang_Thread_setPriority_int,
	(void *) M_java_lang_Thread_start,
	(void *) M_java_lang_Thread_stop,
	(void *) M_java_lang_Thread_suspend,
	(void *) M_java_lang_Thread_resume,
	(void *) M_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader,
	(void *) M_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader,
	(void *) M_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler,
	(void *) M_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler,
	(void *) M_java_lang_Thread_getState_R_java_lang_Thread$State,
	(void *) M_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "run", "()V" },
	{ "getId", "()J" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "getPriority", "()I" },
	{ "interrupt", "()V" },
	{ "isAlive", "()Z" },
	{ "isInterrupted", "()Z" },
	{ "isDaemon", "()Z" },
	{ "setDaemon", "(Z)V" },
	{ "join", "()V" },
	{ "join", "(J)V" },
	{ "join", "(JI)V" },
	{ "setPriority", "(I)V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "suspend", "()V" },
	{ "resume", "()V" },
	{ "getStackTrace", "()[Ljava/lang/StackTraceElement;" },
	{ "setContextClassLoader", "(Ljava/lang/ClassLoader;)V" },
	{ "getContextClassLoader", "()Ljava/lang/ClassLoader;" },
	{ "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V" },
	{ "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;" },
	{ "getState", "()Ljava/lang/Thread$State;" },
	{ "getThreadGroup", "()Ljava/lang/ThreadGroup;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_game_FogControl, offsetof(mindustry_game_FogControl$StaticFogThread, F_this$0), "Lmindustry/game/FogControl;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_FogControl$StaticFogThread_mindustry_game_FogControl, 0, "(Lmindustry/game/FogControl;)V", 0 },
	{ "run", (intptr_t) M_mindustry_game_FogControl$StaticFogThread_run, VTABLE_mindustry_game_FogControl$StaticFogThread_run, "()V", 1 },
};

Class class_mindustry_game_FogControl$StaticFogThread{
		.nativeName = (intptr_t) "mindustry/game/FogControl$StaticFogThread",
		.parentClass = (intptr_t) &class_java_lang_Thread,
		.size = sizeof(mindustry_game_FogControl$StaticFogThread),
		.classVtable = (intptr_t) vtable_mindustry_game_FogControl$StaticFogThread,
		.staticInitializer = (intptr_t) clinit_mindustry_game_FogControl$StaticFogThread,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_FogControl$StaticFogThread,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_FogControl,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_FogControl$StaticFogThread = registerClass(&class_mindustry_game_FogControl$StaticFogThread);

}

