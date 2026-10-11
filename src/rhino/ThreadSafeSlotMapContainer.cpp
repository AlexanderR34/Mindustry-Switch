#include "rhino/ThreadSafeSlotMapContainer.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/AssertionError.h"
#include "rhino/SlotMap.h"
#include "rhino/SlotMapContainer.h"
#include "rhino/ThreadSafeSlotMapContainer.h"
#include "rhino/ScriptableObject_Slot.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "rhino/ScriptableObject_SlotAccess.h"
#include "java/util/concurrent/locks/StampedLock.h"

extern "C" {

jbool SF_rhino_ThreadSafeSlotMapContainer_$assertionsDisabled;

void mark_rhino_ThreadSafeSlotMapContainer(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_SlotMapContainer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ThreadSafeSlotMapContainer *) object;
	if (self->F_lock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lock)->clazz)->markFunction)((jobject) self->F_lock, mark, depth + 1);
}

void init_rhino_ThreadSafeSlotMapContainer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ThreadSafeSlotMapContainer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(19);
	init_rhino_SlotMapContainer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_StampedLock(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_StampedLock);
	init_java_util_concurrent_locks_StampedLock(ctx, sp[1].o);
	((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK(sp[0].o))->F_lock = (jref) sp[1].o;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ThreadSafeSlotMapContainer_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:size", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long])(ctx, sp[0].o);
	frame[1].l = temp0;
	LINE_NUMBER(25);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp1 = (jint)((func_rhino_SlotMap_size_R_int) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_size_R_int, sp[0].o))(ctx, sp[0].o);
	frame[3].i = temp1;
	LINE_NUMBER(26);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jint temp2 = (jint)((func_java_util_concurrent_locks_StampedLock_validate_long_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_validate_long_R_boolean])(ctx, sp[0].o, (frame[1].l));
	if (temp2 == 0) goto label_9;
	}
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_9:;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_readLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_readLock_R_long])(ctx, sp[0].o);
	frame[1].l = temp0;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_rhino_SlotMap_size_R_int) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_size_R_int, sp[0].o))(ctx, sp[0].o);
	frame[4].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockRead_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(34);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockRead_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(35);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jint M_rhino_ThreadSafeSlotMapContainer_dirtySize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:dirtySize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	if ((clinit_rhino_ThreadSafeSlotMapContainer(ctx), (jint)SF_rhino_ThreadSafeSlotMapContainer_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jint temp0 = (jint)((func_java_util_concurrent_locks_StampedLock_isReadLocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_isReadLocked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_rhino_SlotMap_size_R_int) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ThreadSafeSlotMapContainer_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:isEmpty", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long])(ctx, sp[0].o);
	frame[1].l = temp0;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp1 = (jint)((func_rhino_SlotMap_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	frame[3].i = temp1;
	LINE_NUMBER(48);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jint temp2 = (jint)((func_java_util_concurrent_locks_StampedLock_validate_long_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_validate_long_R_boolean])(ctx, sp[0].o, (frame[1].l));
	if (temp2 == 0) goto label_9;
	}
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_9:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_readLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_readLock_R_long])(ctx, sp[0].o);
	frame[1].l = temp0;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_rhino_SlotMap_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	frame[4].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockRead_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(56);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockRead_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(57);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_ThreadSafeSlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:get", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_writeLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_writeLock_R_long])(ctx, sp[0].o);
	frame[4].l = temp0;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(64);
	sp[0].o = frame[3].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_QUERY;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(65);
	((func_rhino_ThreadSafeSlotMapContainer_checkMapSize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ThreadSafeSlotMapContainer_checkMapSize])(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_rhino_SlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].o));
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockWrite_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockWrite_long])(ctx, sp[0].o, (frame[4].l));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(69);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockWrite_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockWrite_long])(ctx, sp[0].o, (frame[4].l));
	LINE_NUMBER(70);
	throwException(ctx, (frame[7].o));	}

	popStackFrame(ctx);
}

