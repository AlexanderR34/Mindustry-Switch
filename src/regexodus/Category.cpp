#include "regexodus/Category.h"
#include "regexodus/Block.h"
#include "regexodus/ds/IntBitSet.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/util/LinkedHashMap.h"
#include "regexodus/Category.h"
#include "java/lang/Class.h"
#include "regexodus/ds/CharCharMap.h"
#include "java/lang/CharSequence.h"

extern "C" {

jobject SF_regexodus_Category_C;
jobject SF_regexodus_Category_Co;
jobject SF_regexodus_Category_Cn;
jobject SF_regexodus_Category_Cc;
jobject SF_regexodus_Category_Cf;
jobject SF_regexodus_Category_Cs;
jobject SF_regexodus_Category_L;
jobject SF_regexodus_Category_Lu;
jobject SF_regexodus_Category_Ll;
jobject SF_regexodus_Category_Lt;
jobject SF_regexodus_Category_Lm;
jobject SF_regexodus_Category_Lo;
jobject SF_regexodus_Category_Lc;
jobject SF_regexodus_Category_M;
jobject SF_regexodus_Category_Mn;
jobject SF_regexodus_Category_Me;
jobject SF_regexodus_Category_Mc;
jobject SF_regexodus_Category_N;
jobject SF_regexodus_Category_Nd;
jobject SF_regexodus_Category_Nl;
jobject SF_regexodus_Category_No;
jobject SF_regexodus_Category_Z;
jobject SF_regexodus_Category_Zs;
jobject SF_regexodus_Category_Zl;
jobject SF_regexodus_Category_Zp;
jobject SF_regexodus_Category_P;
jobject SF_regexodus_Category_Pd;
jobject SF_regexodus_Category_Ps;
jobject SF_regexodus_Category_Pi;
jobject SF_regexodus_Category_Pe;
jobject SF_regexodus_Category_Pf;
jobject SF_regexodus_Category_Pc;
jobject SF_regexodus_Category_Po;
jobject SF_regexodus_Category_S;
jobject SF_regexodus_Category_Sm;
jobject SF_regexodus_Category_Sc;
jobject SF_regexodus_Category_Sk;
jobject SF_regexodus_Category_So;
jobject SF_regexodus_Category_Word;
jobject SF_regexodus_Category_Identifier;
jobject SF_regexodus_Category_IdentifierStart;
jobject SF_regexodus_Category_IdentifierPart;
jobject SF_regexodus_Category_Horizontal;
jobject SF_regexodus_Category_Vertical;
jobject SF_regexodus_Category_Space;
jobject SF_regexodus_Category_upper;
jobject SF_regexodus_Category_lower;
jobject SF_regexodus_Category_upperToLower;
jobject SF_regexodus_Category_lowerToUpper;
jobject SF_regexodus_Category_openers;
jobject SF_regexodus_Category_closers;
jobject SF_regexodus_Category_openBrackets;
jobject SF_regexodus_Category_closingBrackets;
jobject SF_regexodus_Category_categories;
jobject SF_regexodus_Category_superCategories;

void mark_regexodus_Category(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_regexodus_Category_C)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_C)->clazz)->markFunction)((jobject) SF_regexodus_Category_C, mark, depth + 1);
		if (SF_regexodus_Category_Co)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Co)->clazz)->markFunction)((jobject) SF_regexodus_Category_Co, mark, depth + 1);
		if (SF_regexodus_Category_Cn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Cn)->clazz)->markFunction)((jobject) SF_regexodus_Category_Cn, mark, depth + 1);
		if (SF_regexodus_Category_Cc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Cc)->clazz)->markFunction)((jobject) SF_regexodus_Category_Cc, mark, depth + 1);
		if (SF_regexodus_Category_Cf)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Cf)->clazz)->markFunction)((jobject) SF_regexodus_Category_Cf, mark, depth + 1);
		if (SF_regexodus_Category_Cs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Cs)->clazz)->markFunction)((jobject) SF_regexodus_Category_Cs, mark, depth + 1);
		if (SF_regexodus_Category_L)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_L)->clazz)->markFunction)((jobject) SF_regexodus_Category_L, mark, depth + 1);
		if (SF_regexodus_Category_Lu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Lu)->clazz)->markFunction)((jobject) SF_regexodus_Category_Lu, mark, depth + 1);
		if (SF_regexodus_Category_Ll)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Ll)->clazz)->markFunction)((jobject) SF_regexodus_Category_Ll, mark, depth + 1);
		if (SF_regexodus_Category_Lt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Lt)->clazz)->markFunction)((jobject) SF_regexodus_Category_Lt, mark, depth + 1);
		if (SF_regexodus_Category_Lm)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Lm)->clazz)->markFunction)((jobject) SF_regexodus_Category_Lm, mark, depth + 1);
		if (SF_regexodus_Category_Lo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Lo)->clazz)->markFunction)((jobject) SF_regexodus_Category_Lo, mark, depth + 1);
		if (SF_regexodus_Category_Lc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Lc)->clazz)->markFunction)((jobject) SF_regexodus_Category_Lc, mark, depth + 1);
		if (SF_regexodus_Category_M)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_M)->clazz)->markFunction)((jobject) SF_regexodus_Category_M, mark, depth + 1);
		if (SF_regexodus_Category_Mn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Mn)->clazz)->markFunction)((jobject) SF_regexodus_Category_Mn, mark, depth + 1);
		if (SF_regexodus_Category_Me)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Me)->clazz)->markFunction)((jobject) SF_regexodus_Category_Me, mark, depth + 1);
		if (SF_regexodus_Category_Mc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Mc)->clazz)->markFunction)((jobject) SF_regexodus_Category_Mc, mark, depth + 1);
		if (SF_regexodus_Category_N)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_N)->clazz)->markFunction)((jobject) SF_regexodus_Category_N, mark, depth + 1);
		if (SF_regexodus_Category_Nd)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Nd)->clazz)->markFunction)((jobject) SF_regexodus_Category_Nd, mark, depth + 1);
		if (SF_regexodus_Category_Nl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Nl)->clazz)->markFunction)((jobject) SF_regexodus_Category_Nl, mark, depth + 1);
		if (SF_regexodus_Category_No)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_No)->clazz)->markFunction)((jobject) SF_regexodus_Category_No, mark, depth + 1);
		if (SF_regexodus_Category_Z)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Z)->clazz)->markFunction)((jobject) SF_regexodus_Category_Z, mark, depth + 1);
		if (SF_regexodus_Category_Zs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Zs)->clazz)->markFunction)((jobject) SF_regexodus_Category_Zs, mark, depth + 1);
		if (SF_regexodus_Category_Zl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Zl)->clazz)->markFunction)((jobject) SF_regexodus_Category_Zl, mark, depth + 1);
		if (SF_regexodus_Category_Zp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Zp)->clazz)->markFunction)((jobject) SF_regexodus_Category_Zp, mark, depth + 1);
		if (SF_regexodus_Category_P)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_P)->clazz)->markFunction)((jobject) SF_regexodus_Category_P, mark, depth + 1);
		if (SF_regexodus_Category_Pd)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Pd)->clazz)->markFunction)((jobject) SF_regexodus_Category_Pd, mark, depth + 1);
		if (SF_regexodus_Category_Ps)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Ps)->clazz)->markFunction)((jobject) SF_regexodus_Category_Ps, mark, depth + 1);
		if (SF_regexodus_Category_Pi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Pi)->clazz)->markFunction)((jobject) SF_regexodus_Category_Pi, mark, depth + 1);
		if (SF_regexodus_Category_Pe)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Pe)->clazz)->markFunction)((jobject) SF_regexodus_Category_Pe, mark, depth + 1);
		if (SF_regexodus_Category_Pf)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Pf)->clazz)->markFunction)((jobject) SF_regexodus_Category_Pf, mark, depth + 1);
		if (SF_regexodus_Category_Pc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Pc)->clazz)->markFunction)((jobject) SF_regexodus_Category_Pc, mark, depth + 1);
		if (SF_regexodus_Category_Po)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Po)->clazz)->markFunction)((jobject) SF_regexodus_Category_Po, mark, depth + 1);
		if (SF_regexodus_Category_S)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_S)->clazz)->markFunction)((jobject) SF_regexodus_Category_S, mark, depth + 1);
		if (SF_regexodus_Category_Sm)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Sm)->clazz)->markFunction)((jobject) SF_regexodus_Category_Sm, mark, depth + 1);
		if (SF_regexodus_Category_Sc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Sc)->clazz)->markFunction)((jobject) SF_regexodus_Category_Sc, mark, depth + 1);
		if (SF_regexodus_Category_Sk)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Sk)->clazz)->markFunction)((jobject) SF_regexodus_Category_Sk, mark, depth + 1);
		if (SF_regexodus_Category_So)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_So)->clazz)->markFunction)((jobject) SF_regexodus_Category_So, mark, depth + 1);
		if (SF_regexodus_Category_Word)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Word)->clazz)->markFunction)((jobject) SF_regexodus_Category_Word, mark, depth + 1);
		if (SF_regexodus_Category_Identifier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Identifier)->clazz)->markFunction)((jobject) SF_regexodus_Category_Identifier, mark, depth + 1);
		if (SF_regexodus_Category_IdentifierStart)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_IdentifierStart)->clazz)->markFunction)((jobject) SF_regexodus_Category_IdentifierStart, mark, depth + 1);
		if (SF_regexodus_Category_IdentifierPart)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_IdentifierPart)->clazz)->markFunction)((jobject) SF_regexodus_Category_IdentifierPart, mark, depth + 1);
		if (SF_regexodus_Category_Horizontal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Horizontal)->clazz)->markFunction)((jobject) SF_regexodus_Category_Horizontal, mark, depth + 1);
		if (SF_regexodus_Category_Vertical)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Vertical)->clazz)->markFunction)((jobject) SF_regexodus_Category_Vertical, mark, depth + 1);
		if (SF_regexodus_Category_Space)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_Space)->clazz)->markFunction)((jobject) SF_regexodus_Category_Space, mark, depth + 1);
		if (SF_regexodus_Category_upper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_upper)->clazz)->markFunction)((jobject) SF_regexodus_Category_upper, mark, depth + 1);
		if (SF_regexodus_Category_lower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_lower)->clazz)->markFunction)((jobject) SF_regexodus_Category_lower, mark, depth + 1);
		if (SF_regexodus_Category_upperToLower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_upperToLower)->clazz)->markFunction)((jobject) SF_regexodus_Category_upperToLower, mark, depth + 1);
		if (SF_regexodus_Category_lowerToUpper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_lowerToUpper)->clazz)->markFunction)((jobject) SF_regexodus_Category_lowerToUpper, mark, depth + 1);
		if (SF_regexodus_Category_openers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_openers)->clazz)->markFunction)((jobject) SF_regexodus_Category_openers, mark, depth + 1);
		if (SF_regexodus_Category_closers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_closers)->clazz)->markFunction)((jobject) SF_regexodus_Category_closers, mark, depth + 1);
		if (SF_regexodus_Category_openBrackets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_openBrackets)->clazz)->markFunction)((jobject) SF_regexodus_Category_openBrackets, mark, depth + 1);
		if (SF_regexodus_Category_closingBrackets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_closingBrackets)->clazz)->markFunction)((jobject) SF_regexodus_Category_closingBrackets, mark, depth + 1);
		if (SF_regexodus_Category_categories)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_categories)->clazz)->markFunction)((jobject) SF_regexodus_Category_categories, mark, depth + 1);
		if (SF_regexodus_Category_superCategories)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Category_superCategories)->clazz)->markFunction)((jobject) SF_regexodus_Category_superCategories, mark, depth + 1);
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
	auto self = (regexodus_Category *) object;
	if (self->F_cal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cal)->clazz)->markFunction)((jobject) self->F_cal, mark, depth + 1);
	if (self->F_blocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blocks)->clazz)->markFunction)((jobject) self->F_blocks, mark, depth + 1);
}

void init_regexodus_Category(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_length = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (jint(0)));
	((regexodus_Category *) NULL_CHECK(sp[0].o))->F_cal = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_regexodus_Block, (jint(0)));
	((regexodus_Category *) NULL_CHECK(sp[0].o))->F_blocks = (jref) sp[1].o;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Category_Array1_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	((regexodus_Category *) NULL_CHECK(sp[0].o))->F_n = temp0;
	LINE_NUMBER(29);
	frame[3].i = (jint(0));
	frame[4].i = (jint(0));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, ((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_n));
	((regexodus_Category *) NULL_CHECK(sp[0].o))->F_cal = (jref) sp[1].o;
	LINE_NUMBER(31);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= ((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_n)) goto label_7;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	jint temp0 = frame[5].i;
	jint temp1 = frame[3].i;
	sp[1].o = frame[1].o;
	jint temp2 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[5].i));
	jint temp3 = temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (temp2 - (32))));
	frame[3].i = temp3;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar(temp3));
	LINE_NUMBER(33);
	if (((frame[5].i) & (jint(1))) != (jint(1))) goto label_10;
	}
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint(1)) + (frame[3].i);
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	frame[4].i = (temp0 + (temp1 - ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[5].i) - (jint(1)))))));
	}
label_10:;
	{
	LINE_NUMBER(31);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(35);
	((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_length = (frame[4].i);
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_regexodus_Category_makeBlocks_R_Array1_regexodus_Block(ctx, (frame[0].o));
	((regexodus_Category *) NULL_CHECK(sp[0].o))->F_blocks = (jref) sp[1].o;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Category_contents_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:contents", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	frame[1].i = (jint(0));
	LINE_NUMBER(42);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(43);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_n) - (jint(1)))) goto label_4;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i)));
	}
label_6:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	if (temp0 > ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[3].i) + (jint(1)))))) goto label_7;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = frame[2].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[4].i);
	LINE_NUMBER(44);
	frame[4].i = (jchar(((frame[4].i) + (jint(1)))));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(43);
	INST_IINC(3, 2);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Category_makeBlocks_R_Array1_regexodus_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:makeBlocks", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	frame[1].i = (jint(0));
	LINE_NUMBER(51);
	sp[0].o = (jobject)createArray(ctx, &class_regexodus_Block, (256));
	frame[2].o = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)createArray(ctx, &class_regexodus_ds_IntBitSet, (256));
	frame[3].o = sp[0].o;
	LINE_NUMBER(54);
	frame[8].i = (jint(0));
	}
label_4:;
	{
	if ((frame[8].i) >= (((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_n) - (jint(1)))) goto label_5;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[8].i)));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[8].i) + (jint(1)))));
	LINE_NUMBER(57);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[4].i)) >> (8)));
	LINE_NUMBER(58);
	frame[7].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (8)));
	LINE_NUMBER(59);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))) != nullptr) goto label_11;
	}
	{
	sp[0].o = frame[3].o;
	jint temp0 = frame[6].i;
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(60);
	if ((frame[6].i) != (frame[7].i)) goto label_12;
	}
	{
	LINE_NUMBER(62);
	((func_regexodus_ds_IntBitSet_set_int_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))))->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))), ((frame[4].i) & (255)), ((frame[5].i) & (255)));
	LINE_NUMBER(63);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[3].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	((func_regexodus_ds_IntBitSet_set_int_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), ((frame[4].i) & (255)), (255));
	}
label_16:;
	{
	LINE_NUMBER(66);
	if ((frame[6].i) == (frame[7].i)) goto label_17;
	}
	{
	LINE_NUMBER(67);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))) != nullptr) goto label_19;
	}
	{
	sp[0].o = frame[3].o;
	jint temp0 = frame[6].i;
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[3].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	((func_regexodus_ds_IntBitSet_set_int_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (jint(0)), (255));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(70);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))) != nullptr) goto label_20;
	}
	{
	sp[0].o = frame[3].o;
	jint temp0 = frame[7].i;
	clinit_regexodus_ds_IntBitSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_ds_IntBitSet);
	init_regexodus_ds_IntBitSet(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_20:;
	{
	LINE_NUMBER(71);
	((func_regexodus_ds_IntBitSet_set_int_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))))->vtable)[VTABLE_regexodus_ds_IntBitSet_set_int_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))), (jint(0)), ((frame[5].i) & (255)));
	}
label_15:;
	{
	LINE_NUMBER(54);
	INST_IINC(8, 2);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(73);
	frame[8].i = (jint(0));
	}
label_21:;
	{
	if ((frame[8].i) >= (256)) goto label_22;
	}
	{
	LINE_NUMBER(74);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[8].i))) != nullptr) goto label_24;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[2].o;
	jint temp0 = frame[8].i;
	clinit_regexodus_Block(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_Block);
	init_regexodus_Block(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[2].o;
	jint temp0 = frame[8].i;
	clinit_regexodus_Block(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_Block);
	init_regexodus_Block_regexodus_ds_IntBitSet(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[8].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(73);
	INST_IINC(8, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Category_contains_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:contains", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_n) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(84);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	if (temp0 < ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i)))) goto label_4;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	if (temp0 > ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[2].i) + (jint(1)))))) goto label_4;
	}
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(83);
	INST_IINC(2, 2);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Category_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Category{"_j))));
	sp[1].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Category_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(100);
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
	LINE_NUMBER(102);
	frame[2].o = (checkCast(ctx, &class_regexodus_Category, (frame[1].o)));
	LINE_NUMBER(104);
	if (((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_length) == ((jint)((regexodus_Category *) NULL_CHECK((frame[2].o)))->F_length)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(105);
	if (((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_n) == ((jint)((regexodus_Category *) NULL_CHECK((frame[2].o)))->F_n)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[2].o)))->F_cal;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	sp[1].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[2].o)))->F_cal;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_char_Array1_char_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
label_7:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_blocks;
	sp[1].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[2].o)))->F_blocks;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Category_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	frame[1].i = ((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(114);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_n));
	LINE_NUMBER(115);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_cal;
	jint temp1 = (jint)SM_java_util_Arrays_hashCode_Array1_char_R_int(ctx, sp[0].o);
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(116);
	jint temp2 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Category *) NULL_CHECK((frame[0].o)))->F_blocks;
	jint temp3 = (jint)SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(ctx, sp[0].o);
	frame[1].i = (temp2 + temp3);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jchar SM_regexodus_Category_caseFold_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:caseFold", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(407);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_upperToLower;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_containsKey_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean])(ctx, sp[0].o, (frame[0].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(409);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_upperToLower;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_get_char_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_get_char_R_char])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jchar SM_regexodus_Category_caseDown_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:caseDown", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(427);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_upperToLower;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_containsKey_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean])(ctx, sp[0].o, (frame[0].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(429);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_upperToLower;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_get_char_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_get_char_R_char])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jchar SM_regexodus_Category_caseUp_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:caseUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(444);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_lowerToUpper;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_containsKey_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean])(ctx, sp[0].o, (frame[0].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(446);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_lowerToUpper;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_get_char_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_get_char_R_char])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jchar SM_regexodus_Category_matchBracket_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:matchBracket", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(463);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_openBrackets;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_containsKey_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean])(ctx, sp[0].o, (frame[0].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(465);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_openBrackets;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_get_char_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_get_char_R_char])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(467);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_closingBrackets;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_containsKey_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean])(ctx, sp[0].o, (frame[0].i));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(469);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_closingBrackets;
	jint temp0 = (jint)((func_regexodus_ds_CharCharMap_get_char_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_get_char_R_char])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Category_reverseWithBrackets_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:reverseWithBrackets", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(476);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject) createArray(ctx, &class_char, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(477);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	frame[3].i = (jint(0));
	}
