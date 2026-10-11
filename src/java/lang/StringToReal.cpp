#include "java/lang/StringToReal.h"
#include "java/lang/Math.h"
#include "java/lang/StringToReal_StringExponentPair.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Float.h"
#include "java/lang/StringToReal.h"
#include "java/lang/StringToReal_1.h"
#include "java/lang/Double.h"

extern "C" {


void mark_java_lang_StringToReal(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_StringToReal *) object;
}

void clinit_java_lang_StringToReal(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_StringToReal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringToReal(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_java_lang_StringToReal_parseFltImpl_java_lang_String_int_R_float(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal:parseFltImpl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringToReal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(61);
	jdouble temp0 = (jdouble)SM_java_lang_StringToReal_parseDblImpl_java_lang_String_int_R_double(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal:invalidReal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringToReal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(65);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid "_j))));
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[1].i) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"double"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"float"_j));
label_2:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": \""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_lang_StringToReal_initialParse_java_lang_String_int_boolean_R_java_lang_StringToReal$StringExponentPair(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal:initialParse", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringToReal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(76);
	clinit_java_lang_StringToReal$StringExponentPair(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringToReal$StringExponentPair);
	init_java_lang_StringToReal$StringExponentPair_java_lang_StringToReal$1(ctx, sp[0].o, (jobject(nullptr)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(77);
	if ((frame[1].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	sp += 1;
	if (temp0 != (45)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK(sp[0].o))->F_negative = sp[1].i;
	LINE_NUMBER(84);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[1].i) - (jint(1))));
	frame[4].i = temp0;
	LINE_NUMBER(85);
	if ((frame[4].i) == (68)) goto label_12;
	}
	{
	if ((frame[4].i) == (100)) goto label_12;
	}
	{
	if ((frame[4].i) == (70)) goto label_12;
	}
	{
	if ((frame[4].i) != (102)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(86);
	INST_IINC(1, -1);
	LINE_NUMBER(87);
	if ((frame[1].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(92);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (69));
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (101));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	frame[5].i = temp2;
	LINE_NUMBER(93);
	if ((frame[5].i) == (jint(-1))) goto label_17;
	}
	{
	LINE_NUMBER(95);
	if (((frame[5].i) + (jint(1))) != (frame[1].i)) goto label_19;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(100);
	frame[6].i = ((frame[5].i) + (jint(1)));
	LINE_NUMBER(101);
	frame[7].i = (jint(0));
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[6].i));
	frame[8].i = temp0;
	LINE_NUMBER(103);
	if ((frame[8].i) == (43)) goto label_24;
	}
	{
	if ((frame[8].i) != (45)) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(104);
	if ((frame[8].i) != (45)) goto label_26;
	}
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(105);
	INST_IINC(6, 1);
	}
label_25:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[6].i), (frame[1].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_30;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(113);
	frame[10].i = (jint(0));
	}
label_32:;
	{
	jint temp0 = frame[10].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[9].o));
	if (temp0 >= temp1) goto label_0;
	}
	{
	LINE_NUMBER(114);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[9].o), (frame[10].i));
	frame[11].i = temp0;
	LINE_NUMBER(115);
	if ((frame[11].i) < (48)) goto label_35;
	}
	{
	if ((frame[11].i) <= (57)) goto label_36;
	}
label_35:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_36:;
	{
	LINE_NUMBER(113);
	INST_IINC(10, 1);
	goto label_32;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(122);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[9].o));
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK(sp[0].o))->F_e = (jlong(temp0));
	LINE_NUMBER(123);
	if ((frame[7].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(124);
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_e = (-((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_e));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(134);
	goto label_39;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(126);
	frame[10].o = sp[0].o;
	LINE_NUMBER(128);
	if ((frame[7].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(129);
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_zero = (jint(1));
	goto label_43;
	}
label_41:;
	{
	LINE_NUMBER(131);
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_infinity = (jint(1));
	}
label_43:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_39:;
	LINE_NUMBER(135);
	goto label_44;
label_17:;
	{
	LINE_NUMBER(136);
	frame[5].i = (frame[1].i);
	}
label_44:;
	{
	LINE_NUMBER(138);
	if ((frame[1].i) != 0) goto label_45;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_45:;
	{
	LINE_NUMBER(142);
	frame[6].i = (jint(0));
	LINE_NUMBER(143);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[6].i));
	frame[4].i = temp0;
	LINE_NUMBER(144);
	if ((frame[4].i) != (45)) goto label_49;
	}
	{
	LINE_NUMBER(145);
	INST_IINC(6, 1);
	LINE_NUMBER(146);
	INST_IINC(1, -1);
	LINE_NUMBER(147);
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_negative = (jint(1));
	goto label_53;
	}
label_49:;
	{
	LINE_NUMBER(148);
	if ((frame[4].i) != (43)) goto label_53;
	}
	{
	LINE_NUMBER(149);
	INST_IINC(6, 1);
	LINE_NUMBER(150);
	INST_IINC(1, -1);
	}
label_53:;
	{
	LINE_NUMBER(152);
	if ((frame[1].i) != 0) goto label_56;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_56:;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (46));
	frame[7].i = temp0;
	LINE_NUMBER(157);
	if ((frame[7].i) <= (jint(-1))) goto label_59;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = frame[3].o;
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK(sp[0].o))->F_e = (((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK(sp[0].o))->F_e) - (jlong((((frame[5].i) - (frame[7].i)) - (jint(1))))));
	LINE_NUMBER(159);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[6].i), (frame[7].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[7].i) + (jint(1))), (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	goto label_62;
	}
