#include "java/util/concurrent/ForkJoinPool_WorkQueue.h"
#include "java/util/concurrent/ForkJoinWorkerThread.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ForkJoinPool_WorkQueue.h"
#include "java/lang/String.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/util/concurrent/CountedCompleter.h"
#include "java/lang/Thread_State.h"
#include "java/util/concurrent/ForkJoinPool.h"
#include "java/util/concurrent/RejectedExecutionException.h"
#include "java/lang/Thread.h"

extern "C" {

jint SF_java_util_concurrent_ForkJoinPool$WorkQueue_INITIAL_QUEUE_CAPACITY;
jint SF_java_util_concurrent_ForkJoinPool$WorkQueue_MAXIMUM_QUEUE_CAPACITY;

void mark_java_util_concurrent_ForkJoinPool$WorkQueue(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_ForkJoinPool$WorkQueue *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_pool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pool)->clazz)->markFunction)((jobject) self->F_pool, mark, depth + 1);
	if (self->F_owner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_owner)->clazz)->markFunction)((jobject) self->F_owner, mark, depth + 1);
}

void clinit_java_util_concurrent_ForkJoinPool$WorkQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_ForkJoinPool$WorkQueue_INITIAL_QUEUE_CAPACITY = jint(8192);
	SF_java_util_concurrent_ForkJoinPool$WorkQueue_MAXIMUM_QUEUE_CAPACITY = jint(67108864);
}

void init_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinPool_java_util_concurrent_ForkJoinWorkerThread(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool$WorkQueue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(729);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(730);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_pool = (jref) (frame[1].o);
	LINE_NUMBER(731);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (frame[2].o);
	LINE_NUMBER(733);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = 4096;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[1].o))->F_top = temp0;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_base = temp0;
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool$WorkQueue_getPoolIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:getPoolIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(740);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_id) & (jint(65535)))) >> (jint(1))));
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:queueSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(747);
	frame[1].i = (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base) - ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top));
	LINE_NUMBER(748);
	if ((frame[1].i) < 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ILOAD(1);
	INST_INEG();
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool$WorkQueue_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:isEmpty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(758);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base;
	frame[4].i = temp0;
	jint temp3 = temp0 - ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top);
	frame[2].i = temp3;
	if (temp3 >= 0) goto label_3;
	}
	{
	if ((frame[2].i) != (jint(-1))) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	frame[3].i = temp0;
	if (temp0 == 0) goto label_3;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[3].i) - (jint(1))) & (frame[4].i)))) != nullptr) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_7;
label_4:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool$WorkQueue_push_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:push", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(772);
	frame[2].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top);
	LINE_NUMBER(773);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[3].o)))->length;
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(774);
	frame[6].i = (((frame[4].i) - (jint(1))) & (frame[2].i));
	LINE_NUMBER(775);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_pool;
	frame[7].o = sp[0].o;
	LINE_NUMBER(776);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top = ((frame[2].i) + (jint(1)));
	LINE_NUMBER(777);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)) = (frame[1].o);
	LINE_NUMBER(779);
	jint temp0 = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base) - (frame[2].i);
	frame[5].i = temp0;
	if (temp0 != 0) goto label_11;
	}
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_11;
	{
	LINE_NUMBER(781);
	((func_java_util_concurrent_ForkJoinPool_signalWork) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_signalWork])(ctx, (frame[7].o));
	goto label_3;
	}