label_3:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(478);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[2].i));
	jint temp2 = (jint)SM_regexodus_Category_matchBracket_char_R_char(ctx, temp1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp2;
	LINE_NUMBER(477);
	INST_IINC(2, -1);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_Array1_char_R_java_lang_String(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_regexodus_Category_reverseEqual_java_lang_CharSequence_java_lang_CharSequence_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:reverseEqual", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(485);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(486);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(487);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(488);
	frame[2].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = (temp0 - (jint(1)));
	}
label_7:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(489);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[3].i));
	if (temp0 == temp1) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(488);
	INST_IINC(3, -1);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_regexodus_Category_reverseBracketEqual_java_lang_CharSequence_java_lang_CharSequence_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:reverseBracketEqual", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(496);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(497);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(498);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(499);
	frame[2].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = (temp0 - (jint(1)));
	}
label_7:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(500);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[3].i));
	jint temp2 = (jint)SM_regexodus_Category_matchBracket_char_R_char(ctx, temp1);
	if (temp0 == temp2) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(499);
	INST_IINC(3, -1);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_regexodus_Category(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Category:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Category(ctx);
	{
	LINE_NUMBER(123);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (105));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (57);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (61);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (90);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (71);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (87);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (95);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (104);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (117);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (58);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (66);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (73);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (77);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (96);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (107);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (125);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (127);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (136);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (141);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (149);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (153);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (162);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (185);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (191);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (192);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (193);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (199);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (215);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (251);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (284);
	ARRAY_ACCESS(jint, sp[1].o, (92)) = (349);
	ARRAY_ACCESS(jint, sp[1].o, (93)) = (366);
	ARRAY_ACCESS(jint, sp[1].o, (94)) = (367);
	ARRAY_ACCESS(jint, sp[1].o, (95)) = (378);
	ARRAY_ACCESS(jint, sp[1].o, (96)) = (398);
	ARRAY_ACCESS(jint, sp[1].o, (97)) = (664);
	ARRAY_ACCESS(jint, sp[1].o, (98)) = (670);
	ARRAY_ACCESS(jint, sp[1].o, (99)) = (715);
	ARRAY_ACCESS(jint, sp[1].o, (100)) = (1166);
	ARRAY_ACCESS(jint, sp[1].o, (101)) = (1813);
	ARRAY_ACCESS(jint, sp[1].o, (102)) = (8451);
	ARRAY_ACCESS(jint, sp[1].o, (103)) = (11173);
	ARRAY_ACCESS(jint, sp[1].o, (104)) = (28126);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8" 8i9. \u0083!(#& \" F \u0080 =!\\!$ @(H#(01!v [!N!j-N!>!0 I!\" ,?G 5*0 s +!#!1 & \"\"%!*!#!%(\"## '!U!$ (##!1 & # # #!\" '##!$\"\"'% \"'E+$ * $ 1 & # '!) $ $!\".%!-'& $ +!#!1 & # '!*!#!$'$## '!5+# (\"$ %\"# \" #\"#\"$\"-#'\"$ %!\"%\"-G$. $ 3 D\"+ $ %'# $$%!)'1 $ 3 ) '!* $ %'#'\" %!) #,. $ ? $ (#D!2 $ 5\"6 * \"!&\"\"#( \" +%)!$)`#JK# \" ' 6 \" 3!' \" (!)!%8e <#V < 0 .Kx \"$\"! %!& \" %!X %!; %!& \" %!0 _ %!d!:\"2%Q!(!\u0082\"C'. &*3&F). $ #)R!)%)%/!)%C'4$P+9 -#-#\"\"Y!'*Z#2%,\"b!c J!,%)%/!Eaf#L\"T(B\"0\"B'4!,(4$z {!(!=!(!+ \" \" \" 9!] 0 /!( 7!$ * ,$2$>/#!H .\":/;.p#\u00813,7\u0085!: r M q$L \"$\"!A'#-6&& & & & & & & & l42 C)y6-#O Q!S$4 R h)M \u0088\"\u0084\"@&|5t(w!*WA\")%A(P(-%T*8\"g ,#; @&/!)!S1I+(!(!(&& & B#n!)%\u0087)3#>\u0086~!k<&)'$2 ' \" # # m0}/O!^=/!2%? 7 %#' o#u\"(!(!(!$\"& &,#! "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_C = sp[0].o;
	LINE_NUMBER(128);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (1792);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (6399);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(57344));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\"! "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Co = sp[0].o;
	LINE_NUMBER(133);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (102));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (61);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (57);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (90);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (71);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (87);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (95);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (104);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (117);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (58);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (66);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (73);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (77);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (107);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (125);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (127);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (136);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (141);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (149);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (153);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (178);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (185);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (191);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (193);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (199);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (215);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (241);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (251);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (284);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (349);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (366);
	ARRAY_ACCESS(jint, sp[1].o, (92)) = (378);
	ARRAY_ACCESS(jint, sp[1].o, (93)) = (398);
	ARRAY_ACCESS(jint, sp[1].o, (94)) = (664);
	ARRAY_ACCESS(jint, sp[1].o, (95)) = (670);
	ARRAY_ACCESS(jint, sp[1].o, (96)) = (888);
	ARRAY_ACCESS(jint, sp[1].o, (97)) = (1166);
	ARRAY_ACCESS(jint, sp[1].o, (98)) = (1813);
	ARRAY_ACCESS(jint, sp[1].o, (99)) = (8815);
	ARRAY_ACCESS(jint, sp[1].o, (100)) = (11173);
	ARRAY_ACCESS(jint, sp[1].o, (101)) = (28126);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\u0080!(#& \" D } =![!$ ?(F#(*9 w 7!R,`!M!/ G!\" .>E 5*q +!#!1 & \"\"%!*!#!%(\"## '!U!$ (##!1 & # # #!\" '##!$\"\"'% \"'C+$ * $ 1 & # '!) $ $!\"-%!,'& $ +!#!1 & # '!*!#!$'$## '!5+# (\"$ %\"# \" #\"#\"$\",#'\"$ %!\"%\",E$- $ 2 B\"+ $ %'# $$%!)'1 $ 2 ) '!* $ %'#'\" %!) #.- $ > $ (#B!3 $ 5\"6 * \"!&\"\"#( \" +%)!$)_#9J# \" ' 6 \" 2!' \" (!)!%He <#V < / -Ju \"$\"!| %!& \" %!X %!; %!& \" %!/ ^ %!d!:\"3%P!(!\"A'- &*2&D)- $ #)Q!)%)%/ )%A'4$O+I ,#,#\"\"Y!'*Z#3%.\"b!c 9!.%)%0!Caf#K\"T(7\"/\"7'4!.(4$x y!(!=!(!+ \" \" \" I!\\ / 0!( 8!$ * R ,!F -\":0;-n#~2.8\u0082!: p L o$K \"$\"!@'#,6&& & & & & & & & j43 A)v6,#N P!S$4 Q h)L \u0085\"\u0081\"?&z5r(t!*W@\")%@(O(,%T*H\"g .#; ?&0!)!S1G+(!(!(&& & 7#l!)%\u0084)2#M#\u0083!i<&)'$3 ' \" # # k/{0N!]=0!3%> 8 %#' m!\" s\"(!(!(!$\"& &+'! "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Cn = sp[0].o;
	LINE_NUMBER(138);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (96);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8" !#\""_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Cc = sp[0].o;
	LINE_NUMBER(143);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (173);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (193);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (250);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (467);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (1363);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (2045);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (3884);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(56976));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"( ,$& ) # + . -!'!#!\"%/ *\"!"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Cf = sp[0].o;
	LINE_NUMBER(148);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (2047);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(55296));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"! "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Cs = sp[0].o;
	LINE_NUMBER(153);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (102));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (53);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (88);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (69);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (117);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (61);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (66);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (72);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (74);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (81);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (82);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (83);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (89);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (93);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (94);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (98);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (105);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (107);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (114);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (130);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (132);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (138);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (165);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (191);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (268);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (277);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (332);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (362);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (365);
	ARRAY_ACCESS(jint, sp[1].o, (92)) = (457);
	ARRAY_ACCESS(jint, sp[1].o, (93)) = (470);
	ARRAY_ACCESS(jint, sp[1].o, (94)) = (513);
	ARRAY_ACCESS(jint, sp[1].o, (95)) = (619);
	ARRAY_ACCESS(jint, sp[1].o, (96)) = (1164);
	ARRAY_ACCESS(jint, sp[1].o, (97)) = (2684);
	ARRAY_ACCESS(jint, sp[1].o, (98)) = (6591);
	ARRAY_ACCESS(jint, sp[1].o, (99)) = (8453);
	ARRAY_ACCESS(jint, sp[1].o, (100)) = (11171);
	ARRAY_ACCESS(jint, sp[1].o, (101)) = (20988);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"H0'0N!*!&!%- 5 |&*,#(! !q# $\"\" !'!   ! : g t.u 8\"!'>dK&\"62M$ l !4$($* \"!)! <5I+!0D/$&!%1&!/!#!;;(/`J )a@#!:!(.4,&'\"$\"1 % !#\"#!)!9$  ,$*!.&&$\"1 % $ $ $D\" !J )(   1 % $ ##!:!4$;!+'\"$\"1 % $ ##!C$  4!7! &#  \"#$ ! $#$# #*A!@'   - ,#!B %$C!&'   - . ##!E! $4$7(   >\"!)!% . 0&%)#A ( !\"%S_ $3%S$ ! # A ! . $/!\"# !-\"E!b' =L#p21!)&&\"#!#$( &+3!78 !%!\"2 y \"\"% ! \"\"> \"\"D \"\"% ! \"\"9 R \"\"c[,)W\"&#\"4 0%e''(+ \",),),+  4PM!&!UI(#\"E !%V*5O<\"#+?&0Q-/Gh!k67%R<9$*?B=2 *=\"((2\" 2\" & $#!%vHx\"&\"8\"&\"' ! ! ! 5\"G % !#  %#\"\"&&+%  %Y!9!)+X!&!\". !##'! ! ! \" /\"\"%#&!@$\u00816 6 r'\"#$38 !%!\"Q(!)-/% % % % % % % %f!}$?#%$&W'  i \"%2 j7CF,~\u0082H\u0085#\u0080U^\"w#,*$16)5\"VO(\"X\"G\"(?+   \" -5P,FT&#! $+B*-KL(6<!)# .*# >;  '1-#!#F !#$\"#\"! !0 \"/( 3&\"&\"&/% % 2 3'o5\u00843-&N\u0083{\"m\\%3#%! . + # ! $ $ nZz:T\"@]*Y# s80'0+I#&\"&\"&\" ="_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_L = sp[0].o;
	LINE_NUMBER(158);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (42));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (73);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (136);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (197);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (263);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (290);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (321);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (723);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (2203);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (2685);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (2890);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (22316);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (31054);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8";.>3!(4 ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! \" ! ! ! ! ! ! ! \" ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !#! ! $#! !#!!\"\"!#!!$#!#! ! !#! \" !#!!! !#$ ) \" \" \" ! ! ! ! ! ! ! \" ! ! ! ! ! ! ! ! \" \" !!! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! )#!#\" !\"! ! ! ! B ! $ % & !!! !#!1!)5 \"!$ ! ! ! ! ! ! ! ! ! ! ! ( \" !#\"09 ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! * ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !#! ! ! ! ! ! \" ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! \"/G/! ( D=E6\"!C ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! * ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! *&%'+&%&%'- ! ! ! %&<\",\",\",$-\"A ' $!\"!\" $$& ! ! !\"\"\"+#( : F80 !!\" ! ! !\"! \" %!! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! % ! ' I ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! 2 ! ! ! ! ! ! ! ! ! ! ! ! ! ? ! ! ! ! ! ! $ ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! + ! !#! ! ! ! ' ! \" ! $ ! ! ! ! ! ! ! ! ! !$!$! ! ! ! ! $ !\"! 7 H.@"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Lu = sp[0].o;
	LINE_NUMBER(163);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (51));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (97);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (103);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (120);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (136);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (165);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (194);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (275);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (761);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (822);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (1066);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (2179);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (2732);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (2888);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (20289);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (30996);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"D-@ ,3!&! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !#! ! ! ! ! ! ! !#! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! \" ! !!\" ! \" $#% \" $!\" \" ! ! \" !#! \" $ ! \"#\"!& \" \" ! ! ! ! ! ! ! !#! ! ! ! ! ! ! ! !#\" ! $ ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !(\" \"#! % ! ! ! !B!4I ! $ $!1 .6!#$!! ! ! ! ! ! ! ! ! ! ! !$! \" \"#><! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! / ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! \" ! ! ! ! ! !#! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! =8P,\"!K%N)F9A0!5E ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !)! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !)'%*&'&'%*&'&'+\"&'&'&'$!#& $!!#'\"\"#'&*!!#J $#$ . % % \"#'\"% ? O;\" $#! ! ! % !#!%( ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !#) ! % +7! ( R ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! 2 ! ! ! ! ! ! ! ! ! ! ! ! ! G ! ! ! ! ! !!! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !&! ! \" ! ! ! ! % ! \" !!! ! ! ! ! ! ! ! ! ! ( ( ! ! ! ! ! $ % ! : $ L,())CQ(+$M-H"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Ll = sp[0].o;
	LINE_NUMBER(168);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (453);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (7574);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"( \" \" & )!#!#!$ % ' "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Lt = sp[0].o;
	LINE_NUMBER(173);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (58));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (470);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (81);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (94);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (96);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (98);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (104);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (108);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (109);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (112);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (115);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (122);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (128);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (138);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (165);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (175);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (192);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (231);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (242);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (270);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (271);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (329);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (465);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (479);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (566);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (612);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (688);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (690);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (1237);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (1251);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (1755);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (3040);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (21511);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (28439);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"R)\",.#& $ D % O I F!K!\" 3 ' # M T C P V > Q N\"G8( 45S ( )-W!J H * 6#% <!:$Y U\"L A 2!B&9 1 @!* 0 E ? /!=+' X 7!;"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Lm = sp[0].o;
	LINE_NUMBER(178);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (99));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (53);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (114);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (69);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (170);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (61);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (66);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (67);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (74);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (88);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (89);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (93);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (98);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (104);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (105);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (106);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (107);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (117);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (146);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (177);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (209);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (257);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (267);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (328);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (362);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (365);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (513);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (552);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (619);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (828);
	ARRAY_ACCESS(jint, sp[1].o, (92)) = (1083);
	ARRAY_ACCESS(jint, sp[1].o, (93)) = (1142);
	ARRAY_ACCESS(jint, sp[1].o, (94)) = (3064);
	ARRAY_ACCESS(jint, sp[1].o, (95)) = (6591);
	ARRAY_ACCESS(jint, sp[1].o, (96)) = (8453);
	ARRAY_ACCESS(jint, sp[1].o, (97)) = (11171);
	ARRAY_ACCESS(jint, sp[1].o, (98)) = (20988);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"U!2!s!%\"r!{J%\"98 )V$ h !0$* \"!+! 73e-!0?./E6'1P< +^G#!;!')+4%,\"$\"/ & !#\"#!+!4$  ($*!)%%$\"/ & $ $ $?\" !< +'   / & $ ##!;!2$6!-,\"$\"/ & $ ##!8$  2!5! %#  \"#$ ! $#$# #*=!G,   . (#!> &$8!%,   . ) ##!@! $2$5'   C\"!+!& ) 0%&+#= ' !\"&\\Z $:%]$ ! # = ! ) $1!\"#6\"@!_, BK#mD/!+%%\"#!#$' %-:!Iu \"\"& ! \"\"C \"\"? \"\"& ! \"\"4 R \"\"aW(Iz\"2 0&c,,'- \"(+(+(-  2NL!HA O'#\"@ !&T*3M7\"#-E%0Q.1Oq95&R74$*E>BD *7I\" % $#!|\"~Q0.1& & & & & & & &y!P!%d)! f%!&D g58F(x`\u0082#< }HX)t%(*$b!MTU!i!#&   \" .3N(FS%#! $->*.JK'99#\"'*# C6  ,/( %#!#F !#$\"#\"! !0$#1'!(%\"%\"%1& &pA3\u0081:.%[\u0080w\"jH! ) - # ! $ $ lAv;S\"GL*n# ok) Y\"3#%\"%\"%\" B"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Lo = sp[0].o;
	LINE_NUMBER(183);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (54));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (165);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (53);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (77);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (82);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (135);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (138);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (193);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (194);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (207);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (262);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (277);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (673);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (822);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (1034);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (2179);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (2684);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (2840);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (20289);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (30995);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"5)&)A\"90 2 J !$K :I!!(#  \"&\"   \" / E H,7 *8<S* \"%\"!+! NF!$Q''+! 53B- ;6M!$!*!$!& \" \" \" 2!? % \"#  %#!!$$-%  %L\"$\"!, \"##&\" \" \" ! $$\"!!%#$\"@(R4 4 1!6&!#(.* \"%\"U=/1GC 0#! >!'3(#\"O+%''DT%.#P)&)7"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Lc = sp[0].o;
	LINE_NUMBER(188);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (87));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (57);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (58);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (120);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (71);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (73);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (75);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (81);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (84);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (92);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (97);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (99);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (101);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (106);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (111);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (119);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (142);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (153);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (199);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (220);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (237);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (264);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (273);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (276);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (464);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (555);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (704);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (721);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (738);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (768);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (947);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (3071);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (20273);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (30165);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"rcl&j? ! \" \" !Y'47/!a&#%#\" #J!*9]'R)'!G# )   $? D3 <P  / &(\"0 +! &#\"# '!(\":!# +! $%\"# $!*\"$!- +! ,    E\"F%  +! &#\"# ) (\"*!S$$  #'!L$C&   #)\"-\"0 +! &   #)\"-\"H#Q\" &   #'!(\"0 X!%% ! ,1\"T!#&.,_!#)-%Z\";! ! !%\"O1 \"&' ='!`18#%   #&$#3( !(#o s 0 0\"*\"V*'!@ D\"=!d(%(h$C2 ;#!46U$A6>). *-+.41f  7%!,!# g+ $p<t e!^*n%b\"v# 2I\"[\"k!$!%!8$%!\\\"B/:/3!>,9-N#A.K!W..!2\"@ B!  #\"&\" !M$&\"i, \"u!q5/5m"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_M = sp[0].o;
	LINE_NUMBER(193);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (82));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (58);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (57);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (73);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (120);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (75);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (81);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (91);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (92);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (97);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (99);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (103);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (108);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (111);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (119);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (142);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (152);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (153);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (199);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (220);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (239);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (266);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (273);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (276);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (464);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (555);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (704);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (721);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (738);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (768);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (947);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (3071);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (20273);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (30165);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"m]g%e;! !\"!\"! >(3A0 Z&#$#\"!#F -2W(.*( C#!*!!!%;!?5!-< ! $'$ %&6\"/ . $#) 1\"8 #\"4 $\"$\"#!% -\"% +\"4 $%!\"$ 1\"B$! . # !#) *\"+\"- P , N % 4!&!!#*\"+\"/ . # ' &\"1\"E\"4\"$#) 1\"/ > *!! V #&,'Y #*+$T\"D ! ! <,!%!\"&(!:( [#!$!\"#\"2\"$!0#5 #\"' @ j!n!/!/\"-\"R\"!&) #(( K!?\": ^!$\"( '!c\"# . !&! ! #'')# 3,!\"Q#3 !%! & I*,\"9##\"!!= !\"% !!.'#\"a!!+!&$ ' %\"b=!%k+$ %6o!_ X-i#\\\"q $)9\"U\"f % $ 2\"& `\"805 G'2(L!3 ###\"H S$#\"#\", ) M O !!#\"&\"! J\") d # $ p l707h"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Mn = sp[0].o;
	LINE_NUMBER(198);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (1160);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (1567);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (5685);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(34188));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"$\"&!%#  ' "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Me = sp[0].o;
	LINE_NUMBER(203);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (49));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (172);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (61);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (67);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (76);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (89);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (103);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (110);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (111);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (143);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (146);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (225);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (238);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (331);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (347);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (1818);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (2307);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (4919);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (21523);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (30708);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"M!=!#\"*#\" 0 &\"% # '!/!&\"@!&\"*!\" < &!\"!% # '!C \" (\"\"\"'!8\",#, &!\"(# \" - / &\")\"\"\"'!9 A\"%%4 J ?!1 $!%!# 6 '\"#). #$#!'\"L!2%\" K##\"$ \"$H &!\"!-!\" *$G!+!)!\"(\" ,!7!$ #!>!#\"\"!( +%* 1!.!N P #!B 03F ;!+ $ #\"E # 5!:!\"!D!# )!I \" \" \"!O"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Mc = sp[0].o;
	LINE_NUMBER(208);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (65));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (119);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (199);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (71);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (87);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (135);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (97);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (104);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (105);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (109);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (110);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (111);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (121);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (129);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (139);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (155);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (166);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (183);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (189);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (230);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (240);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (269);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (301);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (321);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (344);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (407);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (413);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (631);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (720);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (727);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (778);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (882);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (1047);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (1386);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (1442);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (21271);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (29537);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"= H1'#%$^ 0 ( V & !!D & & %!F3G  'B C'*5E A & .,Q . X,[$P \" - R I2L \" M / 0 \" \\#)!\" (>%)Y?@6W8]#Z#7*4$T%J 9\"$+: <+` N S!K ; ( - / U _ O"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_N = sp[0].o;
	LINE_NUMBER(213);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (24));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (119);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (71);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (87);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (135);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (199);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (97);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (129);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (167);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (183);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (230);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (279);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (301);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (407);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (413);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (679);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (1575);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (1863);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (21271);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (jint(35271));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8") 4 & ' 2 ! ! ! ! ! ! ! ! ! * ! $ / $ 5 # 0 + , \" - % & \" 7 3 # ' ( % 1 6 ."_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Nd = sp[0].o;
	LINE_NUMBER(218);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (13));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (2672);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (3711);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (5870);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (22800);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (30380);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"* ('!!)\"&#% ,$+"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Nl = sp[0].o;
	LINE_NUMBER(223);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (41));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (121);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (139);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (178);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (199);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (218);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (377);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (434);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (481);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (631);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (727);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (1078);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (1140);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (1173);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (1386);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (1686);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (2358);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (22474);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (30065);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"9($ %#F\"<\"6#7$;$,*=!A-B!> E )\"&!:+3 @45.?/D C%8!0&#'1!2'H\"G"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_No = sp[0].o;
	LINE_NUMBER(231);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (11));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (128);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (2432);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (4001);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (5600);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"% ' * (#$!\" & ) "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Z = sp[0].o;
	LINE_NUMBER(236);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (9));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (128);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (2432);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (4001);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (5600);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\" % ( &!# $ ' "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Zs = sp[0].o;
	LINE_NUMBER(241);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8232);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"! "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Zl = sp[0].o;
	LINE_NUMBER(246);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8233);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"! "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Zp = sp[0].o;
	LINE_NUMBER(251);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (92));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (72);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (75);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (91);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (80);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (87);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (98);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (99);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (103);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (112);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (113);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (121);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (122);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (125);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (127);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (129);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (141);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (144);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (150);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (152);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (154);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (156);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (158);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (169);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (172);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (173);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (209);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (217);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (234);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (250);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (262);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (270);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (314);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (368);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (381);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (391);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (404);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (431);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (467);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (613);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (622);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (634);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (703);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (764);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (829);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (1086);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (20819);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (29699);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"3!!$!#%\"&\"/!! 0 ! @ ) & %\"& & v ' r$B\"G ! # # 5\"-\"!\"+ #\"7#S C(h!H+2 j\"% \\ W X o ( m 8 %\"c+! 4#6 7&$\"T$d s:_ t 5\"M!6\"b!!!4;l\"g\"[)!$e)a#I&J\"L9* x.'=!*!%1\"<\"u#>\"y(N\"2'p-K#3\"w#!\"U ]D!1# q!$'#%, ( Q 8 {\"k!R % V$n#O\"A!! F\"E P*,\"Y#Z\",\"i z\"f'.?!(! $ !\"^!!$!#%\"&\"/!! 0 ! !)`"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_P = sp[0].o;
	LINE_NUMBER(256);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (20));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (112);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (170);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (242);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (476);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (1030);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (1373);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (2058);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (3586);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (3650);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (jint(52625));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"( / ) 2 . 0\"1 # &!\" - % * 3!' $ + ,"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Pd = sp[0].o;
	LINE_NUMBER(261);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (29));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (81);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (171);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (216);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (405);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (454);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (635);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (1062);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (1087);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (1887);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (2431);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (3775);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (jint(52514));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8". % $ ; ! 9 : \" - / & 6 ! * 8 ! ! ! ! ! ! 1 + ! ! ! ! 4 ! ! ! ! ! ! ! ! ! ! 0 ! , 7 ! ! ! ( 5 ! ! ! ! \" ! ! ! # < 3 ) ! ! ! ! ! ! ! \" ' ! ! 2 % $ \" # "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Ps = sp[0].o;
	LINE_NUMBER(266);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (11));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (171);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (3529);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (8045);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"( * !\"! ' ) # % ! & $ "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Pi = sp[0].o;
	LINE_NUMBER(271);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (28));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (81);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (171);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (218);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (405);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (480);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (635);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (1062);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (1087);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (1887);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (2474);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (3774);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (jint(52511));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"- % $ : ! 8 9 . ' 5 ! * 7 ! ! ! ! ! ! 0 + ! ! ! ! 3 ! ! ! ! ! ! ! ! ! ! / ! , 6 ! ! ! 4 ! ! ! ! # ! ! ! \"&; 2 ) ! ! ! ! ! ! ! # ( ! ! 1 % $ \" \" "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Pe = sp[0].o;
	LINE_NUMBER(276);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (187);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (3529);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (8030);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' ) ! & ( \" $ # % ! "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Pf = sp[0].o;
	LINE_NUMBER(281);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (9));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (95);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (240);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (8160);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(56799));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"% '!# (!$\"& "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Pc = sp[0].o;
	LINE_NUMBER(286);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (79));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (75);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (113);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (125);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (58);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (69);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (72);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (87);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (91);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (98);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (103);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (112);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (121);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (122);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (127);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (129);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (141);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (144);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (150);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (154);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (156);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (158);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (169);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (172);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (173);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (190);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (217);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (234);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (250);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (262);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (270);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (314);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (368);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (381);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (391);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (431);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (467);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (613);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (703);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (774);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (835);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (3227);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (21029);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (29699);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"9!!!# ! !\"&\"$\"0 F ) 6\"' i ( g%= 1 # # ?\"/\"!\", #\"2#L >-^!1,8 `\"& S O P e - c I &\"Y,! 3 2$%\"M%Z h'j 4!G\"X!!!;%!#b\"]\"R)!%[)W#C$D\"E*+ k\"(*('###!$5! !(l#!\"3 T\"%!# #'!\"! #\"&$!(##! !+# f!B \\ n\"a!K & N%d#H\"<!! A\"@ J+.\"4#Q\".\"_ m)# 7 /\"##$!!#'!* !\"U!!!# ! !\"&\"$\"0 : #\"V"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Po = sp[0].o;
	LINE_NUMBER(291);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (95));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (104);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (158);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (198);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (70);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (77);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (82);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (88);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (92);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (101);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (113);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (118);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (119);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (127);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (130);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (131);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (133);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (137);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (140);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (155);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (194);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (207);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (208);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (213);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (226);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (230);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (244);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (246);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (248);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (251);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (267);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (319);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (354);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (357);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (358);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (366);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (373);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (375);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (402);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (459);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (499);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (570);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (571);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (574);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (615);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (724);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (753);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (1089);
	ARRAY_ACCESS(jint, sp[1].o, (92)) = (6593);
	ARRAY_ACCESS(jint, sp[1].o, (93)) = (20414);
	ARRAY_ACCESS(jint, sp[1].o, (94)) = (22161);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"; ' 4!2 ! 1 ! ;-!\"# !## - * 2 s#++%%! !,V 0\"U ^ j!W!# #\"a ( 5\"h 3\"t\"'\"g X Z'[ b F > `!, !!#$? ! ! \\'!$!\"%#>\"z)y o m =:l).3{ !!/!&!&!&\"O & E!&!5*N\"!#!\"( !!%$! ! ! $ /\"$-%#! K\"$q$1#iA.QP7xGI#9(r7L$*#p#*!<e$n\"H@!R+cB() &\"+ 6\"'\"S\"f\"$):C89/8) ,*(D,k|M~Ju6.\"<\"=#(#w!d 0\"} ]0v\"T !!# _ ' 4!2 ! 1 ! Y%!%&\"!"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_S = sp[0].o;
	LINE_NUMBER(296);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (46));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (257);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (69);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (91);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (112);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (130);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (132);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (140);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (165);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (267);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (337);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (470);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (528);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (767);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (825);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (6716);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (jint(53213));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"; *!( ! < # 9 ' J I!L ) ,!)!D ,%& ?%.$# \" \" / '$\" ! 'F8$@ +6:#H 0 >&A G%\"712-B5(#+\"-=4\"#M K !!E *!( ! C &\"3"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Sm = sp[0].o;
	LINE_NUMBER(301);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (22));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (499);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (109);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (124);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (126);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (155);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (220);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (246);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (264);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (582);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (1258);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (2245);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (2460);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (21956);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (jint(34681));
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"( +#1 * \"!\"!% . / 0 3 2'5 4 ) , -!$!&"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Sc = sp[0].o;
	LINE_NUMBER(306);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (28));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (72);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (94);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (104);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (118);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (163);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (522);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (893);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (977);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (4253);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (7224);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (20551);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (30308);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"1 ! 0 * ) ( 5'&&%%! !-3 $\"9 !!,!#!#!#\"8\";.+\"2\"7 $\":$6 ! 4 /"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Sk = sp[0].o;
	LINE_NUMBER(311);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (84));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (53);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (77);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (80);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (82);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (88);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (104);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (110);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (128);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (131);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (133);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (158);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (166);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (182);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (198);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (207);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (208);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (213);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (230);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (247);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (248);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (255);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (267);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (269);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (319);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (337);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (354);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (358);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (374);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (392);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (487);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (513);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (516);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (574);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (723);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (724);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (753);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (866);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (978);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (1412);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (6593);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (21380);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (22161);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"U # $ ! o _\"P\"X ' :\"] i e Q$! R Y A f!* !!#$; ! ! S%!$!\"(#W\"m&l k T5c&).p\"!#!\"' !\"%$! ! ! $ /\"8 !\"! F\")-##!\"!\"!(!,#\"! !,`%$9#(#K!+3@%I3)LJ<V!.!D&O!\\CBH^h72\"%6#4!N[$d\"7=!M0Z>'& 1\"0 2\"%\"b\"$&5?+,/+& *4'6*aqGsEn#'\"! j!r g - $\"1\"!"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_So = sp[0].o;
	LINE_NUMBER(320);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (110));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (53);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (57);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (58);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (69);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (73);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (88);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (66);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (72);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (74);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (75);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (77);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (82);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (83);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (89);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (93);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (101);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (105);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (107);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (114);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (115);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (122);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (128);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (132);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (138);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (165);
	ARRAY_ACCESS(jint, sp[1].o, (92)) = (249);
	ARRAY_ACCESS(jint, sp[1].o, (93)) = (268);
	ARRAY_ACCESS(jint, sp[1].o, (94)) = (282);
	ARRAY_ACCESS(jint, sp[1].o, (95)) = (321);
	ARRAY_ACCESS(jint, sp[1].o, (96)) = (332);
	ARRAY_ACCESS(jint, sp[1].o, (97)) = (362);
	ARRAY_ACCESS(jint, sp[1].o, (98)) = (365);
	ARRAY_ACCESS(jint, sp[1].o, (99)) = (457);
	ARRAY_ACCESS(jint, sp[1].o, (100)) = (470);
	ARRAY_ACCESS(jint, sp[1].o, (101)) = (619);
	ARRAY_ACCESS(jint, sp[1].o, (102)) = (631);
	ARRAY_ACCESS(jint, sp[1].o, (103)) = (727);
	ARRAY_ACCESS(jint, sp[1].o, (104)) = (1133);
	ARRAY_ACCESS(jint, sp[1].o, (105)) = (1164);
	ARRAY_ACCESS(jint, sp[1].o, (106)) = (6591);
	ARRAY_ACCESS(jint, sp[1].o, (107)) = (8453);
	ARRAY_ACCESS(jint, sp[1].o, (108)) = (11171);
	ARRAY_ACCESS(jint, sp[1].o, (109)) = (20988);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"6')3$\" 36\")& \"#&   5 7 \u0083$+-#)\" \"1V &!! \"(\"   \" 2 k z #!{ ;!\"(<'\\ \" & & \"'D$!7*%S$p (!' 1!\"0O!o-K$\"!\"!H2?$*L> 0,/ w!' 1 (!&!4 % \"#!!)!&!!'\"$& #!+!$!\" \"!  $$&!4 % & & &!\" #$&! #\")! \")-,  )   4 % & #!'    !\"=!!'*%   (!&!4 % & #!)!&! ) $& #!' %+& $#  !#& \" &#&# #+$##  !!\"(\"-,/,   5 -#(   !)&  %!!''% ! (   5 ' #!)   !)&)\" !!' &/,   J   #%-!1 $   0#9 ) \"!%#\"$$ \" (('!&/N%/ '<& \" # 9 \" 5!# \" $!'!!A\"W&(2 \" \" \"$' :$2 0 :*\"OS(i!; \"%\"!8 \u0080 !!% \" !!< !!Y !!% \" !!/ ` !!d! *2#-0T!$#\u0085!= 3%g#*), %,>,2.,   &.l#\"$&!'('1 !'(U)8%R+7 +$++F!#,G$3(*B?$b E!*('/\"'. &Ph$'1).u.M''#6!))8! 0  B%| ~!$!;!$!( \" \" \" 7!C % \"#  %#!!$$,%  %V&!$%*(,C,$\"#+1\"$\"!' \"##(\" \" \" ! *!!%#$\" N\u0087aj4\u0086X\u0088I I x()*\"!; \"%\"!M)\"=9*% % % % % % % % @6\"\u0084 D/ #!#$T!&!  m !%8 n#!+@^-A'@( /A'</\u008aQ\u008d#\u0089eH!}#?4]$' tB)!q!C!)GJ$\"#$+_.R+'(9#\" 6!:.E#P-*(7 L*.!'(5#f3 !-!#+$!$!$*% % 8 .(v &!'(\u008c.5$6\u008b\u0082!rF%.#%+ , # \" & & sZ\u00812c!K[+$-0-Q# y>')3(3,U#$!$!$! :"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Word = sp[0].o;
	LINE_NUMBER(327);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (111));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (53);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (57);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (58);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (69);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (73);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (88);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (66);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (67);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (72);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (74);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (75);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (77);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (82);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (83);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (89);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (93);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (101);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (105);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (107);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (114);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (115);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (122);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (128);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (132);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (138);
	ARRAY_ACCESS(jint, sp[1].o, (92)) = (165);
	ARRAY_ACCESS(jint, sp[1].o, (93)) = (249);
	ARRAY_ACCESS(jint, sp[1].o, (94)) = (268);
	ARRAY_ACCESS(jint, sp[1].o, (95)) = (282);
	ARRAY_ACCESS(jint, sp[1].o, (96)) = (321);
	ARRAY_ACCESS(jint, sp[1].o, (97)) = (332);
	ARRAY_ACCESS(jint, sp[1].o, (98)) = (362);
	ARRAY_ACCESS(jint, sp[1].o, (99)) = (365);
	ARRAY_ACCESS(jint, sp[1].o, (100)) = (457);
	ARRAY_ACCESS(jint, sp[1].o, (101)) = (470);
	ARRAY_ACCESS(jint, sp[1].o, (102)) = (619);
	ARRAY_ACCESS(jint, sp[1].o, (103)) = (631);
	ARRAY_ACCESS(jint, sp[1].o, (104)) = (727);
	ARRAY_ACCESS(jint, sp[1].o, (105)) = (1133);
	ARRAY_ACCESS(jint, sp[1].o, (106)) = (1164);
	ARRAY_ACCESS(jint, sp[1].o, (107)) = (6591);
	ARRAY_ACCESS(jint, sp[1].o, (108)) = (8453);
	ARRAY_ACCESS(jint, sp[1].o, (109)) = (11171);
	ARRAY_ACCESS(jint, sp[1].o, (110)) = (20988);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\")&.'\"*')/$\" /$E!!$\")% \"#%   5 9 \u0084$-,#)\" \"3v %!! \"(\"   \" 2 k { #!| ;!\"(<(\" Y \" % % \"'?$!/\"$+&R$p (!' 3!\"1O!o,K$\"!72@$+L> 1*0 x!' 3 (!%!4 & \"#!!)!%!!'\"$% #!2 % \"!  $$%!4 & % % %!\" #$%! #\")! \"),*  )   4 & % #!'    !\"=!!' \")&   (!%!4 & % #!)!%! ) $% #!' &-% $#  !#% \" %#%# #-$##  !!\"(\",*(\"(*   5 ,#(   !)%  &!!''& ! (   5 ' #!)   !)%)\" !!' %0*   I   #&,!3 $   1#8 ) \"!&#\"$$ \" (('!%0N$, '<% \" # 8 \" 5!# \" $!'!!B\"U%(2 \" \" \"$' C$2 1 C+\"OR(i!; \"&\"!6 \u0081 !!& \" !!< !!E !!& \" !!0 ^ !!c! +2#,1S!$#\u0086!= /&g#+)* &*>*2.*   %.l#\"# !'('3 !'(T)6&Q-9 -$--F!#*G$/(+D@$` A!+('0\"'. %Ph$'3).u.M''#7!))6! 1  D&} !$!;!$!( \" \" \" 9!J & \"#  &#!!$$*&  &d%>\"A%!$&+(*#:1*$\"#-3\"$\"!' \"##(\" \" \" ! +!!&#$\" N\u0088_j4\u0087V\u0089H H y()+\"!; \"&\"!M)\"=8+& & & & & & & & :7\"\u0085 ?0 #!#$S!%!  m !&6 n#!-:\\,B':( 0B'<0\u0080\u008bb\u008e#\u008aeZ!~#@4[$' tD)!q!J!)GI$\"#$!\")].Q-'(8#\" 7!C.A#P,+(9 L+.!'(5#f/ !,!#-$!$!$+& & 6 .(w %!'(\u008d.5$7\u008c\u0083!rF&.#&- * # \" % % sW\u00822a!KX*#,1,#%/ ?\"(# z)\"*')/$\" /*T#$!$!$! #%#%/"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Identifier = sp[0].o;
	LINE_NUMBER(334);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (102));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (36);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (88);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (53);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (67);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (61);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (66);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (69);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (74);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (81);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (82);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (83);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (89);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (93);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (94);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (98);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (105);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (107);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (114);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (130);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (132);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (138);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (165);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (191);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (268);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (277);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (332);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (362);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (365);
	ARRAY_ACCESS(jint, sp[1].o, (92)) = (457);
	ARRAY_ACCESS(jint, sp[1].o, (93)) = (470);
	ARRAY_ACCESS(jint, sp[1].o, (94)) = (513);
	ARRAY_ACCESS(jint, sp[1].o, (95)) = (619);
	ARRAY_ACCESS(jint, sp[1].o, (96)) = (1164);
	ARRAY_ACCESS(jint, sp[1].o, (97)) = (2680);
	ARRAY_ACCESS(jint, sp[1].o, (98)) = (6591);
	ARRAY_ACCESS(jint, sp[1].o, (99)) = (8453);
	ARRAY_ACCESS(jint, sp[1].o, (100)) = (11171);
	ARRAY_ACCESS(jint, sp[1].o, (101)) = (20988);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"F!4+%! +5\"%!/!%!&- 8 |%/,#'! !q# $\"\" !(!   ! ; f t0u ?\"!(5(!K=%\"+!23F$ k !1$'$/ \"!*! 48L)!+C.$%!#<%!.!#!AA'.^@ *_P#!;!'01,%(\"$\"2 & !#\"#!*!:$  ,\"'$0%%$\"2 & $ $ $C\" !@ *'   2 & $ ##!;!1$1!'!)(\"$\"2 & $ ##!>$  1!7! %#  \"#$ ! $#$# #/<!N!)(   - ,#!B &$>!%(   - 0 ##!D! $1$7'   5\"!*!& 0 +%&*#< ' !\"&R[ $)(R$ ! # < ! 0 $.!\"# !-\"D!`( EM#p32!*%%\"#!#$' %)6!7? !&!\"3 y \"\"& ! \"\"5 \"\"C \"\"& ! \"\": Q \"\"aX,*V\"%#\"1 +&c#.') \",*,*,)  1OF!#$UL'#\"D !&b/8]4\"#)G%+J-.Ig!j97&Q4:$/GBE3 /E\"''3\" 3\" % $#!&vKx\"%\"?\"%\"( ! ! ! 8\"I & !#  &#\"\"%%)&  &T$@!4!:!*)#>T!%!\"0 !##(! ! ! \" .\"\"&#%!75\u00819 9 r(\"#$6? !&!\"J'!*-.& & & & & & & &e!} =''#\"#%V(  h \"&3 i7>H,~\u0082K\u0085#\u0080UZ\"w#,/$29*8\"d5'\"l\"I\"'G)   \" --!'O,HS%#! $)B/-=M'94!*# 0/# 5A  (2-#!#H !#$\"#\"! !+ \".' 6%\"%\"%.& & 3 6(o8\u00846-%\\\u0083{\"mY&6#&! 0 ) # ! $ $ nWz;S\"PN)J$+ =!(# s'!4+%! +)L#%\"%\"%\" #$#$+"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_IdentifierStart = sp[0].o;
	LINE_NUMBER(341);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (111));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (25);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (17);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (18);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (21);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (22);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (42);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (31);
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (26);
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (28);
	ARRAY_ACCESS(jint, sp[1].o, (34)) = (33);
	ARRAY_ACCESS(jint, sp[1].o, (35)) = (35);
	ARRAY_ACCESS(jint, sp[1].o, (36)) = (38);
	ARRAY_ACCESS(jint, sp[1].o, (37)) = (32);
	ARRAY_ACCESS(jint, sp[1].o, (38)) = (39);
	ARRAY_ACCESS(jint, sp[1].o, (39)) = (43);
	ARRAY_ACCESS(jint, sp[1].o, (40)) = (46);
	ARRAY_ACCESS(jint, sp[1].o, (41)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (42)) = (52);
	ARRAY_ACCESS(jint, sp[1].o, (43)) = (53);
	ARRAY_ACCESS(jint, sp[1].o, (44)) = (54);
	ARRAY_ACCESS(jint, sp[1].o, (45)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (46)) = (57);
	ARRAY_ACCESS(jint, sp[1].o, (47)) = (58);
	ARRAY_ACCESS(jint, sp[1].o, (48)) = (64);
	ARRAY_ACCESS(jint, sp[1].o, (49)) = (69);
	ARRAY_ACCESS(jint, sp[1].o, (50)) = (73);
	ARRAY_ACCESS(jint, sp[1].o, (51)) = (85);
	ARRAY_ACCESS(jint, sp[1].o, (52)) = (88);
	ARRAY_ACCESS(jint, sp[1].o, (53)) = (24);
	ARRAY_ACCESS(jint, sp[1].o, (54)) = (29);
	ARRAY_ACCESS(jint, sp[1].o, (55)) = (34);
	ARRAY_ACCESS(jint, sp[1].o, (56)) = (41);
	ARRAY_ACCESS(jint, sp[1].o, (57)) = (44);
	ARRAY_ACCESS(jint, sp[1].o, (58)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (59)) = (47);
	ARRAY_ACCESS(jint, sp[1].o, (60)) = (49);
	ARRAY_ACCESS(jint, sp[1].o, (61)) = (51);
	ARRAY_ACCESS(jint, sp[1].o, (62)) = (56);
	ARRAY_ACCESS(jint, sp[1].o, (63)) = (59);
	ARRAY_ACCESS(jint, sp[1].o, (64)) = (62);
	ARRAY_ACCESS(jint, sp[1].o, (65)) = (63);
	ARRAY_ACCESS(jint, sp[1].o, (66)) = (65);
	ARRAY_ACCESS(jint, sp[1].o, (67)) = (66);
	ARRAY_ACCESS(jint, sp[1].o, (68)) = (67);
	ARRAY_ACCESS(jint, sp[1].o, (69)) = (68);
	ARRAY_ACCESS(jint, sp[1].o, (70)) = (72);
	ARRAY_ACCESS(jint, sp[1].o, (71)) = (74);
	ARRAY_ACCESS(jint, sp[1].o, (72)) = (75);
	ARRAY_ACCESS(jint, sp[1].o, (73)) = (77);
	ARRAY_ACCESS(jint, sp[1].o, (74)) = (79);
	ARRAY_ACCESS(jint, sp[1].o, (75)) = (82);
	ARRAY_ACCESS(jint, sp[1].o, (76)) = (83);
	ARRAY_ACCESS(jint, sp[1].o, (77)) = (89);
	ARRAY_ACCESS(jint, sp[1].o, (78)) = (93);
	ARRAY_ACCESS(jint, sp[1].o, (79)) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (80)) = (101);
	ARRAY_ACCESS(jint, sp[1].o, (81)) = (102);
	ARRAY_ACCESS(jint, sp[1].o, (82)) = (105);
	ARRAY_ACCESS(jint, sp[1].o, (83)) = (107);
	ARRAY_ACCESS(jint, sp[1].o, (84)) = (114);
	ARRAY_ACCESS(jint, sp[1].o, (85)) = (115);
	ARRAY_ACCESS(jint, sp[1].o, (86)) = (116);
	ARRAY_ACCESS(jint, sp[1].o, (87)) = (122);
	ARRAY_ACCESS(jint, sp[1].o, (88)) = (128);
	ARRAY_ACCESS(jint, sp[1].o, (89)) = (132);
	ARRAY_ACCESS(jint, sp[1].o, (90)) = (134);
	ARRAY_ACCESS(jint, sp[1].o, (91)) = (138);
	ARRAY_ACCESS(jint, sp[1].o, (92)) = (165);
	ARRAY_ACCESS(jint, sp[1].o, (93)) = (249);
	ARRAY_ACCESS(jint, sp[1].o, (94)) = (268);
	ARRAY_ACCESS(jint, sp[1].o, (95)) = (282);
	ARRAY_ACCESS(jint, sp[1].o, (96)) = (321);
	ARRAY_ACCESS(jint, sp[1].o, (97)) = (332);
	ARRAY_ACCESS(jint, sp[1].o, (98)) = (362);
	ARRAY_ACCESS(jint, sp[1].o, (99)) = (365);
	ARRAY_ACCESS(jint, sp[1].o, (100)) = (457);
	ARRAY_ACCESS(jint, sp[1].o, (101)) = (470);
	ARRAY_ACCESS(jint, sp[1].o, (102)) = (619);
	ARRAY_ACCESS(jint, sp[1].o, (103)) = (631);
	ARRAY_ACCESS(jint, sp[1].o, (104)) = (727);
	ARRAY_ACCESS(jint, sp[1].o, (105)) = (1133);
	ARRAY_ACCESS(jint, sp[1].o, (106)) = (1164);
	ARRAY_ACCESS(jint, sp[1].o, (107)) = (6591);
	ARRAY_ACCESS(jint, sp[1].o, (108)) = (8453);
	ARRAY_ACCESS(jint, sp[1].o, (109)) = (11171);
	ARRAY_ACCESS(jint, sp[1].o, (110)) = (20988);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\")&.'\"*')/$\" /$E!!$\")% \"#%   5 9 \u0084$-,#)\" \"3v %!! \"(\"   \" 2 k { #!| ;!\"(<(\" Y \" % % \"'?$!/\"$+&R$p (!' 3!\"1O!o,K$\"!72@$+L> 1*0 x!' 3 (!%!4 & \"#!!)!%!!'\"$% #!2 % \"!  $$%!4 & % % %!\" #$%! #\")! \"),*  )   4 & % #!'    !\"=!!' \")&   (!%!4 & % #!)!%! ) $% #!' &-% $#  !#% \" %#%# #-$##  !!\"(\",*(\"(*   5 ,#(   !)%  &!!''& ! (   5 ' #!)   !)%)\" !!' %0*   I   #&,!3 $   1#8 ) \"!&#\"$$ \" (('!%0N$, '<% \" # 8 \" 5!# \" $!'!!B\"U%(2 \" \" \"$' C$2 1 C+\"OR(i!; \"&\"!6 \u0081 !!& \" !!< !!E !!& \" !!0 ^ !!c! +2#,1S!$#\u0086!= /&g#+)* &*>*2.*   %.l#\"# !'('3 !'(T)6&Q-9 -$--F!#*G$/(+D@$` A!+('0\"'. %Ph$'3).u.M''#7!))6! 1  D&} !$!;!$!( \" \" \" 9!J & \"#  &#!!$$*&  &d%>\"A%!$&+(*#:1*$\"#-3\"$\"!' \"##(\" \" \" ! +!!&#$\" N\u0088_j4\u0087V\u0089H H y()+\"!; \"&\"!M)\"=8+& & & & & & & & :7\"\u0085 ?0 #!#$S!%!  m !&6 n#!-:\\,B':( 0B'<0\u0080\u008bb\u008e#\u008aeZ!~#@4[$' tD)!q!J!)GI$\"#$!\")].Q-'(8#\" 7!C.A#P,+(9 L+.!'(5#f/ !,!#-$!$!$+& & 6 .(w %!'(\u008d.5$7\u008c\u0083!rF&.#&- * # \" % % sW\u00822a!KX*#,1,#%/ ?\"(# z)\"*')/$\" /*T#$!$!$! #%#%/"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_IdentifierPart = sp[0].o;
	LINE_NUMBER(349);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (23);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (37);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (128);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (2432);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (4001);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (5600);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"! # & ) '\"$ % ( "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Horizontal = sp[0].o;
	LINE_NUMBER(357);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (120);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (8099);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"#\"$ %!"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Vertical = sp[0].o;
	LINE_NUMBER(367);
	clinit_regexodus_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Category);
	sp[1].o = (jobject) createArray(ctx, &class_int, (14));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (19);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (27);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (30);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (48);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (101);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (2432);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (4001);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (5600);
	init_regexodus_Category_Array1_int_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"$\"& * ' - +%(!# ) , "_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_Space = sp[0].o;
	LINE_NUMBER(369);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"ABCDEFGHIJKLMNOPQRSTUVWXYZ\u00b5\u00c0\u00c1\u00c2\u00c3\u00c4\u00c5\u00c6\u00c7\u00c8\u00c9\u00ca\u00cb\u00cc\u00cd\u00ce\u00cf\u00d0\u00d1\u00d2\u00d3\u00d4\u00d5\u00d6\u00d8\u00d9\u00da\u00db\u00dc\u00dd\u00de\u0100\u0102\u0104\u0106\u0108\u010a\u010c\u010e\u0110\u0112\u0114\u0116\u0118\u011a\u011c\u011e\u0120\u0122\u0124\u0126\u0128\u012a\u012c\u012e\u0132\u0134\u0136\u0139\u013b\u013d\u013f\u0141\u0143\u0145\u0147\u014a\u014c\u014e\u0150\u0152\u0154\u0156\u0158\u015a\u015c\u015e\u0160\u0162\u0164\u0166\u0168\u016a\u016c\u016e\u0170\u0172\u0174\u0176\u0178\u0179\u017b\u017d\u017f\u0181\u0182\u0184\u0186\u0187\u0189\u018a\u018b\u018e\u018f\u0190\u0191\u0193\u0194\u0196\u0197\u0198\u019c\u019d\u019f\u01a0\u01a2\u01a4\u01a6\u01a7\u01a9\u01ac\u01ae\u01af\u01b1\u01b2\u01b3\u01b5\u01b7\u01b8\u01bc\u01c4\u01c5\u01c7\u01c8\u01ca\u01cb\u01cd\u01cf\u01d1\u01d3\u01d5\u01d7\u01d9\u01db\u01de\u01e0\u01e2\u01e4\u01e6\u01e8\u01ea\u01ec\u01ee\u01f1\u01f2\u01f4\u01f6\u01f7\u01f8\u01fa\u01fc\u01fe\u0200\u0202\u0204\u0206\u0208\u020a\u020c\u020e\u0210\u0212\u0214\u0216\u0218\u021a\u021c\u021e\u0220\u0222\u0224\u0226\u0228\u022a\u022c\u022e\u0230\u0232\u023a\u023b\u023d\u023e\u0241\u0243\u0244\u0245\u0246\u0248\u024a\u024c\u024e\u0345\u0370\u0372\u0376\u037f\u0386\u0388\u0389\u038a\u038c\u038e\u038f\u0391\u0392\u0393\u0394\u0395\u0396\u0397\u0398\u0399\u039a\u039b\u039c\u039d\u039e\u039f\u03a0\u03a1\u03a3\u03a4\u03a5\u03a6\u03a7\u03a8\u03a9\u03aa\u03ab\u03c2\u03cf\u03d0\u03d1\u03d5\u03d6\u03d8\u03da\u03dc\u03de\u03e0\u03e2\u03e4\u03e6\u03e8\u03ea\u03ec\u03ee\u03f0\u03f1\u03f4\u03f5\u03f7\u03f9\u03fa\u03fd\u03fe\u03ff\u0400\u0401\u0402\u0403\u0404\u0405\u0406\u0407\u0408\u0409\u040a\u040b\u040c\u040d\u040e\u040f\u0410\u0411\u0412\u0413\u0414\u0415\u0416\u0417\u0418\u0419\u041a\u041b\u041c\u041d\u041e\u041f\u0420\u0421\u0422\u0423\u0424\u0425\u0426\u0427\u0428\u0429\u042a\u042b\u042c\u042d\u042e\u042f\u0460\u0462\u0464\u0466\u0468\u046a\u046c\u046e\u0470\u0472\u0474\u0476\u0478\u047a\u047c\u047e\u0480\u048a\u048c\u048e\u0490\u0492\u0494\u0496\u0498\u049a\u049c\u049e\u04a0\u04a2\u04a4\u04a6\u04a8\u04aa\u04ac\u04ae\u04b0\u04b2\u04b4\u04b6\u04b8\u04ba\u04bc\u04be\u04c0\u04c1\u04c3\u04c5\u04c7\u04c9\u04cb\u04cd\u04d0\u04d2\u04d4\u04d6\u04d8\u04da\u04dc\u04de\u04e0\u04e2\u04e4\u04e6\u04e8\u04ea\u04ec\u04ee\u04f0\u04f2\u04f4\u04f6\u04f8\u04fa\u04fc\u04fe\u0500\u0502\u0504\u0506\u0508\u050a\u050c\u050e\u0510\u0512\u0514\u0516\u0518\u051a\u051c\u051e\u0520\u0522\u0524\u0526\u0528\u052a\u052c\u052e\u0531\u0532\u0533\u0534\u0535\u0536\u0537\u0538\u0539\u053a\u053b\u053c\u053d\u053e\u053f\u0540\u0541\u0542\u0543\u0544\u0545\u0546\u0547\u0548\u0549\u054a\u054b\u054c\u054d\u054e\u054f\u0550\u0551\u0552\u0553\u0554\u0555\u0556\u10a0\u10a1\u10a2\u10a3\u10a4\u10a5\u10a6\u10a7\u10a8\u10a9\u10aa\u10ab\u10ac\u10ad\u10ae\u10af\u10b0\u10b1\u10b2\u10b3\u10b4\u10b5\u10b6\u10b7\u10b8\u10b9\u10ba\u10bb\u10bc\u10bd\u10be\u10bf\u10c0\u10c1\u10c2\u10c3\u10c4\u10c5\u10c7\u10cd\u13f8\u13f9\u13fa\u13fb\u13fc\u13fd\u1c80\u1c81\u1c82\u1c83\u1c84\u1c85\u1c86\u1c87\u1c88\u1c90\u1c91\u1c92\u1c93\u1c94\u1c95\u1c96\u1c97\u1c98\u1c99\u1c9a\u1c9b\u1c9c\u1c9d\u1c9e\u1c9f\u1ca0\u1ca1\u1ca2\u1ca3\u1ca4\u1ca5\u1ca6\u1ca7\u1ca8\u1ca9\u1caa\u1cab\u1cac\u1cad\u1cae\u1caf\u1cb0\u1cb1\u1cb2\u1cb3\u1cb4\u1cb5\u1cb6\u1cb7\u1cb8\u1cb9\u1cba\u1cbd\u1cbe\u1cbf\u1e00\u1e02\u1e04\u1e06\u1e08\u1e0a\u1e0c\u1e0e\u1e10\u1e12\u1e14\u1e16\u1e18\u1e1a\u1e1c\u1e1e\u1e20\u1e22\u1e24\u1e26\u1e28\u1e2a\u1e2c\u1e2e\u1e30\u1e32\u1e34\u1e36\u1e38\u1e3a\u1e3c\u1e3e\u1e40\u1e42\u1e44\u1e46\u1e48\u1e4a\u1e4c\u1e4e\u1e50\u1e52\u1e54\u1e56\u1e58\u1e5a\u1e5c\u1e5e\u1e60\u1e62\u1e64\u1e66\u1e68\u1e6a\u1e6c\u1e6e\u1e70\u1e72\u1e74\u1e76\u1e78\u1e7a\u1e7c\u1e7e\u1e80\u1e82\u1e84\u1e86\u1e88\u1e8a\u1e8c\u1e8e\u1e90\u1e92\u1e94\u1e9b\u1ea0\u1ea2\u1ea4\u1ea6\u1ea8\u1eaa\u1eac\u1eae\u1eb0\u1eb2\u1eb4\u1eb6\u1eb8\u1eba\u1ebc\u1ebe\u1ec0\u1ec2\u1ec4\u1ec6\u1ec8\u1eca\u1ecc\u1ece\u1ed0\u1ed2\u1ed4\u1ed6\u1ed8\u1eda\u1edc\u1ede\u1ee0\u1ee2\u1ee4\u1ee6\u1ee8\u1eea\u1eec\u1eee\u1ef0\u1ef2\u1ef4\u1ef6\u1ef8\u1efa\u1efc\u1efe\u1f08\u1f09\u1f0a\u1f0b\u1f0c\u1f0d\u1f0e\u1f0f\u1f18\u1f19\u1f1a\u1f1b\u1f1c\u1f1d\u1f28\u1f29\u1f2a\u1f2b\u1f2c\u1f2d\u1f2e\u1f2f\u1f38\u1f39\u1f3a\u1f3b\u1f3c\u1f3d\u1f3e\u1f3f\u1f48\u1f49\u1f4a\u1f4b\u1f4c\u1f4d\u1f59\u1f5b\u1f5d\u1f5f\u1f68\u1f69\u1f6a\u1f6b\u1f6c\u1f6d\u1f6e\u1f6f\u1fb8\u1fb9\u1fba\u1fbb\u1fbe\u1fc8\u1fc9\u1fca\u1fcb\u1fd8\u1fd9\u1fda\u1fdb\u1fe8\u1fe9\u1fea\u1feb\u1fec\u1ff8\u1ff9\u1ffa\u1ffb\u2126\u212a\u212b\u2132\u2160\u2161\u2162\u2163\u2164\u2165\u2166\u2167\u2168\u2169\u216a\u216b\u216c\u216d\u216e\u216f\u2183\u24b6\u24b7\u24b8\u24b9\u24ba\u24bb\u24bc\u24bd\u24be\u24bf\u24c0\u24c1\u24c2\u24c3\u24c4\u24c5\u24c6\u24c7\u24c8\u24c9\u24ca\u24cb\u24cc\u24cd\u24ce\u24cf\u2c00\u2c01\u2c02\u2c03\u2c04\u2c05\u2c06\u2c07\u2c08\u2c09\u2c0a\u2c0b\u2c0c\u2c0d\u2c0e\u2c0f\u2c10\u2c11\u2c12\u2c13\u2c14\u2c15\u2c16\u2c17\u2c18\u2c19\u2c1a\u2c1b\u2c1c\u2c1d\u2c1e\u2c1f\u2c20\u2c21\u2c22\u2c23\u2c24\u2c25\u2c26\u2c27\u2c28\u2c29\u2c2a\u2c2b\u2c2c\u2c2d\u2c2e\u2c60\u2c62\u2c63\u2c64\u2c67\u2c69\u2c6b\u2c6d\u2c6e\u2c6f\u2c70\u2c72\u2c75\u2c7e\u2c7f\u2c80\u2c82\u2c84\u2c86\u2c88\u2c8a\u2c8c\u2c8e\u2c90\u2c92\u2c94\u2c96\u2c98\u2c9a\u2c9c\u2c9e\u2ca0\u2ca2\u2ca4\u2ca6\u2ca8\u2caa\u2cac\u2cae\u2cb0\u2cb2\u2cb4\u2cb6\u2cb8\u2cba\u2cbc\u2cbe\u2cc0\u2cc2\u2cc4\u2cc6\u2cc8\u2cca\u2ccc\u2cce\u2cd0\u2cd2\u2cd4\u2cd6\u2cd8\u2cda\u2cdc\u2cde\u2ce0\u2ce2\u2ceb\u2ced\u2cf2\ua640\ua642\ua644\ua646\ua648\ua64a\ua64c\ua64e\ua650\ua652\ua654\ua656\ua658\ua65a\ua65c\ua65e\ua660\ua662\ua664\ua666\ua668\ua66a\ua66c\ua680\ua682\ua684\ua686\ua688\ua68a\ua68c\ua68e\ua690\ua692\ua694\ua696\ua698\ua69a\ua722\ua724\ua726\ua728\ua72a\ua72c\ua72e\ua732\ua734\ua736\ua738\ua73a\ua73c\ua73e\ua740\ua742\ua744\ua746\ua748\ua74a\ua74c\ua74e\ua750\ua752\ua754\ua756\ua758\ua75a\ua75c\ua75e\ua760\ua762\ua764\ua766\ua768\ua76a\ua76c\ua76e\ua779\ua77b\ua77d\ua77e\ua780\ua782\ua784\ua786\ua78b\ua78d\ua790\ua792\ua796\ua798\ua79a\ua79c\ua79e\ua7a0\ua7a2\ua7a4\ua7a6\ua7a8\ua7aa\ua7ab\ua7ac\ua7ad\ua7ae\ua7b0\ua7b1\ua7b2\ua7b3\ua7b4\ua7b6\ua7b8\ua7ba\ua7bc\ua7be\ua7c2\ua7c4\ua7c5\ua7c6\ua7c7\ua7c9\ua7f5\uab70\uab71\uab72\uab73\uab74\uab75\uab76\uab77\uab78\uab79\uab7a\uab7b\uab7c\uab7d\uab7e\uab7f\uab80\uab81\uab82\uab83\uab84\uab85\uab86\uab87\uab88\uab89\uab8a\uab8b\uab8c\uab8d\uab8e\uab8f\uab90\uab91\uab92\uab93\uab94\uab95\uab96\uab97\uab98\uab99\uab9a\uab9b\uab9c\uab9d\uab9e\uab9f\uaba0\uaba1\uaba2\uaba3\uaba4\uaba5\uaba6\uaba7\uaba8\uaba9\uabaa\uabab\uabac\uabad\uabae\uabaf\uabb0\uabb1\uabb2\uabb3\uabb4\uabb5\uabb6\uabb7\uabb8\uabb9\uabba\uabbb\uabbc\uabbd\uabbe\uabbf\uff21\uff22\uff23\uff24\uff25\uff26\uff27\uff28\uff29\uff2a\uff2b\uff2c\uff2d\uff2e\uff2f\uff30\uff31\uff32\uff33\uff34\uff35\uff36\uff37\uff38\uff39\uff3a\u1e9e\u1f88\u1f89\u1f8a\u1f8b\u1f8c\u1f8d\u1f8e\u1f8f\u1f98\u1f99\u1f9a\u1f9b\u1f9c\u1f9d\u1f9e\u1f9f\u1fa8\u1fa9\u1faa\u1fab\u1fac\u1fad\u1fae\u1faf\u1fbc\u1fcc\u1ffc"_j))))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (((jobject) createStringLiteral(ctx, u8"ABCDEFGHIJKLMNOPQRSTUVWXYZ\u00b5\u00c0\u00c1\u00c2\u00c3\u00c4\u00c5\u00c6\u00c7\u00c8\u00c9\u00ca\u00cb\u00cc\u00cd\u00ce\u00cf\u00d0\u00d1\u00d2\u00d3\u00d4\u00d5\u00d6\u00d8\u00d9\u00da\u00db\u00dc\u00dd\u00de\u0100\u0102\u0104\u0106\u0108\u010a\u010c\u010e\u0110\u0112\u0114\u0116\u0118\u011a\u011c\u011e\u0120\u0122\u0124\u0126\u0128\u012a\u012c\u012e\u0132\u0134\u0136\u0139\u013b\u013d\u013f\u0141\u0143\u0145\u0147\u014a\u014c\u014e\u0150\u0152\u0154\u0156\u0158\u015a\u015c\u015e\u0160\u0162\u0164\u0166\u0168\u016a\u016c\u016e\u0170\u0172\u0174\u0176\u0178\u0179\u017b\u017d\u017f\u0181\u0182\u0184\u0186\u0187\u0189\u018a\u018b\u018e\u018f\u0190\u0191\u0193\u0194\u0196\u0197\u0198\u019c\u019d\u019f\u01a0\u01a2\u01a4\u01a6\u01a7\u01a9\u01ac\u01ae\u01af\u01b1\u01b2\u01b3\u01b5\u01b7\u01b8\u01bc\u01c4\u01c5\u01c7\u01c8\u01ca\u01cb\u01cd\u01cf\u01d1\u01d3\u01d5\u01d7\u01d9\u01db\u01de\u01e0\u01e2\u01e4\u01e6\u01e8\u01ea\u01ec\u01ee\u01f1\u01f2\u01f4\u01f6\u01f7\u01f8\u01fa\u01fc\u01fe\u0200\u0202\u0204\u0206\u0208\u020a\u020c\u020e\u0210\u0212\u0214\u0216\u0218\u021a\u021c\u021e\u0220\u0222\u0224\u0226\u0228\u022a\u022c\u022e\u0230\u0232\u023a\u023b\u023d\u023e\u0241\u0243\u0244\u0245\u0246\u0248\u024a\u024c\u024e\u0345\u0370\u0372\u0376\u037f\u0386\u0388\u0389\u038a\u038c\u038e\u038f\u0391\u0392\u0393\u0394\u0395\u0396\u0397\u0398\u0399\u039a\u039b\u039c\u039d\u039e\u039f\u03a0\u03a1\u03a3\u03a4\u03a5\u03a6\u03a7\u03a8\u03a9\u03aa\u03ab\u03c2\u03cf\u03d0\u03d1\u03d5\u03d6\u03d8\u03da\u03dc\u03de\u03e0\u03e2\u03e4\u03e6\u03e8\u03ea\u03ec\u03ee\u03f0\u03f1\u03f4\u03f5\u03f7\u03f9\u03fa\u03fd\u03fe\u03ff\u0400\u0401\u0402\u0403\u0404\u0405\u0406\u0407\u0408\u0409\u040a\u040b\u040c\u040d\u040e\u040f\u0410\u0411\u0412\u0413\u0414\u0415\u0416\u0417\u0418\u0419\u041a\u041b\u041c\u041d\u041e\u041f\u0420\u0421\u0422\u0423\u0424\u0425\u0426\u0427\u0428\u0429\u042a\u042b\u042c\u042d\u042e\u042f\u0460\u0462\u0464\u0466\u0468\u046a\u046c\u046e\u0470\u0472\u0474\u0476\u0478\u047a\u047c\u047e\u0480\u048a\u048c\u048e\u0490\u0492\u0494\u0496\u0498\u049a\u049c\u049e\u04a0\u04a2\u04a4\u04a6\u04a8\u04aa\u04ac\u04ae\u04b0\u04b2\u04b4\u04b6\u04b8\u04ba\u04bc\u04be\u04c0\u04c1\u04c3\u04c5\u04c7\u04c9\u04cb\u04cd\u04d0\u04d2\u04d4\u04d6\u04d8\u04da\u04dc\u04de\u04e0\u04e2\u04e4\u04e6\u04e8\u04ea\u04ec\u04ee\u04f0\u04f2\u04f4\u04f6\u04f8\u04fa\u04fc\u04fe\u0500\u0502\u0504\u0506\u0508\u050a\u050c\u050e\u0510\u0512\u0514\u0516\u0518\u051a\u051c\u051e\u0520\u0522\u0524\u0526\u0528\u052a\u052c\u052e\u0531\u0532\u0533\u0534\u0535\u0536\u0537\u0538\u0539\u053a\u053b\u053c\u053d\u053e\u053f\u0540\u0541\u0542\u0543\u0544\u0545\u0546\u0547\u0548\u0549\u054a\u054b\u054c\u054d\u054e\u054f\u0550\u0551\u0552\u0553\u0554\u0555\u0556\u10a0\u10a1\u10a2\u10a3\u10a4\u10a5\u10a6\u10a7\u10a8\u10a9\u10aa\u10ab\u10ac\u10ad\u10ae\u10af\u10b0\u10b1\u10b2\u10b3\u10b4\u10b5\u10b6\u10b7\u10b8\u10b9\u10ba\u10bb\u10bc\u10bd\u10be\u10bf\u10c0\u10c1\u10c2\u10c3\u10c4\u10c5\u10c7\u10cd\u13f8\u13f9\u13fa\u13fb\u13fc\u13fd\u1c80\u1c81\u1c82\u1c83\u1c84\u1c85\u1c86\u1c87\u1c88\u1c90\u1c91\u1c92\u1c93\u1c94\u1c95\u1c96\u1c97\u1c98\u1c99\u1c9a\u1c9b\u1c9c\u1c9d\u1c9e\u1c9f\u1ca0\u1ca1\u1ca2\u1ca3\u1ca4\u1ca5\u1ca6\u1ca7\u1ca8\u1ca9\u1caa\u1cab\u1cac\u1cad\u1cae\u1caf\u1cb0\u1cb1\u1cb2\u1cb3\u1cb4\u1cb5\u1cb6\u1cb7\u1cb8\u1cb9\u1cba\u1cbd\u1cbe\u1cbf\u1e00\u1e02\u1e04\u1e06\u1e08\u1e0a\u1e0c\u1e0e\u1e10\u1e12\u1e14\u1e16\u1e18\u1e1a\u1e1c\u1e1e\u1e20\u1e22\u1e24\u1e26\u1e28\u1e2a\u1e2c\u1e2e\u1e30\u1e32\u1e34\u1e36\u1e38\u1e3a\u1e3c\u1e3e\u1e40\u1e42\u1e44\u1e46\u1e48\u1e4a\u1e4c\u1e4e\u1e50\u1e52\u1e54\u1e56\u1e58\u1e5a\u1e5c\u1e5e\u1e60\u1e62\u1e64\u1e66\u1e68\u1e6a\u1e6c\u1e6e\u1e70\u1e72\u1e74\u1e76\u1e78\u1e7a\u1e7c\u1e7e\u1e80\u1e82\u1e84\u1e86\u1e88\u1e8a\u1e8c\u1e8e\u1e90\u1e92\u1e94\u1e9b\u1ea0\u1ea2\u1ea4\u1ea6\u1ea8\u1eaa\u1eac\u1eae\u1eb0\u1eb2\u1eb4\u1eb6\u1eb8\u1eba\u1ebc\u1ebe\u1ec0\u1ec2\u1ec4\u1ec6\u1ec8\u1eca\u1ecc\u1ece\u1ed0\u1ed2\u1ed4\u1ed6\u1ed8\u1eda\u1edc\u1ede\u1ee0\u1ee2\u1ee4\u1ee6\u1ee8\u1eea\u1eec\u1eee\u1ef0\u1ef2\u1ef4\u1ef6\u1ef8\u1efa\u1efc\u1efe\u1f08\u1f09\u1f0a\u1f0b\u1f0c\u1f0d\u1f0e\u1f0f\u1f18\u1f19\u1f1a\u1f1b\u1f1c\u1f1d\u1f28\u1f29\u1f2a\u1f2b\u1f2c\u1f2d\u1f2e\u1f2f\u1f38\u1f39\u1f3a\u1f3b\u1f3c\u1f3d\u1f3e\u1f3f\u1f48\u1f49\u1f4a\u1f4b\u1f4c\u1f4d\u1f59\u1f5b\u1f5d\u1f5f\u1f68\u1f69\u1f6a\u1f6b\u1f6c\u1f6d\u1f6e\u1f6f\u1fb8\u1fb9\u1fba\u1fbb\u1fbe\u1fc8\u1fc9\u1fca\u1fcb\u1fd8\u1fd9\u1fda\u1fdb\u1fe8\u1fe9\u1fea\u1feb\u1fec\u1ff8\u1ff9\u1ffa\u1ffb\u2126\u212a\u212b\u2132\u2160\u2161\u2162\u2163\u2164\u2165\u2166\u2167\u2168\u2169\u216a\u216b\u216c\u216d\u216e\u216f\u2183\u24b6\u24b7\u24b8\u24b9\u24ba\u24bb\u24bc\u24bd\u24be\u24bf\u24c0\u24c1\u24c2\u24c3\u24c4\u24c5\u24c6\u24c7\u24c8\u24c9\u24ca\u24cb\u24cc\u24cd\u24ce\u24cf\u2c00\u2c01\u2c02\u2c03\u2c04\u2c05\u2c06\u2c07\u2c08\u2c09\u2c0a\u2c0b\u2c0c\u2c0d\u2c0e\u2c0f\u2c10\u2c11\u2c12\u2c13\u2c14\u2c15\u2c16\u2c17\u2c18\u2c19\u2c1a\u2c1b\u2c1c\u2c1d\u2c1e\u2c1f\u2c20\u2c21\u2c22\u2c23\u2c24\u2c25\u2c26\u2c27\u2c28\u2c29\u2c2a\u2c2b\u2c2c\u2c2d\u2c2e\u2c60\u2c62\u2c63\u2c64\u2c67\u2c69\u2c6b\u2c6d\u2c6e\u2c6f\u2c70\u2c72\u2c75\u2c7e\u2c7f\u2c80\u2c82\u2c84\u2c86\u2c88\u2c8a\u2c8c\u2c8e\u2c90\u2c92\u2c94\u2c96\u2c98\u2c9a\u2c9c\u2c9e\u2ca0\u2ca2\u2ca4\u2ca6\u2ca8\u2caa\u2cac\u2cae\u2cb0\u2cb2\u2cb4\u2cb6\u2cb8\u2cba\u2cbc\u2cbe\u2cc0\u2cc2\u2cc4\u2cc6\u2cc8\u2cca\u2ccc\u2cce\u2cd0\u2cd2\u2cd4\u2cd6\u2cd8\u2cda\u2cdc\u2cde\u2ce0\u2ce2\u2ceb\u2ced\u2cf2\ua640\ua642\ua644\ua646\ua648\ua64a\ua64c\ua64e\ua650\ua652\ua654\ua656\ua658\ua65a\ua65c\ua65e\ua660\ua662\ua664\ua666\ua668\ua66a\ua66c\ua680\ua682\ua684\ua686\ua688\ua68a\ua68c\ua68e\ua690\ua692\ua694\ua696\ua698\ua69a\ua722\ua724\ua726\ua728\ua72a\ua72c\ua72e\ua732\ua734\ua736\ua738\ua73a\ua73c\ua73e\ua740\ua742\ua744\ua746\ua748\ua74a\ua74c\ua74e\ua750\ua752\ua754\ua756\ua758\ua75a\ua75c\ua75e\ua760\ua762\ua764\ua766\ua768\ua76a\ua76c\ua76e\ua779\ua77b\ua77d\ua77e\ua780\ua782\ua784\ua786\ua78b\ua78d\ua790\ua792\ua796\ua798\ua79a\ua79c\ua79e\ua7a0\ua7a2\ua7a4\ua7a6\ua7a8\ua7aa\ua7ab\ua7ac\ua7ad\ua7ae\ua7b0\ua7b1\ua7b2\ua7b3\ua7b4\ua7b6\ua7b8\ua7ba\ua7bc\ua7be\ua7c2\ua7c4\ua7c5\ua7c6\ua7c7\ua7c9\ua7f5\uab70\uab71\uab72\uab73\uab74\uab75\uab76\uab77\uab78\uab79\uab7a\uab7b\uab7c\uab7d\uab7e\uab7f\uab80\uab81\uab82\uab83\uab84\uab85\uab86\uab87\uab88\uab89\uab8a\uab8b\uab8c\uab8d\uab8e\uab8f\uab90\uab91\uab92\uab93\uab94\uab95\uab96\uab97\uab98\uab99\uab9a\uab9b\uab9c\uab9d\uab9e\uab9f\uaba0\uaba1\uaba2\uaba3\uaba4\uaba5\uaba6\uaba7\uaba8\uaba9\uabaa\uabab\uabac\uabad\uabae\uabaf\uabb0\uabb1\uabb2\uabb3\uabb4\uabb5\uabb6\uabb7\uabb8\uabb9\uabba\uabbb\uabbc\uabbd\uabbe\uabbf\uff21\uff22\uff23\uff24\uff25\uff26\uff27\uff28\uff29\uff2a\uff2b\uff2c\uff2d\uff2e\uff2f\uff30\uff31\uff32\uff33\uff34\uff35\uff36\uff37\uff38\uff39\uff3a\u1e9e\u1f88\u1f89\u1f8a\u1f8b\u1f8c\u1f8d\u1f8e\u1f8f\u1f98\u1f99\u1f9a\u1f9b\u1f9c\u1f9d\u1f9e\u1f9f\u1fa8\u1fa9\u1faa\u1fab\u1fac\u1fad\u1fae\u1faf\u1fbc\u1fcc\u1ffc"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_upper = sp[0].o;
	LINE_NUMBER(370);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"abcdefghijklmnopqrstuvwxyz\u03bc\u00e0\u00e1\u00e2\u00e3\u00e4\u00e5\u00e6\u00e7\u00e8\u00e9\u00ea\u00eb\u00ec\u00ed\u00ee\u00ef\u00f0\u00f1\u00f2\u00f3\u00f4\u00f5\u00f6\u00f8\u00f9\u00fa\u00fb\u00fc\u00fd\u00fe\u0101\u0103\u0105\u0107\u0109\u010b\u010d\u010f\u0111\u0113\u0115\u0117\u0119\u011b\u011d\u011f\u0121\u0123\u0125\u0127\u0129\u012b\u012d\u012f\u0133\u0135\u0137\u013a\u013c\u013e\u0140\u0142\u0144\u0146\u0148\u014b\u014d\u014f\u0151\u0153\u0155\u0157\u0159\u015b\u015d\u015f\u0161\u0163\u0165\u0167\u0169\u016b\u016d\u016f\u0171\u0173\u0175\u0177\u00ff\u017a\u017c\u017es\u0253\u0183\u0185\u0254\u0188\u0256\u0257\u018c\u01dd\u0259\u025b\u0192\u0260\u0263\u0269\u0268\u0199\u026f\u0272\u0275\u01a1\u01a3\u01a5\u0280\u01a8\u0283\u01ad\u0288\u01b0\u028a\u028b\u01b4\u01b6\u0292\u01b9\u01bd\u01c6\u01c6\u01c9\u01c9\u01cc\u01cc\u01ce\u01d0\u01d2\u01d4\u01d6\u01d8\u01da\u01dc\u01df\u01e1\u01e3\u01e5\u01e7\u01e9\u01eb\u01ed\u01ef\u01f3\u01f3\u01f5\u0195\u01bf\u01f9\u01fb\u01fd\u01ff\u0201\u0203\u0205\u0207\u0209\u020b\u020d\u020f\u0211\u0213\u0215\u0217\u0219\u021b\u021d\u021f\u019e\u0223\u0225\u0227\u0229\u022b\u022d\u022f\u0231\u0233\u2c65\u023c\u019a\u2c66\u0242\u0180\u0289\u028c\u0247\u0249\u024b\u024d\u024f\u03b9\u0371\u0373\u0377\u03f3\u03ac\u03ad\u03ae\u03af\u03cc\u03cd\u03ce\u03b1\u03b2\u03b3\u03b4\u03b5\u03b6\u03b7\u03b8\u03b9\u03ba\u03bb\u03bc\u03bd\u03be\u03bf\u03c0\u03c1\u03c3\u03c4\u03c5\u03c6\u03c7\u03c8\u03c9\u03ca\u03cb\u03c3\u03d7\u03b2\u03b8\u03c6\u03c0\u03d9\u03db\u03dd\u03df\u03e1\u03e3\u03e5\u03e7\u03e9\u03eb\u03ed\u03ef\u03ba\u03c1\u03b8\u03b5\u03f8\u03f2\u03fb\u037b\u037c\u037d\u0450\u0451\u0452\u0453\u0454\u0455\u0456\u0457\u0458\u0459\u045a\u045b\u045c\u045d\u045e\u045f\u0430\u0431\u0432\u0433\u0434\u0435\u0436\u0437\u0438\u0439\u043a\u043b\u043c\u043d\u043e\u043f\u0440\u0441\u0442\u0443\u0444\u0445\u0446\u0447\u0448\u0449\u044a\u044b\u044c\u044d\u044e\u044f\u0461\u0463\u0465\u0467\u0469\u046b\u046d\u046f\u0471\u0473\u0475\u0477\u0479\u047b\u047d\u047f\u0481\u048b\u048d\u048f\u0491\u0493\u0495\u0497\u0499\u049b\u049d\u049f\u04a1\u04a3\u04a5\u04a7\u04a9\u04ab\u04ad\u04af\u04b1\u04b3\u04b5\u04b7\u04b9\u04bb\u04bd\u04bf\u04cf\u04c2\u04c4\u04c6\u04c8\u04ca\u04cc\u04ce\u04d1\u04d3\u04d5\u04d7\u04d9\u04db\u04dd\u04df\u04e1\u04e3\u04e5\u04e7\u04e9\u04eb\u04ed\u04ef\u04f1\u04f3\u04f5\u04f7\u04f9\u04fb\u04fd\u04ff\u0501\u0503\u0505\u0507\u0509\u050b\u050d\u050f\u0511\u0513\u0515\u0517\u0519\u051b\u051d\u051f\u0521\u0523\u0525\u0527\u0529\u052b\u052d\u052f\u0561\u0562\u0563\u0564\u0565\u0566\u0567\u0568\u0569\u056a\u056b\u056c\u056d\u056e\u056f\u0570\u0571\u0572\u0573\u0574\u0575\u0576\u0577\u0578\u0579\u057a\u057b\u057c\u057d\u057e\u057f\u0580\u0581\u0582\u0583\u0584\u0585\u0586\u2d00\u2d01\u2d02\u2d03\u2d04\u2d05\u2d06\u2d07\u2d08\u2d09\u2d0a\u2d0b\u2d0c\u2d0d\u2d0e\u2d0f\u2d10\u2d11\u2d12\u2d13\u2d14\u2d15\u2d16\u2d17\u2d18\u2d19\u2d1a\u2d1b\u2d1c\u2d1d\u2d1e\u2d1f\u2d20\u2d21\u2d22\u2d23\u2d24\u2d25\u2d27\u2d2d\u13f0\u13f1\u13f2\u13f3\u13f4\u13f5\u0432\u0434\u043e\u0441\u0442\u0442\u044a\u0463\ua64b\u10d0\u10d1\u10d2\u10d3\u10d4\u10d5\u10d6\u10d7\u10d8\u10d9\u10da\u10db\u10dc\u10dd\u10de\u10df\u10e0\u10e1\u10e2\u10e3\u10e4\u10e5\u10e6\u10e7\u10e8\u10e9\u10ea\u10eb\u10ec\u10ed\u10ee\u10ef\u10f0\u10f1\u10f2\u10f3\u10f4\u10f5\u10f6\u10f7\u10f8\u10f9\u10fa\u10fd\u10fe\u10ff\u1e01\u1e03\u1e05\u1e07\u1e09\u1e0b\u1e0d\u1e0f\u1e11\u1e13\u1e15\u1e17\u1e19\u1e1b\u1e1d\u1e1f\u1e21\u1e23\u1e25\u1e27\u1e29\u1e2b\u1e2d\u1e2f\u1e31\u1e33\u1e35\u1e37\u1e39\u1e3b\u1e3d\u1e3f\u1e41\u1e43\u1e45\u1e47\u1e49\u1e4b\u1e4d\u1e4f\u1e51\u1e53\u1e55\u1e57\u1e59\u1e5b\u1e5d\u1e5f\u1e61\u1e63\u1e65\u1e67\u1e69\u1e6b\u1e6d\u1e6f\u1e71\u1e73\u1e75\u1e77\u1e79\u1e7b\u1e7d\u1e7f\u1e81\u1e83\u1e85\u1e87\u1e89\u1e8b\u1e8d\u1e8f\u1e91\u1e93\u1e95\u1e61\u1ea1\u1ea3\u1ea5\u1ea7\u1ea9\u1eab\u1ead\u1eaf\u1eb1\u1eb3\u1eb5\u1eb7\u1eb9\u1ebb\u1ebd\u1ebf\u1ec1\u1ec3\u1ec5\u1ec7\u1ec9\u1ecb\u1ecd\u1ecf\u1ed1\u1ed3\u1ed5\u1ed7\u1ed9\u1edb\u1edd\u1edf\u1ee1\u1ee3\u1ee5\u1ee7\u1ee9\u1eeb\u1eed\u1eef\u1ef1\u1ef3\u1ef5\u1ef7\u1ef9\u1efb\u1efd\u1eff\u1f00\u1f01\u1f02\u1f03\u1f04\u1f05\u1f06\u1f07\u1f10\u1f11\u1f12\u1f13\u1f14\u1f15\u1f20\u1f21\u1f22\u1f23\u1f24\u1f25\u1f26\u1f27\u1f30\u1f31\u1f32\u1f33\u1f34\u1f35\u1f36\u1f37\u1f40\u1f41\u1f42\u1f43\u1f44\u1f45\u1f51\u1f53\u1f55\u1f57\u1f60\u1f61\u1f62\u1f63\u1f64\u1f65\u1f66\u1f67\u1fb0\u1fb1\u1f70\u1f71\u03b9\u1f72\u1f73\u1f74\u1f75\u1fd0\u1fd1\u1f76\u1f77\u1fe0\u1fe1\u1f7a\u1f7b\u1fe5\u1f78\u1f79\u1f7c\u1f7d\u03c9k\u00e5\u214e\u2170\u2171\u2172\u2173\u2174\u2175\u2176\u2177\u2178\u2179\u217a\u217b\u217c\u217d\u217e\u217f\u2184\u24d0\u24d1\u24d2\u24d3\u24d4\u24d5\u24d6\u24d7\u24d8\u24d9\u24da\u24db\u24dc\u24dd\u24de\u24df\u24e0\u24e1\u24e2\u24e3\u24e4\u24e5\u24e6\u24e7\u24e8\u24e9\u2c30\u2c31\u2c32\u2c33\u2c34\u2c35\u2c36\u2c37\u2c38\u2c39\u2c3a\u2c3b\u2c3c\u2c3d\u2c3e\u2c3f\u2c40\u2c41\u2c42\u2c43\u2c44\u2c45\u2c46\u2c47\u2c48\u2c49\u2c4a\u2c4b\u2c4c\u2c4d\u2c4e\u2c4f\u2c50\u2c51\u2c52\u2c53\u2c54\u2c55\u2c56\u2c57\u2c58\u2c59\u2c5a\u2c5b\u2c5c\u2c5d\u2c5e\u2c61\u026b\u1d7d\u027d\u2c68\u2c6a\u2c6c\u0251\u0271\u0250\u0252\u2c73\u2c76\u023f\u0240\u2c81\u2c83\u2c85\u2c87\u2c89\u2c8b\u2c8d\u2c8f\u2c91\u2c93\u2c95\u2c97\u2c99\u2c9b\u2c9d\u2c9f\u2ca1\u2ca3\u2ca5\u2ca7\u2ca9\u2cab\u2cad\u2caf\u2cb1\u2cb3\u2cb5\u2cb7\u2cb9\u2cbb\u2cbd\u2cbf\u2cc1\u2cc3\u2cc5\u2cc7\u2cc9\u2ccb\u2ccd\u2ccf\u2cd1\u2cd3\u2cd5\u2cd7\u2cd9\u2cdb\u2cdd\u2cdf\u2ce1\u2ce3\u2cec\u2cee\u2cf3\ua641\ua643\ua645\ua647\ua649\ua64b\ua64d\ua64f\ua651\ua653\ua655\ua657\ua659\ua65b\ua65d\ua65f\ua661\ua663\ua665\ua667\ua669\ua66b\ua66d\ua681\ua683\ua685\ua687\ua689\ua68b\ua68d\ua68f\ua691\ua693\ua695\ua697\ua699\ua69b\ua723\ua725\ua727\ua729\ua72b\ua72d\ua72f\ua733\ua735\ua737\ua739\ua73b\ua73d\ua73f\ua741\ua743\ua745\ua747\ua749\ua74b\ua74d\ua74f\ua751\ua753\ua755\ua757\ua759\ua75b\ua75d\ua75f\ua761\ua763\ua765\ua767\ua769\ua76b\ua76d\ua76f\ua77a\ua77c\u1d79\ua77f\ua781\ua783\ua785\ua787\ua78c\u0265\ua791\ua793\ua797\ua799\ua79b\ua79d\ua79f\ua7a1\ua7a3\ua7a5\ua7a7\ua7a9\u0266\u025c\u0261\u026c\u026a\u029e\u0287\u029d\uab53\ua7b5\ua7b7\ua7b9\ua7bb\ua7bd\ua7bf\ua7c3\ua794\u0282\u1d8e\ua7c8\ua7ca\ua7f6\u13a0\u13a1\u13a2\u13a3\u13a4\u13a5\u13a6\u13a7\u13a8\u13a9\u13aa\u13ab\u13ac\u13ad\u13ae\u13af\u13b0\u13b1\u13b2\u13b3\u13b4\u13b5\u13b6\u13b7\u13b8\u13b9\u13ba\u13bb\u13bc\u13bd\u13be\u13bf\u13c0\u13c1\u13c2\u13c3\u13c4\u13c5\u13c6\u13c7\u13c8\u13c9\u13ca\u13cb\u13cc\u13cd\u13ce\u13cf\u13d0\u13d1\u13d2\u13d3\u13d4\u13d5\u13d6\u13d7\u13d8\u13d9\u13da\u13db\u13dc\u13dd\u13de\u13df\u13e0\u13e1\u13e2\u13e3\u13e4\u13e5\u13e6\u13e7\u13e8\u13e9\u13ea\u13eb\u13ec\u13ed\u13ee\u13ef\uff41\uff42\uff43\uff44\uff45\uff46\uff47\uff48\uff49\uff4a\uff4b\uff4c\uff4d\uff4e\uff4f\uff50\uff51\uff52\uff53\uff54\uff55\uff56\uff57\uff58\uff59\uff5a\u00df\u1f80\u1f81\u1f82\u1f83\u1f84\u1f85\u1f86\u1f87\u1f90\u1f91\u1f92\u1f93\u1f94\u1f95\u1f96\u1f97\u1fa0\u1fa1\u1fa2\u1fa3\u1fa4\u1fa5\u1fa6\u1fa7\u1fb3\u1fc3\u1ff3"_j))))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (((jobject) createStringLiteral(ctx, u8"abcdefghijklmnopqrstuvwxyz\u03bc\u00e0\u00e1\u00e2\u00e3\u00e4\u00e5\u00e6\u00e7\u00e8\u00e9\u00ea\u00eb\u00ec\u00ed\u00ee\u00ef\u00f0\u00f1\u00f2\u00f3\u00f4\u00f5\u00f6\u00f8\u00f9\u00fa\u00fb\u00fc\u00fd\u00fe\u0101\u0103\u0105\u0107\u0109\u010b\u010d\u010f\u0111\u0113\u0115\u0117\u0119\u011b\u011d\u011f\u0121\u0123\u0125\u0127\u0129\u012b\u012d\u012f\u0133\u0135\u0137\u013a\u013c\u013e\u0140\u0142\u0144\u0146\u0148\u014b\u014d\u014f\u0151\u0153\u0155\u0157\u0159\u015b\u015d\u015f\u0161\u0163\u0165\u0167\u0169\u016b\u016d\u016f\u0171\u0173\u0175\u0177\u00ff\u017a\u017c\u017es\u0253\u0183\u0185\u0254\u0188\u0256\u0257\u018c\u01dd\u0259\u025b\u0192\u0260\u0263\u0269\u0268\u0199\u026f\u0272\u0275\u01a1\u01a3\u01a5\u0280\u01a8\u0283\u01ad\u0288\u01b0\u028a\u028b\u01b4\u01b6\u0292\u01b9\u01bd\u01c6\u01c6\u01c9\u01c9\u01cc\u01cc\u01ce\u01d0\u01d2\u01d4\u01d6\u01d8\u01da\u01dc\u01df\u01e1\u01e3\u01e5\u01e7\u01e9\u01eb\u01ed\u01ef\u01f3\u01f3\u01f5\u0195\u01bf\u01f9\u01fb\u01fd\u01ff\u0201\u0203\u0205\u0207\u0209\u020b\u020d\u020f\u0211\u0213\u0215\u0217\u0219\u021b\u021d\u021f\u019e\u0223\u0225\u0227\u0229\u022b\u022d\u022f\u0231\u0233\u2c65\u023c\u019a\u2c66\u0242\u0180\u0289\u028c\u0247\u0249\u024b\u024d\u024f\u03b9\u0371\u0373\u0377\u03f3\u03ac\u03ad\u03ae\u03af\u03cc\u03cd\u03ce\u03b1\u03b2\u03b3\u03b4\u03b5\u03b6\u03b7\u03b8\u03b9\u03ba\u03bb\u03bc\u03bd\u03be\u03bf\u03c0\u03c1\u03c3\u03c4\u03c5\u03c6\u03c7\u03c8\u03c9\u03ca\u03cb\u03c3\u03d7\u03b2\u03b8\u03c6\u03c0\u03d9\u03db\u03dd\u03df\u03e1\u03e3\u03e5\u03e7\u03e9\u03eb\u03ed\u03ef\u03ba\u03c1\u03b8\u03b5\u03f8\u03f2\u03fb\u037b\u037c\u037d\u0450\u0451\u0452\u0453\u0454\u0455\u0456\u0457\u0458\u0459\u045a\u045b\u045c\u045d\u045e\u045f\u0430\u0431\u0432\u0433\u0434\u0435\u0436\u0437\u0438\u0439\u043a\u043b\u043c\u043d\u043e\u043f\u0440\u0441\u0442\u0443\u0444\u0445\u0446\u0447\u0448\u0449\u044a\u044b\u044c\u044d\u044e\u044f\u0461\u0463\u0465\u0467\u0469\u046b\u046d\u046f\u0471\u0473\u0475\u0477\u0479\u047b\u047d\u047f\u0481\u048b\u048d\u048f\u0491\u0493\u0495\u0497\u0499\u049b\u049d\u049f\u04a1\u04a3\u04a5\u04a7\u04a9\u04ab\u04ad\u04af\u04b1\u04b3\u04b5\u04b7\u04b9\u04bb\u04bd\u04bf\u04cf\u04c2\u04c4\u04c6\u04c8\u04ca\u04cc\u04ce\u04d1\u04d3\u04d5\u04d7\u04d9\u04db\u04dd\u04df\u04e1\u04e3\u04e5\u04e7\u04e9\u04eb\u04ed\u04ef\u04f1\u04f3\u04f5\u04f7\u04f9\u04fb\u04fd\u04ff\u0501\u0503\u0505\u0507\u0509\u050b\u050d\u050f\u0511\u0513\u0515\u0517\u0519\u051b\u051d\u051f\u0521\u0523\u0525\u0527\u0529\u052b\u052d\u052f\u0561\u0562\u0563\u0564\u0565\u0566\u0567\u0568\u0569\u056a\u056b\u056c\u056d\u056e\u056f\u0570\u0571\u0572\u0573\u0574\u0575\u0576\u0577\u0578\u0579\u057a\u057b\u057c\u057d\u057e\u057f\u0580\u0581\u0582\u0583\u0584\u0585\u0586\u2d00\u2d01\u2d02\u2d03\u2d04\u2d05\u2d06\u2d07\u2d08\u2d09\u2d0a\u2d0b\u2d0c\u2d0d\u2d0e\u2d0f\u2d10\u2d11\u2d12\u2d13\u2d14\u2d15\u2d16\u2d17\u2d18\u2d19\u2d1a\u2d1b\u2d1c\u2d1d\u2d1e\u2d1f\u2d20\u2d21\u2d22\u2d23\u2d24\u2d25\u2d27\u2d2d\u13f0\u13f1\u13f2\u13f3\u13f4\u13f5\u0432\u0434\u043e\u0441\u0442\u0442\u044a\u0463\ua64b\u10d0\u10d1\u10d2\u10d3\u10d4\u10d5\u10d6\u10d7\u10d8\u10d9\u10da\u10db\u10dc\u10dd\u10de\u10df\u10e0\u10e1\u10e2\u10e3\u10e4\u10e5\u10e6\u10e7\u10e8\u10e9\u10ea\u10eb\u10ec\u10ed\u10ee\u10ef\u10f0\u10f1\u10f2\u10f3\u10f4\u10f5\u10f6\u10f7\u10f8\u10f9\u10fa\u10fd\u10fe\u10ff\u1e01\u1e03\u1e05\u1e07\u1e09\u1e0b\u1e0d\u1e0f\u1e11\u1e13\u1e15\u1e17\u1e19\u1e1b\u1e1d\u1e1f\u1e21\u1e23\u1e25\u1e27\u1e29\u1e2b\u1e2d\u1e2f\u1e31\u1e33\u1e35\u1e37\u1e39\u1e3b\u1e3d\u1e3f\u1e41\u1e43\u1e45\u1e47\u1e49\u1e4b\u1e4d\u1e4f\u1e51\u1e53\u1e55\u1e57\u1e59\u1e5b\u1e5d\u1e5f\u1e61\u1e63\u1e65\u1e67\u1e69\u1e6b\u1e6d\u1e6f\u1e71\u1e73\u1e75\u1e77\u1e79\u1e7b\u1e7d\u1e7f\u1e81\u1e83\u1e85\u1e87\u1e89\u1e8b\u1e8d\u1e8f\u1e91\u1e93\u1e95\u1e61\u1ea1\u1ea3\u1ea5\u1ea7\u1ea9\u1eab\u1ead\u1eaf\u1eb1\u1eb3\u1eb5\u1eb7\u1eb9\u1ebb\u1ebd\u1ebf\u1ec1\u1ec3\u1ec5\u1ec7\u1ec9\u1ecb\u1ecd\u1ecf\u1ed1\u1ed3\u1ed5\u1ed7\u1ed9\u1edb\u1edd\u1edf\u1ee1\u1ee3\u1ee5\u1ee7\u1ee9\u1eeb\u1eed\u1eef\u1ef1\u1ef3\u1ef5\u1ef7\u1ef9\u1efb\u1efd\u1eff\u1f00\u1f01\u1f02\u1f03\u1f04\u1f05\u1f06\u1f07\u1f10\u1f11\u1f12\u1f13\u1f14\u1f15\u1f20\u1f21\u1f22\u1f23\u1f24\u1f25\u1f26\u1f27\u1f30\u1f31\u1f32\u1f33\u1f34\u1f35\u1f36\u1f37\u1f40\u1f41\u1f42\u1f43\u1f44\u1f45\u1f51\u1f53\u1f55\u1f57\u1f60\u1f61\u1f62\u1f63\u1f64\u1f65\u1f66\u1f67\u1fb0\u1fb1\u1f70\u1f71\u03b9\u1f72\u1f73\u1f74\u1f75\u1fd0\u1fd1\u1f76\u1f77\u1fe0\u1fe1\u1f7a\u1f7b\u1fe5\u1f78\u1f79\u1f7c\u1f7d\u03c9k\u00e5\u214e\u2170\u2171\u2172\u2173\u2174\u2175\u2176\u2177\u2178\u2179\u217a\u217b\u217c\u217d\u217e\u217f\u2184\u24d0\u24d1\u24d2\u24d3\u24d4\u24d5\u24d6\u24d7\u24d8\u24d9\u24da\u24db\u24dc\u24dd\u24de\u24df\u24e0\u24e1\u24e2\u24e3\u24e4\u24e5\u24e6\u24e7\u24e8\u24e9\u2c30\u2c31\u2c32\u2c33\u2c34\u2c35\u2c36\u2c37\u2c38\u2c39\u2c3a\u2c3b\u2c3c\u2c3d\u2c3e\u2c3f\u2c40\u2c41\u2c42\u2c43\u2c44\u2c45\u2c46\u2c47\u2c48\u2c49\u2c4a\u2c4b\u2c4c\u2c4d\u2c4e\u2c4f\u2c50\u2c51\u2c52\u2c53\u2c54\u2c55\u2c56\u2c57\u2c58\u2c59\u2c5a\u2c5b\u2c5c\u2c5d\u2c5e\u2c61\u026b\u1d7d\u027d\u2c68\u2c6a\u2c6c\u0251\u0271\u0250\u0252\u2c73\u2c76\u023f\u0240\u2c81\u2c83\u2c85\u2c87\u2c89\u2c8b\u2c8d\u2c8f\u2c91\u2c93\u2c95\u2c97\u2c99\u2c9b\u2c9d\u2c9f\u2ca1\u2ca3\u2ca5\u2ca7\u2ca9\u2cab\u2cad\u2caf\u2cb1\u2cb3\u2cb5\u2cb7\u2cb9\u2cbb\u2cbd\u2cbf\u2cc1\u2cc3\u2cc5\u2cc7\u2cc9\u2ccb\u2ccd\u2ccf\u2cd1\u2cd3\u2cd5\u2cd7\u2cd9\u2cdb\u2cdd\u2cdf\u2ce1\u2ce3\u2cec\u2cee\u2cf3\ua641\ua643\ua645\ua647\ua649\ua64b\ua64d\ua64f\ua651\ua653\ua655\ua657\ua659\ua65b\ua65d\ua65f\ua661\ua663\ua665\ua667\ua669\ua66b\ua66d\ua681\ua683\ua685\ua687\ua689\ua68b\ua68d\ua68f\ua691\ua693\ua695\ua697\ua699\ua69b\ua723\ua725\ua727\ua729\ua72b\ua72d\ua72f\ua733\ua735\ua737\ua739\ua73b\ua73d\ua73f\ua741\ua743\ua745\ua747\ua749\ua74b\ua74d\ua74f\ua751\ua753\ua755\ua757\ua759\ua75b\ua75d\ua75f\ua761\ua763\ua765\ua767\ua769\ua76b\ua76d\ua76f\ua77a\ua77c\u1d79\ua77f\ua781\ua783\ua785\ua787\ua78c\u0265\ua791\ua793\ua797\ua799\ua79b\ua79d\ua79f\ua7a1\ua7a3\ua7a5\ua7a7\ua7a9\u0266\u025c\u0261\u026c\u026a\u029e\u0287\u029d\uab53\ua7b5\ua7b7\ua7b9\ua7bb\ua7bd\ua7bf\ua7c3\ua794\u0282\u1d8e\ua7c8\ua7ca\ua7f6\u13a0\u13a1\u13a2\u13a3\u13a4\u13a5\u13a6\u13a7\u13a8\u13a9\u13aa\u13ab\u13ac\u13ad\u13ae\u13af\u13b0\u13b1\u13b2\u13b3\u13b4\u13b5\u13b6\u13b7\u13b8\u13b9\u13ba\u13bb\u13bc\u13bd\u13be\u13bf\u13c0\u13c1\u13c2\u13c3\u13c4\u13c5\u13c6\u13c7\u13c8\u13c9\u13ca\u13cb\u13cc\u13cd\u13ce\u13cf\u13d0\u13d1\u13d2\u13d3\u13d4\u13d5\u13d6\u13d7\u13d8\u13d9\u13da\u13db\u13dc\u13dd\u13de\u13df\u13e0\u13e1\u13e2\u13e3\u13e4\u13e5\u13e6\u13e7\u13e8\u13e9\u13ea\u13eb\u13ec\u13ed\u13ee\u13ef\uff41\uff42\uff43\uff44\uff45\uff46\uff47\uff48\uff49\uff4a\uff4b\uff4c\uff4d\uff4e\uff4f\uff50\uff51\uff52\uff53\uff54\uff55\uff56\uff57\uff58\uff59\uff5a\u00df\u1f80\u1f81\u1f82\u1f83\u1f84\u1f85\u1f86\u1f87\u1f90\u1f91\u1f92\u1f93\u1f94\u1f95\u1f96\u1f97\u1fa0\u1fa1\u1fa2\u1fa3\u1fa4\u1fa5\u1fa6\u1fa7\u1fb3\u1fc3\u1ff3"_j))));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_lower = sp[0].o;
	LINE_NUMBER(371);
	clinit_regexodus_ds_CharCharMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_CharCharMap);
	clinit_regexodus_Category(ctx);
	sp[1].o = (jobject)SF_regexodus_Category_upper;
	init_regexodus_ds_CharCharMap_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_upperToLower = sp[0].o;
	LINE_NUMBER(372);
	clinit_regexodus_ds_CharCharMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_CharCharMap);
	clinit_regexodus_Category(ctx);
	sp[1].o = (jobject)SF_regexodus_Category_upper;
	init_regexodus_ds_CharCharMap_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_lowerToUpper = sp[0].o;
	LINE_NUMBER(375);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_upper;
	frame[0].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_50:;
	INST_ILOAD(0);
	if ((--sp)->i < 0) goto label_51;
	{
	LINE_NUMBER(376);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_upperToLower;
	clinit_regexodus_Category(ctx);
	sp[1].o = (jobject)SF_regexodus_Category_upper;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[0].i));
	clinit_regexodus_Category(ctx);
	sp[1].o = (jobject)SF_regexodus_Category_lower;
	jint temp1 = (jint)((func_regexodus_ds_CharCharMap_put_char_char_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_put_char_char_R_char])(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[0].i))));
	LINE_NUMBER(377);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_lowerToUpper;
	clinit_regexodus_Category(ctx);
	sp[1].o = (jobject)SF_regexodus_Category_lower;
	jint temp2 = (jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[0].i));
	clinit_regexodus_Category(ctx);
	sp[1].o = (jobject)SF_regexodus_Category_upper;
	jint temp3 = (jint)((func_regexodus_ds_CharCharMap_put_char_char_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_CharCharMap_put_char_char_R_char])(ctx, sp[0].o, temp2, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[0].i))));
	LINE_NUMBER(375);
	INST_IINC(0, -1);
	goto label_50;
	}
