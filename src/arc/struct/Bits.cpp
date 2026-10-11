#include "arc/struct/Bits.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/struct/Bits.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_Bits(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_Bits *) object;
	if (self->F_bits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bits)->clazz)->markFunction)((jobject) self->F_bits, mark, depth + 1);
}

void clinit_arc_struct_Bits(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_Bits(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Bits(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(1)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(0));
	((arc_struct_Bits *) NULL_CHECK(sp[0].o))->F_bits = (jref) sp[1].o;
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_Bits_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Bits(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(1)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(0));
	((arc_struct_Bits *) NULL_CHECK(sp[0].o))->F_bits = (jref) sp[1].o;
	LINE_NUMBER(20);
	M_arc_struct_Bits_checkCapacity_int(ctx, (frame[0].o), (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6))));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Bits_set_arc_struct_Bits(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[2].i = temp1;
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, (jint(0)), (frame[2].i));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Bits_get_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(35);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	LINE_NUMBER(37);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if ((longCompare((((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[2].i))) & ((jlong(1)) << (frame[1].i))), (jlong(0)))) == 0) goto label_2;
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

jbool M_arc_struct_Bits_getAndClear_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:getAndClear", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(47);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	LINE_NUMBER(48);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[2].i)));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) & (((jlong(1)) << ((frame[1].i) & (63))) ^ (jlong(-1ll))));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[2].i))), (frame[3].l))) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_struct_Bits_getAndSet_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:getAndSet", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(61);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	LINE_NUMBER(62);
	M_arc_struct_Bits_checkCapacity_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[2].i)));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) | ((jlong(1)) << ((frame[1].i) & (63))));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[2].i))), (frame[3].l))) != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Bits_set_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(69);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(70);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[0].o), (frame[1].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(72);
	((func_arc_struct_Bits_clear_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_clear_int])(ctx, (frame[0].o), (frame[1].i));
	}
label_3:;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Bits_set_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(81);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	LINE_NUMBER(82);
	M_arc_struct_Bits_checkCapacity_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) | ((jlong(1)) << ((frame[1].i) & (63))));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Bits_set_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:set", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(91);
	if ((frame[1].i) != (frame[2].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(93);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	LINE_NUMBER(94);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) - (jint(1)))) >> (6)));
	LINE_NUMBER(95);
	M_arc_struct_Bits_checkCapacity_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(97);
	frame[5].l = (jlong(-1ll));
	LINE_NUMBER(98);
	frame[7].l = ((frame[5].l) << (frame[1].i));
	LINE_NUMBER(99);
	frame[9].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (-(frame[2].i))));
	LINE_NUMBER(101);
	if ((frame[3].i) != (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[3].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) | ((frame[7].l) & (frame[9].l)));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[3].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) | (frame[7].l));
	LINE_NUMBER(110);
	frame[11].i = ((frame[3].i) + (jint(1)));
	}
label_12:;
	{
	if ((frame[11].i) >= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[11].i)) = (frame[5].l);
	LINE_NUMBER(110);
	INST_IINC(11, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) | (frame[9].l));
	}
