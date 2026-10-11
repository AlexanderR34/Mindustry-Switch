#include "regexodus/Term.h"
#include "regexodus/Optimizer.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/HashMap.h"
#include "java/util/ArrayList.h"
#include "regexodus/Lookbehind.h"
#include "regexodus/Category.h"
#include "regexodus/REFlags.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/util/Arrays.h"
#include "regexodus/BackReference.h"
#include "regexodus/Lookahead.h"
#include "regexodus/Pattern.h"
#include "java/util/Iterator.h"
#include "regexodus/TermIterator.h"
#include "regexodus/IndependentGroup.h"
#include "java/lang/IllegalArgumentException.h"
#include "regexodus/Term.h"
#include "regexodus/Pretokenizer.h"
#include "regexodus/PatternSyntaxException.h"
#include "regexodus/Branch.h"
#include "regexodus/ds/IntBitSet.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "regexodus/CharacterClass.h"
#include "java/lang/NumberFormatException.h"
#include "regexodus/Group.h"
#include "regexodus/ConditionalExpr.h"
#include "java/lang/Class.h"
#include "java/util/List.h"

extern "C" {

jlong SF_regexodus_Term_serialVersionUID;
jint SF_regexodus_Term_CHAR;
jint SF_regexodus_Term_BITSET;
jint SF_regexodus_Term_BITSET2;
jint SF_regexodus_Term_ANY_CHAR;
jint SF_regexodus_Term_ANY_CHAR_NE;
jint SF_regexodus_Term_REG;
jint SF_regexodus_Term_REG_I;
jint SF_regexodus_Term_FIND;
jint SF_regexodus_Term_FINDREG;
jint SF_regexodus_Term_SUCCESS;
jint SF_regexodus_Term_BOUNDARY;
jint SF_regexodus_Term_DIRECTION;
jint SF_regexodus_Term_UBOUNDARY;
jint SF_regexodus_Term_UDIRECTION;
jint SF_regexodus_Term_GROUP_IN;
jint SF_regexodus_Term_GROUP_OUT;
jint SF_regexodus_Term_VOID;
jint SF_regexodus_Term_START;
jint SF_regexodus_Term_END;
jint SF_regexodus_Term_END_EOL;
jint SF_regexodus_Term_LINE_START;
jint SF_regexodus_Term_LINE_END;
jint SF_regexodus_Term_LAST_MATCH_END;
jint SF_regexodus_Term_CNT_SET_0;
jint SF_regexodus_Term_CNT_INC;
jint SF_regexodus_Term_CNT_GT_EQ;
jint SF_regexodus_Term_READ_CNT_LT;
jint SF_regexodus_Term_CRSTORE_CRINC;
jint SF_regexodus_Term_CR_SET_0;
jint SF_regexodus_Term_CR_LT;
jint SF_regexodus_Term_CR_GT_EQ;
jint SF_regexodus_Term_LITERAL_START;
jint SF_regexodus_Term_LITERAL_END;
jint SF_regexodus_Term_BRANCH;
jint SF_regexodus_Term_BRANCH_STORE_CNT;
jint SF_regexodus_Term_BRANCH_STORE_CNT_AUX1;
jint SF_regexodus_Term_PLOOKAHEAD_IN;
jint SF_regexodus_Term_PLOOKAHEAD_OUT;
jint SF_regexodus_Term_NLOOKAHEAD_IN;
jint SF_regexodus_Term_NLOOKAHEAD_OUT;
jint SF_regexodus_Term_PLOOKBEHIND_IN;
jint SF_regexodus_Term_PLOOKBEHIND_OUT;
jint SF_regexodus_Term_NLOOKBEHIND_IN;
jint SF_regexodus_Term_NLOOKBEHIND_OUT;
jint SF_regexodus_Term_INDEPENDENT_IN;
jint SF_regexodus_Term_INDEPENDENT_OUT;
jint SF_regexodus_Term_REPEAT_0_INF;
jint SF_regexodus_Term_REPEAT_MIN_INF;
jint SF_regexodus_Term_REPEAT_MIN_MAX;
jint SF_regexodus_Term_REPEAT_REG_MIN_INF;
jint SF_regexodus_Term_REPEAT_REG_MIN_MAX;
jint SF_regexodus_Term_BACKTRACK_0;
jint SF_regexodus_Term_BACKTRACK_MIN;
jint SF_regexodus_Term_BACKTRACK_FIND_MIN;
jint SF_regexodus_Term_BACKTRACK_FINDREG_MIN;
jint SF_regexodus_Term_BACKTRACK_REG_MIN;
jint SF_regexodus_Term_MEMREG_CONDITION;
jint SF_regexodus_Term_LOOKAHEAD_CONDITION_IN;
jint SF_regexodus_Term_LOOKAHEAD_CONDITION_OUT;
jint SF_regexodus_Term_LOOKBEHIND_CONDITION_IN;
jint SF_regexodus_Term_LOOKBEHIND_CONDITION_OUT;
jint SF_regexodus_Term_FIRST_TRANSPARENT;
jint SF_regexodus_Term_LAST_TRANSPARENT;
jint SF_regexodus_Term_VARS_LENGTH;
jint SF_regexodus_Term_MEMREG_COUNT;
jint SF_regexodus_Term_CNTREG_COUNT;
jint SF_regexodus_Term_DEPTH;
jint SF_regexodus_Term_LOOKAHEAD_COUNT;
jint SF_regexodus_Term_LIMITS_LENGTH;
jint SF_regexodus_Term_LIMITS_PARSE_RESULT_INDEX;
jint SF_regexodus_Term_LIMITS_OK;
jint SF_regexodus_Term_LIMITS_FAILURE;
jint SF_regexodus_Term_LITERAL_FLAG;
jint SF_regexodus_Term_instances;

void mark_regexodus_Term(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Term *) object;
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_failNext)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_failNext)->clazz)->markFunction)((jobject) self->F_failNext, mark, depth + 1);
	if (self->F_bitset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bitset)->clazz)->markFunction)((jobject) self->F_bitset, mark, depth + 1);
	if (self->F_bitset2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bitset2)->clazz)->markFunction)((jobject) self->F_bitset2, mark, depth + 1);
	if (self->F_categoryBitset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_categoryBitset)->clazz)->markFunction)((jobject) self->F_categoryBitset, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
	if (self->F_in)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_in)->clazz)->markFunction)((jobject) self->F_in, mark, depth + 1);
	if (self->F_out)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_out)->clazz)->markFunction)((jobject) self->F_out, mark, depth + 1);
	if (self->F_out1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_out1)->clazz)->markFunction)((jobject) self->F_out1, mark, depth + 1);
	if (self->F_first)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_first)->clazz)->markFunction)((jobject) self->F_first, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_branchOut)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_branchOut)->clazz)->markFunction)((jobject) self->F_branchOut, mark, depth + 1);
}

void clinit_regexodus_Term(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_Term_serialVersionUID = jlong(2528136757932720807ll);
	SF_regexodus_Term_CHAR = jint(0);
	SF_regexodus_Term_BITSET = jint(1);
	SF_regexodus_Term_BITSET2 = jint(2);
	SF_regexodus_Term_ANY_CHAR = jint(4);
	SF_regexodus_Term_ANY_CHAR_NE = jint(5);
	SF_regexodus_Term_REG = jint(6);
	SF_regexodus_Term_REG_I = jint(7);
	SF_regexodus_Term_FIND = jint(8);
	SF_regexodus_Term_FINDREG = jint(9);
	SF_regexodus_Term_SUCCESS = jint(10);
	SF_regexodus_Term_BOUNDARY = jint(11);
	SF_regexodus_Term_DIRECTION = jint(12);
	SF_regexodus_Term_UBOUNDARY = jint(13);
	SF_regexodus_Term_UDIRECTION = jint(14);
	SF_regexodus_Term_GROUP_IN = jint(15);
	SF_regexodus_Term_GROUP_OUT = jint(16);
	SF_regexodus_Term_VOID = jint(17);
	SF_regexodus_Term_START = jint(18);
	SF_regexodus_Term_END = jint(19);
	SF_regexodus_Term_END_EOL = jint(20);
	SF_regexodus_Term_LINE_START = jint(21);
	SF_regexodus_Term_LINE_END = jint(22);
	SF_regexodus_Term_LAST_MATCH_END = jint(23);
	SF_regexodus_Term_CNT_SET_0 = jint(24);
	SF_regexodus_Term_CNT_INC = jint(25);
	SF_regexodus_Term_CNT_GT_EQ = jint(26);
	SF_regexodus_Term_READ_CNT_LT = jint(27);
	SF_regexodus_Term_CRSTORE_CRINC = jint(28);
	SF_regexodus_Term_CR_SET_0 = jint(29);
	SF_regexodus_Term_CR_LT = jint(30);
	SF_regexodus_Term_CR_GT_EQ = jint(31);
	SF_regexodus_Term_LITERAL_START = jint(60);
	SF_regexodus_Term_LITERAL_END = jint(61);
	SF_regexodus_Term_BRANCH = jint(32);
	SF_regexodus_Term_BRANCH_STORE_CNT = jint(33);
	SF_regexodus_Term_BRANCH_STORE_CNT_AUX1 = jint(34);
	SF_regexodus_Term_PLOOKAHEAD_IN = jint(35);
	SF_regexodus_Term_PLOOKAHEAD_OUT = jint(36);
	SF_regexodus_Term_NLOOKAHEAD_IN = jint(37);
	SF_regexodus_Term_NLOOKAHEAD_OUT = jint(38);
	SF_regexodus_Term_PLOOKBEHIND_IN = jint(39);
	SF_regexodus_Term_PLOOKBEHIND_OUT = jint(40);
	SF_regexodus_Term_NLOOKBEHIND_IN = jint(41);
	SF_regexodus_Term_NLOOKBEHIND_OUT = jint(42);
	SF_regexodus_Term_INDEPENDENT_IN = jint(43);
	SF_regexodus_Term_INDEPENDENT_OUT = jint(44);
	SF_regexodus_Term_REPEAT_0_INF = jint(45);
	SF_regexodus_Term_REPEAT_MIN_INF = jint(46);
	SF_regexodus_Term_REPEAT_MIN_MAX = jint(47);
	SF_regexodus_Term_REPEAT_REG_MIN_INF = jint(48);
	SF_regexodus_Term_REPEAT_REG_MIN_MAX = jint(49);
	SF_regexodus_Term_BACKTRACK_0 = jint(50);
	SF_regexodus_Term_BACKTRACK_MIN = jint(51);
	SF_regexodus_Term_BACKTRACK_FIND_MIN = jint(52);
	SF_regexodus_Term_BACKTRACK_FINDREG_MIN = jint(53);
	SF_regexodus_Term_BACKTRACK_REG_MIN = jint(54);
	SF_regexodus_Term_MEMREG_CONDITION = jint(55);
	SF_regexodus_Term_LOOKAHEAD_CONDITION_IN = jint(56);
	SF_regexodus_Term_LOOKAHEAD_CONDITION_OUT = jint(57);
	SF_regexodus_Term_LOOKBEHIND_CONDITION_IN = jint(58);
	SF_regexodus_Term_LOOKBEHIND_CONDITION_OUT = jint(59);
	SF_regexodus_Term_FIRST_TRANSPARENT = jint(11);
	SF_regexodus_Term_LAST_TRANSPARENT = jint(31);
	SF_regexodus_Term_VARS_LENGTH = jint(4);
	SF_regexodus_Term_MEMREG_COUNT = jint(0);
	SF_regexodus_Term_CNTREG_COUNT = jint(1);
	SF_regexodus_Term_DEPTH = jint(2);
	SF_regexodus_Term_LOOKAHEAD_COUNT = jint(3);
	SF_regexodus_Term_LIMITS_LENGTH = jint(3);
	SF_regexodus_Term_LIMITS_PARSE_RESULT_INDEX = jint(2);
	SF_regexodus_Term_LIMITS_OK = jint(1);
	SF_regexodus_Term_LIMITS_FAILURE = jint(2);
	SF_regexodus_Term_LITERAL_FLAG = jint(64);
}

void init_regexodus_Term(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(211);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(149);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (17);
	LINE_NUMBER(174);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg = (jint(-1));
	LINE_NUMBER(187);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_cntreg = (jint(0));
	LINE_NUMBER(213);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_instanceNum = (clinit_regexodus_Term(ctx), (jint)SF_regexodus_Term_instances);
	LINE_NUMBER(214);
	clinit_regexodus_Term(ctx);
	SF_regexodus_Term_instances = ((clinit_regexodus_Term(ctx), (jint)SF_regexodus_Term_instances) + (jint(1)));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	((regexodus_Term *) NULL_CHECK(sp[1].o))->F_out = (jref) sp[2].o;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_in = (jref) sp[2].o;
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Term_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(219);
	init_regexodus_Term(ctx, (frame[0].o));
	LINE_NUMBER(220);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_Term_makeTree_java_lang_String_Array1_int_regexodus_Pattern(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeTree", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(224);
	clinit_regexodus_Term(ctx);
	SF_regexodus_Term_instances = (jint(0));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(226);
	SM_regexodus_Term_makeTree_Array1_char_int_int_Array1_int_regexodus_Pattern(ctx, (frame[3].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[3].o)))->length), (frame[1].o), (frame[2].o));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_Term_makeTree_Array1_char_int_int_Array1_int_regexodus_Pattern(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4) {
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeTree", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	frame[5].o = sp[0].o;
	LINE_NUMBER(235);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(236);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(238);
	clinit_regexodus_Pretokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Pretokenizer);
	init_regexodus_Pretokenizer_Array1_char_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(239);
	sp[0].o = frame[8].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[5].o;
	sp[3].o = frame[3].o;
	clinit_regexodus_Group(ctx);
	sp[4].o = gcAlloc(ctx, &class_regexodus_Group);
	init_regexodus_Group(ctx, sp[4].o);
	sp[0].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[6].o), (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(242);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[9].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (10);
	LINE_NUMBER(245);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[9].o)))->F_next;
	frame[10].o = sp[0].o;
	LINE_NUMBER(248);
	frame[11].o = (frame[10].o);
	LINE_NUMBER(249);
	sp[0].o = (jobject)SM_regexodus_Optimizer_find_regexodus_Term_R_regexodus_Optimizer(ctx, (frame[10].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(250);
	if ((frame[12].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_regexodus_Optimizer_makeFirst_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_regexodus_Optimizer_makeFirst_regexodus_Term_R_regexodus_Term])(ctx, (frame[12].o), (frame[10].o));
	frame[11].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_util_ArrayList_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_ArrayList_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[13].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_regexodus_TermIterator, sp[0].o));
	LINE_NUMBER(253);
	((func_regexodus_TermIterator_optimize) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_regexodus_TermIterator_optimize])(ctx, (frame[14].o));
	LINE_NUMBER(254);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(256);
	((regexodus_Pattern *) NULL_CHECK((frame[4].o)))->F_root = (jref) (frame[11].o);
	LINE_NUMBER(257);
	((regexodus_Pattern *) NULL_CHECK((frame[4].o)))->F_root = (jref) (frame[10].o);
	LINE_NUMBER(258);
	((regexodus_Pattern *) NULL_CHECK((frame[4].o)))->F_root0 = (jref) (frame[10].o);
	LINE_NUMBER(259);
	((regexodus_Pattern *) NULL_CHECK((frame[4].o)))->F_memregs = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0))));
	LINE_NUMBER(260);
	((regexodus_Pattern *) NULL_CHECK((frame[4].o)))->F_counters = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(1))));
	LINE_NUMBER(261);
	((regexodus_Pattern *) NULL_CHECK((frame[4].o)))->F_lookaheads = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(3))));
	LINE_NUMBER(262);
	((regexodus_Pattern *) NULL_CHECK((frame[4].o)))->F_namedGroupMap = (jref) (frame[7].o);
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[29];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeTree", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(267);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == (jint(4))) goto label_5;
	}
	{
	LINE_NUMBER(268);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vars.length should be 4, not "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(273);
	((func_regexodus_Pretokenizer_next) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pretokenizer_next])(ctx, (frame[0].o));
	LINE_NUMBER(274);
	M_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap(ctx, (frame[4].o), ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset), ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOutside), (frame[1].o), (frame[2].o), (frame[3].o), (frame[5].o), (frame[6].o));
	LINE_NUMBER(275);
	switch(((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype)) {
		case 2: goto label_9;
		case 3: goto label_10;
		case 4: goto label_11;
		case 5: goto label_12;
		case 6: goto label_13;
		case 7: goto label_14;
		case 8: goto label_15;
		case 9: goto label_16;
		case 10: goto label_17;
		case 11: goto label_18;
		case 12: goto label_19;
		case 13: goto label_20;
		case 40: goto label_21;
		case 41: goto label_22;
		case 124: goto label_23;
		default: goto label_24;
	}
	}