label_51:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject) createArray(ctx, &class_char, (73));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (40);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (60);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (91);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (123);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (3898);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (3900);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (5787);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (8261);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (8317);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (8333);
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (8968);
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (8970);
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (9001);
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (10088);
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (10090);
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (10092);
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (10094);
	ARRAY_ACCESS(jchar, sp[0].o, (17)) = (10096);
	ARRAY_ACCESS(jchar, sp[0].o, (18)) = (10098);
	ARRAY_ACCESS(jchar, sp[0].o, (19)) = (10100);
	ARRAY_ACCESS(jchar, sp[0].o, (20)) = (10181);
	ARRAY_ACCESS(jchar, sp[0].o, (21)) = (10214);
	ARRAY_ACCESS(jchar, sp[0].o, (22)) = (10216);
	ARRAY_ACCESS(jchar, sp[0].o, (23)) = (10218);
	ARRAY_ACCESS(jchar, sp[0].o, (24)) = (10220);
	ARRAY_ACCESS(jchar, sp[0].o, (25)) = (10222);
	ARRAY_ACCESS(jchar, sp[0].o, (26)) = (10627);
	ARRAY_ACCESS(jchar, sp[0].o, (27)) = (10629);
	ARRAY_ACCESS(jchar, sp[0].o, (28)) = (10631);
	ARRAY_ACCESS(jchar, sp[0].o, (29)) = (10633);
	ARRAY_ACCESS(jchar, sp[0].o, (30)) = (10635);
	ARRAY_ACCESS(jchar, sp[0].o, (31)) = (10637);
	ARRAY_ACCESS(jchar, sp[0].o, (32)) = (10639);
	ARRAY_ACCESS(jchar, sp[0].o, (33)) = (10641);
	ARRAY_ACCESS(jchar, sp[0].o, (34)) = (10643);
	ARRAY_ACCESS(jchar, sp[0].o, (35)) = (10645);
	ARRAY_ACCESS(jchar, sp[0].o, (36)) = (10647);
	ARRAY_ACCESS(jchar, sp[0].o, (37)) = (10712);
	ARRAY_ACCESS(jchar, sp[0].o, (38)) = (10714);
	ARRAY_ACCESS(jchar, sp[0].o, (39)) = (10748);
	ARRAY_ACCESS(jchar, sp[0].o, (40)) = (11810);
	ARRAY_ACCESS(jchar, sp[0].o, (41)) = (11812);
	ARRAY_ACCESS(jchar, sp[0].o, (42)) = (11814);
	ARRAY_ACCESS(jchar, sp[0].o, (43)) = (11816);
	ARRAY_ACCESS(jchar, sp[0].o, (44)) = (12296);
	ARRAY_ACCESS(jchar, sp[0].o, (45)) = (12298);
	ARRAY_ACCESS(jchar, sp[0].o, (46)) = (12300);
	ARRAY_ACCESS(jchar, sp[0].o, (47)) = (12302);
	ARRAY_ACCESS(jchar, sp[0].o, (48)) = (12304);
	ARRAY_ACCESS(jchar, sp[0].o, (49)) = (12308);
	ARRAY_ACCESS(jchar, sp[0].o, (50)) = (12310);
	ARRAY_ACCESS(jchar, sp[0].o, (51)) = (12312);
	ARRAY_ACCESS(jchar, sp[0].o, (52)) = (12314);
	ARRAY_ACCESS(jchar, sp[0].o, (53)) = (12317);
	ARRAY_ACCESS(jchar, sp[0].o, (54)) = (jint(64831));
	ARRAY_ACCESS(jchar, sp[0].o, (55)) = (jint(65047));
	ARRAY_ACCESS(jchar, sp[0].o, (56)) = (jint(65077));
	ARRAY_ACCESS(jchar, sp[0].o, (57)) = (jint(65079));
	ARRAY_ACCESS(jchar, sp[0].o, (58)) = (jint(65081));
	ARRAY_ACCESS(jchar, sp[0].o, (59)) = (jint(65083));
	ARRAY_ACCESS(jchar, sp[0].o, (60)) = (jint(65085));
	ARRAY_ACCESS(jchar, sp[0].o, (61)) = (jint(65087));
	ARRAY_ACCESS(jchar, sp[0].o, (62)) = (jint(65089));
	ARRAY_ACCESS(jchar, sp[0].o, (63)) = (jint(65091));
	ARRAY_ACCESS(jchar, sp[0].o, (64)) = (jint(65095));
	ARRAY_ACCESS(jchar, sp[0].o, (65)) = (jint(65113));
	ARRAY_ACCESS(jchar, sp[0].o, (66)) = (jint(65115));
	ARRAY_ACCESS(jchar, sp[0].o, (67)) = (jint(65117));
	ARRAY_ACCESS(jchar, sp[0].o, (68)) = (jint(65288));
	ARRAY_ACCESS(jchar, sp[0].o, (69)) = (jint(65339));
	ARRAY_ACCESS(jchar, sp[0].o, (70)) = (jint(65371));
	ARRAY_ACCESS(jchar, sp[0].o, (71)) = (jint(65375));
	ARRAY_ACCESS(jchar, sp[0].o, (72)) = (jint(65378));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_openers = sp[0].o;
	LINE_NUMBER(386);
	sp[0].o = (jobject) createArray(ctx, &class_char, (73));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (41);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (62);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (93);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (125);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (3899);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (3901);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (5788);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (8262);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (8318);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (8334);
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (8969);
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (8971);
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (9002);
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (10089);
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (10091);
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (10093);
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (10095);
	ARRAY_ACCESS(jchar, sp[0].o, (17)) = (10097);
	ARRAY_ACCESS(jchar, sp[0].o, (18)) = (10099);
	ARRAY_ACCESS(jchar, sp[0].o, (19)) = (10101);
	ARRAY_ACCESS(jchar, sp[0].o, (20)) = (10182);
	ARRAY_ACCESS(jchar, sp[0].o, (21)) = (10215);
	ARRAY_ACCESS(jchar, sp[0].o, (22)) = (10217);
	ARRAY_ACCESS(jchar, sp[0].o, (23)) = (10219);
	ARRAY_ACCESS(jchar, sp[0].o, (24)) = (10221);
	ARRAY_ACCESS(jchar, sp[0].o, (25)) = (10223);
	ARRAY_ACCESS(jchar, sp[0].o, (26)) = (10628);
	ARRAY_ACCESS(jchar, sp[0].o, (27)) = (10630);
	ARRAY_ACCESS(jchar, sp[0].o, (28)) = (10632);
	ARRAY_ACCESS(jchar, sp[0].o, (29)) = (10634);
	ARRAY_ACCESS(jchar, sp[0].o, (30)) = (10636);
	ARRAY_ACCESS(jchar, sp[0].o, (31)) = (10638);
	ARRAY_ACCESS(jchar, sp[0].o, (32)) = (10640);
	ARRAY_ACCESS(jchar, sp[0].o, (33)) = (10642);
	ARRAY_ACCESS(jchar, sp[0].o, (34)) = (10644);
	ARRAY_ACCESS(jchar, sp[0].o, (35)) = (10646);
	ARRAY_ACCESS(jchar, sp[0].o, (36)) = (10648);
	ARRAY_ACCESS(jchar, sp[0].o, (37)) = (10713);
	ARRAY_ACCESS(jchar, sp[0].o, (38)) = (10715);
	ARRAY_ACCESS(jchar, sp[0].o, (39)) = (10749);
	ARRAY_ACCESS(jchar, sp[0].o, (40)) = (11811);
	ARRAY_ACCESS(jchar, sp[0].o, (41)) = (11813);
	ARRAY_ACCESS(jchar, sp[0].o, (42)) = (11815);
	ARRAY_ACCESS(jchar, sp[0].o, (43)) = (11817);
	ARRAY_ACCESS(jchar, sp[0].o, (44)) = (12297);
	ARRAY_ACCESS(jchar, sp[0].o, (45)) = (12299);
	ARRAY_ACCESS(jchar, sp[0].o, (46)) = (12301);
	ARRAY_ACCESS(jchar, sp[0].o, (47)) = (12303);
	ARRAY_ACCESS(jchar, sp[0].o, (48)) = (12305);
	ARRAY_ACCESS(jchar, sp[0].o, (49)) = (12309);
	ARRAY_ACCESS(jchar, sp[0].o, (50)) = (12311);
	ARRAY_ACCESS(jchar, sp[0].o, (51)) = (12313);
	ARRAY_ACCESS(jchar, sp[0].o, (52)) = (12315);
	ARRAY_ACCESS(jchar, sp[0].o, (53)) = (12318);
	ARRAY_ACCESS(jchar, sp[0].o, (54)) = (jint(64830));
	ARRAY_ACCESS(jchar, sp[0].o, (55)) = (jint(65048));
	ARRAY_ACCESS(jchar, sp[0].o, (56)) = (jint(65078));
	ARRAY_ACCESS(jchar, sp[0].o, (57)) = (jint(65080));
	ARRAY_ACCESS(jchar, sp[0].o, (58)) = (jint(65082));
	ARRAY_ACCESS(jchar, sp[0].o, (59)) = (jint(65084));
	ARRAY_ACCESS(jchar, sp[0].o, (60)) = (jint(65086));
	ARRAY_ACCESS(jchar, sp[0].o, (61)) = (jint(65088));
	ARRAY_ACCESS(jchar, sp[0].o, (62)) = (jint(65090));
	ARRAY_ACCESS(jchar, sp[0].o, (63)) = (jint(65092));
	ARRAY_ACCESS(jchar, sp[0].o, (64)) = (jint(65096));
	ARRAY_ACCESS(jchar, sp[0].o, (65)) = (jint(65114));
	ARRAY_ACCESS(jchar, sp[0].o, (66)) = (jint(65116));
	ARRAY_ACCESS(jchar, sp[0].o, (67)) = (jint(65118));
	ARRAY_ACCESS(jchar, sp[0].o, (68)) = (jint(65289));
	ARRAY_ACCESS(jchar, sp[0].o, (69)) = (jint(65341));
	ARRAY_ACCESS(jchar, sp[0].o, (70)) = (jint(65373));
	ARRAY_ACCESS(jchar, sp[0].o, (71)) = (jint(65376));
	ARRAY_ACCESS(jchar, sp[0].o, (72)) = (jint(65379));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_closers = sp[0].o;
	LINE_NUMBER(392);
	clinit_regexodus_ds_CharCharMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_CharCharMap);
	clinit_regexodus_Category(ctx);
	sp[1].o = (jobject)SF_regexodus_Category_openers;
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_closers;
	init_regexodus_ds_CharCharMap_Array1_char_Array1_char(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_openBrackets = sp[0].o;
	LINE_NUMBER(393);
	clinit_regexodus_ds_CharCharMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ds_CharCharMap);
	clinit_regexodus_Category(ctx);
	sp[1].o = (jobject)SF_regexodus_Category_closers;
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_openers;
	init_regexodus_ds_CharCharMap_Array1_char_Array1_char(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_closingBrackets = sp[0].o;
	LINE_NUMBER(509);
	clinit_java_util_LinkedHashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedHashMap);
	init_java_util_LinkedHashMap_int(ctx, sp[0].o, (16));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_superCategories = sp[0].o;
	LINE_NUMBER(510);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_superCategories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"C"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_C;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(511);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_superCategories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"L"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_L;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(512);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_superCategories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"M"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_M;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(513);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_superCategories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"N"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_N;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(514);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_superCategories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Z"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Z;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(515);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_superCategories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"P"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_P;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(516);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_superCategories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"S"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_S;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(517);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_superCategories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"J"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Identifier;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(518);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_superCategories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"G"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Space;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(520);
	clinit_java_util_LinkedHashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedHashMap);
	init_java_util_LinkedHashMap_int(ctx, sp[0].o, (64));
	clinit_regexodus_Category(ctx);
	SF_regexodus_Category_categories = sp[0].o;
	LINE_NUMBER(521);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"C"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_C;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(522);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"L"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_L;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(523);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"M"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_M;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(524);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"N"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_N;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(525);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Z"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Z;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(526);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"P"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_P;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(527);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"S"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_S;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(528);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"J"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Identifier;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(529);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"G"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Space;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(530);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Cc"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Cc;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(531);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Cf"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Cf;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(532);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Co"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Co;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(533);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Cn"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Cn;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(534);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Cs"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Cs;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(535);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Lu"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Lu;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(536);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Ll"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Ll;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(537);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Lt"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Lt;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(538);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Lm"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Lm;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(539);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Lo"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Lo;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(540);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Lc"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Lc;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(541);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Mn"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Mn;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(542);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Me"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Me;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(543);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Mc"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Mc;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(544);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Nd"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Nd;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(545);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Nl"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Nl;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(546);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"No"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_No;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(547);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Zs"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Zs;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(548);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Zl"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Zl;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(549);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Zp"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Zp;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(550);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Pd"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Pd;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(551);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Ps"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Ps;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(552);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Pi"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Pi;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(553);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Pe"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Pe;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(554);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Pf"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Pf;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(555);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Pc"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Pc;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(556);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Po"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Po;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(557);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Sm"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Sm;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(558);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Sc"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Sc;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(559);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Sk"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Sk;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(560);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"So"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_So;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(561);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Zh"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Horizontal;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(562);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Zv"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Vertical;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(563);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Gh"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Horizontal;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(564);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Gv"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_Vertical;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(565);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Js"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_IdentifierStart;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(566);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_categories;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Jp"_j));
	clinit_regexodus_Category(ctx);
	sp[2].o = (jobject)SF_regexodus_Category_IdentifierPart;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Category[] {
	(void *) M_regexodus_Category_hashCode_R_int,
	(void *) M_regexodus_Category_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Category_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Category_contents_R_Array1_char,
	(void *) M_regexodus_Category_makeBlocks_R_Array1_regexodus_Block,
	(void *) M_regexodus_Category_contains_char_R_boolean,
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
	{ "contents", "()[C" },
	{ "makeBlocks", "()[Lregexodus/Block;" },
	{ "contains", "(C)Z" },
};

