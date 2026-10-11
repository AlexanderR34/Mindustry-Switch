#include "java/util/ArrayDeque.h"
#include "java/lang/Math.h"
#include "java/util/Iterator.h"
#include "java/util/Deque.h"
#include "java/util/ArrayDeque_ReverseArrayDequeIterator.h"
#include "java/util/ArrayDeque_DequeStatus.h"
#include "java/lang/Iterable.h"
#include "java/util/ArrayDeque_ArrayDequeIterator.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/ArrayDeque.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/AbstractCollection.h"
#include "java/lang/System.h"

extern "C" {

jint SF_java_util_ArrayDeque_DEFAULT_SIZE;

void mark_java_util_ArrayDeque(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractCollection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_ArrayDeque *) object;
	if (self->F_status)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_status)->clazz)->markFunction)((jobject) self->F_status, mark, depth + 1);
	if (self->F_elements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elements)->clazz)->markFunction)((jobject) self->F_elements, mark, depth + 1);
}

void clinit_java_util_ArrayDeque(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractCollection(ctx);
	SF_java_util_ArrayDeque_DEFAULT_SIZE = jint(16);
}

void init_java_util_ArrayDeque(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(179);
	init_java_util_ArrayDeque_int(ctx, (frame[0].o), (16));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_ArrayDeque_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(190);
	init_java_util_AbstractCollection(ctx, (frame[0].o));
	LINE_NUMBER(191);
	jint temp0 = (jint)M_java_util_ArrayDeque_countInitSize_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_elements = (jref) sp[1].o;
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp1 = jint(0);
	((java_util_ArrayDeque *) NULL_CHECK(sp[1].o))->F_rear = temp1;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_front = temp1;
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(195);
	((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_modCount = (jint(0));
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_ArrayDeque_countInitSize_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:countInitSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[1].i), (16));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void init_java_util_ArrayDeque_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	init_java_util_AbstractCollection(ctx, (frame[0].o));
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = (jint)M_java_util_ArrayDeque_countInitSize_int_R_int(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, temp1);
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_elements = (jref) sp[1].o;
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp2 = jint(0);
	((java_util_ArrayDeque *) NULL_CHECK(sp[1].o))->F_rear = temp2;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_front = temp2;
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(220);
	((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_modCount = (jint(0));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(222);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)M_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque_addFirst_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:addFirst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(237);
	jint temp0 = (jint)((func_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque_addLast_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:addLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	jint temp0 = (jint)M_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:offerFirst", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(264);
	M_java_util_ArrayDeque_checkNull_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(265);
	M_java_util_ArrayDeque_checkAndExpand(ctx, (frame[0].o));
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_java_util_ArrayDeque_circularSmallerPos_int_R_int(ctx, (frame[0].o), ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front));
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_front = temp0;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front)) = (frame[1].o);
	LINE_NUMBER(268);
	M_java_util_ArrayDeque_resetStatus_boolean(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_offerLast_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:offerLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(284);
	jint temp0 = (jint)M_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:offer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)M_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)M_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque_push_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:push", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_removeFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:removeFirst", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	M_java_util_ArrayDeque_checkEmpty(ctx, (frame[0].o));
	LINE_NUMBER(337);
	sp[0].o = (jobject)M_java_util_ArrayDeque_removePollFirstImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_remove_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_java_util_ArrayDeque_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayDeque_removeFirst_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:pop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_java_util_ArrayDeque_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayDeque_removeFirst_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_removeLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:removeLast", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(374);
	M_java_util_ArrayDeque_checkEmpty(ctx, (frame[0].o));
	LINE_NUMBER(375);
	sp[0].o = (jobject)M_java_util_ArrayDeque_removeLastImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_pollFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:pollFirst", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_util_ArrayDeque_removePollFirstImpl_R_java_lang_Object(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_poll_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:poll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_java_util_ArrayDeque_pollFirst_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayDeque_pollFirst_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_pollLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:pollLast", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_util_ArrayDeque_removeLastImpl_R_java_lang_Object(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_getFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:getFirst", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(418);
	M_java_util_ArrayDeque_checkEmpty(ctx, (frame[0].o));
	LINE_NUMBER(419);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front)));
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_element_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:element", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_java_util_ArrayDeque_getFirst_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayDeque_getFirst_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_getLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:getLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(444);
	M_java_util_ArrayDeque_checkEmpty(ctx, (frame[0].o));
	LINE_NUMBER(445);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	jint temp0 = (jint)M_java_util_ArrayDeque_circularSmallerPos_int_R_int(ctx, (frame[0].o), ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_peekFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:peekFirst", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:peek", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_peekLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:peekLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	jint temp0 = (jint)M_java_util_ArrayDeque_circularSmallerPos_int_R_int(ctx, (frame[0].o), ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp += 1;
	}
label_2:;
	LINE_NUMBER(476);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque_checkNull_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:checkNull", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(481);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(482);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(484);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque_checkEmpty(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:checkEmpty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(488);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(490);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_ArrayDeque_circularSmallerPos_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:circularSmallerPos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(493);
	if (((frame[1].i) - (jint(1))) >= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (frame[1].i) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_ArrayDeque_circularBiggerPos_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:circularBiggerPos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(497);
	jint temp0 = (frame[1].i) + (jint(1));
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	jint temp0 = (frame[1].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque_checkAndExpand(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:checkAndExpand", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Full;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	LINE_NUMBER(507);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(509);
	jint temp0 = jint(2147483647);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(510);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(513);
	frame[2].i = ((frame[1].i) << (jint(1)));
	LINE_NUMBER(515);
	if ((frame[2].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(516);
	frame[2].i = (jint(2147483647));
	}
label_7:;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(519);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front), (frame[3].o), (jint(0)), ((frame[1].i) - ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front)));
	LINE_NUMBER(520);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), ((frame[1].i) - ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front)), ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front));
	LINE_NUMBER(521);
	((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front = (jint(0));
	LINE_NUMBER(522);
	((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear = (frame[1].i);
	LINE_NUMBER(523);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Normal;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(524);
	((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements = (jref) (frame[3].o);
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque_resetStatus_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:resetStatus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(534);
	if (((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front) != ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear)) goto label_1;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_3;
	}
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	(sp++)->o = SF_java_util_ArrayDeque$DequeStatus_Full;
	goto label_4;
label_3:;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	(sp++)->o = SF_java_util_ArrayDeque$DequeStatus_Empty;
label_4:;
	sp -= 2;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	goto label_5;
label_1:;
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Normal;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	}
label_5:;
	LINE_NUMBER(539);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:addLastImpl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(542);
	M_java_util_ArrayDeque_checkNull_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(543);
	M_java_util_ArrayDeque_checkAndExpand(ctx, (frame[0].o));
	LINE_NUMBER(544);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear)) = (frame[1].o);
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_java_util_ArrayDeque_circularBiggerPos_int_R_int(ctx, (frame[0].o), ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear));
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_rear = temp0;
	LINE_NUMBER(546);
	M_java_util_ArrayDeque_resetStatus_boolean(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_removePollFirstImpl_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:removePollFirstImpl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front)));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front)) = (jobject(nullptr));
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_java_util_ArrayDeque_circularBiggerPos_int_R_int(ctx, (frame[0].o), ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front));
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_front = temp0;
	LINE_NUMBER(555);
	M_java_util_ArrayDeque_resetStatus_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(556);
	sp[0].o = frame[0].o;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_removeLastImpl_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:removeLastImpl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(561);
	jint temp0 = (jint)M_java_util_ArrayDeque_circularSmallerPos_int_R_int(ctx, (frame[0].o), ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear));
	frame[1].i = temp0;
	LINE_NUMBER(562);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(563);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(564);
	((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear = (frame[1].i);
	LINE_NUMBER(565);
	M_java_util_ArrayDeque_resetStatus_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(566);
	sp[0].o = frame[0].o;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_removeFirstOccurrence_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:removeFirstOccurrence", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(580);
	jint temp0 = (jint)M_java_util_ArrayDeque_removeFirstOccurrenceImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(595);
	jint temp0 = (jint)M_java_util_ArrayDeque_removeFirstOccurrenceImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_removeLastOccurrence_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:removeLastOccurrence", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(608);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((func_java_util_ArrayDeque_descendingIterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayDeque_descendingIterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(610);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(612);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_removeFirstOccurrenceImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:removeFirstOccurrenceImpl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(621);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)((func_java_util_ArrayDeque_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayDeque_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(623);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(625);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(626);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(630);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque_removeInternal_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:removeInternal", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(639);
	frame[3].i = (frame[1].i);
	LINE_NUMBER(640);
	if ((frame[2].i) == 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(641);
	if ((frame[3].i) == ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front)) goto label_4;
	}
	{
	LINE_NUMBER(642);
	jint temp0 = (jint)M_java_util_ArrayDeque_circularSmallerPos_int_R_int(ctx, (frame[0].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(643);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	LINE_NUMBER(644);
	frame[3].i = (frame[4].i);
	LINE_NUMBER(645);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(646);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_java_util_ArrayDeque_circularBiggerPos_int_R_int(ctx, (frame[0].o), ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front));
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_front = temp0;
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(648);
	if ((frame[3].i) == ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear)) goto label_10;
	}
	{
	LINE_NUMBER(649);
	jint temp0 = (jint)M_java_util_ArrayDeque_circularBiggerPos_int_R_int(ctx, (frame[0].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(650);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	LINE_NUMBER(651);
	frame[3].i = (frame[4].i);
	LINE_NUMBER(652);
	goto label_2;
	}
label_10:;
	{
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_java_util_ArrayDeque_circularSmallerPos_int_R_int(ctx, (frame[0].o), ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear));
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_rear = temp0;
	}
label_9:;
	{
	LINE_NUMBER(655);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(656);
	M_java_util_ArrayDeque_resetStatus_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_ArrayDeque_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Full;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(668);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_1:;
	{
	LINE_NUMBER(670);
	if (((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front) > ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear)) goto label_3;
	}
	{
	jint temp0 = ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear) - ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front);
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(671);
	jint temp0 = (jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear;
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	jint temp1 = (temp0 + (((jarray) nullCheck(ctx, sp[0].o))->length)) - ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front);
	sp[0].i = temp1;
	sp += 1;
	}
label_4:;
	LINE_NUMBER(670);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:isEmpty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(682);
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_util_ArrayDeque_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayDeque_size_R_int])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_1;
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