label_11:;
	{
	LINE_NUMBER(783);
	if (((frame[5].i) + (frame[4].i)) != (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(784);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(786);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:growArray", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[1].o = sp[0].o;
	LINE_NUMBER(795);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(796);
	if ((frame[2].i) <= 0) goto label_5;
	}
	{
	jint temp0 = (frame[2].i) << (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_SIPUSH(8192);
label_6:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(797);
	if ((frame[3].i) < (8192)) goto label_8;
	}
	{
	if ((frame[3].i) <= (jint(67108864))) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(798);
	clinit_java_util_concurrent_RejectedExecutionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_RejectedExecutionException);
	init_java_util_concurrent_RejectedExecutionException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue capacity exceeded"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(800);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_util_concurrent_ForkJoinTask, (frame[3].i));
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_array = (jref) sp[1].o;
	frame[7].o = sp[1].o;
	LINE_NUMBER(801);
	if ((frame[1].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = (frame[2].i) - (jint(1));
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_11;
	}
	{
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top;
	frame[5].i = temp0;
	jint temp3 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base;
	frame[6].i = temp3;
	if ((temp0 - temp3) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(803);
	frame[8].i = ((frame[3].i) - (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(805);
	frame[9].i = ((frame[6].i) & (frame[4].i));
	LINE_NUMBER(806);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[9].i)));
	LINE_NUMBER(807);
	if ((frame[10].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(808);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[9].i)) = (jobject(nullptr));
	LINE_NUMBER(809);
	ARRAY_ACCESS(jobject, (frame[7].o), ((frame[6].i) & (frame[8].i))) = (frame[10].o);
	}
label_19:;
	{
	LINE_NUMBER(811);
	INST_IINC(6, 1);
	if ((frame[6].i) != (frame[5].i)) goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(814);
	popStackFrame(ctx, self);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool$WorkQueue_pop_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:pop", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(822);
	frame[1].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base);
	frame[2].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top);
	LINE_NUMBER(823);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if ((frame[1].i) == (frame[2].i)) goto label_4;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[5].o)))->length;
	frame[3].i = temp0;
	if (temp0 <= 0) goto label_4;
	}
	{
	LINE_NUMBER(824);
	jint temp0 = (frame[3].i) - (jint(1));
	INST_IINC(2, -1);
	frame[6].i = (temp0 & (frame[2].i));
	LINE_NUMBER(825);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(826);
	if ((frame[7].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(827);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)) = (jobject(nullptr));
	LINE_NUMBER(828);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top = (frame[2].i);
	LINE_NUMBER(830);
	popStackFrame(ctx, self);
	return (frame[7].o);
	}
label_4:;
	{
	LINE_NUMBER(833);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:poll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(841);
	frame[1].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base);
	frame[2].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top);
	LINE_NUMBER(842);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	jint temp0 = (frame[1].i) - (frame[2].i);
	frame[3].i = temp0;
	if (temp0 >= 0) goto label_4;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[5].o)))->length;
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_4;
	}
	{
	LINE_NUMBER(844);
	frame[6].i = (((frame[4].i) - (jint(1))) & (frame[1].i));
	LINE_NUMBER(845);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(846);
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	if (temp0 != ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base)) goto label_10;
	}
	{
	LINE_NUMBER(847);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(848);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)) = (jobject(nullptr));
	LINE_NUMBER(849);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base = (frame[1].i);
	LINE_NUMBER(850);
	popStackFrame(ctx, self);
	return (frame[7].o);
	}
label_12:;
	{
	LINE_NUMBER(852);
	if ((frame[3].i) != (jint(-1))) goto label_10;
	}
	LINE_NUMBER(853);
	goto label_4;
label_10:;
	LINE_NUMBER(858);
	goto label_0;
label_4:;
	{
	LINE_NUMBER(859);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool$WorkQueue_nextLocalTask_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:nextLocalTask", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(866);
	if ((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_id) & (jint(65536))) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[0].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_pop_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_pop_R_java_util_concurrent_ForkJoinTask])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool$WorkQueue_peek_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:peek", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	frame[1].i = temp0;
	if (temp0 <= 0) goto label_2;
	}
	{
	LINE_NUMBER(875);
	sp[0].o = frame[2].o;
	jint temp0 = (frame[1].i) - (jint(1));
	LINE_NUMBER(876);
	sp[1].i = temp0;
	sp += 2;
	if ((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_id) & (jint(65536))) == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base;
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	jint temp0 = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 3;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (sp[1].i & sp[2].i));
	sp += 1;
	goto label_8;
	}
label_2:;
	INST_ACONST_NULL();
