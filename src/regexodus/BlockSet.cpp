#include "regexodus/BlockSet.h"
#include "java/lang/StringBuilder.h"
#include "regexodus/UnicodeConstants.h"
#include "regexodus/Category.h"
#include "regexodus/Term.h"
#include "regexodus/ds/IntBitSet.h"
#include "regexodus/Block.h"
#include "java/lang/Object.h"
#include "regexodus/BlockSet.h"
#include "regexodus/CharacterClass.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/util/LinkedHashMap.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_regexodus_BlockSet_emptyBlock0;

void mark_regexodus_BlockSet(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_regexodus_BlockSet_emptyBlock0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_BlockSet_emptyBlock0)->clazz)->markFunction)((jobject) SF_regexodus_BlockSet_emptyBlock0, mark, depth + 1);
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
	auto self = (regexodus_BlockSet *) object;
	if (self->F_block0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block0)->clazz)->markFunction)((jobject) self->F_block0, mark, depth + 1);
	if (self->F_blocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blocks)->clazz)->markFunction)((jobject) self->F_blocks, mark, depth + 1);
}

void init_regexodus_BlockSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_BlockSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(50);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive = (jint(1));
	LINE_NUMBER(51);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge = (jint(0));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[1].o);
	((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_block0 = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive = (jint(1));
	LINE_NUMBER(64);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0 = (jref) (jobject(nullptr));
	LINE_NUMBER(65);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks = (jref) (jobject(nullptr));
	LINE_NUMBER(66);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge = (jint(0));
	LINE_NUMBER(67);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_weight = (jint(0));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:unify", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_BlockSet(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(71);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) == 0) goto label_1;
	}
	{
	LINE_NUMBER(72);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type = (jint(2));
	LINE_NUMBER(73);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = (jobject)SM_regexodus_Block_toBitset2_Array1_regexodus_Block_R_Array1_regexodus_ds_IntBitSet(ctx, sp[1].o);
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_bitset2 = (jref) sp[1].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(75);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type = (jint(1));
	LINE_NUMBER(76);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	sp += 1;
	if (sp[0].o != nullptr) goto label_6;
	}
	clinit_regexodus_BlockSet(ctx);
	(sp++)->o = SF_regexodus_BlockSet_emptyBlock0;
	goto label_7;
label_6:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((regexodus_BlockSet *) NULL_CHECK(sp[-1].o))->F_block0;
label_7:;
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_bitset = (jref) sp[1].o;
label_4:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive) != 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_inverse = sp[1].i;
	LINE_NUMBER(79);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive) == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_weight;
	sp[0].i = temp0;
	sp += 1;
	goto label_12;
	}
label_11:;
	{
	jint temp0 = (jint(65536)) - ((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_weight);
	sp[0].i = temp0;
	sp += 1;
	}
label_12:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_weight = sp[1].i;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setPositive_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setPositive", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive = (frame[1].i);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_BlockSet_isPositive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:isPositive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return ((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_BlockSet_isLarge_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:isLarge", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return ((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge);
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_enableLargeMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:enableLargeMode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)createArray(ctx, &class_regexodus_Block, (256));
	frame[1].o = sp[0].o;
	LINE_NUMBER(97);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks = (jref) (frame[1].o);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	clinit_regexodus_Block(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_Block);
	sp[2].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	init_regexodus_Block_regexodus_ds_IntBitSet(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(101);
	((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge = (jint(1));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_regexodus_BlockSet_getWeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:getWeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_weight;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint(65536)) - ((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_weight);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setWordChar_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setWordChar", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(109);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(110);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) != 0) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_BlockSet_enableLargeMode(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks;
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Word;
	sp[2].o = (jobject)((regexodus_Category *) NULL_CHECK(sp[2].o))->F_blocks;
	jint temp1 = (jint)SM_regexodus_Block_add_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int(ctx, sp[1].o, sp[2].o, (jint(0)), (255), (jint(0)));
	((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight = (temp0 + temp1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(120);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[0].o), (97), (122));
	LINE_NUMBER(121);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[0].o), (65), (90));
	LINE_NUMBER(122);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[0].o), (48), (57));
	LINE_NUMBER(123);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (95));
	}
