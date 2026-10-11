#include "java/util/Formatter_Doormat.h"
#include "java/lang/Math.h"
#include "regexodus/MatchResult.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Formatter_1.h"
#include "java/util/Formatter.h"
#include "java/lang/Number.h"
#include "java/lang/Byte.h"
#include "regexodus/TextBuffer.h"
#include "java/util/Formatter_Doormat.h"
#include "java/lang/Long.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Short.h"
#include "java/lang/Object.h"
#include "regexodus/Substitution.h"
#include "java/lang/String.h"
#include "java/lang/Double.h"

extern "C" {

jint SF_java_util_Formatter$Doormat_bufLen;

void mark_java_util_Formatter$Doormat(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Formatter$Doormat *) object;
	if (self->F_arguments)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arguments)->clazz)->markFunction)((jobject) self->F_arguments, mark, depth + 1);
	if (self->F_workBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_workBuffer)->clazz)->markFunction)((jobject) self->F_workBuffer, mark, depth + 1);
}

void clinit_java_util_Formatter$Doormat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Formatter$Doormat_bufLen = jint(16);
}

void init_java_util_Formatter$Doormat_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter$Doormat:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Formatter$Doormat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (16));
	((java_util_Formatter$Doormat *) NULL_CHECK(sp[0].o))->F_workBuffer = (jref) sp[1].o;
	LINE_NUMBER(44);
	((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_arguments = (jref) (frame[1].o);
	LINE_NUMBER(45);
	((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Formatter$Doormat_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter$Doormat:appendSubstitution", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(53);
	frame[3].i = (jint(-1));
	LINE_NUMBER(54);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"index"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"index"_j))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[3].i = (temp0 - (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(57);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"str"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(59);
	frame[5].i = (jint(-1));
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[5].i = temp0;
	}
label_10:;
	{
	LINE_NUMBER(62);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_arguments;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[3].i) < 0) goto label_12;
	}
	INST_ILOAD(3);
	goto label_13;
label_12:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_Formatter$Doormat *) NULL_CHECK(sp[0].o))->F_index;
	((java_util_Formatter$Doormat *) NULL_CHECK(sp[0].o))->F_index = (temp0 + (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_13:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, sp[3].i)))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, sp[3].i)));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(63);
	if ((frame[4].i) == 0) goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	if (temp0 >= (frame[5].i)) goto label_17;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (32));
	goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	if (temp0 >= (frame[5].i)) goto label_17;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jint(0)), (32));
	goto label_15;
	}
label_17:;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	((func_regexodus_TextBuffer_append_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	goto label_21;
	}
label_4:;
	{
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"int"_j))));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_arguments;
	sp += 1;
	if ((frame[3].i) < 0) goto label_24;
	}
	INST_ILOAD(3);
	goto label_25;
label_24:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_Formatter$Doormat *) NULL_CHECK(sp[0].o))->F_index;
	((java_util_Formatter$Doormat *) NULL_CHECK(sp[0].o))->F_index = (temp0 + (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_25:;
	{
	sp -= 2;
	jlong temp0 = (jlong)((func_java_lang_Number_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, sp[1].i)))))->vtable)[VTABLE_java_lang_Number_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, sp[1].i)))));
	frame[4].l = temp0;
	LINE_NUMBER(72);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[4].l));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(73);
	frame[7].i = (jint(-1));
	LINE_NUMBER(74);
	jint temp1 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	if (temp1 == 0) goto label_29;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[7].i = temp0;
	}
label_29:;
	{
	LINE_NUMBER(76);
	frame[8].i = (32);
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"+"_j))));
	if (temp0 == 0) goto label_34;
	}
	{
	if ((longCompare((frame[4].l), (jlong(0)))) < 0) goto label_34;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"+"_j))));
	}
label_34:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0"_j))));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(81);
	frame[8].i = (48);
	}
label_36:;
	{
	LINE_NUMBER(82);
	if ((longCompare((frame[4].l), (jlong(0)))) < 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jint(0)), (32));
	}