label_18:;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_regexodus_Pretokenizer_flags_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pretokenizer_flags_int_R_int])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(278);
	goto label_5;
	}
label_19:;
	{
	LINE_NUMBER(280);
	((func_regexodus_Pretokenizer_next) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pretokenizer_next])(ctx, (frame[0].o));
	LINE_NUMBER(281);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(282);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset;
	jint temp1 = (jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOutside;
	sp[1].o = frame[7].o;
	jobject temp2 = sp[1].o;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].o = temp2;
	sp += 4;
	if ((((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))) & (jint(1))) <= 0) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	if ((((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))) & (8)) <= 0) goto label_30;
	}
	INST_ICONST(1);
	goto label_31;
label_30:;
	INST_ICONST(0);
label_31:;
	{
	if ((((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))) & (16)) <= 0) goto label_32;
	}
	INST_ICONST(1);
	goto label_33;
label_32:;
	INST_ICONST(0);
label_33:;
	{
	if ((((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))) & (32)) <= 0) goto label_34;
	}
	INST_ICONST(1);
	goto label_35;
label_34:;
	INST_ICONST(0);
label_35:;
	{
	sp -= 8;
	SM_regexodus_CharacterClass_parseGroup_Array1_char_int_int_regexodus_Term_boolean_boolean_boolean_boolean(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].o, sp[4].i, sp[5].i, sp[6].i, sp[7].i);
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, (frame[4].o), (frame[7].o));
	LINE_NUMBER(286);
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(288);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(289);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	jint temp3 = jint(0);
	jint temp4 = (jint)((func_regexodus_Pretokenizer_flags_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pretokenizer_flags_int_R_int])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))));
	ARRAY_ACCESS(jint, sp[4].o, temp3) = temp4;
	clinit_regexodus_Group(ctx);
	sp[5].o = gcAlloc(ctx, &class_regexodus_Group);
	init_regexodus_Group(ctx, sp[5].o);
	sp[1].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[5].o), (frame[6].o));
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(290);
	goto label_5;
	}
label_20:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_groupName;
	frame[8].o = sp[0].o;
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[8].o), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_41;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[8].o));
	frame[9].i = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(299);
	goto label_42;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(297);
	frame[10].o = sp[0].o;
	LINE_NUMBER(298);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"group name starts with digit but is not a number"_j))));
	throwException(ctx, sp[0].o);	}
label_42:;
	{
	LINE_NUMBER(300);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[9].i));
	jint temp0 = (jint)((func_java_util_HashMap_containsValue_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_containsValue_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_44;
	}
	{
	LINE_NUMBER(301);
	if (((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_groupDeclared) == 0) goto label_44;
	}
	{
	LINE_NUMBER(302);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"group redeclaration: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"; use ({=id}...) for multiple group assignments"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_44:;
	{
	LINE_NUMBER(304);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))) > (frame[9].i)) goto label_47;
	}
	{
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = ((frame[9].i) + (jint(1)));
	goto label_47;
	}
label_41:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (frame[8].o));
	frame[10].o = (checkCast(ctx, &class_java_lang_Integer, sp[0].o));
	LINE_NUMBER(307);
	if ((frame[10].o) != nullptr) goto label_49;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[9].i = temp3;
	LINE_NUMBER(309);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_groupName;
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[9].i));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_47;
	}
label_49:;
	{
	LINE_NUMBER(311);
	if (((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_groupDeclared) == 0) goto label_52;
	}
	{
	LINE_NUMBER(312);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"group redeclaration "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"; use ({=name}...) for group reassignments"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_52:;
	{
	LINE_NUMBER(313);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[10].o));
	frame[9].i = temp0;
	}
label_47:;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(317);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = frame[3].o;
	clinit_regexodus_Group(ctx);
	sp[5].o = gcAlloc(ctx, &class_regexodus_Group);
	init_regexodus_Group_int(ctx, sp[5].o, (frame[9].i));
	sp[1].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[5].o), (frame[6].o));
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(318);
	goto label_5;
	}
label_21:;
	{
	LINE_NUMBER(320);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(321);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = frame[3].o;
	clinit_regexodus_Group(ctx);
	sp[5].o = gcAlloc(ctx, &class_regexodus_Group);
	sp[6].o = frame[2].o;
	jint temp3 = jint(0);
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[6].o, temp3);
	ARRAY_ACCESS(jint, sp[6].o, temp3) = (temp6 + (jint(1)));
	init_regexodus_Group_int(ctx, sp[5].o, temp6);
	sp[1].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[5].o), (frame[6].o));
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(322);
	goto label_5;
	}
label_11:;
	{
	LINE_NUMBER(324);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(325);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = frame[3].o;
	clinit_regexodus_Lookahead(ctx);
	sp[5].o = gcAlloc(ctx, &class_regexodus_Lookahead);
	sp[6].o = frame[2].o;
	jint temp3 = jint(3);
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[6].o, temp3);
	ARRAY_ACCESS(jint, sp[6].o, temp3) = (temp6 + (jint(1)));
	init_regexodus_Lookahead_int_boolean(ctx, sp[5].o, temp6, (jint(1)));
	sp[1].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[5].o), (frame[6].o));
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(326);
	goto label_5;
	}
label_12:;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(329);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = frame[3].o;
	clinit_regexodus_Lookahead(ctx);
	sp[5].o = gcAlloc(ctx, &class_regexodus_Lookahead);
	sp[6].o = frame[2].o;
	jint temp3 = jint(3);
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[6].o, temp3);
	ARRAY_ACCESS(jint, sp[6].o, temp3) = (temp6 + (jint(1)));
	init_regexodus_Lookahead_int_boolean(ctx, sp[5].o, temp6, (jint(0)));
	sp[1].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[5].o), (frame[6].o));
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(330);
	goto label_5;
	}
label_13:;
	{
	LINE_NUMBER(332);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(333);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = frame[3].o;
	clinit_regexodus_Lookbehind(ctx);
	sp[5].o = gcAlloc(ctx, &class_regexodus_Lookbehind);
	sp[6].o = frame[2].o;
	jint temp3 = jint(3);
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[6].o, temp3);
	ARRAY_ACCESS(jint, sp[6].o, temp3) = (temp6 + (jint(1)));
	init_regexodus_Lookbehind_int_boolean(ctx, sp[5].o, temp6, (jint(1)));
	sp[1].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[5].o), (frame[6].o));
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(334);
	goto label_5;
	}
label_14:;
	{
	LINE_NUMBER(336);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(337);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = frame[3].o;
	clinit_regexodus_Lookbehind(ctx);
	sp[5].o = gcAlloc(ctx, &class_regexodus_Lookbehind);
	sp[6].o = frame[2].o;
	jint temp3 = jint(3);
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[6].o, temp3);
	ARRAY_ACCESS(jint, sp[6].o, temp3) = (temp6 + (jint(1)));
	init_regexodus_Lookbehind_int_boolean(ctx, sp[5].o, temp6, (jint(0)));
	sp[1].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[5].o), (frame[6].o));
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(338);
	goto label_5;
	}
label_15:;
	{
	LINE_NUMBER(340);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(341);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	sp[4].o = frame[3].o;
	clinit_regexodus_IndependentGroup(ctx);
	sp[5].o = gcAlloc(ctx, &class_regexodus_IndependentGroup);
	sp[6].o = frame[2].o;
	jint temp3 = jint(3);
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[6].o, temp3);
	ARRAY_ACCESS(jint, sp[6].o, temp3) = (temp6 + (jint(1)));
	init_regexodus_IndependentGroup_int(ctx, sp[5].o, temp6);
	sp[1].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[5].o), (frame[6].o));
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(342);
	goto label_5;
	}
label_17:;
	{
	LINE_NUMBER(344);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(345);
	((func_regexodus_Pretokenizer_next) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pretokenizer_next])(ctx, (frame[0].o));
	LINE_NUMBER(347);
	frame[11].i = (jint(1));
	LINE_NUMBER(348);
	switch(((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype)) {
		case 4: goto label_71;
		case 5: goto label_72;
		case 6: goto label_73;
		case 7: goto label_74;
		case 40: goto label_75;
		default: goto label_76;
	}
	}
label_72:;
	{
	LINE_NUMBER(350);
	frame[11].i = (jint(0));
	}
label_71:;
	{
	LINE_NUMBER(352);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(353);
	clinit_regexodus_Lookahead(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Lookahead);
	sp[1].o = frame[2].o;
	jint temp3 = jint(3);
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp3);
	ARRAY_ACCESS(jint, sp[1].o, temp3) = (temp6 + (jint(1)));
	init_regexodus_Lookahead_int_boolean(ctx, sp[0].o, temp6, (frame[11].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(354);
	sp[0].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[12].o), (frame[5].o), (frame[6].o));
	LINE_NUMBER(355);
	clinit_regexodus_ConditionalExpr(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ConditionalExpr);
	init_regexodus_ConditionalExpr_regexodus_Lookahead(ctx, sp[0].o, (frame[12].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(356);
	goto label_81;
	}
label_74:;
	{
	LINE_NUMBER(358);
	frame[11].i = (jint(0));
	}
label_73:;
	{
	LINE_NUMBER(360);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(361);
	clinit_regexodus_Lookbehind(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Lookbehind);
	sp[1].o = frame[2].o;
	jint temp3 = jint(3);
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[1].o, temp3);
	ARRAY_ACCESS(jint, sp[1].o, temp3) = (temp6 + (jint(1)));
	init_regexodus_Lookbehind_int_boolean(ctx, sp[0].o, temp6, (frame[11].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(362);
	sp[0].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[13].o), (frame[5].o), (frame[6].o));
	LINE_NUMBER(363);
	clinit_regexodus_ConditionalExpr(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ConditionalExpr);
	init_regexodus_ConditionalExpr_regexodus_Lookbehind(ctx, sp[0].o, (frame[13].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(364);
	goto label_81;
	}
label_75:;
	{
	LINE_NUMBER(366);
	((func_regexodus_Pretokenizer_next) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pretokenizer_next])(ctx, (frame[0].o));
	LINE_NUMBER(367);
	if (((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype) == (41)) goto label_87;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed condition"_j))));
	throwException(ctx, sp[0].o);	}
label_87:;
	{
	LINE_NUMBER(369);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset))));
	if (temp0 == 0) goto label_88;
	}
	{
	jint temp0 = (jint)SM_regexodus_Term_makeNumber_int_int_Array1_char_R_int(ctx, ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset), ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOutside), (frame[1].o));
	frame[14].i = temp0;
	goto label_90;
	}
label_88:;
	{
	LINE_NUMBER(371);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[1].o), ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset), (((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOutside) - ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset)));
	frame[15].o = sp[0].o;
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (frame[15].o));
	frame[16].o = (checkCast(ctx, &class_java_lang_Integer, sp[0].o));
	LINE_NUMBER(373);
	if ((frame[16].o) != nullptr) goto label_93;
	}
	{
	LINE_NUMBER(374);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown group name in conditional expr.: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[15].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_93:;
	{
	LINE_NUMBER(375);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[16].o));
	frame[14].i = temp0;
	}
label_90:;
	{
	LINE_NUMBER(377);
	clinit_regexodus_ConditionalExpr(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_ConditionalExpr);
	init_regexodus_ConditionalExpr_int(ctx, sp[0].o, (frame[14].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(378);
	goto label_81;
	}
label_76:;
	{
	LINE_NUMBER(380);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"malformed conditional expression: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (jchar(((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_81:;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[10].o), (frame[5].o), (frame[6].o));
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(383);
	goto label_5;
	}
label_23:;
	{
	LINE_NUMBER(385);
	M_regexodus_Term_newBranch(ctx, (frame[4].o));
	LINE_NUMBER(386);
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(388);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(2)))) <= 0) goto label_98;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unbalanced parenthesis"_j))));
	throwException(ctx, sp[0].o);	}
label_98:;
	{
	LINE_NUMBER(389);
	((func_regexodus_Term_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_Term_close])(ctx, (frame[4].o));
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_22:;
	{
	LINE_NUMBER(392);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(2)))) > 0) goto label_100;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unbalanced parenthesis"_j))));
	throwException(ctx, sp[0].o);	}
label_100:;
	{
	LINE_NUMBER(393);
	((func_regexodus_Term_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_Term_close])(ctx, (frame[4].o));
	LINE_NUMBER(394);
	sp[0].o = frame[2].o;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (jint(1)));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_16:;
	{
	LINE_NUMBER(397);
	if (((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype) == (41)) goto label_5;
	}
	{
	((func_regexodus_Pretokenizer_next) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pretokenizer_next])(ctx, (frame[0].o));
	goto label_16;
	}
label_24:;
	{
	LINE_NUMBER(400);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown token type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_regexodus_Term_makeNumber_int_int_Array1_char_R_int(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeNumber", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(406);
	frame[3].i = (jint(0));
	LINE_NUMBER(407);
	frame[4].i = (frame[0].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(408);
	frame[5].i = (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[4].i))) - (48));
	LINE_NUMBER(409);
	if ((frame[5].i) < 0) goto label_6;
	}
	{
	if ((frame[5].i) <= (9)) goto label_7;
	}
label_6:;
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(410);
	frame[3].i = ((frame[3].i) * (10));
	LINE_NUMBER(411);
	frame[3].i = ((frame[3].i) + (frame[5].i));
	LINE_NUMBER(407);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[31];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:append", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(419);
	frame[9].i = (frame[1].i);
	LINE_NUMBER(420);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current;
	frame[11].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(421);
	if ((frame[9].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(422);
	frame[12].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[9].i)));
	LINE_NUMBER(423);
	frame[13].i = (jint(1));
	LINE_NUMBER(424);
	if ((((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))) & (64)) == (64)) goto label_8;
	}
	{
	LINE_NUMBER(425);
	switch((frame[12].i)) {
		case 9: goto label_10;
		case 10: goto label_10;
		case 13: goto label_10;
		case 32: goto label_10;
		case 42: goto label_11;
		case 43: goto label_12;
		case 63: goto label_13;
		case 92: goto label_14;
		case 123: goto label_15;
		default: goto label_16;
	}
	}
label_11:;
	{
	LINE_NUMBER(428);
	if ((frame[11].o) != nullptr) goto label_17;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"missing term before *"_j))));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(429);
	INST_IINC(9, 1);
	LINE_NUMBER(430);
	if ((frame[9].i) >= (frame[2].i)) goto label_19;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[9].i))) != (63)) goto label_19;
	}
	{
	LINE_NUMBER(431);
	frame[13].i = (jint(0));
	LINE_NUMBER(432);
	INST_IINC(9, 1);
	}
label_19:;
	{
	LINE_NUMBER(434);
	if ((frame[13].i) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)SM_regexodus_Term_makeGreedyStar_Array1_int_regexodus_Term_java_util_ArrayList_R_regexodus_Term(ctx, (frame[4].o), (frame[11].o), (frame[6].o));
	sp += 1;
	goto label_23;
	}
label_22:;
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[11].o;
	LINE_NUMBER(435);
	sp[0].o = (jobject)SM_regexodus_Term_makeLazyStar_Array1_int_regexodus_Term_R_regexodus_Term(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_23:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term])(ctx, (frame[0].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(437);
	goto label_27;
	}
label_12:;
	{
	LINE_NUMBER(440);
	if ((frame[11].o) != nullptr) goto label_28;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"missing term before +"_j))));
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(441);
	INST_IINC(9, 1);
	LINE_NUMBER(442);
	if ((frame[9].i) >= (frame[2].i)) goto label_30;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[9].i))) != (63)) goto label_30;
	}
	{
	LINE_NUMBER(443);
	frame[13].i = (jint(0));
	LINE_NUMBER(444);
	INST_IINC(9, 1);
	}
label_30:;
	{
	LINE_NUMBER(446);
	if ((frame[13].i) == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)SM_regexodus_Term_makeGreedyPlus_Array1_int_regexodus_Term_java_util_ArrayList_R_regexodus_Term(ctx, (frame[4].o), (frame[11].o), (frame[6].o));
	sp += 1;
	goto label_34;
	}
