#include "java/util/concurrent/locks/AbstractQueuedSynchronizer_ConditionObject.h"
#include "java/lang/IllegalMonitorStateException.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer_ConditionObject.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/ArrayList.h"
#include "java/util/Date.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer_Node.h"
#include "java/util/concurrent/locks/LockSupport.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/util/concurrent/locks/Condition.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"

extern "C" {

jlong SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_serialVersionUID;
jint SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_REINTERRUPT;
jint SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_THROW_IE;

void mark_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) object;
	if (self->F_firstWaiter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_firstWaiter)->clazz)->markFunction)((jobject) self->F_firstWaiter, mark, depth + 1);
	if (self->F_lastWaiter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastWaiter)->clazz)->markFunction)((jobject) self->F_lastWaiter, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_serialVersionUID = jlong(1173984872572414699ll);
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_REINTERRUPT = jint(1);
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_THROW_IE = jint(-1);
}

void init_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_java_util_concurrent_locks_AbstractQueuedSynchronizer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1847);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_addConditionWaiter_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:addConditionWaiter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1856);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_lastWaiter;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1858);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_waitStatus) == (-2)) goto label_2;
	}
	{
	LINE_NUMBER(1859);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_unlinkCancelledWaiters(ctx, (frame[0].o));
	LINE_NUMBER(1860);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_lastWaiter;
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1862);
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node);
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_lang_Thread_int(ctx, sp[0].o, sp[1].o, (-2));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1863);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1864);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_firstWaiter = (jref) (frame[2].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(1866);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_nextWaiter = (jref) (frame[2].o);
	}
label_8:;
	{
	LINE_NUMBER(1867);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_lastWaiter = (jref) (frame[2].o);
	LINE_NUMBER(1868);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:doSignal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(1879);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_nextWaiter;
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK(sp[0].o))->F_firstWaiter = (jref) sp[1].o;
	if (sp[1].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1880);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_lastWaiter = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(1881);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_nextWaiter = (jref) (jobject(nullptr));
	LINE_NUMBER(1882);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferForSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferForSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_firstWaiter;
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_0;
	}
label_4:;
	LINE_NUMBER(1884);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignalAll_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:doSignalAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1891);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK(sp[1].o))->F_firstWaiter = (jref) sp[2].o;
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK(sp[0].o))->F_lastWaiter = (jref) sp[2].o;
	}
label_1:;
	{
	LINE_NUMBER(1893);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_nextWaiter;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1894);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_nextWaiter = (jref) (jobject(nullptr));
	LINE_NUMBER(1895);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferForSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferForSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1896);
	frame[1].o = (frame[2].o);
	LINE_NUMBER(1897);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	LINE_NUMBER(1898);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_unlinkCancelledWaiters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:unlinkCancelledWaiters", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1915);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_firstWaiter;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1916);
	frame[2].o = (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(1917);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1918);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_nextWaiter;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1919);
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_waitStatus) == (-2)) goto label_6;
	}
	{
	LINE_NUMBER(1920);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_nextWaiter = (jref) (jobject(nullptr));
	LINE_NUMBER(1921);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1922);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_firstWaiter = (jref) (frame[3].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1924);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_nextWaiter = (jref) (frame[3].o);
	}
label_11:;
	{
	LINE_NUMBER(1925);
	if ((frame[3].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1926);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_lastWaiter = (jref) (frame[2].o);
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(1929);
	frame[2].o = (frame[1].o);
	}
label_12:;
	{
	LINE_NUMBER(1930);
	frame[1].o = (frame[3].o);
	LINE_NUMBER(1931);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1932);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_signal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:signal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1945);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1946);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1947);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_firstWaiter;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1948);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1949);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	}
label_4:;
	LINE_NUMBER(1950);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_signalAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:signalAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1960);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1961);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1962);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_firstWaiter;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1963);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1964);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignalAll_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	}
