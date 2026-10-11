#include "regexodus/Block.h"
#include "regexodus/Block.h"
#include "regexodus/ds/IntBitSet.h"
#include "java/lang/Object.h"
#include "regexodus/BlockSet.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "regexodus/UnicodeConstants.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_regexodus_Block_EMPTY_BITS;
jobject SF_regexodus_Block_FULL_BITS;

void mark_regexodus_Block(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_regexodus_Block_EMPTY_BITS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Block_EMPTY_BITS)->clazz)->markFunction)((jobject) SF_regexodus_Block_EMPTY_BITS, mark, depth + 1);
		if (SF_regexodus_Block_FULL_BITS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Block_FULL_BITS)->clazz)->markFunction)((jobject) SF_regexodus_Block_FULL_BITS, mark, depth + 1);
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
	auto self = (regexodus_Block *) object;
	if (self->F_bits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bits)->clazz)->markFunction)((jobject) self->F_bits, mark, depth + 1);
}

void init_regexodus_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(376);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(374);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Block_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(379);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(374);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(380);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (frame[1].o);
	LINE_NUMBER(381);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(1));
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Block_set_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(386);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[2].o = sp[0].o;
	LINE_NUMBER(388);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[1].o);
	frame[2].o = sp[1].o;
	((regexodus_Block *) NULL_CHECK(sp[0].o))->F_bits = (jref) sp[1].o;
	LINE_NUMBER(390);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(391);
	((func_regexodus_ds_IntBitSet_set_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int])(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(395);
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[2].o), (frame[1].i));
	if (temp0 == 0) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(397);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)SM_regexodus_Block_copyBits_regexodus_Block_R_regexodus_ds_IntBitSet(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(399);
	((func_regexodus_ds_IntBitSet_set_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int])(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Block_get_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(404);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_regexodus_Block_add_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jbool param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:add", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(408);
	frame[5].i = (jint(0));
	LINE_NUMBER(409);
	frame[6].i = (frame[2].i);
	}
label_2:;
	{
	if ((frame[6].i) > (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(410);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(411);
	if ((frame[7].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(412);
	if ((frame[4].i) != 0) goto label_8;
	}
	goto label_9;
label_6:;
	{
	LINE_NUMBER(413);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[7].o)))->F_isFull) == 0) goto label_8;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_8;
	goto label_9;
label_8:;
	{
	LINE_NUMBER(415);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(416);
	if ((frame[8].o) != nullptr) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[6].i;
	clinit_regexodus_Block(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_Block);
	init_regexodus_Block(ctx, sp[1].o);
	frame[8].o = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(417);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[8].o)))->F_isFull) == 0) goto label_12;
	}
	goto label_9;
label_12:;
	{
	LINE_NUMBER(419);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_regexodus_Block_add_regexodus_Block_regexodus_Block_boolean_R_int(ctx, (frame[8].o), (frame[7].o), (frame[4].i));
	frame[5].i = (temp0 + temp1);
	}
label_9:;
	{
	LINE_NUMBER(409);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Block_add_regexodus_Block_regexodus_Block_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(427);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(428);
	if ((frame[2].i) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(429);
	frame[5].i = (256);
	LINE_NUMBER(430);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(431);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_regexodus_Block_count_regexodus_ds_IntBitSet_int_int_R_int(ctx, (frame[3].o), (jint(0)), (255));
	frame[5].i = (temp0 - temp1);
	}
label_6:;
	{
	LINE_NUMBER(433);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull = (jint(1));
	LINE_NUMBER(434);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (jobject(nullptr));
	LINE_NUMBER(435);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_1:;
	{
	LINE_NUMBER(437);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[1].o)))->F_isFull) == 0) goto label_11;
	}
	{
	LINE_NUMBER(438);
	if ((frame[2].i) == 0) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(439);
	frame[5].i = (256);
	LINE_NUMBER(440);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(441);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_regexodus_Block_count_regexodus_ds_IntBitSet_int_int_R_int(ctx, (frame[3].o), (jint(0)), (255));
	frame[5].i = (temp0 - temp1);
	}
label_16:;
	{
	LINE_NUMBER(443);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull = (jint(1));
	LINE_NUMBER(444);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (jobject(nullptr));
	LINE_NUMBER(445);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_11:;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[1].o)))->F_bits;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(448);
	if ((frame[2].i) != 0) goto label_24;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_24:;
	{
	LINE_NUMBER(449);
	frame[5].i = (256);
	LINE_NUMBER(450);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(451);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_regexodus_Block_count_regexodus_ds_IntBitSet_int_int_R_int(ctx, (frame[3].o), (jint(0)), (255));
	frame[5].i = (temp0 - temp1);
	}
