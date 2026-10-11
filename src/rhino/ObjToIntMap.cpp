#include "rhino/ObjToIntMap.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "rhino/ObjToIntMap.h"
#include "java/lang/RuntimeException.h"
#include "rhino/ObjToIntMap_Iterator.h"
#include "rhino/UniqueTag.h"

extern "C" {

jint SF_rhino_ObjToIntMap_A;
jobject SF_rhino_ObjToIntMap_DELETED;
jbool SF_rhino_ObjToIntMap_check;

void mark_rhino_ObjToIntMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ObjToIntMap_DELETED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ObjToIntMap_DELETED)->clazz)->markFunction)((jobject) SF_rhino_ObjToIntMap_DELETED, mark, depth + 1);
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
	auto self = (rhino_ObjToIntMap *) object;
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void init_rhino_ObjToIntMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjToIntMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(79);
	init_rhino_ObjToIntMap_int(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ObjToIntMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjToIntMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(82);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(83);
	if ((frame[1].i) >= 0) goto label_2;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(85);
	frame[2].i = (((frame[1].i) * (jint(4))) / (jint(3)));
	LINE_NUMBER(87);
	frame[3].i = (jint(2));
	}
label_4:;
	{
	if (((jint(1)) << (frame[3].i)) >= (frame[2].i)) goto label_5;
	}
	INST_IINC(3, 1);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(89);
	((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power = (frame[3].i);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ObjToIntMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	if (((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keyCount) != 0) goto label_1;
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

jint M_rhino_ObjToIntMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keyCount);
	}

	popStackFrame(ctx);
}

jbool M_rhino_ObjToIntMap_has_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(103);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(105);
	jint temp0 = jint(0);
	jint temp1 = (jint)M_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	if (temp0 > temp1) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_ObjToIntMap_get_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(113);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(114);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)M_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(117);
	if ((jint(0)) > (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)));
	}
label_4:;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_ObjToIntMap_getExisting_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:getExisting", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(130);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)M_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(133);
	if ((jint(0)) > (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	}
label_4:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap_put_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(142);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(143);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)M_rhino_ObjToIntMap_ensureIndex_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(146);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:intern", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	frame[2].i = (jint(0));
	LINE_NUMBER(156);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(157);
	frame[2].i = (jint(1));
	LINE_NUMBER(158);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(160);
	jint temp0 = (jint)M_rhino_ObjToIntMap_ensureIndex_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(161);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(162);
	if ((frame[2].i) == 0) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	sp += 1;
	}