label_4:;
	LINE_NUMBER(125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setDigit_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setDigit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(128);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(129);
	((func_regexodus_BlockSet_setCategory_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setCategory_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Nd"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(131);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[0].o), (48), (57));
	}
label_3:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setSpace_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setSpace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(136);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(137);
	((func_regexodus_BlockSet_setCategory_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setCategory_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"G"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(139);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (32));
	LINE_NUMBER(140);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (13));
	LINE_NUMBER(141);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (10));
	LINE_NUMBER(142);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (9));
	LINE_NUMBER(143);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (12));
	}
label_3:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setHorizontalSpace_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setHorizontalSpace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(148);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(149);
	((func_regexodus_BlockSet_setCategory_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setCategory_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Gh"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(151);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (32));
	LINE_NUMBER(152);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (9));
	}
label_3:;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setVerticalSpace_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setVerticalSpace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(156);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(157);
	((func_regexodus_BlockSet_setCategory_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setCategory_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Gv"_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(159);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (10));
	LINE_NUMBER(160);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (13));
	LINE_NUMBER(161);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (12));
	LINE_NUMBER(162);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[0].o), (11));
	}
label_3:;
	LINE_NUMBER(164);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setCategory_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setCategory", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) != 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_BlockSet_enableLargeMode(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(168);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((checkCast(ctx, &class_regexodus_Category, sp[0].o))))->F_blocks;
	frame[2].o = sp[0].o;
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks;
	jint temp1 = (jint)SM_regexodus_Block_add_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int(ctx, sp[1].o, (frame[2].o), (jint(0)), (255), (jint(0)));
	((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight = (temp0 + temp1);
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setChars_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setChars", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = (temp0 - (jint(1)));
	}
label_1:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_2;
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, sp[0].o, temp0);
	INST_IINC(2, -1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setChar_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(178);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[0].o), (frame[1].i), (frame[1].i));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_setRange_char_char(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:setRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(185);
	if ((frame[2].i) >= (256)) goto label_1;
	}
	{
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(186);
	frame[3].i = (jint(0));
	LINE_NUMBER(187);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) != 0) goto label_4;
	}
	{
	LINE_NUMBER(188);
	M_regexodus_BlockSet_enableLargeMode(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks;
	frame[4].o = sp[0].o;
	LINE_NUMBER(191);
	frame[5].i = (frame[1].i);
	}
label_7:;
	{
	if ((frame[5].i) > (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(192);
	frame[6].i = (((frame[5].i) >> (8)) & (255));
	LINE_NUMBER(193);
	frame[7].i = ((frame[5].i) & (255));
	LINE_NUMBER(194);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(195);
	if ((frame[8].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	clinit_regexodus_Block(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_Block);
	init_regexodus_Block(ctx, sp[1].o);
	frame[8].o = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_regexodus_Block_set_int_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_regexodus_Block_set_int_R_boolean])(ctx, (frame[8].o), (frame[7].i));
	if (temp0 == 0) goto label_15;
	}
	INST_IINC(3, 1);
label_15:;
	{
	LINE_NUMBER(191);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight = (((jint)((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight) + (frame[3].i));
	LINE_NUMBER(201);
	goto label_17;
	}
label_2:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	frame[3].o = sp[0].o;
	LINE_NUMBER(203);
	if ((frame[3].o) != nullptr) goto label_19;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[1].o);
	frame[3].o = sp[1].o;
	((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_block0 = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight;
	jint temp1 = (jint)SM_regexodus_BlockSet_set_regexodus_ds_IntBitSet_int_int_R_int(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight = (temp0 + temp1);
	}
label_17:;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_add_regexodus_BlockSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(211);
	((func_regexodus_BlockSet_add_regexodus_BlockSet_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_add_regexodus_BlockSet_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	jobject temp2 = sp[2].o;
	sp[2].o = temp1;
	sp[3].o = temp2;
	sp += 4;
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_positive) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 5;
	jint temp0 = (jint)SM_regexodus_BlockSet_addImpl_regexodus_BlockSet_regexodus_BlockSet_boolean_R_int(ctx, sp[2].o, sp[3].o, (sp[4].i ^ (frame[2].i)));
	((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight = (sp[1].i + temp0);
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_regexodus_BlockSet_addImpl_regexodus_BlockSet_regexodus_BlockSet_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:addImpl", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_BlockSet(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(219);
	frame[3].i = (jint(0));
	LINE_NUMBER(220);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) != 0) goto label_2;
	}
	{
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_isLarge) != 0) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_2;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_block0;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	frame[4].o = sp[0].o;
	LINE_NUMBER(223);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[1].o);
	frame[4].o = sp[1].o;
	((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_block0 = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(224);
	jint temp0 = frame[3].i;
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_block0;
	jint temp1 = (jint)SM_regexodus_BlockSet_add_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_int_int_boolean_R_int(ctx, sp[0].o, sp[1].o, (jint(0)), (255), (jint(0)));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(225);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(227);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) != 0) goto label_9;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_BlockSet_enableLargeMode(ctx, sp[0].o);
label_9:;
	{
	LINE_NUMBER(228);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_isLarge) != 0) goto label_10;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	M_regexodus_BlockSet_enableLargeMode(ctx, sp[0].o);
label_10:;
	{
	LINE_NUMBER(229);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_blocks;
	jint temp1 = (jint)SM_regexodus_Block_add_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int(ctx, sp[0].o, sp[1].o, (jint(0)), (255), (frame[2].i));
	frame[3].i = (temp0 + temp1);
	}
label_4:;
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_subtract_regexodus_BlockSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:subtract", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	M_regexodus_BlockSet_subtract_regexodus_BlockSet_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_subtract_regexodus_BlockSet_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:subtract", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	jobject temp2 = sp[2].o;
	sp[2].o = temp1;
	sp[3].o = temp2;
	sp += 4;
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_positive) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 5;
	jint temp0 = (jint)SM_regexodus_BlockSet_subtractImpl_regexodus_BlockSet_regexodus_BlockSet_boolean_R_int(ctx, sp[2].o, sp[3].o, (sp[4].i ^ (frame[2].i)));
	((regexodus_BlockSet *) NULL_CHECK(sp[0].o))->F_weight = (sp[1].i + temp0);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_regexodus_BlockSet_subtractImpl_regexodus_BlockSet_regexodus_BlockSet_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:subtractImpl", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_BlockSet(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(244);
	frame[3].i = (jint(0));
	LINE_NUMBER(245);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) != 0) goto label_2;
	}
	{
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_isLarge) != 0) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_2;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_block0;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	frame[4].o = sp[0].o;
	LINE_NUMBER(249);
	if ((frame[4].o) != nullptr) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(250);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_regexodus_BlockSet_subtract_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_boolean_R_int(ctx, (frame[4].o), (frame[5].o), (jint(0)));
	frame[3].i = (temp0 + temp1);
	}
