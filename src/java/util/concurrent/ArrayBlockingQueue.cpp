#include "java/util/concurrent/ArrayBlockingQueue.h"
#include "java/lang/Math.h"
#include "java/util/AbstractQueue.h"
#include "java/util/concurrent/ArrayBlockingQueue.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/util/Collection.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/lang/String.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/util/AbstractCollection.h"
#include "java/lang/Thread.h"

extern "C" {

jlong SF_java_util_concurrent_ArrayBlockingQueue_serialVersionUID;

void mark_java_util_concurrent_ArrayBlockingQueue(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_ArrayBlockingQueue *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_java_util_concurrent_ArrayBlockingQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractQueue(ctx);
	SF_java_util_concurrent_ArrayBlockingQueue_serialVersionUID = jlong(-817911632652898426ll);
}

jint M_java_util_concurrent_ArrayBlockingQueue_dec_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:dec", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ILOAD(1);
label_2:;
	{
	sp -= 1;
	popStackFrame(ctx, self);
	return (sp[0].i - (jint(1)));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_itemAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:itemAt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx, self);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ArrayBlockingQueue_checkNotNull_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:checkNotNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_java_util_concurrent_ArrayBlockingQueue);

	clinit_java_util_concurrent_ArrayBlockingQueue(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(120);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(121);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(122);
	popStackFrame(ctx, (jobject) &class_java_util_concurrent_ArrayBlockingQueue);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ArrayBlockingQueue_enqueue_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:enqueue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(132);
	ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putIndex)) = (frame[1].o);
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_putIndex) + (jint(1));
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_putIndex = temp0;
	if (temp0 != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(134);
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putIndex = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(136);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_dequeue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:dequeue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(147);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex)));
	LINE_NUMBER(148);
	ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex)) = (jobject(nullptr));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_takeIndex) + (jint(1));
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_takeIndex = temp0;
	if (temp0 != (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(150);
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count) - (jint(1)));
	LINE_NUMBER(152);
	popStackFrame(ctx, self);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ArrayBlockingQueue_removeAt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:removeAt", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(165);
	if ((frame[1].i) != ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex)) goto label_2;
	}
	{
	LINE_NUMBER(167);
	ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex)) = (jobject(nullptr));
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_takeIndex) + (jint(1));
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_takeIndex = temp0;
	if (temp0 != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(169);
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count) - (jint(1)));
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(175);
	frame[3].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putIndex);
	LINE_NUMBER(176);
	frame[4].i = (frame[1].i);
	}
label_9:;
	{
	LINE_NUMBER(177);
	frame[5].i = ((frame[4].i) + (jint(1)));
	LINE_NUMBER(178);
	if ((frame[5].i) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(179);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(180);
	if ((frame[5].i) == (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(181);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(182);
	frame[4].i = (frame[5].i);
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(184);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(185);
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putIndex = (frame[4].i);
	LINE_NUMBER(186);
	goto label_19;
	}
label_16:;
	LINE_NUMBER(188);
	goto label_9;
label_19:;
	{
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count) - (jint(1)));
	}
label_7:;
	LINE_NUMBER(191);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_concurrent_ArrayBlockingQueue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ArrayBlockingQueue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(201);
	init_java_util_concurrent_ArrayBlockingQueue_int_boolean(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ArrayBlockingQueue_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ArrayBlockingQueue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(214);
	init_java_util_AbstractQueue(ctx, (frame[0].o));
	LINE_NUMBER(215);
	if ((frame[1].i) > 0) goto label_2;
	}
	{
	LINE_NUMBER(216);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ArrayBlockingQueue_int_boolean_java_util_Collection(jcontext ctx, jobject self, jint param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ArrayBlockingQueue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(238);
	init_java_util_concurrent_ArrayBlockingQueue_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(240);
	frame[4].i = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArrayIndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(243);
	SM_java_util_concurrent_ArrayBlockingQueue_checkNotNull_java_lang_Object(ctx, (frame[6].o));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[6].o);
	LINE_NUMBER(245);
	goto label_6;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(248);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(246);
	frame[5].o = sp[0].o;
	LINE_NUMBER(247);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(249);
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count = (frame[4].i);
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[4].i) != (frame[1].i)) goto label_13;
	}
	INST_ICONST(0);
	goto label_14;
label_13:;
	INST_ILOAD(4);