jbool M_java_util_ArrayDeque_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(696);
	if ((jobject(nullptr)) == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(697);
	clinit_java_util_ArrayDeque$ArrayDequeIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayDeque$ArrayDequeIterator);
	init_java_util_ArrayDeque$ArrayDequeIterator_java_util_ArrayDeque(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(698);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(699);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:clear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(716);
	frame[1].i = ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front);
	}
label_3:;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(719);
	jint temp0 = (jint)M_java_util_ArrayDeque_circularBiggerPos_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[1].i = temp0;
	LINE_NUMBER(720);
	if ((frame[1].i) != ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear)) goto label_3;
	}
	{
	LINE_NUMBER(721);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(723);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_util_ArrayDeque *) NULL_CHECK(sp[1].o))->F_rear = temp0;
	((java_util_ArrayDeque *) NULL_CHECK(sp[0].o))->F_front = temp0;
	LINE_NUMBER(724);
	((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_modCount = (jint(0));
	LINE_NUMBER(725);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(737);
	clinit_java_util_ArrayDeque$ArrayDequeIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayDeque$ArrayDequeIterator);
	init_java_util_ArrayDeque$ArrayDequeIterator_java_util_ArrayDeque(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:descendingIterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(747);
	clinit_java_util_ArrayDeque$ReverseArrayDequeIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayDeque$ReverseArrayDequeIterator);
	init_java_util_ArrayDeque$ReverseArrayDequeIterator_java_util_ArrayDeque(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_ArrayDeque_access$000_java_util_ArrayDeque_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_front);
	}

	popStackFrame(ctx);
}

