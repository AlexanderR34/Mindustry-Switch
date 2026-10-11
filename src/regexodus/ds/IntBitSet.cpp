#include "regexodus/ds/IntBitSet.h"
#include "java/lang/Math.h"
#include "regexodus/ds/IntBitSet.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/util/Arrays.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {


void mark_regexodus_ds_IntBitSet(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_ds_IntBitSet *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_regexodus_ds_IntBitSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_regexodus_ds_IntBitSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_IntBitSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	((regexodus_ds_IntBitSet *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_ds_IntBitSet_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_IntBitSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	((regexodus_ds_IntBitSet *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(23);
	((func_regexodus_ds_IntBitSet_set_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int_int])(ctx, (frame[0].o), (frame[1].i), ((frame[2].i) + (jint(1))));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_ds_IntBitSet_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ds_IntBitSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	((regexodus_ds_IntBitSet *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (8), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_IntBitSet_flip_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:flip", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (frame[1].i) >> (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) ^ ((jint(1)) << ((frame[1].i) & (31))));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_IntBitSet_flip_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:flip", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(35);
	frame[3].i = (frame[1].i);
	}
label_1:;
	{
	if ((frame[3].i) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (frame[3].i) >> (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) ^ ((jint(1)) << ((frame[3].i) & (31))));
	LINE_NUMBER(35);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_ds_IntBitSet_set_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (frame[1].i) >> (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | ((jint(1)) << ((frame[1].i) & (31))));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_IntBitSet_set_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:set", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (frame[1].i) >> (jint(5));
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].i = temp0;
	sp[2].i = temp3;
	sp += 3;
	if ((frame[2].i) == 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 4;
	sp[4].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jint, sp[0].o, sp[1].i) = (sp[2].i ^ ((sp[3].i ^ ((jint)ARRAY_ACCESS(jint, sp[4].o, ((frame[1].i) >> (jint(5)))))) & ((jint(1)) << ((frame[1].i) & (31)))));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_IntBitSet_set_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:set", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(49);
	frame[3].i = (frame[1].i);
	}
label_1:;
	{
	if ((frame[3].i) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (frame[3].i) >> (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | ((jint(1)) << ((frame[3].i) & (31))));
	LINE_NUMBER(49);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_ds_IntBitSet_set_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:set", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(55);
	if ((frame[3].i) == 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(56);
	frame[5].i = (frame[1].i);
	}
label_4:;
	{
	if ((frame[5].i) > (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (frame[5].i) >> (jint(5));
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	jint temp4 = frame[4].i;
	sp[1].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 ^ ((temp4 ^ ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[5].i) >> (jint(5)))))) & ((jint(1)) << ((frame[5].i) & (31)))));
	LINE_NUMBER(56);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_ds_IntBitSet_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:clear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (frame[1].i) >> (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (((jint(1)) << ((frame[1].i) & (31))) ^ (jint(-1))));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ds_IntBitSet_clear_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:clear", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(67);
	frame[3].i = (frame[1].i);
	}
label_1:;
	{
	if ((frame[3].i) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (frame[3].i) >> (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (((jint(1)) << ((frame[3].i) & (31))) ^ (jint(-1))));
	LINE_NUMBER(67);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_ds_IntBitSet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_IntBitSet_get_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	if (((bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) >> (jint(5)))))) >> ((frame[1].i) & (31)))) & (jint(1))) == 0) goto label_1;
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

jobject M_regexodus_ds_IntBitSet_get_int_int_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(81);
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(82);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) > (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[0].o), (frame[4].i));
	((func_regexodus_ds_IntBitSet_set_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int_boolean])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(82);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint M_regexodus_ds_IntBitSet_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:length", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	jint temp0 = 32;
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return (temp0 * (((jarray) nullCheck(ctx, sp[0].o))->length));
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_IntBitSet_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:isEmpty", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= (8)) goto label_2;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(93);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_IntBitSet_intersects_regexodus_ds_IntBitSet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:intersects", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (8)) goto label_2;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[1].o)))->F_data;
	if ((temp0 & ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(101);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_regexodus_ds_IntBitSet_cardinality_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:cardinality", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	frame[1].i = (jint(0));
	LINE_NUMBER(110);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (8)) goto label_3;
	}
	{
	LINE_NUMBER(111);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp1 = (jint)SM_java_lang_Integer_bitCount_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(110);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_IntBitSet_and_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:and", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (8)) goto label_2;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[2].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 & ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	LINE_NUMBER(117);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:or", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (8)) goto label_2;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[2].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 | ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	LINE_NUMBER(124);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_IntBitSet_xor_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:xor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (8)) goto label_2;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[2].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 ^ ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	LINE_NUMBER(131);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:andNot", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (8)) goto label_2;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[2].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 & (((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))) ^ (jint(-1))));
	LINE_NUMBER(138);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:negate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= (8)) goto label_2;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))) ^ (jint(-1)));
	LINE_NUMBER(145);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_regexodus_ds_IntBitSet_nextSetBit_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:nextSetBit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(152);
	frame[2].i = (jint(0));
	LINE_NUMBER(153);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))));
	}