label_5:;
	LINE_NUMBER(252);
	goto label_9;
label_2:;
	{
	LINE_NUMBER(253);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) != 0) goto label_10;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_BlockSet_enableLargeMode(ctx, sp[0].o);
label_10:;
	{
	LINE_NUMBER(254);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_isLarge) != 0) goto label_11;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	M_regexodus_BlockSet_enableLargeMode(ctx, sp[0].o);
label_11:;
	{
	LINE_NUMBER(255);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[1].o)))->F_blocks;
	jint temp1 = (jint)SM_regexodus_Block_subtract_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int(ctx, sp[0].o, sp[1].o, (jint(0)), (255), (frame[2].i));
	frame[3].i = (temp0 + temp1);
	}
label_9:;
	{
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_intersect_regexodus_BlockSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:intersect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(261);
	M_regexodus_BlockSet_intersect_regexodus_BlockSet_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_BlockSet_intersect_regexodus_BlockSet_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:intersect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[2].i) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	M_regexodus_BlockSet_subtract_regexodus_BlockSet_boolean(ctx, sp[0].o, sp[1].o, sp[2].i);
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_regexodus_BlockSet_add_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_int_int_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jbool param4) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_BlockSet(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_cardinality_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_cardinality_R_int])(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(271);
	if ((frame[4].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet])(ctx, (frame[0].o), (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(275);
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_cardinality_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_cardinality_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 - (frame[5].i));
	}

	popStackFrame(ctx);
}

