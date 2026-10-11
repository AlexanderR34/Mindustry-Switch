#include "rhino/UintMap.h"
#include "java/lang/Object.h"
#include "rhino/UintMap.h"
#include "rhino/Kit.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/System.h"

extern "C" {

jint SF_rhino_UintMap_A;
jint SF_rhino_UintMap_EMPTY;
jint SF_rhino_UintMap_DELETED;
jbool SF_rhino_UintMap_check;

void mark_rhino_UintMap(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_UintMap *) object;
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_rhino_UintMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_UintMap_A = jint(-1640531527);
	SF_rhino_UintMap_EMPTY = jint(-1);
	SF_rhino_UintMap_DELETED = jint(-2);
	SF_rhino_UintMap_check = jint(0);
}

void init_rhino_UintMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_UintMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_rhino_UintMap_int(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_UintMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_UintMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	if ((frame[1].i) >= 0) goto label_2;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(22);
	frame[2].i = (((frame[1].i) * (jint(4))) / (jint(3)));
	LINE_NUMBER(24);
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
	LINE_NUMBER(26);
	((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power = (frame[3].i);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_UintMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	if (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keyCount) != 0) goto label_1;
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

jint M_rhino_UintMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keyCount);
	}

	popStackFrame(ctx);
}

jbool M_rhino_UintMap_has_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(39);
	if ((frame[1].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(40);
	jint temp0 = jint(0);
	jint temp1 = (jint)M_rhino_UintMap_findIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	if (temp0 > temp1) goto label_2;
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

jobject M_rhino_UintMap_getObject_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:getObject", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(48);
	if ((frame[1].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(50);
	jint temp0 = (jint)M_rhino_UintMap_findIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(51);
	if ((jint(0)) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_2:;
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_rhino_UintMap_getInt_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:getInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(63);
	if ((frame[1].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)M_rhino_UintMap_findIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(65);
	if ((jint(0)) > (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(66);
	if (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift) == 0) goto label_5;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift) + (frame[3].i))));
	}
label_5:;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_UintMap_getExistingInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:getExistingInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(81);
	if ((frame[1].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)M_rhino_UintMap_findIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(83);
	if ((jint(0)) > (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(84);
	if (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift) == 0) goto label_5;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift) + (frame[2].i))));
	}
label_5:;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_UintMap_put_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(99);
	if ((frame[1].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(100);
	jint temp0 = (jint)M_rhino_UintMap_ensureIndex_int_boolean_R_int(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	frame[3].i = temp0;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint(1)) << ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power)));
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_UintMap_put_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:put", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(112);
	if ((frame[1].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)M_rhino_UintMap_ensureIndex_int_boolean_R_int(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(114);
	if (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift) != 0) goto label_3;
	}
	{
	LINE_NUMBER(115);
	frame[4].i = ((jint(1)) << ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((frame[4].i) * (jint(2)))) goto label_6;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[4].i) * (jint(2))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(120);
	((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys = (jref) (frame[5].o);
	}
label_6:;
	{
	LINE_NUMBER(122);
	((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift = (frame[4].i);
	}
label_3:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jint, sp[0].o, (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift) + (frame[3].i))) = (frame[2].i);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_UintMap_remove_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(128);
	if ((frame[1].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)M_rhino_UintMap_findIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(130);
	if ((jint(0)) > (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (-2);
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_keyCount = (((jint)((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_keyCount) - (jint(1)));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(138);
	if (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift) == 0) goto label_3;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jint, sp[0].o, (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift) + (frame[2].i))) = (jint(0));
	}
label_3:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_UintMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:clear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	frame[1].i = ((jint(1)) << ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(147);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) == (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (jint(-1));
	LINE_NUMBER(147);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(151);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	if ((frame[2].i) == (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(151);
	INST_IINC(2, 1);
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(156);
	((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift = (jint(0));
	LINE_NUMBER(157);
	((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keyCount = (jint(0));
	LINE_NUMBER(158);
	((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_occupiedCount = (jint(0));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_UintMap_getKeys_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:getKeys", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[1].o = sp[0].o;
	LINE_NUMBER(164);
	frame[2].i = ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keyCount);
	LINE_NUMBER(165);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(166);
	frame[4].i = (jint(0));
	}
label_4:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_5;
	{
	LINE_NUMBER(167);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[4].i)));
	LINE_NUMBER(168);
	if ((frame[5].i) == (jint(-1))) goto label_8;
	}
	{
	if ((frame[5].i) == (-2)) goto label_8;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = frame[3].o;
	INST_IINC(2, -1);
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (frame[5].i);
	}
label_8:;
	{
	LINE_NUMBER(166);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint SM_rhino_UintMap_tableLookupStep_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:tableLookupStep", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_UintMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(176);
	frame[3].i = ((32) - ((jint(2)) * (frame[2].i)));
	LINE_NUMBER(177);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return (((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (frame[3].i))) & (frame[1].i)) | (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (((frame[0].i) & (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (-(frame[3].i))))) | (jint(1)));
	}

	popStackFrame(ctx);
}

jint M_rhino_UintMap_findIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:findIndex", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(185);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(186);
	frame[3].i = ((frame[1].i) * (jint(-1640531527)));
	LINE_NUMBER(187);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> ((32) - ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power))));
	LINE_NUMBER(188);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(189);
	if ((frame[5].i) != (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_7:;
	{
	LINE_NUMBER(192);
	if ((frame[5].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(194);
	frame[6].i = (((jint(1)) << ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power)) - (jint(1)));
	LINE_NUMBER(195);
	jint temp0 = (jint)SM_rhino_UintMap_tableLookupStep_int_int_int_R_int(ctx, (frame[3].i), (frame[6].i), ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power));
	frame[7].i = temp0;
	LINE_NUMBER(196);
	frame[8].i = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(202);
	frame[4].i = (((frame[4].i) + (frame[7].i)) & (frame[6].i));
	LINE_NUMBER(203);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(204);
	if ((frame[5].i) != (frame[1].i)) goto label_15;
	}
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_15:;
	{
	LINE_NUMBER(207);
	if ((frame[5].i) != (jint(-1))) goto label_12;
	}
label_2:;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_rhino_UintMap_insertNewKey_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:insertNewKey", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[2].o = sp[0].o;
	LINE_NUMBER(219);
	frame[3].i = ((frame[1].i) * (jint(-1640531527)));
	LINE_NUMBER(220);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> ((32) - ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power))));
	LINE_NUMBER(221);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i))) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(222);
	frame[5].i = (((jint(1)) << ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power)) - (jint(1)));
	LINE_NUMBER(223);
	jint temp0 = (jint)SM_rhino_UintMap_tableLookupStep_int_int_int_R_int(ctx, (frame[3].i), (frame[5].i), ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power));
	frame[6].i = temp0;
	LINE_NUMBER(224);
	frame[7].i = (frame[4].i);
	}