label_4:;
	LINE_NUMBER(1965);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitUninterruptibly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:awaitUninterruptibly", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1979);
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_addConditionWaiter_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1980);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1981);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(1982);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1983);
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1984);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1985);
	frame[3].i = (jint(1));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1987);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	if (temp0 != 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_9;
label_8:;
	LINE_NUMBER(1988);
	SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_selfInterrupt(ctx);
label_9:;
	LINE_NUMBER(1989);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_checkInterruptWhileWaiting_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:checkInterruptWhileWaiting", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2009);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2010);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(-1);
	goto label_4;
label_3:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	LINE_NUMBER(2011);
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(2009);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_reportInterruptAfterWait_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:reportInterruptAfterWait", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2020);
	if ((frame[1].i) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(2021);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2022);
	if ((frame[1].i) != (jint(1))) goto label_3;
	}
	LINE_NUMBER(2023);
	SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_selfInterrupt(ctx);
label_3:;
	LINE_NUMBER(2024);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_await(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:await", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2040);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2041);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2042);
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_addConditionWaiter_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2043);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(2044);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(2045);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(2046);
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2047);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_checkInterruptWhileWaiting_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	if (temp0 == 0) goto label_5;
	}
	LINE_NUMBER(2048);
	goto label_6;
label_6:;
	{
	LINE_NUMBER(2050);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	if (temp0 == 0) goto label_10;
	}
	{
	if ((frame[3].i) == (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(2051);
	frame[3].i = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(2052);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_nextWaiter;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(2053);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_unlinkCancelledWaiters(ctx, (frame[0].o));
	}
label_12:;
	{
	LINE_NUMBER(2054);
	if ((frame[3].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(2055);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_reportInterruptAfterWait_int(ctx, (frame[0].o), (frame[3].i));
	}
label_14:;
	LINE_NUMBER(2056);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitNanos_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:awaitNanos", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(2073);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2074);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2075);
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_addConditionWaiter_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2076);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int])(ctx, sp[0].o, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(2077);
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[5].l = (temp1 + (frame[1].l));
	LINE_NUMBER(2078);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(2079);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(2080);
	if ((longCompare((frame[1].l), (jlong(0)))) > 0) goto label_9;
	}
	{
	LINE_NUMBER(2081);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(2082);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(2084);
	if ((longCompare((frame[1].l), (jlong(1000ll)))) < 0) goto label_12;
	}
	{
	LINE_NUMBER(2085);
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, (frame[0].o), (frame[1].l));
	}
label_12:;
	{
	LINE_NUMBER(2086);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_checkInterruptWhileWaiting_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int(ctx, (frame[0].o), (frame[3].o));
	frame[7].i = temp0;
	if (temp0 == 0) goto label_14;
	}
	LINE_NUMBER(2087);
	goto label_7;
label_14:;
	{
	LINE_NUMBER(2088);
	jlong temp0 = frame[5].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[1].l = (temp0 - temp1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(2090);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean])(ctx, sp[0].o, (frame[3].o), (frame[4].i));
	if (temp0 == 0) goto label_16;
	}
	{
	if ((frame[7].i) == (jint(-1))) goto label_16;
	}
	{
	LINE_NUMBER(2091);
	frame[7].i = (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(2092);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[3].o)))->F_nextWaiter;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(2093);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_unlinkCancelledWaiters(ctx, (frame[0].o));
	}
label_18:;
	{
	LINE_NUMBER(2094);
	if ((frame[7].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(2095);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_reportInterruptAfterWait_int(ctx, (frame[0].o), (frame[7].i));
	}
label_20:;
	{
	LINE_NUMBER(2096);
	jlong temp0 = frame[5].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitUntil_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:awaitUntil", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2115);
	jlong temp0 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[1].o));
	frame[2].l = temp0;
	LINE_NUMBER(2116);
	jint temp1 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2117);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2118);
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_addConditionWaiter_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2119);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int])(ctx, sp[0].o, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(2120);
	frame[6].i = (jint(0));
	LINE_NUMBER(2121);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2122);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(2123);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare(temp0, (frame[2].l))) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(2124);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[4].o));
	frame[6].i = temp0;
	LINE_NUMBER(2125);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(2127);
	SM_java_util_concurrent_locks_LockSupport_parkUntil_java_lang_Object_long(ctx, (frame[0].o), (frame[2].l));
	LINE_NUMBER(2128);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_checkInterruptWhileWaiting_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int(ctx, (frame[0].o), (frame[4].o));
	frame[7].i = temp0;
	if (temp0 == 0) goto label_7;
	}
	LINE_NUMBER(2129);
	goto label_8;