label_27:;
	{
	LINE_NUMBER(453);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull = (jint(1));
	LINE_NUMBER(454);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (jobject(nullptr));
	LINE_NUMBER(455);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_22:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[3].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_33;
	}
	{
	LINE_NUMBER(459);
	if ((frame[2].i) != 0) goto label_35;
	}
	{
	LINE_NUMBER(460);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (frame[4].o);
	LINE_NUMBER(461);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(1));
	LINE_NUMBER(462);
	jint temp0 = (jint)SM_regexodus_Block_count_regexodus_ds_IntBitSet_int_int_R_int(ctx, (frame[4].o), (jint(0)), (255));
	popStackFrame(ctx);
	return temp0;
	}
label_35:;
	{
	LINE_NUMBER(464);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_regexodus_Block_emptyBits_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(ctx, (jobject(nullptr)));
	frame[3].o = sp[1].o;
	((regexodus_Block *) NULL_CHECK(sp[0].o))->F_bits = (jref) sp[1].o;
	LINE_NUMBER(465);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(466);
	jint temp0 = (jint)SM_regexodus_BlockSet_add_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_int_int_boolean_R_int(ctx, (frame[3].o), (frame[4].o), (jint(0)), (255), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}
label_33:;
	{
	LINE_NUMBER(469);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared) == 0) goto label_41;
	}
	{
	sp[0].o = (jobject)SM_regexodus_Block_copyBits_regexodus_Block_R_regexodus_ds_IntBitSet(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(470);
	jint temp0 = (jint)SM_regexodus_BlockSet_add_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_int_int_boolean_R_int(ctx, (frame[3].o), (frame[4].o), (jint(0)), (255), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Block_subtract_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jbool param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:subtract", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(476);
	frame[5].i = (jint(0));
	LINE_NUMBER(477);
	frame[6].i = (frame[2].i);
	}
label_2:;
	{
	if ((frame[6].i) > (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(478);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(479);
	if ((frame[7].o) == nullptr) goto label_6;
	}
	{
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[7].o)))->F_isFull) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[7].o)))->F_bits;
	if (sp[0].o != nullptr) goto label_7;
	}
	goto label_6;
label_7:;
	{
	LINE_NUMBER(481);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(483);
	if ((frame[8].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(484);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(485);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[7].o)))->F_isFull) == 0) goto label_12;
	}
	{
	LINE_NUMBER(486);
	INST_IINC(5, -256);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(488);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[7].o)))->F_bits;
	jint temp1 = (jint)SM_regexodus_Block_count_regexodus_ds_IntBitSet_int_int_R_int(ctx, sp[0].o, (jint(0)), (255));
	frame[5].i = (temp0 - temp1);
	}
label_14:;
	{
	LINE_NUMBER(490);
	((regexodus_Block *) NULL_CHECK((frame[7].o)))->F_isFull = (jint(0));
	LINE_NUMBER(491);
	((regexodus_Block *) NULL_CHECK((frame[7].o)))->F_bits = (jref) (jobject(nullptr));
	LINE_NUMBER(492);
	((regexodus_Block *) NULL_CHECK((frame[7].o)))->F_shared = (jint(0));
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(495);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_regexodus_Block_subtract_regexodus_Block_regexodus_Block_boolean_R_int(ctx, (frame[7].o), (frame[8].o), (frame[4].i));
	frame[5].i = (temp0 + temp1);
	}
label_6:;
	{
	LINE_NUMBER(477);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Block_subtract_regexodus_Block_regexodus_Block_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:subtract", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(504);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[1].o)))->F_isFull) == 0) goto label_1;
	}
	{
	LINE_NUMBER(505);
	if ((frame[2].i) == 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(506);
	frame[5].i = (jint(0));
	LINE_NUMBER(507);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull) == 0) goto label_5;
	}
	{
	LINE_NUMBER(508);
	frame[5].i = (256);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_cardinality_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_cardinality_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(512);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull = (jint(0));
	LINE_NUMBER(513);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (jobject(nullptr));
	LINE_NUMBER(514);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_1:;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[1].o)))->F_bits;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(517);
	if ((frame[2].i) != 0) goto label_14;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(518);
	frame[5].i = (jint(0));
	LINE_NUMBER(519);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull) == 0) goto label_16;
	}
	{
	LINE_NUMBER(520);
	frame[5].i = (256);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_cardinality_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_cardinality_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	}