label_8:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap_remove_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(167);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)M_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(170);
	if ((jint(0)) > (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	jint temp0 = frame[2].i;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = (jobject)SF_rhino_ObjToIntMap_DELETED;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_keyCount = (((jint)((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_keyCount) - (jint(1)));
	}
label_4:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_1:;
	{
	LINE_NUMBER(178);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	INST_IINC(1, -1);
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(181);
	((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keyCount = (jint(0));
	LINE_NUMBER(182);
	((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_occupiedCount = (jint(0));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ObjToIntMap_newIterator_R_rhino_ObjToIntMap$Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:newIterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	clinit_rhino_ObjToIntMap$Iterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ObjToIntMap$Iterator);
	init_rhino_ObjToIntMap$Iterator_rhino_ObjToIntMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap_initIterator_rhino_ObjToIntMap$Iterator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:initIterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	sp[2].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	((func_rhino_ObjToIntMap$Iterator_init_Array1_java_lang_Object_Array1_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_init_Array1_java_lang_Object_Array1_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keyCount));
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ObjToIntMap_getKeys_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:getKeys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keyCount));
	frame[1].o = sp[0].o;
	LINE_NUMBER(199);
	((func_rhino_ObjToIntMap_getKeys_Array1_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ObjToIntMap_getKeys_Array1_java_lang_Object_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap_getKeys_Array1_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:getKeys", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(204);
	frame[3].i = ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keyCount);
	LINE_NUMBER(205);
	frame[4].i = (jint(0));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_3;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(207);
	if ((frame[5].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[5].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = (jobject)SF_rhino_ObjToIntMap_DELETED;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = frame[5].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(209);
	frame[5].o = (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(211);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (frame[5].o);
	LINE_NUMBER(212);
	INST_IINC(2, 1);
	LINE_NUMBER(213);
	INST_IINC(3, -1);
	}
label_6:;
	{
	LINE_NUMBER(205);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(216);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_rhino_ObjToIntMap_tableLookupStep_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:tableLookupStep", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjToIntMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(219);
	frame[3].i = ((32) - ((jint(2)) * (frame[2].i)));
	LINE_NUMBER(220);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (frame[3].i))) & (frame[1].i)) | (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (((frame[0].i) & (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (-(frame[3].i))))) | (jint(1)));
	}

	popStackFrame(ctx);
}

jint M_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:findIndex", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(228);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(229);
	frame[3].i = ((frame[2].i) * (jint(-1640531527)));
	LINE_NUMBER(230);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> ((32) - ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power))));
	LINE_NUMBER(231);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(232);
	if ((frame[5].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(233);
	frame[6].i = ((jint(1)) << ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power));
	LINE_NUMBER(234);
	if ((frame[5].o) == (frame[1].o)) goto label_9;
	}
	{
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[6].i) + (frame[4].i)))) != (frame[2].i)) goto label_10;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(235);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_10:;
	{
	LINE_NUMBER(239);
	frame[7].i = ((frame[6].i) - (jint(1)));
	LINE_NUMBER(240);
	jint temp0 = (jint)SM_rhino_ObjToIntMap_tableLookupStep_int_int_int_R_int(ctx, (frame[3].i), (frame[7].i), ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power));
	frame[8].i = temp0;
	LINE_NUMBER(241);
	frame[9].i = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(247);
	frame[4].i = (((frame[4].i) + (frame[8].i)) & (frame[7].i));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(249);
	if ((frame[5].o) != nullptr) goto label_17;
	}
	LINE_NUMBER(250);
	goto label_1;
label_17:;
	{
	LINE_NUMBER(252);
	if ((frame[5].o) == (frame[1].o)) goto label_19;
	}
	{
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[6].i) + (frame[4].i)))) != (frame[2].i)) goto label_14;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_14;
	}
label_19:;
	{
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_1:;
	{
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_rhino_ObjToIntMap_insertNewKey_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:insertNewKey", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(267);
	frame[3].i = ((frame[2].i) * (jint(-1640531527)));
	LINE_NUMBER(268);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> ((32) - ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power))));
	LINE_NUMBER(269);
	frame[5].i = ((jint(1)) << ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(271);
	frame[6].i = ((frame[5].i) - (jint(1)));
	LINE_NUMBER(272);
	jint temp0 = (jint)SM_rhino_ObjToIntMap_tableLookupStep_int_int_int_R_int(ctx, (frame[3].i), (frame[6].i), ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power));
	frame[7].i = temp0;
	LINE_NUMBER(273);
	frame[8].i = (frame[4].i);
	}
label_8:;
	{
	LINE_NUMBER(276);
	frame[4].i = (((frame[4].i) + (frame[7].i)) & (frame[6].i));
	LINE_NUMBER(278);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))) != nullptr) goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(281);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jint, sp[0].o, ((frame[5].i) + (frame[4].i))) = (frame[2].i);
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_occupiedCount = (((jint)((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_occupiedCount) + (jint(1)));
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_keyCount = (((jint)((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_keyCount) + (jint(1)));
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap_rehashTable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:rehashTable", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(292);
	frame[1].i = ((jint(1)) << ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power));
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint(2)) * (frame[1].i)));
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(295);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(297);
	if ((((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keyCount) * (jint(2))) < ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_occupiedCount)) goto label_7;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_power = (((jint)((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_power) + (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(301);
	frame[1].i = ((jint(1)) << ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(303);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].o = sp[0].o;
	LINE_NUMBER(304);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint(2)) * (frame[1].i)));
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(308);
	frame[5].i = ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keyCount);
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((rhino_ObjToIntMap *) NULL_CHECK(sp[1].o))->F_keyCount = temp0;
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_occupiedCount = temp0;
	LINE_NUMBER(310);
	frame[6].i = (jint(0));
	}