label_33:;
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[11].o;
	LINE_NUMBER(447);
	sp[0].o = (jobject)SM_regexodus_Term_makeLazyPlus_Array1_int_regexodus_Term_R_regexodus_Term(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_34:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term])(ctx, (frame[0].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(449);
	goto label_27;
	}
label_13:;
	{
	LINE_NUMBER(452);
	if ((frame[11].o) != nullptr) goto label_38;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"missing term before ?"_j))));
	throwException(ctx, sp[0].o);	}
label_38:;
	{
	LINE_NUMBER(453);
	INST_IINC(9, 1);
	LINE_NUMBER(454);
	if ((frame[9].i) >= (frame[2].i)) goto label_40;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[9].i))) != (63)) goto label_40;
	}
	{
	LINE_NUMBER(455);
	frame[13].i = (jint(0));
	LINE_NUMBER(456);
	INST_IINC(9, 1);
	}
label_40:;
	{
	LINE_NUMBER(459);
	if ((frame[13].i) == 0) goto label_43;
	}
	{
	sp[0].o = (jobject)SM_regexodus_Term_makeGreedyQMark_Array1_int_regexodus_Term_R_regexodus_Term(ctx, (frame[4].o), (frame[11].o));
	sp += 1;
	goto label_44;
	}
label_43:;
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[11].o;
	LINE_NUMBER(460);
	sp[0].o = (jobject)SM_regexodus_Term_makeLazyQMark_Array1_int_regexodus_Term_R_regexodus_Term(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_44:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term])(ctx, (frame[0].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(462);
	goto label_27;
	}
label_15:;
	{
	LINE_NUMBER(465);
	ARRAY_ACCESS(jint, (frame[8].o), (jint(0))) = (jint(0));
	LINE_NUMBER(466);
	ARRAY_ACCESS(jint, (frame[8].o), (jint(1))) = (jint(-1));
	LINE_NUMBER(467);
	jint temp0 = (jint)SM_regexodus_Term_parseLimits_int_int_Array1_char_Array1_int_R_int(ctx, ((frame[9].i) + (jint(1))), (frame[2].i), (frame[3].o), (frame[8].o));
	frame[14].i = temp0;
	LINE_NUMBER(468);
	if (((jint)ARRAY_ACCESS(jint, (frame[8].o), (jint(2)))) != (jint(1))) goto label_51;
	}
	{
	LINE_NUMBER(469);
	if ((frame[11].o) != nullptr) goto label_53;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"missing term before {}"_j))));
	throwException(ctx, sp[0].o);	}
label_53:;
	{
	LINE_NUMBER(470);
	frame[9].i = (frame[14].i);
	LINE_NUMBER(471);
	if ((frame[9].i) >= (frame[2].i)) goto label_55;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[9].i))) != (63)) goto label_55;
	}
	{
	LINE_NUMBER(472);
	frame[13].i = (jint(0));
	LINE_NUMBER(473);
	INST_IINC(9, 1);
	}
label_55:;
	{
	LINE_NUMBER(475);
	if ((frame[13].i) == 0) goto label_58;
	}
	{
	sp[0].o = (jobject)SM_regexodus_Term_makeGreedyLimits_Array1_int_regexodus_Term_Array1_int_java_util_ArrayList_R_regexodus_Term(ctx, (frame[4].o), (frame[11].o), (frame[8].o), (frame[6].o));
	sp += 1;
	goto label_59;
	}
label_58:;
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[11].o;
	sp[2].o = frame[8].o;
	LINE_NUMBER(476);
	sp[0].o = (jobject)SM_regexodus_Term_makeLazyLimits_Array1_int_regexodus_Term_Array1_int_R_regexodus_Term(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_59:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term])(ctx, (frame[0].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(478);
	goto label_27;
	}
label_51:;
	{
	LINE_NUMBER(480);
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), ((frame[9].i) + (jint(1))))) != (92)) goto label_63;
	}
	{
	LINE_NUMBER(481);
	frame[15].i = ((frame[9].i) + (jint(2)));
	LINE_NUMBER(482);
	if ((frame[15].i) != (frame[2].i)) goto label_66;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"'group_id' expected"_j))));
	throwException(ctx, sp[0].o);	}
label_66:;
	{
	LINE_NUMBER(483);
	frame[16].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[15].i)));
	LINE_NUMBER(484);
	frame[17].i = (jint(0));
	frame[18].i = (jint(0));
	frame[19].i = (jint(0));
	frame[20].i = (jint(0));
	}
label_71:;
	{
	LINE_NUMBER(485);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_Space;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, (frame[16].i));
	if (temp0 != 0) goto label_72;
	}
	{
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_Po;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, (frame[16].i));
	if (temp0 == 0) goto label_73;
	}
label_72:;
	{
	LINE_NUMBER(486);
	INST_IINC(15, 1);
	LINE_NUMBER(487);
	if ((frame[15].i) != (frame[2].i)) goto label_75;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"'group_id' expected"_j))));
	throwException(ctx, sp[0].o);	}
label_75:;
	{
	LINE_NUMBER(488);
	switch((frame[16].i)) {
		case 33: goto label_76;
		case 47: goto label_77;
		case 58: goto label_78;
		case 64: goto label_79;
		default: goto label_80;
	}
	}
label_79:;
	{
	LINE_NUMBER(490);
	if ((frame[17].i) != 0) goto label_81;
	}
	INST_ICONST(1);
	goto label_82;
label_81:;
	INST_ICONST(0);
label_82:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(491);
	goto label_80;
	}
label_77:;
	{
	LINE_NUMBER(493);
	if ((frame[19].i) != 0) goto label_84;
	}
	INST_ICONST(1);
	goto label_85;
label_84:;
	INST_ICONST(0);
label_85:;
	{
	sp -= 1;
	frame[19].i = sp[0].i;
	LINE_NUMBER(494);
	goto label_80;
	}
label_78:;
	{
	LINE_NUMBER(496);
	if ((frame[18].i) != 0) goto label_87;
	}
	INST_ICONST(1);
	goto label_88;
label_87:;
	INST_ICONST(0);
label_88:;
	{
	sp -= 1;
	frame[18].i = sp[0].i;
	LINE_NUMBER(497);
	goto label_80;
	}
label_76:;
	{
	LINE_NUMBER(499);
	if ((frame[20].i) != 0) goto label_90;
	}
	INST_ICONST(1);
	goto label_91;
label_90:;
	INST_ICONST(0);
label_91:;
	INST_ISTORE(20);
label_80:;
	{
	LINE_NUMBER(502);
	frame[16].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[15].i)));
	goto label_71;
	}
label_73:;
	{
	LINE_NUMBER(504);
	clinit_regexodus_BackReference(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BackReference);
	jint temp0 = jint(-1);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if ((frame[17].i) != 0) goto label_92;
	}
	{
	if ((((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))) & (jint(1))) <= 0) goto label_93;
	}
label_92:;
	INST_ICONST(1);
	goto label_94;
label_93:;
	INST_ICONST(0);
label_94:;
	{
	sp -= 4;
	init_regexodus_BackReference_int_boolean_boolean_boolean_boolean(ctx, sp[0].o, sp[2].i, sp[3].i, (frame[19].i), (frame[18].i), (frame[20].i));
	frame[21].o = sp[0].o;
	LINE_NUMBER(505);
	jint temp0 = (jint)SM_regexodus_Term_parseGroupId_Array1_char_int_int_regexodus_Term_java_util_HashMap_char_R_int(ctx, (frame[3].o), (frame[15].i), (frame[2].i), (frame[21].o), (frame[7].o), (125));
	frame[9].i = temp0;
	LINE_NUMBER(506);
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, (frame[0].o), (frame[21].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(507);
	goto label_3;
	}
label_63:;
	{
	LINE_NUMBER(509);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term(ctx, sp[0].o);
	frame[15].o = sp[0].o;
	LINE_NUMBER(510);
	sp[0].o = frame[3].o;
	jint temp0 = frame[9].i;
	jint temp1 = frame[2].i;
	sp[1].o = frame[15].o;
	jint temp2 = jint(0);
	jobject temp3 = sp[1].o;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].o = temp3;
	sp[4].i = temp2;
	sp += 5;
	if ((((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))) & (8)) <= 0) goto label_99;
	}
	INST_ICONST(1);
	goto label_100;
label_99:;
	INST_ICONST(0);
label_100:;
	{
	sp -= 6;
	jint temp0 = (jint)SM_regexodus_CharacterClass_parseName_Array1_char_int_int_regexodus_Term_boolean_boolean_R_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].o, sp[4].i, sp[5].i);
	frame[9].i = temp0;
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, (frame[0].o), (frame[15].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(512);
	goto label_3;
	}
label_14:;
	{
	LINE_NUMBER(516);
	if (((frame[9].i) + (jint(4))) >= (frame[2].i)) goto label_10;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), ((frame[9].i) + (jint(1))))) != (107)) goto label_10;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), ((frame[9].i) + (jint(2))))) != (60)) goto label_10;
	}
	{
	LINE_NUMBER(517);
	frame[15].i = ((frame[9].i) + (jint(3)));
	LINE_NUMBER(518);
	if ((frame[15].i) != (frame[2].i)) goto label_105;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"'group_id' expected"_j))));
	throwException(ctx, sp[0].o);	}
label_105:;
	{
	LINE_NUMBER(519);
	frame[16].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[15].i)));
	LINE_NUMBER(520);
	frame[17].i = (jint(0));
	frame[18].i = (jint(0));
	frame[19].i = (jint(0));
	frame[20].i = (jint(0));
	}
label_110:;
	{
	LINE_NUMBER(521);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_Space;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, (frame[16].i));
	if (temp0 != 0) goto label_111;
	}
	{
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_Po;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, (frame[16].i));
	if (temp0 == 0) goto label_112;
	}
label_111:;
	{
	LINE_NUMBER(522);
	INST_IINC(15, 1);
	LINE_NUMBER(523);
	if ((frame[15].i) != (frame[2].i)) goto label_114;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"'group_id' expected"_j))));
	throwException(ctx, sp[0].o);	}
label_114:;
	{
	LINE_NUMBER(524);
	switch((frame[16].i)) {
		case 33: goto label_115;
		case 47: goto label_116;
		case 58: goto label_117;
		case 64: goto label_118;
		default: goto label_119;
	}
	}
label_118:;
	{
	LINE_NUMBER(526);
	if ((frame[17].i) != 0) goto label_120;
	}
	INST_ICONST(1);
	goto label_121;
label_120:;
	INST_ICONST(0);
label_121:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(527);
	goto label_119;
	}
label_116:;
	{
	LINE_NUMBER(529);
	if ((frame[19].i) != 0) goto label_123;
	}
	INST_ICONST(1);
	goto label_124;
label_123:;
	INST_ICONST(0);
label_124:;
	{
	sp -= 1;
	frame[19].i = sp[0].i;
	LINE_NUMBER(530);
	goto label_119;
	}
label_117:;
	{
	LINE_NUMBER(532);
	if ((frame[18].i) != 0) goto label_126;
	}
	INST_ICONST(1);
	goto label_127;
label_126:;
	INST_ICONST(0);
label_127:;
	{
	sp -= 1;
	frame[18].i = sp[0].i;
	LINE_NUMBER(533);
	goto label_119;
	}
label_115:;
	{
	LINE_NUMBER(535);
	if ((frame[20].i) != 0) goto label_129;
	}
	INST_ICONST(1);
	goto label_130;
label_129:;
	INST_ICONST(0);
label_130:;
	INST_ISTORE(20);
label_119:;
	{
	LINE_NUMBER(538);
	frame[16].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[15].i)));
	goto label_110;
	}
label_112:;
	{
	LINE_NUMBER(540);
	clinit_regexodus_BackReference(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BackReference);
	jint temp0 = jint(-1);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if ((frame[17].i) != 0) goto label_131;
	}
	{
	if ((((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))) & (jint(1))) <= 0) goto label_132;
	}
label_131:;
	INST_ICONST(1);
	goto label_133;
label_132:;
	INST_ICONST(0);
label_133:;
	{
	sp -= 4;
	init_regexodus_BackReference_int_boolean_boolean_boolean_boolean(ctx, sp[0].o, sp[2].i, sp[3].i, (frame[19].i), (frame[18].i), (frame[20].i));
	frame[21].o = sp[0].o;
	LINE_NUMBER(541);
	jint temp0 = (jint)SM_regexodus_Term_parseGroupId_Array1_char_int_int_regexodus_Term_java_util_HashMap_char_R_int(ctx, (frame[3].o), (frame[15].i), (frame[2].i), (frame[21].o), (frame[7].o), (62));
	frame[9].i = temp0;
	LINE_NUMBER(542);
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, (frame[0].o), (frame[21].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(543);
	goto label_3;
	}
label_10:;
	{
	LINE_NUMBER(549);
	if ((((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))) & (8)) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(550);
	INST_IINC(9, 1);
	LINE_NUMBER(551);
	goto label_3;
	}
label_16:;
	{
	LINE_NUMBER(557);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(558);
	jint temp0 = (jint)M_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int(ctx, (frame[0].o), (frame[3].o), (frame[9].i), (frame[2].i), (frame[10].o), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))));
	frame[9].i = temp0;
	LINE_NUMBER(560);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_type) != (60)) goto label_141;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | (64));
	LINE_NUMBER(562);
	goto label_3;
	}
label_141:;
	{
	LINE_NUMBER(563);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_type) != (61)) goto label_144;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (-65));
	LINE_NUMBER(565);
	goto label_3;
	}
label_144:;
	{
	LINE_NUMBER(568);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_type) != (19)) goto label_147;
	}
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_147;
	}
	{
	LINE_NUMBER(569);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'$' is not a last term in the group: <"_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, (frame[3].o), (frame[1].i), ((frame[2].i) - (frame[1].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8">"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_147:;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, (frame[0].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(577);
	goto label_27;
	}
label_8:;
	{
	LINE_NUMBER(581);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(582);
	jint temp0 = (jint)M_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int(ctx, (frame[0].o), (frame[3].o), (frame[9].i), (frame[2].i), (frame[10].o), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))));
	frame[9].i = temp0;
	LINE_NUMBER(584);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_type) != (60)) goto label_152;
	}
	{
	LINE_NUMBER(585);
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | (64));
	LINE_NUMBER(586);
	goto label_3;
	}
label_152:;
	{
	LINE_NUMBER(587);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_type) != (61)) goto label_155;
	}
	{
	LINE_NUMBER(588);
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (-65));
	LINE_NUMBER(589);
	goto label_3;
	}
label_155:;
	{
	LINE_NUMBER(592);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_type) != (19)) goto label_158;
	}
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_158;
	}
	{
	LINE_NUMBER(593);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'$' is not a last term in the group: <"_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, (frame[3].o), (frame[1].i), ((frame[2].i) - (frame[1].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8">"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_158:;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((func_regexodus_Term_append_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term])(ctx, (frame[0].o), (frame[10].o));
	frame[11].o = sp[0].o;
	}
label_27:;
	LINE_NUMBER(598);
	goto label_3;
