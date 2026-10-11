#include "java/util/Hashtable.h"
#include "java/util/Hashtable_1.h"
#include "java/util/Hashtable_2.h"
#include "java/util/Hashtable_3.h"
#include "java/util/Hashtable_HashIterator.h"
#include "java/lang/StringBuffer.h"
#include "java/util/MapEntry_Type.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/NullPointerException.h"
#include "java/util/Hashtable_4.h"
#include "java/util/Hashtable_Entry.h"
#include "java/util/Hashtable_5.h"
#include "java/util/Hashtable_6.h"
#include "java/util/Hashtable_7.h"
#include "java/util/Hashtable.h"
#include "java/util/Iterator.h"
#include "java/util/Collections_SynchronizedCollection.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Dictionary.h"
#include "java/util/Map.h"
#include "java/lang/Object.h"
#include "java/util/Hashtable_HashEnumIterator.h"
#include "java/util/Enumeration.h"
#include "java/util/Collections_SynchronizedSet.h"

extern "C" {

jobject SF_java_util_Hashtable_EMPTY_ENUMERATION;
jobject SF_java_util_Hashtable_EMPTY_ITERATOR;

void mark_java_util_Hashtable(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_Hashtable_EMPTY_ENUMERATION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Hashtable_EMPTY_ENUMERATION)->clazz)->markFunction)((jobject) SF_java_util_Hashtable_EMPTY_ENUMERATION, mark, depth + 1);
		if (SF_java_util_Hashtable_EMPTY_ITERATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Hashtable_EMPTY_ITERATOR)->clazz)->markFunction)((jobject) SF_java_util_Hashtable_EMPTY_ITERATOR, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Dictionary(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Hashtable *) object;
	if (self->F_elementData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elementData)->clazz)->markFunction)((jobject) self->F_elementData, mark, depth + 1);
}