label_8:;
	LINE_NUMBER(874);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool$WorkQueue_tryUnpush_java_util_concurrent_ForkJoinTask_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:tryUnpush", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(883);
	frame[2].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base);
	frame[3].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top);
	LINE_NUMBER(884);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if ((frame[2].i) == (frame[3].i)) goto label_4;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[5].o)))->length;
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_4;
	}
	{
	LINE_NUMBER(885);
	jint temp0 = (frame[4].i) - (jint(1));
	INST_IINC(3, -1);
	frame[6].i = (temp0 & (frame[3].i));
	LINE_NUMBER(886);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(887);
	if ((frame[7].o) != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(888);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)) = (jobject(nullptr));
	LINE_NUMBER(889);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top = (frame[3].i);
	LINE_NUMBER(891);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(894);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool$WorkQueue_cancelAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:cancelAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(902);
	SM_java_util_concurrent_ForkJoinTask_cancelIgnoringExceptions_java_util_concurrent_ForkJoinTask(ctx, (frame[1].o));
	goto label_0;
	}
label_2:;
	LINE_NUMBER(903);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool$WorkQueue_localPopAndExec_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:localPopAndExec", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
label_0:;
	{
	LINE_NUMBER(914);
	frame[2].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base);
	frame[3].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top);
	LINE_NUMBER(915);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if ((frame[2].i) == (frame[3].i)) goto label_4;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[5].o)))->length;
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_4;
	}
	{
	LINE_NUMBER(916);
	jint temp0 = (frame[4].i) - (jint(1));
	INST_IINC(3, -1);
	frame[6].i = (temp0 & (frame[3].i));
	LINE_NUMBER(917);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(918);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)) = (jobject(nullptr));
	LINE_NUMBER(919);
	if ((frame[7].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(920);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top = (frame[3].i);
	LINE_NUMBER(922);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[7].o));
	LINE_NUMBER(923);
	if ((frame[1].i) == 0) goto label_13;
	}
	{
	INST_IINC(1, -1);
	if ((frame[1].i) != 0) goto label_13;
	}
	LINE_NUMBER(924);
	goto label_4;
label_13:;
	LINE_NUMBER(931);
	goto label_0;
label_4:;
	LINE_NUMBER(932);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool$WorkQueue_localPollAndExec_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:localPollAndExec", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(940);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(941);
	frame[3].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base);
	frame[4].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top);
	LINE_NUMBER(942);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[7].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	jint temp0 = (frame[3].i) - (frame[4].i);
	frame[5].i = temp0;
	if (temp0 >= 0) goto label_5;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[7].o)))->length;
	frame[6].i = temp0;
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(944);
	jint temp0 = (frame[6].i) - (jint(1));
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = (temp0 & temp1);
	LINE_NUMBER(945);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i)));
	LINE_NUMBER(946);
	ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i)) = (jobject(nullptr));
	LINE_NUMBER(947);
	if ((frame[9].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(948);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base = (frame[3].i);
	LINE_NUMBER(949);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[9].o));
	LINE_NUMBER(950);
	if ((frame[1].i) == 0) goto label_16;
	}
	{
	INST_IINC(2, 1);
	if ((frame[2].i) != (frame[1].i)) goto label_16;
	}
	LINE_NUMBER(951);
	goto label_5;
label_12:;
	{
	LINE_NUMBER(953);
	if ((frame[5].i) != (jint(-1))) goto label_18;
	}
	LINE_NUMBER(954);
	goto label_5;
label_18:;
	{
	LINE_NUMBER(956);
	frame[2].i = (jint(0));
	}
label_16:;
	LINE_NUMBER(960);
	goto label_1;
label_5:;
	LINE_NUMBER(961);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool$WorkQueue_tryRemoveAndExec_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:tryRemoveAndExec", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(968);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base;
	jint temp1 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top;
	frame[3].i = temp1;
	if ((temp0 - temp1) >= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_2;
	}
	{
	LINE_NUMBER(970);
	frame[5].i = ((frame[4].i) - (jint(1)));
	frame[6].i = ((frame[3].i) - (jint(1)));
	frame[7].i = (frame[6].i);
	}