label_4:;
	LINE_NUMBER(599);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_regexodus_Term_parseGroupId_Array1_char_int_int_regexodus_Term_java_util_HashMap_char_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4, jchar param5) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:parseGroupId", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(610);
	frame[7].i = (frame[1].i);
	LINE_NUMBER(611);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i))));
	if (temp0 == 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(612);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(613);
	INST_IINC(1, 1);
	LINE_NUMBER(614);
	if ((frame[1].i) != (frame[2].i)) goto label_3;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"group_id expected"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(616);
	jint temp0 = (jint)SM_regexodus_Term_makeNumber_int_int_Array1_char_R_int(ctx, (frame[7].i), (frame[1].i), (frame[0].o));
	frame[6].i = temp0;
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(618);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_IdentifierPart;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(619);
	INST_IINC(1, 1);
	LINE_NUMBER(620);
	if ((frame[1].i) != (frame[2].i)) goto label_2;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"group_id expected"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(622);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[0].o), (frame[7].i), ((frame[1].i) - (frame[7].i)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_java_lang_Integer, sp[0].o));
	LINE_NUMBER(624);
	if ((frame[9].o) != nullptr) goto label_14;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"backreference to unknown group: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(625);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[9].o));
	frame[6].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(627);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_Space;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(628);
	INST_IINC(1, 1);
	LINE_NUMBER(629);
	if ((frame[1].i) != (frame[2].i)) goto label_8;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' expected"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(632);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(634);
	if ((frame[8].i) == (frame[5].i)) goto label_19;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' expected"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(636);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_memreg = (frame[6].i);
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Term_append_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:append", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current;
	frame[2].o = sp[0].o;
	LINE_NUMBER(644);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(646);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(647);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(650);
	SM_regexodus_Term_link_regexodus_Term_regexodus_Term(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(652);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(653);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:replaceCurrent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK(sp[0].o))->F_prev;
	frame[2].o = sp[0].o;
	LINE_NUMBER(659);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	frame[3].o = sp[0].o;
	LINE_NUMBER(661);
	if ((frame[2].o) != (frame[3].o)) goto label_5;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(665);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_prev = (jref) (frame[3].o);
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(666);
	SM_regexodus_Term_link_regexodus_Term_regexodus_Term(ctx, (frame[2].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(668);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_regexodus_Term_newBranch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:newBranch", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(674);
	((func_regexodus_Term_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_close])(ctx, (frame[0].o));
	LINE_NUMBER(675);
	((func_regexodus_Term_startNewBranch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_startNewBranch])(ctx, (frame[0].o));
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Term_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:close", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current;
	frame[1].o = sp[0].o;
	LINE_NUMBER(694);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	SM_regexodus_Term_linkd_regexodus_Term_regexodus_Term(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(696);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_regexodus_Term_link_regexodus_Term_regexodus_Term(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:link", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(699);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	SM_regexodus_Term_linkd_regexodus_Term_regexodus_Term(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(700);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_prev = (jref) (frame[0].o);
	LINE_NUMBER(701);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_Term_linkd_regexodus_Term_regexodus_Term(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:linkd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	frame[2].o = sp[0].o;
	LINE_NUMBER(705);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(706);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(709);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(710);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_next = (jref) (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_branchOut;
	frame[4].o = sp[0].o;
	LINE_NUMBER(713);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(714);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_failNext = (jref) (frame[1].o);
	}
label_8:;
	LINE_NUMBER(716);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_Term_startNewBranch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:startNewBranch", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(720);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(721);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(722);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(723);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_in = (jref) (jobject(nullptr));
	LINE_NUMBER(724);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out = (jref) (jobject(nullptr));
	LINE_NUMBER(725);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(726);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (frame[2].o);
	LINE_NUMBER(727);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(728);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_makeGreedyStar_Array1_int_regexodus_Term_java_util_ArrayList_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeGreedyStar", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(732);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 15: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(734);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(735);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(736);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(738);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_in = (jref) (frame[3].o);
	LINE_NUMBER(739);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_out = (jref) (jobject(nullptr));
	LINE_NUMBER(740);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(741);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_branchOut = (jref) (frame[3].o);
	LINE_NUMBER(743);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(746);
	clinit_regexodus_TermIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_TermIterator);
	init_regexodus_TermIterator_regexodus_Term_int_int_java_util_ArrayList(ctx, sp[0].o, (frame[1].o), (jint(0)), (jint(-1)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_makeLazyStar_Array1_int_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeLazyStar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(753);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 15: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(755);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(756);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_failNext = (jref) sp[1].o;
	LINE_NUMBER(757);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(759);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_in = (jref) (frame[2].o);
	LINE_NUMBER(760);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out = (jref) (frame[2].o);
	LINE_NUMBER(761);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(762);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(764);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(767);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(768);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_failNext = (jref) (frame[1].o);
	LINE_NUMBER(769);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(771);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_in = (jref) (frame[2].o);
	LINE_NUMBER(772);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out = (jref) (frame[2].o);
	LINE_NUMBER(773);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(774);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(776);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_makeGreedyPlus_Array1_int_regexodus_Term_java_util_ArrayList_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeGreedyPlus", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(783);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 15: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(785);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(786);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(787);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(789);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_in = (jref) sp[1].o;
	LINE_NUMBER(790);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_out = (jref) (jobject(nullptr));
	LINE_NUMBER(791);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(792);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_branchOut = (jref) (frame[3].o);
	LINE_NUMBER(795);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(798);
	clinit_regexodus_TermIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_TermIterator);
	init_regexodus_TermIterator_regexodus_Term_int_int_java_util_ArrayList(ctx, sp[0].o, (frame[1].o), (jint(1)), (jint(-1)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_makeLazyPlus_Array1_int_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeLazyPlus", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(805);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 6: goto label_1;
		case 15: goto label_2;
		default: goto label_1;
	}
	}
label_2:;
	{
	LINE_NUMBER(807);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(808);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(809);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_failNext = (jref) sp[1].o;
	LINE_NUMBER(811);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_in = (jref) sp[1].o;
	LINE_NUMBER(812);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out = (jref) (frame[2].o);
	LINE_NUMBER(813);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(814);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(816);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(820);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(821);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(822);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_failNext = (jref) (frame[1].o);
	LINE_NUMBER(824);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_in = (jref) (frame[1].o);
	LINE_NUMBER(825);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out = (jref) (frame[2].o);
	LINE_NUMBER(826);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(827);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_makeGreedyQMark_Array1_int_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeGreedyQMark", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(836);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 6: goto label_1;
		case 15: goto label_2;
		default: goto label_1;
	}
	}
label_2:;
	{
	LINE_NUMBER(838);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(839);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(841);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_in = (jref) (frame[2].o);
	LINE_NUMBER(842);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_out = (jref) sp[1].o;
	LINE_NUMBER(843);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(844);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (frame[2].o);
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(850);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(851);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(853);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_in = (jref) (frame[2].o);
	LINE_NUMBER(854);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out = (jref) (frame[1].o);
	LINE_NUMBER(855);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(856);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (frame[2].o);
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_makeLazyQMark_Array1_int_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeLazyQMark", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(865);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 6: goto label_1;
		case 15: goto label_2;
		default: goto label_1;
	}
	}
label_2:;
	{
	LINE_NUMBER(867);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(868);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_failNext = (jref) sp[1].o;
	LINE_NUMBER(870);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_in = (jref) (frame[2].o);
	LINE_NUMBER(871);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out = (jref) (frame[2].o);
	LINE_NUMBER(872);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_out1 = (jref) sp[1].o;
	LINE_NUMBER(873);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(875);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(879);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(880);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_failNext = (jref) (frame[1].o);
	LINE_NUMBER(882);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_in = (jref) (frame[2].o);
	LINE_NUMBER(883);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out = (jref) (frame[2].o);
	LINE_NUMBER(884);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out1 = (jref) (frame[1].o);
	LINE_NUMBER(885);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(887);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_makeGreedyLimits_Array1_int_regexodus_Term_Array1_int_java_util_ArrayList_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeGreedyLimits", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(894);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))));
	LINE_NUMBER(895);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(1))));
	LINE_NUMBER(896);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 15: goto label_3;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(898);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[6].i = temp3;
	LINE_NUMBER(899);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (29));
	frame[7].o = sp[0].o;
	LINE_NUMBER(900);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_cntreg = (frame[6].i);
	LINE_NUMBER(901);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (32));
	frame[8].o = sp[0].o;
	LINE_NUMBER(903);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (28));
	frame[9].o = sp[0].o;
	LINE_NUMBER(904);
	((regexodus_Term *) NULL_CHECK((frame[9].o)))->F_cntreg = (frame[6].i);
	LINE_NUMBER(906);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_next = (jref) (frame[8].o);
	LINE_NUMBER(908);
	if ((frame[5].i) < 0) goto label_12;
	}
	{
	LINE_NUMBER(909);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (30));
	frame[10].o = sp[0].o;
	LINE_NUMBER(910);
	((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_cntreg = (frame[6].i);
	LINE_NUMBER(911);
	((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_maxCount = (frame[5].i);
	LINE_NUMBER(912);
	((regexodus_Term *) NULL_CHECK((frame[8].o)))->F_next = (jref) (frame[10].o);
	LINE_NUMBER(913);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(914);
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(915);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(917);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[9].o);
	LINE_NUMBER(918);
	((regexodus_Term *) NULL_CHECK((frame[9].o)))->F_next = (jref) (frame[8].o);
	LINE_NUMBER(920);
	if ((frame[4].i) < 0) goto label_22;
	}
	{
	LINE_NUMBER(921);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (31));
	frame[10].o = sp[0].o;
	LINE_NUMBER(922);
	((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_cntreg = (frame[6].i);
	LINE_NUMBER(923);
	((regexodus_Term *) NULL_CHECK((frame[10].o)))->F_maxCount = (frame[4].i);
	LINE_NUMBER(924);
	((regexodus_Term *) NULL_CHECK((frame[8].o)))->F_failNext = (jref) (frame[10].o);
	LINE_NUMBER(926);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_in = (jref) (frame[7].o);
	LINE_NUMBER(927);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_out = (jref) (frame[10].o);
	LINE_NUMBER(928);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(929);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(930);
	goto label_32;
	}
label_22:;
	{
	LINE_NUMBER(931);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_in = (jref) (frame[7].o);
	LINE_NUMBER(932);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_out = (jref) (jobject(nullptr));
	LINE_NUMBER(933);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(934);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_branchOut = (jref) (frame[8].o);
	}
label_32:;
	{
	LINE_NUMBER(936);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_4:;
	{
	LINE_NUMBER(939);
	clinit_regexodus_TermIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_TermIterator);
	init_regexodus_TermIterator_regexodus_Term_int_int_java_util_ArrayList(ctx, sp[0].o, (frame[1].o), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(1)))), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_makeLazyLimits_Array1_int_regexodus_Term_Array1_int_R_regexodus_Term(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:makeLazyLimits", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(946);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))));
	LINE_NUMBER(947);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(1))));
	LINE_NUMBER(948);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 6: goto label_3;
		case 15: goto label_4;
		default: goto label_3;
	}
	}
label_4:;
	{
	LINE_NUMBER(950);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[5].i = temp3;
	LINE_NUMBER(951);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (29));
	frame[6].o = sp[0].o;
	LINE_NUMBER(952);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_cntreg = (frame[5].i);
	LINE_NUMBER(953);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (32));
	frame[7].o = sp[0].o;
	LINE_NUMBER(954);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (28));
	frame[8].o = sp[0].o;
	LINE_NUMBER(955);
	((regexodus_Term *) NULL_CHECK((frame[8].o)))->F_cntreg = (frame[5].i);
	LINE_NUMBER(957);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[7].o);
	LINE_NUMBER(959);
	if ((frame[4].i) < 0) goto label_12;
	}
	{
	LINE_NUMBER(960);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (30));
	frame[9].o = sp[0].o;
	LINE_NUMBER(961);
	((regexodus_Term *) NULL_CHECK((frame[9].o)))->F_cntreg = (frame[5].i);
	LINE_NUMBER(962);
	((regexodus_Term *) NULL_CHECK((frame[9].o)))->F_maxCount = (frame[4].i);
	LINE_NUMBER(963);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_failNext = (jref) (frame[9].o);
	LINE_NUMBER(964);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(965);
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(966);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_failNext = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(968);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[8].o);
	LINE_NUMBER(969);
	((regexodus_Term *) NULL_CHECK((frame[8].o)))->F_next = (jref) (frame[7].o);
	LINE_NUMBER(971);
	if ((frame[3].i) < 0) goto label_22;
	}
	{
	LINE_NUMBER(972);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (31));
	frame[9].o = sp[0].o;
	LINE_NUMBER(973);
	((regexodus_Term *) NULL_CHECK((frame[9].o)))->F_cntreg = (frame[5].i);
	LINE_NUMBER(974);
	((regexodus_Term *) NULL_CHECK((frame[9].o)))->F_maxCount = (frame[3].i);
	LINE_NUMBER(975);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_next = (jref) (frame[9].o);
	LINE_NUMBER(977);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_in = (jref) (frame[6].o);
	LINE_NUMBER(978);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_out = (jref) (frame[9].o);
	LINE_NUMBER(979);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(980);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(982);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_22:;
	{
	LINE_NUMBER(984);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_in = (jref) (frame[6].o);
	LINE_NUMBER(985);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_out = (jref) (frame[7].o);
	LINE_NUMBER(986);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(987);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(989);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_3:;
	{
	LINE_NUMBER(994);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (24));
	frame[5].o = sp[0].o;
	LINE_NUMBER(995);
	clinit_regexodus_Branch(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Branch);
	init_regexodus_Branch_int(ctx, sp[0].o, (33));
	frame[6].o = sp[0].o;
	LINE_NUMBER(996);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (25));
	frame[7].o = sp[0].o;
	LINE_NUMBER(998);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_next = (jref) (frame[6].o);
	LINE_NUMBER(1000);
	if ((frame[4].i) < 0) goto label_40;
	}
	{
	LINE_NUMBER(1001);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (27));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1002);
	((regexodus_Term *) NULL_CHECK((frame[8].o)))->F_maxCount = (frame[4].i);
	LINE_NUMBER(1003);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_failNext = (jref) (frame[8].o);
	LINE_NUMBER(1004);
	((regexodus_Term *) NULL_CHECK((frame[8].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(1005);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[7].o);
	LINE_NUMBER(1006);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_next = (jref) (frame[6].o);
	LINE_NUMBER(1007);
	goto label_48;
	}
label_40:;
	{
	LINE_NUMBER(1008);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(1009);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[7].o);
	LINE_NUMBER(1010);
	((regexodus_Term *) NULL_CHECK((frame[7].o)))->F_next = (jref) (frame[1].o);
	}
label_48:;
	{
	LINE_NUMBER(1013);
	if ((frame[3].i) < 0) goto label_51;
	}
	{
	LINE_NUMBER(1014);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (26));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1015);
	((regexodus_Term *) NULL_CHECK((frame[8].o)))->F_maxCount = (frame[3].i);
	LINE_NUMBER(1016);
	((regexodus_Term *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[8].o);
	LINE_NUMBER(1018);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_in = (jref) (frame[5].o);
	LINE_NUMBER(1019);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_out = (jref) (frame[8].o);
	LINE_NUMBER(1020);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(1021);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(1023);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_51:;
	{
	LINE_NUMBER(1025);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_in = (jref) (frame[5].o);
	LINE_NUMBER(1026);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_out = (jref) (frame[6].o);
	LINE_NUMBER(1027);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(1028);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(1030);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jint M_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:parseTerm", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1039);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(1040);
	frame[7].i = (jint(0));
	LINE_NUMBER(1041);
	if (((frame[5].i) & (64)) != (64)) goto label_3;
	}
	{
	LINE_NUMBER(1043);
	switch((frame[6].i)) {
		case 92: goto label_5;
		default: goto label_6;
	}
	}
label_5:;
	{
	LINE_NUMBER(1046);
	if ((frame[2].i) >= ((frame[3].i) + (jint(1)))) goto label_6;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i))) != (69)) goto label_6;
	}
	{
	LINE_NUMBER(1048);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (61);
	LINE_NUMBER(1049);
	popStackFrame(ctx);
	return ((frame[2].i) + (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(1052);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (jint(0));
	LINE_NUMBER(1053);
	if (((frame[5].i) & (jint(1))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1054);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_c = (frame[6].i);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1056);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[6].i));
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_c = temp0;
	}
label_12:;
	{
	LINE_NUMBER(1058);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_3:;
	{
	LINE_NUMBER(1061);
	switch((frame[6].i)) {
		case 36: goto label_13;
		case 46: goto label_14;
		case 91: goto label_15;
		case 92: goto label_16;
		case 94: goto label_17;
		default: goto label_18;
	}
	}
label_15:;
	{
	LINE_NUMBER(1063);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = frame[4].o;
	jobject temp2 = sp[1].o;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].o = temp2;
	sp += 4;
	if (((frame[5].i) & (jint(1))) <= 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	if (((frame[5].i) & (8)) <= 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	if (((frame[5].i) & (16)) <= 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	if (((frame[5].i) & (32)) <= 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	POP_N(8); // Pop method args
	sp->i = (jint)SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_Term_boolean_boolean_boolean_boolean_R_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].o, sp[4].i, sp[5].i, sp[6].i, sp[7].i);
	sp++;
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(1066);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((frame[5].i) & (jint(4))) <= 0) goto label_27;
	}
	INST_ICONST(4);
	goto label_28;
label_27:;
	INST_ICONST(5);
label_28:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = sp[1].i;
	LINE_NUMBER(1067);
	goto label_30;
	}
label_13:;
	{
	LINE_NUMBER(1070);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((frame[5].i) & (jint(2))) <= 0) goto label_31;
	}
	INST_BIPUSH(22);
	goto label_32;
label_31:;
	INST_BIPUSH(20);