jint SM_regexodus_BlockSet_subtract_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:subtract", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_BlockSet(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_cardinality_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_cardinality_R_int])(ctx, (frame[0].o));
	frame[3].i = (-temp0);
	LINE_NUMBER(280);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet])(ctx, (frame[0].o), (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(284);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_regexodus_ds_IntBitSet_cardinality_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_cardinality_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_BlockSet_set_regexodus_ds_IntBitSet_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_BlockSet(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_cardinality_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_cardinality_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(289);
	((func_regexodus_ds_IntBitSet_set_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(290);
	jint temp1 = (jint)((func_regexodus_ds_IntBitSet_cardinality_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_cardinality_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp1 - (frame[3].i));
	}

	popStackFrame(ctx);
}

jobject M_regexodus_BlockSet_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(295);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (94));
	}
label_2:;
	{
	LINE_NUMBER(297);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) == 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = (jobject)SM_regexodus_Block_toBitset2_Array1_regexodus_Block_R_Array1_regexodus_ds_IntBitSet(ctx, sp[1].o);
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue2_Array1_regexodus_ds_IntBitSet_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue0_regexodus_ds_IntBitSet_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (40));
	LINE_NUMBER(301);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)M_regexodus_BlockSet_getWeight_R_int(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (41));
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_BlockSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(308);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(309);
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
	LINE_NUMBER(311);
	frame[2].o = (checkCast(ctx, &class_regexodus_BlockSet, (frame[1].o)));
	LINE_NUMBER(313);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive) == ((jint)((regexodus_BlockSet *) NULL_CHECK((frame[2].o)))->F_positive)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(314);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) == ((jint)((regexodus_BlockSet *) NULL_CHECK((frame[2].o)))->F_isLarge)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(315);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_weight) == ((jint)((regexodus_BlockSet *) NULL_CHECK((frame[2].o)))->F_weight)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[2].o)))->F_block0;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	goto label_10;
label_8:;
	{
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[2].o)))->F_block0;
	if (sp[0].o == nullptr) goto label_9;
	}
label_10:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[2].o)))->F_blocks;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_BlockSet_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(324);
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_positive) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(325);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_isLarge) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(326);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_block0;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(327);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_blocks;
	jint temp1 = (jint)SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(ctx, sp[0].o);
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(328);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_BlockSet *) NULL_CHECK((frame[0].o)))->F_weight));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void clinit_regexodus_BlockSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BlockSet:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_BlockSet(ctx);
	{
	LINE_NUMBER(54);
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[0].o);
	clinit_regexodus_BlockSet(ctx);
	SF_regexodus_BlockSet_emptyBlock0 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_BlockSet[] {
	(void *) M_regexodus_BlockSet_hashCode_R_int,
	(void *) M_regexodus_BlockSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_BlockSet_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_BlockSet_reset,
	(void *) M_regexodus_BlockSet_setPositive_boolean,
	(void *) M_regexodus_BlockSet_isPositive_R_boolean,
	(void *) M_regexodus_BlockSet_isLarge_R_boolean,
	(void *) M_regexodus_BlockSet_enableLargeMode,
	(void *) M_regexodus_BlockSet_getWeight_R_int,
	(void *) M_regexodus_BlockSet_setWordChar_boolean,
	(void *) M_regexodus_BlockSet_setDigit_boolean,
	(void *) M_regexodus_BlockSet_setSpace_boolean,
	(void *) M_regexodus_BlockSet_setHorizontalSpace_boolean,
	(void *) M_regexodus_BlockSet_setVerticalSpace_boolean,
	(void *) M_regexodus_BlockSet_setCategory_java_lang_String,
	(void *) M_regexodus_BlockSet_setChars_java_lang_String,
	(void *) M_regexodus_BlockSet_setChar_char,
	(void *) M_regexodus_BlockSet_setRange_char_char,
	(void *) M_regexodus_BlockSet_add_regexodus_BlockSet,
	(void *) M_regexodus_BlockSet_add_regexodus_BlockSet_boolean,
	(void *) M_regexodus_BlockSet_subtract_regexodus_BlockSet,
	(void *) M_regexodus_BlockSet_subtract_regexodus_BlockSet_boolean,
	(void *) M_regexodus_BlockSet_intersect_regexodus_BlockSet,
	(void *) M_regexodus_BlockSet_intersect_regexodus_BlockSet_boolean,
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
	{ "reset", "()V" },
	{ "setPositive", "(Z)V" },
	{ "isPositive", "()Z" },
	{ "isLarge", "()Z" },
	{ "enableLargeMode", "()V" },
	{ "getWeight", "()I" },
	{ "setWordChar", "(Z)V" },
	{ "setDigit", "(Z)V" },
	{ "setSpace", "(Z)V" },
	{ "setHorizontalSpace", "(Z)V" },
	{ "setVerticalSpace", "(Z)V" },
	{ "setCategory", "(Ljava/lang/String;)V" },
	{ "setChars", "(Ljava/lang/String;)V" },
	{ "setChar", "(C)V" },
	{ "setRange", "(CC)V" },
	{ "add", "(Lregexodus/BlockSet;)V" },
	{ "add", "(Lregexodus/BlockSet;Z)V" },
	{ "subtract", "(Lregexodus/BlockSet;)V" },
	{ "subtract", "(Lregexodus/BlockSet;Z)V" },
	{ "intersect", "(Lregexodus/BlockSet;)V" },
	{ "intersect", "(Lregexodus/BlockSet;Z)V" },
};