label_59:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[6].i), (frame[5].i));
	frame[0].o = sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	if (temp0 != 0) goto label_63;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_63:;
	{
	LINE_NUMBER(168);
	frame[5].i = (frame[1].i);
	}
label_65:;
	{
	LINE_NUMBER(169);
	if ((frame[5].i) <= (jint(1))) goto label_66;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[5].i) - (jint(1))));
	if (temp0 != (48)) goto label_66;
	}
	{
	LINE_NUMBER(170);
	INST_IINC(5, -1);
	goto label_65;
	}
label_66:;
	{
	LINE_NUMBER(173);
	frame[6].i = (jint(0));
	}
label_68:;
	{
	LINE_NUMBER(174);
	if ((frame[6].i) >= ((frame[5].i) - (jint(1)))) goto label_69;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[6].i));
	if (temp0 != (48)) goto label_69;
	}
	{
	LINE_NUMBER(175);
	INST_IINC(6, 1);
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(178);
	if ((frame[5].i) != (frame[1].i)) goto label_71;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_72;
label_71:;
	{
	LINE_NUMBER(179);
	sp[0].o = frame[3].o;
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK(sp[0].o))->F_e = (((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK(sp[0].o))->F_e) + (jlong(((frame[1].i) - (frame[5].i)))));
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[6].i), (frame[5].i));
	frame[0].o = sp[0].o;
	}
label_72:;
	{
	LINE_NUMBER(186);
	frame[8].i = (-359);
	LINE_NUMBER(187);
	frame[9].i = (52);
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(189);
	if ((frame[1].i) <= (52)) goto label_77;
	}
	{
	if ((longCompare(((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_e), (jlong(-359ll)))) >= 0) goto label_77;
	}
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((-359) - (jint(((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_e)))), ((frame[1].i) - (jint(1))));
	frame[10].i = temp0;
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), ((frame[1].i) - (frame[10].i)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(192);
	sp[0].o = frame[3].o;
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK(sp[0].o))->F_e = (((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK(sp[0].o))->F_e) + (jlong((frame[10].i))));
	}