label_32:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = sp[1].i;
	LINE_NUMBER(1071);
	goto label_30;
	}
label_17:;
	{
	LINE_NUMBER(1074);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((frame[5].i) & (jint(2))) <= 0) goto label_34;
	}
	INST_BIPUSH(21);
	goto label_35;
label_34:;
	INST_BIPUSH(18);
label_35:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = sp[1].i;
	LINE_NUMBER(1075);
	goto label_30;
	}
label_16:;
	{
	LINE_NUMBER(1078);
	if ((frame[2].i) < (frame[3].i)) goto label_37;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Escape without a character"_j))));
	throwException(ctx, sp[0].o);	}
label_37:;
	{
	LINE_NUMBER(1079);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(1080);
	switch((frame[6].i)) {
		case 48: goto label_39;
		case 49: goto label_40;
		case 50: goto label_40;
		case 51: goto label_40;
		case 52: goto label_40;
		case 53: goto label_40;
		case 54: goto label_40;
		case 55: goto label_40;
		case 56: goto label_40;
		case 57: goto label_40;
		case 58: goto label_40;
		case 59: goto label_40;
		case 60: goto label_41;
		case 61: goto label_40;
		case 62: goto label_42;
		case 63: goto label_40;
		case 64: goto label_40;
		case 65: goto label_43;
		case 66: goto label_44;
		case 67: goto label_40;
		case 68: goto label_45;
		case 69: goto label_40;
		case 70: goto label_40;
		case 71: goto label_46;
		case 72: goto label_47;
		case 73: goto label_40;
		case 74: goto label_40;
		case 75: goto label_40;
		case 76: goto label_40;
		case 77: goto label_40;
		case 78: goto label_40;
		case 79: goto label_40;
		case 80: goto label_48;
		case 81: goto label_49;
		case 82: goto label_40;
		case 83: goto label_50;
		case 84: goto label_40;
		case 85: goto label_40;
		case 86: goto label_51;
		case 87: goto label_52;
		case 88: goto label_40;
		case 89: goto label_40;
		case 90: goto label_53;
		case 91: goto label_40;
		case 92: goto label_40;
		case 93: goto label_40;
		case 94: goto label_40;
		case 95: goto label_40;
		case 96: goto label_40;
		case 97: goto label_40;
		case 98: goto label_54;
		case 99: goto label_55;
		case 100: goto label_56;
		case 101: goto label_40;
		case 102: goto label_57;
		case 103: goto label_40;
		case 104: goto label_58;
		case 105: goto label_40;
		case 106: goto label_40;
		case 107: goto label_40;
		case 108: goto label_40;
		case 109: goto label_59;
		case 110: goto label_60;
		case 111: goto label_39;
		case 112: goto label_61;
		case 113: goto label_40;
		case 114: goto label_62;
		case 115: goto label_63;
		case 116: goto label_64;
		case 117: goto label_65;
		case 118: goto label_66;
		case 119: goto label_67;
		case 120: goto label_68;
		case 121: goto label_40;
		case 122: goto label_69;
		default: goto label_40;
	}
	}
label_57:;
	{
	LINE_NUMBER(1082);
	frame[6].i = (12);
	LINE_NUMBER(1083);
	goto label_71;
	}
label_60:;
	{
	LINE_NUMBER(1086);
	frame[6].i = (10);
	LINE_NUMBER(1087);
	goto label_71;
	}
label_62:;
	{
	LINE_NUMBER(1090);
	frame[6].i = (13);
	LINE_NUMBER(1091);
	goto label_71;
	}
label_64:;
	{
	LINE_NUMBER(1096);
	frame[6].i = (9);
	LINE_NUMBER(1097);
	goto label_71;
	}
label_65:;
	{
	LINE_NUMBER(1100);
	if ((frame[2].i) >= ((frame[3].i) - (jint(3)))) goto label_75;
	}
	{
	LINE_NUMBER(1101);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jint temp1 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)));
	jint temp2 = temp1 << (12);
	sp[0].o = frame[1].o;
	jint temp3 = frame[2].i;
	INST_IINC(2, 1);
	jint temp4 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp3);
	LINE_NUMBER(1102);
	jint temp5 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, temp4);
	jint temp6 = temp2 + (temp5 << (8));
	sp[0].o = frame[1].o;
	jint temp7 = frame[2].i;
	INST_IINC(2, 1);
	jint temp8 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp7);
	LINE_NUMBER(1103);
	jint temp9 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, temp8);
	jint temp10 = temp6 + (temp9 << (jint(4)));
	sp[0].o = frame[1].o;
	jint temp11 = frame[2].i;
	INST_IINC(2, 1);
	jint temp12 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp11);
	LINE_NUMBER(1104);
	jint temp13 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, temp12);
	frame[6].i = (jchar((temp10 + temp13)));
	goto label_71;
	}
label_75:;
	{
	LINE_NUMBER(1106);
	frame[6].i = (jint(0));
	LINE_NUMBER(1107);
	frame[2].i = (frame[3].i);
	LINE_NUMBER(1109);
	goto label_71;
	}
label_68:;
	{
	LINE_NUMBER(1112);
	frame[8].i = (jint(0));
	LINE_NUMBER(1114);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	frame[9].i = temp1;
	if (temp1 != (123)) goto label_84;
	}
label_85:;
	{
	LINE_NUMBER(1115);
	if ((frame[2].i) >= (frame[3].i)) goto label_86;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	frame[9].i = temp1;
	if (temp1 == (125)) goto label_86;
	}
	{
	LINE_NUMBER(1116);
	jint temp0 = (frame[8].i) << (jint(4));
	jint temp1 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, (frame[9].i));
	frame[8].i = (temp0 + temp1);
	LINE_NUMBER(1117);
	if ((frame[8].i) > (jint(65535))) goto label_89;
	}
	{
	if ((frame[2].i) != (frame[3].i)) goto label_85;
	}
label_89:;
	{
	LINE_NUMBER(1118);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\\x{<out of range or incomplete>}"_j))));
	throwException(ctx, sp[0].o);	}
label_84:;
	{
	LINE_NUMBER(1121);
	jint temp0 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, (frame[9].i));
	jint temp1 = temp0 << (jint(4));
	sp[0].o = frame[1].o;
	jint temp2 = frame[2].i;
	INST_IINC(2, 1);
	jint temp3 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp2);
	LINE_NUMBER(1122);
	jint temp4 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, temp3);
	frame[8].i = (temp1 + temp4);
	}
label_86:;
	{
	LINE_NUMBER(1124);
	frame[6].i = (jchar((frame[8].i)));
	LINE_NUMBER(1125);
	goto label_71;
	}
label_39:;
	{
	LINE_NUMBER(1129);
	frame[8].i = (jint(0));
	}
label_92:;
	{
	LINE_NUMBER(1130);
	if ((frame[2].i) >= (frame[3].i)) goto label_93;
	}
	{
	LINE_NUMBER(1131);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(1132);
	if ((frame[9].i) < (48)) goto label_93;
	}
	{
	if ((frame[9].i) > (55)) goto label_93;
	}
	{
	LINE_NUMBER(1133);
	frame[8].i = ((frame[8].i) * (8));
	LINE_NUMBER(1134);
	frame[8].i = ((frame[8].i) + ((frame[9].i) - (48)));
	LINE_NUMBER(1135);
	if ((frame[8].i) <= (jint(65535))) goto label_99;
	}
	{
	LINE_NUMBER(1136);
	frame[8].i = ((frame[8].i) - ((frame[9].i) - (48)));
	LINE_NUMBER(1137);
	frame[8].i = ((frame[8].i) / (8));
	LINE_NUMBER(1138);
	goto label_93;
	}
label_99:;
	LINE_NUMBER(1141);
	goto label_92;
label_93:;
	{
	LINE_NUMBER(1142);
	frame[6].i = (jchar((frame[8].i)));
	LINE_NUMBER(1143);
	goto label_71;
	}
label_59:;
	{
	LINE_NUMBER(1146);
	frame[9].i = (jint(0));
	}
label_104:;
	{
	LINE_NUMBER(1147);
	if ((frame[2].i) >= (frame[3].i)) goto label_105;
	}
	{
	LINE_NUMBER(1148);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[10].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(1149);
	if ((frame[10].i) < (48)) goto label_105;
	}
	{
	if ((frame[10].i) > (57)) goto label_105;
	}
	{
	LINE_NUMBER(1150);
	frame[9].i = ((frame[9].i) * (10));
	LINE_NUMBER(1151);
	frame[9].i = ((frame[9].i) + ((frame[10].i) - (48)));
	LINE_NUMBER(1152);
	if ((frame[9].i) <= (jint(65535))) goto label_111;
	}
	{
	LINE_NUMBER(1153);
	frame[9].i = ((frame[9].i) - ((frame[10].i) - (48)));
	LINE_NUMBER(1154);
	frame[9].i = ((frame[9].i) / (10));
	LINE_NUMBER(1155);
	goto label_105;
	}
label_111:;
	LINE_NUMBER(1158);
	goto label_104;
label_105:;
	{
	LINE_NUMBER(1159);
	frame[6].i = (jchar((frame[9].i)));
	LINE_NUMBER(1160);
	goto label_71;
	}
label_55:;
	{
	LINE_NUMBER(1163);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[6].i = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) & (31))));
	LINE_NUMBER(1164);
	goto label_71;
	}
label_45:;
	{
	LINE_NUMBER(1167);
	frame[7].i = (jint(1));
	}
label_56:;
	{
	LINE_NUMBER(1170);
	sp[0].o = frame[4].o;
	jint temp0 = frame[7].i;
	sp[1].i = temp0;
	sp += 2;
	if (((frame[5].i) & (16)) <= 0) goto label_117;
	}
	INST_ICONST(1);
	goto label_118;
label_117:;
	INST_ICONST(0);
label_118:;
	{
	sp -= 3;
	SM_regexodus_CharacterClass_makeDigit_regexodus_Term_boolean_boolean(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(1171);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_50:;
	{
	LINE_NUMBER(1174);
	frame[7].i = (jint(1));
	}
label_63:;
	{
	LINE_NUMBER(1177);
	sp[0].o = frame[4].o;
	jint temp0 = frame[7].i;
	sp[1].i = temp0;
	sp += 2;
	if (((frame[5].i) & (16)) <= 0) goto label_120;
	}
	INST_ICONST(1);
	goto label_121;
label_120:;
	INST_ICONST(0);
label_121:;
	{
	sp -= 3;
	SM_regexodus_CharacterClass_makeSpace_regexodus_Term_boolean_boolean(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(1178);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_52:;
	{
	LINE_NUMBER(1181);
	frame[7].i = (jint(1));
	}
label_67:;
	{
	LINE_NUMBER(1184);
	sp[0].o = frame[4].o;
	jint temp0 = frame[7].i;
	sp[1].i = temp0;
	sp += 2;
	if (((frame[5].i) & (16)) <= 0) goto label_123;
	}
	INST_ICONST(1);
	goto label_124;
label_123:;
	INST_ICONST(0);
label_124:;
	{
	sp -= 3;
	SM_regexodus_CharacterClass_makeWordChar_regexodus_Term_boolean_boolean(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(1185);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_47:;
	{
	LINE_NUMBER(1188);
	frame[7].i = (jint(1));
	}
label_58:;
	{
	LINE_NUMBER(1190);
	sp[0].o = frame[4].o;
	jint temp0 = frame[7].i;
	sp[1].i = temp0;
	sp += 2;
	if (((frame[5].i) & (16)) <= 0) goto label_126;
	}
	INST_ICONST(1);
	goto label_127;
label_126:;
	INST_ICONST(0);
label_127:;
	{
	sp -= 3;
	SM_regexodus_CharacterClass_makeHSpace_regexodus_Term_boolean_boolean(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(1191);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_51:;
	{
	LINE_NUMBER(1194);
	frame[7].i = (jint(1));
	}
label_66:;
	{
	LINE_NUMBER(1196);
	sp[0].o = frame[4].o;
	jint temp0 = frame[7].i;
	sp[1].i = temp0;
	sp += 2;
	if (((frame[5].i) & (16)) <= 0) goto label_129;
	}
	INST_ICONST(1);
	goto label_130;
label_129:;
	INST_ICONST(0);
label_130:;
	{
	sp -= 3;
	SM_regexodus_CharacterClass_makeVSpace_regexodus_Term_boolean_boolean(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(1197);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_44:;
	{
	LINE_NUMBER(1200);
	frame[7].i = (jint(1));
	}
label_54:;
	{
	LINE_NUMBER(1203);
	sp[0].o = frame[4].o;
	jint temp0 = frame[7].i;
	sp[1].i = temp0;
	sp += 2;
	if (((frame[5].i) & (16)) <= 0) goto label_132;
	}
	INST_ICONST(1);
	goto label_133;
label_132:;
	INST_ICONST(0);
label_133:;
	{
	sp -= 3;
	SM_regexodus_CharacterClass_makeWordBoundary_regexodus_Term_boolean_boolean(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(1204);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_41:;
	{
	LINE_NUMBER(1207);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((frame[5].i) & (16)) <= 0) goto label_135;
	}
	INST_ICONST(1);
	goto label_136;
label_135:;
	INST_ICONST(0);
label_136:;
	{
	sp -= 2;
	SM_regexodus_CharacterClass_makeWordStart_regexodus_Term_boolean(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1208);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_42:;
	{
	LINE_NUMBER(1211);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((frame[5].i) & (16)) <= 0) goto label_138;
	}
	INST_ICONST(1);
	goto label_139;
label_138:;
	INST_ICONST(0);
label_139:;
	{
	sp -= 2;
	SM_regexodus_CharacterClass_makeWordEnd_regexodus_Term_boolean(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1212);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_43:;
	{
	LINE_NUMBER(1215);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (18);
	LINE_NUMBER(1216);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_53:;
	{
	LINE_NUMBER(1219);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (20);
	LINE_NUMBER(1220);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_69:;
	{
	LINE_NUMBER(1223);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (19);
	LINE_NUMBER(1224);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_46:;
	{
	LINE_NUMBER(1227);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (23);
	LINE_NUMBER(1228);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_48:;
	{
	LINE_NUMBER(1231);
	frame[7].i = (jint(1));
	}
label_61:;
	{
	LINE_NUMBER(1233);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = frame[4].o;
	jint temp2 = frame[7].i;
	jobject temp3 = sp[1].o;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].o = temp3;
	sp[4].i = temp2;
	sp += 5;
	if (((frame[5].i) & (8)) <= 0) goto label_145;
	}
	INST_ICONST(1);
	goto label_146;
label_145:;
	INST_ICONST(0);
label_146:;
	{
	sp -= 6;
	jint temp0 = (jint)SM_regexodus_CharacterClass_parseName_Array1_char_int_int_regexodus_Term_boolean_boolean_R_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].o, sp[4].i, sp[5].i);
	frame[2].i = temp0;
	LINE_NUMBER(1234);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_49:;
	{
	LINE_NUMBER(1236);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (60);
	LINE_NUMBER(1237);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_40:;
	{
	LINE_NUMBER(1241);
	if ((frame[6].i) < (49)) goto label_71;
	}
	{
	if ((frame[6].i) > (57)) goto label_71;
	}
	{
	LINE_NUMBER(1242);
	frame[10].i = ((frame[6].i) - (48));
	}
label_150:;
	{
	LINE_NUMBER(1243);
	if ((frame[2].i) >= (frame[3].i)) goto label_151;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i));
	frame[6].i = temp0;
	if (temp0 < (48)) goto label_151;
	}
	{
	if ((frame[6].i) > (57)) goto label_151;
	}
	{
	LINE_NUMBER(1244);
	frame[10].i = ((((frame[10].i) * (10)) + (frame[6].i)) - (48));
	LINE_NUMBER(1245);
	INST_IINC(2, 1);
	goto label_150;
	}
label_151:;
	{
	LINE_NUMBER(1247);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((frame[5].i) & (jint(1))) <= 0) goto label_154;
	}
	INST_BIPUSH(7);
	goto label_155;
label_154:;
	INST_BIPUSH(6);
label_155:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = sp[1].i;
	LINE_NUMBER(1248);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_memreg = (frame[10].i);
	LINE_NUMBER(1249);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_71:;
	{
	LINE_NUMBER(1252);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (jint(0));
	LINE_NUMBER(1253);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_c = (frame[6].i);
	LINE_NUMBER(1254);
	goto label_30;
	}
label_18:;
	{
	LINE_NUMBER(1257);
	if (((frame[5].i) & (jint(1))) != 0) goto label_160;
	}
	{
	LINE_NUMBER(1258);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (jint(0));
	LINE_NUMBER(1259);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_c = (frame[6].i);
	goto label_30;
	}
label_160:;
	{
	LINE_NUMBER(1261);
	((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type = (jint(0));
	LINE_NUMBER(1262);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[6].i));
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_c = temp0;
	}
label_30:;
	{
	LINE_NUMBER(1266);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Term_parseLimits_int_int_Array1_char_Array1_int_R_int(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:parseLimits", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1272);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) == (jint(3))) goto label_1;
	}
	{
	LINE_NUMBER(1273);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"limits.length="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", should be "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (jint(3)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1274);
	ARRAY_ACCESS(jint, (frame[3].o), (jint(2))) = (jint(1));
	LINE_NUMBER(1275);
	frame[4].i = (jint(0));
	LINE_NUMBER(1276);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(1278);
	if ((frame[0].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(1279);
	sp[0].o = frame[2].o;
	jint temp0 = frame[0].i;
	INST_IINC(0, 1);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(1280);
	switch((frame[6].i)) {
		case 32: goto label_9;
		case 44: goto label_10;
		case 125: goto label_11;
		default: goto label_12;
	}
	}
label_9:;
	LINE_NUMBER(1282);
	goto label_5;
label_10:;
	{
	LINE_NUMBER(1285);
	if ((frame[4].i) <= 0) goto label_13;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"illegal construction: {.. , , ..}"_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(1286);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[5].i);
	LINE_NUMBER(1287);
	frame[5].i = (jint(-1));
	LINE_NUMBER(1288);
	goto label_5;
	}
label_11:;
	{
	LINE_NUMBER(1291);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[5].i);
	LINE_NUMBER(1292);
	if ((frame[4].i) != 0) goto label_17;
	}
	{
	ARRAY_ACCESS(jint, (frame[3].o), (jint(1))) = (frame[5].i);
	}
label_17:;
	{
	LINE_NUMBER(1293);
	popStackFrame(ctx);
	return (frame[0].i);
	}
label_12:;
	{
	LINE_NUMBER(1296);
	if ((frame[6].i) > (57)) goto label_18;
	}
	{
	if ((frame[6].i) >= (48)) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(1298);
	ARRAY_ACCESS(jint, (frame[3].o), (jint(2))) = (jint(2));
	LINE_NUMBER(1299);
	popStackFrame(ctx);
	return (frame[0].i);
	}
label_19:;
	{
	LINE_NUMBER(1301);
	if ((frame[5].i) >= 0) goto label_21;
	}
	INST_ICONST(0);
	INST_ISTORE(5);
label_21:;
	{
	LINE_NUMBER(1302);
	frame[5].i = (((frame[5].i) * (10)) + ((frame[6].i) - (48)));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1305);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed quantifier"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Term_termLookup_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:termLookup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Term(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1309);
	switch((frame[0].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		case 7: goto label_8;
		case 8: goto label_9;
		case 9: goto label_10;
		case 10: goto label_11;
		case 11: goto label_12;
		case 12: goto label_13;
		case 13: goto label_14;
		case 14: goto label_15;
		case 15: goto label_16;
		case 16: goto label_17;
		case 17: goto label_18;
		case 18: goto label_19;
		case 19: goto label_20;
		case 20: goto label_21;
		case 21: goto label_22;
		case 22: goto label_23;
		case 23: goto label_24;
		case 24: goto label_25;
		case 25: goto label_26;
		case 26: goto label_27;
		case 27: goto label_28;
		case 28: goto label_29;
		case 29: goto label_30;
		case 30: goto label_31;
		case 31: goto label_32;
		case 32: goto label_33;
		case 33: goto label_34;
		case 34: goto label_35;
		case 35: goto label_36;
		case 36: goto label_37;
		case 37: goto label_38;
		case 38: goto label_39;
		case 39: goto label_40;
		case 40: goto label_41;
		case 41: goto label_42;
		case 42: goto label_43;
		case 43: goto label_44;
		case 44: goto label_45;
		case 45: goto label_46;
		case 46: goto label_47;
		case 47: goto label_48;
		case 48: goto label_49;
		case 49: goto label_50;
		case 50: goto label_51;
		case 51: goto label_52;
		case 52: goto label_53;
		case 53: goto label_54;
		case 54: goto label_55;
		case 55: goto label_56;
		case 56: goto label_57;
		case 57: goto label_58;
		case 58: goto label_59;
		case 59: goto label_60;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(1311);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CHAR"_j)));
	}
label_2:;
	{
	LINE_NUMBER(1312);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BITSET"_j)));
	}
label_3:;
	{
	LINE_NUMBER(1313);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BITSET2"_j)));
	}
label_5:;
	{
	LINE_NUMBER(1314);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ANY_CHAR"_j)));
	}
label_6:;
	{
	LINE_NUMBER(1315);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ANY_CHAR_NE"_j)));
	}
label_7:;
	{
	LINE_NUMBER(1316);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REG"_j)));
	}
label_8:;
	{
	LINE_NUMBER(1317);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REG_I"_j)));
	}
label_9:;
	{
	LINE_NUMBER(1318);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"FIND"_j)));
	}
label_10:;
	{
	LINE_NUMBER(1319);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"FINDREG"_j)));
	}
label_11:;
	{
	LINE_NUMBER(1320);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SUCCESS"_j)));
	}
label_12:;
	{
	LINE_NUMBER(1321);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BOUNDARY"_j)));
	}
label_13:;
	{
	LINE_NUMBER(1322);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"DIRECTION"_j)));
	}
label_14:;
	{
	LINE_NUMBER(1323);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"UBOUNDARY"_j)));
	}
label_15:;
	{
	LINE_NUMBER(1324);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"UDIRECTION"_j)));
	}
