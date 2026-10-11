#include "mindustry/async/AsyncCore.h"
#include "mindustry/async/AsyncProcess.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/async/AvoidanceProcess.h"
#include "arc/Events.h"
#include "java/util/concurrent/Future.h"
#include "mindustry/async/AsyncCore_invoke_java_util_concurrent_ThreadFactory_1.h"
#include "mindustry/async/AsyncCore_invoke_java_lang_Thread_UncaughtExceptionHandler_1.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "arc/struct/Seq.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "java/lang/Throwable.h"
#include "mindustry/async/AsyncCore_invoke_arc_func_Cons_2.h"
#include "mindustry/async/AsyncCore_invoke_arc_func_Cons_3.h"
#include "mindustry/async/AsyncCore_invoke_java_lang_Runnable_1.h"
#include "java/lang/Thread.h"
#include "mindustry/async/PhysicsProcess.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/Iterator.h"
#include "mindustry/async/AsyncCore.h"
#include "java/util/concurrent/Executors.h"
#include "java/lang/Thread_UncaughtExceptionHandler.h"
#include "java/lang/Object.h"
#include "arc/util/Threads.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_async_AsyncCore(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_async_AsyncCore *) object;
	if (self->F_processes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_processes)->clazz)->markFunction)((jobject) self->F_processes, mark, depth + 1);
	if (self->F_futures)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_futures)->clazz)->markFunction)((jobject) self->F_futures, mark, depth + 1);
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
}

