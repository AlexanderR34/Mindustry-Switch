#include "java/util/concurrent/ScheduledThreadPoolExecutor_DelayedWorkQueue.h"
#include "java/lang/Comparable.h"
#include "java/lang/Iterable.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor_DelayedWorkQueue.h"
#include "java/lang/Runnable.h"
#include "java/util/Collection.h"
#include "java/util/Arrays.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor_DelayedWorkQueue_Itr.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Throwable.h"
#include "java/util/concurrent/locks/ReentrantLock.h"
#include "java/util/AbstractCollection.h"
#include "java/util/concurrent/RunnableScheduledFuture.h"
#include "java/lang/Thread.h"
#include "java/util/AbstractQueue.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/util/concurrent/Delayed.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/locks/Condition.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor_ScheduledFutureTask.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {

jint SF_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_INITIAL_CAPACITY;

void mark_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractQueue(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) object;
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
	if (self->F_lock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lock)->clazz)->markFunction)((jobject) self->F_lock, mark, depth + 1);
	if (self->F_leader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_leader)->clazz)->markFunction)((jobject) self->F_leader, mark, depth + 1);
	if (self->F_available)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_available)->clazz)->markFunction)((jobject) self->F_available, mark, depth + 1);
}

void clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractQueue(ctx);
	SF_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_INITIAL_CAPACITY = jint(16);
}

void init_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(848);
	init_java_util_AbstractQueue(ctx, (frame[0].o));
	LINE_NUMBER(875);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_util_concurrent_RunnableScheduledFuture, (16));
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	LINE_NUMBER(877);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_ReentrantLock(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_ReentrantLock);
	init_java_util_concurrent_locks_ReentrantLock(ctx, sp[1].o);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK(sp[0].o))->F_lock = (jref) sp[1].o;
	LINE_NUMBER(902);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	sp[1].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition])(ctx, sp[1].o);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK(sp[0].o))->F_available = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:setIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(908);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(909);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask, (frame[1].o)))))->F_heapIndex = (frame[2].i);
	}
label_1:;
	LINE_NUMBER(910);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftUp_int_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:siftUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
label_0:;
	{
	LINE_NUMBER(917);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(918);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) - (jint(1)))) >> (jint(1))));
	LINE_NUMBER(919);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(920);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	if (temp0 < 0) goto label_5;
	}
	LINE_NUMBER(921);
	goto label_1;
label_5:;
	{
	LINE_NUMBER(922);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[4].o);
	LINE_NUMBER(923);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int(ctx, (frame[0].o), (frame[4].o), (frame[1].i));
	LINE_NUMBER(924);
	frame[1].i = (frame[3].i);
	LINE_NUMBER(925);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(926);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(927);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int(ctx, (frame[0].o), (frame[2].o), (frame[1].i));
	LINE_NUMBER(928);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftDown_int_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:siftDown", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(935);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size)) >> (jint(1))));
	}
label_1:;
	{
	LINE_NUMBER(936);
	if ((frame[1].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(937);
	frame[4].i = (((frame[1].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(938);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(939);
	frame[6].i = ((frame[4].i) + (jint(1)));
	LINE_NUMBER(940);
	if ((frame[6].i) >= ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i))));
	if (temp0 <= 0) goto label_7;
	}
	{
	LINE_NUMBER(941);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = frame[6].i;
	frame[4].i = temp0;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}
label_7:;
	{
	LINE_NUMBER(942);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), (frame[5].o));
	if (temp0 > 0) goto label_9;
	}
	LINE_NUMBER(943);
	goto label_2;
label_9:;
	{
	LINE_NUMBER(944);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[5].o);
	LINE_NUMBER(945);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int(ctx, (frame[0].o), (frame[5].o), (frame[1].i));
	LINE_NUMBER(946);
	frame[1].i = (frame[4].i);
	LINE_NUMBER(947);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(948);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(949);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int(ctx, (frame[0].o), (frame[2].o), (frame[1].i));
	LINE_NUMBER(950);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_grow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:grow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(956);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(957);
	frame[2].i = ((frame[1].i) + ((frame[1].i) >> (jint(1))));
	LINE_NUMBER(958);
	if ((frame[2].i) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(959);
	frame[2].i = (jint(2147483647));
	}