label_16:;
	{
	LINE_NUMBER(1325);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GROUP_IN"_j)));
	}
label_17:;
	{
	LINE_NUMBER(1326);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GROUP_OUT"_j)));
	}
label_18:;
	{
	LINE_NUMBER(1327);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"VOID"_j)));
	}
label_19:;
	{
	LINE_NUMBER(1328);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"START"_j)));
	}
label_20:;
	{
	LINE_NUMBER(1329);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"END"_j)));
	}
label_21:;
	{
	LINE_NUMBER(1330);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"END_EOL"_j)));
	}
label_22:;
	{
	LINE_NUMBER(1331);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LINE_START"_j)));
	}
label_23:;
	{
	LINE_NUMBER(1332);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LINE_END"_j)));
	}
label_24:;
	{
	LINE_NUMBER(1333);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LAST_MATCH_END"_j)));
	}
label_25:;
	{
	LINE_NUMBER(1334);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CNT_SET_0"_j)));
	}
label_26:;
	{
	LINE_NUMBER(1335);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CNT_INC"_j)));
	}
label_27:;
	{
	LINE_NUMBER(1336);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CNT_GT_EQ"_j)));
	}
label_28:;
	{
	LINE_NUMBER(1337);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"READ_CNT_LT"_j)));
	}
label_29:;
	{
	LINE_NUMBER(1338);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CRSTORE_CRINC"_j)));
	}
label_30:;
	{
	LINE_NUMBER(1339);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CR_SET_0"_j)));
	}
label_31:;
	{
	LINE_NUMBER(1340);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CR_LT"_j)));
	}
label_32:;
	{
	LINE_NUMBER(1341);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CR_GT_EQ"_j)));
	}
label_33:;
	{
	LINE_NUMBER(1342);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BRANCH"_j)));
	}
label_34:;
	{
	LINE_NUMBER(1343);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BRANCH_STORE_CNT"_j)));
	}
label_35:;
	{
	LINE_NUMBER(1344);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BRANCH_STORE_CNT_AUX1"_j)));
	}
label_36:;
	{
	LINE_NUMBER(1345);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"PLOOKAHEAD_IN"_j)));
	}
label_37:;
	{
	LINE_NUMBER(1346);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"PLOOKAHEAD_OUT"_j)));
	}
label_38:;
	{
	LINE_NUMBER(1347);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NLOOKAHEAD_IN"_j)));
	}
label_39:;
	{
	LINE_NUMBER(1348);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NLOOKAHEAD_OUT"_j)));
	}
label_40:;
	{
	LINE_NUMBER(1349);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"PLOOKBEHIND_IN"_j)));
	}
label_41:;
	{
	LINE_NUMBER(1350);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"PLOOKBEHIND_OUT"_j)));
	}
label_42:;
	{
	LINE_NUMBER(1351);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NLOOKBEHIND_IN"_j)));
	}
label_43:;
	{
	LINE_NUMBER(1352);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NLOOKBEHIND_OUT"_j)));
	}
label_44:;
	{
	LINE_NUMBER(1353);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"INDEPENDENT_IN"_j)));
	}
label_45:;
	{
	LINE_NUMBER(1354);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"INDEPENDENT_OUT"_j)));
	}
label_46:;
	{
	LINE_NUMBER(1355);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REPEAT_0_INF"_j)));
	}
label_47:;
	{
	LINE_NUMBER(1356);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REPEAT_MIN_INF"_j)));
	}
label_48:;
	{
	LINE_NUMBER(1357);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REPEAT_MIN_MAX"_j)));
	}
label_49:;
	{
	LINE_NUMBER(1358);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REPEAT_REG_MIN_INF"_j)));
	}
label_50:;
	{
	LINE_NUMBER(1359);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"REPEAT_REG_MIN_MAX"_j)));
	}
label_51:;
	{
	LINE_NUMBER(1360);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BACKTRACK_0"_j)));
	}
label_52:;
	{
	LINE_NUMBER(1361);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BACKTRACK_MIN"_j)));
	}
label_53:;
	{
	LINE_NUMBER(1362);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BACKTRACK_FIND_MIN"_j)));
	}
label_54:;
	{
	LINE_NUMBER(1363);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BACKTRACK_FINDREG_MIN"_j)));
	}
label_55:;
	{
	LINE_NUMBER(1364);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"BACKTRACK_REG_MIN"_j)));
	}
label_56:;
	{
	LINE_NUMBER(1365);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"MEMREG_CONDITION"_j)));
	}
label_57:;
	{
	LINE_NUMBER(1366);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LOOKAHEAD_CONDITION_IN"_j)));
	}
label_58:;
	{
	LINE_NUMBER(1367);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LOOKAHEAD_CONDITION_OUT"_j)));
	}
label_59:;
	{
	LINE_NUMBER(1368);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LOOKBEHIND_CONDITION_IN"_j)));
	}
label_60:;
	{
	LINE_NUMBER(1369);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LOOKBEHIND_CONDITION_OUT"_j)));
	}
label_4:;
	{
	LINE_NUMBER(1370);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"UNKNOWN_TERM"_j)));
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Term_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1374);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (100));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1376);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_instanceNum));
	LINE_NUMBER(1377);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (32));
	LINE_NUMBER(1378);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_regexodus_Term_termLookup_int_R_java_lang_String(ctx, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1379);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8": "_j))));
	LINE_NUMBER(1380);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_inverse) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (94));
	}
label_6:;
	{
	LINE_NUMBER(1381);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type)) {
		case 0: goto label_7;
		case 1: goto label_8;
		case 2: goto label_9;
		case 3: goto label_10;
		case 4: goto label_11;
		case 5: goto label_12;
		case 6: goto label_13;
		case 7: goto label_10;
		case 8: goto label_14;
		case 9: goto label_15;
		case 10: goto label_16;
		case 11: goto label_17;
		case 12: goto label_18;
		case 13: goto label_19;
		case 14: goto label_20;
		case 15: goto label_21;
		case 16: goto label_22;
		case 17: goto label_23;
		case 18: goto label_24;
		case 19: goto label_25;
		case 20: goto label_26;
		case 21: goto label_27;
		case 22: goto label_28;
		case 23: goto label_29;
		case 24: goto label_10;
		case 25: goto label_10;
		case 26: goto label_10;
		case 27: goto label_10;
		case 28: goto label_10;
		case 29: goto label_10;
		case 30: goto label_10;
		case 31: goto label_10;
		case 32: goto label_30;
		case 33: goto label_31;
		case 34: goto label_32;
		case 35: goto label_33;
		case 36: goto label_34;
		case 37: goto label_35;
		case 38: goto label_36;
		case 39: goto label_37;
		case 40: goto label_38;
		case 41: goto label_39;
		case 42: goto label_40;
		case 43: goto label_10;
		case 44: goto label_10;
		case 45: goto label_41;
		case 46: goto label_42;
		case 47: goto label_43;
		case 48: goto label_44;
		case 49: goto label_45;
		case 50: goto label_46;
		case 51: goto label_47;
		case 52: goto label_10;
		case 53: goto label_10;
		case 54: goto label_48;
		case 55: goto label_49;
		case 56: goto label_50;
		case 57: goto label_51;
		default: goto label_10;
	}
	}
label_23:;
	{
	LINE_NUMBER(1383);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	LINE_NUMBER(1384);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1385);
	goto label_54;
	}
label_7:;
	{
	LINE_NUMBER(1387);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String(ctx, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_c));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1388);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1389);
	goto label_54;
	}
label_11:;
	{
	LINE_NUMBER(1391);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"dotall, "_j))));
	LINE_NUMBER(1392);
	goto label_54;
	}
label_12:;
	{
	LINE_NUMBER(1394);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"dot-eols, "_j))));
	LINE_NUMBER(1395);
	goto label_54;
	}
label_8:;
	{
	LINE_NUMBER(1397);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (91));
	LINE_NUMBER(1398);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_bitset;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue0_regexodus_ds_IntBitSet_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1399);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (93));
	LINE_NUMBER(1400);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , weight="_j))));
	LINE_NUMBER(1401);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_weight));
	LINE_NUMBER(1402);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1403);
	goto label_54;
	}
label_9:;
	{
	LINE_NUMBER(1405);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (91));
	LINE_NUMBER(1406);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_bitset2;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue2_Array1_regexodus_ds_IntBitSet_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1407);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (93));
	LINE_NUMBER(1408);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , weight2="_j))));
	LINE_NUMBER(1409);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_weight));
	LINE_NUMBER(1410);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1411);
	goto label_54;
	}
label_24:;
	{
	LINE_NUMBER(1413);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"abs.start"_j))));
	LINE_NUMBER(1414);
	goto label_54;
	}
label_25:;
	{
	LINE_NUMBER(1416);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"abs.end"_j))));
	LINE_NUMBER(1417);
	goto label_54;
	}
label_26:;
	{
	LINE_NUMBER(1419);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"abs.end-eol"_j))));
	LINE_NUMBER(1420);
	goto label_54;
	}
label_27:;
	{
	LINE_NUMBER(1422);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"line start"_j))));
	LINE_NUMBER(1423);
	goto label_54;
	}
label_28:;
	{
	LINE_NUMBER(1425);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"line end"_j))));
	LINE_NUMBER(1426);
	goto label_54;
	}
label_29:;
	{
	LINE_NUMBER(1428);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_inverse) == 0) goto label_76;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"non-"_j))));
	}
label_76:;
	{
	LINE_NUMBER(1429);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"BOUNDARY"_j))));
	LINE_NUMBER(1430);
	goto label_54;
	}
label_17:;
	{
	LINE_NUMBER(1432);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_inverse) == 0) goto label_78;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"non-"_j))));
	}
label_78:;
	{
	LINE_NUMBER(1433);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"BOUNDARY"_j))));
	LINE_NUMBER(1434);
	goto label_54;
	}
label_19:;
	{
	LINE_NUMBER(1436);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_inverse) == 0) goto label_80;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"non-"_j))));
	}
label_80:;
	{
	LINE_NUMBER(1437);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UBOUNDARY"_j))));
	LINE_NUMBER(1438);
	goto label_54;
	}
label_18:;
	{
	LINE_NUMBER(1440);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"DIRECTION"_j))));
	LINE_NUMBER(1441);
	goto label_54;
	}
label_20:;
	{
	LINE_NUMBER(1443);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UDIRECTION"_j))));
	LINE_NUMBER(1444);
	goto label_54;
	}
label_15:;
	{
	LINE_NUMBER(1446);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (37));
	}
label_14:;
	{
	LINE_NUMBER(1448);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8">>>{"_j))));
	LINE_NUMBER(1449);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1450);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"}, <<"_j))));
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance));
	LINE_NUMBER(1452);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_eat) == 0) goto label_88;
	}
	{
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8",eat"_j))));
	}