label_14:;
	{
	sp -= 2;
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_putIndex = sp[1].i;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ArrayBlockingQueue_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(265);
	jint temp0 = (jint)M_java_util_AbstractQueue_add_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:offer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(278);
	SM_java_util_concurrent_ArrayBlockingQueue_checkNotNull_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(279);
	jint temp0 = (jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(280);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(282);
	M_java_util_concurrent_ArrayBlockingQueue_enqueue_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(283);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ArrayBlockingQueue_put_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(296);
	SM_java_util_concurrent_ArrayBlockingQueue_checkNotNull_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(297);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_17;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_17:;
	{
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(301);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_19;
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(302);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_8:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_20:;
	{
	LINE_NUMBER(303);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(0)));
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(305);
	M_java_util_concurrent_ArrayBlockingQueue_enqueue_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:offer", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(317);
	SM_java_util_concurrent_ArrayBlockingQueue_checkNotNull_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(318);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[5].l = temp0;
	LINE_NUMBER(319);
	jlong temp1 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[4].o), (frame[2].l));
	frame[7].l = temp1;
	}
label_12:;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(322);
	jint temp0 = (jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(323);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(324);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_15;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(10);
	INST_ATHROW();
	label_15:;
	{
	LINE_NUMBER(325);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	if ((longCompare((temp0 - (frame[5].l)), (frame[7].l))) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(327);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(0)));
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(329);
	M_java_util_concurrent_ArrayBlockingQueue_enqueue_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_poll_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:poll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(334);
	if (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_util_concurrent_ArrayBlockingQueue_dequeue_R_java_lang_Object(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx, self);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_take_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:take", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_9:;
	{
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(340);
	if (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(341);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(342);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_12:;
	{
	LINE_NUMBER(343);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(0)));
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)M_java_util_concurrent_ArrayBlockingQueue_dequeue_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:poll", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(349);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[4].l = temp0;
	LINE_NUMBER(350);
	jlong temp1 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[6].l = temp1;
	}
label_11:;
	{
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	frame[8].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(353);
	jint temp0 = (jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(354);
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	goto label_13;
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(355);
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_14:;
	{
	LINE_NUMBER(356);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	if ((longCompare((temp0 - (frame[4].l)), (frame[6].l))) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(358);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(0)));
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)M_java_util_concurrent_ArrayBlockingQueue_dequeue_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:peek", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_itemAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_itemAt_int_R_java_lang_Object])(ctx, (frame[0].o), ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ArrayBlockingQueue_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx, self);
	return ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ArrayBlockingQueue_remainingCapacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:remainingCapacity", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx, self);
	return ((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ArrayBlockingQueue_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(413);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(415);
	if (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(416);
	frame[3].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putIndex);
	LINE_NUMBER(417);
	frame[4].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex);
	}
label_6:;
	{
	LINE_NUMBER(419);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(420);
	((func_java_util_concurrent_ArrayBlockingQueue_removeAt_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_removeAt_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(421);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(423);
	INST_IINC(4, 1);
	if ((frame[4].i) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_10;
	}
	{
	LINE_NUMBER(424);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(425);
	if ((frame[4].i) != (frame[3].i)) goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(427);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ArrayBlockingQueue_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:contains", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(439);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(441);
	if (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(442);
	frame[3].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putIndex);
	LINE_NUMBER(443);
	frame[4].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex);
	}
label_6:;
	{
	LINE_NUMBER(445);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(446);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(447);
	INST_IINC(4, 1);
	if ((frame[4].i) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(448);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(449);
	if ((frame[4].i) != (frame[3].i)) goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(451);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:toArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(469);
	frame[2].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count);
	LINE_NUMBER(470);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(471);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex));
	LINE_NUMBER(472);
	if ((frame[2].i) > (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex), (frame[1].o), (jint(0)), (frame[2].i));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex), (frame[1].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(476);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (frame[3].i), ((frame[2].i) - (frame[3].i)));
	}
label_6:;
	{
	LINE_NUMBER(478);
	popStackFrame(ctx, self);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:toArray", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(519);
	frame[3].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count);
	LINE_NUMBER(520);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(521);
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(522);
	sp[0].o = frame[1].o;
	LINE_NUMBER(523);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	jint temp0 = frame[3].i;
	LINE_NUMBER(522);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, temp0);
	frame[1].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(524);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex));
	LINE_NUMBER(525);
	if ((frame[3].i) > (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(526);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex), (frame[1].o), (jint(0)), (frame[3].i));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(528);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex), (frame[1].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(529);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[1].o), (frame[5].i), ((frame[3].i) - (frame[5].i)));
	}