label_8:;
	{
	LINE_NUMBER(2131);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean])(ctx, sp[0].o, (frame[4].o), (frame[5].i));
	if (temp0 == 0) goto label_15;
	}
	{
	if ((frame[7].i) == (jint(-1))) goto label_15;
	}
	{
	LINE_NUMBER(2132);
	frame[7].i = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(2133);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[4].o)))->F_nextWaiter;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(2134);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_unlinkCancelledWaiters(ctx, (frame[0].o));
	}
label_17:;
	{
	LINE_NUMBER(2135);
	if ((frame[7].i) == 0) goto label_19;
	}
	{
	LINE_NUMBER(2136);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_reportInterruptAfterWait_int(ctx, (frame[0].o), (frame[7].i));
	}
label_19:;
	{
	LINE_NUMBER(2137);
	if ((frame[6].i) != 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_await_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:await", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(2156);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[4].l = temp0;
	LINE_NUMBER(2157);
	jint temp1 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2158);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2159);
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_addConditionWaiter_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2160);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int])(ctx, sp[0].o, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(2161);
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[8].l = (temp1 + (frame[4].l));
	LINE_NUMBER(2162);
	frame[10].i = (jint(0));
	LINE_NUMBER(2163);
	frame[11].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(2164);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(2165);
	if ((longCompare((frame[4].l), (jlong(0)))) > 0) goto label_11;
	}
	{
	LINE_NUMBER(2166);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, sp[0].o, (frame[6].o));
	frame[10].i = temp0;
	LINE_NUMBER(2167);
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(2169);
	if ((longCompare((frame[4].l), (jlong(1000ll)))) < 0) goto label_14;
	}
	{
	LINE_NUMBER(2170);
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, (frame[0].o), (frame[4].l));
	}
label_14:;
	{
	LINE_NUMBER(2171);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_checkInterruptWhileWaiting_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int(ctx, (frame[0].o), (frame[6].o));
	frame[11].i = temp0;
	if (temp0 == 0) goto label_16;
	}
	LINE_NUMBER(2172);
	goto label_9;
label_16:;
	{
	LINE_NUMBER(2173);
	jlong temp0 = frame[8].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[4].l = (temp0 - temp1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2175);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean])(ctx, sp[0].o, (frame[6].o), (frame[7].i));
	if (temp0 == 0) goto label_18;
	}
	{
	if ((frame[11].i) == (jint(-1))) goto label_18;
	}
	{
	LINE_NUMBER(2176);
	frame[11].i = (jint(1));
	}
label_18:;
	{
	LINE_NUMBER(2177);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[6].o)))->F_nextWaiter;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(2178);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_unlinkCancelledWaiters(ctx, (frame[0].o));
	}
label_20:;
	{
	LINE_NUMBER(2179);
	if ((frame[11].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(2180);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_reportInterruptAfterWait_int(ctx, (frame[0].o), (frame[11].i));
	}
label_22:;
	{
	LINE_NUMBER(2181);
	if ((frame[10].i) != 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_isOwnedBy_java_util_concurrent_locks_AbstractQueuedSynchronizer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:isOwnedBy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2193);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_hasWaiters_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:hasWaiters", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2205);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2206);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2207);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_firstWaiter;
	frame[1].o = sp[0].o;
	}
label_3:;
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_4;
	{
	LINE_NUMBER(2208);
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_waitStatus) != (-2)) goto label_6;
	}
	{
	LINE_NUMBER(2209);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(2207);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_nextWaiter;
	frame[1].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2211);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitQueueLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:getWaitQueueLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2224);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2225);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2226);
	frame[1].i = (jint(0));
	LINE_NUMBER(2227);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_firstWaiter;
	frame[2].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(2228);
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_waitStatus) != (-2)) goto label_7;
	}
	LINE_NUMBER(2229);
	INST_IINC(1, 1);
label_7:;
	{
	LINE_NUMBER(2227);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_nextWaiter;
	frame[2].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2231);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitingThreads_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject:getWaitingThreads", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2244);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2245);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2246);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2247);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject *) NULL_CHECK((frame[0].o)))->F_firstWaiter;
	frame[2].o = sp[0].o;
	}
label_4:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(2248);
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_waitStatus) != (-2)) goto label_7;
	}
	{
	LINE_NUMBER(2249);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2250);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(2251);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[3].o));
	}