label_3:;
	{
	LINE_NUMBER(960);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[1].o, (frame[2].i));
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK(sp[0].o))->F_queue = (jref) (checkCast(ctx, getArrayClass(&class_java_util_concurrent_RunnableScheduledFuture, 1), sp[1].o));
	LINE_NUMBER(961);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:indexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(967);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(968);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(969);
	frame[2].i = ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask, (frame[1].o)))))->F_heapIndex);
	LINE_NUMBER(972);
	if ((frame[2].i) < 0) goto label_6;
	}
	{
	if ((frame[2].i) >= ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != (frame[1].o)) goto label_6;
	}
	{
	LINE_NUMBER(973);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_6:;
	LINE_NUMBER(974);
	goto label_1;
label_3:;
	{
	LINE_NUMBER(975);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	if ((frame[2].i) >= ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(976);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(977);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_10:;
	{
	LINE_NUMBER(975);
	INST_IINC(2, 1);
	goto label_8;
	}
label_1:;
	{
	LINE_NUMBER(980);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:contains", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(984);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(985);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(987);
	jint temp0 = (jint)M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_indexOf_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == (jint(-1))) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	INST_ISTORE(3);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(989);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(987);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(989);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(990);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:remove", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(994);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(995);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(997);
	jint temp0 = (jint)M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_indexOf_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(998);
	if ((frame[3].i) >= 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(999);
	frame[4].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1012);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(999);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1001);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))), (jint(-1)));
	LINE_NUMBER(1002);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1));
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK(sp[0].o))->F_size = temp0;
	frame[4].i = temp0;
	LINE_NUMBER(1003);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(1005);
	if ((frame[4].i) == (frame[3].i)) goto label_18;
	}
	{
	LINE_NUMBER(1006);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftDown_int_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[3].i), (frame[5].o));
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != (frame[5].o)) goto label_18;
	}
	{
	LINE_NUMBER(1008);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftUp_int_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[3].i), (frame[5].o));
	}
label_18:;
	{
	LINE_NUMBER(1010);
	frame[6].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1012);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(1010);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1012);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(1013);
	throwException(ctx, (frame[7].o));	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:size", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1017);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1018);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1020);
	frame[2].i = ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1022);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1020);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1022);
	frame[3].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1023);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1027);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_size_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remainingCapacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:remainingCapacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1031);
	popStackFrame(ctx);
	return (jint(2147483647));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:peek", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1035);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1036);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1038);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1040);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1038);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1040);
	frame[3].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1041);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:offer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1045);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1046);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1047);
	frame[2].o = (checkCast(ctx, &class_java_util_concurrent_RunnableScheduledFuture, (frame[1].o)));
	LINE_NUMBER(1048);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1049);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1051);
	frame[4].i = ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(1052);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	LINE_NUMBER(1053);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_grow(ctx, (frame[0].o));
	}
label_12:;
	{
	LINE_NUMBER(1054);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size = ((frame[4].i) + (jint(1)));
	LINE_NUMBER(1055);
	if ((frame[4].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(1056);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[2].o);
	LINE_NUMBER(1057);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(1059);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftUp_int_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[4].i), (frame[2].o));
	}
label_18:;
	{
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) != (frame[2].o)) goto label_1;
	}
	{
	LINE_NUMBER(1062);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader = (jref) (jobject(nullptr));
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1066);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[3].o));
	LINE_NUMBER(1067);
	goto label_22;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1066);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[3].o));
	LINE_NUMBER(1067);
	throwException(ctx, (frame[5].o));	}
label_22:;
	{
	LINE_NUMBER(1068);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:put", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1072);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1073);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Runnable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1076);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:offer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(1080);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_finishPoll_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:finishPoll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1090);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK(sp[0].o))->F_size) - (jint(1));
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK(sp[0].o))->F_size = temp0;
	frame[2].i = temp0;
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1092);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(1093);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1094);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftDown_int_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (jint(0)), (frame[3].o));
	}
label_4:;
	{
	LINE_NUMBER(1095);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int(ctx, (frame[0].o), (frame[1].o), (jint(-1)));
	LINE_NUMBER(1096);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:poll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1100);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1101);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1103);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(1104);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[2].o;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Delayed, INDEX_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if ((longCompare(temp0, (jlong(0)))) <= 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(1105);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(1106);
	sp[0].o = (jobject)M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_finishPoll_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[2].o));
	sp += 1;
	}