void clinit_mindustry_async_AsyncCore(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_async_AsyncCore(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncCore:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_async_AsyncCore(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_async_AsyncProcess, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_async_PhysicsProcess(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_async_PhysicsProcess);
	init_mindustry_async_PhysicsProcess(ctx, sp[2].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_unitPhysics = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_async_AvoidanceProcess(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_async_AvoidanceProcess);
	init_mindustry_async_AvoidanceProcess(ctx, sp[2].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_avoidance = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_async_AsyncCore *) NULL_CHECK(sp[0].o))->F_processes = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_async_AsyncCore *) NULL_CHECK(sp[0].o))->F_futures = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_async_AsyncCore_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_async_AsyncCore_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_async_AsyncCore_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_async_AsyncCore_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_async_AsyncCore_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_async_AsyncCore_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_AsyncCore_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncCore:begin", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPlaying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPlaying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_processes;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_async_AsyncProcess, sp[0].o));
	LINE_NUMBER(44);
	((func_mindustry_async_AsyncProcess_begin) resolveInterfaceMethod(ctx, &class_mindustry_async_AsyncProcess, INDEX_mindustry_async_AsyncProcess_begin, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(45);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_futures;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_executor;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_processes;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size;
	{ /* InvokeDynamic */
		clinit_mindustry_async_AsyncCore_invoke_java_util_concurrent_ThreadFactory_1(ctx);
		auto proxy = (mindustry_async_AsyncCore_invoke_java_util_concurrent_ThreadFactory_1 *) gcAlloc(ctx, &class_mindustry_async_AsyncCore_invoke_java_util_concurrent_ThreadFactory_1);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_java_util_concurrent_Executors_newFixedThreadPool_int_java_util_concurrent_ThreadFactory_R_java_util_concurrent_ExecutorService(ctx, temp0, sp[1].o);
	((mindustry_async_AsyncCore *) NULL_CHECK(sp[0].o))->F_executor = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_processes;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_async_AsyncProcess, sp[0].o));
	LINE_NUMBER(61);
	jint temp0 = (jint)((func_mindustry_async_AsyncProcess_shouldProcess_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_async_AsyncProcess, INDEX_mindustry_async_AsyncProcess_shouldProcess_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_futures;
	sp[1].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_async_AsyncCore_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_async_AsyncCore_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_async_AsyncCore_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	LINE_NUMBER(64);
	goto label_10;
label_1:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_async_AsyncCore_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncCore:end", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPlaying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPlaying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(70);
	((func_mindustry_async_AsyncCore_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_async_AsyncCore_complete])(ctx, (frame[0].o));
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_processes;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_async_AsyncProcess, sp[0].o));
	LINE_NUMBER(74);
	((func_mindustry_async_AsyncProcess_end) resolveInterfaceMethod(ctx, &class_mindustry_async_AsyncProcess, INDEX_mindustry_async_AsyncProcess_end, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(75);
	goto label_4;
	}
label_1:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_async_AsyncCore_complete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncCore:complete", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_futures;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(86);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(84);
	frame[3].o = sp[0].o;
	LINE_NUMBER(85);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(87);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_futures;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_async_AsyncCore_lambda$begin$0_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncCore:lambda$begin$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_async_AsyncCore(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(52);
	clinit_java_lang_Thread(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"AsyncLogic-Thread"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(53);
	((func_java_lang_Thread_setDaemon_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Thread_setDaemon_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(54);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_async_AsyncCore_invoke_java_lang_Thread$UncaughtExceptionHandler_1(ctx);
		auto proxy = (mindustry_async_AsyncCore_invoke_java_lang_Thread$UncaughtExceptionHandler_1 *) gcAlloc(ctx, &class_mindustry_async_AsyncCore_invoke_java_lang_Thread$UncaughtExceptionHandler_1);
		sp[1].o = (jobject) proxy;
	}
	((func_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_async_AsyncCore_lambda$begin$1_java_lang_Thread_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncCore:lambda$begin$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_async_AsyncCore(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(54);
	SM_arc_util_Threads_throwAppException_java_lang_Throwable(ctx, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_AsyncCore_lambda$new$1_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncCore:lambda$new$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	((func_mindustry_async_AsyncCore_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_async_AsyncCore_complete])(ctx, (frame[0].o));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_processes;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_async_AsyncProcess, sp[0].o));
	LINE_NUMBER(35);
	((func_mindustry_async_AsyncProcess_reset) resolveInterfaceMethod(ctx, &class_mindustry_async_AsyncProcess, INDEX_mindustry_async_AsyncProcess_reset, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(36);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_async_AsyncCore_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncCore:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	((func_mindustry_async_AsyncCore_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_async_AsyncCore_complete])(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_async_AsyncCore *) NULL_CHECK((frame[0].o)))->F_processes;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_async_AsyncProcess, sp[0].o));
	LINE_NUMBER(28);
	((func_mindustry_async_AsyncProcess_init) resolveInterfaceMethod(ctx, &class_mindustry_async_AsyncProcess, INDEX_mindustry_async_AsyncProcess_init, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(29);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_async_AsyncCore[] {
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
	(void *) M_mindustry_async_AsyncCore_begin,
	(void *) M_mindustry_async_AsyncCore_end,
	(void *) M_mindustry_async_AsyncCore_complete,
	(void *) M_mindustry_async_AsyncCore_lambda$new$1_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_async_AsyncCore_lambda$new$0_mindustry_game_EventType$WorldLoadEvent,
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
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "complete", "()V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
};

static FieldMetadata fields[] {
	{ "processes", &class_arc_struct_Seq, offsetof(mindustry_async_AsyncCore, F_processes), "Larc/struct/Seq;", 17 },
	{ "futures", &class_arc_struct_Seq, offsetof(mindustry_async_AsyncCore, F_futures), "Larc/struct/Seq;", 18 },
	{ "executor", &class_java_util_concurrent_ExecutorService, offsetof(mindustry_async_AsyncCore, F_executor), "Ljava/util/concurrent/ExecutorService;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_async_AsyncCore, 0, "()V", 1 },
	{ "begin", (intptr_t) M_mindustry_async_AsyncCore_begin, VTABLE_mindustry_async_AsyncCore_begin, "()V", 1 },
	{ "end", (intptr_t) M_mindustry_async_AsyncCore_end, VTABLE_mindustry_async_AsyncCore_end, "()V", 1 },
	{ "complete", (intptr_t) M_mindustry_async_AsyncCore_complete, VTABLE_mindustry_async_AsyncCore_complete, "()V", 2 },
	{ "lambda$begin$0", (intptr_t) SM_mindustry_async_AsyncCore_lambda$begin$0_java_lang_Runnable_R_java_lang_Thread, 0, "(Ljava/lang/Runnable;)Ljava/lang/Thread;", 4106 },
	{ "lambda$begin$1", (intptr_t) SM_mindustry_async_AsyncCore_lambda$begin$1_java_lang_Thread_java_lang_Throwable, 0, "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", 4106 },
	{ "lambda$new$1", (intptr_t) M_mindustry_async_AsyncCore_lambda$new$1_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_async_AsyncCore_lambda$new$1_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_async_AsyncCore_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_async_AsyncCore_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
};

Class class_mindustry_async_AsyncCore{
		.nativeName = (intptr_t) "mindustry/async/AsyncCore",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_async_AsyncCore),
		.classVtable = (intptr_t) vtable_mindustry_async_AsyncCore,
		.staticInitializer = (intptr_t) clinit_mindustry_async_AsyncCore,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_async_AsyncCore,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_async_AsyncCore = registerClass(&class_mindustry_async_AsyncCore);

}
