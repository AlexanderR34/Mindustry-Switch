#include "java/util/AbstractList.h"
#include "java/util/Iterator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/AbstractList_SubAbstractList.h"
#include "java/util/AbstractList_SimpleListIterator.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Iterable.h"
#include "java/util/AbstractList_SubAbstractListRandomAccess.h"
#include "java/util/Collection.h"
#include "java/util/AbstractList_FullListIterator.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/AbstractList_RandomAccessSpliterator.h"
#include "java/util/AbstractList_1.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/util/AbstractCollection.h"
#include "java/util/AbstractList.h"

extern "C" {


void mark_java_util_AbstractList(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_AbstractList *) object;
}

void clinit_java_util_AbstractList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractCollection(ctx);
}

void init_java_util_AbstractList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(378);
	init_java_util_AbstractCollection(ctx, (frame[0].o));
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(406);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractList_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(427);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, (frame[0].o));
	((func_java_util_AbstractList_add_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_add_int_java_lang_Object])(ctx, sp[0].o, temp0, (frame[1].o));
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:addAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(452);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	((func_java_util_AbstractList_add_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_add_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(455);
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_AbstractList_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, (frame[0].o));
	((func_java_util_AbstractList_removeRange_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_removeRange_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractList_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(484);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(487);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_List)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(488);
	frame[2].o = (checkCast(ctx, &class_java_util_List, (frame[1].o)));
	LINE_NUMBER(489);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	jint temp1 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, (frame[0].o));
	if (temp0 == temp1) goto label_6;
	}
	{
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((func_java_util_AbstractList_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(494);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(496);
	if ((frame[5].o) != nullptr) goto label_14;
	}
	INST_ALOAD(6);
	if ((--sp)->o != nullptr) goto label_15;
	goto label_16;
label_14:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[6].o));
	if (temp0 != 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return (jint(0));
	}
