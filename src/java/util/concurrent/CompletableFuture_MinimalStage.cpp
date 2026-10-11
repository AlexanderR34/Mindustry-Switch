#include "java/util/concurrent/CompletableFuture_MinimalStage.h"
#include "java/util/concurrent/CompletionStage.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/function/Function.h"
#include "java/util/concurrent/CompletableFuture_MinimalStage.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/function/Consumer.h"
#include "java/util/concurrent/CompletableFuture_Completion.h"
#include "java/util/concurrent/Executor.h"
#include "java/util/concurrent/CompletableFuture_UniRelay.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "java/util/function/Supplier.h"
#include "java/util/function/BiConsumer.h"
#include "java/lang/Throwable.h"
#include "java/util/function/BiFunction.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$MinimalStage(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_CompletableFuture(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_CompletableFuture$MinimalStage *) object;
}

void clinit_java_util_concurrent_CompletableFuture$MinimalStage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_CompletableFuture(ctx);
}

void init_java_util_concurrent_CompletableFuture$MinimalStage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$MinimalStage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2850);
	init_java_util_concurrent_CompletableFuture(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_CompletableFuture$MinimalStage_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$MinimalStage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2851);
	init_java_util_concurrent_CompletableFuture_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_newIncompleteFuture_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:newIncompleteFuture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2853);
	clinit_java_util_concurrent_CompletableFuture$MinimalStage(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$MinimalStage);
	init_java_util_concurrent_CompletableFuture$MinimalStage(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2855);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(2857);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_getNow_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:getNow", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2859);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_join_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:join", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2861);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture$MinimalStage_complete_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:complete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2863);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture$MinimalStage_completeExceptionally_java_lang_Throwable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:completeExceptionally", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2865);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture$MinimalStage_cancel_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:cancel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2867);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture$MinimalStage_obtrudeValue_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:obtrudeValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2869);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture$MinimalStage_obtrudeException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:obtrudeException", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2871);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture$MinimalStage_isDone_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:isDone", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2873);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture$MinimalStage_isCancelled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:isCancelled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2875);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture$MinimalStage_isCompletedExceptionally_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:isCompletedExceptionally", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2877);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CompletableFuture$MinimalStage_getNumberOfDependents_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:getNumberOfDependents", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2879);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:completeAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2882);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_completeAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:completeAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2885);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_orTimeout_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:orTimeout", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(2888);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_completeOnTimeout_java_lang_Object_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:completeOnTimeout", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(2891);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:toCompletableFuture", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2894);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2895);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeRelay_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	init_java_util_concurrent_CompletableFuture_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2897);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	init_java_util_concurrent_CompletableFuture(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2898);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniRelay(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniRelay);
	init_java_util_concurrent_CompletableFuture$UniRelay_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture(ctx, sp[1].o, (frame[2].o), (frame[0].o));
	((func_java_util_concurrent_CompletableFuture$MinimalStage_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2899);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:exceptionally", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:whenCompleteAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:whenCompleteAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:whenComplete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:handleAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:handleAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:handle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenComposeAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenComposeAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenCompose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:runAfterEitherAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:runAfterEitherAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:runAfterEither", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:acceptEitherAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:acceptEitherAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:acceptEither", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:applyToEitherAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:applyToEitherAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:applyToEither", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:runAfterBothAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:runAfterBothAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:runAfterBoth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenAcceptBothAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenAcceptBothAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenAcceptBoth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenCombineAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenCombineAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenCombine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenRunAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenRunAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenRun", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenAcceptAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenAcceptAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenAccept", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenApplyAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenApplyAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$MinimalStage_thenApply_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$MinimalStage:thenApply", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2849);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$MinimalStage[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_CompletableFuture_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_cancel_boolean_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_isCancelled_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_isDone_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_get_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenApply_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_pushStack_java_util_concurrent_CompletableFuture$Completion,
	(void *) M_java_util_concurrent_CompletableFuture_completeNull_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_encodeValue_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_encodeOutcome_java_lang_Object_java_lang_Throwable_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_completeRelay_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_postComplete,
	(void *) M_java_util_concurrent_CompletableFuture_cleanStack,
	(void *) M_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion,
	(void *) M_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniApplyStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniApplyNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniAcceptStage_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniAcceptNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniRunNow_java_lang_Object_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniWhenComplete_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$UniWhenComplete_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_uniWhenCompleteStage_java_util_concurrent_Executor_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniHandle_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$UniHandle_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_uniHandleStage_java_util_concurrent_Executor_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniExceptionally_java_lang_Object_java_util_function_Function_java_util_concurrent_CompletableFuture$UniExceptionally_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_uniExceptionallyStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniAsMinimalStage_R_java_util_concurrent_CompletableFuture$MinimalStage,
	(void *) M_java_util_concurrent_CompletableFuture_uniComposeStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion,
	(void *) M_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_biApply_java_lang_Object_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$BiApply_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_biApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_biAccept_java_lang_Object_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$BiAccept_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_biAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_biRun_java_lang_Object_java_lang_Object_java_lang_Runnable_java_util_concurrent_CompletableFuture$BiRun_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_biRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion,
	(void *) M_java_util_concurrent_CompletableFuture_orApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_orAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_orRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_waitingGet_boolean_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_timedGet_long_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_join_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_getNow_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_complete_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_completeExceptionally_java_lang_Throwable_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_isCompletedExceptionally_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_obtrudeValue_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_obtrudeException_java_lang_Throwable,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_getNumberOfDependents_R_int,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_newIncompleteFuture_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor,
	(void *) M_java_util_concurrent_CompletableFuture_copy_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_minimalCompletionStage_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_completeAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_orTimeout_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture$MinimalStage_completeOnTimeout_java_lang_Object_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture,
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
	{ "cancel", "(Z)Z" },
	{ "isCancelled", "()Z" },
	{ "isDone", "()Z" },
	{ "get", "()Ljava/lang/Object;" },
	{ "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
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
	{ "internalComplete", "(Ljava/lang/Object;)Z" },
	{ "tryPushStack", "(Ljava/util/concurrent/CompletableFuture$Completion;)Z" },
	{ "pushStack", "(Ljava/util/concurrent/CompletableFuture$Completion;)V" },
	{ "completeNull", "()Z" },
	{ "encodeValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "completeValue", "(Ljava/lang/Object;)Z" },
	{ "completeThrowable", "(Ljava/lang/Throwable;)Z" },
	{ "completeThrowable", "(Ljava/lang/Throwable;Ljava/lang/Object;)Z" },
	{ "encodeOutcome", "(Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/lang/Object;" },
	{ "completeRelay", "(Ljava/lang/Object;)Z" },
	{ "postComplete", "()V" },
	{ "cleanStack", "()V" },
	{ "unipush", "(Ljava/util/concurrent/CompletableFuture$Completion;)V" },
	{ "postFire", "(Ljava/util/concurrent/CompletableFuture;I)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniApplyStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniApplyNow", "(Ljava/lang/Object;Ljava/util/concurrent/Executor;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniAcceptStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniAcceptNow", "(Ljava/lang/Object;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniRunStage", "(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniRunNow", "(Ljava/lang/Object;Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniWhenComplete", "(Ljava/lang/Object;Ljava/util/function/BiConsumer;Ljava/util/concurrent/CompletableFuture$UniWhenComplete;)Z" },
	{ "uniWhenCompleteStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniHandle", "(Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/concurrent/CompletableFuture$UniHandle;)Z" },
	{ "uniHandleStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniExceptionally", "(Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/concurrent/CompletableFuture$UniExceptionally;)Z" },
	{ "uniExceptionallyStage", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniAsMinimalStage", "()Ljava/util/concurrent/CompletableFuture$MinimalStage;" },
	{ "uniComposeStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "bipush", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture$BiCompletion;)V" },
	{ "postFire", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;I)Ljava/util/concurrent/CompletableFuture;" },
	{ "biApply", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/concurrent/CompletableFuture$BiApply;)Z" },
	{ "biApplyStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "biAccept", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiConsumer;Ljava/util/concurrent/CompletableFuture$BiAccept;)Z" },
	{ "biAcceptStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "biRun", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Runnable;Ljava/util/concurrent/CompletableFuture$BiRun;)Z" },
	{ "biRunStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "orpush", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture$BiCompletion;)V" },
	{ "orApplyStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "orAcceptStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "orRunStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "waitingGet", "(Z)Ljava/lang/Object;" },
	{ "timedGet", "(J)Ljava/lang/Object;" },
	{ "join", "()Ljava/lang/Object;" },
	{ "getNow", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "complete", "(Ljava/lang/Object;)Z" },
	{ "completeExceptionally", "(Ljava/lang/Throwable;)Z" },
	{ "thenApply", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenApplyAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenApplyAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAccept", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptAsync", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptAsync", "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenRun", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenRunAsync", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenRunAsync", "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenCombine", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "applyToEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "acceptEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterEither", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenCompose", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenComposeAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenComposeAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "whenComplete", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "whenCompleteAsync", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "whenCompleteAsync", "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "handle", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "handleAsync", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "handleAsync", "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "exceptionally", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "isCompletedExceptionally", "()Z" },
	{ "obtrudeValue", "(Ljava/lang/Object;)V" },
	{ "obtrudeException", "(Ljava/lang/Throwable;)V" },
	{ "getNumberOfDependents", "()I" },
	{ "newIncompleteFuture", "()Ljava/util/concurrent/CompletableFuture;" },
	{ "defaultExecutor", "()Ljava/util/concurrent/Executor;" },
	{ "copy", "()Ljava/util/concurrent/CompletableFuture;" },
	{ "minimalCompletionStage", "()Ljava/util/concurrent/CompletionStage;" },
	{ "completeAsync", "(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "completeAsync", "(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;" },
	{ "orTimeout", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;" },
	{ "completeOnTimeout", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$MinimalStage, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$MinimalStage_java_lang_Object, 0, "(Ljava/lang/Object;)V", 0 },
	{ "newIncompleteFuture", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_newIncompleteFuture_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_newIncompleteFuture_R_java_util_concurrent_CompletableFuture, "()Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "get", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_get_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_get_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 1 },
	{ "getNow", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_getNow_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_getNow_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "join", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_join_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_join_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "complete", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_complete_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_complete_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "completeExceptionally", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_completeExceptionally_java_lang_Throwable_R_boolean, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_completeExceptionally_java_lang_Throwable_R_boolean, "(Ljava/lang/Throwable;)Z", 1 },
	{ "cancel", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_cancel_boolean_R_boolean, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_cancel_boolean_R_boolean, "(Z)Z", 1 },
	{ "obtrudeValue", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_obtrudeValue_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_obtrudeValue_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "obtrudeException", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_obtrudeException_java_lang_Throwable, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_obtrudeException_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 1 },
	{ "isDone", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_isDone_R_boolean, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_isDone_R_boolean, "()Z", 1 },
	{ "isCancelled", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_isCancelled_R_boolean, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_isCancelled_R_boolean, "()Z", 1 },
	{ "isCompletedExceptionally", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_isCompletedExceptionally_R_boolean, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_isCompletedExceptionally_R_boolean, "()Z", 1 },
	{ "getNumberOfDependents", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_getNumberOfDependents_R_int, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_getNumberOfDependents_R_int, "()I", 1 },
	{ "completeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "completeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_completeAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_completeAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "orTimeout", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_orTimeout_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_orTimeout_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture, "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "completeOnTimeout", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_completeOnTimeout_java_lang_Object_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_completeOnTimeout_java_lang_Object_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture, "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "toCompletableFuture", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, "()Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "exceptionally", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "whenCompleteAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "whenCompleteAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "whenComplete", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "handleAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "handleAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "handle", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenComposeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenComposeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenCompose", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterEither", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "acceptEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "acceptEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "acceptEither", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "applyToEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "applyToEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "applyToEither", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterBoth", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptBoth", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenCombineAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenCombineAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenCombine", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenRunAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenRunAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenRun", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAccept", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenApplyAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenApplyAsync", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenApply", (intptr_t) M_java_util_concurrent_CompletableFuture$MinimalStage_thenApply_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture$MinimalStage_thenApply_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
};

Class class_java_util_concurrent_CompletableFuture$MinimalStage{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$MinimalStage",
		.parentClass = (intptr_t) &class_java_util_concurrent_CompletableFuture,
		.size = sizeof(java_util_concurrent_CompletableFuture$MinimalStage),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$MinimalStage,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$MinimalStage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$MinimalStage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CompletableFuture,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 58,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 149,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture$MinimalStage = registerClass(&class_java_util_concurrent_CompletableFuture$MinimalStage);

}