label_8:;
	{
	LINE_NUMBER(227);
	frame[4].i = (((frame[4].i) + (frame[6].i)) & (frame[5].i));
	LINE_NUMBER(229);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i))) != (jint(-1))) goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(231);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_occupiedCount = (((jint)((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_occupiedCount) + (jint(1)));
	LINE_NUMBER(233);
	sp[0].o = frame[0].o;
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_keyCount = (((jint)((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_keyCount) + (jint(1)));
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_rhino_UintMap_rehashTable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:rehashTable", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(240);
	if ((((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keyCount) * (jint(2))) < ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_occupiedCount)) goto label_1;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_power = (((jint)((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_power) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(245);
	frame[2].i = ((jint(1)) << ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power));
	LINE_NUMBER(246);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[3].o = sp[0].o;
	LINE_NUMBER(247);
	frame[4].i = ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift);
	LINE_NUMBER(248);
	if ((frame[4].i) != 0) goto label_7;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_7;
	{
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(251);
	((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift = (frame[2].i);
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((frame[2].i) * (jint(2))));
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_keys = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(254);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) == (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)) = (jint(-1));
	LINE_NUMBER(254);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	frame[5].o = sp[0].o;
	LINE_NUMBER(259);
	if ((frame[5].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(263);
	frame[6].i = ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keyCount);
	LINE_NUMBER(264);
	((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_occupiedCount = (jint(0));
	LINE_NUMBER(265);
	if ((frame[6].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(266);
	((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keyCount = (jint(0));
	LINE_NUMBER(267);
	frame[7].i = (jint(0));
	frame[8].i = (frame[6].i);
	}
label_24:;
	INST_ILOAD(8);
	if ((--sp)->i == 0) goto label_20;
	{
	LINE_NUMBER(268);
	frame[9].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[7].i)));
	LINE_NUMBER(269);
	if ((frame[9].i) == (jint(-1))) goto label_27;
	}
	{
	if ((frame[9].i) == (-2)) goto label_27;
	}
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)M_rhino_UintMap_insertNewKey_int_R_int(ctx, (frame[0].o), (frame[9].i));
	frame[10].i = temp0;
	LINE_NUMBER(271);
	if ((frame[5].o) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	}
label_30:;
	{
	LINE_NUMBER(274);
	if ((frame[4].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	ARRAY_ACCESS(jint, sp[0].o, (((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_ivaluesShift) + (frame[10].i))) = ((jint)ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (frame[7].i))));
	}
label_32:;
	LINE_NUMBER(277);
	INST_IINC(8, -1);
label_27:;
	{
	LINE_NUMBER(267);
	INST_IINC(7, 1);
	goto label_24;
	}
label_20:;
	LINE_NUMBER(281);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_UintMap_ensureIndex_int_boolean_R_int(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UintMap:ensureIndex", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(285);
	frame[3].i = (jint(-1));
	LINE_NUMBER(286);
	frame[4].i = (jint(-1));
	LINE_NUMBER(287);
	sp[0].o = (jobject)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[5].o = sp[0].o;
	LINE_NUMBER(288);
	if ((frame[5].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(289);
	frame[6].i = ((frame[1].i) * (jint(-1640531527)));
	LINE_NUMBER(290);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[6].i)) >> ((32) - ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power))));
	LINE_NUMBER(291);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[3].i)));
	LINE_NUMBER(292);
	if ((frame[7].i) != (frame[1].i)) goto label_9;
	}
	{
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_9:;
	{
	LINE_NUMBER(295);
	if ((frame[7].i) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(296);
	if ((frame[7].i) != (-2)) goto label_12;
	}
	{
	LINE_NUMBER(297);
	frame[4].i = (frame[3].i);
	}
label_12:;
	{
	LINE_NUMBER(300);
	frame[8].i = (((jint(1)) << ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power)) - (jint(1)));
	LINE_NUMBER(301);
	jint temp0 = (jint)SM_rhino_UintMap_tableLookupStep_int_int_int_R_int(ctx, (frame[6].i), (frame[8].i), ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power));
	frame[9].i = temp0;
	LINE_NUMBER(302);
	frame[10].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(308);
	frame[3].i = (((frame[3].i) + (frame[9].i)) & (frame[8].i));
	LINE_NUMBER(309);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[3].i)));
	LINE_NUMBER(310);
	if ((frame[7].i) != (frame[1].i)) goto label_19;
	}
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_19:;
	{
	LINE_NUMBER(313);
	if ((frame[7].i) != (-2)) goto label_21;
	}
	INST_ILOAD(4);
	if ((--sp)->i >= 0) goto label_21;
	{
	LINE_NUMBER(314);
	frame[4].i = (frame[3].i);
	}