label_16:;
	LINE_NUMBER(499);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractList_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:hashCode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	frame[1].i = (jint(1));
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_java_util_AbstractList_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(528);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(530);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].o) != nullptr) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp++;
label_7:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(531);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:indexOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((func_java_util_AbstractList_listIterator_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_listIterator_R_java_util_ListIterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(546);
	if ((frame[1].o) == nullptr) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(547);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(548);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(549);
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, (frame[2].o)))(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(553);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(555);
	jint temp0 = (jint)((func_java_util_ListIterator_previousIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previousIndex_R_int, (frame[2].o)))(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(571);
	clinit_java_util_AbstractList$SimpleListIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_AbstractList$SimpleListIterator);
	init_java_util_AbstractList$SimpleListIterator_java_util_AbstractList_java_util_AbstractList$1(ctx, sp[0].o, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:lastIndexOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(584);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_AbstractList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_listIterator_int_R_java_util_ListIterator])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(585);
	if ((frame[1].o) == nullptr) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(586);
	jint temp0 = (jint)((func_java_util_ListIterator_hasPrevious_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasPrevious_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(588);
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, (frame[2].o)))(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(592);
	jint temp0 = (jint)((func_java_util_ListIterator_hasPrevious_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasPrevious_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_java_util_ListIterator_previous_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_previous_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(594);
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, (frame[2].o)))(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList_listIterator_R_java_util_ListIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:listIterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((func_java_util_AbstractList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:listIterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(625);
	clinit_java_util_AbstractList$FullListIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_AbstractList$FullListIterator);
	init_java_util_AbstractList$FullListIterator_java_util_AbstractList_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(640);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:removeRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_java_util_AbstractList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(658);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(660);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(658);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(662);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(683);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:subList", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(731);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, (frame[0].o));
	if (temp0 > temp1) goto label_1;
	}
	{
	LINE_NUMBER(732);
	if ((frame[1].i) > (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(733);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_RandomAccess)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(734);
	clinit_java_util_AbstractList$SubAbstractListRandomAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_AbstractList$SubAbstractListRandomAccess);
	init_java_util_AbstractList$SubAbstractListRandomAccess_java_util_AbstractList_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(736);
	clinit_java_util_AbstractList$SubAbstractList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_AbstractList$SubAbstractList);
	init_java_util_AbstractList$SubAbstractList_java_util_AbstractList_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(738);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(740);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(751);
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(752);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(753);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((func_java_util_AbstractList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(752);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(755);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList:toArray", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(776);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(777);
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, (frame[0].o));
	if (temp0 <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_AbstractList_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_size_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, temp0);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(780);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(781);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_java_util_AbstractList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(780);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(783);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractList[] {
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
	(void *) M_java_util_AbstractList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractList_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractList_clear,
	(void *) M_java_util_AbstractCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) nullptr,
	(void *) M_java_util_AbstractList_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractList_add_int_java_lang_Object,
	(void *) M_java_util_AbstractList_addAll_int_java_util_Collection_R_boolean,
	(void *) nullptr,
	(void *) M_java_util_AbstractList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_AbstractList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_AbstractList_remove_int_R_java_lang_Object,
	(void *) M_java_util_AbstractList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractList_subList_int_int_R_java_util_List,
	(void *) M_java_util_AbstractList_removeRange_int_int,
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
};

static jclass interfaces[] { &class_java_util_List, };

static jclass innerClasses[] {
	&class_java_util_AbstractList$SimpleListIterator,
	&class_java_util_AbstractList$FullListIterator,
	&class_java_util_AbstractList$SubAbstractListRandomAccess,
	&class_java_util_AbstractList$SubAbstractList,
	&class_java_util_AbstractList$RandomAccessSpliterator,
};

static FieldMetadata fields[] {
	{ "modCount", &class_int, offsetof(java_util_AbstractList, F_modCount), "I", 132 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractList, 0, "()V", 4 },
	{ "add", (intptr_t) M_java_util_AbstractList_add_int_java_lang_Object, VTABLE_java_util_AbstractList_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_java_util_AbstractList_add_java_lang_Object_R_boolean, VTABLE_java_util_AbstractList_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_AbstractList_addAll_int_java_util_Collection_R_boolean, VTABLE_java_util_AbstractList_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_AbstractList_clear, VTABLE_java_util_AbstractList_clear, "()V", 1 },
	{ "equals", (intptr_t) M_java_util_AbstractList_equals_java_lang_Object_R_boolean, VTABLE_java_util_AbstractList_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", 0, VTABLE_java_util_AbstractList_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1025 },
	{ "hashCode", (intptr_t) M_java_util_AbstractList_hashCode_R_int, VTABLE_java_util_AbstractList_hashCode_R_int, "()I", 1 },
	{ "indexOf", (intptr_t) M_java_util_AbstractList_indexOf_java_lang_Object_R_int, VTABLE_java_util_AbstractList_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "iterator", (intptr_t) M_java_util_AbstractList_iterator_R_java_util_Iterator, VTABLE_java_util_AbstractList_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "lastIndexOf", (intptr_t) M_java_util_AbstractList_lastIndexOf_java_lang_Object_R_int, VTABLE_java_util_AbstractList_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "listIterator", (intptr_t) M_java_util_AbstractList_listIterator_R_java_util_ListIterator, VTABLE_java_util_AbstractList_listIterator_R_java_util_ListIterator, "()Ljava/util/ListIterator;", 1 },
	{ "listIterator", (intptr_t) M_java_util_AbstractList_listIterator_int_R_java_util_ListIterator, VTABLE_java_util_AbstractList_listIterator_int_R_java_util_ListIterator, "(I)Ljava/util/ListIterator;", 1 },
	{ "remove", (intptr_t) M_java_util_AbstractList_remove_int_R_java_lang_Object, VTABLE_java_util_AbstractList_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "removeRange", (intptr_t) M_java_util_AbstractList_removeRange_int_int, VTABLE_java_util_AbstractList_removeRange_int_int, "(II)V", 4 },
	{ "set", (intptr_t) M_java_util_AbstractList_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_AbstractList_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "subList", (intptr_t) M_java_util_AbstractList_subList_int_int_R_java_util_List, VTABLE_java_util_AbstractList_subList_int_int_R_java_util_List, "(II)Ljava/util/List;", 1 },
	{ "toArray", (intptr_t) M_java_util_AbstractList_toArray_R_Array1_java_lang_Object, VTABLE_java_util_AbstractList_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_AbstractList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_AbstractList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
};

Class class_java_util_AbstractList{
		.nativeName = (intptr_t) "java/util/AbstractList",
		.parentClass = (intptr_t) &class_java_util_AbstractCollection,
		.size = sizeof(java_util_AbstractList),
		.classVtable = (intptr_t) vtable_java_util_AbstractList,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractList = registerClass(&class_java_util_AbstractList);

}