label_10:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Bits_flip_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:flip", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(120);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	LINE_NUMBER(121);
	M_arc_struct_Bits_checkCapacity_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) ^ ((jlong(1)) << ((frame[1].i) & (63))));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Bits_checkCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:checkCapacity", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(126);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject) createArray(ctx, &class_long, ((frame[1].i) + (jint(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(129);
	((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (frame[2].o);
	}
label_1:;
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Bits_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:clear", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(138);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	LINE_NUMBER(139);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) & (((jlong(1)) << ((frame[1].i) & (63))) ^ (jlong(-1ll))));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Bits_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:clear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[1].o = sp[0].o;
	LINE_NUMBER(146);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(147);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(148);
	ARRAY_ACCESS(jlong, (frame[1].o), (frame[3].i)) = (jlong(0));
	LINE_NUMBER(147);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_struct_Bits_numBits_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:numBits", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	popStackFrame(ctx);
	return ((((jarray) nullCheck(ctx, sp[0].o))->length) << (6));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Bits_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:length", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[1].o = sp[0].o;
	LINE_NUMBER(164);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(165);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(166);
	if ((longCompare((frame[3].l), (jlong(0)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(167);
	frame[5].i = (63);
	}
label_8:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_6;
	{
	LINE_NUMBER(168);
	if ((longCompare(((frame[3].l) & ((jlong(1)) << ((frame[5].i) & (63)))), (jlong(0)))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return ((((frame[2].i) << (6)) + (frame[5].i)) + (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(167);
	INST_IINC(5, -1);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(164);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Bits_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:isEmpty", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[1].o = sp[0].o;
	LINE_NUMBER(180);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(181);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(182);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[3].i))), (jlong(0)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(181);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Bits_nextSetBit_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:nextSetBit", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[2].o = sp[0].o;
	LINE_NUMBER(195);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	LINE_NUMBER(196);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(197);
	if ((frame[3].i) < (frame[4].i)) goto label_4;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(198);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(199);
	if ((longCompare((frame[5].l), (jlong(0)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(200);
	frame[7].i = ((frame[1].i) & (63));
	}
label_8:;
	{
	if ((frame[7].i) >= (64)) goto label_6;
	}
	{
	LINE_NUMBER(201);
	if ((longCompare(((frame[5].l) & ((jlong(1)) << ((frame[7].i) & (63)))), (jlong(0)))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (((frame[3].i) << (6)) + (frame[7].i));
	}
label_10:;
	{
	LINE_NUMBER(200);
	INST_IINC(7, 1);
	goto label_8;
	}
label_6:;
	LINE_NUMBER(206);
	INST_IINC(3, 1);
label_12:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(207);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(208);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(209);
	if ((longCompare((frame[5].l), (jlong(0)))) == 0) goto label_15;
	}
	{
	LINE_NUMBER(210);
	frame[7].i = (jint(0));
	}
label_19:;
	{
	if ((frame[7].i) >= (64)) goto label_15;
	}
	{
	LINE_NUMBER(211);
	if ((longCompare(((frame[5].l) & ((jlong(1)) << ((frame[7].i) & (63)))), (jlong(0)))) == 0) goto label_21;
	}
	{
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (((frame[3].i) << (6)) + (frame[7].i));
	}
label_21:;
	{
	LINE_NUMBER(210);
	INST_IINC(7, 1);
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(206);
	INST_IINC(3, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Bits_nextClearBit_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:nextClearBit", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[2].o = sp[0].o;
	LINE_NUMBER(224);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	LINE_NUMBER(225);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(226);
	if ((frame[3].i) < (frame[4].i)) goto label_4;
	}
	{
	popStackFrame(ctx);
	return ((((jarray) nullCheck(ctx, (frame[2].o)))->length) << (6));
	}
label_4:;
	{
	LINE_NUMBER(227);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(228);
	frame[7].i = ((frame[1].i) & (63));
	}
label_6:;
	{
	if ((frame[7].i) >= (64)) goto label_7;
	}
	{
	LINE_NUMBER(229);
	if ((longCompare(((frame[5].l) & ((jlong(1)) << ((frame[7].i) & (63)))), (jlong(0)))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (((frame[3].i) << (6)) + (frame[7].i));
	}
label_9:;
	{
	LINE_NUMBER(228);
	INST_IINC(7, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(233);
	INST_IINC(3, 1);
label_11:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(234);
	if ((frame[3].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return ((frame[3].i) << (6));
	}
label_14:;
	{
	LINE_NUMBER(237);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(238);
	frame[7].i = (jint(0));
	}
label_17:;
	{
	if ((frame[7].i) >= (64)) goto label_18;
	}
	{
	LINE_NUMBER(239);
	if ((longCompare(((frame[5].l) & ((jlong(1)) << ((frame[7].i) & (63)))), (jlong(0)))) != 0) goto label_20;
	}
	{
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (((frame[3].i) << (6)) + (frame[7].i));
	}
label_20:;
	{
	LINE_NUMBER(238);
	INST_IINC(7, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(233);
	INST_IINC(3, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return ((((jarray) nullCheck(ctx, (frame[2].o)))->length) << (6));
	}

	popStackFrame(ctx);
}

void M_arc_struct_Bits_and_arc_struct_Bits(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:and", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[2].i = temp1;
	LINE_NUMBER(255);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) <= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[3].i;
	jlong temp3 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0);
	sp[1].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (temp3 & ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[3].i))));
	LINE_NUMBER(255);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(260);
	frame[3].i = (frame[2].i);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_9:;
	{
	if ((frame[4].i) <= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[3].i)) = (jlong(0));
	LINE_NUMBER(260);
	INST_IINC(3, 1);
	goto label_9;
	}
label_6:;
	LINE_NUMBER(264);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Bits_andNot_arc_struct_Bits(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:andNot", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(271);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[2].i;
	jlong temp3 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0);
	sp[1].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (temp3 & (((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[2].i))) ^ (jlong(-1ll))));
	LINE_NUMBER(271);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(274);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Bits_or_arc_struct_Bits(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:or", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[2].i = temp1;
	LINE_NUMBER(284);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) <= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[3].i;
	jlong temp3 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0);
	sp[1].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (temp3 | ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[3].i))));
	LINE_NUMBER(284);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(288);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	M_arc_struct_Bits_checkCapacity_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(290);
	frame[3].i = (frame[2].i);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_10:;
	{
	if ((frame[4].i) <= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[3].i)));
	LINE_NUMBER(290);
	INST_IINC(3, 1);
	goto label_10;
	}
label_6:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_Bits_xor_arc_struct_Bits(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:xor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[2].i = temp1;
	LINE_NUMBER(307);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) <= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[3].i;
	jlong temp3 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0);
	sp[1].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (temp3 ^ ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[3].i))));
	LINE_NUMBER(307);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(311);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	M_arc_struct_Bits_checkCapacity_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(313);
	frame[3].i = (frame[2].i);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_10:;
	{
	if ((frame[4].i) <= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[3].i)));
	LINE_NUMBER(313);
	INST_IINC(3, 1);
	goto label_10;
	}