label_77:;
	{
	LINE_NUMBER(198);
	if ((longCompare(((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_e), (jlong(-1024ll)))) >= 0) goto label_81;
	}
	{
	LINE_NUMBER(199);
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_zero = (jint(1));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_81:;
	{
	LINE_NUMBER(201);
	if ((longCompare(((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_e), (jlong(1024ll)))) <= 0) goto label_84;
	}
	{
	LINE_NUMBER(202);
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_infinity = (jint(1));
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_84:;
	{
	LINE_NUMBER(206);
	((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_s = (jref) (frame[0].o);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jfloat SM_java_lang_StringToReal_parseName_java_lang_String_boolean_R_float(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal:parseName", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringToReal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(213);
	frame[2].i = (jint(0));
	LINE_NUMBER(214);
	frame[3].i = (jint(0));
	LINE_NUMBER(215);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(216);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	frame[5].i = temp1;
	LINE_NUMBER(217);
	if ((frame[5].i) != (45)) goto label_5;
	}
	{
	LINE_NUMBER(218);
	frame[2].i = (jint(1));
	LINE_NUMBER(219);
	INST_IINC(3, 1);
	LINE_NUMBER(220);
	INST_IINC(4, -1);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(221);
	if ((frame[5].i) != (43)) goto label_9;
	}
	{
	LINE_NUMBER(222);
	INST_IINC(3, 1);
	LINE_NUMBER(223);
	INST_IINC(4, -1);
	}
label_9:;
	{
	LINE_NUMBER(226);
	if ((frame[4].i) != (8)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean])(ctx, (frame[0].o), (jint(0)), (frame[3].i), (((jobject) createStringLiteral(ctx, u8"Infinity"_j))), (jint(0)), (8));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(227);
	if ((frame[2].i) == 0) goto label_14;
	}
	(sp++)->f = jfloat(-std::numeric_limits<float>::infinity());
	goto label_15;
label_14:;
	(sp++)->f = jfloat(std::numeric_limits<float>::infinity());
label_15:;
	popStackFrame(ctx);
	INST_FRETURN();
label_12:;
	{
	LINE_NUMBER(229);
	if ((frame[4].i) != (jint(3))) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean])(ctx, (frame[0].o), (jint(0)), (frame[3].i), (((jobject) createStringLiteral(ctx, u8"NaN"_j))), (jint(0)), (jint(3)));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (jfloat(std::numeric_limits<float>::quiet_NaN()));
	}
label_16:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (frame[1].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_StringToReal_parseDouble_java_lang_String_R_double(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal:parseDouble", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringToReal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(247);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(249);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (jint(1)));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[1].i) - (jint(1))));
	frame[2].i = temp0;
	LINE_NUMBER(255);
	if ((frame[2].i) == (121)) goto label_6;
	}
	{
	if ((frame[2].i) != (78)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(256);
	jfloat temp0 = (jfloat)SM_java_lang_StringToReal_parseName_java_lang_String_boolean_R_float(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_7:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)SM_java_lang_StringToReal_initialParse_java_lang_String_int_boolean_R_java_lang_StringToReal$StringExponentPair(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(266);
	if (((jint)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_infinity) != 0) goto label_9;
	}
	{
	if (((jint)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_zero) == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(267);
	jfloat temp0 = (jfloat)((func_java_lang_StringToReal$StringExponentPair_specialValue_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringToReal$StringExponentPair_specialValue_R_float])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_10:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_s;
	jdouble temp0 = (jdouble)SM_java_lang_StringToReal_parseDblImpl_java_lang_String_int_R_double(ctx, sp[0].o, (jint(((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_e))));
	frame[4].d = temp0;
	LINE_NUMBER(270);
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[4].d));
	if ((longCompare(temp1, (jlong(-1ll)))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (jint(1)));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(273);
	if (((jint)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_negative) == 0) goto label_14;
	}
	{
	jdouble temp0 = -(frame[4].d);
	sp[0].d = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_DLOAD(4);
label_15:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jfloat SM_java_lang_StringToReal_parseFloat_java_lang_String_R_float(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringToReal:parseFloat", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringToReal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(290);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (jint(0)));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(295);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[1].i) - (jint(1))));
	frame[2].i = temp0;
	LINE_NUMBER(296);
	if ((frame[2].i) == (121)) goto label_6;
	}
	{
	if ((frame[2].i) != (78)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(297);
	jfloat temp0 = (jfloat)SM_java_lang_StringToReal_parseName_java_lang_String_boolean_R_float(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)SM_java_lang_StringToReal_initialParse_java_lang_String_int_boolean_R_java_lang_StringToReal$StringExponentPair(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(307);
	if (((jint)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_infinity) != 0) goto label_9;
	}
	{
	if (((jint)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_zero) == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(308);
	jfloat temp0 = (jfloat)((func_java_lang_StringToReal$StringExponentPair_specialValue_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringToReal$StringExponentPair_specialValue_R_float])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_s;
	jfloat temp0 = (jfloat)SM_java_lang_StringToReal_parseFltImpl_java_lang_String_int_R_float(ctx, sp[0].o, (jint(((jlong)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_e))));
	frame[4].f = temp0;
	LINE_NUMBER(311);
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[4].f));
	if (temp1 != (jint(-1))) goto label_12;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(ctx, (frame[0].o), (jint(0)));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(314);
	if (((jint)((java_lang_StringToReal$StringExponentPair *) NULL_CHECK((frame[3].o)))->F_negative) == 0) goto label_14;
	}
	{
	jfloat temp0 = -(frame[4].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_FLOAD(4);
label_15:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void *vtable_java_lang_StringToReal[] {
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
};

static jclass innerClasses[] {
	&class_java_lang_StringToReal$StringExponentPair,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_StringToReal, 0, "()V", 0 },
	{ "parseDblImpl", (intptr_t) SM_java_lang_StringToReal_parseDblImpl_java_lang_String_int_R_double, 0, "(Ljava/lang/String;I)D", 266 },
	{ "parseFltImpl", (intptr_t) SM_java_lang_StringToReal_parseFltImpl_java_lang_String_int_R_float, 0, "(Ljava/lang/String;I)F", 10 },
	{ "invalidReal", (intptr_t) SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException, 0, "(Ljava/lang/String;Z)Ljava/lang/NumberFormatException;", 10 },
	{ "initialParse", (intptr_t) SM_java_lang_StringToReal_initialParse_java_lang_String_int_boolean_R_java_lang_StringToReal$StringExponentPair, 0, "(Ljava/lang/String;IZ)Ljava/lang/StringToReal$StringExponentPair;", 10 },
	{ "parseName", (intptr_t) SM_java_lang_StringToReal_parseName_java_lang_String_boolean_R_float, 0, "(Ljava/lang/String;Z)F", 10 },
	{ "parseDouble", (intptr_t) SM_java_lang_StringToReal_parseDouble_java_lang_String_R_double, 0, "(Ljava/lang/String;)D", 9 },
	{ "parseFloat", (intptr_t) SM_java_lang_StringToReal_parseFloat_java_lang_String_R_float, 0, "(Ljava/lang/String;)F", 9 },
};

Class class_java_lang_StringToReal{
		.nativeName = (intptr_t) "java/lang/StringToReal",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_StringToReal),
		.classVtable = (intptr_t) vtable_java_lang_StringToReal,
		.staticInitializer = (intptr_t) clinit_java_lang_StringToReal,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_StringToReal,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_StringToReal = registerClass(&class_java_lang_StringToReal);

}