jobject M_rhino_ThreadSafeSlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:query", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long])(ctx, sp[0].o);
	frame[3].l = temp0;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_rhino_SlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jint temp1 = (jint)((func_java_util_concurrent_locks_StampedLock_validate_long_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_validate_long_R_boolean])(ctx, sp[0].o, (frame[3].l));
	if (temp1 == 0) goto label_9;
	}
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_9:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_readLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_readLock_R_long])(ctx, sp[0].o);
	frame[3].l = temp0;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_rhino_SlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockRead_long])(ctx, sp[0].o, (frame[3].l));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(85);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockRead_long])(ctx, sp[0].o, (frame[3].l));
	LINE_NUMBER(86);
	throwException(ctx, (frame[7].o));	}

	popStackFrame(ctx);
}

void M_rhino_ThreadSafeSlotMapContainer_addSlot_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:addSlot", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_writeLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_writeLock_R_long])(ctx, sp[0].o);
	frame[2].l = temp0;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(93);
	((func_rhino_ThreadSafeSlotMapContainer_checkMapSize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ThreadSafeSlotMapContainer_checkMapSize])(ctx, (frame[0].o));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	((func_rhino_SlotMap_addSlot_rhino_ScriptableObject$Slot) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_addSlot_rhino_ScriptableObject$Slot, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockWrite_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockWrite_long])(ctx, sp[0].o, (frame[2].l));
	LINE_NUMBER(97);
	goto label_9;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(96);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockWrite_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockWrite_long])(ctx, sp[0].o, (frame[2].l));
	LINE_NUMBER(97);
	throwException(ctx, (frame[4].o));	}
label_9:;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ThreadSafeSlotMapContainer_remove_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:remove", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_writeLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_writeLock_R_long])(ctx, sp[0].o);
	frame[3].l = temp0;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	((func_rhino_SlotMap_remove_java_lang_Object_int) resolveInterfaceMethod(ctx, &class_rhino_SlotMap, INDEX_rhino_SlotMap_remove_java_lang_Object_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockWrite_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockWrite_long])(ctx, sp[0].o, (frame[3].l));
	LINE_NUMBER(107);
	goto label_8;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(106);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockWrite_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockWrite_long])(ctx, sp[0].o, (frame[3].l));
	LINE_NUMBER(107);
	throwException(ctx, (frame[5].o));	}