label_17:;
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_6;
	{
	LINE_NUMBER(311);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(312);
	if ((frame[7].o) == nullptr) goto label_20;
	}
	{
	sp[0].o = frame[7].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = (jobject)SF_rhino_ObjToIntMap_DELETED;
	if (sp[0].o == sp[1].o) goto label_20;
	}
	{
	LINE_NUMBER(313);
	frame[8].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (frame[6].i))));
	LINE_NUMBER(314);
	jint temp0 = (jint)M_rhino_ObjToIntMap_insertNewKey_java_lang_Object_int_R_int(ctx, (frame[0].o), (frame[7].o), (frame[8].i));
	frame[9].i = temp0;
	LINE_NUMBER(315);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jint, sp[0].o, (frame[9].i)) = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(316);
	INST_IINC(5, -1);
	}
label_20:;
	{
	LINE_NUMBER(310);
	INST_IINC(6, 1);
	goto label_17;
	}
label_6:;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_ObjToIntMap_ensureIndex_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:ensureIndex", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(325);
	frame[3].i = (jint(-1));
	LINE_NUMBER(326);
	frame[4].i = (jint(-1));
	LINE_NUMBER(327);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(328);
	frame[5].i = ((frame[2].i) * (jint(-1640531527)));
	LINE_NUMBER(329);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> ((32) - ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power))));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(331);
	if ((frame[6].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(332);
	frame[7].i = ((jint(1)) << ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power));
	LINE_NUMBER(333);
	if ((frame[6].o) == (frame[1].o)) goto label_11;
	}
	{
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[7].i) + (frame[3].i)))) != (frame[2].i)) goto label_12;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(334);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_12:;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[6].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = (jobject)SF_rhino_ObjToIntMap_DELETED;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(338);
	frame[4].i = (frame[3].i);
	}
label_14:;
	{
	LINE_NUMBER(342);
	frame[8].i = ((frame[7].i) - (jint(1)));
	LINE_NUMBER(343);
	jint temp0 = (jint)SM_rhino_ObjToIntMap_tableLookupStep_int_int_int_R_int(ctx, (frame[5].i), (frame[8].i), ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power));
	frame[9].i = temp0;
	LINE_NUMBER(344);
	frame[10].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(350);
	frame[3].i = (((frame[3].i) + (frame[9].i)) & (frame[8].i));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(352);
	if ((frame[6].o) != nullptr) goto label_21;
	}
	LINE_NUMBER(353);
	goto label_4;
label_21:;
	{
	LINE_NUMBER(355);
	if ((frame[6].o) == (frame[1].o)) goto label_23;
	}
	{
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[7].i) + (frame[3].i)))) != (frame[2].i)) goto label_24;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(356);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_24:;
	{
	LINE_NUMBER(359);
	sp[0].o = frame[6].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = (jobject)SF_rhino_ObjToIntMap_DELETED;
	if (sp[0].o != sp[1].o) goto label_18;
	}
	INST_ILOAD(4);
	if ((--sp)->i >= 0) goto label_18;
	{
	LINE_NUMBER(360);
	frame[4].i = (frame[3].i);
	goto label_18;
	}
label_4:;
	{
	LINE_NUMBER(368);
	if ((frame[4].i) < 0) goto label_27;
	}
	{
	LINE_NUMBER(369);
	frame[3].i = (frame[4].i);
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	if ((((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_occupiedCount) * (jint(4))) < (((jint(1)) << ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power)) * (jint(3)))) goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(374);
	M_rhino_ObjToIntMap_rehashTable(ctx, (frame[0].o));
	LINE_NUMBER(375);
	jint temp0 = (jint)M_rhino_ObjToIntMap_insertNewKey_java_lang_Object_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}