label_11:;
	INST_ASTORE(3);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1108);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1104);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1108);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1109);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:take", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1114);
	((func_java_util_concurrent_locks_ReentrantLock_lockInterruptibly) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lockInterruptibly])(ctx, (frame[1].o));
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_12; } // goto label_8
	}
	{
	LINE_NUMBER(1117);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(1118);
	if ((frame[2].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	((func_java_util_concurrent_locks_Condition_await) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_await, sp[0].o))(ctx, sp[0].o);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_12; } // goto label_18
	}
label_16:;
	{
	LINE_NUMBER(1121);
	sp[0].o = frame[2].o;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Delayed, INDEX_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[3].l = temp0;
	LINE_NUMBER(1122);
	if ((longCompare((frame[3].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(1123);
	sp[0].o = (jobject)M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_finishPoll_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[2].o));
	frame[5].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(1142);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1123);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	if (bypasses[1]) { bypasses[1] = false; goto label_18; }
	{
	LINE_NUMBER(1124);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(1125);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	((func_java_util_concurrent_locks_Condition_await) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_await, sp[0].o))(ctx, sp[0].o);
	goto label_18;
	}
label_25:;
	{
	LINE_NUMBER(1128);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1129);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader = (jref) (frame[5].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1131);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_Condition_awaitNanos_long_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_awaitNanos_long_R_long, sp[0].o))(ctx, sp[0].o, (frame[3].l));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != (frame[5].o)) goto label_18;
	}
	{
	LINE_NUMBER(1134);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader = (jref) (jobject(nullptr));
	goto label_18;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1133);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != (frame[5].o)) goto label_29;
	}
	{
	LINE_NUMBER(1134);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader = (jref) (jobject(nullptr));
	}
label_29:;
	{
	LINE_NUMBER(1135);
	throwException(ctx, (frame[6].o));	}
label_18:;
	LINE_NUMBER(1138);
	{ popExceptionFrames(frameRef, 1); goto label_6; }
label_8:;
	LINE_NUMBER(1140);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_31:;
	{
	LINE_NUMBER(1142);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1143);
	throwException(ctx, (frame[7].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:poll", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[5]{};

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1148);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[4].l = temp0;
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1150);
	((func_java_util_concurrent_locks_ReentrantLock_lockInterruptibly) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lockInterruptibly])(ctx, (frame[6].o));
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_18; } // goto label_8
	}
	{
	LINE_NUMBER(1153);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(1154);
	if ((frame[7].o) != nullptr) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_12; } // goto label_23
	}
	{
	LINE_NUMBER(1155);
	if ((longCompare((frame[4].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(1156);
	frame[8].o = (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1182);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_26:;
	{
	LINE_NUMBER(1184);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[6].o));
	LINE_NUMBER(1156);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_18; } // goto label_8
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_23; }
	{
	LINE_NUMBER(1158);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_Condition_awaitNanos_long_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_awaitNanos_long_R_long, sp[0].o))(ctx, sp[0].o, (frame[4].l));
	frame[4].l = temp0;
	{ popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_18; } // goto label_29
	}