label_8:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_rhino_ThreadSafeSlotMapContainer_readLock_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:readLock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_readLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_readLock_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_ThreadSafeSlotMapContainer_unlockRead_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:unlockRead", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	((func_java_util_concurrent_locks_StampedLock_unlockRead_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockRead_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ThreadSafeSlotMapContainer_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:iterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	if ((clinit_rhino_ThreadSafeSlotMapContainer(ctx), (jint)SF_rhino_ThreadSafeSlotMapContainer_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jint temp0 = (jint)((func_java_util_concurrent_locks_StampedLock_isReadLocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_isReadLocked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((rhino_SlotMapContainer *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ThreadSafeSlotMapContainer_checkMapSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:checkMapSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	if ((clinit_rhino_ThreadSafeSlotMapContainer(ctx), (jint)SF_rhino_ThreadSafeSlotMapContainer_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ThreadSafeSlotMapContainer *) NULL_CHECK((frame[0].o)))->F_lock;
	jint temp0 = (jint)((func_java_util_concurrent_locks_StampedLock_isWriteLocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_isWriteLocked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(141);
	M_rhino_SlotMapContainer_checkMapSize(ctx, (frame[0].o));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_rhino_ThreadSafeSlotMapContainer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_SlotMapContainer(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ThreadSafeSlotMapContainer:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ThreadSafeSlotMapContainer(ctx);
	{
	LINE_NUMBER(12);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_ThreadSafeSlotMapContainer)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_ThreadSafeSlotMapContainer)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_rhino_ThreadSafeSlotMapContainer(ctx);
	SF_rhino_ThreadSafeSlotMapContainer_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_ThreadSafeSlotMapContainer[] {
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
	(void *) M_rhino_ThreadSafeSlotMapContainer_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_rhino_ThreadSafeSlotMapContainer_size_R_int,
	(void *) M_rhino_ThreadSafeSlotMapContainer_isEmpty_R_boolean,
	(void *) M_rhino_ThreadSafeSlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ThreadSafeSlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ThreadSafeSlotMapContainer_addSlot_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ThreadSafeSlotMapContainer_remove_java_lang_Object_int,
	(void *) M_rhino_ThreadSafeSlotMapContainer_dirtySize_R_int,
	(void *) M_rhino_ThreadSafeSlotMapContainer_readLock_R_long,
	(void *) M_rhino_ThreadSafeSlotMapContainer_unlockRead_long,
	(void *) M_rhino_ThreadSafeSlotMapContainer_checkMapSize,
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
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "query", "(Ljava/lang/Object;I)Lrhino/ScriptableObject$Slot;" },
	{ "addSlot", "(Lrhino/ScriptableObject$Slot;)V" },
	{ "remove", "(Ljava/lang/Object;I)V" },
	{ "dirtySize", "()I" },
	{ "readLock", "()J" },
	{ "unlockRead", "(J)V" },
	{ "checkMapSize", "()V" },
};

static FieldMetadata fields[] {
	{ "lock", &class_java_util_concurrent_locks_StampedLock, offsetof(rhino_ThreadSafeSlotMapContainer, F_lock), "Ljava/util/concurrent/locks/StampedLock;", 18 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_ThreadSafeSlotMapContainer_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ThreadSafeSlotMapContainer_int, 0, "(I)V", 0 },
	{ "size", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_size_R_int, VTABLE_rhino_ThreadSafeSlotMapContainer_size_R_int, "()I", 1 },
	{ "dirtySize", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_dirtySize_R_int, VTABLE_rhino_ThreadSafeSlotMapContainer_dirtySize_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_isEmpty_R_boolean, VTABLE_rhino_ThreadSafeSlotMapContainer_isEmpty_R_boolean, "()Z", 1 },
	{ "get", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, VTABLE_rhino_ThreadSafeSlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;", 1 },
	{ "query", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, VTABLE_rhino_ThreadSafeSlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot, "(Ljava/lang/Object;I)Lrhino/ScriptableObject$Slot;", 1 },
	{ "addSlot", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_addSlot_rhino_ScriptableObject$Slot, VTABLE_rhino_ThreadSafeSlotMapContainer_addSlot_rhino_ScriptableObject$Slot, "(Lrhino/ScriptableObject$Slot;)V", 1 },
	{ "remove", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_remove_java_lang_Object_int, VTABLE_rhino_ThreadSafeSlotMapContainer_remove_java_lang_Object_int, "(Ljava/lang/Object;I)V", 1 },
	{ "readLock", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_readLock_R_long, VTABLE_rhino_ThreadSafeSlotMapContainer_readLock_R_long, "()J", 1 },
	{ "unlockRead", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_unlockRead_long, VTABLE_rhino_ThreadSafeSlotMapContainer_unlockRead_long, "(J)V", 1 },
	{ "iterator", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_iterator_R_java_util_Iterator, VTABLE_rhino_ThreadSafeSlotMapContainer_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "checkMapSize", (intptr_t) M_rhino_ThreadSafeSlotMapContainer_checkMapSize, VTABLE_rhino_ThreadSafeSlotMapContainer_checkMapSize, "()V", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_ThreadSafeSlotMapContainer, 0, "()V", 8 },
};

Class class_rhino_ThreadSafeSlotMapContainer{
		.nativeName = (intptr_t) "rhino/ThreadSafeSlotMapContainer",
		.parentClass = (intptr_t) &class_rhino_SlotMapContainer,
		.size = sizeof(rhino_ThreadSafeSlotMapContainer),
		.classVtable = (intptr_t) vtable_rhino_ThreadSafeSlotMapContainer,
		.staticInitializer = (intptr_t) clinit_rhino_ThreadSafeSlotMapContainer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ThreadSafeSlotMapContainer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ThreadSafeSlotMapContainer = registerClass(&class_rhino_ThreadSafeSlotMapContainer);

}