label_11:;
	{
	LINE_NUMBER(531);
	if ((frame[4].i) <= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(532);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(533);
	popStackFrame(ctx, self);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(537);
	frame[1].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count);
	LINE_NUMBER(538);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(539);
	popStackFrame(ctx, self);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_2:;
	{
	LINE_NUMBER(541);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(542);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(543);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (91));
	LINE_NUMBER(544);
	frame[4].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex);
	}
label_7:;
	{
	LINE_NUMBER(545);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(546);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[5].o) != (frame[0].o)) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this Collection)"_j));
	goto label_10;
label_9:;
	INST_ALOAD(5);
label_10:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(547);
	INST_IINC(1, -1);
	if ((frame[1].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (93));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (44));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (32));
	LINE_NUMBER(550);
	INST_IINC(4, 1);
	if ((frame[4].i) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_15;
	}
	{
	LINE_NUMBER(551);
	frame[4].i = (jint(0));
	}
label_15:;
	LINE_NUMBER(552);
	goto label_7;

	popStackFrame(ctx);
}

void M_java_util_concurrent_ArrayBlockingQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:clear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(561);
	frame[2].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count);
	LINE_NUMBER(562);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(563);
	frame[3].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putIndex);
	LINE_NUMBER(564);
	frame[4].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex);
	}
label_6:;
	{
	LINE_NUMBER(566);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)) = (jobject(nullptr));
	LINE_NUMBER(567);
	INST_IINC(4, 1);
	if ((frame[4].i) != (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_8;
	}
	{
	LINE_NUMBER(568);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(569);
	if ((frame[4].i) != (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(570);
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex = (frame[3].i);
	LINE_NUMBER(571);
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count = (jint(0));
	}
label_3:;
	LINE_NUMBER(573);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:drainTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(582);
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(2147483647)));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:drainTo", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(592);
	SM_java_util_concurrent_ArrayBlockingQueue_checkNotNull_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(593);
	if ((frame[1].o) != (frame[0].o)) goto label_8;
	}
	{
	LINE_NUMBER(594);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(595);
	if ((frame[2].i) > 0) goto label_10;
	}
	{
	LINE_NUMBER(596);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(598);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[2].i), ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count));
	frame[4].i = temp0;
	LINE_NUMBER(599);
	frame[5].i = ((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex);
	LINE_NUMBER(600);
	frame[6].i = (jint(0));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(602);
	if ((frame[6].i) >= (frame[4].i)) goto label_15;
	}
	{
	LINE_NUMBER(604);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(605);
	jint temp0 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[7].o));
	LINE_NUMBER(606);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)) = (jobject(nullptr));
	LINE_NUMBER(607);
	INST_IINC(5, 1);
	if ((frame[5].i) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_20;
	}
	{
	LINE_NUMBER(608);
	frame[5].i = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(609);
	INST_IINC(6, 1);
	LINE_NUMBER(610);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_15:;
	{
	LINE_NUMBER(611);
	frame[7].i = (frame[4].i);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(614);
	if ((frame[6].i) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count) - (frame[6].i));
	LINE_NUMBER(616);
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex = (frame[5].i);
	}