label_8:;
	{
	LINE_NUMBER(971);
	frame[8].i = ((frame[7].i) & (frame[5].i));
	LINE_NUMBER(972);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(973);
	if ((frame[9].o) != nullptr) goto label_11;
	}
	LINE_NUMBER(974);
	goto label_2;
label_11:;
	{
	LINE_NUMBER(975);
	if ((frame[9].o) != (frame[1].o)) goto label_13;
	}
	{
	LINE_NUMBER(976);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(977);
	if ((frame[10].o) != (frame[9].o)) goto label_2;
	}
	{
	LINE_NUMBER(978);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[8].i)) = (jobject(nullptr));
	LINE_NUMBER(979);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top = (frame[6].i);
	LINE_NUMBER(980);
	frame[11].i = (frame[7].i);
	}
label_19:;
	{
	if ((frame[11].i) == (frame[6].i)) goto label_20;
	}
	{
	LINE_NUMBER(982);
	frame[13].i = (((frame[11].i) + (jint(1))) & (frame[5].i));
	LINE_NUMBER(983);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[13].i)));
	LINE_NUMBER(984);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[13].i)) = (jobject(nullptr));
	LINE_NUMBER(985);
	frame[14].i = ((frame[11].i) & (frame[5].i));
	LINE_NUMBER(986);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[14].i)) = (frame[12].o);
	LINE_NUMBER(980);
	INST_IINC(11, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(989);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[9].o));
	goto label_2;
	}
label_13:;
	{
	LINE_NUMBER(970);
	INST_IINC(7, -1);
	goto label_8;
	}
label_2:;
	LINE_NUMBER(995);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool$WorkQueue_localHelpCC_java_util_concurrent_CountedCompleter_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:localHelpCC", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1006);
	frame[3].i = (jint(0));
	LINE_NUMBER(1007);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[1].o)))->F_status;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1009);
	frame[4].i = (jint(0));
	LINE_NUMBER(1010);
	frame[5].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base);
	frame[6].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top);
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[8].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if ((frame[5].i) == (frame[6].i)) goto label_8;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[8].o)))->length;
	frame[7].i = temp0;
	if (temp0 <= 0) goto label_8;
	}
	{
	LINE_NUMBER(1012);
	frame[9].i = (((frame[7].i) - (jint(1))) & ((frame[6].i) - (jint(1))));
	LINE_NUMBER(1013);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i)));
	LINE_NUMBER(1014);
	if ((isInstance(ctx, (frame[10].o), &class_java_util_concurrent_CountedCompleter)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1015);
	frame[11].o = (checkCast(ctx, &class_java_util_concurrent_CountedCompleter, (frame[10].o)));
	LINE_NUMBER(1016);
	frame[12].o = (frame[11].o);
	}
label_15:;
	{
	LINE_NUMBER(1017);
	if ((frame[12].o) == (frame[1].o)) goto label_16;
	}
	{
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[12].o)))->F_completer;
	frame[12].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_15;
	}
	LINE_NUMBER(1019);
	goto label_8;
label_16:;
	{
	LINE_NUMBER(1022);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i))) != (frame[11].o)) goto label_8;
	}
	{
	LINE_NUMBER(1023);
	ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i)) = (jobject(nullptr));
	LINE_NUMBER(1024);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top = ((frame[6].i) - (jint(1)));
	LINE_NUMBER(1026);
	jint temp0 = (jint)((func_java_util_concurrent_CountedCompleter_doExec_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_doExec_R_int])(ctx, (frame[11].o));
	LINE_NUMBER(1027);
	frame[4].i = (jint(1));
	goto label_8;
	}
label_8:;
	{
	LINE_NUMBER(1034);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[1].o)))->F_status;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_2;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_2;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_23;
	{
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_23;
	}
	LINE_NUMBER(1036);
	goto label_2;