label_6:;
	LINE_NUMBER(317);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_struct_Bits_intersects_arc_struct_Bits_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:intersects", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[2].o = sp[0].o;
	LINE_NUMBER(326);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	frame[3].o = sp[0].o;
	LINE_NUMBER(327);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[2].o)))->length), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	frame[4].i = (temp0 - (jint(1)));
	}
label_3:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(328);
	if ((longCompare((((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[4].i))) & ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[4].i)))), (jlong(0)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(327);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Bits_containsAll_arc_struct_Bits_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:containsAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[2].o = sp[0].o;
	LINE_NUMBER(343);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[1].o)))->F_bits;
	frame[3].o = sp[0].o;
	LINE_NUMBER(344);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(345);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(347);
	frame[6].i = (frame[5].i);
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(348);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[6].i))), (jlong(0)))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(347);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(352);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[5].i), (frame[4].i));
	frame[6].i = (temp0 - (jint(1)));
	}
label_10:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_11;
	{
	LINE_NUMBER(353);
	if ((longCompare((((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[6].i))) & ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[6].i)))), ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[6].i))))) == 0) goto label_13;
	}
	{
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(352);
	INST_IINC(6, -1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_arc_struct_Bits_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:hashCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	jint temp0 = (jint)((func_arc_struct_Bits_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_length_R_int])(ctx, (frame[0].o));
	frame[1].i = (bit_cast<jint>(bit_cast<uint32_t>(temp0) >> (6)));
	LINE_NUMBER(363);
	frame[2].i = (jint(0));
	LINE_NUMBER(364);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[1].i) < (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(365);
	jint temp0 = (127) * (frame[2].i);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jlong temp1 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[2].i = (temp0 + (jint((temp1 ^ (bit_cast<jlong>(bit_cast<uint64_t>(((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[3].i)))) >> (32)))))));
	LINE_NUMBER(364);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Bits_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Bits:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(373);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(376);
	frame[2].o = (checkCast(ctx, &class_arc_struct_Bits, (frame[1].o)));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[2].o)))->F_bits;
	frame[3].o = sp[0].o;
	LINE_NUMBER(379);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, sp[0].o))->length), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	frame[4].i = temp0;
	LINE_NUMBER(380);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) <= (frame[5].i)) goto label_8;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[5].i))), ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[5].i))))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(380);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((arc_struct_Bits *) NULL_CHECK((frame[0].o)))->F_bits;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_12;
	}
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(388);
	jint temp0 = (jint)((func_arc_struct_Bits_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_Bits_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Bits_length_R_int])(ctx, (frame[2].o));
	if (temp0 != temp1) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_struct_Bits[] {
	(void *) M_arc_struct_Bits_hashCode_R_int,
	(void *) M_arc_struct_Bits_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_Bits_set_arc_struct_Bits,
	(void *) M_arc_struct_Bits_get_int_R_boolean,
	(void *) M_arc_struct_Bits_getAndClear_int_R_boolean,
	(void *) M_arc_struct_Bits_getAndSet_int_R_boolean,
	(void *) M_arc_struct_Bits_set_int_boolean,
	(void *) M_arc_struct_Bits_set_int,
	(void *) M_arc_struct_Bits_set_int_int,
	(void *) M_arc_struct_Bits_flip_int,
	(void *) M_arc_struct_Bits_checkCapacity_int,
	(void *) M_arc_struct_Bits_clear_int,
	(void *) M_arc_struct_Bits_clear,
	(void *) M_arc_struct_Bits_numBits_R_int,
	(void *) M_arc_struct_Bits_length_R_int,
	(void *) M_arc_struct_Bits_isEmpty_R_boolean,
	(void *) M_arc_struct_Bits_nextSetBit_int_R_int,
	(void *) M_arc_struct_Bits_nextClearBit_int_R_int,
	(void *) M_arc_struct_Bits_and_arc_struct_Bits,
	(void *) M_arc_struct_Bits_andNot_arc_struct_Bits,
	(void *) M_arc_struct_Bits_or_arc_struct_Bits,
	(void *) M_arc_struct_Bits_xor_arc_struct_Bits,
	(void *) M_arc_struct_Bits_intersects_arc_struct_Bits_R_boolean,
	(void *) M_arc_struct_Bits_containsAll_arc_struct_Bits_R_boolean,
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
	{ "set", "(Larc/struct/Bits;)V" },
	{ "get", "(I)Z" },
	{ "getAndClear", "(I)Z" },
	{ "getAndSet", "(I)Z" },
	{ "set", "(IZ)V" },
	{ "set", "(I)V" },
	{ "set", "(II)V" },
	{ "flip", "(I)V" },
	{ "checkCapacity", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "numBits", "()I" },
	{ "length", "()I" },
	{ "isEmpty", "()Z" },
	{ "nextSetBit", "(I)I" },
	{ "nextClearBit", "(I)I" },
	{ "and", "(Larc/struct/Bits;)V" },
	{ "andNot", "(Larc/struct/Bits;)V" },
	{ "or", "(Larc/struct/Bits;)V" },
	{ "xor", "(Larc/struct/Bits;)V" },
	{ "intersects", "(Larc/struct/Bits;)Z" },
	{ "containsAll", "(Larc/struct/Bits;)Z" },
};

