#include "java/lang/Character.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Comparable.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/nio/NativeUtils.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/Character.h"
#include "java/lang/String.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Class.h"
#include "java/lang/UnicodeHelper_Range.h"

extern "C" {

jint SF_java_lang_Character_MAX_RADIX;
jchar SF_java_lang_Character_MAX_VALUE;
jint SF_java_lang_Character_MIN_RADIX;
jchar SF_java_lang_Character_MIN_VALUE;
jchar SF_java_lang_Character_MIN_HIGH_SURROGATE;
jchar SF_java_lang_Character_MAX_HIGH_SURROGATE;
jchar SF_java_lang_Character_MIN_LOW_SURROGATE;
jchar SF_java_lang_Character_MAX_LOW_SURROGATE;
jchar SF_java_lang_Character_MIN_SURROGATE;
jchar SF_java_lang_Character_MAX_SURROGATE;
jint SF_java_lang_Character_MIN_SUPPLEMENTARY_CODE_POINT;
jint SF_java_lang_Character_MIN_CODE_POINT;
jint SF_java_lang_Character_MAX_CODE_POINT;
jint SF_java_lang_Character_SIZE;
jobject SF_java_lang_Character_TYPE;
jbyte SF_java_lang_Character_UNASSIGNED;
jbyte SF_java_lang_Character_UPPERCASE_LETTER;
jbyte SF_java_lang_Character_LOWERCASE_LETTER;
jbyte SF_java_lang_Character_TITLECASE_LETTER;
jbyte SF_java_lang_Character_MODIFIER_LETTER;
jbyte SF_java_lang_Character_OTHER_LETTER;
jbyte SF_java_lang_Character_NON_SPACING_MARK;
jbyte SF_java_lang_Character_ENCLOSING_MARK;
jbyte SF_java_lang_Character_COMBINING_SPACING_MARK;
jbyte SF_java_lang_Character_DECIMAL_DIGIT_NUMBER;
jbyte SF_java_lang_Character_LETTER_NUMBER;
jbyte SF_java_lang_Character_OTHER_NUMBER;
jbyte SF_java_lang_Character_SPACE_SEPARATOR;
jbyte SF_java_lang_Character_LINE_SEPARATOR;
jbyte SF_java_lang_Character_PARAGRAPH_SEPARATOR;
jbyte SF_java_lang_Character_CONTROL;
jbyte SF_java_lang_Character_FORMAT;
jbyte SF_java_lang_Character_PRIVATE_USE;
jbyte SF_java_lang_Character_SURROGATE;
jbyte SF_java_lang_Character_DASH_PUNCTUATION;
jbyte SF_java_lang_Character_START_PUNCTUATION;
jbyte SF_java_lang_Character_END_PUNCTUATION;
jbyte SF_java_lang_Character_CONNECTOR_PUNCTUATION;
jbyte SF_java_lang_Character_OTHER_PUNCTUATION;
jbyte SF_java_lang_Character_MATH_SYMBOL;
jbyte SF_java_lang_Character_CURRENCY_SYMBOL;
jbyte SF_java_lang_Character_MODIFIER_SYMBOL;
jbyte SF_java_lang_Character_OTHER_SYMBOL;
jbyte SF_java_lang_Character_INITIAL_QUOTE_PUNCTUATION;
jbyte SF_java_lang_Character_FINAL_QUOTE_PUNCTUATION;
jbyte SF_java_lang_Character_DIRECTIONALITY_UNDEFINED;
jbyte SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT;
jbyte SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT;
jbyte SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC;
jbyte SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER;
jbyte SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR;
jbyte SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR;
jbyte SF_java_lang_Character_DIRECTIONALITY_ARABIC_NUMBER;
jbyte SF_java_lang_Character_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR;
jbyte SF_java_lang_Character_DIRECTIONALITY_NONSPACING_MARK;
jbyte SF_java_lang_Character_DIRECTIONALITY_BOUNDARY_NEUTRAL;
jbyte SF_java_lang_Character_DIRECTIONALITY_PARAGRAPH_SEPARATOR;
jbyte SF_java_lang_Character_DIRECTIONALITY_SEGMENT_SEPARATOR;
jbyte SF_java_lang_Character_DIRECTIONALITY_WHITESPACE;
jbyte SF_java_lang_Character_DIRECTIONALITY_OTHER_NEUTRALS;
jbyte SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING;
jbyte SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE;
jbyte SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING;
jbyte SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE;
jbyte SF_java_lang_Character_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT;
jint SF_java_lang_Character_SURROGATE_NEUTRAL_BIT_MASK;
jint SF_java_lang_Character_SURROGATE_BITS;
jint SF_java_lang_Character_SURROGATE_BIT_MASK;
jint SF_java_lang_Character_SURROGATE_BIT_INV_MASK;
jint SF_java_lang_Character_HIGH_SURROGATE_BITS;
jint SF_java_lang_Character_LOW_SURROGATE_BITS;
jint SF_java_lang_Character_MEANINGFUL_SURROGATE_BITS;
jobject SF_java_lang_Character_classMapping;

void mark_java_lang_Character(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Character_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Character_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_Character_TYPE, mark, depth + 1);
		if (SF_java_lang_Character_classMapping)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Character_classMapping)->clazz)->markFunction)((jobject) SF_java_lang_Character_classMapping, mark, depth + 1);
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
	auto self = (java_lang_Character *) object;
}