label_7:;
	{
	LINE_NUMBER(2247);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_nextWaiter;
	frame[2].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2254);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject[] {
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
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_await,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitUninterruptibly,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitNanos_long_R_long,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_await_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitUntil_java_util_Date_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_signal,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_signalAll,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_addConditionWaiter_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignalAll_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_unlinkCancelledWaiters,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_checkInterruptWhileWaiting_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_reportInterruptAfterWait_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_isOwnedBy_java_util_concurrent_locks_AbstractQueuedSynchronizer_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_hasWaiters_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitQueueLength_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitingThreads_R_java_util_Collection,
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
	{ "await", "()V" },
	{ "awaitUninterruptibly", "()V" },
	{ "awaitNanos", "(J)J" },
	{ "await", "(JLjava/util/concurrent/TimeUnit;)Z" },
	{ "awaitUntil", "(Ljava/util/Date;)Z" },
	{ "signal", "()V" },
	{ "signalAll", "()V" },
	{ "addConditionWaiter", "()Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;" },
	{ "doSignal", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V" },
	{ "doSignalAll", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V" },
	{ "unlinkCancelledWaiters", "()V" },
	{ "checkInterruptWhileWaiting", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)I" },
	{ "reportInterruptAfterWait", "(I)V" },
	{ "isOwnedBy", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)Z" },
	{ "hasWaiters", "()Z" },
	{ "getWaitQueueLength", "()I" },
	{ "getWaitingThreads", "()Ljava/util/Collection;" },
};

static jclass interfaces[] { &class_java_util_concurrent_locks_Condition, &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_serialVersionUID, "J", 26 },
	{ "firstWaiter", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject, F_firstWaiter), "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 130 },
	{ "lastWaiter", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject, F_lastWaiter), "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 130 },
	{ "REINTERRUPT", &class_int, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_REINTERRUPT, "I", 26 },
	{ "THROW_IE", &class_int, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_THROW_IE, "I", 26 },
	{ "this$0", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject, F_this$0), "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_java_util_concurrent_locks_AbstractQueuedSynchronizer, 0, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)V", 1 },
	{ "addConditionWaiter", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_addConditionWaiter_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_addConditionWaiter_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, "()Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 2 },
	{ "doSignal", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", 2 },
	{ "doSignalAll", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignalAll_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_doSignalAll_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", 2 },
	{ "unlinkCancelledWaiters", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_unlinkCancelledWaiters, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_unlinkCancelledWaiters, "()V", 2 },
	{ "signal", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_signal, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_signal, "()V", 17 },
	{ "signalAll", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_signalAll, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_signalAll, "()V", 17 },
	{ "awaitUninterruptibly", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitUninterruptibly, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitUninterruptibly, "()V", 17 },
	{ "checkInterruptWhileWaiting", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_checkInterruptWhileWaiting_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_checkInterruptWhileWaiting_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)I", 2 },
	{ "reportInterruptAfterWait", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_reportInterruptAfterWait_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_reportInterruptAfterWait_int, "(I)V", 2 },
	{ "await", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_await, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_await, "()V", 17 },
	{ "awaitNanos", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitNanos_long_R_long, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitNanos_long_R_long, "(J)J", 17 },
	{ "awaitUntil", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitUntil_java_util_Date_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_awaitUntil_java_util_Date_R_boolean, "(Ljava/util/Date;)Z", 17 },
	{ "await", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_await_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_await_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 17 },
	{ "isOwnedBy", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_isOwnedBy_java_util_concurrent_locks_AbstractQueuedSynchronizer_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_isOwnedBy_java_util_concurrent_locks_AbstractQueuedSynchronizer_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)Z", 16 },
	{ "hasWaiters", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_hasWaiters_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_hasWaiters_R_boolean, "()Z", 20 },
	{ "getWaitQueueLength", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitQueueLength_R_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitQueueLength_R_int, "()I", 20 },
	{ "getWaitingThreads", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitingThreads_R_java_util_Collection, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitingThreads_R_java_util_Collection, "()Ljava/util/Collection;", 20 },
};

Class class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject{
		.nativeName = (intptr_t) "java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_locks_AbstractQueuedSynchronizer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject = registerClass(&class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject);

}