label_38:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	if (temp0 == 0) goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	if (temp0 >= (frame[7].i)) goto label_42;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[8].i));
	goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	if (temp0 >= (frame[7].i)) goto label_42;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jint(0)), (frame[8].i));
	goto label_40;
	}
label_32:;
	{
	LINE_NUMBER(92);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	if (temp0 >= (frame[7].i)) goto label_42;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jint(0)), (frame[8].i));
	goto label_32;
	}
label_42:;
	{
	LINE_NUMBER(95);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	((func_regexodus_TextBuffer_append_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(96);
	goto label_21;
	}
label_22:;
	{
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"hex"_j))));
	if (temp0 == 0) goto label_47;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_arguments;
	sp += 1;
	if ((frame[3].i) < 0) goto label_49;
	}
	INST_ILOAD(3);
	goto label_50;
label_49:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_Formatter$Doormat *) NULL_CHECK(sp[0].o))->F_index;
	((java_util_Formatter$Doormat *) NULL_CHECK(sp[0].o))->F_index = (temp0 + (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_50:;
	{
	sp -= 2;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, sp[1].i));
	LINE_NUMBER(98);
	jlong temp0 = (jlong)((func_java_lang_Number_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[4].o))))->vtable)[VTABLE_java_lang_Number_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[4].o))));
	frame[5].l = temp0;
	LINE_NUMBER(99);
	frame[7].i = (jint(-1));
	LINE_NUMBER(100);
	jint temp1 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	if (temp1 == 0) goto label_54;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[7].i = temp0;
	}
label_54:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"case"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	if (temp0 == 0) goto label_56;
	}
	sp->o = (jobject)SM_java_util_Formatter_access$100_R_Array1_char(ctx);
	sp++;
	goto label_57;
label_56:;
	sp->o = (jobject)SM_java_util_Formatter_access$200_R_Array1_char(ctx);
	sp++;
label_57:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(104);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Integer)) == 0) goto label_59;
	}
	{
	LINE_NUMBER(105);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = frame[0].o;
	jint temp0 = jint((frame[5].l));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[7].i), (8));
	sp[1].o = (jobject)((func_java_util_Formatter$Doormat_intToHexString_int_int_Array1_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Formatter$Doormat_intToHexString_int_int_Array1_char_R_java_lang_String])(ctx, sp[1].o, temp0, temp1, (frame[8].o));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	goto label_62;
	}
label_59:;
	{
	LINE_NUMBER(106);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Short)) == 0) goto label_63;
	}
	{
	LINE_NUMBER(107);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = frame[0].o;
	jint temp0 = jshort((jint((frame[5].l))));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[7].i), (jint(4)));
	sp[1].o = (jobject)((func_java_util_Formatter$Doormat_shortToHexString_short_int_Array1_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Formatter$Doormat_shortToHexString_short_int_Array1_char_R_java_lang_String])(ctx, sp[1].o, temp0, temp1, (frame[8].o));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	goto label_62;
	}
label_63:;
	{
	LINE_NUMBER(108);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Byte)) == 0) goto label_66;
	}
	{
	LINE_NUMBER(109);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = frame[0].o;
	jint temp0 = jbyte((jint((frame[5].l))));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[7].i), (jint(2)));
	sp[1].o = (jobject)((func_java_util_Formatter$Doormat_byteToHexString_byte_int_Array1_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Formatter$Doormat_byteToHexString_byte_int_Array1_char_R_java_lang_String])(ctx, sp[1].o, temp0, temp1, (frame[8].o));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	goto label_62;
	}
label_66:;
	{
	LINE_NUMBER(111);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = frame[0].o;
	jlong temp0 = frame[5].l;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[7].i), (16));
	sp[1].o = (jobject)((func_java_util_Formatter$Doormat_longToHexString_long_int_Array1_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Formatter$Doormat_longToHexString_long_int_Array1_char_R_java_lang_String])(ctx, sp[1].o, temp0, temp1, (frame[8].o));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(112);
	frame[10].i = (32);
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	if (temp0 == 0) goto label_70;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0"_j))));
	if (temp0 == 0) goto label_72;
	}
	{
	LINE_NUMBER(115);
	frame[10].i = (48);
	}
