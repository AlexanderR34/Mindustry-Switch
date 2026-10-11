#include "java/util/concurrent/CompletionStage.h"
#include "java/util/concurrent/CompletionStage.h"
#include "java/lang/Object.h"
#include "java/util/function/Function.h"
#include "java/util/function/BiConsumer.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/function/Consumer.h"
#include "java/util/concurrent/Executor.h"
#include "java/lang/Runnable.h"
#include "java/util/function/BiFunction.h"

extern "C" {


void mark_java_util_concurrent_CompletionStage(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_CompletionStage *) object;
}

void clinit_java_util_concurrent_CompletionStage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_concurrent_CompletionStage[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "thenApply", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenApplyAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenApplyAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAccept", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptAsync", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptAsync", "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenRun", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenRunAsync", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenRunAsync", "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenCombine", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "applyToEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "acceptEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterEither", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenCompose", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenComposeAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenComposeAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "handle", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;" },
	{ "handleAsync", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;" },
	{ "handleAsync", "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "whenComplete", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "whenCompleteAsync", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "whenCompleteAsync", "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "exceptionally", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "toCompletableFuture", "()Ljava/util/concurrent/CompletableFuture;" },
};

static MethodMetadata methods[] {
	{ "thenApply", 0, INDEX_java_util_concurrent_CompletionStage_thenApply_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenApplyAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenApplyAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenAccept", 0, INDEX_java_util_concurrent_CompletionStage_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenAcceptAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenAcceptAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenRun", 0, INDEX_java_util_concurrent_CompletionStage_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenRunAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenRunAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenCombine", 0, INDEX_java_util_concurrent_CompletionStage_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenCombineAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenCombineAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenAcceptBoth", 0, INDEX_java_util_concurrent_CompletionStage_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenAcceptBothAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenAcceptBothAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "runAfterBoth", 0, INDEX_java_util_concurrent_CompletionStage_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "runAfterBothAsync", 0, INDEX_java_util_concurrent_CompletionStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "runAfterBothAsync", 0, INDEX_java_util_concurrent_CompletionStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "applyToEither", 0, INDEX_java_util_concurrent_CompletionStage_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "applyToEitherAsync", 0, INDEX_java_util_concurrent_CompletionStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "applyToEitherAsync", 0, INDEX_java_util_concurrent_CompletionStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "acceptEither", 0, INDEX_java_util_concurrent_CompletionStage_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "acceptEitherAsync", 0, INDEX_java_util_concurrent_CompletionStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "acceptEitherAsync", 0, INDEX_java_util_concurrent_CompletionStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "runAfterEither", 0, INDEX_java_util_concurrent_CompletionStage_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "runAfterEitherAsync", 0, INDEX_java_util_concurrent_CompletionStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "runAfterEitherAsync", 0, INDEX_java_util_concurrent_CompletionStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenCompose", 0, INDEX_java_util_concurrent_CompletionStage_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenComposeAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "thenComposeAsync", 0, INDEX_java_util_concurrent_CompletionStage_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "handle", 0, INDEX_java_util_concurrent_CompletionStage_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "handleAsync", 0, INDEX_java_util_concurrent_CompletionStage_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "handleAsync", 0, INDEX_java_util_concurrent_CompletionStage_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "whenComplete", 0, INDEX_java_util_concurrent_CompletionStage_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "whenCompleteAsync", 0, INDEX_java_util_concurrent_CompletionStage_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "whenCompleteAsync", 0, INDEX_java_util_concurrent_CompletionStage_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "exceptionally", 0, INDEX_java_util_concurrent_CompletionStage_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 1025 },
	{ "toCompletableFuture", 0, INDEX_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, "()Ljava/util/concurrent/CompletableFuture;", 1025 },
};

Class class_java_util_concurrent_CompletionStage{
		.nativeName = (intptr_t) "java/util/concurrent/CompletionStage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletionStage),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletionStage,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletionStage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletionStage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletionStage = registerClass(&class_java_util_concurrent_CompletionStage);

}