void init_java_lang_Character_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(227);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(228);
	((java_lang_Character *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jchar M_java_lang_Character_charValue_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:charValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return ((jint)((java_lang_Character *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_digit_char_int_R_int(jcontext ctx, jchar param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:digit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(242);
	jint temp0 = (jint)SM_java_lang_Character_digit_int_int_R_int(ctx, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_digit_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:digit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(259);
	if ((frame[1].i) < (jint(2))) goto label_1;
	}
	{
	if ((frame[1].i) <= (36)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(262);
	if ((frame[0].i) >= (128)) goto label_3;
	}
	{
	LINE_NUMBER(264);
	frame[2].i = (jint(-1));
	LINE_NUMBER(265);
	if ((48) > (frame[0].i)) goto label_6;
	}
	{
	if ((frame[0].i) > (57)) goto label_6;
	}
	{
	LINE_NUMBER(266);
	frame[2].i = ((frame[0].i) - (48));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(267);
	if ((97) > (frame[0].i)) goto label_9;
	}
	{
	if ((frame[0].i) > (122)) goto label_9;
	}
	{
	LINE_NUMBER(268);
	frame[2].i = ((10) + ((frame[0].i) - (97)));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(269);
	if ((65) > (frame[0].i)) goto label_8;
	}
	{
	if ((frame[0].i) > (90)) goto label_8;
	}
	{
	LINE_NUMBER(270);
	frame[2].i = ((10) + ((frame[0].i) - (65)));
	}
label_8:;
	{
	LINE_NUMBER(272);
	if ((frame[2].i) >= (frame[1].i)) goto label_12;
	}
	INST_ILOAD(2);
	goto label_13;
label_12:;
	INST_ICONST(-1);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_compare_char_char_R_int(jcontext ctx, jchar param0, jchar param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:compare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return ((frame[0].i) - (frame[1].i));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Character_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(286);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((java_lang_Character *) NULL_CHECK((checkCast(ctx, &class_java_lang_Character, (frame[1].o)))))->F_value) != ((jint)((java_lang_Character *) NULL_CHECK((frame[0].o)))->F_value)) goto label_1;
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

jint M_java_lang_Character_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return ((jint)((java_lang_Character *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_hashCode_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Character_toString_char_R_java_lang_String(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isLetterOrDigit_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isLetterOrDigit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)SM_java_lang_Character_isLetterOrDigit_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isLetterOrDigit_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isLetterOrDigit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(309);
	jint temp0 = (jint)SM_java_lang_Character_isLetter_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_isDigit_int_R_boolean(ctx, (frame[0].i));
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

jbool SM_java_lang_Character_isLetter_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isLetter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)SM_java_lang_Character_isLetter_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isLetter_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isLetter", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(329);
	if ((frame[0].i) < (97)) goto label_1;
	}
	{
	if ((frame[0].i) <= (122)) goto label_2;
	}
label_1:;
	{
	if ((frame[0].i) < (65)) goto label_3;
	}
	{
	if ((frame[0].i) > (90)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isSpace_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isSpace", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(343);
	if ((frame[0].i) > (32)) goto label_1;
	}
	{
	if ((longCompare((((jlong(4294981120ll)) >> (frame[0].i)) & (jlong(1))), (jlong(0)))) == 0) goto label_1;
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

jbool SM_java_lang_Character_isDefined_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isDefined", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(352);
	jint temp0 = (jint)SM_java_lang_Character_getType_char_R_int(ctx, (frame[0].i));
	if (temp0 == 0) goto label_1;
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

jbool SM_java_lang_Character_isISOControl_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isISOControl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(376);
	jint temp0 = (jint)SM_java_lang_Character_isISOControl_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isISOControl_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isISOControl", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(397);
	if ((frame[0].i) > (159)) goto label_1;
	}
	{
	if ((frame[0].i) >= (127)) goto label_2;
	}
	{
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(5)))) != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isTitleCase_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isTitleCase", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(439);
	jint temp0 = (jint)SM_java_lang_Character_isTitleCase_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isTitleCase_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isTitleCase", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(475);
	jint temp0 = (jint)SM_java_lang_Character_getType_int_R_int(ctx, (frame[0].i));
	if (temp0 != (jint(3))) goto label_1;
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

jbool SM_java_lang_Character_isJavaIdentifierStart_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isJavaIdentifierStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(479);
	jint temp0 = (jint)SM_java_lang_Character_isJavaIdentifierStart_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isJavaIdentifierStart_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isJavaIdentifierStart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(483);
	jint temp0 = (jint)SM_java_lang_Character_isLetter_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	if ((frame[0].i) == (95)) goto label_1;
	}
	{
	if ((frame[0].i) != (36)) goto label_2;
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

jbool SM_java_lang_Character_isJavaIdentifierPart_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isJavaIdentifierPart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(487);
	jint temp0 = (jint)SM_java_lang_Character_isJavaIdentifierPart_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isJavaIdentifierPart_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isJavaIdentifierPart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(491);
	jint temp0 = (jint)SM_java_lang_Character_isLetter_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_isDigit_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	if ((frame[0].i) == (95)) goto label_1;
	}
	{
	if ((frame[0].i) != (36)) goto label_2;
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

jbool SM_java_lang_Character_isIdentifierIgnorable_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isIdentifierIgnorable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(512);
	jint temp0 = (jint)SM_java_lang_Character_isIdentifierIgnorable_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isIdentifierIgnorable_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isIdentifierIgnorable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(516);
	if ((frame[0].i) < 0) goto label_1;
	}
	{
	if ((frame[0].i) <= (8)) goto label_2;
	}
label_1:;
	{
	if ((frame[0].i) < (14)) goto label_3;
	}
	{
	if ((frame[0].i) <= (27)) goto label_2;
	}
label_3:;
	{
	if ((frame[0].i) < (127)) goto label_4;
	}
	{
	if ((frame[0].i) > (159)) goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(520);
	jint temp0 = (jint)SM_java_lang_Character_getType_int_R_int(ctx, (frame[0].i));
	if (temp0 != (16)) goto label_5;
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

jbool SM_java_lang_Character_isDigit_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isDigit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(528);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isDigit_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(541);
	if ((48) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) > (57)) goto label_1;
	}
	{
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(544);
	if ((frame[0].i) >= (1632)) goto label_3;
	}
	{
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_java_lang_Character_toSurrogates_int_Array1_char_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toSurrogates", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(553);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) + (jint(1));
	jint temp1 = (jint)SM_java_lang_Character_lowSurrogate_int_R_char(ctx, (frame[0].i));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp1;
	LINE_NUMBER(554);
	sp[0].o = frame[1].o;
	jint temp2 = frame[2].i;
	jint temp3 = (jint)SM_java_lang_Character_highSurrogate_int_R_char(ctx, (frame[0].i));
	ARRAY_ACCESS(jchar, sp[0].o, temp2) = temp3;
	LINE_NUMBER(555);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointCountImpl_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointCountImpl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(558);
	frame[3].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(559);
	frame[4].i = (frame[2].i);
	LINE_NUMBER(560);
	frame[5].i = (frame[1].i);
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	jint temp1 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)));
	if (temp1 == 0) goto label_3;
	}
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_3;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i));
	LINE_NUMBER(562);
	jint temp1 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_3;
	}
	{
	LINE_NUMBER(563);
	INST_IINC(4, -1);
	LINE_NUMBER(564);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_offsetByCodePointsImpl_Array1_char_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:offsetByCodePointsImpl", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(572);
	frame[5].i = (frame[3].i);
	LINE_NUMBER(573);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(574);
	frame[6].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(576);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(577);
	sp[0].o = frame[0].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	jint temp1 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)));
	if (temp1 == 0) goto label_8;
	}
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_8;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i));
	LINE_NUMBER(578);
	jint temp1 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_8;
	}
	LINE_NUMBER(579);
	INST_IINC(5, 1);
label_8:;
	{
	LINE_NUMBER(576);
	INST_IINC(7, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(582);
	if ((frame[7].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(583);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	LINE_NUMBER(585);
	goto label_13;
label_2:;
	{
	LINE_NUMBER(587);
	frame[6].i = (frame[4].i);
	}
label_14:;
	{
	if ((frame[5].i) <= (frame[1].i)) goto label_15;
	}
	INST_ILOAD(6);
	if ((--sp)->i >= 0) goto label_15;
	{
	LINE_NUMBER(588);
	sp[0].o = frame[0].o;
	INST_IINC(5, -1);
	jint temp0 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[5].i))));
	if (temp0 == 0) goto label_17;
	}
	{
	if ((frame[5].i) <= (frame[1].i)) goto label_17;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), ((frame[5].i) - (jint(1))));
	LINE_NUMBER(589);
	jint temp1 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_17;
	}
	LINE_NUMBER(590);
	INST_IINC(5, -1);
label_17:;
	{
	LINE_NUMBER(587);
	INST_IINC(6, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(593);
	if ((frame[6].i) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(594);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointAtImpl_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointAtImpl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(602);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(603);
	jint temp0 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, (frame[3].i));
	if (temp0 == 0) goto label_2;
	}
	{
	INST_IINC(1, 1);
	if ((frame[1].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(604);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(605);
	jint temp0 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, (frame[4].i));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(606);
	jint temp0 = (jint)SM_java_lang_Character_toCodePoint_char_char_R_int(ctx, (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointBeforeImpl_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointBeforeImpl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(614);
	sp[0].o = frame[0].o;
	INST_IINC(1, -1);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	LINE_NUMBER(615);
	jint temp0 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, (frame[3].i));
	if (temp0 == 0) goto label_2;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(616);
	sp[0].o = frame[0].o;
	INST_IINC(1, -1);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	LINE_NUMBER(617);
	jint temp0 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, (frame[4].i));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(618);
	jint temp0 = (jint)SM_java_lang_Character_toCodePoint_char_char_R_int(ctx, (frame[4].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isLowerCase_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isLowerCase", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(631);
	jint temp0 = (jint)SM_java_lang_Character_isLowerCase_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isLowerCase_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isLowerCase", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(644);
	if ((97) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) > (122)) goto label_1;
	}
	{
	LINE_NUMBER(645);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(647);
	if ((frame[0].i) >= (128)) goto label_3;
	}
	{
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(651);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isUpperCase_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isUpperCase", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(661);
	jint temp0 = (jint)SM_java_lang_Character_isUpperCase_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isUpperCase_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isUpperCase", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(674);
	if ((65) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) > (90)) goto label_1;
	}
	{
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Character_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(706);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject) createArray(ctx, &class_char, (jint(1)));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = ((jint)((java_lang_Character *) NULL_CHECK((frame[0].o)))->F_value);
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar SM_java_lang_Character_toUpperCase_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toUpperCase", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)SM_java_lang_Character_toUpperCase_int_R_int(ctx, (frame[0].i));
	popStackFrame(ctx);
	return (jchar(temp0));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_toUpperCase_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toUpperCase", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(729);
	if ((97) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) > (122)) goto label_1;
	}
	{
	LINE_NUMBER(730);
	popStackFrame(ctx);
	return (jchar(((frame[0].i) - (32))));
	}
