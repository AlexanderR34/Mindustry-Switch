#include "java/util/LinkedList.h"
#include "java/util/LinkedList_Link.h"
#include "java/util/Iterator.h"
#include "java/util/Deque.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/reflect/Array.h"
#include "java/util/AbstractSequentialList.h"
#include "java/util/LinkedList_LinkIterator.h"
#include "java/util/ArrayList.h"
#include "java/lang/Iterable.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/ListIterator.h"
#include "java/util/LinkedList_ReverseLinkIterator.h"
#include "java/util/LinkedList.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_LinkedList(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractSequentialList(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_LinkedList *) object;
	if (self->F_voidLink)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_voidLink)->clazz)->markFunction)((jobject) self->F_voidLink, mark, depth + 1);
}

void clinit_java_util_LinkedList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractSequentialList(ctx);
}

void init_java_util_LinkedList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedList(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(231);
	init_java_util_AbstractSequentialList(ctx, (frame[0].o));
	LINE_NUMBER(31);
	((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	clinit_java_util_LinkedList$Link(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_LinkedList$Link);
	init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link(ctx, sp[1].o, (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)));
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_voidLink = (jref) sp[1].o;
	LINE_NUMBER(233);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous = (jref) sp[1].o;
	LINE_NUMBER(234);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_LinkedList_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	init_java_util_LinkedList(ctx, (frame[0].o));
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_java_util_LinkedList_addAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedList_addAll_java_util_Collection_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(266);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) > ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	frame[3].o = sp[0].o;
	LINE_NUMBER(268);
	if ((frame[1].i) >= (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)))) goto label_4;
	}
	{
	LINE_NUMBER(269);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) > (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(269);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	goto label_10;
label_4:;
	{
	LINE_NUMBER(273);
	frame[4].i = ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) <= (frame[1].i)) goto label_10;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_previous;
	frame[3].o = sp[0].o;
	LINE_NUMBER(273);
	INST_IINC(4, -1);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_previous;
	frame[4].o = sp[0].o;
	LINE_NUMBER(278);
	clinit_java_util_LinkedList$Link(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$Link);
	init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link(ctx, sp[0].o, (frame[2].o), (frame[4].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(279);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[4].o)))->F_next = (jref) (frame[5].o);
	LINE_NUMBER(280);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_previous = (jref) (frame[5].o);
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(283);
	goto label_20;
	}
label_1:;
	{
	LINE_NUMBER(284);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)M_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:addLastImpl", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	frame[2].o = sp[0].o;
	LINE_NUMBER(302);
	clinit_java_util_LinkedList$Link(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$Link);
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(303);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous = (jref) (frame[3].o);
	LINE_NUMBER(304);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:addAll", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(330);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) <= ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(331);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(333);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(334);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(337);
	if ((frame[2].o) != (frame[0].o)) goto label_6;
	}
	{
	LINE_NUMBER(338);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_java_util_Collection(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	goto label_8;
	}
label_6:;
	INST_ALOAD(2);
label_8:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(340);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	frame[5].o = sp[0].o;
	LINE_NUMBER(341);
	if ((frame[1].i) >= (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)))) goto label_11;
	}
	{
	LINE_NUMBER(342);
	frame[6].i = (jint(0));
	}
label_13:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_14;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	LINE_NUMBER(342);
	INST_IINC(6, 1);
	goto label_13;
	}
label_14:;
	goto label_17;
