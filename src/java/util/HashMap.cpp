#include "java/util/HashMap.h"
#include "java/util/HashMap_Entry.h"
#include "java/util/HashMap_2.h"
#include "java/util/Iterator.h"
#include "java/lang/Cloneable.h"
#include "java/util/HashMap.h"
#include "java/util/HashMap_1.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/HashMap_HashMapEntrySet.h"
#include "java/util/Map.h"
#include "java/util/HashMap_EntryIterator.h"
#include "java/util/HashMap_AbstractMapIterator.h"
#include "java/util/HashMap_KeyIterator.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/Arrays.h"
#include "java/util/HashMap_ValueIterator.h"
#include "java/util/AbstractMap.h"

extern "C" {

jlong SF_java_util_HashMap_serialVersionUID;
jint SF_java_util_HashMap_DEFAULT_SIZE;

void mark_java_util_HashMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_HashMap *) object;
	if (self->F_elementData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elementData)->clazz)->markFunction)((jobject) self->F_elementData, mark, depth + 1);
}

void clinit_java_util_HashMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractMap(ctx);
	SF_java_util_HashMap_serialVersionUID = jlong(362498820763181265ll);
	SF_java_util_HashMap_DEFAULT_SIZE = jint(16);
}

jobject M_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:newElementArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_HashMap$Entry, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_HashMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(259);
	init_java_util_HashMap_int(ctx, (frame[0].o), (16));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_HashMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(271);
	init_java_util_HashMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.75f)));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_util_HashMap_calculateCapacity_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:calculateCapacity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashMap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(283);
	if ((frame[0].i) < (jint(1073741824))) goto label_1;
	}
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (jint(1073741824));
	}
label_1:;
	{
	LINE_NUMBER(286);
	if ((frame[0].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (16);
	}
label_3:;
	{
	LINE_NUMBER(289);
	frame[0].i = ((frame[0].i) - (jint(1)));
	LINE_NUMBER(290);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (jint(1))));
	LINE_NUMBER(291);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (jint(2))));
	LINE_NUMBER(292);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (jint(4))));
	LINE_NUMBER(293);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (8)));
	LINE_NUMBER(294);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (16)));
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return ((frame[0].i) + (jint(1)));
	}

	popStackFrame(ctx);
}