label_1:;
	{
	LINE_NUMBER(736);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isValidCodePoint_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isValidCodePoint", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(752);
	if ((jint(0)) > (frame[0].i)) goto label_1;
	}
	{
	if ((jint(1114111)) < (frame[0].i)) goto label_1;
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

jbool SM_java_lang_Character_isSupplementaryCodePoint_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isSupplementaryCodePoint", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(768);
	if ((jint(65536)) > (frame[0].i)) goto label_1;
	}
	{
	if ((jint(1114111)) < (frame[0].i)) goto label_1;
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

jbool SM_java_lang_Character_isHighSurrogate_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isHighSurrogate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(784);
	if ((jint(55296)) > (frame[0].i)) goto label_1;
	}
	{
	if ((jint(56319)) < (frame[0].i)) goto label_1;
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

jchar SM_java_lang_Character_highSurrogate_int_R_char(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:highSurrogate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(788);
	frame[0].i = ((frame[0].i) - (jint(65536)));
	LINE_NUMBER(789);
	popStackFrame(ctx);
	return (jchar(((jint(55296)) | (((frame[0].i) >> (10)) & (1023)))));
	}

	popStackFrame(ctx);
}

jchar SM_java_lang_Character_lowSurrogate_int_R_char(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:lowSurrogate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return (jchar(((jint(56320)) | ((frame[0].i) & (1023)))));
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isLowSurrogate_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isLowSurrogate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(810);
	if ((jint(56320)) > (frame[0].i)) goto label_1;
	}
	{
	if ((jint(57343)) < (frame[0].i)) goto label_1;
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

jbool SM_java_lang_Character_isSurrogatePair_char_char_R_boolean(jcontext ctx, jchar param0, jchar param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isSurrogatePair", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(827);
	jint temp0 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_1;
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

jint SM_java_lang_Character_charCount_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:charCount", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(847);
	if ((frame[0].i) < (jint(65536))) goto label_1;
	}
	INST_ICONST(2);
	goto label_2;
label_1:;
	INST_ICONST(1);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_lang_Character_toCodePoint_char_char_R_int(jcontext ctx, jchar param0, jchar param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toCodePoint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(868);
	frame[2].i = (((frame[0].i) & (1023)) << (10));
	LINE_NUMBER(869);
	frame[3].i = ((frame[1].i) & (1023));
	LINE_NUMBER(870);
	popStackFrame(ctx);
	return (((frame[2].i) | (frame[3].i)) + (jint(65536)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointAt_java_lang_CharSequence_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(893);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(894);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(896);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(897);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	if ((frame[1].i) < (frame[2].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(898);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(901);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, sp[0].o))(ctx, sp[0].o, temp0);
	frame[3].i = temp1;
	LINE_NUMBER(902);
	if ((frame[1].i) < (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(903);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_7:;
	{
	LINE_NUMBER(905);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(906);
	jint temp1 = (jint)SM_java_lang_Character_isSurrogatePair_char_char_R_boolean(ctx, (frame[3].i), (frame[4].i));
	if (temp1 == 0) goto label_10;
	}
	{
	LINE_NUMBER(907);
	jint temp0 = (jint)SM_java_lang_Character_toCodePoint_char_char_R_int(ctx, (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(909);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointAt_Array1_char_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(932);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(933);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(935);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(936);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	if ((frame[1].i) < (frame[2].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(937);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(940);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(941);
	if ((frame[1].i) < (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(942);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_7:;
	{
	LINE_NUMBER(944);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(945);
	jint temp0 = (jint)SM_java_lang_Character_isSurrogatePair_char_char_R_boolean(ctx, (frame[3].i), (frame[4].i));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(946);
	jint temp0 = (jint)SM_java_lang_Character_toCodePoint_char_char_R_int(ctx, (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(948);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointAt_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(975);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[2].i) <= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(976);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(979);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(980);
	if ((frame[1].i) < (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(981);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_4:;
	{
	LINE_NUMBER(983);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(984);
	jint temp0 = (jint)SM_java_lang_Character_isSurrogatePair_char_char_R_boolean(ctx, (frame[3].i), (frame[4].i));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(985);
	jint temp0 = (jint)SM_java_lang_Character_toCodePoint_char_char_R_int(ctx, (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(987);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointBefore_java_lang_CharSequence_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointBefore", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1011);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1012);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1014);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(1015);
	if ((frame[1].i) < (jint(1))) goto label_4;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1016);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1019);
	sp[0].o = frame[0].o;
	INST_IINC(1, -1);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(1020);
	INST_IINC(1, -1);
	if ((frame[1].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(1021);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_7:;
	{
	LINE_NUMBER(1023);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(1024);
	jint temp1 = (jint)SM_java_lang_Character_isSurrogatePair_char_char_R_boolean(ctx, (frame[4].i), (frame[3].i));
	if (temp1 == 0) goto label_10;
	}
	{
	LINE_NUMBER(1025);
	jint temp0 = (jint)SM_java_lang_Character_toCodePoint_char_char_R_int(ctx, (frame[4].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(1027);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointBefore_Array1_char_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointBefore", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1051);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1052);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1054);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(1055);
	if ((frame[1].i) < (jint(1))) goto label_4;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1056);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1059);
	sp[0].o = frame[0].o;
	INST_IINC(1, -1);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	LINE_NUMBER(1060);
	INST_IINC(1, -1);
	if ((frame[1].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(1061);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_7:;
	{
	LINE_NUMBER(1063);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(1064);
	jint temp0 = (jint)SM_java_lang_Character_isSurrogatePair_char_char_R_boolean(ctx, (frame[4].i), (frame[3].i));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(1065);
	jint temp0 = (jint)SM_java_lang_Character_toCodePoint_char_char_R_int(ctx, (frame[4].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(1067);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointBefore_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointBefore", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1095);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1096);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1098);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(1099);
	if ((frame[1].i) <= (frame[2].i)) goto label_4;
	}
	{
	if ((frame[1].i) > (frame[3].i)) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_4;
	{
	if ((frame[2].i) < (frame[3].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1100);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1103);
	sp[0].o = frame[0].o;
	INST_IINC(1, -1);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	LINE_NUMBER(1104);
	INST_IINC(1, -1);
	if ((frame[1].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(1105);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_7:;
	{
	LINE_NUMBER(1107);
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(1108);
	jint temp0 = (jint)SM_java_lang_Character_isSurrogatePair_char_char_R_boolean(ctx, (frame[5].i), (frame[4].i));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(1109);
	jint temp0 = (jint)SM_java_lang_Character_toCodePoint_char_char_R_int(ctx, (frame[5].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(1111);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_toChars_int_Array1_char_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toChars", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1137);
	jint temp0 = (jint)SM_java_lang_Character_isValidCodePoint_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1138);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1140);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1141);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1143);
	if ((frame[2].i) < 0) goto label_5;
	}
	{
	if ((frame[2].i) < (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1144);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1147);
	jint temp0 = (jint)SM_java_lang_Character_isSupplementaryCodePoint_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1148);
	if ((frame[2].i) != ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_9;
	}
	{
	LINE_NUMBER(1149);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(1153);
	frame[3].i = ((frame[0].i) - (jint(65536)));
	LINE_NUMBER(1154);
	frame[4].i = ((jint(55296)) | (((frame[3].i) >> (10)) & (1023)));
	LINE_NUMBER(1155);
	frame[5].i = ((jint(56320)) | ((frame[3].i) & (1023)));
	LINE_NUMBER(1156);
	ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)) = (jchar((frame[4].i)));
	LINE_NUMBER(1157);
	ARRAY_ACCESS(jchar, (frame[1].o), ((frame[2].i) + (jint(1)))) = (jchar((frame[5].i)));
	LINE_NUMBER(1158);
	popStackFrame(ctx);
	return (jint(2));
	}
label_7:;
	{
	LINE_NUMBER(1161);
	ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)) = (jchar((frame[0].i)));
	LINE_NUMBER(1162);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Character_toChars_int_R_Array1_char(jcontext ctx, jint param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toChars", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1181);
	jint temp0 = (jint)SM_java_lang_Character_isValidCodePoint_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1182);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1185);
	jint temp0 = (jint)SM_java_lang_Character_isSupplementaryCodePoint_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1186);
	frame[1].i = ((frame[0].i) - (jint(65536)));
	LINE_NUMBER(1187);
	frame[2].i = ((jint(55296)) | (((frame[1].i) >> (10)) & (1023)));
	LINE_NUMBER(1188);
	frame[3].i = ((jint(56320)) | ((frame[1].i) & (1023)));
	LINE_NUMBER(1189);
	sp[0].o = (jobject) createArray(ctx, &class_char, (jint(2)));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (jchar((frame[2].i)));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (jchar((frame[3].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1191);
	sp[0].o = (jobject) createArray(ctx, &class_char, (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (jchar((frame[0].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointCount_java_lang_CharSequence_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointCount", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1214);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1215);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1217);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(1218);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	if ((frame[2].i) > (frame[3].i)) goto label_4;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1219);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1222);
	frame[4].i = (jint(0));
	LINE_NUMBER(1223);
	frame[5].i = (frame[1].i);
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(1224);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(1225);
	jint temp1 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, (frame[6].i));
	if (temp1 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1226);
	INST_IINC(5, 1);
	if ((frame[5].i) >= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(1227);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(1228);
	jint temp1 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, (frame[6].i));
	if (temp1 != 0) goto label_11;
	}
	LINE_NUMBER(1229);
	INST_IINC(4, 1);
label_11:;
	{
	LINE_NUMBER(1233);
	INST_IINC(4, 1);
	LINE_NUMBER(1223);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1235);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_codePointCount_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:codePointCount", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1258);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1259);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1261);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(1262);
	frame[4].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(1263);
	if ((frame[1].i) < 0) goto label_5;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_5;
	{
	if ((frame[4].i) <= (frame[3].i)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1264);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1267);
	frame[5].i = (jint(0));
	LINE_NUMBER(1268);
	frame[6].i = (frame[1].i);
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(1269);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(1270);
	jint temp0 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(1271);
	INST_IINC(6, 1);
	if ((frame[6].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(1272);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(1273);
	jint temp0 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, (frame[7].i));
	if (temp0 != 0) goto label_12;
	}
	LINE_NUMBER(1274);
	INST_IINC(5, 1);
label_12:;
	{
	LINE_NUMBER(1278);
	INST_IINC(5, 1);
	LINE_NUMBER(1268);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(1280);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_offsetByCodePoints_java_lang_CharSequence_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:offsetByCodePoints", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1307);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1308);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1310);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(1311);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	if ((frame[1].i) <= (frame[3].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1312);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1315);
	if ((frame[2].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(1316);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_6:;
	{
	LINE_NUMBER(1319);
	if ((frame[2].i) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(1320);
	frame[4].i = (frame[2].i);
	LINE_NUMBER(1321);
	frame[5].i = (frame[1].i);
	}
label_11:;
	{
	LINE_NUMBER(1322);
	if ((frame[4].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(1323);
	INST_IINC(4, -1);
	LINE_NUMBER(1324);
	if ((frame[5].i) < (frame[3].i)) goto label_15;
	}
	{
	LINE_NUMBER(1325);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(1327);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[5].i));
	jint temp1 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1328);
	frame[6].i = ((frame[5].i) + (jint(1)));
	LINE_NUMBER(1329);
	if ((frame[6].i) >= (frame[3].i)) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[6].i));
	jint temp1 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_17;
	}
	LINE_NUMBER(1330);
	INST_IINC(5, 1);
label_17:;
	{
	LINE_NUMBER(1333);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1335);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_8:;
	{
	LINE_NUMBER(1338);
	frame[4].i = (-(frame[2].i));
	LINE_NUMBER(1339);
	frame[5].i = (frame[1].i);
	}
label_22:;
	{
	LINE_NUMBER(1340);
	if ((frame[4].i) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(1341);
	INST_IINC(4, -1);
	LINE_NUMBER(1342);
	INST_IINC(5, -1);
	LINE_NUMBER(1343);
	if ((frame[5].i) >= 0) goto label_27;
	}
	{
	LINE_NUMBER(1344);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(1346);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[5].i));
	jint temp1 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_22;
	}
	{
	LINE_NUMBER(1347);
	frame[6].i = ((frame[5].i) - (jint(1)));
	LINE_NUMBER(1348);
	if ((frame[6].i) < 0) goto label_31;
	}
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[6].i));
	jint temp1 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_31;
	}
	LINE_NUMBER(1349);
	INST_IINC(5, -1);
label_31:;
	LINE_NUMBER(1351);
	goto label_22;
label_23:;
	{
	LINE_NUMBER(1353);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_offsetByCodePoints_Array1_char_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:offsetByCodePoints", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1388);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1389);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1391);
	frame[5].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(1392);
	if ((frame[1].i) < 0) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_4;
	{
	if ((frame[5].i) > (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_4;
	}
	{
	if ((frame[3].i) < (frame[1].i)) goto label_4;
	}
	{
	if ((frame[3].i) <= (frame[5].i)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1394);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1397);
	if ((frame[4].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(1398);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_6:;
	{
	LINE_NUMBER(1401);
	if ((frame[4].i) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(1402);
	frame[6].i = (frame[4].i);
	LINE_NUMBER(1403);
	frame[7].i = (frame[3].i);
	}
label_11:;
	{
	LINE_NUMBER(1404);
	if ((frame[6].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(1405);
	INST_IINC(6, -1);
	LINE_NUMBER(1406);
	if ((frame[7].i) < (frame[5].i)) goto label_15;
	}
	{
	LINE_NUMBER(1407);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(1409);
	jint temp0 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[7].i))));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1410);
	frame[8].i = ((frame[7].i) + (jint(1)));
	LINE_NUMBER(1411);
	if ((frame[8].i) >= (frame[5].i)) goto label_17;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[8].i))));
	if (temp0 == 0) goto label_17;
	}
	LINE_NUMBER(1412);
	INST_IINC(7, 1);
label_17:;
	{
	LINE_NUMBER(1415);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1417);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_8:;
	{
	LINE_NUMBER(1420);
	frame[6].i = (-(frame[4].i));
	LINE_NUMBER(1421);
	frame[7].i = (frame[3].i);
	}
label_22:;
	{
	LINE_NUMBER(1422);
	if ((frame[6].i) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(1423);
	INST_IINC(6, -1);
	LINE_NUMBER(1424);
	INST_IINC(7, -1);
	LINE_NUMBER(1425);
	if ((frame[7].i) >= (frame[1].i)) goto label_27;
	}
	{
	LINE_NUMBER(1426);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(1428);
	jint temp0 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[7].i))));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(1429);
	frame[8].i = ((frame[7].i) - (jint(1)));
	LINE_NUMBER(1430);
	if ((frame[8].i) < (frame[1].i)) goto label_31;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[8].i))));
	if (temp0 == 0) goto label_31;
	}
	LINE_NUMBER(1431);
	INST_IINC(7, -1);
label_31:;
	LINE_NUMBER(1433);
	goto label_22;
label_23:;
	{
	LINE_NUMBER(1435);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

jchar SM_java_lang_Character_reverseBytes_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:reverseBytes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1445);
	popStackFrame(ctx);
	return (jchar((((frame[0].i) << (8)) | ((frame[0].i) >> (8)))));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Character_valueOf_char_R_java_lang_Character(jcontext ctx, jchar param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1455);
	clinit_java_lang_Character(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Character);
	init_java_lang_Character_char(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isWhitespace_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isWhitespace", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1462);
	jint temp0 = (jint)SM_java_lang_Character_isWhitespace_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isSpaceChar_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isSpaceChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1466);
	if ((frame[0].i) != (32)) goto label_1;
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

jbyte SM_java_lang_Character_getDirectionality_char_R_byte(jcontext ctx, jchar param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:getDirectionality", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1470);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Character.getDirectionality() not supported on this platform"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_getType_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1474);
	jint temp0 = (jint)SM_java_lang_Character_getType_int_R_int(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isBmpCodePoint_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isBmpCodePoint", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1478);
	if ((frame[0].i) <= 0) goto label_1;
	}
	{
	if ((frame[0].i) > (jint(65535))) goto label_1;
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

jbool SM_java_lang_Character_isSurrogate_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isSurrogate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1482);
	jint temp0 = (jint)SM_java_lang_Character_isHighSurrogate_char_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_isLowSurrogate_char_R_boolean(ctx, (frame[0].i));
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

jobject SM_java_lang_Character_getClasses_R_Array1_java_lang_UnicodeHelper$Range(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:getClasses", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	{
	LINE_NUMBER(1487);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnicodeHelper.getClasses() not supported"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_getType_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:getType", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1493);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1494);
	popStackFrame(ctx);
	return (9);
	}
label_1:;
	{
	LINE_NUMBER(1495);
	if ((frame[0].i) < (97)) goto label_3;
	}
	{
	if ((frame[0].i) > (122)) goto label_3;
	}
	{
	LINE_NUMBER(1496);
	popStackFrame(ctx);
	return (jint(2));
	}
label_3:;
	{
	LINE_NUMBER(1497);
	if ((frame[0].i) < (65)) goto label_5;
	}
	{
	if ((frame[0].i) > (90)) goto label_5;
	}
	{
	LINE_NUMBER(1498);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(1499);
	if ((frame[0].i) != (32)) goto label_7;
	}
	{
	LINE_NUMBER(1500);
	popStackFrame(ctx);
	return (12);
	}
label_7:;
	{
	LINE_NUMBER(1501);
	if ((frame[0].i) < 0) goto label_9;
	}
	{
	if ((frame[0].i) > (159)) goto label_9;
	}
	{
	LINE_NUMBER(1502);
	popStackFrame(ctx);
	return (15);
	}
label_9:;
	{
	LINE_NUMBER(1504);
	jint temp0 = (jint)SM_java_lang_Character_isBmpCodePoint_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_isSurrogate_char_R_boolean(ctx, (jchar((frame[0].i))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1505);
	popStackFrame(ctx);
	return (19);
	}
label_11:;
	{
	LINE_NUMBER(1521);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Character_isWhitespace_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:isWhitespace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1534);
	if ((frame[0].i) < (28)) goto label_1;
	}
	{
	if ((frame[0].i) <= (32)) goto label_2;
	}
label_1:;
	{
	if ((frame[0].i) < (9)) goto label_3;
	}
	{
	if ((frame[0].i) > (13)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1535);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(1537);
	if ((frame[0].i) >= (4096)) goto label_4;
	}
	{
	LINE_NUMBER(1538);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1541);
	if ((frame[0].i) == (5760)) goto label_6;
	}
	{
	if ((frame[0].i) != (6158)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1542);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(1544);
	if ((frame[0].i) >= (8192)) goto label_8;
	}
	{
	LINE_NUMBER(1545);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1548);
	if ((frame[0].i) == (8199)) goto label_10;
	}
	{
	if ((frame[0].i) != (8239)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(1549);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(1551);
	if ((frame[0].i) > (jint(65535))) goto label_12;
	}
	{
	LINE_NUMBER(1553);
	if ((frame[0].i) <= (8202)) goto label_14;
	}
	{
	if ((frame[0].i) == (8232)) goto label_14;
	}
	{
	if ((frame[0].i) == (8233)) goto label_14;
	}
	{
	if ((frame[0].i) == (8287)) goto label_14;
	}
	{
	if ((frame[0].i) != (12288)) goto label_15;
	}
label_14:;
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(1557);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Character_compareTo_java_lang_Character_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1561);
	sp[0].o = (jobject)((func_java_lang_Character_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Character_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, ((jint)((java_lang_Character *) NULL_CHECK((frame[1].o)))->F_value));
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Character__codepointToString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:_codepointToString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1565);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1566);
	jint temp0 = (jint)SM_java_lang_Character_isBmpCodePoint_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1567);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (jchar((frame[0].i))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1568);
	jint temp0 = (jint)SM_java_lang_Character_isValidCodePoint_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1569);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_java_lang_Character_highSurrogate_int_R_char(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1570);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)SM_java_lang_Character_lowSurrogate_int_R_char(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1572);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (63));
	}
label_4:;
	{
	LINE_NUMBER(1574);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Character_toTitleCase_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toTitleCase", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1578);
	sp[0].o = (jobject)SM_java_lang_Character__codepointToString_int_R_java_lang_String(ctx, (frame[0].i));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar SM_java_lang_Character_toTitleCase_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:toTitleCase", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1582);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Character_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	jint temp0 = (jint)((func_java_lang_Character_compareTo_java_lang_Character_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Character_compareTo_java_lang_Character_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Character, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Character(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_lang_Character_MAX_RADIX = jint(36);
	SF_java_lang_Character_MAX_VALUE = jint(65535);
	SF_java_lang_Character_MIN_RADIX = jint(2);
	SF_java_lang_Character_MIN_VALUE = jint(0);
	SF_java_lang_Character_MIN_HIGH_SURROGATE = jint(55296);
	SF_java_lang_Character_MAX_HIGH_SURROGATE = jint(56319);
	SF_java_lang_Character_MIN_LOW_SURROGATE = jint(56320);
	SF_java_lang_Character_MAX_LOW_SURROGATE = jint(57343);
	SF_java_lang_Character_MIN_SURROGATE = jint(55296);
	SF_java_lang_Character_MAX_SURROGATE = jint(57343);
	SF_java_lang_Character_MIN_SUPPLEMENTARY_CODE_POINT = jint(65536);
	SF_java_lang_Character_MIN_CODE_POINT = jint(0);
	SF_java_lang_Character_MAX_CODE_POINT = jint(1114111);
	SF_java_lang_Character_SIZE = jint(16);
	SF_java_lang_Character_UNASSIGNED = jint(0);
	SF_java_lang_Character_UPPERCASE_LETTER = jint(1);
	SF_java_lang_Character_LOWERCASE_LETTER = jint(2);
	SF_java_lang_Character_TITLECASE_LETTER = jint(3);
	SF_java_lang_Character_MODIFIER_LETTER = jint(4);
	SF_java_lang_Character_OTHER_LETTER = jint(5);
	SF_java_lang_Character_NON_SPACING_MARK = jint(6);
	SF_java_lang_Character_ENCLOSING_MARK = jint(7);
	SF_java_lang_Character_COMBINING_SPACING_MARK = jint(8);
	SF_java_lang_Character_DECIMAL_DIGIT_NUMBER = jint(9);
	SF_java_lang_Character_LETTER_NUMBER = jint(10);
	SF_java_lang_Character_OTHER_NUMBER = jint(11);
	SF_java_lang_Character_SPACE_SEPARATOR = jint(12);
	SF_java_lang_Character_LINE_SEPARATOR = jint(13);
	SF_java_lang_Character_PARAGRAPH_SEPARATOR = jint(14);
	SF_java_lang_Character_CONTROL = jint(15);
	SF_java_lang_Character_FORMAT = jint(16);
	SF_java_lang_Character_PRIVATE_USE = jint(17);
	SF_java_lang_Character_SURROGATE = jint(19);
	SF_java_lang_Character_DASH_PUNCTUATION = jint(20);
	SF_java_lang_Character_START_PUNCTUATION = jint(21);
	SF_java_lang_Character_END_PUNCTUATION = jint(22);
	SF_java_lang_Character_CONNECTOR_PUNCTUATION = jint(23);
	SF_java_lang_Character_OTHER_PUNCTUATION = jint(24);
	SF_java_lang_Character_MATH_SYMBOL = jint(25);
	SF_java_lang_Character_CURRENCY_SYMBOL = jint(26);
	SF_java_lang_Character_MODIFIER_SYMBOL = jint(27);
	SF_java_lang_Character_OTHER_SYMBOL = jint(28);
	SF_java_lang_Character_INITIAL_QUOTE_PUNCTUATION = jint(29);
	SF_java_lang_Character_FINAL_QUOTE_PUNCTUATION = jint(30);
	SF_java_lang_Character_DIRECTIONALITY_UNDEFINED = jint(-1);
	SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT = jint(0);
	SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT = jint(1);
	SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = jint(2);
	SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER = jint(3);
	SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = jint(4);
	SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = jint(5);
	SF_java_lang_Character_DIRECTIONALITY_ARABIC_NUMBER = jint(6);
	SF_java_lang_Character_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = jint(7);
	SF_java_lang_Character_DIRECTIONALITY_NONSPACING_MARK = jint(8);
	SF_java_lang_Character_DIRECTIONALITY_BOUNDARY_NEUTRAL = jint(9);
	SF_java_lang_Character_DIRECTIONALITY_PARAGRAPH_SEPARATOR = jint(10);
	SF_java_lang_Character_DIRECTIONALITY_SEGMENT_SEPARATOR = jint(11);
	SF_java_lang_Character_DIRECTIONALITY_WHITESPACE = jint(12);
	SF_java_lang_Character_DIRECTIONALITY_OTHER_NEUTRALS = jint(13);
	SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = jint(14);
	SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = jint(15);
	SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = jint(16);
	SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = jint(17);
	SF_java_lang_Character_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = jint(18);
	SF_java_lang_Character_SURROGATE_NEUTRAL_BIT_MASK = jint(63488);
	SF_java_lang_Character_SURROGATE_BITS = jint(55296);
	SF_java_lang_Character_SURROGATE_BIT_MASK = jint(64512);
	SF_java_lang_Character_SURROGATE_BIT_INV_MASK = jint(1023);
	SF_java_lang_Character_HIGH_SURROGATE_BITS = jint(55296);
	SF_java_lang_Character_LOW_SURROGATE_BITS = jint(56320);
	SF_java_lang_Character_MEANINGFUL_SURROGATE_BITS = jint(10);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Character:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Character(ctx);
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"C"_j))));
	clinit_java_lang_Character(ctx);
	SF_java_lang_Character_TYPE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Character[] {
	(void *) M_java_lang_Character_hashCode_R_int,
	(void *) M_java_lang_Character_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Character_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Character_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Character_charValue_R_char,
	(void *) M_java_lang_Character_compareTo_java_lang_Character_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "charValue", "()C" },
	{ "compareTo", "(Ljava/lang/Character;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "MAX_RADIX", &class_int, (intptr_t) &SF_java_lang_Character_MAX_RADIX, "I", 25 },
	{ "MAX_VALUE", &class_char, (intptr_t) &SF_java_lang_Character_MAX_VALUE, "C", 25 },
	{ "MIN_RADIX", &class_int, (intptr_t) &SF_java_lang_Character_MIN_RADIX, "I", 25 },
	{ "MIN_VALUE", &class_char, (intptr_t) &SF_java_lang_Character_MIN_VALUE, "C", 25 },
	{ "MIN_HIGH_SURROGATE", &class_char, (intptr_t) &SF_java_lang_Character_MIN_HIGH_SURROGATE, "C", 25 },
	{ "MAX_HIGH_SURROGATE", &class_char, (intptr_t) &SF_java_lang_Character_MAX_HIGH_SURROGATE, "C", 25 },
	{ "MIN_LOW_SURROGATE", &class_char, (intptr_t) &SF_java_lang_Character_MIN_LOW_SURROGATE, "C", 25 },
	{ "MAX_LOW_SURROGATE", &class_char, (intptr_t) &SF_java_lang_Character_MAX_LOW_SURROGATE, "C", 25 },
	{ "MIN_SURROGATE", &class_char, (intptr_t) &SF_java_lang_Character_MIN_SURROGATE, "C", 25 },
	{ "MAX_SURROGATE", &class_char, (intptr_t) &SF_java_lang_Character_MAX_SURROGATE, "C", 25 },
	{ "MIN_SUPPLEMENTARY_CODE_POINT", &class_int, (intptr_t) &SF_java_lang_Character_MIN_SUPPLEMENTARY_CODE_POINT, "I", 25 },
	{ "MIN_CODE_POINT", &class_int, (intptr_t) &SF_java_lang_Character_MIN_CODE_POINT, "I", 25 },
	{ "MAX_CODE_POINT", &class_int, (intptr_t) &SF_java_lang_Character_MAX_CODE_POINT, "I", 25 },
	{ "SIZE", &class_int, (intptr_t) &SF_java_lang_Character_SIZE, "I", 25 },
	{ "TYPE", &class_java_lang_Class, (intptr_t) &SF_java_lang_Character_TYPE, "Ljava/lang/Class;", 25 },
	{ "UNASSIGNED", &class_byte, (intptr_t) &SF_java_lang_Character_UNASSIGNED, "B", 25 },
	{ "UPPERCASE_LETTER", &class_byte, (intptr_t) &SF_java_lang_Character_UPPERCASE_LETTER, "B", 25 },
	{ "LOWERCASE_LETTER", &class_byte, (intptr_t) &SF_java_lang_Character_LOWERCASE_LETTER, "B", 25 },
	{ "TITLECASE_LETTER", &class_byte, (intptr_t) &SF_java_lang_Character_TITLECASE_LETTER, "B", 25 },
	{ "MODIFIER_LETTER", &class_byte, (intptr_t) &SF_java_lang_Character_MODIFIER_LETTER, "B", 25 },
	{ "OTHER_LETTER", &class_byte, (intptr_t) &SF_java_lang_Character_OTHER_LETTER, "B", 25 },
	{ "NON_SPACING_MARK", &class_byte, (intptr_t) &SF_java_lang_Character_NON_SPACING_MARK, "B", 25 },
	{ "ENCLOSING_MARK", &class_byte, (intptr_t) &SF_java_lang_Character_ENCLOSING_MARK, "B", 25 },
	{ "COMBINING_SPACING_MARK", &class_byte, (intptr_t) &SF_java_lang_Character_COMBINING_SPACING_MARK, "B", 25 },
	{ "DECIMAL_DIGIT_NUMBER", &class_byte, (intptr_t) &SF_java_lang_Character_DECIMAL_DIGIT_NUMBER, "B", 25 },
	{ "LETTER_NUMBER", &class_byte, (intptr_t) &SF_java_lang_Character_LETTER_NUMBER, "B", 25 },
	{ "OTHER_NUMBER", &class_byte, (intptr_t) &SF_java_lang_Character_OTHER_NUMBER, "B", 25 },
	{ "SPACE_SEPARATOR", &class_byte, (intptr_t) &SF_java_lang_Character_SPACE_SEPARATOR, "B", 25 },
	{ "LINE_SEPARATOR", &class_byte, (intptr_t) &SF_java_lang_Character_LINE_SEPARATOR, "B", 25 },
	{ "PARAGRAPH_SEPARATOR", &class_byte, (intptr_t) &SF_java_lang_Character_PARAGRAPH_SEPARATOR, "B", 25 },
	{ "CONTROL", &class_byte, (intptr_t) &SF_java_lang_Character_CONTROL, "B", 25 },
	{ "FORMAT", &class_byte, (intptr_t) &SF_java_lang_Character_FORMAT, "B", 25 },
	{ "PRIVATE_USE", &class_byte, (intptr_t) &SF_java_lang_Character_PRIVATE_USE, "B", 25 },
	{ "SURROGATE", &class_byte, (intptr_t) &SF_java_lang_Character_SURROGATE, "B", 25 },
	{ "DASH_PUNCTUATION", &class_byte, (intptr_t) &SF_java_lang_Character_DASH_PUNCTUATION, "B", 25 },
	{ "START_PUNCTUATION", &class_byte, (intptr_t) &SF_java_lang_Character_START_PUNCTUATION, "B", 25 },
	{ "END_PUNCTUATION", &class_byte, (intptr_t) &SF_java_lang_Character_END_PUNCTUATION, "B", 25 },
	{ "CONNECTOR_PUNCTUATION", &class_byte, (intptr_t) &SF_java_lang_Character_CONNECTOR_PUNCTUATION, "B", 25 },
	{ "OTHER_PUNCTUATION", &class_byte, (intptr_t) &SF_java_lang_Character_OTHER_PUNCTUATION, "B", 25 },
	{ "MATH_SYMBOL", &class_byte, (intptr_t) &SF_java_lang_Character_MATH_SYMBOL, "B", 25 },
	{ "CURRENCY_SYMBOL", &class_byte, (intptr_t) &SF_java_lang_Character_CURRENCY_SYMBOL, "B", 25 },
	{ "MODIFIER_SYMBOL", &class_byte, (intptr_t) &SF_java_lang_Character_MODIFIER_SYMBOL, "B", 25 },
	{ "OTHER_SYMBOL", &class_byte, (intptr_t) &SF_java_lang_Character_OTHER_SYMBOL, "B", 25 },
	{ "INITIAL_QUOTE_PUNCTUATION", &class_byte, (intptr_t) &SF_java_lang_Character_INITIAL_QUOTE_PUNCTUATION, "B", 25 },
	{ "FINAL_QUOTE_PUNCTUATION", &class_byte, (intptr_t) &SF_java_lang_Character_FINAL_QUOTE_PUNCTUATION, "B", 25 },
	{ "DIRECTIONALITY_UNDEFINED", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_UNDEFINED, "B", 25 },
	{ "DIRECTIONALITY_LEFT_TO_RIGHT", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT, "B", 25 },
	{ "DIRECTIONALITY_RIGHT_TO_LEFT", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT, "B", 25 },
	{ "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC, "B", 25 },
	{ "DIRECTIONALITY_EUROPEAN_NUMBER", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER, "B", 25 },
	{ "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR, "B", 25 },
	{ "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR, "B", 25 },
	{ "DIRECTIONALITY_ARABIC_NUMBER", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_ARABIC_NUMBER, "B", 25 },
	{ "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR, "B", 25 },
	{ "DIRECTIONALITY_NONSPACING_MARK", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_NONSPACING_MARK, "B", 25 },
	{ "DIRECTIONALITY_BOUNDARY_NEUTRAL", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_BOUNDARY_NEUTRAL, "B", 25 },
	{ "DIRECTIONALITY_PARAGRAPH_SEPARATOR", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_PARAGRAPH_SEPARATOR, "B", 25 },
	{ "DIRECTIONALITY_SEGMENT_SEPARATOR", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_SEGMENT_SEPARATOR, "B", 25 },
	{ "DIRECTIONALITY_WHITESPACE", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_WHITESPACE, "B", 25 },
	{ "DIRECTIONALITY_OTHER_NEUTRALS", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_OTHER_NEUTRALS, "B", 25 },
	{ "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING, "B", 25 },
	{ "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE, "B", 25 },
	{ "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING, "B", 25 },
	{ "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE, "B", 25 },
	{ "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT", &class_byte, (intptr_t) &SF_java_lang_Character_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT, "B", 25 },
	{ "SURROGATE_NEUTRAL_BIT_MASK", &class_int, (intptr_t) &SF_java_lang_Character_SURROGATE_NEUTRAL_BIT_MASK, "I", 26 },
	{ "SURROGATE_BITS", &class_int, (intptr_t) &SF_java_lang_Character_SURROGATE_BITS, "I", 26 },
	{ "SURROGATE_BIT_MASK", &class_int, (intptr_t) &SF_java_lang_Character_SURROGATE_BIT_MASK, "I", 26 },
	{ "SURROGATE_BIT_INV_MASK", &class_int, (intptr_t) &SF_java_lang_Character_SURROGATE_BIT_INV_MASK, "I", 26 },
	{ "HIGH_SURROGATE_BITS", &class_int, (intptr_t) &SF_java_lang_Character_HIGH_SURROGATE_BITS, "I", 26 },
	{ "LOW_SURROGATE_BITS", &class_int, (intptr_t) &SF_java_lang_Character_LOW_SURROGATE_BITS, "I", 26 },
	{ "MEANINGFUL_SURROGATE_BITS", &class_int, (intptr_t) &SF_java_lang_Character_MEANINGFUL_SURROGATE_BITS, "I", 26 },
	{ "value", &class_char, offsetof(java_lang_Character, F_value), "C", 2 },
	{ "classMapping", getArrayClass(&class_java_lang_UnicodeHelper$Range, 1), (intptr_t) &SF_java_lang_Character_classMapping, "[Ljava/lang/UnicodeHelper$Range;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Character_char, 0, "(C)V", 1 },
	{ "charValue", (intptr_t) M_java_lang_Character_charValue_R_char, VTABLE_java_lang_Character_charValue_R_char, "()C", 1 },
	{ "digit", (intptr_t) SM_java_lang_Character_digit_char_int_R_int, 0, "(CI)I", 9 },
	{ "digit", (intptr_t) SM_java_lang_Character_digit_int_int_R_int, 0, "(II)I", 9 },
	{ "compare", (intptr_t) SM_java_lang_Character_compare_char_char_R_int, 0, "(CC)I", 9 },
	{ "equals", (intptr_t) M_java_lang_Character_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Character_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_lang_Character_hashCode_R_int, VTABLE_java_lang_Character_hashCode_R_int, "()I", 1 },
	{ "hashCode", (intptr_t) SM_java_lang_Character_hashCode_char_R_int, 0, "(C)I", 9 },
	{ "toString", (intptr_t) SM_java_lang_Character_toString_char_R_java_lang_String, 0, "(C)Ljava/lang/String;", 9 },
	{ "isLetterOrDigit", (intptr_t) SM_java_lang_Character_isLetterOrDigit_char_R_boolean, 0, "(C)Z", 9 },
	{ "isLetterOrDigit", (intptr_t) SM_java_lang_Character_isLetterOrDigit_int_R_boolean, 0, "(I)Z", 9 },
	{ "isLetter", (intptr_t) SM_java_lang_Character_isLetter_char_R_boolean, 0, "(C)Z", 9 },
	{ "isLetter", (intptr_t) SM_java_lang_Character_isLetter_int_R_boolean, 0, "(I)Z", 9 },
	{ "isSpace", (intptr_t) SM_java_lang_Character_isSpace_char_R_boolean, 0, "(C)Z", 9 },
	{ "isDefined", (intptr_t) SM_java_lang_Character_isDefined_char_R_boolean, 0, "(C)Z", 9 },
	{ "isISOControl", (intptr_t) SM_java_lang_Character_isISOControl_char_R_boolean, 0, "(C)Z", 9 },
	{ "isISOControl", (intptr_t) SM_java_lang_Character_isISOControl_int_R_boolean, 0, "(I)Z", 9 },
	{ "isTitleCase", (intptr_t) SM_java_lang_Character_isTitleCase_char_R_boolean, 0, "(C)Z", 9 },
	{ "isTitleCase", (intptr_t) SM_java_lang_Character_isTitleCase_int_R_boolean, 0, "(I)Z", 9 },
	{ "isJavaIdentifierStart", (intptr_t) SM_java_lang_Character_isJavaIdentifierStart_char_R_boolean, 0, "(C)Z", 9 },
	{ "isJavaIdentifierStart", (intptr_t) SM_java_lang_Character_isJavaIdentifierStart_int_R_boolean, 0, "(I)Z", 9 },
	{ "isJavaIdentifierPart", (intptr_t) SM_java_lang_Character_isJavaIdentifierPart_char_R_boolean, 0, "(C)Z", 9 },
	{ "isJavaIdentifierPart", (intptr_t) SM_java_lang_Character_isJavaIdentifierPart_int_R_boolean, 0, "(I)Z", 9 },
	{ "isIdentifierIgnorable", (intptr_t) SM_java_lang_Character_isIdentifierIgnorable_char_R_boolean, 0, "(C)Z", 9 },
	{ "isIdentifierIgnorable", (intptr_t) SM_java_lang_Character_isIdentifierIgnorable_int_R_boolean, 0, "(I)Z", 9 },
	{ "isDigit", (intptr_t) SM_java_lang_Character_isDigit_char_R_boolean, 0, "(C)Z", 9 },
	{ "isDigit", (intptr_t) SM_java_lang_Character_isDigit_int_R_boolean, 0, "(I)Z", 9 },
	{ "toSurrogates", (intptr_t) SM_java_lang_Character_toSurrogates_int_Array1_char_int, 0, "(I[CI)V", 8 },
	{ "codePointCountImpl", (intptr_t) SM_java_lang_Character_codePointCountImpl_Array1_char_int_int_R_int, 0, "([CII)I", 8 },
	{ "offsetByCodePointsImpl", (intptr_t) SM_java_lang_Character_offsetByCodePointsImpl_Array1_char_int_int_int_int_R_int, 0, "([CIIII)I", 8 },
	{ "codePointAtImpl", (intptr_t) SM_java_lang_Character_codePointAtImpl_Array1_char_int_int_R_int, 0, "([CII)I", 8 },
	{ "codePointBeforeImpl", (intptr_t) SM_java_lang_Character_codePointBeforeImpl_Array1_char_int_int_R_int, 0, "([CII)I", 8 },
	{ "isLowerCase", (intptr_t) SM_java_lang_Character_isLowerCase_char_R_boolean, 0, "(C)Z", 9 },
	{ "isLowerCase", (intptr_t) SM_java_lang_Character_isLowerCase_int_R_boolean, 0, "(I)Z", 9 },
	{ "isUpperCase", (intptr_t) SM_java_lang_Character_isUpperCase_char_R_boolean, 0, "(C)Z", 9 },
	{ "isUpperCase", (intptr_t) SM_java_lang_Character_isUpperCase_int_R_boolean, 0, "(I)Z", 9 },
	{ "toLowerCase", (intptr_t) SM_java_lang_Character_toLowerCase_char_R_char, 0, "(C)C", 265 },
	{ "toLowerCase", (intptr_t) SM_java_lang_Character_toLowerCase_int_R_int, 0, "(I)I", 265 },
	{ "toString", (intptr_t) M_java_lang_Character_toString_R_java_lang_String, VTABLE_java_lang_Character_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toUpperCase", (intptr_t) SM_java_lang_Character_toUpperCase_char_R_char, 0, "(C)C", 9 },
	{ "toUpperCase", (intptr_t) SM_java_lang_Character_toUpperCase_int_R_int, 0, "(I)I", 9 },
	{ "isValidCodePoint", (intptr_t) SM_java_lang_Character_isValidCodePoint_int_R_boolean, 0, "(I)Z", 9 },
	{ "isSupplementaryCodePoint", (intptr_t) SM_java_lang_Character_isSupplementaryCodePoint_int_R_boolean, 0, "(I)Z", 9 },
	{ "isHighSurrogate", (intptr_t) SM_java_lang_Character_isHighSurrogate_char_R_boolean, 0, "(C)Z", 9 },
	{ "highSurrogate", (intptr_t) SM_java_lang_Character_highSurrogate_int_R_char, 0, "(I)C", 9 },
	{ "lowSurrogate", (intptr_t) SM_java_lang_Character_lowSurrogate_int_R_char, 0, "(I)C", 9 },
	{ "isLowSurrogate", (intptr_t) SM_java_lang_Character_isLowSurrogate_char_R_boolean, 0, "(C)Z", 9 },
	{ "isSurrogatePair", (intptr_t) SM_java_lang_Character_isSurrogatePair_char_char_R_boolean, 0, "(CC)Z", 9 },
	{ "charCount", (intptr_t) SM_java_lang_Character_charCount_int_R_int, 0, "(I)I", 9 },
	{ "toCodePoint", (intptr_t) SM_java_lang_Character_toCodePoint_char_char_R_int, 0, "(CC)I", 9 },
	{ "codePointAt", (intptr_t) SM_java_lang_Character_codePointAt_java_lang_CharSequence_int_R_int, 0, "(Ljava/lang/CharSequence;I)I", 9 },
	{ "codePointAt", (intptr_t) SM_java_lang_Character_codePointAt_Array1_char_int_R_int, 0, "([CI)I", 9 },
	{ "codePointAt", (intptr_t) SM_java_lang_Character_codePointAt_Array1_char_int_int_R_int, 0, "([CII)I", 9 },
	{ "codePointBefore", (intptr_t) SM_java_lang_Character_codePointBefore_java_lang_CharSequence_int_R_int, 0, "(Ljava/lang/CharSequence;I)I", 9 },
	{ "codePointBefore", (intptr_t) SM_java_lang_Character_codePointBefore_Array1_char_int_R_int, 0, "([CI)I", 9 },
	{ "codePointBefore", (intptr_t) SM_java_lang_Character_codePointBefore_Array1_char_int_int_R_int, 0, "([CII)I", 9 },
	{ "toChars", (intptr_t) SM_java_lang_Character_toChars_int_Array1_char_int_R_int, 0, "(I[CI)I", 9 },
	{ "toChars", (intptr_t) SM_java_lang_Character_toChars_int_R_Array1_char, 0, "(I)[C", 9 },
	{ "codePointCount", (intptr_t) SM_java_lang_Character_codePointCount_java_lang_CharSequence_int_int_R_int, 0, "(Ljava/lang/CharSequence;II)I", 9 },
	{ "codePointCount", (intptr_t) SM_java_lang_Character_codePointCount_Array1_char_int_int_R_int, 0, "([CII)I", 9 },
	{ "offsetByCodePoints", (intptr_t) SM_java_lang_Character_offsetByCodePoints_java_lang_CharSequence_int_int_R_int, 0, "(Ljava/lang/CharSequence;II)I", 9 },
	{ "offsetByCodePoints", (intptr_t) SM_java_lang_Character_offsetByCodePoints_Array1_char_int_int_int_int_R_int, 0, "([CIIII)I", 9 },
	{ "reverseBytes", (intptr_t) SM_java_lang_Character_reverseBytes_char_R_char, 0, "(C)C", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Character_valueOf_char_R_java_lang_Character, 0, "(C)Ljava/lang/Character;", 9 },
	{ "isWhitespace", (intptr_t) SM_java_lang_Character_isWhitespace_char_R_boolean, 0, "(C)Z", 9 },
	{ "isSpaceChar", (intptr_t) SM_java_lang_Character_isSpaceChar_char_R_boolean, 0, "(C)Z", 9 },
	{ "getDirectionality", (intptr_t) SM_java_lang_Character_getDirectionality_char_R_byte, 0, "(C)B", 9 },
	{ "getType", (intptr_t) SM_java_lang_Character_getType_char_R_int, 0, "(C)I", 9 },
	{ "isBmpCodePoint", (intptr_t) SM_java_lang_Character_isBmpCodePoint_int_R_boolean, 0, "(I)Z", 9 },
	{ "isSurrogate", (intptr_t) SM_java_lang_Character_isSurrogate_char_R_boolean, 0, "(C)Z", 9 },
	{ "getClasses", (intptr_t) SM_java_lang_Character_getClasses_R_Array1_java_lang_UnicodeHelper$Range, 0, "()[Ljava/lang/UnicodeHelper$Range;", 10 },
	{ "getType", (intptr_t) SM_java_lang_Character_getType_int_R_int, 0, "(I)I", 9 },
	{ "isWhitespace", (intptr_t) SM_java_lang_Character_isWhitespace_int_R_boolean, 0, "(I)Z", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Character_compareTo_java_lang_Character_R_int, VTABLE_java_lang_Character_compareTo_java_lang_Character_R_int, "(Ljava/lang/Character;)I", 1 },
	{ "_codepointToString", (intptr_t) SM_java_lang_Character__codepointToString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 10 },
	{ "toTitleCase", (intptr_t) SM_java_lang_Character_toTitleCase_int_R_int, 0, "(I)I", 9 },
	{ "toTitleCase", (intptr_t) SM_java_lang_Character_toTitleCase_char_R_char, 0, "(C)C", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Character_compareTo_java_lang_Object_R_int, VTABLE_java_lang_Character_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Character, 0, "()V", 8 },
};

Class class_java_lang_Character{
		.nativeName = (intptr_t) "java/lang/Character",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Character),
		.classVtable = (intptr_t) vtable_java_lang_Character,
		.staticInitializer = (intptr_t) clinit_java_lang_Character,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Character,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 74,
		.nativeFields = (intptr_t) fields,
		.methodCount = 79,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Character = registerClass(&class_java_lang_Character);

}