label_18:;
	{
	LINE_NUMBER(524);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull = (jint(0));
	LINE_NUMBER(525);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (jobject(nullptr));
	LINE_NUMBER(526);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_12:;
	{
	LINE_NUMBER(529);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull) == 0) goto label_22;
	}
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	sp[0].o = (jobject)SM_regexodus_Block_fullBits_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(531);
	jint temp0 = (jint)SM_regexodus_BlockSet_subtract_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_boolean_R_int(ctx, (frame[5].o), (frame[4].o), (frame[2].i));
	frame[6].i = temp0;
	LINE_NUMBER(532);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull = (jint(0));
	LINE_NUMBER(533);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(534);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (frame[5].o);
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_22:;
	{
	LINE_NUMBER(537);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared) == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)SM_regexodus_Block_copyBits_regexodus_Block_R_regexodus_ds_IntBitSet(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	goto label_31;
	}
label_29:;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[3].o = sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(539);
	jint temp0 = (jint)SM_regexodus_BlockSet_subtract_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_boolean_R_int(ctx, (frame[3].o), (frame[4].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Block_copyBits_regexodus_Block_R_regexodus_ds_IntBitSet(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:copyBits", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	sp[0].o = (jobject)((func_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(546);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits = (jref) (frame[1].o);
	LINE_NUMBER(547);
	((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Block_fullBits_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:fullBits", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(552);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(553);
	((func_regexodus_ds_IntBitSet_set_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int_int])(ctx, (frame[0].o), (jint(0)), (256));
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Block_emptyBits_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:emptyBits", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(558);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(559);
	((func_regexodus_ds_IntBitSet_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_clear])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Block_count_regexodus_ds_IntBitSet_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:count", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(564);
	frame[3].i = (jint(0));
	LINE_NUMBER(565);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) > (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(566);
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[0].o), (frame[4].i));
	if (temp0 == 0) goto label_5;
	}
	INST_IINC(3, 1);
label_5:;
	{
	LINE_NUMBER(565);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(568);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Block_toBitset2_Array1_regexodus_Block_R_Array1_regexodus_ds_IntBitSet(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:toBitset2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(572);
	frame[1].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(573);
	sp[0].o = (jobject)createArray(ctx, &class_regexodus_ds_IntBitSet, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(574);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(575);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(576);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	goto label_8;
label_7:;
	{
	LINE_NUMBER(577);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[4].o)))->F_isFull) == 0) goto label_9;
	}
	{
	LINE_NUMBER(578);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_regexodus_Block(ctx);
	sp[1].o = (jobject)SF_regexodus_Block_FULL_BITS;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(579);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[4].o)))->F_bits;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(574);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Block_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(589);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(590);
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
	LINE_NUMBER(592);
	frame[2].o = (checkCast(ctx, &class_regexodus_Block, (frame[1].o)));
	LINE_NUMBER(594);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull) == ((jint)((regexodus_Block *) NULL_CHECK((frame[2].o)))->F_isFull)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(595);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared) == ((jint)((regexodus_Block *) NULL_CHECK((frame[2].o)))->F_shared)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	sp[1].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[2].o)))->F_bits;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[2].o)))->F_bits;
	if (sp[0].o != nullptr) goto label_9;
	}
	INST_ICONST(1);
	goto label_8;
label_9:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_Block_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(602);
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(603);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(604);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Block_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(610);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Block{isFull="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_isFull));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", bits="_j))));
	sp[1].o = (jobject)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_bits;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", shared="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Block *) NULL_CHECK((frame[0].o)))->F_shared));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_regexodus_Block(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Block:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Block(ctx);
	{
	LINE_NUMBER(584);
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[0].o);
	clinit_regexodus_Block(ctx);
	SF_regexodus_Block_EMPTY_BITS = sp[0].o;
	LINE_NUMBER(585);
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[0].o);
	clinit_regexodus_Block(ctx);
	SF_regexodus_Block_FULL_BITS = sp[0].o;
	LINE_NUMBER(618);
	clinit_regexodus_Block(ctx);
	sp[0].o = (jobject)SF_regexodus_Block_FULL_BITS;
	((func_regexodus_ds_IntBitSet_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int_int])(ctx, sp[0].o, (jint(0)), (255));
	LINE_NUMBER(619);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Block[] {
	(void *) M_regexodus_Block_hashCode_R_int,
	(void *) M_regexodus_Block_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Block_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Block_set_int_R_boolean,
	(void *) M_regexodus_Block_get_int_R_boolean,
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
	{ "set", "(I)Z" },
	{ "get", "(I)Z" },
};