void init_java_util_HashMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(310);
	init_java_util_AbstractMap(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_modCount = (jint(0));
	LINE_NUMBER(311);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)SM_java_util_HashMap_calculateCapacity_int_R_int(ctx, (frame[1].i));
	frame[1].i = temp0;
	LINE_NUMBER(313);
	((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementCount = (jint(0));
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].i));
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementData = (jref) sp[1].o;
	LINE_NUMBER(315);
	((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(316);
	M_java_util_HashMap_computeThreshold(ctx, (frame[0].o));
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(318);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_HashMap_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = (jint)SM_java_util_HashMap_calculateCapacity_int_R_int(ctx, temp0);
	init_java_util_HashMap_int(ctx, sp[0].o, temp1);
	LINE_NUMBER(331);
	M_java_util_HashMap_putAllImpl_java_util_Map(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_HashMap_java_util_HashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_HashMap_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_HashMap_size_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)SM_java_util_HashMap_calculateCapacity_int_R_int(ctx, temp0);
	init_java_util_HashMap_int(ctx, sp[0].o, temp1);
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[1].o)))->F_elementData;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementData = (jref) sp[1].o;
	LINE_NUMBER(337);
	((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementCount = ((jint)((java_util_HashMap *) NULL_CHECK((frame[1].o)))->F_elementCount);
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_HashMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:clear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(349);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(350);
	((java_util_HashMap$Entry *) NULL_CHECK((frame[4].o)))->F_next = (jref) (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(348);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(351);
	if (((jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementCount) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(352);
	((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementCount = (jint(0));
	LINE_NUMBER(353);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	}
label_6:;
	LINE_NUMBER(356);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_HashMap_computeThreshold(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:computeThreshold", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_threshold = (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_HashMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:containsKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(376);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_HashMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:containsValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(389);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(390);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_6:;
	{
	LINE_NUMBER(392);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_value;
	jint temp0 = (jint)SM_java_util_HashMap_areEqualKeys_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(390);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	goto label_11;
label_1:;
	{
	LINE_NUMBER(400);
	frame[2].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_14:;
	{
	LINE_NUMBER(402);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_value;
	if (sp[0].o != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(400);
	INST_IINC(2, 1);
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:entrySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(422);
	clinit_java_util_HashMap$HashMapEntrySet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap$HashMapEntrySet);
	init_java_util_HashMap$HashMapEntrySet_java_util_HashMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((func_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(436);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:getEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(444);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(447);
	jint temp0 = (jint)SM_java_util_HashMap_computeHashCode_java_lang_Object_R_int(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(448);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[4].i = (temp1 & ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o), (frame[4].i), (frame[3].i));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:findNullKeyEntry", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
label_1:;
	{
	LINE_NUMBER(465);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[1].o)))->F_key;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_HashMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(479);
	if (((jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementCount) != 0) goto label_1;
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

jobject M_java_util_HashMap_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:keySet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap$1);
	init_java_util_HashMap$1_java_util_HashMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_keySet = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_keySet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((func_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:putImpl", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(540);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(541);
	sp[0].o = (jobject)((func_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(542);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(543);
	sp[0].o = frame[0].o;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(544);
	sp[0].o = (jobject)((func_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount) + (jint(1));
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount = temp0;
	if (temp0 <= ((jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_4;
	}
	{
	LINE_NUMBER(546);
	((func_java_util_HashMap_rehash) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_rehash])(ctx, (frame[0].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(550);
	jint temp0 = (jint)SM_java_util_HashMap_computeHashCode_java_lang_Object_R_int(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(551);
	jint temp1 = frame[4].i;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[5].i = (temp1 & ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((func_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o), (frame[5].i), (frame[4].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(553);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(555);
	sp[0].o = (jobject)((func_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o), (frame[5].i), (frame[4].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(556);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount) + (jint(1));
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount = temp0;
	if (temp0 <= ((jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_4;
	}
	{
	LINE_NUMBER(557);
	((func_java_util_HashMap_rehash) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_rehash])(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_value;
	frame[4].o = sp[0].o;
	LINE_NUMBER(563);
	((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:createEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(568);
	clinit_java_util_HashMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap$Entry);
	init_java_util_HashMap$Entry_java_lang_Object_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(569);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	((java_util_HashMap$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:createHashedEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(575);
	clinit_java_util_HashMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap$Entry);
	init_java_util_HashMap$Entry_java_lang_Object_int(ctx, sp[0].o, (frame[1].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(576);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	((java_util_HashMap$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(577);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[4].o);
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_java_util_HashMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:putAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(593);
	jint temp0 = (jint)((func_java_util_Map_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_isEmpty_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(594);
	M_java_util_HashMap_putAllImpl_java_util_Map(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(596);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_HashMap_putAllImpl_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:putAllImpl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(599);
	jint temp0 = (jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementCount;
	jint temp1 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(600);
	if ((frame[2].i) <= ((jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_2;
	}
	{
	LINE_NUMBER(601);
	((func_java_util_HashMap_rehash_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_rehash_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(604);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(606);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[2].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(607);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(608);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_HashMap_rehash_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:rehash", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(611);
	if ((frame[1].i) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	{
	jint temp0 = (frame[1].i) << (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	jint temp0 = (jint)SM_java_util_HashMap_calculateCapacity_int_R_int(ctx, sp[0].i);
	frame[2].i = temp0;
	LINE_NUMBER(613);
	sp[0].o = (jobject)((func_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(614);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(616);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(617);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(618);
	frame[6].i = (((jint)((java_util_HashMap$Entry *) NULL_CHECK((frame[5].o)))->F_origKeyHash) & ((frame[2].i) - (jint(1))));
	LINE_NUMBER(619);
	sp[0].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[5].o)))->F_next;
	frame[7].o = sp[0].o;
	LINE_NUMBER(620);
	((java_util_HashMap$Entry *) NULL_CHECK((frame[5].o)))->F_next = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(621);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)) = (frame[5].o);
	LINE_NUMBER(622);
	frame[5].o = (frame[7].o);
	LINE_NUMBER(623);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(614);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(625);
	((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData = (jref) (frame[3].o);
	LINE_NUMBER(626);
	M_java_util_HashMap_computeThreshold(ctx, (frame[0].o));
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_HashMap_rehash(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:rehash", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(630);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	((func_java_util_HashMap_rehash_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_rehash_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((func_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(644);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(645);
	((java_util_HashMap$Entry *) NULL_CHECK((frame[2].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(646);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[2].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_util_HashMap_removeEntry_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:removeEntry", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(656);
	jint temp0 = (jint)((java_util_HashMap$Entry *) NULL_CHECK((frame[1].o)))->F_origKeyHash;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[2].i = (temp0 & ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))));
	LINE_NUMBER(657);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(658);
	if ((frame[3].o) != (frame[1].o)) goto label_3;
	}
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[1].o)))->F_next;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	if (sp[0].o == (frame[1].o)) goto label_6;
	}
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(664);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[1].o)))->F_next;
	((java_util_HashMap$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(666);
	((java_util_HashMap$Entry *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(667);
	sp[0].o = frame[0].o;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(668);
	sp[0].o = frame[0].o;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount) - (jint(1)));
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:removeEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(672);
	frame[2].i = (jint(0));
	LINE_NUMBER(674);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(675);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(676);
	jint temp0 = (jint)SM_java_util_HashMap_computeHashCode_java_lang_Object_R_int(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(677);
	jint temp1 = frame[5].i;
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[2].i = (temp1 & ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))));
	LINE_NUMBER(678);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_7:;
	{
	LINE_NUMBER(679);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	if (((jint)((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_origKeyHash) != (frame[5].i)) goto label_9;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_key;
	jint temp0 = (jint)SM_java_util_HashMap_areEqualKeys_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(680);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(681);
	sp[0].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_7;
	}
label_8:;
	LINE_NUMBER(683);
	goto label_11;
label_3:;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
label_12:;
	{
	LINE_NUMBER(685);
	if ((frame[3].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[3].o)))->F_key;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(686);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(687);
	sp[0].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(690);
	if ((frame[3].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(691);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(693);
	if ((frame[4].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementData;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(696);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next;
	((java_util_HashMap$Entry *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(698);
	sp[0].o = frame[0].o;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(699);
	sp[0].o = frame[0].o;
	((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount = (((jint)((java_util_HashMap *) NULL_CHECK(sp[0].o))->F_elementCount) - (jint(1)));
	LINE_NUMBER(700);
	((java_util_HashMap$Entry *) NULL_CHECK((frame[3].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(701);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_HashMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(711);
	popStackFrame(ctx);
	return ((jint)((java_util_HashMap *) NULL_CHECK((frame[0].o)))->F_elementCount);
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(736);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap$2);
	init_java_util_HashMap$2_java_util_HashMap(ctx, sp[1].o, (frame[0].o));
	((java_util_AbstractMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((java_util_AbstractMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_HashMap_computeHashCode_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:computeHashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_HashMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(765);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_HashMap_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/HashMap:clone", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(772);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap_java_util_HashMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_HashMap[] {
	(void *) M_java_util_AbstractMap_hashCode_R_int,
	(void *) M_java_util_AbstractMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_HashMap_clear,
	(void *) M_java_util_HashMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_entrySet_R_java_util_Set,
	(void *) M_java_util_HashMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_isEmpty_R_boolean,
	(void *) M_java_util_HashMap_keySet_R_java_util_Set,
	(void *) M_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object,
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
	(void *) M_java_util_HashMap_size_R_int,
	(void *) M_java_util_HashMap_values_R_java_util_Collection,
	(void *) M_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_computeThreshold,
	(void *) M_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_putAllImpl_java_util_Map,
	(void *) M_java_util_HashMap_rehash_int,
	(void *) M_java_util_HashMap_rehash,
	(void *) M_java_util_HashMap_removeEntry_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry,
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
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
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
	{ "size", "()I" },
	{ "values", "()Ljava/util/Collection;" },
	{ "newElementArray", "(I)[Ljava/util/HashMap$Entry;" },
	{ "computeThreshold", "()V" },
	{ "getEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "findNonNullKeyEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "findNullKeyEntry", "()Ljava/util/HashMap$Entry;" },
	{ "putImpl", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "createEntry", "(Ljava/lang/Object;ILjava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "createHashedEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "putAllImpl", "(Ljava/util/Map;)V" },
	{ "rehash", "(I)V" },
	{ "rehash", "()V" },
	{ "removeEntry", "(Ljava/util/HashMap$Entry;)V" },
	{ "removeEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
};

static jclass interfaces[] { &class_java_util_Map, &class_java_lang_Cloneable, };

static jclass innerClasses[] {
	&class_java_util_HashMap$Entry,
	&class_java_util_HashMap$HashMapEntrySet,
	&class_java_util_HashMap$ValueIterator,
	&class_java_util_HashMap$KeyIterator,
	&class_java_util_HashMap$EntryIterator,
	&class_java_util_HashMap$AbstractMapIterator,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_HashMap_serialVersionUID, "J", 26 },
	{ "elementCount", &class_int, offsetof(java_util_HashMap, F_elementCount), "I", 128 },
	{ "elementData", getArrayClass(&class_java_util_HashMap$Entry, 1), offsetof(java_util_HashMap, F_elementData), "[Ljava/util/HashMap$Entry;", 128 },
	{ "modCount", &class_int, offsetof(java_util_HashMap, F_modCount), "I", 128 },
	{ "DEFAULT_SIZE", &class_int, (intptr_t) &SF_java_util_HashMap_DEFAULT_SIZE, "I", 26 },
	{ "loadFactor", &class_float, offsetof(java_util_HashMap, F_loadFactor), "F", 16 },
	{ "threshold", &class_int, offsetof(java_util_HashMap, F_threshold), "I", 0 },
};

static MethodMetadata methods[] {
	{ "newElementArray", (intptr_t) M_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry, VTABLE_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry, "(I)[Ljava/util/HashMap$Entry;", 0 },
	{ "<init>", (intptr_t) init_java_util_HashMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_HashMap_int, 0, "(I)V", 1 },
	{ "calculateCapacity", (intptr_t) SM_java_util_HashMap_calculateCapacity_int_R_int, 0, "(I)I", 26 },
	{ "<init>", (intptr_t) init_java_util_HashMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_java_util_HashMap_java_util_Map, 0, "(Ljava/util/Map;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_HashMap_java_util_HashMap, 0, "(Ljava/util/HashMap;)V", 1 },
	{ "clear", (intptr_t) M_java_util_HashMap_clear, VTABLE_java_util_HashMap_clear, "()V", 1 },
	{ "computeThreshold", (intptr_t) M_java_util_HashMap_computeThreshold, VTABLE_java_util_HashMap_computeThreshold, "()V", 2 },
	{ "containsKey", (intptr_t) M_java_util_HashMap_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_HashMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsValue", (intptr_t) M_java_util_HashMap_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_HashMap_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "entrySet", (intptr_t) M_java_util_HashMap_entrySet_R_java_util_Set, VTABLE_java_util_HashMap_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "get", (intptr_t) M_java_util_HashMap_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "getEntry", (intptr_t) M_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry, VTABLE_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry, "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;", 16 },
	{ "findNonNullKeyEntry", (intptr_t) M_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry, VTABLE_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry, "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;", 272 },
	{ "findNullKeyEntry", (intptr_t) M_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry, VTABLE_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry, "()Ljava/util/HashMap$Entry;", 16 },
	{ "isEmpty", (intptr_t) M_java_util_HashMap_isEmpty_R_boolean, VTABLE_java_util_HashMap_isEmpty_R_boolean, "()Z", 1 },
	{ "keySet", (intptr_t) M_java_util_HashMap_keySet_R_java_util_Set, VTABLE_java_util_HashMap_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "put", (intptr_t) M_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putImpl", (intptr_t) M_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 0 },
	{ "createEntry", (intptr_t) M_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry, VTABLE_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry, "(Ljava/lang/Object;ILjava/lang/Object;)Ljava/util/HashMap$Entry;", 0 },
	{ "createHashedEntry", (intptr_t) M_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry, VTABLE_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry, "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;", 0 },
	{ "putAll", (intptr_t) M_java_util_HashMap_putAll_java_util_Map, VTABLE_java_util_HashMap_putAll_java_util_Map, "(Ljava/util/Map;)V", 1 },
	{ "putAllImpl", (intptr_t) M_java_util_HashMap_putAllImpl_java_util_Map, VTABLE_java_util_HashMap_putAllImpl_java_util_Map, "(Ljava/util/Map;)V", 2 },
	{ "rehash", (intptr_t) M_java_util_HashMap_rehash_int, VTABLE_java_util_HashMap_rehash_int, "(I)V", 0 },
	{ "rehash", (intptr_t) M_java_util_HashMap_rehash, VTABLE_java_util_HashMap_rehash, "()V", 0 },
	{ "remove", (intptr_t) M_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "removeEntry", (intptr_t) M_java_util_HashMap_removeEntry_java_util_HashMap$Entry, VTABLE_java_util_HashMap_removeEntry_java_util_HashMap$Entry, "(Ljava/util/HashMap$Entry;)V", 16 },
	{ "removeEntry", (intptr_t) M_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry, VTABLE_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry, "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;", 16 },
	{ "size", (intptr_t) M_java_util_HashMap_size_R_int, VTABLE_java_util_HashMap_size_R_int, "()I", 1 },
	{ "values", (intptr_t) M_java_util_HashMap_values_R_java_util_Collection, VTABLE_java_util_HashMap_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "computeHashCode", (intptr_t) SM_java_util_HashMap_computeHashCode_java_lang_Object_R_int, 0, "(Ljava/lang/Object;)I", 8 },
	{ "areEqualKeys", (intptr_t) SM_java_util_HashMap_areEqualKeys_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 264 },
	{ "clone", (intptr_t) M_java_util_HashMap_clone_R_java_lang_Object, VTABLE_java_util_HashMap_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_util_HashMap{
		.nativeName = (intptr_t) "java/util/HashMap",
		.parentClass = (intptr_t) &class_java_util_AbstractMap,
		.size = sizeof(java_util_HashMap),
		.classVtable = (intptr_t) vtable_java_util_HashMap,
		.staticInitializer = (intptr_t) clinit_java_util_HashMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_HashMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 6,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_HashMap = registerClass(&class_java_util_HashMap);

}