label_23:;
	LINE_NUMBER(1037);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(1039);
	popStackFrame(ctx, self);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool$WorkQueue_tryLockSharedQueue_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:tryLockSharedQueue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(1048);
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_phase) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1049);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1050);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_phase = (jint(1));
	LINE_NUMBER(1051);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool$WorkQueue_trySharedUnpush_java_util_concurrent_ForkJoinTask_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:trySharedUnpush", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1058);
	frame[2].i = (jint(0));
	LINE_NUMBER(1059);
	frame[3].i = (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top) - (jint(1)));
	LINE_NUMBER(1060);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[5].o)))->length;
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_4;
	}
	{
	LINE_NUMBER(1061);
	frame[6].i = (((frame[4].i) - (jint(1))) & (frame[3].i));
	LINE_NUMBER(1062);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(1063);
	if ((frame[7].o) != (frame[1].o)) goto label_4;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_phase) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1064);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_phase = (jint(1));
	LINE_NUMBER(1065);
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top) != ((frame[3].i) + (jint(1)))) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	if (sp[0].o != (frame[5].o)) goto label_11;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))) != (frame[1].o)) goto label_11;
	}
	{
	LINE_NUMBER(1066);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)) = (jobject(nullptr));
	LINE_NUMBER(1067);
	frame[2].i = (jint(1));
	LINE_NUMBER(1068);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top = (frame[3].i);
	}
label_11:;
	{
	LINE_NUMBER(1071);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_phase = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1074);
	popStackFrame(ctx, self);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool$WorkQueue_sharedHelpCC_java_util_concurrent_CountedCompleter_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:sharedHelpCC", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1081);
	frame[3].i = (jint(0));
	LINE_NUMBER(1082);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[1].o)))->F_status;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1084);
	frame[4].i = (jint(0));
	LINE_NUMBER(1085);
	frame[5].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_base);
	frame[6].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top);
	LINE_NUMBER(1086);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	frame[8].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if ((frame[5].i) == (frame[6].i)) goto label_8;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[8].o)))->length;
	frame[7].i = temp0;
	if (temp0 <= 0) goto label_8;
	}
	{
	LINE_NUMBER(1087);
	frame[9].i = (((frame[7].i) - (jint(1))) & ((frame[6].i) - (jint(1))));
	LINE_NUMBER(1088);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i)));
	LINE_NUMBER(1089);
	if ((isInstance(ctx, (frame[10].o), &class_java_util_concurrent_CountedCompleter)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1090);
	frame[11].o = (checkCast(ctx, &class_java_util_concurrent_CountedCompleter, (frame[10].o)));
	LINE_NUMBER(1091);
	frame[12].o = (frame[11].o);
	}
label_15:;
	{
	LINE_NUMBER(1092);
	if ((frame[12].o) == (frame[1].o)) goto label_16;
	}
	{
	LINE_NUMBER(1093);
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[12].o)))->F_completer;
	frame[12].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_15;
	}
	LINE_NUMBER(1094);
	goto label_8;
label_16:;
	{
	LINE_NUMBER(1097);
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_phase) != 0) goto label_8;
	}
	{
	LINE_NUMBER(1098);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_phase = (jint(1));
	LINE_NUMBER(1099);
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top) != (frame[6].i)) goto label_21;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_array;
	if (sp[0].o != (frame[8].o)) goto label_21;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i))) != (frame[11].o)) goto label_21;
	}
	{
	LINE_NUMBER(1100);
	ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i)) = (jobject(nullptr));
	LINE_NUMBER(1101);
	frame[4].i = (jint(1));
	LINE_NUMBER(1102);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_top = ((frame[6].i) - (jint(1)));
	}
label_21:;
	{
	LINE_NUMBER(1104);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_phase = (jint(0));
	LINE_NUMBER(1105);
	if ((frame[4].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1106);
	jint temp0 = (jint)((func_java_util_concurrent_CountedCompleter_doExec_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_doExec_R_int])(ctx, (frame[11].o));
	goto label_8;
	}
label_8:;
	{
	LINE_NUMBER(1113);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[1].o)))->F_status;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_2;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_2;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_27;
	{
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_27;
	}
	LINE_NUMBER(1115);
	goto label_2;