label_21:;
	{
	LINE_NUMBER(316);
	if ((frame[7].i) != (jint(-1))) goto label_16;
	}
label_4:;
	{
	LINE_NUMBER(322);
	if ((frame[4].i) < 0) goto label_23;
	}
	{
	LINE_NUMBER(323);
	frame[3].i = (frame[4].i);
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(326);
	if ((frame[5].o) == nullptr) goto label_26;
	}
	{
	if ((((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_occupiedCount) * (jint(4))) < (((jint(1)) << ((jint)((rhino_UintMap *) NULL_CHECK((frame[0].o)))->F_power)) * (jint(3)))) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(328);
	M_rhino_UintMap_rehashTable_boolean(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(329);
	jint temp0 = (jint)M_rhino_UintMap_insertNewKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}
label_27:;
	{
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_occupiedCount = (((jint)((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_occupiedCount) + (jint(1)));
	}
label_25:;
	{
	LINE_NUMBER(333);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_keyCount = (((jint)((rhino_UintMap *) NULL_CHECK(sp[0].o))->F_keyCount) + (jint(1)));
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_UintMap[] {
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
	(void *) M_rhino_UintMap_isEmpty_R_boolean,
	(void *) M_rhino_UintMap_size_R_int,
	(void *) M_rhino_UintMap_has_int_R_boolean,
	(void *) M_rhino_UintMap_getObject_int_R_java_lang_Object,
	(void *) M_rhino_UintMap_getInt_int_int_R_int,
	(void *) M_rhino_UintMap_getExistingInt_int_R_int,
	(void *) M_rhino_UintMap_put_int_java_lang_Object,
	(void *) M_rhino_UintMap_put_int_int,
	(void *) M_rhino_UintMap_remove_int,
	(void *) M_rhino_UintMap_clear,
	(void *) M_rhino_UintMap_getKeys_R_Array1_int,
	(void *) M_rhino_UintMap_findIndex_int_R_int,
	(void *) M_rhino_UintMap_insertNewKey_int_R_int,
	(void *) M_rhino_UintMap_rehashTable_boolean,
	(void *) M_rhino_UintMap_ensureIndex_int_boolean_R_int,
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
	{ "has", "(I)Z" },
	{ "getObject", "(I)Ljava/lang/Object;" },
	{ "getInt", "(II)I" },
	{ "getExistingInt", "(I)I" },
	{ "put", "(ILjava/lang/Object;)V" },
	{ "put", "(II)V" },
	{ "remove", "(I)V" },
	{ "clear", "()V" },
	{ "getKeys", "()[I" },
	{ "findIndex", "(I)I" },
	{ "insertNewKey", "(I)I" },
	{ "rehashTable", "(Z)V" },
	{ "ensureIndex", "(IZ)I" },
};

static FieldMetadata fields[] {
	{ "A", &class_int, (intptr_t) &SF_rhino_UintMap_A, "I", 26 },
	{ "EMPTY", &class_int, (intptr_t) &SF_rhino_UintMap_EMPTY, "I", 26 },
	{ "DELETED", &class_int, (intptr_t) &SF_rhino_UintMap_DELETED, "I", 26 },
	{ "keys", getArrayClass(&class_int, 1), offsetof(rhino_UintMap, F_keys), "[I", 130 },
	{ "values", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_UintMap, F_values), "[Ljava/lang/Object;", 130 },
	{ "power", &class_int, offsetof(rhino_UintMap, F_power), "I", 2 },
	{ "keyCount", &class_int, offsetof(rhino_UintMap, F_keyCount), "I", 2 },
	{ "occupiedCount", &class_int, offsetof(rhino_UintMap, F_occupiedCount), "I", 130 },
	{ "ivaluesShift", &class_int, offsetof(rhino_UintMap, F_ivaluesShift), "I", 130 },
	{ "check", &class_boolean, (intptr_t) &SF_rhino_UintMap_check, "Z", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_UintMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_UintMap_int, 0, "(I)V", 1 },
	{ "isEmpty", (intptr_t) M_rhino_UintMap_isEmpty_R_boolean, VTABLE_rhino_UintMap_isEmpty_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_rhino_UintMap_size_R_int, VTABLE_rhino_UintMap_size_R_int, "()I", 1 },
	{ "has", (intptr_t) M_rhino_UintMap_has_int_R_boolean, VTABLE_rhino_UintMap_has_int_R_boolean, "(I)Z", 1 },
	{ "getObject", (intptr_t) M_rhino_UintMap_getObject_int_R_java_lang_Object, VTABLE_rhino_UintMap_getObject_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "getInt", (intptr_t) M_rhino_UintMap_getInt_int_int_R_int, VTABLE_rhino_UintMap_getInt_int_int_R_int, "(II)I", 1 },
	{ "getExistingInt", (intptr_t) M_rhino_UintMap_getExistingInt_int_R_int, VTABLE_rhino_UintMap_getExistingInt_int_R_int, "(I)I", 1 },
	{ "put", (intptr_t) M_rhino_UintMap_put_int_java_lang_Object, VTABLE_rhino_UintMap_put_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_UintMap_put_int_int, VTABLE_rhino_UintMap_put_int_int, "(II)V", 1 },
	{ "remove", (intptr_t) M_rhino_UintMap_remove_int, VTABLE_rhino_UintMap_remove_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_rhino_UintMap_clear, VTABLE_rhino_UintMap_clear, "()V", 1 },
	{ "getKeys", (intptr_t) M_rhino_UintMap_getKeys_R_Array1_int, VTABLE_rhino_UintMap_getKeys_R_Array1_int, "()[I", 1 },
	{ "tableLookupStep", (intptr_t) SM_rhino_UintMap_tableLookupStep_int_int_int_R_int, 0, "(III)I", 10 },
	{ "findIndex", (intptr_t) M_rhino_UintMap_findIndex_int_R_int, VTABLE_rhino_UintMap_findIndex_int_R_int, "(I)I", 2 },
	{ "insertNewKey", (intptr_t) M_rhino_UintMap_insertNewKey_int_R_int, VTABLE_rhino_UintMap_insertNewKey_int_R_int, "(I)I", 2 },
	{ "rehashTable", (intptr_t) M_rhino_UintMap_rehashTable_boolean, VTABLE_rhino_UintMap_rehashTable_boolean, "(Z)V", 2 },
	{ "ensureIndex", (intptr_t) M_rhino_UintMap_ensureIndex_int_boolean_R_int, VTABLE_rhino_UintMap_ensureIndex_int_boolean_R_int, "(IZ)I", 2 },
};

Class class_rhino_UintMap{
		.nativeName = (intptr_t) "rhino/UintMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_UintMap),
		.classVtable = (intptr_t) vtable_rhino_UintMap,
		.staticInitializer = (intptr_t) clinit_rhino_UintMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_UintMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_UintMap = registerClass(&class_rhino_UintMap);

}