label_23:;
	{
	LINE_NUMBER(1160);
	sp[0].o = frame[7].o;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Delayed, INDEX_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[8].l = temp0;
	LINE_NUMBER(1161);
	if ((longCompare((frame[8].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	LINE_NUMBER(1162);
	sp[0].o = (jobject)M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_finishPoll_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[7].o));
	frame[10].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1182);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_32:;
	{
	LINE_NUMBER(1184);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[6].o));
	LINE_NUMBER(1162);
	popStackFrame(ctx);
	return (frame[10].o);
	}
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_18; } // goto label_8
	}
	{
	LINE_NUMBER(1163);
	if ((longCompare((frame[4].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(1164);
	frame[10].o = (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1182);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_36:;
	{
	LINE_NUMBER(1184);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[6].o));
	LINE_NUMBER(1164);
	popStackFrame(ctx);
	return (frame[10].o);
	}
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	if (bypasses[2]) { bypasses[2] = false; goto label_8; }
	if (bypasses[3]) { bypasses[3] = false; goto label_29; }
	if (bypasses[4]) { bypasses[4] = false; goto label_8; }
	{
	LINE_NUMBER(1165);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(1166);
	if ((longCompare((frame[4].l), (frame[8].l))) < 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o == nullptr) goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(1167);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_Condition_awaitNanos_long_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_awaitNanos_long_R_long, sp[0].o))(ctx, sp[0].o, (frame[4].l));
	frame[4].l = temp0;
	goto label_29;
	}
label_41:;
	{
	LINE_NUMBER(1169);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[10].o = sp[0].o;
	LINE_NUMBER(1170);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader = (jref) (frame[10].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_Condition_awaitNanos_long_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_awaitNanos_long_R_long, sp[0].o))(ctx, sp[0].o, (frame[8].l));
	frame[11].l = temp0;
	LINE_NUMBER(1173);
	frame[4].l = ((frame[4].l) - ((frame[8].l) - (frame[11].l)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1175);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != (frame[10].o)) goto label_29;
	}
	{
	LINE_NUMBER(1176);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader = (jref) (jobject(nullptr));
	goto label_29;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1175);
	INST_ASTORE(13);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != (frame[10].o)) goto label_45;
	}
	{
	LINE_NUMBER(1176);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader = (jref) (jobject(nullptr));
	}
label_45:;
	{
	LINE_NUMBER(1177);
	throwException(ctx, (frame[13].o));	}
label_29:;
	LINE_NUMBER(1180);
	{ popExceptionFrames(frameRef, 1); goto label_6; }
label_8:;
	LINE_NUMBER(1182);
	INST_ASTORE(14);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_leader;
	if (sp[0].o != nullptr) goto label_47;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_available;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_47:;
	{
	LINE_NUMBER(1184);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[6].o));
	LINE_NUMBER(1185);
	throwException(ctx, (frame[14].o));	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:clear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1189);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1190);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1192);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	if ((frame[2].i) >= ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_9;
	}
	{
	LINE_NUMBER(1193);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1194);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1195);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(1196);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int(ctx, (frame[0].o), (frame[3].o), (jint(-1)));
	}
label_12:;
	{
	LINE_NUMBER(1192);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(1199);
	((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1201);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1202);
	goto label_16;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1201);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1202);
	throwException(ctx, (frame[4].o));	}