static FieldMetadata fields[] {
	{ "bits", getArrayClass(&class_long, 1), offsetof(arc_struct_Bits, F_bits), "[J", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_Bits, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_Bits_int, 0, "(I)V", 1 },
	{ "set", (intptr_t) M_arc_struct_Bits_set_arc_struct_Bits, VTABLE_arc_struct_Bits_set_arc_struct_Bits, "(Larc/struct/Bits;)V", 1 },
	{ "get", (intptr_t) M_arc_struct_Bits_get_int_R_boolean, VTABLE_arc_struct_Bits_get_int_R_boolean, "(I)Z", 1 },
	{ "getAndClear", (intptr_t) M_arc_struct_Bits_getAndClear_int_R_boolean, VTABLE_arc_struct_Bits_getAndClear_int_R_boolean, "(I)Z", 1 },
	{ "getAndSet", (intptr_t) M_arc_struct_Bits_getAndSet_int_R_boolean, VTABLE_arc_struct_Bits_getAndSet_int_R_boolean, "(I)Z", 1 },
	{ "set", (intptr_t) M_arc_struct_Bits_set_int_boolean, VTABLE_arc_struct_Bits_set_int_boolean, "(IZ)V", 1 },
	{ "set", (intptr_t) M_arc_struct_Bits_set_int, VTABLE_arc_struct_Bits_set_int, "(I)V", 1 },
	{ "set", (intptr_t) M_arc_struct_Bits_set_int_int, VTABLE_arc_struct_Bits_set_int_int, "(II)V", 1 },
	{ "flip", (intptr_t) M_arc_struct_Bits_flip_int, VTABLE_arc_struct_Bits_flip_int, "(I)V", 1 },
	{ "checkCapacity", (intptr_t) M_arc_struct_Bits_checkCapacity_int, VTABLE_arc_struct_Bits_checkCapacity_int, "(I)V", 2 },
	{ "clear", (intptr_t) M_arc_struct_Bits_clear_int, VTABLE_arc_struct_Bits_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_arc_struct_Bits_clear, VTABLE_arc_struct_Bits_clear, "()V", 1 },
	{ "numBits", (intptr_t) M_arc_struct_Bits_numBits_R_int, VTABLE_arc_struct_Bits_numBits_R_int, "()I", 1 },
	{ "length", (intptr_t) M_arc_struct_Bits_length_R_int, VTABLE_arc_struct_Bits_length_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_arc_struct_Bits_isEmpty_R_boolean, VTABLE_arc_struct_Bits_isEmpty_R_boolean, "()Z", 1 },
	{ "nextSetBit", (intptr_t) M_arc_struct_Bits_nextSetBit_int_R_int, VTABLE_arc_struct_Bits_nextSetBit_int_R_int, "(I)I", 1 },
	{ "nextClearBit", (intptr_t) M_arc_struct_Bits_nextClearBit_int_R_int, VTABLE_arc_struct_Bits_nextClearBit_int_R_int, "(I)I", 1 },
	{ "and", (intptr_t) M_arc_struct_Bits_and_arc_struct_Bits, VTABLE_arc_struct_Bits_and_arc_struct_Bits, "(Larc/struct/Bits;)V", 1 },
	{ "andNot", (intptr_t) M_arc_struct_Bits_andNot_arc_struct_Bits, VTABLE_arc_struct_Bits_andNot_arc_struct_Bits, "(Larc/struct/Bits;)V", 1 },
	{ "or", (intptr_t) M_arc_struct_Bits_or_arc_struct_Bits, VTABLE_arc_struct_Bits_or_arc_struct_Bits, "(Larc/struct/Bits;)V", 1 },
	{ "xor", (intptr_t) M_arc_struct_Bits_xor_arc_struct_Bits, VTABLE_arc_struct_Bits_xor_arc_struct_Bits, "(Larc/struct/Bits;)V", 1 },
	{ "intersects", (intptr_t) M_arc_struct_Bits_intersects_arc_struct_Bits_R_boolean, VTABLE_arc_struct_Bits_intersects_arc_struct_Bits_R_boolean, "(Larc/struct/Bits;)Z", 1 },
	{ "containsAll", (intptr_t) M_arc_struct_Bits_containsAll_arc_struct_Bits_R_boolean, VTABLE_arc_struct_Bits_containsAll_arc_struct_Bits_R_boolean, "(Larc/struct/Bits;)Z", 1 },
	{ "hashCode", (intptr_t) M_arc_struct_Bits_hashCode_R_int, VTABLE_arc_struct_Bits_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_struct_Bits_equals_java_lang_Object_R_boolean, VTABLE_arc_struct_Bits_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
};

Class class_arc_struct_Bits{
		.nativeName = (intptr_t) "arc/struct/Bits",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_Bits),
		.classVtable = (intptr_t) vtable_arc_struct_Bits,
		.staticInitializer = (intptr_t) clinit_arc_struct_Bits,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_Bits,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_Bits = registerClass(&class_arc_struct_Bits);

}