label_2:;
	{
	if ((frame[3].i) >= (8)) goto label_3;
	}
	{
	if ((frame[1].i) >= (256)) goto label_3;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)SM_java_lang_Integer_lowestOneBit_int_R_int(ctx, (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))))))) >> ((frame[1].i) & (31)))));
	jint temp1 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, temp0);
	frame[2].i = temp1;
	LINE_NUMBER(155);
	if ((frame[2].i) == (32)) goto label_6;
	}
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return ((frame[1].i) + (frame[2].i));
	}
label_6:;
	{
	LINE_NUMBER(157);
	frame[1].i = (((frame[1].i) & (224)) + (32));
	LINE_NUMBER(153);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_regexodus_ds_IntBitSet_nextClearBit_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:nextClearBit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(163);
	frame[2].i = (jint(0));
	LINE_NUMBER(164);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))));
	}
label_2:;
	{
	if ((frame[3].i) >= (8)) goto label_3;
	}
	{
	if ((frame[1].i) >= (256)) goto label_3;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)SM_java_lang_Integer_lowestOneBit_int_R_int(ctx, ((bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))))))) >> ((frame[1].i) & (31)))) ^ (jint(-1))));
	jint temp1 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, temp0);
	frame[2].i = temp1;
	LINE_NUMBER(166);
	if ((frame[2].i) == (32)) goto label_6;
	}
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return ((frame[1].i) + (frame[2].i));
	}
