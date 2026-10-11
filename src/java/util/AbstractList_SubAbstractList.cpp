#include "java/util/AbstractList_SubAbstractList.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/Iterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/AbstractList_SubAbstractList_SubAbstractListIterator.h"
#include "java/util/AbstractList_SubAbstractList.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_AbstractList$SubAbstractList(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractList(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_AbstractList$SubAbstractList *) object;
	if (self->F_fullList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fullList)->clazz)->markFunction)((jobject) self->F_fullList, mark, depth + 1);
}

void clinit_java_util_AbstractList$SubAbstractList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractList(ctx);
}

void init_java_util_AbstractList$SubAbstractList_java_util_AbstractList_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$SubAbstractList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(237);
	init_java_util_AbstractList(ctx, (frame[0].o));
	LINE_NUMBER(238);
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList = (jref) (frame[1].o);
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(240);
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset = (frame[2].i);
	LINE_NUMBER(241);
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$SubAbstractList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount;
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(247);
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	if ((frame[1].i) > ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	((func_java_util_AbstractList_add_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_add_int_java_lang_Object])(ctx, sp[0].o, ((frame[1].i) + ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset)), (frame[2].o));
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(252);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(255);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_AbstractList$SubAbstractList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:addAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(261);
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount;
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(262);
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	if ((frame[1].i) > ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	jint temp0 = (jint)((func_java_util_AbstractList_addAll_int_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_addAll_int_java_util_Collection_R_boolean])(ctx, sp[0].o, ((frame[1].i) + ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset)), (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(265);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size;
	jint temp1 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size = (temp0 + temp1);
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	}
label_6:;
	{
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_3:;
	{
	LINE_NUMBER(271);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(273);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractList$SubAbstractList_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount;
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	jint temp0 = (jint)((func_java_util_AbstractList_addAll_int_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_addAll_int_java_util_Collection_R_boolean])(ctx, sp[0].o, (((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size)), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(280);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size;
	jint temp1 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size = (temp0 + temp1);
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	}
label_4:;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_1:;
	{
	LINE_NUMBER(286);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList$SubAbstractList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(291);
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount;
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(292);
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	if ((frame[1].i) >= ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	sp[0].o = (jobject)((func_java_util_AbstractList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_get_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[1].i) + ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(295);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(297);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList$SubAbstractList_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:iterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_java_util_AbstractList$SubAbstractList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractList$SubAbstractList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList$SubAbstractList_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:listIterator", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(307);
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount;
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(308);
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	if ((frame[1].i) > ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(309);
	clinit_java_util_AbstractList$SubAbstractList$SubAbstractListIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_AbstractList$SubAbstractList$SubAbstractListIterator);
	sp[1].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	jint temp0 = (frame[1].i) + ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(310);
	sp[1].o = (jobject)((func_java_util_AbstractList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_AbstractList_listIterator_int_R_java_util_ListIterator])(ctx, sp[1].o, temp0);
	init_java_util_AbstractList$SubAbstractList$SubAbstractListIterator_java_util_ListIterator_java_util_AbstractList$SubAbstractList_int_int(ctx, sp[0].o, sp[1].o, (frame[0].o), ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset), ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(313);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(315);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList$SubAbstractList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(320);
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount;
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(321);
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	if ((frame[1].i) >= ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	sp[0].o = (jobject)((func_java_util_AbstractList_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_remove_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[1].i) + ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(327);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(329);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$SubAbstractList_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:removeRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(334);
	if ((frame[1].i) == (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(335);
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount;
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_3;
	}
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	((func_java_util_AbstractList_removeRange_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_removeRange_int_int])(ctx, sp[0].o, ((frame[1].i) + ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset)), ((frame[2].i) + ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset)));
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size) - ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(340);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(343);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_AbstractList$SubAbstractList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(347);
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount;
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(348);
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	if ((frame[1].i) >= ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	sp[0].o = (jobject)((func_java_util_AbstractList_set_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_AbstractList_set_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((frame[1].i) + ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_offset)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(351);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(353);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractList$SubAbstractList_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	jint temp0 = (jint)((java_util_AbstractList *) NULL_CHECK((frame[0].o)))->F_modCount;
	sp[0].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	if (temp0 != ((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount)) goto label_1;
	}
	{
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return ((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_1:;
	{
	LINE_NUMBER(361);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_AbstractList$SubAbstractList_sizeChanged_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractList:sizeChanged", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(365);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size = (((jint)((java_util_AbstractList$SubAbstractList *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_AbstractList$SubAbstractList *) NULL_CHECK((frame[0].o)))->F_fullList;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = ((jint)((java_util_AbstractList *) NULL_CHECK(sp[1].o))->F_modCount);
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractList$SubAbstractList[] {
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
	(void *) M_java_util_AbstractList$SubAbstractList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractList_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractList$SubAbstractList_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractList_clear,
	(void *) M_java_util_AbstractCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractList$SubAbstractList_size_R_int,
	(void *) M_java_util_AbstractList_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractList$SubAbstractList_add_int_java_lang_Object,
	(void *) M_java_util_AbstractList$SubAbstractList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractList$SubAbstractList_get_int_R_java_lang_Object,
	(void *) M_java_util_AbstractList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_AbstractList$SubAbstractList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_AbstractList$SubAbstractList_remove_int_R_java_lang_Object,
	(void *) M_java_util_AbstractList$SubAbstractList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractList_subList_int_int_R_java_util_List,
	(void *) M_java_util_AbstractList$SubAbstractList_removeRange_int_int,
	(void *) M_java_util_AbstractList$SubAbstractList_sizeChanged_boolean,
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
	{ "sizeChanged", "(Z)V" },
};

static jclass innerClasses[] {
	&class_java_util_AbstractList$SubAbstractList$SubAbstractListIterator,
};

static FieldMetadata fields[] {
	{ "fullList", &class_java_util_AbstractList, offsetof(java_util_AbstractList$SubAbstractList, F_fullList), "Ljava/util/AbstractList;", 18 },
	{ "offset", &class_int, offsetof(java_util_AbstractList$SubAbstractList, F_offset), "I", 2 },
	{ "size", &class_int, offsetof(java_util_AbstractList$SubAbstractList, F_size), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractList$SubAbstractList_java_util_AbstractList_int_int, 0, "(Ljava/util/AbstractList;II)V", 0 },
	{ "add", (intptr_t) M_java_util_AbstractList$SubAbstractList_add_int_java_lang_Object, VTABLE_java_util_AbstractList$SubAbstractList_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "addAll", (intptr_t) M_java_util_AbstractList$SubAbstractList_addAll_int_java_util_Collection_R_boolean, VTABLE_java_util_AbstractList$SubAbstractList_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_AbstractList$SubAbstractList_addAll_java_util_Collection_R_boolean, VTABLE_java_util_AbstractList$SubAbstractList_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "get", (intptr_t) M_java_util_AbstractList$SubAbstractList_get_int_R_java_lang_Object, VTABLE_java_util_AbstractList$SubAbstractList_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_java_util_AbstractList$SubAbstractList_iterator_R_java_util_Iterator, VTABLE_java_util_AbstractList$SubAbstractList_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "listIterator", (intptr_t) M_java_util_AbstractList$SubAbstractList_listIterator_int_R_java_util_ListIterator, VTABLE_java_util_AbstractList$SubAbstractList_listIterator_int_R_java_util_ListIterator, "(I)Ljava/util/ListIterator;", 1 },
	{ "remove", (intptr_t) M_java_util_AbstractList$SubAbstractList_remove_int_R_java_lang_Object, VTABLE_java_util_AbstractList$SubAbstractList_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "removeRange", (intptr_t) M_java_util_AbstractList$SubAbstractList_removeRange_int_int, VTABLE_java_util_AbstractList$SubAbstractList_removeRange_int_int, "(II)V", 4 },
	{ "set", (intptr_t) M_java_util_AbstractList$SubAbstractList_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_AbstractList$SubAbstractList_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "size", (intptr_t) M_java_util_AbstractList$SubAbstractList_size_R_int, VTABLE_java_util_AbstractList$SubAbstractList_size_R_int, "()I", 1 },
	{ "sizeChanged", (intptr_t) M_java_util_AbstractList$SubAbstractList_sizeChanged_boolean, VTABLE_java_util_AbstractList$SubAbstractList_sizeChanged_boolean, "(Z)V", 0 },
};

Class class_java_util_AbstractList$SubAbstractList{
		.nativeName = (intptr_t) "java/util/AbstractList$SubAbstractList",
		.parentClass = (intptr_t) &class_java_util_AbstractList,
		.size = sizeof(java_util_AbstractList$SubAbstractList),
		.classVtable = (intptr_t) vtable_java_util_AbstractList$SubAbstractList,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractList$SubAbstractList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractList$SubAbstractList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_AbstractList,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractList$SubAbstractList = registerClass(&class_java_util_AbstractList$SubAbstractList);

}