label_27:;
	LINE_NUMBER(1116);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(1118);
	popStackFrame(ctx, self);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool$WorkQueue_isApparentlyUnblocked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$WorkQueue:isApparentlyUnblocked", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[0].o)))->F_owner;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(1127);
	sp[0].o = (jobject)((func_java_lang_Thread_getState_R_java_lang_Thread$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getState_R_java_lang_Thread$State])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_BLOCKED;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_WAITING;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_TIMED_WAITING;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	goto label_5;
label_2:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(1126);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ForkJoinPool$WorkQueue[] {
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
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_getPoolIndex_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_isEmpty_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_push_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_pop_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_nextLocalTask_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_peek_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_tryUnpush_java_util_concurrent_ForkJoinTask_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_cancelAll,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_localPopAndExec_int,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_localPollAndExec_int,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_tryRemoveAndExec_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_localHelpCC_java_util_concurrent_CountedCompleter_int_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_tryLockSharedQueue_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_trySharedUnpush_java_util_concurrent_ForkJoinTask_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_sharedHelpCC_java_util_concurrent_CountedCompleter_int_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool$WorkQueue_isApparentlyUnblocked_R_boolean,
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
	{ "getPoolIndex", "()I" },
	{ "queueSize", "()I" },
	{ "isEmpty", "()Z" },
	{ "push", "(Ljava/util/concurrent/ForkJoinTask;)V" },
	{ "growArray", "()[Ljava/util/concurrent/ForkJoinTask;" },
	{ "pop", "()Ljava/util/concurrent/ForkJoinTask;" },
	{ "poll", "()Ljava/util/concurrent/ForkJoinTask;" },
	{ "nextLocalTask", "()Ljava/util/concurrent/ForkJoinTask;" },
	{ "peek", "()Ljava/util/concurrent/ForkJoinTask;" },
	{ "tryUnpush", "(Ljava/util/concurrent/ForkJoinTask;)Z" },
	{ "cancelAll", "()V" },
	{ "localPopAndExec", "(I)V" },
	{ "localPollAndExec", "(I)V" },
	{ "tryRemoveAndExec", "(Ljava/util/concurrent/ForkJoinTask;)V" },
	{ "localHelpCC", "(Ljava/util/concurrent/CountedCompleter;I)I" },
	{ "tryLockSharedQueue", "()Z" },
	{ "trySharedUnpush", "(Ljava/util/concurrent/ForkJoinTask;)Z" },
	{ "sharedHelpCC", "(Ljava/util/concurrent/CountedCompleter;I)I" },
	{ "isApparentlyUnblocked", "()Z" },
};