static jclass interfaces[] { &class_regexodus_UnicodeConstants, };

static FieldMetadata fields[] {
	{ "isFull", &class_boolean, offsetof(regexodus_Block, F_isFull), "Z", 2 },
	{ "bits", &class_regexodus_ds_IntBitSet, offsetof(regexodus_Block, F_bits), "Lregexodus/ds/IntBitSet;", 2 },
	{ "shared", &class_boolean, offsetof(regexodus_Block, F_shared), "Z", 2 },
	{ "EMPTY_BITS", &class_regexodus_ds_IntBitSet, (intptr_t) &SF_regexodus_Block_EMPTY_BITS, "Lregexodus/ds/IntBitSet;", 26 },
	{ "FULL_BITS", &class_regexodus_ds_IntBitSet, (intptr_t) &SF_regexodus_Block_FULL_BITS, "Lregexodus/ds/IntBitSet;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Block, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_regexodus_Block_regexodus_ds_IntBitSet, 0, "(Lregexodus/ds/IntBitSet;)V", 0 },
	{ "set", (intptr_t) M_regexodus_Block_set_int_R_boolean, VTABLE_regexodus_Block_set_int_R_boolean, "(I)Z", 16 },
	{ "get", (intptr_t) M_regexodus_Block_get_int_R_boolean, VTABLE_regexodus_Block_get_int_R_boolean, "(I)Z", 16 },
	{ "add", (intptr_t) SM_regexodus_Block_add_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int, 0, "([Lregexodus/Block;[Lregexodus/Block;IIZ)I", 8 },
	{ "add", (intptr_t) SM_regexodus_Block_add_regexodus_Block_regexodus_Block_boolean_R_int, 0, "(Lregexodus/Block;Lregexodus/Block;Z)I", 10 },
	{ "subtract", (intptr_t) SM_regexodus_Block_subtract_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int, 0, "([Lregexodus/Block;[Lregexodus/Block;IIZ)I", 8 },
	{ "subtract", (intptr_t) SM_regexodus_Block_subtract_regexodus_Block_regexodus_Block_boolean_R_int, 0, "(Lregexodus/Block;Lregexodus/Block;Z)I", 10 },
	{ "copyBits", (intptr_t) SM_regexodus_Block_copyBits_regexodus_Block_R_regexodus_ds_IntBitSet, 0, "(Lregexodus/Block;)Lregexodus/ds/IntBitSet;", 10 },
	{ "fullBits", (intptr_t) SM_regexodus_Block_fullBits_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, 0, "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;", 10 },
	{ "emptyBits", (intptr_t) SM_regexodus_Block_emptyBits_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet, 0, "(Lregexodus/ds/IntBitSet;)Lregexodus/ds/IntBitSet;", 10 },
	{ "count", (intptr_t) SM_regexodus_Block_count_regexodus_ds_IntBitSet_int_int_R_int, 0, "(Lregexodus/ds/IntBitSet;II)I", 10 },
	{ "toBitset2", (intptr_t) SM_regexodus_Block_toBitset2_Array1_regexodus_Block_R_Array1_regexodus_ds_IntBitSet, 0, "([Lregexodus/Block;)[Lregexodus/ds/IntBitSet;", 8 },
	{ "equals", (intptr_t) M_regexodus_Block_equals_java_lang_Object_R_boolean, VTABLE_regexodus_Block_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_Block_hashCode_R_int, VTABLE_regexodus_Block_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_regexodus_Block_toString_R_java_lang_String, VTABLE_regexodus_Block_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_regexodus_Block, 0, "()V", 8 },
};

Class class_regexodus_Block{
		.nativeName = (intptr_t) "regexodus/Block",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Block),
		.classVtable = (intptr_t) vtable_regexodus_Block,
		.staticInitializer = (intptr_t) clinit_regexodus_Block,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Block,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Block = registerClass(&class_regexodus_Block);

}
