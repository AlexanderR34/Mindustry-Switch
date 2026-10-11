#ifndef HEADER_java_lang_Character
#define HEADER_java_lang_Character

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Character {
	java_lang_Object parent;
	jchar F_value;
} java_lang_Character;

extern Class class_java_lang_Character;

extern jint SF_java_lang_Character_MAX_RADIX;
extern jchar SF_java_lang_Character_MAX_VALUE;
extern jint SF_java_lang_Character_MIN_RADIX;
extern jchar SF_java_lang_Character_MIN_VALUE;
extern jchar SF_java_lang_Character_MIN_HIGH_SURROGATE;
extern jchar SF_java_lang_Character_MAX_HIGH_SURROGATE;
extern jchar SF_java_lang_Character_MIN_LOW_SURROGATE;
extern jchar SF_java_lang_Character_MAX_LOW_SURROGATE;
extern jchar SF_java_lang_Character_MIN_SURROGATE;
extern jchar SF_java_lang_Character_MAX_SURROGATE;
extern jint SF_java_lang_Character_MIN_SUPPLEMENTARY_CODE_POINT;
extern jint SF_java_lang_Character_MIN_CODE_POINT;
extern jint SF_java_lang_Character_MAX_CODE_POINT;
extern jint SF_java_lang_Character_SIZE;
extern jobject SF_java_lang_Character_TYPE;
extern jbyte SF_java_lang_Character_UNASSIGNED;
extern jbyte SF_java_lang_Character_UPPERCASE_LETTER;
extern jbyte SF_java_lang_Character_LOWERCASE_LETTER;
extern jbyte SF_java_lang_Character_TITLECASE_LETTER;
extern jbyte SF_java_lang_Character_MODIFIER_LETTER;
extern jbyte SF_java_lang_Character_OTHER_LETTER;
extern jbyte SF_java_lang_Character_NON_SPACING_MARK;
extern jbyte SF_java_lang_Character_ENCLOSING_MARK;
extern jbyte SF_java_lang_Character_COMBINING_SPACING_MARK;
extern jbyte SF_java_lang_Character_DECIMAL_DIGIT_NUMBER;
extern jbyte SF_java_lang_Character_LETTER_NUMBER;
extern jbyte SF_java_lang_Character_OTHER_NUMBER;
extern jbyte SF_java_lang_Character_SPACE_SEPARATOR;
extern jbyte SF_java_lang_Character_LINE_SEPARATOR;
extern jbyte SF_java_lang_Character_PARAGRAPH_SEPARATOR;
extern jbyte SF_java_lang_Character_CONTROL;
extern jbyte SF_java_lang_Character_FORMAT;
extern jbyte SF_java_lang_Character_PRIVATE_USE;
extern jbyte SF_java_lang_Character_SURROGATE;
extern jbyte SF_java_lang_Character_DASH_PUNCTUATION;
extern jbyte SF_java_lang_Character_START_PUNCTUATION;
extern jbyte SF_java_lang_Character_END_PUNCTUATION;
extern jbyte SF_java_lang_Character_CONNECTOR_PUNCTUATION;
extern jbyte SF_java_lang_Character_OTHER_PUNCTUATION;
extern jbyte SF_java_lang_Character_MATH_SYMBOL;
extern jbyte SF_java_lang_Character_CURRENCY_SYMBOL;
extern jbyte SF_java_lang_Character_MODIFIER_SYMBOL;
extern jbyte SF_java_lang_Character_OTHER_SYMBOL;
extern jbyte SF_java_lang_Character_INITIAL_QUOTE_PUNCTUATION;
extern jbyte SF_java_lang_Character_FINAL_QUOTE_PUNCTUATION;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_UNDEFINED;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_ARABIC_NUMBER;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_NONSPACING_MARK;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_BOUNDARY_NEUTRAL;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_PARAGRAPH_SEPARATOR;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_SEGMENT_SEPARATOR;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_WHITESPACE;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_OTHER_NEUTRALS;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE;
extern jbyte SF_java_lang_Character_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT;
extern jint SF_java_lang_Character_SURROGATE_NEUTRAL_BIT_MASK;
extern jint SF_java_lang_Character_SURROGATE_BITS;
extern jint SF_java_lang_Character_SURROGATE_BIT_MASK;
extern jint SF_java_lang_Character_SURROGATE_BIT_INV_MASK;
extern jint SF_java_lang_Character_HIGH_SURROGATE_BITS;
extern jint SF_java_lang_Character_LOW_SURROGATE_BITS;
extern jint SF_java_lang_Character_MEANINGFUL_SURROGATE_BITS;
extern jobject SF_java_lang_Character_classMapping;