static FieldMetadata fields[] {
	{ "length", &class_int, offsetof(regexodus_Category, F_length), "I", 17 },
	{ "n", &class_int, offsetof(regexodus_Category, F_n), "I", 2 },
	{ "cal", getArrayClass(&class_char, 1), offsetof(regexodus_Category, F_cal), "[C", 18 },
	{ "blocks", getArrayClass(&class_regexodus_Block, 1), offsetof(regexodus_Category, F_blocks), "[Lregexodus/Block;", 16 },
	{ "C", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_C, "Lregexodus/Category;", 25 },
	{ "Co", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Co, "Lregexodus/Category;", 25 },
	{ "Cn", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Cn, "Lregexodus/Category;", 25 },
	{ "Cc", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Cc, "Lregexodus/Category;", 25 },
	{ "Cf", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Cf, "Lregexodus/Category;", 25 },
	{ "Cs", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Cs, "Lregexodus/Category;", 25 },
	{ "L", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_L, "Lregexodus/Category;", 25 },
	{ "Lu", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Lu, "Lregexodus/Category;", 25 },
	{ "Ll", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Ll, "Lregexodus/Category;", 25 },
	{ "Lt", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Lt, "Lregexodus/Category;", 25 },
	{ "Lm", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Lm, "Lregexodus/Category;", 25 },
	{ "Lo", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Lo, "Lregexodus/Category;", 25 },
	{ "Lc", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Lc, "Lregexodus/Category;", 25 },
	{ "M", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_M, "Lregexodus/Category;", 25 },
	{ "Mn", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Mn, "Lregexodus/Category;", 25 },
	{ "Me", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Me, "Lregexodus/Category;", 25 },
	{ "Mc", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Mc, "Lregexodus/Category;", 25 },
	{ "N", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_N, "Lregexodus/Category;", 25 },
	{ "Nd", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Nd, "Lregexodus/Category;", 25 },
	{ "Nl", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Nl, "Lregexodus/Category;", 25 },
	{ "No", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_No, "Lregexodus/Category;", 25 },
	{ "Z", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Z, "Lregexodus/Category;", 25 },
	{ "Zs", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Zs, "Lregexodus/Category;", 25 },
	{ "Zl", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Zl, "Lregexodus/Category;", 25 },
	{ "Zp", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Zp, "Lregexodus/Category;", 25 },
	{ "P", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_P, "Lregexodus/Category;", 25 },
	{ "Pd", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Pd, "Lregexodus/Category;", 25 },
	{ "Ps", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Ps, "Lregexodus/Category;", 25 },
	{ "Pi", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Pi, "Lregexodus/Category;", 25 },
	{ "Pe", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Pe, "Lregexodus/Category;", 25 },
	{ "Pf", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Pf, "Lregexodus/Category;", 25 },
	{ "Pc", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Pc, "Lregexodus/Category;", 25 },
	{ "Po", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Po, "Lregexodus/Category;", 25 },
	{ "S", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_S, "Lregexodus/Category;", 25 },
	{ "Sm", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Sm, "Lregexodus/Category;", 25 },
	{ "Sc", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Sc, "Lregexodus/Category;", 25 },
	{ "Sk", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Sk, "Lregexodus/Category;", 25 },
	{ "So", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_So, "Lregexodus/Category;", 25 },
	{ "Word", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Word, "Lregexodus/Category;", 25 },
	{ "Identifier", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Identifier, "Lregexodus/Category;", 25 },
	{ "IdentifierStart", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_IdentifierStart, "Lregexodus/Category;", 25 },
	{ "IdentifierPart", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_IdentifierPart, "Lregexodus/Category;", 25 },
	{ "Horizontal", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Horizontal, "Lregexodus/Category;", 25 },
	{ "Vertical", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Vertical, "Lregexodus/Category;", 25 },
	{ "Space", &class_regexodus_Category, (intptr_t) &SF_regexodus_Category_Space, "Lregexodus/Category;", 25 },
	{ "upper", getArrayClass(&class_char, 1), (intptr_t) &SF_regexodus_Category_upper, "[C", 26 },
	{ "lower", getArrayClass(&class_char, 1), (intptr_t) &SF_regexodus_Category_lower, "[C", 26 },
	{ "upperToLower", &class_regexodus_ds_CharCharMap, (intptr_t) &SF_regexodus_Category_upperToLower, "Lregexodus/ds/CharCharMap;", 26 },
	{ "lowerToUpper", &class_regexodus_ds_CharCharMap, (intptr_t) &SF_regexodus_Category_lowerToUpper, "Lregexodus/ds/CharCharMap;", 26 },
	{ "openers", getArrayClass(&class_char, 1), (intptr_t) &SF_regexodus_Category_openers, "[C", 26 },
	{ "closers", getArrayClass(&class_char, 1), (intptr_t) &SF_regexodus_Category_closers, "[C", 26 },
	{ "openBrackets", &class_regexodus_ds_CharCharMap, (intptr_t) &SF_regexodus_Category_openBrackets, "Lregexodus/ds/CharCharMap;", 26 },
	{ "closingBrackets", &class_regexodus_ds_CharCharMap, (intptr_t) &SF_regexodus_Category_closingBrackets, "Lregexodus/ds/CharCharMap;", 26 },
	{ "categories", &class_java_util_LinkedHashMap, (intptr_t) &SF_regexodus_Category_categories, "Ljava/util/LinkedHashMap;", 25 },
	{ "superCategories", &class_java_util_LinkedHashMap, (intptr_t) &SF_regexodus_Category_superCategories, "Ljava/util/LinkedHashMap;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Category, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_regexodus_Category_Array1_int_java_lang_String, 0, "([ILjava/lang/String;)V", 2 },
	{ "contents", (intptr_t) M_regexodus_Category_contents_R_Array1_char, VTABLE_regexodus_Category_contents_R_Array1_char, "()[C", 1 },
	{ "makeBlocks", (intptr_t) M_regexodus_Category_makeBlocks_R_Array1_regexodus_Block, VTABLE_regexodus_Category_makeBlocks_R_Array1_regexodus_Block, "()[Lregexodus/Block;", 2 },
	{ "contains", (intptr_t) M_regexodus_Category_contains_char_R_boolean, VTABLE_regexodus_Category_contains_char_R_boolean, "(C)Z", 1 },
	{ "toString", (intptr_t) M_regexodus_Category_toString_R_java_lang_String, VTABLE_regexodus_Category_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_regexodus_Category_equals_java_lang_Object_R_boolean, VTABLE_regexodus_Category_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_Category_hashCode_R_int, VTABLE_regexodus_Category_hashCode_R_int, "()I", 1 },
	{ "caseFold", (intptr_t) SM_regexodus_Category_caseFold_char_R_char, 0, "(C)C", 9 },
	{ "caseDown", (intptr_t) SM_regexodus_Category_caseDown_char_R_char, 0, "(C)C", 9 },
	{ "caseUp", (intptr_t) SM_regexodus_Category_caseUp_char_R_char, 0, "(C)C", 9 },
	{ "matchBracket", (intptr_t) SM_regexodus_Category_matchBracket_char_R_char, 0, "(C)C", 9 },
	{ "reverseWithBrackets", (intptr_t) SM_regexodus_Category_reverseWithBrackets_java_lang_CharSequence_R_java_lang_String, 0, "(Ljava/lang/CharSequence;)Ljava/lang/String;", 9 },
	{ "reverseEqual", (intptr_t) SM_regexodus_Category_reverseEqual_java_lang_CharSequence_java_lang_CharSequence_R_boolean, 0, "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z", 9 },
	{ "reverseBracketEqual", (intptr_t) SM_regexodus_Category_reverseBracketEqual_java_lang_CharSequence_java_lang_CharSequence_R_boolean, 0, "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_regexodus_Category, 0, "()V", 8 },
};

Class class_regexodus_Category{
		.nativeName = (intptr_t) "regexodus/Category",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Category),
		.classVtable = (intptr_t) vtable_regexodus_Category,
		.staticInitializer = (intptr_t) clinit_regexodus_Category,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Category,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 59,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Category = registerClass(&class_regexodus_Category);

}