jint SM_java_util_ArrayDeque_access$100_java_util_ArrayDeque_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_modCount);
	}

	popStackFrame(ctx);
}

jint SM_java_util_ArrayDeque_access$200_java_util_ArrayDeque_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:access$200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return ((jint)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_rear);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_ArrayDeque_access$300_java_util_ArrayDeque_R_java_util_ArrayDeque$DequeStatus(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_status;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_ArrayDeque_access$400_java_util_ArrayDeque_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((java_util_ArrayDeque *) NULL_CHECK((frame[0].o)))->F_elements;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_ArrayDeque_access$500_java_util_ArrayDeque_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:access$500", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)M_java_util_ArrayDeque_circularBiggerPos_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_ArrayDeque_access$600_java_util_ArrayDeque_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:access$600", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)M_java_util_ArrayDeque_circularSmallerPos_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_java_util_ArrayDeque_access$700_java_util_ArrayDeque_int_boolean(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque:access$700", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(33);
	M_java_util_ArrayDeque_removeInternal_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_ArrayDeque[] {
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
	(void *) M_java_util_ArrayDeque_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_ArrayDeque_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_ArrayDeque_clear,
	(void *) M_java_util_ArrayDeque_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_ArrayDeque_isEmpty_R_boolean,
	(void *) M_java_util_ArrayDeque_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_ArrayDeque_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_ArrayDeque_offer_java_lang_Object_R_boolean,
	(void *) M_java_util_ArrayDeque_poll_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_remove_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_peek_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_element_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_addFirst_java_lang_Object,
	(void *) M_java_util_ArrayDeque_addLast_java_lang_Object,
	(void *) M_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean,
	(void *) M_java_util_ArrayDeque_offerLast_java_lang_Object_R_boolean,
	(void *) M_java_util_ArrayDeque_removeFirst_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_removeLast_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_pollFirst_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_pollLast_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_getFirst_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_getLast_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_peekFirst_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_peekLast_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_removeFirstOccurrence_java_lang_Object_R_boolean,
	(void *) M_java_util_ArrayDeque_removeLastOccurrence_java_lang_Object_R_boolean,
	(void *) M_java_util_ArrayDeque_push_java_lang_Object,
	(void *) M_java_util_ArrayDeque_pop_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_descendingIterator_R_java_util_Iterator,
	(void *) M_java_util_ArrayDeque_countInitSize_int_R_int,
	(void *) M_java_util_ArrayDeque_checkNull_java_lang_Object,
	(void *) M_java_util_ArrayDeque_checkEmpty,
	(void *) M_java_util_ArrayDeque_circularSmallerPos_int_R_int,
	(void *) M_java_util_ArrayDeque_circularBiggerPos_int_R_int,
	(void *) M_java_util_ArrayDeque_checkAndExpand,
	(void *) M_java_util_ArrayDeque_resetStatus_boolean,
	(void *) M_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean,
	(void *) M_java_util_ArrayDeque_removePollFirstImpl_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_removeLastImpl_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque_removeFirstOccurrenceImpl_java_lang_Object_R_boolean,
	(void *) M_java_util_ArrayDeque_removeInternal_int_boolean,
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
	{ "addFirst", "(Ljava/lang/Object;)V" },
	{ "addLast", "(Ljava/lang/Object;)V" },
	{ "offerFirst", "(Ljava/lang/Object;)Z" },
	{ "offerLast", "(Ljava/lang/Object;)Z" },
	{ "removeFirst", "()Ljava/lang/Object;" },
	{ "removeLast", "()Ljava/lang/Object;" },
	{ "pollFirst", "()Ljava/lang/Object;" },
	{ "pollLast", "()Ljava/lang/Object;" },
	{ "getFirst", "()Ljava/lang/Object;" },
	{ "getLast", "()Ljava/lang/Object;" },
	{ "peekFirst", "()Ljava/lang/Object;" },
	{ "peekLast", "()Ljava/lang/Object;" },
	{ "removeFirstOccurrence", "(Ljava/lang/Object;)Z" },
	{ "removeLastOccurrence", "(Ljava/lang/Object;)Z" },
	{ "push", "(Ljava/lang/Object;)V" },
	{ "pop", "()Ljava/lang/Object;" },
	{ "descendingIterator", "()Ljava/util/Iterator;" },
	{ "countInitSize", "(I)I" },
	{ "checkNull", "(Ljava/lang/Object;)V" },
	{ "checkEmpty", "()V" },
	{ "circularSmallerPos", "(I)I" },
	{ "circularBiggerPos", "(I)I" },
	{ "checkAndExpand", "()V" },
	{ "resetStatus", "(Z)V" },
	{ "addLastImpl", "(Ljava/lang/Object;)Z" },
	{ "removePollFirstImpl", "()Ljava/lang/Object;" },
	{ "removeLastImpl", "()Ljava/lang/Object;" },
	{ "removeFirstOccurrenceImpl", "(Ljava/lang/Object;)Z" },
	{ "removeInternal", "(IZ)V" },
};

static jclass interfaces[] { &class_java_util_Deque, };

static jclass innerClasses[] {
	&class_java_util_ArrayDeque$DequeStatus,
	&class_java_util_ArrayDeque$ArrayDequeIterator,
	&class_java_util_ArrayDeque$ReverseArrayDequeIterator,
};

static FieldMetadata fields[] {
	{ "DEFAULT_SIZE", &class_int, (intptr_t) &SF_java_util_ArrayDeque_DEFAULT_SIZE, "I", 26 },
	{ "status", &class_java_util_ArrayDeque$DequeStatus, offsetof(java_util_ArrayDeque, F_status), "Ljava/util/ArrayDeque$DequeStatus;", 130 },
	{ "modCount", &class_int, offsetof(java_util_ArrayDeque, F_modCount), "I", 130 },
	{ "front", &class_int, offsetof(java_util_ArrayDeque, F_front), "I", 130 },
	{ "rear", &class_int, offsetof(java_util_ArrayDeque, F_rear), "I", 130 },
	{ "elements", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_ArrayDeque, F_elements), "[Ljava/lang/Object;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_ArrayDeque, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_ArrayDeque_int, 0, "(I)V", 1 },
	{ "countInitSize", (intptr_t) M_java_util_ArrayDeque_countInitSize_int_R_int, VTABLE_java_util_ArrayDeque_countInitSize_int_R_int, "(I)I", 2 },
	{ "<init>", (intptr_t) init_java_util_ArrayDeque_java_util_Collection, 0, "(Ljava/util/Collection;)V", 1 },
	{ "addFirst", (intptr_t) M_java_util_ArrayDeque_addFirst_java_lang_Object, VTABLE_java_util_ArrayDeque_addFirst_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "addLast", (intptr_t) M_java_util_ArrayDeque_addLast_java_lang_Object, VTABLE_java_util_ArrayDeque_addLast_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "offerFirst", (intptr_t) M_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "offerLast", (intptr_t) M_java_util_ArrayDeque_offerLast_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_offerLast_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "offer", (intptr_t) M_java_util_ArrayDeque_offer_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_offer_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "add", (intptr_t) M_java_util_ArrayDeque_add_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "push", (intptr_t) M_java_util_ArrayDeque_push_java_lang_Object, VTABLE_java_util_ArrayDeque_push_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "removeFirst", (intptr_t) M_java_util_ArrayDeque_removeFirst_R_java_lang_Object, VTABLE_java_util_ArrayDeque_removeFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_ArrayDeque_remove_R_java_lang_Object, VTABLE_java_util_ArrayDeque_remove_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pop", (intptr_t) M_java_util_ArrayDeque_pop_R_java_lang_Object, VTABLE_java_util_ArrayDeque_pop_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "removeLast", (intptr_t) M_java_util_ArrayDeque_removeLast_R_java_lang_Object, VTABLE_java_util_ArrayDeque_removeLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pollFirst", (intptr_t) M_java_util_ArrayDeque_pollFirst_R_java_lang_Object, VTABLE_java_util_ArrayDeque_pollFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "poll", (intptr_t) M_java_util_ArrayDeque_poll_R_java_lang_Object, VTABLE_java_util_ArrayDeque_poll_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pollLast", (intptr_t) M_java_util_ArrayDeque_pollLast_R_java_lang_Object, VTABLE_java_util_ArrayDeque_pollLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getFirst", (intptr_t) M_java_util_ArrayDeque_getFirst_R_java_lang_Object, VTABLE_java_util_ArrayDeque_getFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "element", (intptr_t) M_java_util_ArrayDeque_element_R_java_lang_Object, VTABLE_java_util_ArrayDeque_element_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getLast", (intptr_t) M_java_util_ArrayDeque_getLast_R_java_lang_Object, VTABLE_java_util_ArrayDeque_getLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peekFirst", (intptr_t) M_java_util_ArrayDeque_peekFirst_R_java_lang_Object, VTABLE_java_util_ArrayDeque_peekFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peek", (intptr_t) M_java_util_ArrayDeque_peek_R_java_lang_Object, VTABLE_java_util_ArrayDeque_peek_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peekLast", (intptr_t) M_java_util_ArrayDeque_peekLast_R_java_lang_Object, VTABLE_java_util_ArrayDeque_peekLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "checkNull", (intptr_t) M_java_util_ArrayDeque_checkNull_java_lang_Object, VTABLE_java_util_ArrayDeque_checkNull_java_lang_Object, "(Ljava/lang/Object;)V", 2 },
	{ "checkEmpty", (intptr_t) M_java_util_ArrayDeque_checkEmpty, VTABLE_java_util_ArrayDeque_checkEmpty, "()V", 2 },
	{ "circularSmallerPos", (intptr_t) M_java_util_ArrayDeque_circularSmallerPos_int_R_int, VTABLE_java_util_ArrayDeque_circularSmallerPos_int_R_int, "(I)I", 2 },
	{ "circularBiggerPos", (intptr_t) M_java_util_ArrayDeque_circularBiggerPos_int_R_int, VTABLE_java_util_ArrayDeque_circularBiggerPos_int_R_int, "(I)I", 2 },
	{ "checkAndExpand", (intptr_t) M_java_util_ArrayDeque_checkAndExpand, VTABLE_java_util_ArrayDeque_checkAndExpand, "()V", 2 },
	{ "resetStatus", (intptr_t) M_java_util_ArrayDeque_resetStatus_boolean, VTABLE_java_util_ArrayDeque_resetStatus_boolean, "(Z)V", 2 },
	{ "addLastImpl", (intptr_t) M_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "removePollFirstImpl", (intptr_t) M_java_util_ArrayDeque_removePollFirstImpl_R_java_lang_Object, VTABLE_java_util_ArrayDeque_removePollFirstImpl_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "removeLastImpl", (intptr_t) M_java_util_ArrayDeque_removeLastImpl_R_java_lang_Object, VTABLE_java_util_ArrayDeque_removeLastImpl_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "removeFirstOccurrence", (intptr_t) M_java_util_ArrayDeque_removeFirstOccurrence_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_removeFirstOccurrence_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_ArrayDeque_remove_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeLastOccurrence", (intptr_t) M_java_util_ArrayDeque_removeLastOccurrence_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_removeLastOccurrence_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeFirstOccurrenceImpl", (intptr_t) M_java_util_ArrayDeque_removeFirstOccurrenceImpl_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_removeFirstOccurrenceImpl_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "removeInternal", (intptr_t) M_java_util_ArrayDeque_removeInternal_int_boolean, VTABLE_java_util_ArrayDeque_removeInternal_int_boolean, "(IZ)V", 2 },
	{ "size", (intptr_t) M_java_util_ArrayDeque_size_R_int, VTABLE_java_util_ArrayDeque_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_java_util_ArrayDeque_isEmpty_R_boolean, VTABLE_java_util_ArrayDeque_isEmpty_R_boolean, "()Z", 1 },
	{ "contains", (intptr_t) M_java_util_ArrayDeque_contains_java_lang_Object_R_boolean, VTABLE_java_util_ArrayDeque_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_ArrayDeque_clear, VTABLE_java_util_ArrayDeque_clear, "()V", 1 },
	{ "iterator", (intptr_t) M_java_util_ArrayDeque_iterator_R_java_util_Iterator, VTABLE_java_util_ArrayDeque_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "descendingIterator", (intptr_t) M_java_util_ArrayDeque_descendingIterator_R_java_util_Iterator, VTABLE_java_util_ArrayDeque_descendingIterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "access$000", (intptr_t) SM_java_util_ArrayDeque_access$000_java_util_ArrayDeque_R_int, 0, "(Ljava/util/ArrayDeque;)I", 4104 },
	{ "access$100", (intptr_t) SM_java_util_ArrayDeque_access$100_java_util_ArrayDeque_R_int, 0, "(Ljava/util/ArrayDeque;)I", 4104 },
	{ "access$200", (intptr_t) SM_java_util_ArrayDeque_access$200_java_util_ArrayDeque_R_int, 0, "(Ljava/util/ArrayDeque;)I", 4104 },
	{ "access$300", (intptr_t) SM_java_util_ArrayDeque_access$300_java_util_ArrayDeque_R_java_util_ArrayDeque$DequeStatus, 0, "(Ljava/util/ArrayDeque;)Ljava/util/ArrayDeque$DequeStatus;", 4104 },
	{ "access$400", (intptr_t) SM_java_util_ArrayDeque_access$400_java_util_ArrayDeque_R_Array1_java_lang_Object, 0, "(Ljava/util/ArrayDeque;)[Ljava/lang/Object;", 4104 },
	{ "access$500", (intptr_t) SM_java_util_ArrayDeque_access$500_java_util_ArrayDeque_int_R_int, 0, "(Ljava/util/ArrayDeque;I)I", 4104 },
	{ "access$600", (intptr_t) SM_java_util_ArrayDeque_access$600_java_util_ArrayDeque_int_R_int, 0, "(Ljava/util/ArrayDeque;I)I", 4104 },
	{ "access$700", (intptr_t) SM_java_util_ArrayDeque_access$700_java_util_ArrayDeque_int_boolean, 0, "(Ljava/util/ArrayDeque;IZ)V", 4104 },
};

Class class_java_util_ArrayDeque{
		.nativeName = (intptr_t) "java/util/ArrayDeque",
		.parentClass = (intptr_t) &class_java_util_AbstractCollection,
		.size = sizeof(java_util_ArrayDeque),
		.classVtable = (intptr_t) vtable_java_util_ArrayDeque,
		.staticInitializer = (intptr_t) clinit_java_util_ArrayDeque,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_ArrayDeque,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 52,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 60,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_ArrayDeque = registerClass(&class_java_util_ArrayDeque);

}