label_88:;
	{
	LINE_NUMBER(1455);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(1456);
	goto label_54;
	}
label_41:;
	{
	LINE_NUMBER(1458);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"rpt{"_j))));
	LINE_NUMBER(1459);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1460);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8",0,inf}"_j))));
	LINE_NUMBER(1461);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1462);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1463);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1464);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_42:;
	{
	LINE_NUMBER(1468);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"rpt{"_j))));
	LINE_NUMBER(1469);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1470);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	LINE_NUMBER(1471);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount));
	LINE_NUMBER(1472);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8",inf}"_j))));
	LINE_NUMBER(1473);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1474);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1475);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1476);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_43:;
	{
	LINE_NUMBER(1480);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"rpt{"_j))));
	LINE_NUMBER(1481);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1482);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	LINE_NUMBER(1483);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount));
	LINE_NUMBER(1484);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	LINE_NUMBER(1485);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount));
	LINE_NUMBER(1486);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"}"_j))));
	LINE_NUMBER(1487);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1488);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1489);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1490);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_44:;
	{
	LINE_NUMBER(1494);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"rpt{$"_j))));
	LINE_NUMBER(1495);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg));
	LINE_NUMBER(1496);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (44));
	LINE_NUMBER(1497);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount));
	LINE_NUMBER(1498);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8",inf}"_j))));
	LINE_NUMBER(1499);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1500);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1501);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1502);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_45:;
	{
	LINE_NUMBER(1506);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"rpt{$"_j))));
	LINE_NUMBER(1507);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg));
	LINE_NUMBER(1508);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (44));
	LINE_NUMBER(1509);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount));
	LINE_NUMBER(1510);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (44));
	LINE_NUMBER(1511);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount));
	LINE_NUMBER(1512);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"}"_j))));
	LINE_NUMBER(1513);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1514);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1515);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1516);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_46:;
	{
	LINE_NUMBER(1520);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"back(0)"_j))));
	LINE_NUMBER(1521);
	goto label_54;
	}
label_47:;
	{
	LINE_NUMBER(1523);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"back("_j))));
	LINE_NUMBER(1524);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount));
	LINE_NUMBER(1525);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8")"_j))));
	LINE_NUMBER(1526);
	goto label_54;
	}
label_48:;
	{
	LINE_NUMBER(1528);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"back"_j))));
	LINE_NUMBER(1529);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"_$"_j))));
	LINE_NUMBER(1530);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg));
	LINE_NUMBER(1531);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"("_j))));
	LINE_NUMBER(1532);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount));
	LINE_NUMBER(1533);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8")"_j))));
	LINE_NUMBER(1534);
	goto label_54;
	}
label_21:;
	{
	LINE_NUMBER(1536);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (40));
	LINE_NUMBER(1537);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg) <= 0) goto label_144;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg));
	}
label_144:;
	{
	LINE_NUMBER(1538);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (45));
	LINE_NUMBER(1539);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1540);
	goto label_54;
	}
label_22:;
	{
	LINE_NUMBER(1542);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (45));
	LINE_NUMBER(1543);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg) <= 0) goto label_148;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg));
	}
label_148:;
	{
	LINE_NUMBER(1544);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (41));
	LINE_NUMBER(1545);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1546);
	goto label_54;
	}
label_33:;
	{
	LINE_NUMBER(1548);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (40));
	LINE_NUMBER(1549);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"="_j))));
	LINE_NUMBER(1550);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1551);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1552);
	goto label_54;
	}
label_34:;
	{
	LINE_NUMBER(1554);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (61));
	LINE_NUMBER(1555);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1556);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (41));
	LINE_NUMBER(1557);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1558);
	goto label_54;
	}
label_35:;
	{
	LINE_NUMBER(1560);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(!"_j))));
	LINE_NUMBER(1561);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1562);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1563);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1564);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1565);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1566);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_36:;
	{
	LINE_NUMBER(1570);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (33));
	LINE_NUMBER(1571);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1572);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (41));
	LINE_NUMBER(1573);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1574);
	goto label_54;
	}
label_37:;
	{
	LINE_NUMBER(1576);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (40));
	LINE_NUMBER(1577);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"<="_j))));
	LINE_NUMBER(1578);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1579);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , dist="_j))));
	LINE_NUMBER(1580);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance));
	LINE_NUMBER(1581);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1582);
	goto label_54;
	}
label_38:;
	{
	LINE_NUMBER(1584);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"<="_j))));
	LINE_NUMBER(1585);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1586);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (41));
	LINE_NUMBER(1587);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1588);
	goto label_54;
	}
label_39:;
	{
	LINE_NUMBER(1590);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(<!"_j))));
	LINE_NUMBER(1591);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1592);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , dist="_j))));
	LINE_NUMBER(1593);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance));
	LINE_NUMBER(1594);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1595);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1596);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1597);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1598);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_40:;
	{
	LINE_NUMBER(1602);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"<!"_j))));
	LINE_NUMBER(1603);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1604);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (41));
	LINE_NUMBER(1605);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1606);
	goto label_54;
	}
label_49:;
	{
	LINE_NUMBER(1608);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(reg"_j))));
	LINE_NUMBER(1609);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg));
	LINE_NUMBER(1610);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"?)"_j))));
	LINE_NUMBER(1611);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1612);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1613);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1614);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_50:;
	{
	LINE_NUMBER(1618);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(cond"_j))));
	LINE_NUMBER(1619);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1620);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((regexodus_Lookahead *) NULL_CHECK((checkCast(ctx, &class_regexodus_Lookahead, (frame[0].o)))))->F_isPositive) == 0) goto label_199;
	}
	INST_BIPUSH(61);
	goto label_200;
label_199:;
	INST_BIPUSH(33);
label_200:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1621);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1622);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1623);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1624);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1625);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_51:;
	{
	LINE_NUMBER(1629);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"cond"_j))));
	LINE_NUMBER(1630);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1631);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8")"_j))));
	LINE_NUMBER(1632);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1633);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", =>"_j))));
	LINE_NUMBER(1634);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1635);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_54;
	}
label_13:;
	{
	LINE_NUMBER(1639);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"$"_j))));
	LINE_NUMBER(1640);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg));
	LINE_NUMBER(1641);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(1642);
	goto label_54;
	}
label_16:;
	{
	LINE_NUMBER(1644);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"END"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(1646);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(aux1)"_j))));
	}
label_31:;
	{
	LINE_NUMBER(1648);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(cnt)"_j))));
	}
label_30:;
	{
	LINE_NUMBER(1650);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"=>"_j))));
	LINE_NUMBER(1651);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_216;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	goto label_217;
	}
label_216:;
	{
	LINE_NUMBER(1652);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	}
label_217:;
	{
	LINE_NUMBER(1653);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" , "_j))));
	LINE_NUMBER(1654);
	goto label_54;
	}
label_10:;
	{
	LINE_NUMBER(1656);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (91));
	LINE_NUMBER(1657);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type)) {
		case 24: goto label_220;
		case 25: goto label_221;
		case 26: goto label_222;
		case 27: goto label_223;
		case 28: goto label_224;
		case 29: goto label_225;
		case 30: goto label_226;
		case 31: goto label_227;
		default: goto label_228;
	}
	}
label_220:;
	{
	LINE_NUMBER(1659);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"cnt=0"_j))));
	LINE_NUMBER(1660);
	goto label_230;
	}
label_221:;
	{
	LINE_NUMBER(1662);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"cnt++"_j))));
	LINE_NUMBER(1663);
	goto label_230;
	}
label_222:;
	{
	LINE_NUMBER(1665);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"cnt>="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount));
	LINE_NUMBER(1666);
	goto label_230;
	}
label_223:;
	{
	LINE_NUMBER(1668);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"->cnt<"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount));
	LINE_NUMBER(1669);
	goto label_230;
	}
label_224:;
	{
	LINE_NUMBER(1671);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"M("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")->,Cr("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_cntreg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")->,Cr("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_cntreg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")++"_j))));
	LINE_NUMBER(1672);
	goto label_230;
	}
label_225:;
	{
	LINE_NUMBER(1674);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Cr("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_cntreg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")=0"_j))));
	LINE_NUMBER(1675);
	goto label_230;
	}
label_226:;
	{
	LINE_NUMBER(1677);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Cr("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_cntreg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")<"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount));
	LINE_NUMBER(1678);
	goto label_230;
	}
label_227:;
	{
	LINE_NUMBER(1680);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Cr("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_cntreg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")>="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount));
	LINE_NUMBER(1681);
	goto label_230;
	}
label_228:;
	{
	LINE_NUMBER(1683);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"unknown type: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type));
	}
label_230:;
	{
	LINE_NUMBER(1685);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"] , "_j))));
	}
label_54:;
	{
	LINE_NUMBER(1687);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_238;
	}
	{
	LINE_NUMBER(1688);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"->"_j))));
	LINE_NUMBER(1689);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	LINE_NUMBER(1690);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	}
label_238:;
	{
	LINE_NUMBER(1693);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Term_toStringAll_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:toStringAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1697);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	sp[0].o = (jobject)M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:toStringAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1701);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_instanceNum));
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1702);
	sp[0].o = (jobject)((func_regexodus_Term_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Term_toString_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1703);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1704);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	jint temp0 = (jint)((func_java_util_ArrayList_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(1705);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\r\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1706);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	sp[1].o = (jobject)M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1709);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1710);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_instanceNum));
	jint temp0 = (jint)((func_java_util_ArrayList_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1711);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\r\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1712);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	sp[1].o = (jobject)M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1715);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Term_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1720);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1721);
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
	LINE_NUMBER(1723);
	frame[2].o = (checkCast(ctx, &class_regexodus_Term, (frame[1].o)));
	LINE_NUMBER(1725);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_type)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1726);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_inverse) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_inverse)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(1727);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_c) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_c)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(1728);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_distance)) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1729);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_eat) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_eat)) goto label_9;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(1730);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_weight) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_weight)) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(1731);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_memreg)) goto label_11;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(1732);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_minCount)) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(1733);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_maxCount)) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(1734);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_cntreg) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_cntreg)) goto label_14;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(1735);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId) == ((jint)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_lookaheadId)) goto label_15;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(1736);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_next;
	jint temp0 = (jint)((func_regexodus_Term_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_17;
	}
	goto label_18;
label_16:;
	{
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_next;
	if (sp[0].o == nullptr) goto label_17;
	}
label_18:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(1737);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_bitset;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_bitset;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_bitset;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_20;
	}
	goto label_21;
label_19:;
	{
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_bitset;
	if (sp[0].o == nullptr) goto label_20;
	}