label_72:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	if (temp0 == 0) goto label_74;
	}
label_75:;
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[9].o));
	if (temp0 >= (frame[7].i)) goto label_76;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[9].o), (32));
	goto label_75;
	}
label_74:;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[9].o));
	if (temp0 >= (frame[7].i)) goto label_76;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[9].o), (jint(0)), (frame[10].i));
	goto label_74;
	}
label_70:;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[9].o));
	if (temp0 >= (frame[7].i)) goto label_76;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[9].o), (jint(0)), (frame[10].i));
	goto label_70;
	}
label_76:;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[9].o));
	((func_regexodus_TextBuffer_append_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	goto label_21;
	}
label_47:;
	{
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"float"_j))));
	if (temp0 == 0) goto label_81;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_arguments;
	sp += 1;
	if ((frame[3].i) < 0) goto label_83;
	}
	INST_ILOAD(3);
	goto label_84;
label_83:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_Formatter$Doormat *) NULL_CHECK(sp[0].o))->F_index;
	((java_util_Formatter$Doormat *) NULL_CHECK(sp[0].o))->F_index = (temp0 + (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_84:;
	{
	sp -= 2;
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, sp[1].i)))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, sp[1].i)))));
	frame[4].d = temp0;
	LINE_NUMBER(131);
	jint temp1 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"pre"_j))));
	if (temp1 == 0) goto label_86;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"precise"_j))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[7].i = temp0;
	LINE_NUMBER(133);
	jdouble temp1 = frame[4].d;
	jdouble temp2 = jdouble(0.5);
	jdouble temp3 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(10.0)), (jdouble((-(frame[7].i)))));
	jdouble temp4 = (jdouble)SM_java_lang_Math_copySign_double_double_R_double(ctx, (temp2 * temp3), (frame[4].d));
	frame[4].d = (temp1 + temp4);
	LINE_NUMBER(134);
	sp[0].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[4].d));
	frame[6].o = sp[0].o;
	LINE_NUMBER(135);
	jint temp5 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[6].o), (46));
	frame[8].i = (temp5 + (jint(1)));
	LINE_NUMBER(136);
	sp[0].o = frame[6].o;
	jint temp6 = frame[8].i;
	jint temp7 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	jint temp8 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp7, ((frame[8].i) + (frame[7].i)));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp6, temp8);
	frame[9].o = sp[0].o;
	LINE_NUMBER(137);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[6].o), (jint(0)), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[9].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(138);
	goto label_94;
	}
label_86:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[4].d));
	frame[6].o = sp[0].o;
	}
label_94:;
	{
	LINE_NUMBER(140);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(141);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	if (temp0 == 0) goto label_96;
	}
	{
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"+"_j))));
	if (temp0 == 0) goto label_96;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[7].o), (jint(0)));
	if (temp0 == (45)) goto label_96;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (jint(0)), (43));
	}
label_96:;
	{
	LINE_NUMBER(144);
	frame[8].i = (jint(-1));
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	if (temp0 == 0) goto label_99;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"width"_j))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[8].i = temp0;
	}
label_99:;
	{
	LINE_NUMBER(147);
	frame[9].i = (32);
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	if (temp0 == 0) goto label_102;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"0"_j))));
	if (temp0 == 0) goto label_104;
	}
	{
	LINE_NUMBER(150);
	frame[9].i = (48);
	}
label_104:;
	{
	LINE_NUMBER(152);
	jdouble temp0 = (jdouble)SM_java_lang_Math_copySign_double_double_R_double(ctx, (jdouble(1)), (frame[4].d));
	if ((doubleCompare(temp0, (jdouble(1)), -1)) != 0) goto label_106;
	}
	{
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	if (temp0 == 0) goto label_106;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (jint(0)), (32));
	}
label_106:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"flags"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	if (temp0 == 0) goto label_108;
	}