label_11:;
	{
	LINE_NUMBER(346);
	frame[6].i = ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_18:;
	{
	if ((frame[6].i) < (frame[1].i)) goto label_17;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[5].o)))->F_previous;
	frame[5].o = sp[0].o;
	LINE_NUMBER(346);
	INST_IINC(6, -1);
	goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[5].o)))->F_next;
	frame[6].o = sp[0].o;
	LINE_NUMBER(351);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[4].o)))(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(352);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(353);
	clinit_java_util_LinkedList$Link(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$Link);
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link(ctx, sp[0].o, sp[1].o, (frame[5].o), (jobject(nullptr)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(354);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[5].o)))->F_next = (jref) (frame[8].o);
	LINE_NUMBER(355);
	frame[5].o = (frame[8].o);
	LINE_NUMBER(356);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(357);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[5].o)))->F_next = (jref) (frame[6].o);
	LINE_NUMBER(358);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[6].o)))->F_previous = (jref) (frame[5].o);
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(360);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:addAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(375);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(378);
	if ((frame[1].o) != (frame[0].o)) goto label_4;
	}
	{
	LINE_NUMBER(379);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_java_util_Collection(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	goto label_6;
	}
label_4:;
	INST_ALOAD(1);
label_6:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(381);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	frame[4].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(383);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(384);
	clinit_java_util_LinkedList$Link(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$Link);
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link(ctx, sp[0].o, sp[1].o, (frame[4].o), (jobject(nullptr)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(385);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[4].o)))->F_next = (jref) (frame[6].o);
	LINE_NUMBER(386);
	frame[4].o = (frame[6].o);
	LINE_NUMBER(387);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(388);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(389);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous = (jref) (frame[4].o);
	LINE_NUMBER(390);
	sp[0].o = frame[0].o;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) + (frame[2].i));
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedList_addFirst_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:addFirst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(402);
	jint temp0 = (jint)M_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:addFirstImpl", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(407);
	clinit_java_util_LinkedList$Link(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$Link);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(409);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_previous = (jref) (frame[3].o);
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedList_addLast_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:addLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(422);
	jint temp0 = (jint)M_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedList_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:clear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(433);
	if (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(434);
	((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(435);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(436);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_5;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(438);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(439);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_previous = (jref) (jobject(nullptr));
	LINE_NUMBER(440);
	frame[1].o = (frame[2].o);
	LINE_NUMBER(441);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	frame[1].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(443);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_12;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_previous;
	frame[2].o = sp[0].o;
	LINE_NUMBER(445);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_previous = (jref) (jobject(nullptr));
	LINE_NUMBER(446);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(447);
	frame[1].o = (frame[2].o);
	LINE_NUMBER(448);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(450);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous = (jref) sp[1].o;
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	}
label_1:;
	LINE_NUMBER(453);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(466);
	if ((frame[1].o) == nullptr) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(467);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(468);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_data;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(474);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_data;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(486);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	frame[2].o = sp[0].o;
	LINE_NUMBER(488);
	if ((frame[1].i) >= (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)))) goto label_4;
	}
	{
	LINE_NUMBER(489);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) > (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(489);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	goto label_10;
label_4:;
	{
	LINE_NUMBER(493);
	frame[3].i = ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) <= (frame[1].i)) goto label_10;
	}
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_previous;
	frame[2].o = sp[0].o;
	LINE_NUMBER(493);
	INST_IINC(3, -1);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(499);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_getFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:getFirst", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)M_java_util_LinkedList_getFirstImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_getFirstImpl_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:getFirstImpl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(515);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(518);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_getLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:getLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	frame[1].o = sp[0].o;
	LINE_NUMBER(530);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(533);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_LinkedList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:indexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(538);
	frame[2].i = (jint(0));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(540);
	if ((frame[1].o) == nullptr) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(541);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(542);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_data;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_7:;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(546);
	INST_IINC(2, 1);
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(549);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_data;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_11:;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(554);
	INST_IINC(2, 1);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_util_LinkedList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(571);
	frame[2].i = ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(572);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	frame[3].o = sp[0].o;
	LINE_NUMBER(573);
	if ((frame[1].o) == nullptr) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(574);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(575);
	INST_IINC(2, -1);
	LINE_NUMBER(576);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_data;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_8:;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_previous;
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(582);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(583);
	INST_IINC(2, -1);
	LINE_NUMBER(584);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_data;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_12:;
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_previous;
	frame[3].o = sp[0].o;
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:listIterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(607);
	clinit_java_util_LinkedList$LinkIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$LinkIterator);
	init_java_util_LinkedList$LinkIterator_java_util_LinkedList_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(621);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	frame[2].o = sp[0].o;
	LINE_NUMBER(623);
	if ((frame[1].i) >= (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)))) goto label_4;
	}
	{
	LINE_NUMBER(624);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) > (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(624);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	goto label_10;
label_4:;
	{
	LINE_NUMBER(628);
	frame[3].i = ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[3].i) <= (frame[1].i)) goto label_10;
	}
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_previous;
	frame[2].o = sp[0].o;
	LINE_NUMBER(628);
	INST_IINC(3, -1);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_previous;
	frame[3].o = sp[0].o;
	LINE_NUMBER(633);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_next;
	frame[4].o = sp[0].o;
	LINE_NUMBER(634);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_next = (jref) (frame[4].o);
	LINE_NUMBER(635);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[4].o)))->F_previous = (jref) (frame[3].o);
	LINE_NUMBER(636);
	sp[0].o = frame[0].o;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(637);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(638);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(639);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_previous = (jref) (jobject(nullptr));
	LINE_NUMBER(640);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[2].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(642);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(647);
	jint temp0 = (jint)M_java_util_LinkedList_removeFirstOccurrenceImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_removeFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:removeFirst", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)M_java_util_LinkedList_removeFirstImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_removeFirstImpl_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:removeFirstImpl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(663);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(665);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(666);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous = (jref) sp[1].o;
	LINE_NUMBER(667);
	sp[0].o = frame[0].o;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(668);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(669);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(670);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_previous = (jref) (jobject(nullptr));
	LINE_NUMBER(671);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(673);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_removeLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:removeLast", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)M_java_util_LinkedList_removeLastImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_removeLastImpl_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:removeLastImpl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	frame[1].o = sp[0].o;
	LINE_NUMBER(689);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_previous;
	frame[2].o = sp[0].o;
	LINE_NUMBER(691);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous = (jref) (frame[2].o);
	LINE_NUMBER(692);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_LinkedList *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(694);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(695);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[1].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(697);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:descendingIterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(707);
	clinit_java_util_LinkedList$ReverseLinkIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$ReverseLinkIterator);
	init_java_util_LinkedList$ReverseLinkIterator_java_util_LinkedList_java_util_LinkedList(ctx, sp[0].o, (frame[0].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_offerFirst_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:offerFirst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(717);
	jint temp0 = (jint)M_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_offerLast_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:offerLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(727);
	jint temp0 = (jint)M_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_peekFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:peekFirst", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)M_java_util_LinkedList_peekFirstImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_peekLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:peekLast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_previous;
	frame[1].o = sp[0].o;
	LINE_NUMBER(748);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((java_util_LinkedList$Link *) NULL_CHECK(sp[-1].o))->F_data;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_pollFirst_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:pollFirst", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(758);
	if (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_util_LinkedList_removeFirstImpl_R_java_lang_Object(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_pollLast_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:pollLast", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(768);
	if (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_util_LinkedList_removeLastImpl_R_java_lang_Object(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:pop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)M_java_util_LinkedList_removeFirstImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_LinkedList_push_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:push", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(788);
	jint temp0 = (jint)M_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(789);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_removeFirstOccurrence_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:removeFirstOccurrence", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(798);
	jint temp0 = (jint)M_java_util_LinkedList_removeFirstOccurrenceImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_removeLastOccurrence_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:removeLastOccurrence", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(808);
	clinit_java_util_LinkedList$ReverseLinkIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$ReverseLinkIterator);
	init_java_util_LinkedList$ReverseLinkIterator_java_util_LinkedList_java_util_LinkedList(ctx, sp[0].o, (frame[0].o), (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(809);
	jint temp0 = (jint)M_java_util_LinkedList_removeOneOccurrence_java_lang_Object_java_util_Iterator_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_removeFirstOccurrenceImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:removeFirstOccurrenceImpl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(813);
	clinit_java_util_LinkedList$LinkIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedList$LinkIterator);
	init_java_util_LinkedList$LinkIterator_java_util_LinkedList_int(ctx, sp[0].o, (frame[0].o), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(814);
	jint temp0 = (jint)M_java_util_LinkedList_removeOneOccurrence_java_lang_Object_java_util_Iterator_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_removeOneOccurrence_java_lang_Object_java_util_Iterator_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:removeOneOccurrence", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_0:;
	{
	LINE_NUMBER(818);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(819);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(820);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_5;
	goto label_6;
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(821);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(822);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	LINE_NUMBER(824);
	goto label_0;
label_1:;
	{
	LINE_NUMBER(825);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(846);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	frame[3].o = sp[0].o;
	LINE_NUMBER(848);
	if ((frame[1].i) >= (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)))) goto label_4;
	}
	{
	LINE_NUMBER(849);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) > (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(849);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	goto label_10;
label_4:;
	{
	LINE_NUMBER(853);
	frame[4].i = ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) <= (frame[1].i)) goto label_10;
	}
	{
	LINE_NUMBER(854);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_previous;
	frame[3].o = sp[0].o;
	LINE_NUMBER(853);
	INST_IINC(4, -1);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(857);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_data;
	frame[4].o = sp[0].o;
	LINE_NUMBER(858);
	((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_data = (jref) (frame[2].o);
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_1:;
	{
	LINE_NUMBER(861);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_LinkedList_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(871);
	popStackFrame(ctx);
	return ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jbool M_java_util_LinkedList_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:offer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(875);
	jint temp0 = (jint)M_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_poll_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:poll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(879);
	if (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_LinkedList_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedList_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_remove_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(883);
	sp[0].o = (jobject)M_java_util_LinkedList_removeFirstImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:peek", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(887);
	sp[0].o = (jobject)M_java_util_LinkedList_peekFirstImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_peekFirstImpl_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:peekFirstImpl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(891);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(892);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((java_util_LinkedList$Link *) NULL_CHECK(sp[-1].o))->F_data;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_element_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:element", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)M_java_util_LinkedList_getFirstImpl_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(907);
	frame[1].i = (jint(0));
	LINE_NUMBER(908);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = sp[0].o;
	LINE_NUMBER(909);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(910);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(911);
	sp[0].o = frame[2].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	sp[1].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(912);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(914);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedList:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(935);
	frame[2].i = (jint(0));
	LINE_NUMBER(936);
	if (((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(937);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, ((jint)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(939);
	sp[0].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK(sp[0].o))->F_next;
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(940);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_LinkedList *) NULL_CHECK((frame[0].o)))->F_voidLink;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(941);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	sp[1].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(942);
	sp[0].o = (jobject)((java_util_LinkedList$Link *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(944);
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_8;
	}
	{
	LINE_NUMBER(945);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(947);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedList[] {
	(void *) M_java_util_AbstractList_hashCode_R_int,
	(void *) M_java_util_AbstractList_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_AbstractSequentialList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_LinkedList_add_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedList_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_LinkedList_clear,
	(void *) M_java_util_LinkedList_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_LinkedList_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_LinkedList_size_R_int,
	(void *) M_java_util_LinkedList_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_LinkedList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_LinkedList_add_int_java_lang_Object,
	(void *) M_java_util_LinkedList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_LinkedList_get_int_R_java_lang_Object,
	(void *) M_java_util_LinkedList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_LinkedList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_LinkedList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_LinkedList_remove_int_R_java_lang_Object,
	(void *) M_java_util_LinkedList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractList_subList_int_int_R_java_util_List,
	(void *) M_java_util_AbstractList_removeRange_int_int,
	(void *) M_java_util_LinkedList_offer_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedList_poll_R_java_lang_Object,
	(void *) M_java_util_LinkedList_remove_R_java_lang_Object,
	(void *) M_java_util_LinkedList_peek_R_java_lang_Object,
	(void *) M_java_util_LinkedList_element_R_java_lang_Object,
	(void *) M_java_util_LinkedList_addFirst_java_lang_Object,
	(void *) M_java_util_LinkedList_addLast_java_lang_Object,
	(void *) M_java_util_LinkedList_offerFirst_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedList_offerLast_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedList_removeFirst_R_java_lang_Object,
	(void *) M_java_util_LinkedList_removeLast_R_java_lang_Object,
	(void *) M_java_util_LinkedList_pollFirst_R_java_lang_Object,
	(void *) M_java_util_LinkedList_pollLast_R_java_lang_Object,
	(void *) M_java_util_LinkedList_getFirst_R_java_lang_Object,
	(void *) M_java_util_LinkedList_getLast_R_java_lang_Object,
	(void *) M_java_util_LinkedList_peekFirst_R_java_lang_Object,
	(void *) M_java_util_LinkedList_peekLast_R_java_lang_Object,
	(void *) M_java_util_LinkedList_removeFirstOccurrence_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedList_removeLastOccurrence_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedList_push_java_lang_Object,
	(void *) M_java_util_LinkedList_pop_R_java_lang_Object,
	(void *) M_java_util_LinkedList_descendingIterator_R_java_util_Iterator,
	(void *) M_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedList_getFirstImpl_R_java_lang_Object,
	(void *) M_java_util_LinkedList_removeFirstImpl_R_java_lang_Object,
	(void *) M_java_util_LinkedList_removeLastImpl_R_java_lang_Object,
	(void *) M_java_util_LinkedList_removeFirstOccurrenceImpl_java_lang_Object_R_boolean,
	(void *) M_java_util_LinkedList_removeOneOccurrence_java_lang_Object_java_util_Iterator_R_boolean,
	(void *) M_java_util_LinkedList_peekFirstImpl_R_java_lang_Object,
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
	{ "add", "(ILjava/lang/Object;)V" },
	{ "addAll", "(ILjava/util/Collection;)Z" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;)I" },
	{ "listIterator", "()Ljava/util/ListIterator;" },
	{ "listIterator", "(I)Ljava/util/ListIterator;" },
	{ "sort", "(Ljava/util/Comparator;)V" },
	{ "remove", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)Ljava/lang/Object;" },
	{ "subList", "(II)Ljava/util/List;" },
	{ "removeRange", "(II)V" },
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
	{ "addLastImpl", "(Ljava/lang/Object;)Z" },
	{ "addFirstImpl", "(Ljava/lang/Object;)Z" },
	{ "getFirstImpl", "()Ljava/lang/Object;" },
	{ "removeFirstImpl", "()Ljava/lang/Object;" },
	{ "removeLastImpl", "()Ljava/lang/Object;" },
	{ "removeFirstOccurrenceImpl", "(Ljava/lang/Object;)Z" },
	{ "removeOneOccurrence", "(Ljava/lang/Object;Ljava/util/Iterator;)Z" },
	{ "peekFirstImpl", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_List, &class_java_util_Deque, };

static jclass innerClasses[] {
	&class_java_util_LinkedList$Link,
	&class_java_util_LinkedList$LinkIterator,
	&class_java_util_LinkedList$ReverseLinkIterator,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(java_util_LinkedList, F_size), "I", 128 },
	{ "voidLink", &class_java_util_LinkedList$Link, offsetof(java_util_LinkedList, F_voidLink), "Ljava/util/LinkedList$Link;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedList, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_LinkedList_java_util_Collection, 0, "(Ljava/util/Collection;)V", 1 },
	{ "add", (intptr_t) M_java_util_LinkedList_add_int_java_lang_Object, VTABLE_java_util_LinkedList_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_java_util_LinkedList_add_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addLastImpl", (intptr_t) M_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "addAll", (intptr_t) M_java_util_LinkedList_addAll_int_java_util_Collection_R_boolean, VTABLE_java_util_LinkedList_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_LinkedList_addAll_java_util_Collection_R_boolean, VTABLE_java_util_LinkedList_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "addFirst", (intptr_t) M_java_util_LinkedList_addFirst_java_lang_Object, VTABLE_java_util_LinkedList_addFirst_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "addFirstImpl", (intptr_t) M_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "addLast", (intptr_t) M_java_util_LinkedList_addLast_java_lang_Object, VTABLE_java_util_LinkedList_addLast_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "clear", (intptr_t) M_java_util_LinkedList_clear, VTABLE_java_util_LinkedList_clear, "()V", 1 },
	{ "contains", (intptr_t) M_java_util_LinkedList_contains_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", (intptr_t) M_java_util_LinkedList_get_int_R_java_lang_Object, VTABLE_java_util_LinkedList_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "getFirst", (intptr_t) M_java_util_LinkedList_getFirst_R_java_lang_Object, VTABLE_java_util_LinkedList_getFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getFirstImpl", (intptr_t) M_java_util_LinkedList_getFirstImpl_R_java_lang_Object, VTABLE_java_util_LinkedList_getFirstImpl_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "getLast", (intptr_t) M_java_util_LinkedList_getLast_R_java_lang_Object, VTABLE_java_util_LinkedList_getLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "indexOf", (intptr_t) M_java_util_LinkedList_indexOf_java_lang_Object_R_int, VTABLE_java_util_LinkedList_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_java_util_LinkedList_lastIndexOf_java_lang_Object_R_int, VTABLE_java_util_LinkedList_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "listIterator", (intptr_t) M_java_util_LinkedList_listIterator_int_R_java_util_ListIterator, VTABLE_java_util_LinkedList_listIterator_int_R_java_util_ListIterator, "(I)Ljava/util/ListIterator;", 1 },
	{ "remove", (intptr_t) M_java_util_LinkedList_remove_int_R_java_lang_Object, VTABLE_java_util_LinkedList_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_LinkedList_remove_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeFirst", (intptr_t) M_java_util_LinkedList_removeFirst_R_java_lang_Object, VTABLE_java_util_LinkedList_removeFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "removeFirstImpl", (intptr_t) M_java_util_LinkedList_removeFirstImpl_R_java_lang_Object, VTABLE_java_util_LinkedList_removeFirstImpl_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "removeLast", (intptr_t) M_java_util_LinkedList_removeLast_R_java_lang_Object, VTABLE_java_util_LinkedList_removeLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "removeLastImpl", (intptr_t) M_java_util_LinkedList_removeLastImpl_R_java_lang_Object, VTABLE_java_util_LinkedList_removeLastImpl_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "descendingIterator", (intptr_t) M_java_util_LinkedList_descendingIterator_R_java_util_Iterator, VTABLE_java_util_LinkedList_descendingIterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "offerFirst", (intptr_t) M_java_util_LinkedList_offerFirst_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_offerFirst_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "offerLast", (intptr_t) M_java_util_LinkedList_offerLast_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_offerLast_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "peekFirst", (intptr_t) M_java_util_LinkedList_peekFirst_R_java_lang_Object, VTABLE_java_util_LinkedList_peekFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peekLast", (intptr_t) M_java_util_LinkedList_peekLast_R_java_lang_Object, VTABLE_java_util_LinkedList_peekLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pollFirst", (intptr_t) M_java_util_LinkedList_pollFirst_R_java_lang_Object, VTABLE_java_util_LinkedList_pollFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pollLast", (intptr_t) M_java_util_LinkedList_pollLast_R_java_lang_Object, VTABLE_java_util_LinkedList_pollLast_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "pop", (intptr_t) M_java_util_LinkedList_pop_R_java_lang_Object, VTABLE_java_util_LinkedList_pop_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "push", (intptr_t) M_java_util_LinkedList_push_java_lang_Object, VTABLE_java_util_LinkedList_push_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "removeFirstOccurrence", (intptr_t) M_java_util_LinkedList_removeFirstOccurrence_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_removeFirstOccurrence_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeLastOccurrence", (intptr_t) M_java_util_LinkedList_removeLastOccurrence_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_removeLastOccurrence_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeFirstOccurrenceImpl", (intptr_t) M_java_util_LinkedList_removeFirstOccurrenceImpl_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_removeFirstOccurrenceImpl_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "removeOneOccurrence", (intptr_t) M_java_util_LinkedList_removeOneOccurrence_java_lang_Object_java_util_Iterator_R_boolean, VTABLE_java_util_LinkedList_removeOneOccurrence_java_lang_Object_java_util_Iterator_R_boolean, "(Ljava/lang/Object;Ljava/util/Iterator;)Z", 2 },
	{ "set", (intptr_t) M_java_util_LinkedList_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_LinkedList_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "size", (intptr_t) M_java_util_LinkedList_size_R_int, VTABLE_java_util_LinkedList_size_R_int, "()I", 1 },
	{ "offer", (intptr_t) M_java_util_LinkedList_offer_java_lang_Object_R_boolean, VTABLE_java_util_LinkedList_offer_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "poll", (intptr_t) M_java_util_LinkedList_poll_R_java_lang_Object, VTABLE_java_util_LinkedList_poll_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_LinkedList_remove_R_java_lang_Object, VTABLE_java_util_LinkedList_remove_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peek", (intptr_t) M_java_util_LinkedList_peek_R_java_lang_Object, VTABLE_java_util_LinkedList_peek_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peekFirstImpl", (intptr_t) M_java_util_LinkedList_peekFirstImpl_R_java_lang_Object, VTABLE_java_util_LinkedList_peekFirstImpl_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "element", (intptr_t) M_java_util_LinkedList_element_R_java_lang_Object, VTABLE_java_util_LinkedList_element_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_LinkedList_toArray_R_Array1_java_lang_Object, VTABLE_java_util_LinkedList_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_LinkedList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_LinkedList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
};

Class class_java_util_LinkedList{
		.nativeName = (intptr_t) "java/util/LinkedList",
		.parentClass = (intptr_t) &class_java_util_AbstractSequentialList,
		.size = sizeof(java_util_LinkedList),
		.classVtable = (intptr_t) vtable_java_util_LinkedList,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 48,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 68,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_LinkedList = registerClass(&class_java_util_LinkedList);

}