static FieldMetadata fields[] {
	{ "INITIAL_QUEUE_CAPACITY", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool$WorkQueue_INITIAL_QUEUE_CAPACITY, "I", 24 },
	{ "MAXIMUM_QUEUE_CAPACITY", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool$WorkQueue_MAXIMUM_QUEUE_CAPACITY, "I", 24 },
	{ "phase", &class_int, offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_phase), "I", 64 },
	{ "stackPred", &class_int, offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_stackPred), "I", 0 },
	{ "nsteals", &class_int, offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_nsteals), "I", 0 },
	{ "id", &class_int, offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_id), "I", 0 },
	{ "source", &class_int, offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_source), "I", 64 },
	{ "base", &class_int, offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_base), "I", 64 },
	{ "top", &class_int, offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_top), "I", 0 },
	{ "array", getArrayClass(&class_java_util_concurrent_ForkJoinTask, 1), offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_array), "[Ljava/util/concurrent/ForkJoinTask;", 0 },
	{ "pool", &class_java_util_concurrent_ForkJoinPool, offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_pool), "Ljava/util/concurrent/ForkJoinPool;", 16 },
	{ "owner", &class_java_util_concurrent_ForkJoinWorkerThread, offsetof(java_util_concurrent_ForkJoinPool$WorkQueue, F_owner), "Ljava/util/concurrent/ForkJoinWorkerThread;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinPool_java_util_concurrent_ForkJoinWorkerThread, 0, "(Ljava/util/concurrent/ForkJoinPool;Ljava/util/concurrent/ForkJoinWorkerThread;)V", 0 },
	{ "getPoolIndex", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_getPoolIndex_R_int, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_getPoolIndex_R_int, "()I", 16 },
	{ "queueSize", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int, "()I", 16 },
	{ "isEmpty", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_isEmpty_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_isEmpty_R_boolean, "()Z", 16 },
	{ "push", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_push_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_push_java_util_concurrent_ForkJoinTask, "(Ljava/util/concurrent/ForkJoinTask;)V", 48 },
	{ "growArray", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask, "()[Ljava/util/concurrent/ForkJoinTask;", 48 },
	{ "pop", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_pop_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_pop_R_java_util_concurrent_ForkJoinTask, "()Ljava/util/concurrent/ForkJoinTask;", 48 },
	{ "poll", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask, "()Ljava/util/concurrent/ForkJoinTask;", 48 },
	{ "nextLocalTask", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_nextLocalTask_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_nextLocalTask_R_java_util_concurrent_ForkJoinTask, "()Ljava/util/concurrent/ForkJoinTask;", 16 },
	{ "peek", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_peek_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_peek_R_java_util_concurrent_ForkJoinTask, "()Ljava/util/concurrent/ForkJoinTask;", 16 },
	{ "tryUnpush", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_tryUnpush_java_util_concurrent_ForkJoinTask_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_tryUnpush_java_util_concurrent_ForkJoinTask_R_boolean, "(Ljava/util/concurrent/ForkJoinTask;)Z", 48 },
	{ "cancelAll", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_cancelAll, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_cancelAll, "()V", 16 },
	{ "localPopAndExec", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_localPopAndExec_int, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_localPopAndExec_int, "(I)V", 48 },
	{ "localPollAndExec", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_localPollAndExec_int, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_localPollAndExec_int, "(I)V", 48 },
	{ "tryRemoveAndExec", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_tryRemoveAndExec_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_tryRemoveAndExec_java_util_concurrent_ForkJoinTask, "(Ljava/util/concurrent/ForkJoinTask;)V", 48 },
	{ "localHelpCC", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_localHelpCC_java_util_concurrent_CountedCompleter_int_R_int, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_localHelpCC_java_util_concurrent_CountedCompleter_int_R_int, "(Ljava/util/concurrent/CountedCompleter;I)I", 48 },
	{ "tryLockSharedQueue", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_tryLockSharedQueue_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_tryLockSharedQueue_R_boolean, "()Z", 48 },
	{ "trySharedUnpush", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_trySharedUnpush_java_util_concurrent_ForkJoinTask_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_trySharedUnpush_java_util_concurrent_ForkJoinTask_R_boolean, "(Ljava/util/concurrent/ForkJoinTask;)Z", 48 },
	{ "sharedHelpCC", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_sharedHelpCC_java_util_concurrent_CountedCompleter_int_R_int, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_sharedHelpCC_java_util_concurrent_CountedCompleter_int_R_int, "(Ljava/util/concurrent/CountedCompleter;I)I", 48 },
	{ "isApparentlyUnblocked", (intptr_t) M_java_util_concurrent_ForkJoinPool$WorkQueue_isApparentlyUnblocked_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_isApparentlyUnblocked_R_boolean, "()Z", 16 },
};

Class class_java_util_concurrent_ForkJoinPool$WorkQueue{
		.nativeName = (intptr_t) "java/util/concurrent/ForkJoinPool$WorkQueue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_ForkJoinPool$WorkQueue),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ForkJoinPool$WorkQueue,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ForkJoinPool$WorkQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ForkJoinPool$WorkQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ForkJoinPool,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ForkJoinPool$WorkQueue = registerClass(&class_java_util_concurrent_ForkJoinPool$WorkQueue);

}