label_109:;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[7].o));
	if (temp0 >= (frame[8].i)) goto label_110;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (frame[9].i));
	goto label_109;
	}
label_108:;
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[7].o));
	if (temp0 >= (frame[8].i)) goto label_110;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (jint(0)), (frame[9].i));
	goto label_108;
	}
label_102:;
	{
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[7].o));
	if (temp0 >= (frame[8].i)) goto label_110;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (jint(0)), (frame[9].i));
	goto label_102;
	}
label_110:;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[7].o));
	((func_regexodus_TextBuffer_append_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(166);
	goto label_21;
	}
label_81:;
	{
	jint temp0 = (jint)((func_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"esc"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(167);
	((func_regexodus_TextBuffer_append_char) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_char, (frame[2].o)))(ctx, (frame[2].o), (37));
	}
label_21:;
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Formatter$Doormat_byteToHexString_byte_int_Array1_char_R_java_lang_String(jcontext ctx, jobject self, jbyte param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter$Doormat:byteToHexString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(174);
	frame[4].i = (jint(2));
	LINE_NUMBER(175);
	frame[5].i = (jint(2));
	}
label_2:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_workBuffer;
	INST_IINC(5, -1);
	ARRAY_ACCESS(jchar, sp[0].o, (frame[5].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), ((frame[1].i) & (15))));
	LINE_NUMBER(179);
	jint temp0 = jbyte((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (255))) >> (jint(4)))));
	frame[1].i = temp0;
	if (temp0 != 0) goto label_2;
	}
	{
	if (((jint(2)) - (frame[5].i)) < (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_workBuffer;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_Array1_char_int_int_R_java_lang_String(ctx, sp[0].o, (frame[5].i), ((jint(2)) - (frame[5].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Formatter$Doormat_shortToHexString_short_int_Array1_char_R_java_lang_String(jcontext ctx, jobject self, jshort param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter$Doormat:shortToHexString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(184);
	frame[4].i = (jint(4));
	LINE_NUMBER(185);
	frame[5].i = (jint(4));
	}
label_2:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_workBuffer;
	INST_IINC(5, -1);
	ARRAY_ACCESS(jchar, sp[0].o, (frame[5].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), ((frame[1].i) & (15))));
	LINE_NUMBER(189);
	jint temp0 = jshort((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(65535)))) >> (jint(4)))));
	frame[1].i = temp0;
	if (temp0 != 0) goto label_2;
	}
	{
	if (((jint(4)) - (frame[5].i)) < (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_workBuffer;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_Array1_char_int_int_R_java_lang_String(ctx, sp[0].o, (frame[5].i), ((jint(4)) - (frame[5].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Formatter$Doormat_intToHexString_int_int_Array1_char_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter$Doormat:intToHexString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(194);
	frame[4].i = (8);
	LINE_NUMBER(195);
	frame[5].i = (8);
	}
label_2:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_workBuffer;
	INST_IINC(5, -1);
	ARRAY_ACCESS(jchar, sp[0].o, (frame[5].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), ((frame[1].i) & (15))));
	LINE_NUMBER(199);
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(4)));
	frame[1].i = temp0;
	if (temp0 != 0) goto label_2;
	}
	{
	if (((8) - (frame[5].i)) < (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_workBuffer;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_Array1_char_int_int_R_java_lang_String(ctx, sp[0].o, (frame[5].i), ((8) - (frame[5].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Formatter$Doormat_longToHexString_long_int_Array1_char_R_java_lang_String(jcontext ctx, jobject self, jlong param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter$Doormat:longToHexString", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(204);
	frame[5].i = (16);
	LINE_NUMBER(205);
	frame[6].i = (16);
	}
label_2:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_workBuffer;
	INST_IINC(6, -1);
	ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (jint(((frame[1].l) & (jlong(15ll)))))));
	LINE_NUMBER(209);
	jlong temp0 = bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (jint(4)));
	frame[1].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) != 0) goto label_2;
	}
	{
	if (((16) - (frame[6].i)) < (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((java_util_Formatter$Doormat *) NULL_CHECK((frame[0].o)))->F_workBuffer;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_Array1_char_int_int_R_java_lang_String(ctx, sp[0].o, (frame[6].i), ((16) - (frame[6].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_Formatter$Doormat_Array1_java_lang_Object_java_util_Formatter$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Formatter$Doormat:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Formatter$Doormat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(41);
	init_java_util_Formatter$Doormat_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Formatter$Doormat[] {
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
	(void *) M_java_util_Formatter$Doormat_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer,
	(void *) M_java_util_Formatter$Doormat_byteToHexString_byte_int_Array1_char_R_java_lang_String,
	(void *) M_java_util_Formatter$Doormat_shortToHexString_short_int_Array1_char_R_java_lang_String,
	(void *) M_java_util_Formatter$Doormat_intToHexString_int_int_Array1_char_R_java_lang_String,
	(void *) M_java_util_Formatter$Doormat_longToHexString_long_int_Array1_char_R_java_lang_String,
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
	{ "appendSubstitution", "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V" },
	{ "byteToHexString", "(BI[C)Ljava/lang/String;" },
	{ "shortToHexString", "(SI[C)Ljava/lang/String;" },
	{ "intToHexString", "(II[C)Ljava/lang/String;" },
	{ "longToHexString", "(JI[C)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_regexodus_Substitution, };

static FieldMetadata fields[] {
	{ "arguments", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_Formatter$Doormat, F_arguments), "[Ljava/lang/Object;", 18 },
	{ "index", &class_int, offsetof(java_util_Formatter$Doormat, F_index), "I", 2 },
	{ "bufLen", &class_int, (intptr_t) &SF_java_util_Formatter$Doormat_bufLen, "I", 26 },
	{ "workBuffer", getArrayClass(&class_char, 1), offsetof(java_util_Formatter$Doormat, F_workBuffer), "[C", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Formatter$Doormat_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 130 },
	{ "appendSubstitution", (intptr_t) M_java_util_Formatter$Doormat_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, VTABLE_java_util_Formatter$Doormat_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V", 1 },
	{ "byteToHexString", (intptr_t) M_java_util_Formatter$Doormat_byteToHexString_byte_int_Array1_char_R_java_lang_String, VTABLE_java_util_Formatter$Doormat_byteToHexString_byte_int_Array1_char_R_java_lang_String, "(BI[C)Ljava/lang/String;", 1 },
	{ "shortToHexString", (intptr_t) M_java_util_Formatter$Doormat_shortToHexString_short_int_Array1_char_R_java_lang_String, VTABLE_java_util_Formatter$Doormat_shortToHexString_short_int_Array1_char_R_java_lang_String, "(SI[C)Ljava/lang/String;", 1 },
	{ "intToHexString", (intptr_t) M_java_util_Formatter$Doormat_intToHexString_int_int_Array1_char_R_java_lang_String, VTABLE_java_util_Formatter$Doormat_intToHexString_int_int_Array1_char_R_java_lang_String, "(II[C)Ljava/lang/String;", 1 },
	{ "longToHexString", (intptr_t) M_java_util_Formatter$Doormat_longToHexString_long_int_Array1_char_R_java_lang_String, VTABLE_java_util_Formatter$Doormat_longToHexString_long_int_Array1_char_R_java_lang_String, "(JI[C)Ljava/lang/String;", 1 },
	{ "<init>", (intptr_t) init_java_util_Formatter$Doormat_Array1_java_lang_Object_java_util_Formatter$1, 0, "([Ljava/lang/Object;Ljava/util/Formatter$1;)V", 4096 },
};

Class class_java_util_Formatter$Doormat{
		.nativeName = (intptr_t) "java/util/Formatter$Doormat",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Formatter$Doormat),
		.classVtable = (intptr_t) vtable_java_util_Formatter$Doormat,
		.staticInitializer = (intptr_t) clinit_java_util_Formatter$Doormat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Formatter$Doormat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Formatter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Formatter$Doormat = registerClass(&class_java_util_Formatter$Doormat);

}