label_23:;
	{
	LINE_NUMBER(611);
	popStackFrame(ctx, self);
	return (frame[7].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(614);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ILOAD(6);
	if ((--sp)->i <= 0) goto label_26;
	{
	LINE_NUMBER(615);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK(sp[0].o))->F_count) - (frame[6].i));
	LINE_NUMBER(616);
	((java_util_concurrent_ArrayBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeIndex = (frame[5].i);
	}
label_26:;
	{
	LINE_NUMBER(618);
	throwException(ctx, (frame[8].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ArrayBlockingQueue_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ArrayBlockingQueue:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(631);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ArrayBlockingQueue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractQueue_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_clear,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_size_R_int,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_poll_R_java_lang_Object,
	(void *) M_java_util_AbstractQueue_remove_R_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_peek_R_java_lang_Object,
	(void *) M_java_util_AbstractQueue_element_R_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_put_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_take_R_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_remainingCapacity_R_int,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_R_int,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_int_R_int,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_dec_int_R_int,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_itemAt_int_R_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_enqueue_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_dequeue_R_java_lang_Object,
	(void *) M_java_util_concurrent_ArrayBlockingQueue_removeAt_int,
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
	{ "dec", "(I)I" },
	{ "itemAt", "(I)Ljava/lang/Object;" },
	{ "enqueue", "(Ljava/lang/Object;)V" },
	{ "dequeue", "()Ljava/lang/Object;" },
	{ "removeAt", "(I)V" },
};

static jclass interfaces[] { &class_java_util_concurrent_BlockingQueue, &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_ArrayBlockingQueue_serialVersionUID, "J", 26 },
	{ "items", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_concurrent_ArrayBlockingQueue, F_items), "[Ljava/lang/Object;", 16 },
	{ "takeIndex", &class_int, offsetof(java_util_concurrent_ArrayBlockingQueue, F_takeIndex), "I", 64 },
	{ "putIndex", &class_int, offsetof(java_util_concurrent_ArrayBlockingQueue, F_putIndex), "I", 64 },
	{ "count", &class_int, offsetof(java_util_concurrent_ArrayBlockingQueue, F_count), "I", 64 },
};

static MethodMetadata methods[] {
	{ "dec", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_dec_int_R_int, VTABLE_java_util_concurrent_ArrayBlockingQueue_dec_int_R_int, "(I)I", 48 },
	{ "itemAt", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_itemAt_int_R_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_itemAt_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 48 },
	{ "checkNotNull", (intptr_t) SM_java_util_concurrent_ArrayBlockingQueue_checkNotNull_java_lang_Object, 0, "(Ljava/lang/Object;)V", 42 },
	{ "enqueue", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_enqueue_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_enqueue_java_lang_Object, "(Ljava/lang/Object;)V", 34 },
	{ "dequeue", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_dequeue_R_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_dequeue_R_java_lang_Object, "()Ljava/lang/Object;", 34 },
	{ "removeAt", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_removeAt_int, VTABLE_java_util_concurrent_ArrayBlockingQueue_removeAt_int, "(I)V", 32 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ArrayBlockingQueue_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ArrayBlockingQueue_int_boolean, 0, "(IZ)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ArrayBlockingQueue_int_boolean_java_util_Collection, 0, "(IZLjava/util/Collection;)V", 1 },
	{ "add", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_add_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ArrayBlockingQueue_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "offer", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "put", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_put_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_put_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "offer", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean, "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "poll", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_poll_R_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_poll_R_java_lang_Object, "()Ljava/lang/Object;", 33 },
	{ "take", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_take_R_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_take_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "poll", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 1 },
	{ "peek", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_peek_R_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_peek_R_java_lang_Object, "()Ljava/lang/Object;", 33 },
	{ "size", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_size_R_int, VTABLE_java_util_concurrent_ArrayBlockingQueue_size_R_int, "()I", 33 },
	{ "remainingCapacity", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_remainingCapacity_R_int, VTABLE_java_util_concurrent_ArrayBlockingQueue_remainingCapacity_R_int, "()I", 33 },
	{ "remove", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_remove_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ArrayBlockingQueue_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "contains", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_contains_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_ArrayBlockingQueue_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "toArray", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_toArray_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 33 },
	{ "toArray", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_ArrayBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 33 },
	{ "toString", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_toString_R_java_lang_String, VTABLE_java_util_concurrent_ArrayBlockingQueue_toString_R_java_lang_String, "()Ljava/lang/String;", 33 },
	{ "clear", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_clear, VTABLE_java_util_concurrent_ArrayBlockingQueue_clear, "()V", 33 },
	{ "drainTo", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_R_int, VTABLE_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_R_int, "(Ljava/util/Collection;)I", 33 },
	{ "drainTo", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_int_R_int, VTABLE_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_int_R_int, "(Ljava/util/Collection;I)I", 33 },
	{ "iterator", (intptr_t) M_java_util_concurrent_ArrayBlockingQueue_iterator_R_java_util_Iterator, VTABLE_java_util_concurrent_ArrayBlockingQueue_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 33 },
};

Class class_java_util_concurrent_ArrayBlockingQueue{
		.nativeName = (intptr_t) "java/util/concurrent/ArrayBlockingQueue",
		.parentClass = (intptr_t) &class_java_util_AbstractQueue,
		.size = sizeof(java_util_concurrent_ArrayBlockingQueue),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ArrayBlockingQueue,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ArrayBlockingQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ArrayBlockingQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ArrayBlockingQueue = registerClass(&class_java_util_concurrent_ArrayBlockingQueue);

}