jobject SM_java_util_Hashtable_newEntry_java_lang_Object_java_lang_Object_int_R_java_util_Hashtable$Entry(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:newEntry", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(76);
	clinit_java_util_Hashtable$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable$Entry);
	init_java_util_Hashtable$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_Hashtable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(215);
	init_java_util_Hashtable_int(ctx, (frame[0].o), (11));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Hashtable_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(225);
	init_java_util_Dictionary(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_lastSlot = (jint(-1));
	LINE_NUMBER(226);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(227);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementCount = (jint(0));
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp += 2;
	if ((frame[1].i) != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ILOAD(1);
label_7:;
	{
	sp -= 3;
	sp[1].o = (jobject)M_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry(ctx, sp[1].o, sp[2].i);
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementData = (jref) sp[1].o;
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_firstSlot = (((jarray) nullCheck(ctx, sp[1].o))->length);
	LINE_NUMBER(230);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_loadFactor = (jfloat(0.75f));
	LINE_NUMBER(231);
	M_java_util_Hashtable_computeMaxSize(ctx, (frame[0].o));
	goto label_11;
	}
label_3:;
	{
	LINE_NUMBER(233);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_Hashtable_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(246);
	init_java_util_Dictionary(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_lastSlot = (jint(-1));
	LINE_NUMBER(247);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(248);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementCount = (jint(0));
	LINE_NUMBER(249);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_firstSlot = (frame[1].i);
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp += 2;
	if ((frame[1].i) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ILOAD(1);
label_8:;
	{
	sp -= 3;
	sp[1].o = (jobject)M_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry(ctx, sp[1].o, sp[2].i);
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementData = (jref) sp[1].o;
	LINE_NUMBER(251);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(252);
	M_java_util_Hashtable_computeMaxSize(ctx, (frame[0].o));
	goto label_11;
	}
label_3:;
	{
	LINE_NUMBER(254);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	LINE_NUMBER(256);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_Hashtable_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp += 1;
	if (temp0 >= (6)) goto label_1;
	}
	INST_BIPUSH(11);
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = ((temp0 * (jint(4))) / (jint(3))) + (11);
	sp[0].i = temp1;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	init_java_util_Hashtable_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(267);
	((func_java_util_Hashtable_putAll_java_util_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_putAll_java_util_Map])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:newElementArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_Hashtable$Entry, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Hashtable_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(283);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementCount = (jint(0));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(286);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Hashtable_computeMaxSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:computeMaxSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_threshold = (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Hashtable_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(305);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(306);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_3:;
	{
	INST_IINC(2, -1);
	if ((frame[2].i) < 0) goto label_4;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_6:;
	{
	LINE_NUMBER(311);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(313);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_6;
	}
label_7:;
	LINE_NUMBER(317);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(318);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_Hashtable_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((func_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Hashtable_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:containsValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(345);
	jint temp0 = (jint)((func_java_util_Hashtable_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_contains_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_elements_R_java_util_Enumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:elements", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(361);
	if (((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementCount) != 0) goto label_1;
	}
	{
	LINE_NUMBER(362);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = (jobject)SF_java_util_Hashtable_EMPTY_ENUMERATION;
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(364);
	clinit_java_util_Hashtable$HashEnumIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable$HashEnumIterator);
	sp[1].o = frame[0].o;
	clinit_java_util_Hashtable$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_Hashtable$3);
	init_java_util_Hashtable$3_java_util_Hashtable(ctx, sp[2].o, (frame[0].o));
	init_java_util_Hashtable$HashEnumIterator_java_util_Hashtable_java_util_MapEntry$Type_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:entrySet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(380);
	clinit_java_util_Collections$SynchronizedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSet);
	clinit_java_util_Hashtable$4(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Hashtable$4);
	init_java_util_Hashtable$4_java_util_Hashtable(ctx, sp[1].o, (frame[0].o));
	init_java_util_Collections$SynchronizedSet_java_util_Set_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Hashtable_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:equals", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(437);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(438);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(440);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(441);
	frame[2].o = (checkCast(ctx, &class_java_util_Map, (frame[1].o)));
	LINE_NUMBER(442);
	jint temp0 = (jint)((func_java_util_Hashtable_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_size_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == temp1) goto label_6;
	}
	{
	LINE_NUMBER(443);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_util_Hashtable_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(448);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(450);
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[5].o));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(451);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_13:;
	LINE_NUMBER(453);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(454);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(456);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(471);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(472);
	jint temp1 = (frame[2].i) & (jint(2147483647));
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].i = (temp1 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(473);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_3:;
	{
	LINE_NUMBER(474);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(475);
	jint temp0 = (jint)((func_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean])(ctx, (frame[4].o), (frame[1].o), (frame[2].i));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[4].o)))->F_value;
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[4].o)))->F_next;
	frame[4].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(480);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:getEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(484);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(485);
	jint temp1 = (frame[2].i) & (jint(2147483647));
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].i = (temp1 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(486);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_3:;
	{
	LINE_NUMBER(487);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(488);
	jint temp0 = (jint)((func_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean])(ctx, (frame[4].o), (frame[1].o), (frame[2].i));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(489);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_6:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[4].o)))->F_next;
	frame[4].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_util_Hashtable_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:hashCode", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(498);
	frame[1].i = (jint(0));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_java_util_Hashtable_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_entrySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(500);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(503);
	if ((frame[4].o) != (frame[0].o)) goto label_7;
	}
	LINE_NUMBER(504);
	goto label_2;
label_7:;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(507);
	if ((frame[5].o) != (frame[0].o)) goto label_10;
	}
	LINE_NUMBER(508);
	goto label_2;