label_21:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_20:;
	{
	LINE_NUMBER(1739);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_bitset2;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_bitset2;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_categoryBitset;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_categoryBitset;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_boolean_Array1_boolean_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_Term_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Term:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1744);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	jint temp0 = (jint)((func_regexodus_Term_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(1745);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type));
	LINE_NUMBER(1746);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_inverse) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(1747);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_c));
	LINE_NUMBER(1748);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance));
	LINE_NUMBER(1749);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_eat) == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(1750);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_bitset;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_bitset;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(1751);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_bitset2;
	jint temp1 = (jint)SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(ctx, sp[0].o);
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(1752);
	jint temp2 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_categoryBitset;
	jint temp3 = (jint)SM_java_util_Arrays_hashCode_Array1_boolean_R_int(ctx, sp[0].o);
	frame[1].i = (temp2 + temp3);
	LINE_NUMBER(1753);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_weight));
	LINE_NUMBER(1754);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg));
	LINE_NUMBER(1755);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount));
	LINE_NUMBER(1756);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount));
	LINE_NUMBER(1757);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_cntreg));
	LINE_NUMBER(1758);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId));
	LINE_NUMBER(1770);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Term[] {
	(void *) M_regexodus_Term_hashCode_R_int,
	(void *) M_regexodus_Term_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Term_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap,
	(void *) M_regexodus_Term_append_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Term_newBranch,
	(void *) M_regexodus_Term_close,
	(void *) M_regexodus_Term_startNewBranch,
	(void *) M_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int,
	(void *) M_regexodus_Term_toStringAll_R_java_lang_String,
	(void *) M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String,
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
	{ "append", "(II[C[I[ILjava/util/ArrayList;Ljava/util/HashMap;)V" },
	{ "append", "(Lregexodus/Term;)Lregexodus/Term;" },
	{ "replaceCurrent", "(Lregexodus/Term;)Lregexodus/Term;" },
	{ "newBranch", "()V" },
	{ "close", "()V" },
	{ "startNewBranch", "()V" },
	{ "parseTerm", "([CIILregexodus/Term;I)I" },
	{ "toStringAll", "()Ljava/lang/String;" },
	{ "toStringAll", "(Ljava/util/ArrayList;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_regexodus_REFlags, &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_Term_serialVersionUID, "J", 26 },
	{ "CHAR", &class_int, (intptr_t) &SF_regexodus_Term_CHAR, "I", 24 },
	{ "BITSET", &class_int, (intptr_t) &SF_regexodus_Term_BITSET, "I", 24 },
	{ "BITSET2", &class_int, (intptr_t) &SF_regexodus_Term_BITSET2, "I", 24 },
	{ "ANY_CHAR", &class_int, (intptr_t) &SF_regexodus_Term_ANY_CHAR, "I", 24 },
	{ "ANY_CHAR_NE", &class_int, (intptr_t) &SF_regexodus_Term_ANY_CHAR_NE, "I", 24 },
	{ "REG", &class_int, (intptr_t) &SF_regexodus_Term_REG, "I", 24 },
	{ "REG_I", &class_int, (intptr_t) &SF_regexodus_Term_REG_I, "I", 24 },
	{ "FIND", &class_int, (intptr_t) &SF_regexodus_Term_FIND, "I", 24 },
	{ "FINDREG", &class_int, (intptr_t) &SF_regexodus_Term_FINDREG, "I", 24 },
	{ "SUCCESS", &class_int, (intptr_t) &SF_regexodus_Term_SUCCESS, "I", 24 },
	{ "BOUNDARY", &class_int, (intptr_t) &SF_regexodus_Term_BOUNDARY, "I", 24 },
	{ "DIRECTION", &class_int, (intptr_t) &SF_regexodus_Term_DIRECTION, "I", 24 },
	{ "UBOUNDARY", &class_int, (intptr_t) &SF_regexodus_Term_UBOUNDARY, "I", 24 },
	{ "UDIRECTION", &class_int, (intptr_t) &SF_regexodus_Term_UDIRECTION, "I", 24 },
	{ "GROUP_IN", &class_int, (intptr_t) &SF_regexodus_Term_GROUP_IN, "I", 24 },
	{ "GROUP_OUT", &class_int, (intptr_t) &SF_regexodus_Term_GROUP_OUT, "I", 24 },
	{ "VOID", &class_int, (intptr_t) &SF_regexodus_Term_VOID, "I", 24 },
	{ "START", &class_int, (intptr_t) &SF_regexodus_Term_START, "I", 24 },
	{ "END", &class_int, (intptr_t) &SF_regexodus_Term_END, "I", 24 },
	{ "END_EOL", &class_int, (intptr_t) &SF_regexodus_Term_END_EOL, "I", 24 },
	{ "LINE_START", &class_int, (intptr_t) &SF_regexodus_Term_LINE_START, "I", 24 },
	{ "LINE_END", &class_int, (intptr_t) &SF_regexodus_Term_LINE_END, "I", 24 },
	{ "LAST_MATCH_END", &class_int, (intptr_t) &SF_regexodus_Term_LAST_MATCH_END, "I", 24 },
	{ "CNT_SET_0", &class_int, (intptr_t) &SF_regexodus_Term_CNT_SET_0, "I", 24 },
	{ "CNT_INC", &class_int, (intptr_t) &SF_regexodus_Term_CNT_INC, "I", 24 },
	{ "CNT_GT_EQ", &class_int, (intptr_t) &SF_regexodus_Term_CNT_GT_EQ, "I", 24 },
	{ "READ_CNT_LT", &class_int, (intptr_t) &SF_regexodus_Term_READ_CNT_LT, "I", 24 },
	{ "CRSTORE_CRINC", &class_int, (intptr_t) &SF_regexodus_Term_CRSTORE_CRINC, "I", 24 },
	{ "CR_SET_0", &class_int, (intptr_t) &SF_regexodus_Term_CR_SET_0, "I", 24 },
	{ "CR_LT", &class_int, (intptr_t) &SF_regexodus_Term_CR_LT, "I", 24 },
	{ "CR_GT_EQ", &class_int, (intptr_t) &SF_regexodus_Term_CR_GT_EQ, "I", 24 },
	{ "LITERAL_START", &class_int, (intptr_t) &SF_regexodus_Term_LITERAL_START, "I", 24 },
	{ "LITERAL_END", &class_int, (intptr_t) &SF_regexodus_Term_LITERAL_END, "I", 24 },
	{ "BRANCH", &class_int, (intptr_t) &SF_regexodus_Term_BRANCH, "I", 24 },
	{ "BRANCH_STORE_CNT", &class_int, (intptr_t) &SF_regexodus_Term_BRANCH_STORE_CNT, "I", 24 },
	{ "BRANCH_STORE_CNT_AUX1", &class_int, (intptr_t) &SF_regexodus_Term_BRANCH_STORE_CNT_AUX1, "I", 24 },
	{ "PLOOKAHEAD_IN", &class_int, (intptr_t) &SF_regexodus_Term_PLOOKAHEAD_IN, "I", 24 },
	{ "PLOOKAHEAD_OUT", &class_int, (intptr_t) &SF_regexodus_Term_PLOOKAHEAD_OUT, "I", 24 },
	{ "NLOOKAHEAD_IN", &class_int, (intptr_t) &SF_regexodus_Term_NLOOKAHEAD_IN, "I", 24 },
	{ "NLOOKAHEAD_OUT", &class_int, (intptr_t) &SF_regexodus_Term_NLOOKAHEAD_OUT, "I", 24 },
	{ "PLOOKBEHIND_IN", &class_int, (intptr_t) &SF_regexodus_Term_PLOOKBEHIND_IN, "I", 24 },
	{ "PLOOKBEHIND_OUT", &class_int, (intptr_t) &SF_regexodus_Term_PLOOKBEHIND_OUT, "I", 24 },
	{ "NLOOKBEHIND_IN", &class_int, (intptr_t) &SF_regexodus_Term_NLOOKBEHIND_IN, "I", 24 },
	{ "NLOOKBEHIND_OUT", &class_int, (intptr_t) &SF_regexodus_Term_NLOOKBEHIND_OUT, "I", 24 },
	{ "INDEPENDENT_IN", &class_int, (intptr_t) &SF_regexodus_Term_INDEPENDENT_IN, "I", 24 },
	{ "INDEPENDENT_OUT", &class_int, (intptr_t) &SF_regexodus_Term_INDEPENDENT_OUT, "I", 24 },
	{ "REPEAT_0_INF", &class_int, (intptr_t) &SF_regexodus_Term_REPEAT_0_INF, "I", 24 },
	{ "REPEAT_MIN_INF", &class_int, (intptr_t) &SF_regexodus_Term_REPEAT_MIN_INF, "I", 24 },
	{ "REPEAT_MIN_MAX", &class_int, (intptr_t) &SF_regexodus_Term_REPEAT_MIN_MAX, "I", 24 },
	{ "REPEAT_REG_MIN_INF", &class_int, (intptr_t) &SF_regexodus_Term_REPEAT_REG_MIN_INF, "I", 24 },
	{ "REPEAT_REG_MIN_MAX", &class_int, (intptr_t) &SF_regexodus_Term_REPEAT_REG_MIN_MAX, "I", 24 },
	{ "BACKTRACK_0", &class_int, (intptr_t) &SF_regexodus_Term_BACKTRACK_0, "I", 24 },
	{ "BACKTRACK_MIN", &class_int, (intptr_t) &SF_regexodus_Term_BACKTRACK_MIN, "I", 24 },
	{ "BACKTRACK_FIND_MIN", &class_int, (intptr_t) &SF_regexodus_Term_BACKTRACK_FIND_MIN, "I", 24 },
	{ "BACKTRACK_FINDREG_MIN", &class_int, (intptr_t) &SF_regexodus_Term_BACKTRACK_FINDREG_MIN, "I", 24 },
	{ "BACKTRACK_REG_MIN", &class_int, (intptr_t) &SF_regexodus_Term_BACKTRACK_REG_MIN, "I", 24 },
	{ "MEMREG_CONDITION", &class_int, (intptr_t) &SF_regexodus_Term_MEMREG_CONDITION, "I", 24 },
	{ "LOOKAHEAD_CONDITION_IN", &class_int, (intptr_t) &SF_regexodus_Term_LOOKAHEAD_CONDITION_IN, "I", 24 },
	{ "LOOKAHEAD_CONDITION_OUT", &class_int, (intptr_t) &SF_regexodus_Term_LOOKAHEAD_CONDITION_OUT, "I", 24 },
	{ "LOOKBEHIND_CONDITION_IN", &class_int, (intptr_t) &SF_regexodus_Term_LOOKBEHIND_CONDITION_IN, "I", 24 },
	{ "LOOKBEHIND_CONDITION_OUT", &class_int, (intptr_t) &SF_regexodus_Term_LOOKBEHIND_CONDITION_OUT, "I", 24 },
	{ "FIRST_TRANSPARENT", &class_int, (intptr_t) &SF_regexodus_Term_FIRST_TRANSPARENT, "I", 24 },
	{ "LAST_TRANSPARENT", &class_int, (intptr_t) &SF_regexodus_Term_LAST_TRANSPARENT, "I", 24 },
	{ "VARS_LENGTH", &class_int, (intptr_t) &SF_regexodus_Term_VARS_LENGTH, "I", 26 },
	{ "MEMREG_COUNT", &class_int, (intptr_t) &SF_regexodus_Term_MEMREG_COUNT, "I", 26 },
	{ "CNTREG_COUNT", &class_int, (intptr_t) &SF_regexodus_Term_CNTREG_COUNT, "I", 26 },
	{ "DEPTH", &class_int, (intptr_t) &SF_regexodus_Term_DEPTH, "I", 26 },
	{ "LOOKAHEAD_COUNT", &class_int, (intptr_t) &SF_regexodus_Term_LOOKAHEAD_COUNT, "I", 26 },
	{ "LIMITS_LENGTH", &class_int, (intptr_t) &SF_regexodus_Term_LIMITS_LENGTH, "I", 26 },
	{ "LIMITS_PARSE_RESULT_INDEX", &class_int, (intptr_t) &SF_regexodus_Term_LIMITS_PARSE_RESULT_INDEX, "I", 26 },
	{ "LIMITS_OK", &class_int, (intptr_t) &SF_regexodus_Term_LIMITS_OK, "I", 26 },
	{ "LIMITS_FAILURE", &class_int, (intptr_t) &SF_regexodus_Term_LIMITS_FAILURE, "I", 26 },
	{ "LITERAL_FLAG", &class_int, (intptr_t) &SF_regexodus_Term_LITERAL_FLAG, "I", 26 },
	{ "next", &class_regexodus_Term, offsetof(regexodus_Term, F_next), "Lregexodus/Term;", 0 },
	{ "failNext", &class_regexodus_Term, offsetof(regexodus_Term, F_failNext), "Lregexodus/Term;", 0 },
	{ "type", &class_int, offsetof(regexodus_Term, F_type), "I", 0 },
	{ "inverse", &class_boolean, offsetof(regexodus_Term, F_inverse), "Z", 0 },
	{ "c", &class_char, offsetof(regexodus_Term, F_c), "C", 0 },
	{ "distance", &class_int, offsetof(regexodus_Term, F_distance), "I", 0 },
	{ "eat", &class_boolean, offsetof(regexodus_Term, F_eat), "Z", 0 },
	{ "bitset", &class_regexodus_ds_IntBitSet, offsetof(regexodus_Term, F_bitset), "Lregexodus/ds/IntBitSet;", 0 },
	{ "bitset2", getArrayClass(&class_regexodus_ds_IntBitSet, 1), offsetof(regexodus_Term, F_bitset2), "[Lregexodus/ds/IntBitSet;", 0 },
	{ "categoryBitset", getArrayClass(&class_boolean, 1), offsetof(regexodus_Term, F_categoryBitset), "[Z", 2 },
	{ "mode_insensitive", &class_boolean, offsetof(regexodus_Term, F_mode_insensitive), "Z", 0 },
	{ "mode_reverse", &class_boolean, offsetof(regexodus_Term, F_mode_reverse), "Z", 0 },
	{ "mode_bracket", &class_boolean, offsetof(regexodus_Term, F_mode_bracket), "Z", 0 },
	{ "mode_upper", &class_boolean, offsetof(regexodus_Term, F_mode_upper), "Z", 0 },
	{ "weight", &class_int, offsetof(regexodus_Term, F_weight), "I", 0 },
	{ "memreg", &class_int, offsetof(regexodus_Term, F_memreg), "I", 0 },
	{ "minCount", &class_int, offsetof(regexodus_Term, F_minCount), "I", 0 },
	{ "maxCount", &class_int, offsetof(regexodus_Term, F_maxCount), "I", 0 },
	{ "target", &class_regexodus_Term, offsetof(regexodus_Term, F_target), "Lregexodus/Term;", 0 },
	{ "cntreg", &class_int, offsetof(regexodus_Term, F_cntreg), "I", 0 },
	{ "lookaheadId", &class_int, offsetof(regexodus_Term, F_lookaheadId), "I", 0 },
	{ "prev", &class_regexodus_Term, offsetof(regexodus_Term, F_prev), "Lregexodus/Term;", 0 },
	{ "in", &class_regexodus_Term, offsetof(regexodus_Term, F_in), "Lregexodus/Term;", 0 },
	{ "out", &class_regexodus_Term, offsetof(regexodus_Term, F_out), "Lregexodus/Term;", 0 },
	{ "out1", &class_regexodus_Term, offsetof(regexodus_Term, F_out1), "Lregexodus/Term;", 0 },
	{ "first", &class_regexodus_Term, offsetof(regexodus_Term, F_first), "Lregexodus/Term;", 4 },
	{ "current", &class_regexodus_Term, offsetof(regexodus_Term, F_current), "Lregexodus/Term;", 0 },
	{ "branchOut", &class_regexodus_Term, offsetof(regexodus_Term, F_branchOut), "Lregexodus/Term;", 0 },
	{ "instances", &class_int, (intptr_t) &SF_regexodus_Term_instances, "I", 10 },
	{ "instanceNum", &class_int, offsetof(regexodus_Term, F_instanceNum), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Term, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_regexodus_Term_int, 0, "(I)V", 0 },
	{ "makeTree", (intptr_t) SM_regexodus_Term_makeTree_java_lang_String_Array1_int_regexodus_Pattern, 0, "(Ljava/lang/String;[ILregexodus/Pattern;)V", 8 },
	{ "makeTree", (intptr_t) SM_regexodus_Term_makeTree_Array1_char_int_int_Array1_int_regexodus_Pattern, 0, "([CII[ILregexodus/Pattern;)V", 10 },
	{ "makeTree", (intptr_t) SM_regexodus_Term_makeTree_regexodus_Pretokenizer_Array1_char_Array1_int_Array1_int_regexodus_Term_java_util_ArrayList_java_util_HashMap_R_regexodus_Term, 0, "(Lregexodus/Pretokenizer;[C[I[ILregexodus/Term;Ljava/util/ArrayList;Ljava/util/HashMap;)Lregexodus/Term;", 10 },
	{ "makeNumber", (intptr_t) SM_regexodus_Term_makeNumber_int_int_Array1_char_R_int, 0, "(II[C)I", 10 },
	{ "append", (intptr_t) M_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap, VTABLE_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap, "(II[C[I[ILjava/util/ArrayList;Ljava/util/HashMap;)V", 2 },
	{ "parseGroupId", (intptr_t) SM_regexodus_Term_parseGroupId_Array1_char_int_int_regexodus_Term_java_util_HashMap_char_R_int, 0, "([CIILregexodus/Term;Ljava/util/HashMap;C)I", 10 },
	{ "append", (intptr_t) M_regexodus_Term_append_regexodus_Term_R_regexodus_Term, VTABLE_regexodus_Term_append_regexodus_Term_R_regexodus_Term, "(Lregexodus/Term;)Lregexodus/Term;", 0 },
	{ "replaceCurrent", (intptr_t) M_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term, VTABLE_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term, "(Lregexodus/Term;)Lregexodus/Term;", 0 },
	{ "newBranch", (intptr_t) M_regexodus_Term_newBranch, VTABLE_regexodus_Term_newBranch, "()V", 2 },
	{ "close", (intptr_t) M_regexodus_Term_close, VTABLE_regexodus_Term_close, "()V", 0 },
	{ "link", (intptr_t) SM_regexodus_Term_link_regexodus_Term_regexodus_Term, 0, "(Lregexodus/Term;Lregexodus/Term;)V", 10 },
	{ "linkd", (intptr_t) SM_regexodus_Term_linkd_regexodus_Term_regexodus_Term, 0, "(Lregexodus/Term;Lregexodus/Term;)V", 10 },
	{ "startNewBranch", (intptr_t) M_regexodus_Term_startNewBranch, VTABLE_regexodus_Term_startNewBranch, "()V", 0 },
	{ "makeGreedyStar", (intptr_t) SM_regexodus_Term_makeGreedyStar_Array1_int_regexodus_Term_java_util_ArrayList_R_regexodus_Term, 0, "([ILregexodus/Term;Ljava/util/ArrayList;)Lregexodus/Term;", 10 },
	{ "makeLazyStar", (intptr_t) SM_regexodus_Term_makeLazyStar_Array1_int_regexodus_Term_R_regexodus_Term, 0, "([ILregexodus/Term;)Lregexodus/Term;", 10 },
	{ "makeGreedyPlus", (intptr_t) SM_regexodus_Term_makeGreedyPlus_Array1_int_regexodus_Term_java_util_ArrayList_R_regexodus_Term, 0, "([ILregexodus/Term;Ljava/util/ArrayList;)Lregexodus/Term;", 10 },
	{ "makeLazyPlus", (intptr_t) SM_regexodus_Term_makeLazyPlus_Array1_int_regexodus_Term_R_regexodus_Term, 0, "([ILregexodus/Term;)Lregexodus/Term;", 10 },
	{ "makeGreedyQMark", (intptr_t) SM_regexodus_Term_makeGreedyQMark_Array1_int_regexodus_Term_R_regexodus_Term, 0, "([ILregexodus/Term;)Lregexodus/Term;", 10 },
	{ "makeLazyQMark", (intptr_t) SM_regexodus_Term_makeLazyQMark_Array1_int_regexodus_Term_R_regexodus_Term, 0, "([ILregexodus/Term;)Lregexodus/Term;", 10 },
	{ "makeGreedyLimits", (intptr_t) SM_regexodus_Term_makeGreedyLimits_Array1_int_regexodus_Term_Array1_int_java_util_ArrayList_R_regexodus_Term, 0, "([ILregexodus/Term;[ILjava/util/ArrayList;)Lregexodus/Term;", 10 },
	{ "makeLazyLimits", (intptr_t) SM_regexodus_Term_makeLazyLimits_Array1_int_regexodus_Term_Array1_int_R_regexodus_Term, 0, "([ILregexodus/Term;[I)Lregexodus/Term;", 10 },
	{ "parseTerm", (intptr_t) M_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int, VTABLE_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int, "([CIILregexodus/Term;I)I", 2 },
	{ "parseLimits", (intptr_t) SM_regexodus_Term_parseLimits_int_int_Array1_char_Array1_int_R_int, 0, "(II[C[I)I", 10 },
	{ "termLookup", (intptr_t) SM_regexodus_Term_termLookup_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 8 },
	{ "toString", (intptr_t) M_regexodus_Term_toString_R_java_lang_String, VTABLE_regexodus_Term_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toStringAll", (intptr_t) M_regexodus_Term_toStringAll_R_java_lang_String, VTABLE_regexodus_Term_toStringAll_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toStringAll", (intptr_t) M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String, VTABLE_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String, "(Ljava/util/ArrayList;)Ljava/lang/String;", 2 },
	{ "equals", (intptr_t) M_regexodus_Term_equals_java_lang_Object_R_boolean, VTABLE_regexodus_Term_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_Term_hashCode_R_int, VTABLE_regexodus_Term_hashCode_R_int, "()I", 1 },
};

Class class_regexodus_Term{
		.nativeName = (intptr_t) "regexodus/Term",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Term),
		.classVtable = (intptr_t) vtable_regexodus_Term,
		.staticInitializer = (intptr_t) clinit_regexodus_Term,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Term,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 104,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Term = registerClass(&class_regexodus_Term);

}