static jclass interfaces[] { &class_regexodus_UnicodeConstants, };

static FieldMetadata fields[] {
	{ "positive", &class_boolean, offsetof(regexodus_BlockSet, F_positive), "Z", 2 },
	{ "isLarge", &class_boolean, offsetof(regexodus_BlockSet, F_isLarge), "Z", 2 },
	{ "block0", &class_regexodus_ds_IntBitSet, offsetof(regexodus_BlockSet, F_block0), "Lregexodus/ds/IntBitSet;", 2 },
	{ "emptyBlock0", &class_regexodus_ds_IntBitSet, (intptr_t) &SF_regexodus_BlockSet_emptyBlock0, "Lregexodus/ds/IntBitSet;", 26 },
	{ "blocks", getArrayClass(&class_regexodus_Block, 1), offsetof(regexodus_BlockSet, F_blocks), "[Lregexodus/Block;", 2 },
	{ "weight", &class_int, offsetof(regexodus_BlockSet, F_weight), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_BlockSet, 0, "()V", 0 },
	{ "reset", (intptr_t) M_regexodus_BlockSet_reset, VTABLE_regexodus_BlockSet_reset, "()V", 16 },
	{ "unify", (intptr_t) SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term, 0, "(Lregexodus/BlockSet;Lregexodus/Term;)V", 8 },
	{ "setPositive", (intptr_t) M_regexodus_BlockSet_setPositive_boolean, VTABLE_regexodus_BlockSet_setPositive_boolean, "(Z)V", 16 },
	{ "isPositive", (intptr_t) M_regexodus_BlockSet_isPositive_R_boolean, VTABLE_regexodus_BlockSet_isPositive_R_boolean, "()Z", 16 },
	{ "isLarge", (intptr_t) M_regexodus_BlockSet_isLarge_R_boolean, VTABLE_regexodus_BlockSet_isLarge_R_boolean, "()Z", 16 },
	{ "enableLargeMode", (intptr_t) M_regexodus_BlockSet_enableLargeMode, VTABLE_regexodus_BlockSet_enableLargeMode, "()V", 2 },
	{ "getWeight", (intptr_t) M_regexodus_BlockSet_getWeight_R_int, VTABLE_regexodus_BlockSet_getWeight_R_int, "()I", 2 },
	{ "setWordChar", (intptr_t) M_regexodus_BlockSet_setWordChar_boolean, VTABLE_regexodus_BlockSet_setWordChar_boolean, "(Z)V", 16 },
	{ "setDigit", (intptr_t) M_regexodus_BlockSet_setDigit_boolean, VTABLE_regexodus_BlockSet_setDigit_boolean, "(Z)V", 16 },
	{ "setSpace", (intptr_t) M_regexodus_BlockSet_setSpace_boolean, VTABLE_regexodus_BlockSet_setSpace_boolean, "(Z)V", 16 },
	{ "setHorizontalSpace", (intptr_t) M_regexodus_BlockSet_setHorizontalSpace_boolean, VTABLE_regexodus_BlockSet_setHorizontalSpace_boolean, "(Z)V", 16 },
	{ "setVerticalSpace", (intptr_t) M_regexodus_BlockSet_setVerticalSpace_boolean, VTABLE_regexodus_BlockSet_setVerticalSpace_boolean, "(Z)V", 16 },
	{ "setCategory", (intptr_t) M_regexodus_BlockSet_setCategory_java_lang_String, VTABLE_regexodus_BlockSet_setCategory_java_lang_String, "(Ljava/lang/String;)V", 16 },
	{ "setChars", (intptr_t) M_regexodus_BlockSet_setChars_java_lang_String, VTABLE_regexodus_BlockSet_setChars_java_lang_String, "(Ljava/lang/String;)V", 16 },
	{ "setChar", (intptr_t) M_regexodus_BlockSet_setChar_char, VTABLE_regexodus_BlockSet_setChar_char, "(C)V", 16 },
	{ "setRange", (intptr_t) M_regexodus_BlockSet_setRange_char_char, VTABLE_regexodus_BlockSet_setRange_char_char, "(CC)V", 16 },
	{ "add", (intptr_t) M_regexodus_BlockSet_add_regexodus_BlockSet, VTABLE_regexodus_BlockSet_add_regexodus_BlockSet, "(Lregexodus/BlockSet;)V", 16 },
	{ "add", (intptr_t) M_regexodus_BlockSet_add_regexodus_BlockSet_boolean, VTABLE_regexodus_BlockSet_add_regexodus_BlockSet_boolean, "(Lregexodus/BlockSet;Z)V", 16 },
	{ "addImpl", (intptr_t) SM_regexodus_BlockSet_addImpl_regexodus_BlockSet_regexodus_BlockSet_boolean_R_int, 0, "(Lregexodus/BlockSet;Lregexodus/BlockSet;Z)I", 10 },
	{ "subtract", (intptr_t) M_regexodus_BlockSet_subtract_regexodus_BlockSet, VTABLE_regexodus_BlockSet_subtract_regexodus_BlockSet, "(Lregexodus/BlockSet;)V", 16 },
	{ "subtract", (intptr_t) M_regexodus_BlockSet_subtract_regexodus_BlockSet_boolean, VTABLE_regexodus_BlockSet_subtract_regexodus_BlockSet_boolean, "(Lregexodus/BlockSet;Z)V", 2 },
	{ "subtractImpl", (intptr_t) SM_regexodus_BlockSet_subtractImpl_regexodus_BlockSet_regexodus_BlockSet_boolean_R_int, 0, "(Lregexodus/BlockSet;Lregexodus/BlockSet;Z)I", 10 },
	{ "intersect", (intptr_t) M_regexodus_BlockSet_intersect_regexodus_BlockSet, VTABLE_regexodus_BlockSet_intersect_regexodus_BlockSet, "(Lregexodus/BlockSet;)V", 16 },
	{ "intersect", (intptr_t) M_regexodus_BlockSet_intersect_regexodus_BlockSet_boolean, VTABLE_regexodus_BlockSet_intersect_regexodus_BlockSet_boolean, "(Lregexodus/BlockSet;Z)V", 2 },
	{ "add", (intptr_t) SM_regexodus_BlockSet_add_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_int_int_boolean_R_int, 0, "(Lregexodus/ds/IntBitSet;Lregexodus/ds/IntBitSet;IIZ)I", 8 },
	{ "subtract", (intptr_t) SM_regexodus_BlockSet_subtract_regexodus_ds_IntBitSet_regexodus_ds_IntBitSet_boolean_R_int, 0, "(Lregexodus/ds/IntBitSet;Lregexodus/ds/IntBitSet;Z)I", 8 },
	{ "set", (intptr_t) SM_regexodus_BlockSet_set_regexodus_ds_IntBitSet_int_int_R_int, 0, "(Lregexodus/ds/IntBitSet;II)I", 10 },
	{ "toString", (intptr_t) M_regexodus_BlockSet_toString_R_java_lang_String, VTABLE_regexodus_BlockSet_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_regexodus_BlockSet_equals_java_lang_Object_R_boolean, VTABLE_regexodus_BlockSet_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_BlockSet_hashCode_R_int, VTABLE_regexodus_BlockSet_hashCode_R_int, "()I", 1 },
	{ "<clinit>", (intptr_t) clinit_regexodus_BlockSet, 0, "()V", 8 },
};

Class class_regexodus_BlockSet{
		.nativeName = (intptr_t) "regexodus/BlockSet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_BlockSet),
		.classVtable = (intptr_t) vtable_regexodus_BlockSet,
		.staticInitializer = (intptr_t) clinit_regexodus_BlockSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_BlockSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 32,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_BlockSet = registerClass(&class_regexodus_BlockSet);

}