label_10:;
	{
	LINE_NUMBER(510);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ICONST(0);
label_13:;
	{
	LINE_NUMBER(511);
	if ((frame[5].o) == nullptr) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[5].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 2;
	frame[6].i = (sp[0].i ^ sp[1].i);
	LINE_NUMBER(512);
	frame[1].i = ((frame[1].i) + (frame[6].i));
	LINE_NUMBER(513);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(514);
	popStackFrame(ctx, self);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_Hashtable_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	if (((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementCount) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_keys_R_java_util_Enumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:keys", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(542);
	if (((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementCount) != 0) goto label_1;
	}
	{
	LINE_NUMBER(543);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = (jobject)SF_java_util_Hashtable_EMPTY_ENUMERATION;
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(545);
	clinit_java_util_Hashtable$HashEnumIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable$HashEnumIterator);
	sp[1].o = frame[0].o;
	clinit_java_util_Hashtable$5(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_Hashtable$5);
	init_java_util_Hashtable$5_java_util_Hashtable(ctx, sp[2].o, (frame[0].o));
	init_java_util_Hashtable$HashEnumIterator_java_util_Hashtable_java_util_MapEntry$Type_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:keySet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(560);
	clinit_java_util_Collections$SynchronizedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSet);
	clinit_java_util_Hashtable$6(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Hashtable$6);
	init_java_util_Hashtable$6_java_util_Hashtable(ctx, sp[1].o, (frame[0].o));
	init_java_util_Collections$SynchronizedSet_java_util_Set_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:put", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(695);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_1;
	{
	LINE_NUMBER(696);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(697);
	jint temp1 = (frame[3].i) & (jint(2147483647));
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[4].i = (temp1 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(698);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_5:;
	{
	LINE_NUMBER(699);
	if ((frame[5].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean])(ctx, (frame[5].o), (frame[1].o), (frame[3].i));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(702);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = frame[0].o;
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(704);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementCount) + (jint(1));
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementCount = temp0;
	if (temp0 <= ((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_11;
	}
	{
	LINE_NUMBER(705);
	((func_java_util_Hashtable_rehash) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_rehash])(ctx, (frame[0].o));
	LINE_NUMBER(706);
	jint temp0 = (frame[3].i) & (jint(2147483647));
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[4].i = (temp0 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	}
label_11:;
	{
	LINE_NUMBER(708);
	if ((frame[4].i) >= ((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_firstSlot)) goto label_14;
	}
	{
	LINE_NUMBER(709);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_firstSlot = (frame[4].i);
	}
label_14:;
	{
	LINE_NUMBER(711);
	if ((frame[4].i) <= ((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_lastSlot)) goto label_16;
	}
	{
	LINE_NUMBER(712);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_lastSlot = (frame[4].i);
	}
label_16:;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)SM_java_util_Hashtable_newEntry_java_lang_Object_java_lang_Object_int_R_java_util_Hashtable$Entry(ctx, (frame[1].o), (frame[2].o), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(715);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	((java_util_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	LINE_NUMBER(716);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[5].o);
	LINE_NUMBER(717);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[5].o)))->F_value;
	frame[6].o = sp[0].o;
	LINE_NUMBER(720);
	((java_util_MapEntry *) NULL_CHECK((frame[5].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(721);
	popStackFrame(ctx, self);
	return (frame[6].o);
	}
label_1:;
	{
	LINE_NUMBER(723);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_Hashtable_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:putAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(733);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(734);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(736);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(737);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(738);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Hashtable_rehash(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:rehash", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(745);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[1].i = (((((jarray) nullCheck(ctx, sp[0].o))->length) << (jint(1))) + (jint(1)));
	LINE_NUMBER(746);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(747);
	frame[1].i = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(749);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(750);
	frame[3].i = (jint(-1));
	LINE_NUMBER(751);
	sp[0].o = (jobject)M_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry(ctx, (frame[0].o), (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(752);
	frame[5].i = (((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_lastSlot) + (jint(1)));
	}
label_7:;
	{
	INST_IINC(5, -1);
	if ((frame[5].i) < ((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_firstSlot)) goto label_8;
	}
	{
	LINE_NUMBER(753);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	}
label_10:;
	{
	LINE_NUMBER(754);
	if ((frame[6].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(755);
	jint temp0 = (jint)((func_java_util_Hashtable$Entry_getKeyHash_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_Hashtable$Entry_getKeyHash_R_int])(ctx, (frame[6].o));
	frame[7].i = ((temp0 & (jint(2147483647))) % (frame[1].i));
	LINE_NUMBER(756);
	if ((frame[7].i) >= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(757);
	frame[2].i = (frame[7].i);
	}
label_14:;
	{
	LINE_NUMBER(759);
	if ((frame[7].i) <= (frame[3].i)) goto label_16;
	}
	{
	LINE_NUMBER(760);
	frame[3].i = (frame[7].i);
	}
label_16:;
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[6].o)))->F_next;
	frame[8].o = sp[0].o;
	LINE_NUMBER(763);
	((java_util_Hashtable$Entry *) NULL_CHECK((frame[6].o)))->F_next = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)));
	LINE_NUMBER(764);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)) = (frame[6].o);
	LINE_NUMBER(765);
	frame[6].o = (frame[8].o);
	LINE_NUMBER(766);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(767);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(768);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_firstSlot = (frame[2].i);
	LINE_NUMBER(769);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_lastSlot = (frame[3].i);
	LINE_NUMBER(770);
	((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData = (jref) (frame[4].o);
	LINE_NUMBER(771);
	M_java_util_Hashtable_computeMaxSize(ctx, (frame[0].o));
	LINE_NUMBER(772);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(787);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(788);
	jint temp1 = (frame[2].i) & (jint(2147483647));
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].i = (temp1 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(789);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(790);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_4:;
	{
	LINE_NUMBER(791);
	if ((frame[5].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_Hashtable$Entry_equalsKey_java_lang_Object_int_R_boolean])(ctx, (frame[5].o), (frame[1].o), (frame[2].i));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(792);
	frame[4].o = (frame[5].o);
	LINE_NUMBER(793);
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(795);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(797);
	if ((frame[4].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(798);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[5].o)))->F_next;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(800);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[5].o)))->F_next;
	((java_util_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(802);
	sp[0].o = frame[0].o;
	((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementCount = (((jint)((java_util_Hashtable *) NULL_CHECK(sp[0].o))->F_elementCount) - (jint(1)));
	LINE_NUMBER(803);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[5].o)))->F_value;
	frame[6].o = sp[0].o;
	LINE_NUMBER(804);
	((java_util_MapEntry *) NULL_CHECK((frame[5].o)))->F_value = (jref) (jobject(nullptr));
	LINE_NUMBER(805);
	popStackFrame(ctx, self);
	return (frame[6].o);
	}
label_8:;
	{
	LINE_NUMBER(807);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_util_Hashtable_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(819);
	popStackFrame(ctx, self);
	return ((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementCount);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(829);
	jint temp0 = (jint)((func_java_util_Hashtable_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(830);
	popStackFrame(ctx, self);
	return (((jobject) createStringLiteral(ctx, u8"{}"_j)));
	}
label_1:;
	{
	LINE_NUMBER(833);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	jint temp0 = (jint)((func_java_util_Hashtable_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_size_R_int])(ctx, (frame[0].o));
	init_java_lang_StringBuffer_int(ctx, sp[0].o, (temp0 * (28)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(834);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (123));
	LINE_NUMBER(835);
	frame[2].i = ((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_lastSlot);
	}
label_5:;
	{
	if ((frame[2].i) < ((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_firstSlot)) goto label_6;
	}
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_8:;
	{
	LINE_NUMBER(837);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_key;
	if (sp[0].o == (frame[0].o)) goto label_11;
	}
	{
	LINE_NUMBER(839);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_key;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(this)"_j))));
	}
label_13:;
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (61));
	LINE_NUMBER(845);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_value;
	if (sp[0].o == (frame[0].o)) goto label_15;
	}
	{
	LINE_NUMBER(846);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(849);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(this)"_j))));
	}
label_17:;
	{
	LINE_NUMBER(851);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(852);
	sp[0].o = (jobject)((java_util_Hashtable$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(835);
	INST_IINC(2, -1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(856);
	if (((jint)((java_util_Hashtable *) NULL_CHECK((frame[0].o)))->F_elementCount) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(857);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuffer_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_length_R_int])(ctx, (frame[1].o));
	((func_java_lang_StringBuffer_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_setLength_int])(ctx, sp[0].o, (temp0 - (jint(2))));
	}
label_19:;
	{
	LINE_NUMBER(859);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (125));
	LINE_NUMBER(860);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Hashtable_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:values", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(871);
	clinit_java_util_Collections$SynchronizedCollection(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedCollection);
	clinit_java_util_Hashtable$7(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Hashtable$7);
	init_java_util_Hashtable$7_java_util_Hashtable(ctx, sp[1].o, (frame[0].o));
	init_java_util_Collections$SynchronizedCollection_java_util_Collection_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Hashtable_access$000_R_java_util_Iterator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:access$000", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable(ctx);
	{
	LINE_NUMBER(35);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = (jobject)SF_java_util_Hashtable_EMPTY_ITERATOR;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_Hashtable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Dictionary(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Hashtable:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Hashtable(ctx);
	{
	LINE_NUMBER(50);
	clinit_java_util_Hashtable$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable$1);
	init_java_util_Hashtable$1(ctx, sp[0].o);
	clinit_java_util_Hashtable(ctx);
	SF_java_util_Hashtable_EMPTY_ENUMERATION = sp[0].o;
	LINE_NUMBER(60);
	clinit_java_util_Hashtable$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable$2);
	init_java_util_Hashtable$2(ctx, sp[0].o);
	clinit_java_util_Hashtable(ctx);
	SF_java_util_Hashtable_EMPTY_ITERATOR = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Hashtable[] {
	(void *) M_java_util_Hashtable_hashCode_R_int,
	(void *) M_java_util_Hashtable_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Hashtable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Hashtable_elements_R_java_util_Enumeration,
	(void *) M_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Hashtable_isEmpty_R_boolean,
	(void *) M_java_util_Hashtable_keys_R_java_util_Enumeration,
	(void *) M_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Hashtable_size_R_int,
	(void *) M_java_util_Hashtable_clear,
	(void *) M_java_util_Hashtable_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_Hashtable_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_Hashtable_entrySet_R_java_util_Set,
	(void *) M_java_util_Hashtable_keySet_R_java_util_Set,
	(void *) M_java_util_Hashtable_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Hashtable_values_R_java_util_Collection,
	(void *) M_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry,
	(void *) M_java_util_Hashtable_computeMaxSize,
	(void *) M_java_util_Hashtable_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry,
	(void *) M_java_util_Hashtable_rehash,
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
	{ "elements", "()Ljava/util/Enumeration;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keys", "()Ljava/util/Enumeration;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "values", "()Ljava/util/Collection;" },
	{ "newElementArray", "(I)[Ljava/util/Hashtable$Entry;" },
	{ "computeMaxSize", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "getEntry", "(Ljava/lang/Object;)Ljava/util/Hashtable$Entry;" },
	{ "rehash", "()V" },
};

static jclass interfaces[] { &class_java_util_Map, };

static jclass innerClasses[] {
	&class_java_util_Hashtable$Entry,
	&class_java_util_Hashtable$HashEnumIterator,
	&class_java_util_Hashtable$HashIterator,
};

static FieldMetadata fields[] {
	{ "elementCount", &class_int, offsetof(java_util_Hashtable, F_elementCount), "I", 128 },
	{ "elementData", getArrayClass(&class_java_util_Hashtable$Entry, 1), offsetof(java_util_Hashtable, F_elementData), "[Ljava/util/Hashtable$Entry;", 128 },
	{ "loadFactor", &class_float, offsetof(java_util_Hashtable, F_loadFactor), "F", 2 },
	{ "threshold", &class_int, offsetof(java_util_Hashtable, F_threshold), "I", 2 },
	{ "firstSlot", &class_int, offsetof(java_util_Hashtable, F_firstSlot), "I", 128 },
	{ "lastSlot", &class_int, offsetof(java_util_Hashtable, F_lastSlot), "I", 128 },
	{ "modCount", &class_int, offsetof(java_util_Hashtable, F_modCount), "I", 128 },
	{ "EMPTY_ENUMERATION", &class_java_util_Enumeration, (intptr_t) &SF_java_util_Hashtable_EMPTY_ENUMERATION, "Ljava/util/Enumeration;", 26 },
	{ "EMPTY_ITERATOR", &class_java_util_Iterator, (intptr_t) &SF_java_util_Hashtable_EMPTY_ITERATOR, "Ljava/util/Iterator;", 26 },
};

static MethodMetadata methods[] {
	{ "newEntry", (intptr_t) SM_java_util_Hashtable_newEntry_java_lang_Object_java_lang_Object_int_R_java_util_Hashtable$Entry, 0, "(Ljava/lang/Object;Ljava/lang/Object;I)Ljava/util/Hashtable$Entry;", 10 },
	{ "<init>", (intptr_t) init_java_util_Hashtable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_Hashtable_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Hashtable_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Hashtable_java_util_Map, 0, "(Ljava/util/Map;)V", 1 },
	{ "newElementArray", (intptr_t) M_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry, VTABLE_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry, "(I)[Ljava/util/Hashtable$Entry;", 2 },
	{ "clear", (intptr_t) M_java_util_Hashtable_clear, VTABLE_java_util_Hashtable_clear, "()V", 33 },
	{ "computeMaxSize", (intptr_t) M_java_util_Hashtable_computeMaxSize, VTABLE_java_util_Hashtable_computeMaxSize, "()V", 2 },
	{ "contains", (intptr_t) M_java_util_Hashtable_contains_java_lang_Object_R_boolean, VTABLE_java_util_Hashtable_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "containsKey", (intptr_t) M_java_util_Hashtable_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_Hashtable_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "containsValue", (intptr_t) M_java_util_Hashtable_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_Hashtable_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "elements", (intptr_t) M_java_util_Hashtable_elements_R_java_util_Enumeration, VTABLE_java_util_Hashtable_elements_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 33 },
	{ "entrySet", (intptr_t) M_java_util_Hashtable_entrySet_R_java_util_Set, VTABLE_java_util_Hashtable_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "equals", (intptr_t) M_java_util_Hashtable_equals_java_lang_Object_R_boolean, VTABLE_java_util_Hashtable_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 33 },
	{ "get", (intptr_t) M_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "getEntry", (intptr_t) M_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry, VTABLE_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry, "(Ljava/lang/Object;)Ljava/util/Hashtable$Entry;", 0 },
	{ "hashCode", (intptr_t) M_java_util_Hashtable_hashCode_R_int, VTABLE_java_util_Hashtable_hashCode_R_int, "()I", 33 },
	{ "isEmpty", (intptr_t) M_java_util_Hashtable_isEmpty_R_boolean, VTABLE_java_util_Hashtable_isEmpty_R_boolean, "()Z", 33 },
	{ "keys", (intptr_t) M_java_util_Hashtable_keys_R_java_util_Enumeration, VTABLE_java_util_Hashtable_keys_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 33 },
	{ "keySet", (intptr_t) M_java_util_Hashtable_keySet_R_java_util_Set, VTABLE_java_util_Hashtable_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "put", (intptr_t) M_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "putAll", (intptr_t) M_java_util_Hashtable_putAll_java_util_Map, VTABLE_java_util_Hashtable_putAll_java_util_Map, "(Ljava/util/Map;)V", 33 },
	{ "rehash", (intptr_t) M_java_util_Hashtable_rehash, VTABLE_java_util_Hashtable_rehash, "()V", 4 },
	{ "remove", (intptr_t) M_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "size", (intptr_t) M_java_util_Hashtable_size_R_int, VTABLE_java_util_Hashtable_size_R_int, "()I", 33 },
	{ "toString", (intptr_t) M_java_util_Hashtable_toString_R_java_lang_String, VTABLE_java_util_Hashtable_toString_R_java_lang_String, "()Ljava/lang/String;", 33 },
	{ "values", (intptr_t) M_java_util_Hashtable_values_R_java_util_Collection, VTABLE_java_util_Hashtable_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "access$000", (intptr_t) SM_java_util_Hashtable_access$000_R_java_util_Iterator, 0, "()Ljava/util/Iterator;", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_util_Hashtable, 0, "()V", 8 },
};

Class class_java_util_Hashtable{
		.nativeName = (intptr_t) "java/util/Hashtable",
		.parentClass = (intptr_t) &class_java_util_Dictionary,
		.size = sizeof(java_util_Hashtable),
		.classVtable = (intptr_t) vtable_java_util_Hashtable,
		.staticInitializer = (intptr_t) clinit_java_util_Hashtable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Hashtable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Hashtable = registerClass(&class_java_util_Hashtable);

}