label_16:;
	LINE_NUMBER(1203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peekExpired_R_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:peekExpired", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1211);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(1212);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Delayed, INDEX_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if ((longCompare(temp0, (jlong(0)))) <= 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1213);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
label_4:;
	LINE_NUMBER(1212);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_drainTo_java_util_Collection_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:drainTo", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1217);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1218);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1219);
	if ((frame[1].o) != (frame[0].o)) goto label_9;
	}
	{
	LINE_NUMBER(1220);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(1221);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1222);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1225);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(1226);
	sp[0].o = (jobject)M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peekExpired_R_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1227);
	jint temp0 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1228);
	sp[0].o = (jobject)M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_finishPoll_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(1229);
	INST_IINC(4, 1);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(1231);
	frame[5].i = (frame[4].i);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1233);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(1231);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1233);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(1234);
	throwException(ctx, (frame[6].o));	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_drainTo_java_util_Collection_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:drainTo", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1238);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1239);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1240);
	if ((frame[1].o) != (frame[0].o)) goto label_9;
	}
	{
	LINE_NUMBER(1241);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(1242);
	if ((frame[2].i) > 0) goto label_11;
	}
	{
	LINE_NUMBER(1243);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(1244);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1245);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1248);
	frame[5].i = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(1249);
	if ((frame[5].i) >= (frame[2].i)) goto label_15;
	}
	{
	sp[0].o = (jobject)M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peekExpired_R_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1250);
	jint temp0 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(1251);
	sp[0].o = (jobject)M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_finishPoll_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(1252);
	INST_IINC(5, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1254);
	frame[6].i = (frame[5].i);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1256);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[3].o));
	LINE_NUMBER(1254);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1256);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[3].o));
	LINE_NUMBER(1257);
	throwException(ctx, (frame[7].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1261);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1262);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1264);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_java_lang_Class_R_Array1_java_lang_Object(ctx, sp[0].o, ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size), (((jobject) getArrayClass(&class_java_lang_Object, 1))));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1266);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1264);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1266);
	frame[3].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1267);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:toArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1272);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1273);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1275);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(1276);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_java_lang_Class_R_Array1_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o);
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1282);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(1276);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1277);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(1278);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size)) goto label_14;
	}
	{
	LINE_NUMBER(1279);
	ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size)) = (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(1280);
	frame[3].o = (frame[1].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1282);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(1280);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1282);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(1283);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:iterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1287);
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[2].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[2].o, ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue *) NULL_CHECK((frame[0].o)))->F_size));
	init_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_Array1_java_util_concurrent_RunnableScheduledFuture(ctx, sp[0].o, sp[1].o, (checkCast(ctx, getArrayClass(&class_java_util_concurrent_RunnableScheduledFuture, 1), sp[2].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(848);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Runnable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Runnable_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Runnable, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:peek", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_util_concurrent_RunnableScheduledFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_util_concurrent_RunnableScheduledFuture])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:poll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_util_concurrent_RunnableScheduledFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_util_concurrent_RunnableScheduledFuture])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:offer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(848);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Runnable, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:poll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_RunnableScheduledFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_RunnableScheduledFuture])(ctx, (frame[0].o), (frame[1].l), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:take", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_util_concurrent_RunnableScheduledFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_util_concurrent_RunnableScheduledFuture])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:offer", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(848);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Runnable, (frame[1].o))), (frame[2].l), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue:put", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(848);
	((func_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Runnable])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Runnable, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractQueue_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_clear,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_isEmpty_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_size_R_int,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_lang_Object,
	(void *) M_java_util_AbstractQueue_remove_R_java_lang_Object,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_lang_Object,
	(void *) M_java_util_AbstractQueue_element_R_java_lang_Object,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Object,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_lang_Object,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remainingCapacity_R_int,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_drainTo_java_util_Collection_R_int,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_drainTo_java_util_Collection_int_R_int,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftUp_int_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftDown_int_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_grow,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Runnable,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Runnable_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_finishPoll_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peekExpired_R_java_util_concurrent_RunnableScheduledFuture,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Ljava/util/Collection;)Z" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "containsAll", "(Ljava/util/Collection;)Z" },
	{ "isEmpty", "()Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "removeAll", "(Ljava/util/Collection;)Z" },
	{ "retainAll", "(Ljava/util/Collection;)Z" },
	{ "size", "()I" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" },
	{ "offer", "(Ljava/lang/Object;)Z" },
	{ "poll", "()Ljava/lang/Object;" },
	{ "remove", "()Ljava/lang/Object;" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "element", "()Ljava/lang/Object;" },
	{ "put", "(Ljava/lang/Object;)V" },
	{ "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z" },
	{ "take", "()Ljava/lang/Object;" },
	{ "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
	{ "remainingCapacity", "()I" },
	{ "drainTo", "(Ljava/util/Collection;)I" },
	{ "drainTo", "(Ljava/util/Collection;I)I" },
	{ "setIndex", "(Ljava/util/concurrent/RunnableScheduledFuture;I)V" },
	{ "siftUp", "(ILjava/util/concurrent/RunnableScheduledFuture;)V" },
	{ "siftDown", "(ILjava/util/concurrent/RunnableScheduledFuture;)V" },
	{ "grow", "()V" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "peek", "()Ljava/util/concurrent/RunnableScheduledFuture;" },
	{ "offer", "(Ljava/lang/Runnable;)Z" },
	{ "put", "(Ljava/lang/Runnable;)V" },
	{ "add", "(Ljava/lang/Runnable;)Z" },
	{ "offer", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Z" },
	{ "finishPoll", "(Ljava/util/concurrent/RunnableScheduledFuture;)Ljava/util/concurrent/RunnableScheduledFuture;" },
	{ "poll", "()Ljava/util/concurrent/RunnableScheduledFuture;" },
	{ "take", "()Ljava/util/concurrent/RunnableScheduledFuture;" },
	{ "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/RunnableScheduledFuture;" },
	{ "peekExpired", "()Ljava/util/concurrent/RunnableScheduledFuture;" },
};

static jclass interfaces[] { &class_java_util_concurrent_BlockingQueue, };

static jclass innerClasses[] {
	&class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr,
};

static FieldMetadata fields[] {
	{ "INITIAL_CAPACITY", &class_int, (intptr_t) &SF_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_INITIAL_CAPACITY, "I", 26 },
	{ "queue", getArrayClass(&class_java_util_concurrent_RunnableScheduledFuture, 1), offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue, F_queue), "[Ljava/util/concurrent/RunnableScheduledFuture;", 2 },
	{ "lock", &class_java_util_concurrent_locks_ReentrantLock, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue, F_lock), "Ljava/util/concurrent/locks/ReentrantLock;", 18 },
	{ "size", &class_int, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue, F_size), "I", 2 },
	{ "leader", &class_java_lang_Thread, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue, F_leader), "Ljava/lang/Thread;", 2 },
	{ "available", &class_java_util_concurrent_locks_Condition, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue, F_available), "Ljava/util/concurrent/locks/Condition;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue, 0, "()V", 0 },
	{ "setIndex", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_setIndex_java_util_concurrent_RunnableScheduledFuture_int, "(Ljava/util/concurrent/RunnableScheduledFuture;I)V", 2 },
	{ "siftUp", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftUp_int_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftUp_int_java_util_concurrent_RunnableScheduledFuture, "(ILjava/util/concurrent/RunnableScheduledFuture;)V", 2 },
	{ "siftDown", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftDown_int_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_siftDown_int_java_util_concurrent_RunnableScheduledFuture, "(ILjava/util/concurrent/RunnableScheduledFuture;)V", 2 },
	{ "grow", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_grow, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_grow, "()V", 2 },
	{ "indexOf", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_indexOf_java_lang_Object_R_int, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 2 },
	{ "contains", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_contains_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remove_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "size", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_size_R_int, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_isEmpty_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_isEmpty_R_boolean, "()Z", 1 },
	{ "remainingCapacity", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remainingCapacity_R_int, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_remainingCapacity_R_int, "()I", 1 },
	{ "peek", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_util_concurrent_RunnableScheduledFuture, "()Ljava/util/concurrent/RunnableScheduledFuture;", 1 },
	{ "offer", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_R_boolean, "(Ljava/lang/Runnable;)Z", 1 },
	{ "put", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Runnable, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "add", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Runnable_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Runnable_R_boolean, "(Ljava/lang/Runnable;)Z", 1 },
	{ "offer", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_boolean, "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "finishPoll", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_finishPoll_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_finishPoll_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture, "(Ljava/util/concurrent/RunnableScheduledFuture;)Ljava/util/concurrent/RunnableScheduledFuture;", 2 },
	{ "poll", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_util_concurrent_RunnableScheduledFuture, "()Ljava/util/concurrent/RunnableScheduledFuture;", 1 },
	{ "take", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_util_concurrent_RunnableScheduledFuture, "()Ljava/util/concurrent/RunnableScheduledFuture;", 1 },
	{ "poll", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_RunnableScheduledFuture, "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/RunnableScheduledFuture;", 1 },
	{ "clear", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_clear, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_clear, "()V", 1 },
	{ "peekExpired", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peekExpired_R_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peekExpired_R_java_util_concurrent_RunnableScheduledFuture, "()Ljava/util/concurrent/RunnableScheduledFuture;", 2 },
	{ "drainTo", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_drainTo_java_util_Collection_R_int, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_drainTo_java_util_Collection_R_int, "(Ljava/util/Collection;)I", 1 },
	{ "drainTo", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_drainTo_java_util_Collection_int_R_int, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_drainTo_java_util_Collection_int_R_int, "(Ljava/util/Collection;I)I", 1 },
	{ "toArray", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_toArray_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_iterator_R_java_util_Iterator, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "add", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4161 },
	{ "peek", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_lang_Object, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_peek_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "poll", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_lang_Object, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "offer", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4161 },
	{ "poll", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 4161 },
	{ "take", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_lang_Object, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_take_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "offer", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean, "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", 4161 },
	{ "put", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Object, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_put_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
};

Class class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue{
		.nativeName = (intptr_t) "java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue",
		.parentClass = (intptr_t) &class_java_util_AbstractQueue,
		.size = sizeof(java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ScheduledThreadPoolExecutor,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue = registerClass(&class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue);

}