label_6:;
	{
	LINE_NUMBER(168);
	frame[1].i = (((frame[1].i) & (224)) + (32));
	LINE_NUMBER(164);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_regexodus_ds_IntBitSet_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (256);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(180);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(182);
	frame[2].o = (checkCast(ctx, &class_regexodus_ds_IntBitSet, (frame[1].o)));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[2].o)))->F_data;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_int_Array1_int_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_ds_IntBitSet_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_int_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ds/IntBitSet:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	sp[1].o = (jobject)((regexodus_ds_IntBitSet *) NULL_CHECK((frame[0].o)))->F_data;
	init_regexodus_ds_IntBitSet_Array1_int(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_ds_IntBitSet[] {
	(void *) M_regexodus_ds_IntBitSet_hashCode_R_int,
	(void *) M_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_ds_IntBitSet_flip_int,
	(void *) M_regexodus_ds_IntBitSet_flip_int_int,
	(void *) M_regexodus_ds_IntBitSet_set_int,
	(void *) M_regexodus_ds_IntBitSet_set_int_boolean,
	(void *) M_regexodus_ds_IntBitSet_set_int_int,
	(void *) M_regexodus_ds_IntBitSet_set_int_int_boolean,
	(void *) M_regexodus_ds_IntBitSet_clear_int,
	(void *) M_regexodus_ds_IntBitSet_clear_int_int,
	(void *) M_regexodus_ds_IntBitSet_clear,
	(void *) M_regexodus_ds_IntBitSet_get_int_R_boolean,
	(void *) M_regexodus_ds_IntBitSet_get_int_int_R_regexodus_ds_IntBitSet,
	(void *) M_regexodus_ds_IntBitSet_length_R_int,
	(void *) M_regexodus_ds_IntBitSet_isEmpty_R_boolean,
	(void *) M_regexodus_ds_IntBitSet_intersects_regexodus_ds_IntBitSet_R_boolean,
	(void *) M_regexodus_ds_IntBitSet_cardinality_R_int,
	(void *) M_regexodus_ds_IntBitSet_and_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet,
	(void *) M_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet,
	(void *) M_regexodus_ds_IntBitSet_xor_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet,
	(void *) M_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet,
	(void *) M_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet,
	(void *) M_regexodus_ds_IntBitSet_nextSetBit_int_R_int,
	(void *) M_regexodus_ds_IntBitSet_nextClearBit_int_R_int,
	(void *) M_regexodus_ds_IntBitSet_size_R_int,
	(void *) M_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet,
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
	{ "flip", "(I)V" },
	{ "flip", "(II)V" },
	{ "set", "(I)V" },
	{ "set", "(IZ)V" },
	{ "set", "(II)V" },
	{ "set", "(IIZ)V" },
	{ "clear", "(I)V" },
	{ "clear", "(II)V" },
	{ "clear", "()V" },
	{ "get", "(I)Z" },
	{ "get", "(II)Lregexodus/ds/IntBitSet;" },
	{ "length", "()I" },
	{ "isEmpty", "()Z" },
	{ "intersects", "(Lregexodus/ds/IntBitSet;)Z" },
	{ "cardinality", "()I" },
	{ "and", "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;" },
	{ "or", "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;" },
	{ "xor", "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;" },
	{ "andNot", "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;" },
	{ "negate", "()Lregexodus/ds/IntBitSet;" },
	{ "nextSetBit", "(I)I" },
	{ "nextClearBit", "(I)I" },
	{ "size", "()I" },
	{ "copy", "()Lregexodus/ds/IntBitSet;" },
};

static FieldMetadata fields[] {
	{ "data", getArrayClass(&class_int, 1), offsetof(regexodus_ds_IntBitSet, F_data), "[I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_ds_IntBitSet, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_regexodus_ds_IntBitSet_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_ds_IntBitSet_Array1_int, 0, "([I)V", 1 },
	{ "flip", (intptr_t) M_regexodus_ds_IntBitSet_flip_int, VTABLE_regexodus_ds_IntBitSet_flip_int, "(I)V", 1 },
	{ "flip", (intptr_t) M_regexodus_ds_IntBitSet_flip_int_int, VTABLE_regexodus_ds_IntBitSet_flip_int_int, "(II)V", 1 },
	{ "set", (intptr_t) M_regexodus_ds_IntBitSet_set_int, VTABLE_regexodus_ds_IntBitSet_set_int, "(I)V", 1 },
	{ "set", (intptr_t) M_regexodus_ds_IntBitSet_set_int_boolean, VTABLE_regexodus_ds_IntBitSet_set_int_boolean, "(IZ)V", 1 },
	{ "set", (intptr_t) M_regexodus_ds_IntBitSet_set_int_int, VTABLE_regexodus_ds_IntBitSet_set_int_int, "(II)V", 1 },
	{ "set", (intptr_t) M_regexodus_ds_IntBitSet_set_int_int_boolean, VTABLE_regexodus_ds_IntBitSet_set_int_int_boolean, "(IIZ)V", 1 },
	{ "clear", (intptr_t) M_regexodus_ds_IntBitSet_clear_int, VTABLE_regexodus_ds_IntBitSet_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_regexodus_ds_IntBitSet_clear_int_int, VTABLE_regexodus_ds_IntBitSet_clear_int_int, "(II)V", 1 },
	{ "clear", (intptr_t) M_regexodus_ds_IntBitSet_clear, VTABLE_regexodus_ds_IntBitSet_clear, "()V", 1 },
	{ "get", (intptr_t) M_regexodus_ds_IntBitSet_get_int_R_boolean, VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean, "(I)Z", 1 },
	{ "get", (intptr_t) M_regexodus_ds_IntBitSet_get_int_int_R_regexodus_ds_IntBitSet, VTABLE_regexodus_ds_IntBitSet_get_int_int_R_regexodus_ds_IntBitSet, "(II)Lregexodus/ds/IntBitSet;", 1 },
	{ "length", (intptr_t) M_regexodus_ds_IntBitSet_length_R_int, VTABLE_regexodus_ds_IntBitSet_length_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_regexodus_ds_IntBitSet_isEmpty_R_boolean, VTABLE_regexodus_ds_IntBitSet_isEmpty_R_boolean, "()Z", 1 },
	{ "intersects", (intptr_t) M_regexodus_ds_IntBitSet_intersects_regexodus_ds_IntBitSet_R_boolean, VTABLE_regexodus_ds_IntBitSet_intersects_regexodus_ds_IntBitSet_R_boolean, "(Lregexodus/ds/IntBitSet;)Z", 1 },
	{ "cardinality", (intptr_t) M_regexodus_ds_IntBitSet_cardinality_R_int, VTABLE_regexodus_ds_IntBitSet_cardinality_R_int, "()I", 1 },
	{ "and", (intptr_t) M_regexodus_ds_IntBitSet_and_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, VTABLE_regexodus_ds_IntBitSet_and_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;", 1 },
	{ "or", (intptr_t) M_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, VTABLE_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;", 1 },
	{ "xor", (intptr_t) M_regexodus_ds_IntBitSet_xor_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, VTABLE_regexodus_ds_IntBitSet_xor_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;", 1 },
	{ "andNot", (intptr_t) M_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, VTABLE_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;", 1 },
	{ "negate", (intptr_t) M_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet, VTABLE_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet, "()Lregexodus/ds/IntBitSet;", 1 },
	{ "nextSetBit", (intptr_t) M_regexodus_ds_IntBitSet_nextSetBit_int_R_int, VTABLE_regexodus_ds_IntBitSet_nextSetBit_int_R_int, "(I)I", 1 },
	{ "nextClearBit", (intptr_t) M_regexodus_ds_IntBitSet_nextClearBit_int_R_int, VTABLE_regexodus_ds_IntBitSet_nextClearBit_int_R_int, "(I)I", 1 },
	{ "size", (intptr_t) M_regexodus_ds_IntBitSet_size_R_int, VTABLE_regexodus_ds_IntBitSet_size_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean, VTABLE_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_ds_IntBitSet_hashCode_R_int, VTABLE_regexodus_ds_IntBitSet_hashCode_R_int, "()I", 1 },
	{ "copy", (intptr_t) M_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet, VTABLE_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet, "()Lregexodus/ds/IntBitSet;", 1 },
};

Class class_regexodus_ds_IntBitSet{
		.nativeName = (intptr_t) "regexodus/ds/IntBitSet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_ds_IntBitSet),
		.classVtable = (intptr_t) vtable_regexodus_ds_IntBitSet,
		.staticInitializer = (intptr_t) clinit_regexodus_ds_IntBitSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_ds_IntBitSet,
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
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_ds_IntBitSet = registerClass(&class_regexodus_ds_IntBitSet);

}