#define VTABLE_java_lang_Character_hashCode_R_int 0
typedef jint (*func_java_lang_Character_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Character_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Character_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Character_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Character_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Character_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Character_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Character_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Character_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Character_finalize 5
typedef void (*func_java_lang_Character_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Character_notify 6
typedef void (*func_java_lang_Character_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Character_notifyAll 7
typedef void (*func_java_lang_Character_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Character_wait 8
typedef void (*func_java_lang_Character_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Character_wait_long 9
typedef void (*func_java_lang_Character_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Character_wait_long_int 10
typedef void (*func_java_lang_Character_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Character_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_lang_Character_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Character_charValue_R_char 12
typedef jchar (*func_java_lang_Character_charValue_R_char)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Character_compareTo_java_lang_Character_R_int 13
typedef jint (*func_java_lang_Character_compareTo_java_lang_Character_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Character(jobject object, jint mark, jint depth);
void clinit_java_lang_Character(jcontext ctx);
void init_java_lang_Character_char(jcontext ctx, jobject self, jchar param0);
jchar M_java_lang_Character_charValue_R_char(jcontext ctx, jobject self);
jint SM_java_lang_Character_digit_char_int_R_int(jcontext ctx, jchar param0, jint param1);
jint SM_java_lang_Character_digit_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_java_lang_Character_compare_char_char_R_int(jcontext ctx, jchar param0, jchar param1);
jbool M_java_lang_Character_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Character_hashCode_R_int(jcontext ctx, jobject self);
jint SM_java_lang_Character_hashCode_char_R_int(jcontext ctx, jchar param0);
jobject SM_java_lang_Character_toString_char_R_java_lang_String(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isLetterOrDigit_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isLetterOrDigit_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isLetter_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isLetter_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isSpace_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isDefined_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isISOControl_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isISOControl_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isTitleCase_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isTitleCase_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isJavaIdentifierStart_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isJavaIdentifierStart_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isJavaIdentifierPart_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isJavaIdentifierPart_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isIdentifierIgnorable_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isIdentifierIgnorable_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isDigit_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isDigit_int_R_boolean(jcontext ctx, jint param0);
void SM_java_lang_Character_toSurrogates_int_Array1_char_int(jcontext ctx, jint param0, jobject param1, jint param2);
jint SM_java_lang_Character_codePointCountImpl_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_java_lang_Character_offsetByCodePointsImpl_Array1_char_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
jint SM_java_lang_Character_codePointAtImpl_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_java_lang_Character_codePointBeforeImpl_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jbool SM_java_lang_Character_isLowerCase_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isLowerCase_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isUpperCase_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isUpperCase_int_R_boolean(jcontext ctx, jint param0);
jchar SM_java_lang_Character_toLowerCase_char_R_char(jcontext ctx, jchar param0);
jint SM_java_lang_Character_toLowerCase_int_R_int(jcontext ctx, jint param0);
jobject M_java_lang_Character_toString_R_java_lang_String(jcontext ctx, jobject self);
jchar SM_java_lang_Character_toUpperCase_char_R_char(jcontext ctx, jchar param0);
jint SM_java_lang_Character_toUpperCase_int_R_int(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isValidCodePoint_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isSupplementaryCodePoint_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isHighSurrogate_char_R_boolean(jcontext ctx, jchar param0);
jchar SM_java_lang_Character_highSurrogate_int_R_char(jcontext ctx, jint param0);
jchar SM_java_lang_Character_lowSurrogate_int_R_char(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isLowSurrogate_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isSurrogatePair_char_char_R_boolean(jcontext ctx, jchar param0, jchar param1);
jint SM_java_lang_Character_charCount_int_R_int(jcontext ctx, jint param0);
jint SM_java_lang_Character_toCodePoint_char_char_R_int(jcontext ctx, jchar param0, jchar param1);
jint SM_java_lang_Character_codePointAt_java_lang_CharSequence_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_lang_Character_codePointAt_Array1_char_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_lang_Character_codePointAt_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_java_lang_Character_codePointBefore_java_lang_CharSequence_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_lang_Character_codePointBefore_Array1_char_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_lang_Character_codePointBefore_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_java_lang_Character_toChars_int_Array1_char_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2);
jobject SM_java_lang_Character_toChars_int_R_Array1_char(jcontext ctx, jint param0);
jint SM_java_lang_Character_codePointCount_java_lang_CharSequence_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_java_lang_Character_codePointCount_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_java_lang_Character_offsetByCodePoints_java_lang_CharSequence_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_java_lang_Character_offsetByCodePoints_Array1_char_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
jchar SM_java_lang_Character_reverseBytes_char_R_char(jcontext ctx, jchar param0);
jobject SM_java_lang_Character_valueOf_char_R_java_lang_Character(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isWhitespace_char_R_boolean(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isSpaceChar_char_R_boolean(jcontext ctx, jchar param0);
jbyte SM_java_lang_Character_getDirectionality_char_R_byte(jcontext ctx, jchar param0);
jint SM_java_lang_Character_getType_char_R_int(jcontext ctx, jchar param0);
jbool SM_java_lang_Character_isBmpCodePoint_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isSurrogate_char_R_boolean(jcontext ctx, jchar param0);
jobject SM_java_lang_Character_getClasses_R_Array1_java_lang_UnicodeHelper$Range(jcontext ctx);
jint SM_java_lang_Character_getType_int_R_int(jcontext ctx, jint param0);
jbool SM_java_lang_Character_isWhitespace_int_R_boolean(jcontext ctx, jint param0);
jint M_java_lang_Character_compareTo_java_lang_Character_R_int(jcontext ctx, jobject self, jobject param0);
jobject SM_java_lang_Character__codepointToString_int_R_java_lang_String(jcontext ctx, jint param0);
jint SM_java_lang_Character_toTitleCase_int_R_int(jcontext ctx, jint param0);
jchar SM_java_lang_Character_toTitleCase_char_R_char(jcontext ctx, jchar param0);
jint M_java_lang_Character_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