label_31:;
	{
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_occupiedCount = (((jint)((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_occupiedCount) + (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(380);
	sp[0].o = (jobject)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jint, sp[0].o, (((jint(1)) << ((jint)((rhino_ObjToIntMap *) NULL_CHECK((frame[0].o)))->F_power)) + (frame[3].i))) = (frame[2].i);
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_keyCount = (((jint)((rhino_ObjToIntMap *) NULL_CHECK(sp[0].o))->F_keyCount) + (jint(1)));
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ObjToIntMap_access$000_R_java_lang_Object(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:access$000", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjToIntMap(ctx);
	{
	LINE_NUMBER(11);
	clinit_rhino_ObjToIntMap(ctx);
	sp[0].o = (jobject)SF_rhino_ObjToIntMap_DELETED;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_ObjToIntMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_ObjToIntMap_A = jint(-1640531527);
	SF_rhino_ObjToIntMap_check = jint(0);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjToIntMap(ctx);
	{
	LINE_NUMBER(389);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_rhino_ObjToIntMap(ctx);
	SF_rhino_ObjToIntMap_DELETED = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ObjToIntMap[] {
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
	(void *) M_rhino_ObjToIntMap_isEmpty_R_boolean,
	(void *) M_rhino_ObjToIntMap_size_R_int,
	(void *) M_rhino_ObjToIntMap_has_java_lang_Object_R_boolean,
	(void *) M_rhino_ObjToIntMap_get_java_lang_Object_int_R_int,
	(void *) M_rhino_ObjToIntMap_getExisting_java_lang_Object_R_int,
	(void *) M_rhino_ObjToIntMap_put_java_lang_Object_int,
	(void *) M_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ObjToIntMap_remove_java_lang_Object,
	(void *) M_rhino_ObjToIntMap_clear,
	(void *) M_rhino_ObjToIntMap_newIterator_R_rhino_ObjToIntMap$Iterator,
	(void *) M_rhino_ObjToIntMap_initIterator_rhino_ObjToIntMap$Iterator,
	(void *) M_rhino_ObjToIntMap_getKeys_R_Array1_java_lang_Object,
	(void *) M_rhino_ObjToIntMap_getKeys_Array1_java_lang_Object_int,
	(void *) M_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int,
	(void *) M_rhino_ObjToIntMap_insertNewKey_java_lang_Object_int_R_int,
	(void *) M_rhino_ObjToIntMap_rehashTable,
	(void *) M_rhino_ObjToIntMap_ensureIndex_java_lang_Object_R_int,
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
	{ "isEmpty", "()Z" },
	{ "size", "()I" },
	{ "has", "(Ljava/lang/Object;)Z" },
	{ "get", "(Ljava/lang/Object;I)I" },
	{ "getExisting", "(Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;I)V" },
	{ "intern", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)V" },
	{ "clear", "()V" },
	{ "newIterator", "()Lrhino/ObjToIntMap$Iterator;" },
	{ "initIterator", "(Lrhino/ObjToIntMap$Iterator;)V" },
	{ "getKeys", "()[Ljava/lang/Object;" },
	{ "getKeys", "([Ljava/lang/Object;I)V" },
	{ "findIndex", "(Ljava/lang/Object;)I" },
	{ "insertNewKey", "(Ljava/lang/Object;I)I" },
	{ "rehashTable", "()V" },
	{ "ensureIndex", "(Ljava/lang/Object;)I" },
};

static jclass innerClasses[] {
	&class_rhino_ObjToIntMap$Iterator,
};

static FieldMetadata fields[] {
	{ "A", &class_int, (intptr_t) &SF_rhino_ObjToIntMap_A, "I", 26 },
	{ "DELETED", &class_java_lang_Object, (intptr_t) &SF_rhino_ObjToIntMap_DELETED, "Ljava/lang/Object;", 26 },
	{ "keys", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_ObjToIntMap, F_keys), "[Ljava/lang/Object;", 130 },
	{ "values", getArrayClass(&class_int, 1), offsetof(rhino_ObjToIntMap, F_values), "[I", 130 },
	{ "power", &class_int, offsetof(rhino_ObjToIntMap, F_power), "I", 2 },
	{ "keyCount", &class_int, offsetof(rhino_ObjToIntMap, F_keyCount), "I", 2 },
	{ "occupiedCount", &class_int, offsetof(rhino_ObjToIntMap, F_occupiedCount), "I", 130 },
	{ "check", &class_boolean, (intptr_t) &SF_rhino_ObjToIntMap_check, "Z", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ObjToIntMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ObjToIntMap_int, 0, "(I)V", 1 },
	{ "isEmpty", (intptr_t) M_rhino_ObjToIntMap_isEmpty_R_boolean, VTABLE_rhino_ObjToIntMap_isEmpty_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_rhino_ObjToIntMap_size_R_int, VTABLE_rhino_ObjToIntMap_size_R_int, "()I", 1 },
	{ "has", (intptr_t) M_rhino_ObjToIntMap_has_java_lang_Object_R_boolean, VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", (intptr_t) M_rhino_ObjToIntMap_get_java_lang_Object_int_R_int, VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 1 },
	{ "getExisting", (intptr_t) M_rhino_ObjToIntMap_getExisting_java_lang_Object_R_int, VTABLE_rhino_ObjToIntMap_getExisting_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "put", (intptr_t) M_rhino_ObjToIntMap_put_java_lang_Object_int, VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int, "(Ljava/lang/Object;I)V", 1 },
	{ "intern", (intptr_t) M_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_rhino_ObjToIntMap_remove_java_lang_Object, VTABLE_rhino_ObjToIntMap_remove_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "clear", (intptr_t) M_rhino_ObjToIntMap_clear, VTABLE_rhino_ObjToIntMap_clear, "()V", 1 },
	{ "newIterator", (intptr_t) M_rhino_ObjToIntMap_newIterator_R_rhino_ObjToIntMap$Iterator, VTABLE_rhino_ObjToIntMap_newIterator_R_rhino_ObjToIntMap$Iterator, "()Lrhino/ObjToIntMap$Iterator;", 1 },
	{ "initIterator", (intptr_t) M_rhino_ObjToIntMap_initIterator_rhino_ObjToIntMap$Iterator, VTABLE_rhino_ObjToIntMap_initIterator_rhino_ObjToIntMap$Iterator, "(Lrhino/ObjToIntMap$Iterator;)V", 16 },
	{ "getKeys", (intptr_t) M_rhino_ObjToIntMap_getKeys_R_Array1_java_lang_Object, VTABLE_rhino_ObjToIntMap_getKeys_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "getKeys", (intptr_t) M_rhino_ObjToIntMap_getKeys_Array1_java_lang_Object_int, VTABLE_rhino_ObjToIntMap_getKeys_Array1_java_lang_Object_int, "([Ljava/lang/Object;I)V", 1 },
	{ "tableLookupStep", (intptr_t) SM_rhino_ObjToIntMap_tableLookupStep_int_int_int_R_int, 0, "(III)I", 10 },
	{ "findIndex", (intptr_t) M_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int, VTABLE_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 2 },
	{ "insertNewKey", (intptr_t) M_rhino_ObjToIntMap_insertNewKey_java_lang_Object_int_R_int, VTABLE_rhino_ObjToIntMap_insertNewKey_java_lang_Object_int_R_int, "(Ljava/lang/Object;I)I", 2 },
	{ "rehashTable", (intptr_t) M_rhino_ObjToIntMap_rehashTable, VTABLE_rhino_ObjToIntMap_rehashTable, "()V", 2 },
	{ "ensureIndex", (intptr_t) M_rhino_ObjToIntMap_ensureIndex_java_lang_Object_R_int, VTABLE_rhino_ObjToIntMap_ensureIndex_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 2 },
	{ "access$000", (intptr_t) SM_rhino_ObjToIntMap_access$000_R_java_lang_Object, 0, "()Ljava/lang/Object;", 4104 },
	{ "<clinit>", (intptr_t) clinit_rhino_ObjToIntMap, 0, "()V", 8 },
};

Class class_rhino_ObjToIntMap{
		.nativeName = (intptr_t) "rhino/ObjToIntMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ObjToIntMap),
		.classVtable = (intptr_t) vtable_rhino_ObjToIntMap,
		.staticInitializer = (intptr_t) clinit_rhino_ObjToIntMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ObjToIntMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ObjToIntMap = registerClass(&class_rhino_ObjToIntMap);

}
