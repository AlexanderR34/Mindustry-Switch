#include "java/util/Scanner.h"
#include "java/lang/Integer.h"
#include "java/util/Scanner.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Scanner_PatternLRUCache.h"
#include "java/io/StringReader.h"
#include "java/nio/channels/ReadableByteChannel.h"
#include "java/nio/file/Path.h"
#include "java/util/regex/Pattern.h"
#include "java/nio/Buffer.h"
#include "java/util/InputMismatchException.h"
#include "java/lang/Readable.h"
#include "regexodus/between/MatchResult.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/io/File.h"
#include "java/nio/channels/FileChannel.h"
#include "java/util/Locale.h"
#include "java/util/Iterator.h"
#include "java/util/Locale_Category.h"
#include "java/nio/charset/IllegalCharsetNameException.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/AssertionError.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Double.h"
#include "java/math/BigInteger.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/nio/charset/Charset.h"
#include "java/lang/Boolean.h"
#include "java/io/FileInputStream.h"
#include "java/nio/charset/CharsetDecoder.h"
#include "java/lang/Float.h"
#include "java/util/regex/Matcher.h"
#include "java/nio/channels/Channels.h"
#include "java/io/InputStream.h"
#include "java/lang/Short.h"
#include "java/util/regex/MatchResult.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/util/Scanner_TokenSpliterator.h"
#include "java/io/InputStreamReader.h"
#include "java/lang/NullPointerException.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/lang/Byte.h"
#include "java/nio/CharBuffer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Scanner_FindSpliterator.h"
#include "java/lang/Long.h"
#include "java/lang/CharSequence.h"
#include "java/nio/charset/UnsupportedCharsetException.h"
#include "java/math/BigDecimal.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"

extern "C" {

jint SF_java_util_Scanner_BUFFER_SIZE;
jobject SF_java_util_Scanner_WHITESPACE_PATTERN;
jobject SF_java_util_Scanner_FIND_ANY_PATTERN;
jobject SF_java_util_Scanner_NON_ASCII_DIGIT;
volatile jobject SF_java_util_Scanner_boolPattern;
jobject SF_java_util_Scanner_BOOLEAN_PATTERN;
volatile jobject SF_java_util_Scanner_separatorPattern;
volatile jobject SF_java_util_Scanner_linePattern;
jobject SF_java_util_Scanner_LINE_SEPARATOR_PATTERN;
jobject SF_java_util_Scanner_LINE_PATTERN;
jbool SF_java_util_Scanner_$assertionsDisabled;

void mark_java_util_Scanner(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_Scanner_WHITESPACE_PATTERN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Scanner_WHITESPACE_PATTERN)->clazz)->markFunction)((jobject) SF_java_util_Scanner_WHITESPACE_PATTERN, mark, depth + 1);
		if (SF_java_util_Scanner_FIND_ANY_PATTERN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Scanner_FIND_ANY_PATTERN)->clazz)->markFunction)((jobject) SF_java_util_Scanner_FIND_ANY_PATTERN, mark, depth + 1);
		if (SF_java_util_Scanner_NON_ASCII_DIGIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Scanner_NON_ASCII_DIGIT)->clazz)->markFunction)((jobject) SF_java_util_Scanner_NON_ASCII_DIGIT, mark, depth + 1);
		if (SF_java_util_Scanner_boolPattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Scanner_boolPattern)->clazz)->markFunction)((jobject) SF_java_util_Scanner_boolPattern, mark, depth + 1);
		if (SF_java_util_Scanner_BOOLEAN_PATTERN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Scanner_BOOLEAN_PATTERN)->clazz)->markFunction)((jobject) SF_java_util_Scanner_BOOLEAN_PATTERN, mark, depth + 1);
		if (SF_java_util_Scanner_separatorPattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Scanner_separatorPattern)->clazz)->markFunction)((jobject) SF_java_util_Scanner_separatorPattern, mark, depth + 1);
		if (SF_java_util_Scanner_linePattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Scanner_linePattern)->clazz)->markFunction)((jobject) SF_java_util_Scanner_linePattern, mark, depth + 1);
		if (SF_java_util_Scanner_LINE_SEPARATOR_PATTERN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Scanner_LINE_SEPARATOR_PATTERN)->clazz)->markFunction)((jobject) SF_java_util_Scanner_LINE_SEPARATOR_PATTERN, mark, depth + 1);
		if (SF_java_util_Scanner_LINE_PATTERN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Scanner_LINE_PATTERN)->clazz)->markFunction)((jobject) SF_java_util_Scanner_LINE_PATTERN, mark, depth + 1);
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
	auto self = (java_util_Scanner *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
	if (self->F_matcher)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_matcher)->clazz)->markFunction)((jobject) self->F_matcher, mark, depth + 1);
	if (self->F_delimPattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_delimPattern)->clazz)->markFunction)((jobject) self->F_delimPattern, mark, depth + 1);
	if (self->F_hasNextPattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hasNextPattern)->clazz)->markFunction)((jobject) self->F_hasNextPattern, mark, depth + 1);
	if (self->F_hasNextResult)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hasNextResult)->clazz)->markFunction)((jobject) self->F_hasNextResult, mark, depth + 1);
	if (self->F_source)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_source)->clazz)->markFunction)((jobject) self->F_source, mark, depth + 1);
	if (self->F_typeCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_typeCache)->clazz)->markFunction)((jobject) self->F_typeCache, mark, depth + 1);
	if (self->F_locale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locale)->clazz)->markFunction)((jobject) self->F_locale, mark, depth + 1);
	if (self->F_patternCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_patternCache)->clazz)->markFunction)((jobject) self->F_patternCache, mark, depth + 1);
	if (self->F_lastException)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastException)->clazz)->markFunction)((jobject) self->F_lastException, mark, depth + 1);
	if (self->F_groupSeparator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_groupSeparator)->clazz)->markFunction)((jobject) self->F_groupSeparator, mark, depth + 1);
	if (self->F_decimalSeparator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_decimalSeparator)->clazz)->markFunction)((jobject) self->F_decimalSeparator, mark, depth + 1);
	if (self->F_nanString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nanString)->clazz)->markFunction)((jobject) self->F_nanString, mark, depth + 1);
	if (self->F_infinityString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_infinityString)->clazz)->markFunction)((jobject) self->F_infinityString, mark, depth + 1);
	if (self->F_positivePrefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_positivePrefix)->clazz)->markFunction)((jobject) self->F_positivePrefix, mark, depth + 1);
	if (self->F_negativePrefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_negativePrefix)->clazz)->markFunction)((jobject) self->F_negativePrefix, mark, depth + 1);
	if (self->F_positiveSuffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_positiveSuffix)->clazz)->markFunction)((jobject) self->F_positiveSuffix, mark, depth + 1);
	if (self->F_negativeSuffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_negativeSuffix)->clazz)->markFunction)((jobject) self->F_negativeSuffix, mark, depth + 1);
	if (self->F_integerPattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_integerPattern)->clazz)->markFunction)((jobject) self->F_integerPattern, mark, depth + 1);
	if (self->F_digits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_digits)->clazz)->markFunction)((jobject) self->F_digits, mark, depth + 1);
	if (self->F_non0Digit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_non0Digit)->clazz)->markFunction)((jobject) self->F_non0Digit, mark, depth + 1);
	if (self->F_floatPattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floatPattern)->clazz)->markFunction)((jobject) self->F_floatPattern, mark, depth + 1);
	if (self->F_decimalPattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_decimalPattern)->clazz)->markFunction)((jobject) self->F_decimalPattern, mark, depth + 1);
}

jobject SM_java_util_Scanner_boolPattern_R_java_util_regex_Pattern(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:boolPattern", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	{
	LINE_NUMBER(409);
	clinit_java_util_Scanner(ctx);
	sp[0].o = (jobject)SF_java_util_Scanner_boolPattern;
	frame[0].o = sp[0].o;
	LINE_NUMBER(410);
	if ((frame[0].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_int_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"true|false"_j))), (jint(2)));
	frame[0].o = sp[0].o;
	clinit_java_util_Scanner(ctx);
	SF_java_util_Scanner_boolPattern = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_buildIntegerPatternString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:buildIntegerPatternString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_digits;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (jint(0)), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix));
	frame[1].o = sp[0].o;
	LINE_NUMBER(429);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"((?i)["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]|\\p{javaDigit})"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(430);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_non0Digit;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"?"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"?("_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_groupSeparator;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")+)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(434);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"++)|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(435);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"([-+]?("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"))"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(436);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(437);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positivePrefix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positiveSuffix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(438);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")|("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")|("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:integerPattern", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_integerPattern;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(444);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_patternCache;
	sp[2].o = (jobject)M_java_util_Scanner_buildIntegerPatternString_R_java_lang_String(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern])(ctx, sp[1].o, sp[2].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_integerPattern = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_integerPattern;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Scanner_separatorPattern_R_java_util_regex_Pattern(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:separatorPattern", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	{
	LINE_NUMBER(459);
	clinit_java_util_Scanner(ctx);
	sp[0].o = (jobject)SF_java_util_Scanner_separatorPattern;
	frame[0].o = sp[0].o;
	LINE_NUMBER(460);
	if ((frame[0].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"\r\n|[\n\r\u2028\u2029\u0085]"_j))));
	frame[0].o = sp[0].o;
	clinit_java_util_Scanner(ctx);
	SF_java_util_Scanner_separatorPattern = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Scanner_linePattern_R_java_util_regex_Pattern(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:linePattern", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	{
	LINE_NUMBER(466);
	clinit_java_util_Scanner(ctx);
	sp[0].o = (jobject)SF_java_util_Scanner_linePattern;
	frame[0].o = sp[0].o;
	LINE_NUMBER(467);
	if ((frame[0].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8".*(\r\n|[\n\r\u2028\u2029\u0085])|.+$"_j))));
	frame[0].o = sp[0].o;
	clinit_java_util_Scanner(ctx);
	SF_java_util_Scanner_linePattern = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_buildFloatAndDecimalPattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:buildFloatAndDecimalPattern", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(479);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"([0-9]|(\\p{javaDigit}))"_j)));
	LINE_NUMBER(480);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"([eE][+-]?"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"+)?"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(481);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_non0Digit;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"?"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"?("_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_groupSeparator;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")+)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(484);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"++)|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(485);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalSeparator;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"*+|"_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalSeparator;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"++)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(488);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(NaN|"_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_nanString;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|Infinity|"_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_infinityString;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(490);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positivePrefix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positiveSuffix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(492);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(494);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(([-+]?"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(496);
	frame[10].o = (((jobject) createStringLiteral(ctx, u8"[-+]?0[xX][0-9a-fA-F]*\\.[0-9a-fA-F]+([pP][-+]?[0-9]+)?"_j)));
	LINE_NUMBER(498);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positivePrefix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positiveSuffix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(500);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(502);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(([-+]?"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[11].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[12].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[13].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_floatPattern = (jref) sp[1].o;
	LINE_NUMBER(507);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (frame[9].o));
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_decimalPattern = (jref) sp[1].o;
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_floatPattern_R_java_util_regex_Pattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:floatPattern", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_floatPattern;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(511);
	M_java_util_Scanner_buildFloatAndDecimalPattern(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_floatPattern;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_decimalPattern_R_java_util_regex_Pattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:decimalPattern", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalPattern;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(517);
	M_java_util_Scanner_buildFloatAndDecimalPattern(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalPattern;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_lang_Readable_java_util_regex_Pattern(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(531);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(338);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed = (jint(0));
	LINE_NUMBER(341);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(0));
	LINE_NUMBER(344);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped = (jint(0));
	LINE_NUMBER(347);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition = (jint(-1));
	LINE_NUMBER(350);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache = (jref) (jobject(nullptr));
	LINE_NUMBER(353);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(0));
	LINE_NUMBER(356);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_closed = (jint(0));
	LINE_NUMBER(359);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix = (10);
	LINE_NUMBER(362);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix = (10);
	LINE_NUMBER(365);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (jobject(nullptr));
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	clinit_java_util_Scanner$PatternLRUCache(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Scanner$PatternLRUCache);
	init_java_util_Scanner$PatternLRUCache_int(ctx, sp[1].o, (7));
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_patternCache = (jref) sp[1].o;
	LINE_NUMBER(394);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_groupSeparator = (jref) (((jobject) createStringLiteral(ctx, u8"\\,"_j)));
	LINE_NUMBER(395);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalSeparator = (jref) (((jobject) createStringLiteral(ctx, u8"\\."_j)));
	LINE_NUMBER(396);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_nanString = (jref) (((jobject) createStringLiteral(ctx, u8"NaN"_j)));
	LINE_NUMBER(397);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_infinityString = (jref) (((jobject) createStringLiteral(ctx, u8"Infinity"_j)));
	LINE_NUMBER(398);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positivePrefix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(399);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix = (jref) (((jobject) createStringLiteral(ctx, u8"\\-"_j)));
	LINE_NUMBER(400);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positiveSuffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(401);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(420);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_digits = (jref) (((jobject) createStringLiteral(ctx, u8"0123456789abcdefghijklmnopqrstuvwxyz"_j)));
	LINE_NUMBER(421);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_non0Digit = (jref) (((jobject) createStringLiteral(ctx, u8"[\\p{javaDigit}&&[^0]]"_j)));
	LINE_NUMBER(422);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX = (jint(5));
	LINE_NUMBER(532);
	if ((clinit_java_util_Scanner(ctx), (jint)SF_java_util_Scanner_$assertionsDisabled) != 0) goto label_24;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_24;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"source should not be null"_j))));
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(533);
	if ((clinit_java_util_Scanner(ctx), (jint)SF_java_util_Scanner_$assertionsDisabled) != 0) goto label_25;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_25;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pattern should not be null"_j))));
	throwException(ctx, sp[0].o);	}
label_25:;
	{
	LINE_NUMBER(534);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_source = (jref) (frame[1].o);
	LINE_NUMBER(535);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_delimPattern = (jref) (frame[2].o);
	LINE_NUMBER(536);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_CharBuffer_allocate_int_R_java_nio_CharBuffer(ctx, (1024));
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(537);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_delimPattern;
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[1].o, sp[2].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_matcher = (jref) sp[1].o;
	LINE_NUMBER(539);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_useTransparentBounds_boolean_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_useTransparentBounds_boolean_R_java_util_regex_Matcher])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(540);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_useAnchoringBounds_boolean_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_useAnchoringBounds_boolean_R_java_util_regex_Matcher])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	clinit_java_util_Locale$Category(ctx);
	sp[1].o = (jobject)SF_java_util_Locale$Category_FORMAT;
	sp[1].o = (jobject)SM_java_util_Locale_getDefault_java_util_Locale$Category_R_java_util_Locale(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_lang_Readable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"source"_j))));
	sp[1].o = checkCast(ctx, &class_java_lang_Readable, sp[1].o);
	clinit_java_util_Scanner(ctx);
	sp[2].o = (jobject)SF_java_util_Scanner_WHITESPACE_PATTERN;
	init_java_util_Scanner_java_lang_Readable_java_util_regex_Pattern(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(564);
	sp[0].o = frame[0].o;
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[1].o, (frame[1].o));
	clinit_java_util_Scanner(ctx);
	sp[2].o = (jobject)SF_java_util_Scanner_WHITESPACE_PATTERN;
	init_java_util_Scanner_java_lang_Readable_java_util_regex_Pattern(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_io_InputStream_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(579);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"source"_j))));
	sp[1].o = checkCast(ctx, &class_java_io_InputStream, sp[1].o);
	sp[2].o = (jobject)SM_java_util_Scanner_toCharset_java_lang_String_R_java_nio_charset_Charset(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_java_util_Scanner_makeReadable_java_io_InputStream_java_nio_charset_Charset_R_java_lang_Readable(ctx, sp[1].o, sp[2].o);
	clinit_java_util_Scanner(ctx);
	sp[2].o = (jobject)SF_java_util_Scanner_WHITESPACE_PATTERN;
	init_java_util_Scanner_java_lang_Readable_java_util_regex_Pattern(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Scanner_toCharset_java_lang_String_R_java_nio_charset_Charset(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:toCharset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"charsetName"_j))));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_nio_charset_IllegalCharsetNameException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_nio_charset_UnsupportedCharsetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)SM_java_nio_charset_Charset_forName_java_lang_String_R_java_nio_charset_Charset(ctx, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(592);
	frame[1].o = sp[0].o;
	LINE_NUMBER(594);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Scanner_makeReadable_java_io_InputStream_java_nio_charset_Charset_R_java_lang_Readable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:makeReadable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(599);
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_io_File(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(612);
	sp[0].o = frame[0].o;
	clinit_java_io_FileInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_FileInputStream);
	init_java_io_FileInputStream_java_io_File(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel])(ctx, sp[1].o);
	init_java_util_Scanner_java_nio_channels_ReadableByteChannel(ctx, sp[0].o, (checkCast(ctx, &class_java_nio_channels_ReadableByteChannel, sp[1].o)));
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_io_File_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(630);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	sp[1].o = checkCast(ctx, &class_java_io_File, sp[1].o);
	sp[2].o = (jobject)SM_java_util_Scanner_toDecoder_java_lang_String_R_java_nio_charset_CharsetDecoder(ctx, (frame[2].o));
	init_java_util_Scanner_java_io_File_java_nio_charset_CharsetDecoder(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_io_File_java_nio_charset_CharsetDecoder(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(636);
	sp[0].o = frame[0].o;
	clinit_java_io_FileInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_FileInputStream);
	init_java_io_FileInputStream_java_io_File(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_R_java_lang_Readable(ctx, (checkCast(ctx, &class_java_nio_channels_ReadableByteChannel, sp[1].o)), (frame[2].o));
	init_java_util_Scanner_java_lang_Readable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Scanner_toDecoder_java_lang_String_R_java_nio_charset_CharsetDecoder(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:toDecoder", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"charsetName"_j))));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_nio_charset_IllegalCharsetNameException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_nio_charset_UnsupportedCharsetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)SM_java_nio_charset_Charset_forName_java_lang_String_R_java_nio_charset_Charset(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder])(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(643);
	frame[1].o = sp[0].o;
	LINE_NUMBER(644);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (frame[0].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_R_java_lang_Readable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:makeReadable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)SM_java_nio_channels_Channels_newReader_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_int_R_java_io_Reader(ctx, (frame[0].o), (frame[1].o), (jint(-1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_nio_file_Path(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(668);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(338);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed = (jint(0));
	LINE_NUMBER(341);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(0));
	LINE_NUMBER(344);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped = (jint(0));
	LINE_NUMBER(347);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition = (jint(-1));
	LINE_NUMBER(350);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache = (jref) (jobject(nullptr));
	LINE_NUMBER(353);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(0));
	LINE_NUMBER(356);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_closed = (jint(0));
	LINE_NUMBER(359);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix = (10);
	LINE_NUMBER(362);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix = (10);
	LINE_NUMBER(365);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (jobject(nullptr));
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	clinit_java_util_Scanner$PatternLRUCache(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Scanner$PatternLRUCache);
	init_java_util_Scanner$PatternLRUCache_int(ctx, sp[1].o, (7));
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_patternCache = (jref) sp[1].o;
	LINE_NUMBER(394);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_groupSeparator = (jref) (((jobject) createStringLiteral(ctx, u8"\\,"_j)));
	LINE_NUMBER(395);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalSeparator = (jref) (((jobject) createStringLiteral(ctx, u8"\\."_j)));
	LINE_NUMBER(396);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_nanString = (jref) (((jobject) createStringLiteral(ctx, u8"NaN"_j)));
	LINE_NUMBER(397);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_infinityString = (jref) (((jobject) createStringLiteral(ctx, u8"Infinity"_j)));
	LINE_NUMBER(398);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positivePrefix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(399);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix = (jref) (((jobject) createStringLiteral(ctx, u8"\\-"_j)));
	LINE_NUMBER(400);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positiveSuffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(401);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(420);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_digits = (jref) (((jobject) createStringLiteral(ctx, u8"0123456789abcdefghijklmnopqrstuvwxyz"_j)));
	LINE_NUMBER(421);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_non0Digit = (jref) (((jobject) createStringLiteral(ctx, u8"[\\p{javaDigit}&&[^0]]"_j)));
	LINE_NUMBER(422);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX = (jint(5));
	LINE_NUMBER(669);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_nio_file_Path_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(690);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	sp[1].o = checkCast(ctx, &class_java_nio_file_Path, sp[1].o);
	sp[2].o = (jobject)SM_java_util_Scanner_toCharset_java_lang_String_R_java_nio_charset_Charset(ctx, (frame[2].o));
	init_java_util_Scanner_java_nio_file_Path_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(691);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_nio_file_Path_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(693);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(338);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed = (jint(0));
	LINE_NUMBER(341);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(0));
	LINE_NUMBER(344);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped = (jint(0));
	LINE_NUMBER(347);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition = (jint(-1));
	LINE_NUMBER(350);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache = (jref) (jobject(nullptr));
	LINE_NUMBER(353);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(0));
	LINE_NUMBER(356);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_closed = (jint(0));
	LINE_NUMBER(359);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix = (10);
	LINE_NUMBER(362);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix = (10);
	LINE_NUMBER(365);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (jobject(nullptr));
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	clinit_java_util_Scanner$PatternLRUCache(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Scanner$PatternLRUCache);
	init_java_util_Scanner$PatternLRUCache_int(ctx, sp[1].o, (7));
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_patternCache = (jref) sp[1].o;
	LINE_NUMBER(394);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_groupSeparator = (jref) (((jobject) createStringLiteral(ctx, u8"\\,"_j)));
	LINE_NUMBER(395);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalSeparator = (jref) (((jobject) createStringLiteral(ctx, u8"\\."_j)));
	LINE_NUMBER(396);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_nanString = (jref) (((jobject) createStringLiteral(ctx, u8"NaN"_j)));
	LINE_NUMBER(397);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_infinityString = (jref) (((jobject) createStringLiteral(ctx, u8"Infinity"_j)));
	LINE_NUMBER(398);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positivePrefix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(399);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix = (jref) (((jobject) createStringLiteral(ctx, u8"\\-"_j)));
	LINE_NUMBER(400);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positiveSuffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(401);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(420);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_digits = (jref) (((jobject) createStringLiteral(ctx, u8"0123456789abcdefghijklmnopqrstuvwxyz"_j)));
	LINE_NUMBER(421);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_non0Digit = (jref) (((jobject) createStringLiteral(ctx, u8"[\\p{javaDigit}&&[^0]]"_j)));
	LINE_NUMBER(422);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX = (jint(5));
	LINE_NUMBER(694);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(705);
	sp[0].o = frame[0].o;
	clinit_java_io_StringReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_StringReader);
	init_java_io_StringReader_java_lang_String(ctx, sp[1].o, (frame[1].o));
	clinit_java_util_Scanner(ctx);
	sp[2].o = (jobject)SF_java_util_Scanner_WHITESPACE_PATTERN;
	init_java_util_Scanner_java_lang_Readable_java_util_regex_Pattern(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(706);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_nio_channels_ReadableByteChannel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(717);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"source"_j))));
	sp[1].o = (jobject)SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_R_java_lang_Readable(ctx, (checkCast(ctx, &class_java_nio_channels_ReadableByteChannel, sp[1].o)));
	clinit_java_util_Scanner(ctx);
	sp[2].o = (jobject)SF_java_util_Scanner_WHITESPACE_PATTERN;
	init_java_util_Scanner_java_lang_Readable_java_util_regex_Pattern(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(719);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_R_java_lang_Readable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:makeReadable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(722);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_charset_Charset_defaultCharset_R_java_nio_charset_Charset(ctx);
	sp[1].o = (jobject)((func_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_R_java_lang_Readable(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_Scanner_java_nio_channels_ReadableByteChannel_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(737);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"source"_j))));
	sp[1].o = checkCast(ctx, &class_java_nio_channels_ReadableByteChannel, sp[1].o);
	sp[2].o = (jobject)SM_java_util_Scanner_toDecoder_java_lang_String_R_java_nio_charset_CharsetDecoder(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_R_java_lang_Readable(ctx, sp[1].o, sp[2].o);
	clinit_java_util_Scanner(ctx);
	sp[2].o = (jobject)SF_java_util_Scanner_WHITESPACE_PATTERN;
	init_java_util_Scanner_java_lang_Readable_java_util_regex_Pattern(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_saveState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:saveState", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(744);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition = ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(745);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_revertState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:revertState", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(748);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position = ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition);
	LINE_NUMBER(749);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition = (jint(-1));
	LINE_NUMBER(750);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped = (jint(0));
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_revertState_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:revertState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(754);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position = ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition);
	LINE_NUMBER(755);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition = (jint(-1));
	LINE_NUMBER(756);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped = (jint(0));
	LINE_NUMBER(757);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_cacheResult(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:cacheResult", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(761);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((func_java_util_regex_Matcher_group_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_group_R_java_lang_String])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_hasNextResult = (jref) sp[1].o;
	LINE_NUMBER(762);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_hasNextPosition = temp0;
	LINE_NUMBER(763);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((func_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_hasNextPattern = (jref) sp[1].o;
	LINE_NUMBER(764);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_cacheResult_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:cacheResult", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(767);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult = (jref) (frame[1].o);
	LINE_NUMBER(768);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_hasNextPosition = temp0;
	LINE_NUMBER(769);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((func_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_hasNextPattern = (jref) sp[1].o;
	LINE_NUMBER(770);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_clearCaches(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:clearCaches", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(774);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextPattern = (jref) (jobject(nullptr));
	LINE_NUMBER(775);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache = (jref) (jobject(nullptr));
	LINE_NUMBER(776);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_getCachedResult_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:getCachedResult", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(780);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position = ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextPosition);
	LINE_NUMBER(781);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextPattern = (jref) (jobject(nullptr));
	LINE_NUMBER(782);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache = (jref) (jobject(nullptr));
	LINE_NUMBER(783);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_useTypeCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:useTypeCache", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(788);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_closed) == 0) goto label_1;
	}
	{
	LINE_NUMBER(789);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Scanner closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(790);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position = ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextPosition);
	LINE_NUMBER(791);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextPattern = (jref) (jobject(nullptr));
	LINE_NUMBER(792);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache = (jref) (jobject(nullptr));
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_readInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:readInput", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(797);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_capacity_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_5;
	}
	{
	LINE_NUMBER(798);
	jint temp0 = (jint)M_java_util_Scanner_makeSpace_R_boolean(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(800);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(801);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(802);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp2 = (jint)((func_java_nio_CharBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_CharBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(804);
	frame[2].i = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(806);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_source;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)((func_java_lang_Readable_read_java_nio_CharBuffer_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Readable, INDEX_java_lang_Readable_read_java_nio_CharBuffer_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(810);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(807);
	frame[3].o = sp[0].o;
	LINE_NUMBER(808);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_lastException = (jref) (frame[3].o);
	LINE_NUMBER(809);
	frame[2].i = (jint(-1));
	}
label_10:;
	{
	LINE_NUMBER(811);
	if ((frame[2].i) != (jint(-1))) goto label_13;
	}
	{
	LINE_NUMBER(812);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed = (jint(1));
	LINE_NUMBER(813);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(815);
	if ((frame[2].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(816);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(818);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(819);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(820);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_makeSpace_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:makeSpace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(825);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	LINE_NUMBER(826);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(827);
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].i = ((java_util_Scanner *) NULL_CHECK(sp[-1].o))->F_savedScannerPosition;
label_4:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(828);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(830);
	if ((frame[1].i) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(831);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_CharBuffer_compact_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_compact_R_java_nio_CharBuffer])(ctx, sp[0].o);
	LINE_NUMBER(832);
	M_java_util_Scanner_translateSavedIndexes_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(833);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position) - (frame[1].i));
	LINE_NUMBER(834);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_CharBuffer_flip_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_flip_R_java_nio_CharBuffer])(ctx, sp[0].o);
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)((func_java_nio_CharBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_capacity_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 * (jint(2)));
	LINE_NUMBER(839);
	sp[0].o = (jobject)SM_java_nio_CharBuffer_allocate_int_R_java_nio_CharBuffer(ctx, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(840);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(841);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_flip_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_CharBuffer_flip_R_java_nio_CharBuffer])(ctx, (frame[3].o));
	LINE_NUMBER(842);
	M_java_util_Scanner_translateSavedIndexes_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(843);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position) - (frame[1].i));
	LINE_NUMBER(844);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[3].o);
	LINE_NUMBER(845);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_reset_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_reset_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_translateSavedIndexes_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:translateSavedIndexes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(852);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_savedScannerPosition) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(853);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_savedScannerPosition = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_savedScannerPosition) - (frame[1].i));
	}
label_1:;
	LINE_NUMBER(854);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Scanner_throwFor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:throwFor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(859);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped = (jint(0));
	LINE_NUMBER(860);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_2;
	}
	{
	LINE_NUMBER(861);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(863);
	clinit_java_util_InputMismatchException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_InputMismatchException);
	init_java_util_InputMismatchException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasTokenInBuffer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasTokenInBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(870);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(0));
	LINE_NUMBER(871);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_delimPattern;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(872);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(874);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp2 = (jint)((func_java_util_regex_Matcher_lookingAt_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_lookingAt_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_4;
	}
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_hitEnd_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_hitEnd_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) != 0) goto label_6;
	}
	{
	LINE_NUMBER(879);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	LINE_NUMBER(880);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(882);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	}
label_4:;
	{
	LINE_NUMBER(885);
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_9;
	}
	{
	LINE_NUMBER(886);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(887);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:getCompleteTokenInBuffer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(906);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(0));
	LINE_NUMBER(908);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_delimPattern;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(909);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped) != 0) goto label_3;
	}
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(911);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp2 = (jint)((func_java_util_regex_Matcher_lookingAt_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_lookingAt_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_3;
	}
	{
	LINE_NUMBER(914);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_hitEnd_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_hitEnd_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) != 0) goto label_7;
	}
	{
	LINE_NUMBER(915);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	LINE_NUMBER(916);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(919);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped = (jint(1));
	LINE_NUMBER(920);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	}
label_3:;
	{
	LINE_NUMBER(925);
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_11;
	}
	{
	LINE_NUMBER(926);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) == 0) goto label_13;
	}
	{
	LINE_NUMBER(927);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(928);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	LINE_NUMBER(929);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(937);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(938);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp2 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, sp[0].o);
	frame[2].i = temp2;
	LINE_NUMBER(939);
	if ((frame[2].i) == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[0].o);
	if (temp0 != ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position)) goto label_18;
	}
	{
	LINE_NUMBER(943);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, sp[0].o);
	frame[2].i = temp0;
	}
label_18:;
	{
	LINE_NUMBER(945);
	if ((frame[2].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(952);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_requireEnd_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_requireEnd_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_22;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) != 0) goto label_22;
	}
	{
	LINE_NUMBER(953);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	LINE_NUMBER(954);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_22:;
	{
	LINE_NUMBER(956);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(958);
	if ((frame[1].o) != nullptr) goto label_26;
	}
	{
	LINE_NUMBER(960);
	clinit_java_util_Scanner(ctx);
	sp[0].o = (jobject)SF_java_util_Scanner_FIND_ANY_PATTERN;
	frame[1].o = sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(963);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(964);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position), (frame[3].i));
	LINE_NUMBER(965);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(967);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(968);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_30:;
	{
	LINE_NUMBER(970);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_20:;
	{
	LINE_NUMBER(976);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) == 0) goto label_34;
	}
	{
	LINE_NUMBER(977);
	if ((frame[1].o) != nullptr) goto label_36;
	}
	{
	LINE_NUMBER(979);
	clinit_java_util_Scanner(ctx);
	sp[0].o = (jobject)SF_java_util_Scanner_FIND_ANY_PATTERN;
	frame[1].o = sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(982);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(983);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(984);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp2 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_40;
	}
	{
	LINE_NUMBER(985);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(986);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(987);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_40:;
	{
	LINE_NUMBER(990);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_34:;
	{
	LINE_NUMBER(995);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	LINE_NUMBER(996);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_findPatternInBuffer_java_util_regex_Pattern_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:findPatternInBuffer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1003);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(0));
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1005);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(1006);
	frame[4].i = (jint(-1));
	LINE_NUMBER(1007);
	frame[5].i = (frame[3].i);
	LINE_NUMBER(1008);
	if ((frame[2].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(1009);
	frame[4].i = (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position) + (frame[2].i));
	LINE_NUMBER(1010);
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(1011);
	frame[5].i = (frame[4].i);
	}
label_6:;
	{
	LINE_NUMBER(1013);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position), (frame[5].i));
	LINE_NUMBER(1014);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1015);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_hitEnd_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_hitEnd_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) != 0) goto label_13;
	}
	{
	LINE_NUMBER(1017);
	if ((frame[5].i) == (frame[4].i)) goto label_15;
	}
	{
	LINE_NUMBER(1019);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	LINE_NUMBER(1020);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(1023);
	if ((frame[5].i) != (frame[4].i)) goto label_13;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_requireEnd_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_requireEnd_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(1027);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(1032);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(1033);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(1036);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) == 0) goto label_21;
	}
	{
	LINE_NUMBER(1037);
	popStackFrame(ctx);
	return (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(1041);
	if ((frame[2].i) == 0) goto label_23;
	}
	{
	if ((frame[5].i) == (frame[4].i)) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(1042);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	}
label_24:;
	{
	LINE_NUMBER(1043);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_matchPatternInBuffer_java_util_regex_Pattern_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:matchPatternInBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1050);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(0));
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1052);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(1053);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp2 = (jint)((func_java_util_regex_Matcher_lookingAt_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_lookingAt_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1054);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_hitEnd_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_hitEnd_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) != 0) goto label_6;
	}
	{
	LINE_NUMBER(1056);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	LINE_NUMBER(1057);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(1059);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(1060);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(1063);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) == 0) goto label_10;
	}
	{
	LINE_NUMBER(1064);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(1067);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput = (jint(1));
	LINE_NUMBER(1068);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_ensureOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:ensureOpen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1073);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_closed) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1074);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Scanner closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(1075);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Scanner_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:close", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1093);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_closed) == 0) goto label_5;
	}
	LINE_NUMBER(1094);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_source;
	if ((isInstance(ctx, sp[0].o, &class_java_io_Closeable)) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1097);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_source;
	((func_java_io_Closeable_close) resolveInterfaceMethod(ctx, &class_java_io_Closeable, INDEX_java_io_Closeable_close, (checkCast(ctx, &class_java_io_Closeable, sp[0].o))))(ctx, (checkCast(ctx, &class_java_io_Closeable, sp[0].o)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1100);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1098);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1099);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_lastException = (jref) (frame[1].o);
	}
label_7:;
	{
	LINE_NUMBER(1102);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed = (jint(1));
	LINE_NUMBER(1103);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_source = (jref) (jobject(nullptr));
	LINE_NUMBER(1104);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	LINE_NUMBER(1105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_ioException_R_java_io_IOException(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:ioException", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1115);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_lastException;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_delimiter_R_java_util_regex_Pattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:delimiter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1125);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_delimPattern;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_useDelimiter_java_util_regex_Pattern_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:useDelimiter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1135);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(1136);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_delimPattern = (jref) (frame[1].o);
	LINE_NUMBER(1137);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_useDelimiter_java_lang_String_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:useDelimiter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1155);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(1156);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_patternCache;
	sp[1].o = (jobject)((func_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern])(ctx, sp[1].o, (frame[1].o));
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_delimPattern = (jref) sp[1].o;
	LINE_NUMBER(1157);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_locale_R_java_util_Locale(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:locale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1170);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_locale;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:useLocale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1223);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_Scanner_radix_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:radix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1236);
	popStackFrame(ctx);
	return ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_useRadix_int_R_java_util_Scanner(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:useRadix", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1258);
	if ((frame[1].i) < (jint(2))) goto label_1;
	}
	{
	if ((frame[1].i) <= (36)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1259);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"radix:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1261);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix) != (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(1262);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_3:;
	{
	LINE_NUMBER(1263);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(1264);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix = (frame[1].i);
	LINE_NUMBER(1266);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_integerPattern = (jref) (jobject(nullptr));
	LINE_NUMBER(1267);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner_setRadix_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:setRadix", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1273);
	if ((frame[1].i) < (jint(2))) goto label_1;
	}
	{
	if ((frame[1].i) <= (36)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1274);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"radix:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1276);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix) == (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(1278);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_integerPattern = (jref) (jobject(nullptr));
	LINE_NUMBER(1279);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix = (frame[1].i);
	}
label_3:;
	LINE_NUMBER(1281);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_match_R_java_util_regex_MatchResult(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:match", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1303);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1304);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No match result available"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1305);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1316);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1317);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"java.util.Scanner"_j))));
	LINE_NUMBER(1318);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[delimiters="_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_delimPattern;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1319);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[position="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1320);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[match valid="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1321);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[need input="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1322);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[source closed="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1323);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[skipped="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1324);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[group separator="_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_groupSeparator;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1325);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[decimal separator="_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalSeparator;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1326);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[positive prefix="_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positivePrefix;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1327);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[negative prefix="_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1328);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[positive suffix="_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_positiveSuffix;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1329);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[negative suffix="_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1330);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[NaN string="_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_nanString;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1331);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[infinity string="_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_infinityString;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1332);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNext", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1345);
	M_java_util_Scanner_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(1346);
	M_java_util_Scanner_saveState(ctx, (frame[0].o));
	LINE_NUMBER(1347);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(1348);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1349);
	jint temp0 = (jint)M_java_util_Scanner_hasTokenInBuffer_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1350);
	jint temp0 = (jint)M_java_util_Scanner_revertState_boolean_R_boolean(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_6:;
	{
	LINE_NUMBER(1352);
	M_java_util_Scanner_readInput(ctx, (frame[0].o));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1354);
	jint temp0 = (jint)M_java_util_Scanner_hasTokenInBuffer_R_boolean(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1355);
	jint temp1 = (jint)M_java_util_Scanner_revertState_boolean_R_boolean(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_next_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1371);
	M_java_util_Scanner_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(1372);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	LINE_NUMBER(1373);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(1375);
	sp[0].o = (jobject)M_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String(ctx, (frame[0].o), (jobject(nullptr)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1376);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1377);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(1));
	LINE_NUMBER(1378);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped = (jint(0));
	LINE_NUMBER(1379);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(1381);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1382);
	M_java_util_Scanner_readInput(ctx, (frame[0].o));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1384);
	M_java_util_Scanner_throwFor(ctx, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(1385);
	goto label_3;

	popStackFrame(ctx);
}

void M_java_util_Scanner_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1396);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNext_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNext", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1413);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_patternCache;
	sp[1].o = (jobject)((func_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern])(ctx, sp[1].o, (frame[1].o));
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_next_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1431);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_patternCache;
	sp[1].o = (jobject)((func_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNext", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1446);
	M_java_util_Scanner_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(1447);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1448);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1449);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextPattern = (jref) (jobject(nullptr));
	LINE_NUMBER(1450);
	M_java_util_Scanner_saveState(ctx, (frame[0].o));
	LINE_NUMBER(1451);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(1454);
	sp[0].o = (jobject)M_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1455);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(1));
	LINE_NUMBER(1456);
	M_java_util_Scanner_cacheResult(ctx, (frame[0].o));
	LINE_NUMBER(1457);
	jint temp0 = (jint)M_java_util_Scanner_revertState_boolean_R_boolean(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(1459);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1460);
	M_java_util_Scanner_readInput(ctx, (frame[0].o));
	goto label_6;
	}
label_11:;
	{
	LINE_NUMBER(1462);
	jint temp0 = (jint)M_java_util_Scanner_revertState_boolean_R_boolean(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1479);
	M_java_util_Scanner_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(1480);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1481);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1483);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(1485);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextPattern;
	if (sp[0].o != (frame[1].o)) goto label_5;
	}
	{
	LINE_NUMBER(1486);
	sp[0].o = (jobject)M_java_util_Scanner_getCachedResult_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1487);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(1491);
	sp[0].o = (jobject)M_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1492);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1493);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(1));
	LINE_NUMBER(1494);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_skipped = (jint(0));
	LINE_NUMBER(1495);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_9:;
	{
	LINE_NUMBER(1497);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1498);
	M_java_util_Scanner_readInput(ctx, (frame[0].o));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(1500);
	M_java_util_Scanner_throwFor(ctx, (frame[0].o));
	}
label_15:;
	LINE_NUMBER(1501);
	goto label_7;

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextLine_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextLine", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1513);
	M_java_util_Scanner_saveState(ctx, (frame[0].o));
	LINE_NUMBER(1515);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(1516);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Scanner_linePattern_R_java_util_regex_Pattern(ctx);
	sp[0].o = (jobject)((func_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (jint(0)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1517);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1518);
	sp[0].o = (jobject)((func_java_util_Scanner_match_R_java_util_regex_MatchResult) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_match_R_java_util_regex_MatchResult])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1519);
	sp[0].o = (jobject)((func_regexodus_between_MatchResult_group_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_between_MatchResult, INDEX_regexodus_between_MatchResult_group_int_R_java_lang_String, (frame[2].o)))(ctx, (frame[2].o), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1520);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1521);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[1].o = frame[3].o;
	LINE_NUMBER(1522);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp3 = temp1 - temp2;
	LINE_NUMBER(1521);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp3);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1523);
	M_java_util_Scanner_cacheResult_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(1526);
	M_java_util_Scanner_cacheResult(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(1529);
	M_java_util_Scanner_revertState(ctx, (frame[0].o));
	LINE_NUMBER(1530);
	if ((frame[1].o) == nullptr) goto label_14;
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

jobject M_java_util_Scanner_nextLine_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextLine", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1550);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(1551);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextPattern;
	sp[1].o = (jobject)SM_java_util_Scanner_linePattern_R_java_util_regex_Pattern(ctx);
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(1552);
	sp[0].o = (jobject)M_java_util_Scanner_getCachedResult_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1553);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	LINE_NUMBER(1555);
	sp[0].o = frame[0].o;
	clinit_java_util_Scanner(ctx);
	sp[1].o = (jobject)SF_java_util_Scanner_linePattern;
	sp[0].o = (jobject)((func_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (jint(0)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1556);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1557);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No line found"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1558);
	sp[0].o = (jobject)((func_java_util_Scanner_match_R_java_util_regex_MatchResult) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_match_R_java_util_regex_MatchResult])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1559);
	sp[0].o = (jobject)((func_regexodus_between_MatchResult_group_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_between_MatchResult, INDEX_regexodus_between_MatchResult_group_int_R_java_lang_String, (frame[2].o)))(ctx, (frame[2].o), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1560);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1561);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - temp2));
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1562);
	if ((frame[1].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1563);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(1565);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_findInLine_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:findInLine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1583);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_patternCache;
	sp[1].o = (jobject)((func_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Scanner_findInLine_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_findInLine_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_findInLine_java_util_regex_Pattern_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:findInLine", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1605);
	M_java_util_Scanner_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(1606);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1607);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1608);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	LINE_NUMBER(1609);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(1611);
	frame[2].i = (jint(0));
	LINE_NUMBER(1612);
	M_java_util_Scanner_saveState(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(1614);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Scanner_separatorPattern_R_java_util_regex_Pattern(ctx);
	jint temp0 = (jint)M_java_util_Scanner_findPatternInBuffer_java_util_regex_Pattern_int_R_boolean(ctx, sp[0].o, sp[1].o, (jint(0)));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1615);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(1616);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(1618);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1619);
	M_java_util_Scanner_readInput(ctx, (frame[0].o));
	goto label_7;
	}
label_12:;
	{
	LINE_NUMBER(1621);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(1622);
	goto label_11;
	}
label_11:;
	{
	LINE_NUMBER(1625);
	M_java_util_Scanner_revertState(ctx, (frame[0].o));
	LINE_NUMBER(1626);
	frame[3].i = ((frame[2].i) - ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position));
	LINE_NUMBER(1630);
	if ((frame[3].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(1631);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_17:;
	{
	LINE_NUMBER(1633);
	sp[0].o = (jobject)((func_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_findWithinHorizon_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:findWithinHorizon", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1652);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_patternCache;
	sp[1].o = (jobject)((func_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:findWithinHorizon", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1687);
	M_java_util_Scanner_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(1688);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1689);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1690);
	if ((frame[2].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(1691);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"horizon < 0"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1692);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	LINE_NUMBER(1693);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(1697);
	jint temp0 = (jint)M_java_util_Scanner_findPatternInBuffer_java_util_regex_Pattern_int_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1698);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(1));
	LINE_NUMBER(1699);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1701);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1702);
	M_java_util_Scanner_readInput(ctx, (frame[0].o));
	goto label_7;
	}
label_11:;
	{
	LINE_NUMBER(1706);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_skip_java_util_regex_Pattern_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:skip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1733);
	M_java_util_Scanner_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(1734);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1735);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1736);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	LINE_NUMBER(1737);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(1741);
	jint temp0 = (jint)M_java_util_Scanner_matchPatternInBuffer_java_util_regex_Pattern_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1742);
	((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matchValid = (jint(1));
	LINE_NUMBER(1743);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_end_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(1744);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(1746);
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput) == 0) goto label_10;
	}
	{
	LINE_NUMBER(1747);
	M_java_util_Scanner_readInput(ctx, (frame[0].o));
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(1749);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_skip_java_lang_String_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:skip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1766);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_patternCache;
	sp[1].o = (jobject)((func_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Scanner_skip_java_util_regex_Pattern_R_java_util_Scanner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_skip_java_util_regex_Pattern_R_java_util_Scanner])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextBoolean", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1782);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Scanner_boolPattern_R_java_util_regex_Pattern(ctx);
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_nextBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextBoolean", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1798);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	LINE_NUMBER(1799);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Scanner_boolPattern_R_java_util_regex_Pattern(ctx);
	sp[0].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextByte_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1812);
	jint temp0 = (jint)((func_java_util_Scanner_hasNextByte_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_hasNextByte_int_R_boolean])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextByte_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextByte", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1831);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1832);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(1833);
	if ((frame[2].i) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1835);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1836);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(1837);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1838);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_int_R_byte(ctx, (frame[3].o), (frame[1].i));
	sp[1].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, temp0);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_typeCache = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1841);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1839);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1840);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(1843);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbyte M_java_util_Scanner_nextByte_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1862);
	jint temp0 = (jint)((func_java_util_Scanner_nextByte_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_nextByte_int_R_byte])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_java_util_Scanner_nextByte_int_R_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextByte", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1898);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Byte)) == 0) goto label_5;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix) != (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(1900);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	jint temp0 = (jint)((func_java_lang_Byte_byteValue_R_byte) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Byte, sp[0].o)))->vtable)[VTABLE_java_lang_Byte_byteValue_R_byte])(ctx, (checkCast(ctx, &class_java_lang_Byte, sp[0].o)));
	frame[2].i = temp0;
	LINE_NUMBER(1901);
	M_java_util_Scanner_useTypeCache(ctx, (frame[0].o));
	LINE_NUMBER(1902);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_5:;
	{
	LINE_NUMBER(1904);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1905);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1908);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1909);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1910);
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1911);
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_int_R_byte(ctx, (frame[2].o), (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1912);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1913);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(1914);
	clinit_java_util_InputMismatchException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_InputMismatchException);
	sp[1].o = (jobject)((func_java_lang_NumberFormatException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_NumberFormatException_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	init_java_util_InputMismatchException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextShort_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextShort", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1928);
	jint temp0 = (jint)((func_java_util_Scanner_hasNextShort_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_hasNextShort_int_R_boolean])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextShort_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextShort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1947);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1948);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(1949);
	if ((frame[2].i) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1951);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1952);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(1953);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1954);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Short_parseShort_java_lang_String_int_R_short(ctx, (frame[3].o), (frame[1].i));
	sp[1].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, temp0);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_typeCache = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1957);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1955);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1956);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(1959);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jshort M_java_util_Scanner_nextShort_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextShort", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1978);
	jint temp0 = (jint)((func_java_util_Scanner_nextShort_int_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_nextShort_int_R_short])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jshort M_java_util_Scanner_nextShort_int_R_short(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextShort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2014);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Short)) == 0) goto label_5;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix) != (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(2016);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	jint temp0 = (jint)((func_java_lang_Short_shortValue_R_short) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Short, sp[0].o)))->vtable)[VTABLE_java_lang_Short_shortValue_R_short])(ctx, (checkCast(ctx, &class_java_lang_Short, sp[0].o)));
	frame[2].i = temp0;
	LINE_NUMBER(2017);
	M_java_util_Scanner_useTypeCache(ctx, (frame[0].o));
	LINE_NUMBER(2018);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_5:;
	{
	LINE_NUMBER(2020);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2021);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2024);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2025);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2026);
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(2027);
	jint temp0 = (jint)SM_java_lang_Short_parseShort_java_lang_String_int_R_short(ctx, (frame[2].o), (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2028);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2029);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(2030);
	clinit_java_util_InputMismatchException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_InputMismatchException);
	sp[1].o = (jobject)((func_java_lang_NumberFormatException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_NumberFormatException_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	init_java_util_InputMismatchException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextInt_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2044);
	jint temp0 = (jint)((func_java_util_Scanner_hasNextInt_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_hasNextInt_int_R_boolean])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextInt_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2063);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2064);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(2065);
	if ((frame[2].i) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2067);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2068);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(2069);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2070);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, (frame[3].o), (frame[1].i));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_typeCache = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2073);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2071);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2072);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2075);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:processIntegerToken", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2084);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[2].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_groupSeparator;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2085);
	frame[3].i = (jint(0));
	LINE_NUMBER(2086);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(2087);
	if ((frame[4].i) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2088);
	frame[3].i = (jint(1));
	LINE_NUMBER(2089);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (frame[4].i));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2091);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(2092);
	if ((frame[5].i) <= 0) goto label_8;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix;
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2093);
	frame[3].i = (jint(1));
	LINE_NUMBER(2094);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	jint temp1 = temp0 - (frame[5].i);
	sp[1].o = frame[2].o;
	LINE_NUMBER(2095);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	LINE_NUMBER(2094);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp1, temp2);
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2097);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(2098);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(2099);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_Scanner_nextInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2118);
	jint temp0 = (jint)((func_java_util_Scanner_nextInt_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_nextInt_int_R_int])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_Scanner_nextInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2154);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Integer)) == 0) goto label_5;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix) != (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(2156);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	frame[2].i = temp0;
	LINE_NUMBER(2157);
	M_java_util_Scanner_useTypeCache(ctx, (frame[0].o));
	LINE_NUMBER(2158);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_5:;
	{
	LINE_NUMBER(2160);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2161);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2164);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2165);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2166);
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(2167);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, (frame[2].o), (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2168);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2169);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(2170);
	clinit_java_util_InputMismatchException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_InputMismatchException);
	sp[1].o = (jobject)((func_java_lang_NumberFormatException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_NumberFormatException_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	init_java_util_InputMismatchException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextLong_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextLong", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2184);
	jint temp0 = (jint)((func_java_util_Scanner_hasNextLong_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_hasNextLong_int_R_boolean])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextLong_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2203);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2204);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(2205);
	if ((frame[2].i) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2207);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2208);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(2209);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2210);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_int_R_long(ctx, (frame[3].o), (frame[1].i));
	sp[1].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_typeCache = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2213);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2211);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2212);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2215);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jlong M_java_util_Scanner_nextLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextLong", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2234);
	jlong temp0 = (jlong)((func_java_util_Scanner_nextLong_int_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_nextLong_int_R_long])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_Scanner_nextLong_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2270);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Long)) == 0) goto label_5;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix) != (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(2272);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	jlong temp0 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Long, sp[0].o)))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Long, sp[0].o)));
	frame[2].l = temp0;
	LINE_NUMBER(2273);
	M_java_util_Scanner_useTypeCache(ctx, (frame[0].o));
	LINE_NUMBER(2274);
	popStackFrame(ctx);
	return (frame[2].l);
	}
label_5:;
	{
	LINE_NUMBER(2276);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2277);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2279);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2280);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2281);
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(2282);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_int_R_long(ctx, (frame[2].o), (frame[1].i));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2283);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2284);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(2285);
	clinit_java_util_InputMismatchException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_InputMismatchException);
	sp[1].o = (jobject)((func_java_lang_NumberFormatException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_NumberFormatException_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	init_java_util_InputMismatchException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:processFloatToken", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2298);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_groupSeparator;
	sp[0].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2299);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalSeparator;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\\."_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(2300);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_decimalSeparator;
	sp[0].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2301);
	frame[3].i = (jint(0));
	LINE_NUMBER(2302);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(2303);
	if ((frame[4].i) <= 0) goto label_6;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativePrefix;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(2304);
	frame[3].i = (jint(1));
	LINE_NUMBER(2305);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (frame[4].i));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2307);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(2308);
	if ((frame[5].i) <= 0) goto label_10;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_negativeSuffix;
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(2309);
	frame[3].i = (jint(1));
	LINE_NUMBER(2310);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	jint temp1 = temp0 - (frame[5].i);
	sp[1].o = frame[2].o;
	LINE_NUMBER(2311);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	LINE_NUMBER(2310);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp1, temp2);
	frame[2].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(2313);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_nanString;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(2314);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"NaN"_j)));
	}
label_15:;
	{
	LINE_NUMBER(2315);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_infinityString;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(2316);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"Infinity"_j)));
	}
label_17:;
	{
	LINE_NUMBER(2317);
	if ((frame[3].i) == 0) goto label_19;
	}
	{
	LINE_NUMBER(2318);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(2321);
	clinit_java_util_Scanner(ctx);
	sp[0].o = (jobject)SF_java_util_Scanner_NON_ASCII_DIGIT;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2322);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(2323);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(2324);
	frame[8].i = (jint(0));
	}
label_25:;
	{
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_26;
	}
	{
	LINE_NUMBER(2325);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[8].i));
	frame[9].i = temp0;
	LINE_NUMBER(2326);
	jint temp1 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, (frame[9].i));
	if (temp1 == 0) goto label_29;
	}
	{
	LINE_NUMBER(2327);
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[9].i), (10));
	frame[10].i = temp0;
	LINE_NUMBER(2328);
	if ((frame[10].i) == (jint(-1))) goto label_32;
	}
	{
	LINE_NUMBER(2329);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[7].o), (frame[10].i));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(2331);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (frame[9].i));
	}
label_34:;
	LINE_NUMBER(2332);
	goto label_35;
label_29:;
	{
	LINE_NUMBER(2333);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (frame[9].i));
	}
label_35:;
	{
	LINE_NUMBER(2324);
	INST_IINC(8, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(2336);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[7].o));
	frame[2].o = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(2339);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextFloat_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2352);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (10));
	LINE_NUMBER(2353);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_floatPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(2354);
	if ((frame[1].i) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2356);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp[0].o = (jobject)M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2357);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_typeCache = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2360);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2358);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2359);
	frame[1].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2362);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jfloat M_java_util_Scanner_nextFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2394);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Float)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2395);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)));
	frame[1].f = temp0;
	LINE_NUMBER(2396);
	M_java_util_Scanner_useTypeCache(ctx, (frame[0].o));
	LINE_NUMBER(2397);
	popStackFrame(ctx);
	return (frame[1].f);
	}
label_5:;
	{
	LINE_NUMBER(2399);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (10));
	LINE_NUMBER(2400);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2402);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)M_java_util_Scanner_floatPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2403);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2404);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(2405);
	clinit_java_util_InputMismatchException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_InputMismatchException);
	sp[1].o = (jobject)((func_java_lang_NumberFormatException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_NumberFormatException_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	init_java_util_InputMismatchException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextDouble_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextDouble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2419);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (10));
	LINE_NUMBER(2420);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_floatPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(2421);
	if ((frame[1].i) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2423);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp[0].o = (jobject)M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2424);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_typeCache = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2427);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2425);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2426);
	frame[1].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2429);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jdouble M_java_util_Scanner_nextDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextDouble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2461);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Double)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2462);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	jdouble temp0 = (jdouble)((func_java_lang_Double_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Double, sp[0].o)))->vtable)[VTABLE_java_lang_Double_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Double, sp[0].o)));
	frame[1].d = temp0;
	LINE_NUMBER(2463);
	M_java_util_Scanner_useTypeCache(ctx, (frame[0].o));
	LINE_NUMBER(2464);
	popStackFrame(ctx);
	return (frame[1].d);
	}
label_5:;
	{
	LINE_NUMBER(2466);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (10));
	LINE_NUMBER(2467);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2470);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)M_java_util_Scanner_floatPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, sp[0].o);
	sp[0].d = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2471);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2472);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(2473);
	clinit_java_util_InputMismatchException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_InputMismatchException);
	sp[1].o = (jobject)((func_java_lang_NumberFormatException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_NumberFormatException_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	init_java_util_InputMismatchException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextBigInteger_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextBigInteger", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2490);
	jint temp0 = (jint)((func_java_util_Scanner_hasNextBigInteger_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_hasNextBigInteger_int_R_boolean])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextBigInteger_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextBigInteger", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2510);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2511);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(2512);
	if ((frame[2].i) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2514);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2515);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(2516);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2517);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_java_lang_String_int(ctx, sp[1].o, (frame[3].o), (frame[1].i));
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_typeCache = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2520);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2518);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2519);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2522);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_nextBigInteger_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextBigInteger", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2542);
	sp[0].o = (jobject)((func_java_util_Scanner_nextBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_nextBigInteger_int_R_java_math_BigInteger])(ctx, (frame[0].o), ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_defaultRadix));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_nextBigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextBigInteger", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2573);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if ((isInstance(ctx, sp[0].o, &class_java_math_BigInteger)) == 0) goto label_5;
	}
	{
	if (((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_radix) != (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(2575);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	frame[2].o = (checkCast(ctx, &class_java_math_BigInteger, sp[0].o));
	LINE_NUMBER(2576);
	M_java_util_Scanner_useTypeCache(ctx, (frame[0].o));
	LINE_NUMBER(2577);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(2579);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(2580);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2583);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2584);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_SIMPLE_GROUP_INDEX));
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2585);
	sp[0].o = (jobject)M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(2586);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_java_lang_String_int(ctx, sp[0].o, (frame[2].o), (frame[1].i));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2587);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2588);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(2589);
	clinit_java_util_InputMismatchException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_InputMismatchException);
	sp[1].o = (jobject)((func_java_lang_NumberFormatException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_NumberFormatException_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	init_java_util_InputMismatchException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner_hasNextBigDecimal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:hasNextBigDecimal", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2604);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (10));
	LINE_NUMBER(2605);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_util_Scanner_decimalPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(2606);
	if ((frame[1].i) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2608);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_hasNextResult;
	sp[0].o = (jobject)M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2609);
	sp[0].o = frame[0].o;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_lang_String(ctx, sp[1].o, (frame[2].o));
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_typeCache = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2612);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2610);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2611);
	frame[1].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2614);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_nextBigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:nextBigDecimal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2639);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	if ((isInstance(ctx, sp[0].o, &class_java_math_BigDecimal)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2640);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_typeCache;
	frame[1].o = (checkCast(ctx, &class_java_math_BigDecimal, sp[0].o));
	LINE_NUMBER(2641);
	M_java_util_Scanner_useTypeCache(ctx, (frame[0].o));
	LINE_NUMBER(2642);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(2644);
	M_java_util_Scanner_setRadix_int(ctx, (frame[0].o), (10));
	LINE_NUMBER(2645);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2648);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)M_java_util_Scanner_decimalPattern_R_java_util_regex_Pattern(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2649);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_lang_String(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2650);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2651);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_java_util_regex_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_regex_Matcher_start_R_int])(ctx, sp[1].o);
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	LINE_NUMBER(2652);
	clinit_java_util_InputMismatchException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_InputMismatchException);
	sp[1].o = (jobject)((func_java_lang_NumberFormatException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_NumberFormatException_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	init_java_util_InputMismatchException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_reset_R_java_util_Scanner(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2680);
	sp[0].o = frame[0].o;
	clinit_java_util_Scanner(ctx);
	sp[1].o = (jobject)SF_java_util_Scanner_WHITESPACE_PATTERN;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_delimPattern = (jref) sp[1].o;
	LINE_NUMBER(2681);
	sp[0].o = frame[0].o;
	clinit_java_util_Locale$Category(ctx);
	sp[1].o = (jobject)SF_java_util_Locale$Category_FORMAT;
	sp[1].o = (jobject)SM_java_util_Locale_getDefault_java_util_Locale$Category_R_java_util_Locale(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2682);
	sp[0].o = (jobject)((func_java_util_Scanner_useRadix_int_R_java_util_Scanner) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_useRadix_int_R_java_util_Scanner])(ctx, (frame[0].o), (10));
	LINE_NUMBER(2683);
	M_java_util_Scanner_clearCaches(ctx, (frame[0].o));
	LINE_NUMBER(2684);
	sp[0].o = frame[0].o;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(2685);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((func_java_util_Scanner_next_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner_next_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_Scanner_access$000_java_util_Scanner(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(308);
	M_java_util_Scanner_ensureOpen(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Scanner_access$102_java_util_Scanner_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$102", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_matchValid = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_matcher;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Scanner_access$300_java_util_Scanner_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_needInput);
	}

	popStackFrame(ctx);
}

void SM_java_util_Scanner_access$400_java_util_Scanner(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(308);
	M_java_util_Scanner_readInput(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Scanner_access$500_java_util_Scanner_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_position);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Scanner_access$600_java_util_Scanner_R_java_nio_CharBuffer(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$600", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_buf;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Scanner_access$700_java_util_Scanner_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$700", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return ((jint)((java_util_Scanner *) NULL_CHECK((frame[0].o)))->F_sourceClosed);
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Scanner_access$302_java_util_Scanner_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$302", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_needInput = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Scanner_access$508_java_util_Scanner_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$508", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = (temp0 + (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Scanner_access$502_java_util_Scanner_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:access$502", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((java_util_Scanner *) NULL_CHECK(sp[0].o))->F_position = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_util_Scanner(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Scanner_BUFFER_SIZE = jint(1024);
	SF_java_util_Scanner_BOOLEAN_PATTERN = ((jobject) createStringLiteral(ctx, u8"true|false"_j));
	SF_java_util_Scanner_LINE_SEPARATOR_PATTERN = ((jobject) createStringLiteral(ctx, u8"\r\n|[\n\r\u2028\u2029\u0085]"_j));
	SF_java_util_Scanner_LINE_PATTERN = ((jobject) createStringLiteral(ctx, u8".*(\r\n|[\n\r\u2028\u2029\u0085])|.+$"_j));
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner(ctx);
	{
	LINE_NUMBER(308);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_util_Scanner)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_util_Scanner)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_java_util_Scanner(ctx);
	SF_java_util_Scanner_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(379);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"\\p{javaWhitespace}+"_j))));
	clinit_java_util_Scanner(ctx);
	SF_java_util_Scanner_WHITESPACE_PATTERN = sp[0].o;
	LINE_NUMBER(383);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"(?s).*"_j))));
	clinit_java_util_Scanner(ctx);
	SF_java_util_Scanner_FIND_ANY_PATTERN = sp[0].o;
	LINE_NUMBER(386);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"[\\p{javaDigit}&&[^0-9]]"_j))));
	clinit_java_util_Scanner(ctx);
	SF_java_util_Scanner_NON_ASCII_DIGIT = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Scanner[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Scanner_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Scanner_hasNext_R_boolean,
	(void *) M_java_util_Scanner_next_R_java_lang_Object,
	(void *) M_java_util_Scanner_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Scanner_close,
	(void *) M_java_util_Scanner_buildIntegerPatternString_R_java_lang_String,
	(void *) M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern,
	(void *) M_java_util_Scanner_buildFloatAndDecimalPattern,
	(void *) M_java_util_Scanner_floatPattern_R_java_util_regex_Pattern,
	(void *) M_java_util_Scanner_decimalPattern_R_java_util_regex_Pattern,
	(void *) M_java_util_Scanner_saveState,
	(void *) M_java_util_Scanner_revertState,
	(void *) M_java_util_Scanner_revertState_boolean_R_boolean,
	(void *) M_java_util_Scanner_cacheResult,
	(void *) M_java_util_Scanner_cacheResult_java_lang_String,
	(void *) M_java_util_Scanner_clearCaches,
	(void *) M_java_util_Scanner_getCachedResult_R_java_lang_String,
	(void *) M_java_util_Scanner_useTypeCache,
	(void *) M_java_util_Scanner_readInput,
	(void *) M_java_util_Scanner_makeSpace_R_boolean,
	(void *) M_java_util_Scanner_translateSavedIndexes_int,
	(void *) M_java_util_Scanner_throwFor,
	(void *) M_java_util_Scanner_hasTokenInBuffer_R_boolean,
	(void *) M_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String,
	(void *) M_java_util_Scanner_findPatternInBuffer_java_util_regex_Pattern_int_R_boolean,
	(void *) M_java_util_Scanner_matchPatternInBuffer_java_util_regex_Pattern_R_boolean,
	(void *) M_java_util_Scanner_ensureOpen,
	(void *) M_java_util_Scanner_ioException_R_java_io_IOException,
	(void *) M_java_util_Scanner_delimiter_R_java_util_regex_Pattern,
	(void *) M_java_util_Scanner_useDelimiter_java_util_regex_Pattern_R_java_util_Scanner,
	(void *) M_java_util_Scanner_useDelimiter_java_lang_String_R_java_util_Scanner,
	(void *) M_java_util_Scanner_locale_R_java_util_Locale,
	(void *) M_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner,
	(void *) M_java_util_Scanner_radix_R_int,
	(void *) M_java_util_Scanner_useRadix_int_R_java_util_Scanner,
	(void *) M_java_util_Scanner_setRadix_int,
	(void *) M_java_util_Scanner_match_R_java_util_regex_MatchResult,
	(void *) M_java_util_Scanner_next_R_java_lang_String,
	(void *) M_java_util_Scanner_hasNext_java_lang_String_R_boolean,
	(void *) M_java_util_Scanner_next_java_lang_String_R_java_lang_String,
	(void *) M_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean,
	(void *) M_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String,
	(void *) M_java_util_Scanner_hasNextLine_R_boolean,
	(void *) M_java_util_Scanner_nextLine_R_java_lang_String,
	(void *) M_java_util_Scanner_findInLine_java_lang_String_R_java_lang_String,
	(void *) M_java_util_Scanner_findInLine_java_util_regex_Pattern_R_java_lang_String,
	(void *) M_java_util_Scanner_findWithinHorizon_java_lang_String_int_R_java_lang_String,
	(void *) M_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String,
	(void *) M_java_util_Scanner_skip_java_util_regex_Pattern_R_java_util_Scanner,
	(void *) M_java_util_Scanner_skip_java_lang_String_R_java_util_Scanner,
	(void *) M_java_util_Scanner_hasNextBoolean_R_boolean,
	(void *) M_java_util_Scanner_nextBoolean_R_boolean,
	(void *) M_java_util_Scanner_hasNextByte_R_boolean,
	(void *) M_java_util_Scanner_hasNextByte_int_R_boolean,
	(void *) M_java_util_Scanner_nextByte_R_byte,
	(void *) M_java_util_Scanner_nextByte_int_R_byte,
	(void *) M_java_util_Scanner_hasNextShort_R_boolean,
	(void *) M_java_util_Scanner_hasNextShort_int_R_boolean,
	(void *) M_java_util_Scanner_nextShort_R_short,
	(void *) M_java_util_Scanner_nextShort_int_R_short,
	(void *) M_java_util_Scanner_hasNextInt_R_boolean,
	(void *) M_java_util_Scanner_hasNextInt_int_R_boolean,
	(void *) M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String,
	(void *) M_java_util_Scanner_nextInt_R_int,
	(void *) M_java_util_Scanner_nextInt_int_R_int,
	(void *) M_java_util_Scanner_hasNextLong_R_boolean,
	(void *) M_java_util_Scanner_hasNextLong_int_R_boolean,
	(void *) M_java_util_Scanner_nextLong_R_long,
	(void *) M_java_util_Scanner_nextLong_int_R_long,
	(void *) M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String,
	(void *) M_java_util_Scanner_hasNextFloat_R_boolean,
	(void *) M_java_util_Scanner_nextFloat_R_float,
	(void *) M_java_util_Scanner_hasNextDouble_R_boolean,
	(void *) M_java_util_Scanner_nextDouble_R_double,
	(void *) M_java_util_Scanner_hasNextBigInteger_R_boolean,
	(void *) M_java_util_Scanner_hasNextBigInteger_int_R_boolean,
	(void *) M_java_util_Scanner_nextBigInteger_R_java_math_BigInteger,
	(void *) M_java_util_Scanner_nextBigInteger_int_R_java_math_BigInteger,
	(void *) M_java_util_Scanner_hasNextBigDecimal_R_boolean,
	(void *) M_java_util_Scanner_nextBigDecimal_R_java_math_BigDecimal,
	(void *) M_java_util_Scanner_reset_R_java_util_Scanner,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "close", "()V" },
	{ "buildIntegerPatternString", "()Ljava/lang/String;" },
	{ "integerPattern", "()Ljava/util/regex/Pattern;" },
	{ "buildFloatAndDecimalPattern", "()V" },
	{ "floatPattern", "()Ljava/util/regex/Pattern;" },
	{ "decimalPattern", "()Ljava/util/regex/Pattern;" },
	{ "saveState", "()V" },
	{ "revertState", "()V" },
	{ "revertState", "(Z)Z" },
	{ "cacheResult", "()V" },
	{ "cacheResult", "(Ljava/lang/String;)V" },
	{ "clearCaches", "()V" },
	{ "getCachedResult", "()Ljava/lang/String;" },
	{ "useTypeCache", "()V" },
	{ "readInput", "()V" },
	{ "makeSpace", "()Z" },
	{ "translateSavedIndexes", "(I)V" },
	{ "throwFor", "()V" },
	{ "hasTokenInBuffer", "()Z" },
	{ "getCompleteTokenInBuffer", "(Ljava/util/regex/Pattern;)Ljava/lang/String;" },
	{ "findPatternInBuffer", "(Ljava/util/regex/Pattern;I)Z" },
	{ "matchPatternInBuffer", "(Ljava/util/regex/Pattern;)Z" },
	{ "ensureOpen", "()V" },
	{ "ioException", "()Ljava/io/IOException;" },
	{ "delimiter", "()Ljava/util/regex/Pattern;" },
	{ "useDelimiter", "(Ljava/util/regex/Pattern;)Ljava/util/Scanner;" },
	{ "useDelimiter", "(Ljava/lang/String;)Ljava/util/Scanner;" },
	{ "locale", "()Ljava/util/Locale;" },
	{ "useLocale", "(Ljava/util/Locale;)Ljava/util/Scanner;" },
	{ "radix", "()I" },
	{ "useRadix", "(I)Ljava/util/Scanner;" },
	{ "setRadix", "(I)V" },
	{ "match", "()Ljava/util/regex/MatchResult;" },
	{ "next", "()Ljava/lang/String;" },
	{ "hasNext", "(Ljava/lang/String;)Z" },
	{ "next", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "hasNext", "(Ljava/util/regex/Pattern;)Z" },
	{ "next", "(Ljava/util/regex/Pattern;)Ljava/lang/String;" },
	{ "hasNextLine", "()Z" },
	{ "nextLine", "()Ljava/lang/String;" },
	{ "findInLine", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "findInLine", "(Ljava/util/regex/Pattern;)Ljava/lang/String;" },
	{ "findWithinHorizon", "(Ljava/lang/String;I)Ljava/lang/String;" },
	{ "findWithinHorizon", "(Ljava/util/regex/Pattern;I)Ljava/lang/String;" },
	{ "skip", "(Ljava/util/regex/Pattern;)Ljava/util/Scanner;" },
	{ "skip", "(Ljava/lang/String;)Ljava/util/Scanner;" },
	{ "hasNextBoolean", "()Z" },
	{ "nextBoolean", "()Z" },
	{ "hasNextByte", "()Z" },
	{ "hasNextByte", "(I)Z" },
	{ "nextByte", "()B" },
	{ "nextByte", "(I)B" },
	{ "hasNextShort", "()Z" },
	{ "hasNextShort", "(I)Z" },
	{ "nextShort", "()S" },
	{ "nextShort", "(I)S" },
	{ "hasNextInt", "()Z" },
	{ "hasNextInt", "(I)Z" },
	{ "processIntegerToken", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "nextInt", "()I" },
	{ "nextInt", "(I)I" },
	{ "hasNextLong", "()Z" },
	{ "hasNextLong", "(I)Z" },
	{ "nextLong", "()J" },
	{ "nextLong", "(I)J" },
	{ "processFloatToken", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "hasNextFloat", "()Z" },
	{ "nextFloat", "()F" },
	{ "hasNextDouble", "()Z" },
	{ "nextDouble", "()D" },
	{ "hasNextBigInteger", "()Z" },
	{ "hasNextBigInteger", "(I)Z" },
	{ "nextBigInteger", "()Ljava/math/BigInteger;" },
	{ "nextBigInteger", "(I)Ljava/math/BigInteger;" },
	{ "hasNextBigDecimal", "()Z" },
	{ "nextBigDecimal", "()Ljava/math/BigDecimal;" },
	{ "reset", "()Ljava/util/Scanner;" },
};

static jclass interfaces[] { &class_java_util_Iterator, &class_java_io_Closeable, };

static jclass innerClasses[] {
	&class_java_util_Scanner$PatternLRUCache,
	&class_java_util_Scanner$FindSpliterator,
	&class_java_util_Scanner$TokenSpliterator,
};

static FieldMetadata fields[] {
	{ "buf", &class_java_nio_CharBuffer, offsetof(java_util_Scanner, F_buf), "Ljava/nio/CharBuffer;", 2 },
	{ "BUFFER_SIZE", &class_int, (intptr_t) &SF_java_util_Scanner_BUFFER_SIZE, "I", 26 },
	{ "position", &class_int, offsetof(java_util_Scanner, F_position), "I", 2 },
	{ "matcher", &class_java_util_regex_Matcher, offsetof(java_util_Scanner, F_matcher), "Ljava/util/regex/Matcher;", 2 },
	{ "delimPattern", &class_java_util_regex_Pattern, offsetof(java_util_Scanner, F_delimPattern), "Ljava/util/regex/Pattern;", 2 },
	{ "hasNextPattern", &class_java_util_regex_Pattern, offsetof(java_util_Scanner, F_hasNextPattern), "Ljava/util/regex/Pattern;", 2 },
	{ "hasNextPosition", &class_int, offsetof(java_util_Scanner, F_hasNextPosition), "I", 2 },
	{ "hasNextResult", &class_java_lang_String, offsetof(java_util_Scanner, F_hasNextResult), "Ljava/lang/String;", 2 },
	{ "source", &class_java_lang_Readable, offsetof(java_util_Scanner, F_source), "Ljava/lang/Readable;", 2 },
	{ "sourceClosed", &class_boolean, offsetof(java_util_Scanner, F_sourceClosed), "Z", 2 },
	{ "needInput", &class_boolean, offsetof(java_util_Scanner, F_needInput), "Z", 2 },
	{ "skipped", &class_boolean, offsetof(java_util_Scanner, F_skipped), "Z", 2 },
	{ "savedScannerPosition", &class_int, offsetof(java_util_Scanner, F_savedScannerPosition), "I", 2 },
	{ "typeCache", &class_java_lang_Object, offsetof(java_util_Scanner, F_typeCache), "Ljava/lang/Object;", 2 },
	{ "matchValid", &class_boolean, offsetof(java_util_Scanner, F_matchValid), "Z", 2 },
	{ "closed", &class_boolean, offsetof(java_util_Scanner, F_closed), "Z", 2 },
	{ "radix", &class_int, offsetof(java_util_Scanner, F_radix), "I", 2 },
	{ "defaultRadix", &class_int, offsetof(java_util_Scanner, F_defaultRadix), "I", 2 },
	{ "locale", &class_java_util_Locale, offsetof(java_util_Scanner, F_locale), "Ljava/util/Locale;", 2 },
	{ "patternCache", &class_java_util_Scanner$PatternLRUCache, offsetof(java_util_Scanner, F_patternCache), "Ljava/util/Scanner$PatternLRUCache;", 2 },
	{ "lastException", &class_java_io_IOException, offsetof(java_util_Scanner, F_lastException), "Ljava/io/IOException;", 2 },
	{ "modCount", &class_int, offsetof(java_util_Scanner, F_modCount), "I", 0 },
	{ "WHITESPACE_PATTERN", &class_java_util_regex_Pattern, (intptr_t) &SF_java_util_Scanner_WHITESPACE_PATTERN, "Ljava/util/regex/Pattern;", 10 },
	{ "FIND_ANY_PATTERN", &class_java_util_regex_Pattern, (intptr_t) &SF_java_util_Scanner_FIND_ANY_PATTERN, "Ljava/util/regex/Pattern;", 10 },
	{ "NON_ASCII_DIGIT", &class_java_util_regex_Pattern, (intptr_t) &SF_java_util_Scanner_NON_ASCII_DIGIT, "Ljava/util/regex/Pattern;", 10 },
	{ "groupSeparator", &class_java_lang_String, offsetof(java_util_Scanner, F_groupSeparator), "Ljava/lang/String;", 2 },
	{ "decimalSeparator", &class_java_lang_String, offsetof(java_util_Scanner, F_decimalSeparator), "Ljava/lang/String;", 2 },
	{ "nanString", &class_java_lang_String, offsetof(java_util_Scanner, F_nanString), "Ljava/lang/String;", 2 },
	{ "infinityString", &class_java_lang_String, offsetof(java_util_Scanner, F_infinityString), "Ljava/lang/String;", 2 },
	{ "positivePrefix", &class_java_lang_String, offsetof(java_util_Scanner, F_positivePrefix), "Ljava/lang/String;", 2 },
	{ "negativePrefix", &class_java_lang_String, offsetof(java_util_Scanner, F_negativePrefix), "Ljava/lang/String;", 2 },
	{ "positiveSuffix", &class_java_lang_String, offsetof(java_util_Scanner, F_positiveSuffix), "Ljava/lang/String;", 2 },
	{ "negativeSuffix", &class_java_lang_String, offsetof(java_util_Scanner, F_negativeSuffix), "Ljava/lang/String;", 2 },
	{ "boolPattern", &class_java_util_regex_Pattern, (intptr_t) &SF_java_util_Scanner_boolPattern, "Ljava/util/regex/Pattern;", 74 },
	{ "BOOLEAN_PATTERN", &class_java_lang_String, (intptr_t) &SF_java_util_Scanner_BOOLEAN_PATTERN, "Ljava/lang/String;", 26 },
	{ "integerPattern", &class_java_util_regex_Pattern, offsetof(java_util_Scanner, F_integerPattern), "Ljava/util/regex/Pattern;", 2 },
	{ "digits", &class_java_lang_String, offsetof(java_util_Scanner, F_digits), "Ljava/lang/String;", 2 },
	{ "non0Digit", &class_java_lang_String, offsetof(java_util_Scanner, F_non0Digit), "Ljava/lang/String;", 2 },
	{ "SIMPLE_GROUP_INDEX", &class_int, offsetof(java_util_Scanner, F_SIMPLE_GROUP_INDEX), "I", 2 },
	{ "separatorPattern", &class_java_util_regex_Pattern, (intptr_t) &SF_java_util_Scanner_separatorPattern, "Ljava/util/regex/Pattern;", 74 },
	{ "linePattern", &class_java_util_regex_Pattern, (intptr_t) &SF_java_util_Scanner_linePattern, "Ljava/util/regex/Pattern;", 74 },
	{ "LINE_SEPARATOR_PATTERN", &class_java_lang_String, (intptr_t) &SF_java_util_Scanner_LINE_SEPARATOR_PATTERN, "Ljava/lang/String;", 26 },
	{ "LINE_PATTERN", &class_java_lang_String, (intptr_t) &SF_java_util_Scanner_LINE_PATTERN, "Ljava/lang/String;", 26 },
	{ "floatPattern", &class_java_util_regex_Pattern, offsetof(java_util_Scanner, F_floatPattern), "Ljava/util/regex/Pattern;", 2 },
	{ "decimalPattern", &class_java_util_regex_Pattern, offsetof(java_util_Scanner, F_decimalPattern), "Ljava/util/regex/Pattern;", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_util_Scanner_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "boolPattern", (intptr_t) SM_java_util_Scanner_boolPattern_R_java_util_regex_Pattern, 0, "()Ljava/util/regex/Pattern;", 10 },
	{ "buildIntegerPatternString", (intptr_t) M_java_util_Scanner_buildIntegerPatternString_R_java_lang_String, VTABLE_java_util_Scanner_buildIntegerPatternString_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "integerPattern", (intptr_t) M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern, VTABLE_java_util_Scanner_integerPattern_R_java_util_regex_Pattern, "()Ljava/util/regex/Pattern;", 2 },
	{ "separatorPattern", (intptr_t) SM_java_util_Scanner_separatorPattern_R_java_util_regex_Pattern, 0, "()Ljava/util/regex/Pattern;", 10 },
	{ "linePattern", (intptr_t) SM_java_util_Scanner_linePattern_R_java_util_regex_Pattern, 0, "()Ljava/util/regex/Pattern;", 10 },
	{ "buildFloatAndDecimalPattern", (intptr_t) M_java_util_Scanner_buildFloatAndDecimalPattern, VTABLE_java_util_Scanner_buildFloatAndDecimalPattern, "()V", 2 },
	{ "floatPattern", (intptr_t) M_java_util_Scanner_floatPattern_R_java_util_regex_Pattern, VTABLE_java_util_Scanner_floatPattern_R_java_util_regex_Pattern, "()Ljava/util/regex/Pattern;", 2 },
	{ "decimalPattern", (intptr_t) M_java_util_Scanner_decimalPattern_R_java_util_regex_Pattern, VTABLE_java_util_Scanner_decimalPattern_R_java_util_regex_Pattern, "()Ljava/util/regex/Pattern;", 2 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_lang_Readable_java_util_regex_Pattern, 0, "(Ljava/lang/Readable;Ljava/util/regex/Pattern;)V", 2 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_lang_Readable, 0, "(Ljava/lang/Readable;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_io_InputStream_java_lang_String, 0, "(Ljava/io/InputStream;Ljava/lang/String;)V", 1 },
	{ "toCharset", (intptr_t) SM_java_util_Scanner_toCharset_java_lang_String_R_java_nio_charset_Charset, 0, "(Ljava/lang/String;)Ljava/nio/charset/Charset;", 10 },
	{ "makeReadable", (intptr_t) SM_java_util_Scanner_makeReadable_java_io_InputStream_java_nio_charset_Charset_R_java_lang_Readable, 0, "(Ljava/io/InputStream;Ljava/nio/charset/Charset;)Ljava/lang/Readable;", 10 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_io_File, 0, "(Ljava/io/File;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_io_File_java_lang_String, 0, "(Ljava/io/File;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_io_File_java_nio_charset_CharsetDecoder, 0, "(Ljava/io/File;Ljava/nio/charset/CharsetDecoder;)V", 2 },
	{ "toDecoder", (intptr_t) SM_java_util_Scanner_toDecoder_java_lang_String_R_java_nio_charset_CharsetDecoder, 0, "(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;", 10 },
	{ "makeReadable", (intptr_t) SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_R_java_lang_Readable, 0, "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/CharsetDecoder;)Ljava/lang/Readable;", 10 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_nio_file_Path, 0, "(Ljava/nio/file/Path;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_nio_file_Path_java_lang_String, 0, "(Ljava/nio/file/Path;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_nio_file_Path_java_nio_charset_Charset, 0, "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)V", 2 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_nio_channels_ReadableByteChannel, 0, "(Ljava/nio/channels/ReadableByteChannel;)V", 1 },
	{ "makeReadable", (intptr_t) SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_R_java_lang_Readable, 0, "(Ljava/nio/channels/ReadableByteChannel;)Ljava/lang/Readable;", 10 },
	{ "<init>", (intptr_t) init_java_util_Scanner_java_nio_channels_ReadableByteChannel_java_lang_String, 0, "(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V", 1 },
	{ "saveState", (intptr_t) M_java_util_Scanner_saveState, VTABLE_java_util_Scanner_saveState, "()V", 2 },
	{ "revertState", (intptr_t) M_java_util_Scanner_revertState, VTABLE_java_util_Scanner_revertState, "()V", 2 },
	{ "revertState", (intptr_t) M_java_util_Scanner_revertState_boolean_R_boolean, VTABLE_java_util_Scanner_revertState_boolean_R_boolean, "(Z)Z", 2 },
	{ "cacheResult", (intptr_t) M_java_util_Scanner_cacheResult, VTABLE_java_util_Scanner_cacheResult, "()V", 2 },
	{ "cacheResult", (intptr_t) M_java_util_Scanner_cacheResult_java_lang_String, VTABLE_java_util_Scanner_cacheResult_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "clearCaches", (intptr_t) M_java_util_Scanner_clearCaches, VTABLE_java_util_Scanner_clearCaches, "()V", 2 },
	{ "getCachedResult", (intptr_t) M_java_util_Scanner_getCachedResult_R_java_lang_String, VTABLE_java_util_Scanner_getCachedResult_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "useTypeCache", (intptr_t) M_java_util_Scanner_useTypeCache, VTABLE_java_util_Scanner_useTypeCache, "()V", 2 },
	{ "readInput", (intptr_t) M_java_util_Scanner_readInput, VTABLE_java_util_Scanner_readInput, "()V", 2 },
	{ "makeSpace", (intptr_t) M_java_util_Scanner_makeSpace_R_boolean, VTABLE_java_util_Scanner_makeSpace_R_boolean, "()Z", 2 },
	{ "translateSavedIndexes", (intptr_t) M_java_util_Scanner_translateSavedIndexes_int, VTABLE_java_util_Scanner_translateSavedIndexes_int, "(I)V", 2 },
	{ "throwFor", (intptr_t) M_java_util_Scanner_throwFor, VTABLE_java_util_Scanner_throwFor, "()V", 2 },
	{ "hasTokenInBuffer", (intptr_t) M_java_util_Scanner_hasTokenInBuffer_R_boolean, VTABLE_java_util_Scanner_hasTokenInBuffer_R_boolean, "()Z", 2 },
	{ "getCompleteTokenInBuffer", (intptr_t) M_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String, VTABLE_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String, "(Ljava/util/regex/Pattern;)Ljava/lang/String;", 2 },
	{ "findPatternInBuffer", (intptr_t) M_java_util_Scanner_findPatternInBuffer_java_util_regex_Pattern_int_R_boolean, VTABLE_java_util_Scanner_findPatternInBuffer_java_util_regex_Pattern_int_R_boolean, "(Ljava/util/regex/Pattern;I)Z", 2 },
	{ "matchPatternInBuffer", (intptr_t) M_java_util_Scanner_matchPatternInBuffer_java_util_regex_Pattern_R_boolean, VTABLE_java_util_Scanner_matchPatternInBuffer_java_util_regex_Pattern_R_boolean, "(Ljava/util/regex/Pattern;)Z", 2 },
	{ "ensureOpen", (intptr_t) M_java_util_Scanner_ensureOpen, VTABLE_java_util_Scanner_ensureOpen, "()V", 2 },
	{ "close", (intptr_t) M_java_util_Scanner_close, VTABLE_java_util_Scanner_close, "()V", 1 },
	{ "ioException", (intptr_t) M_java_util_Scanner_ioException_R_java_io_IOException, VTABLE_java_util_Scanner_ioException_R_java_io_IOException, "()Ljava/io/IOException;", 1 },
	{ "delimiter", (intptr_t) M_java_util_Scanner_delimiter_R_java_util_regex_Pattern, VTABLE_java_util_Scanner_delimiter_R_java_util_regex_Pattern, "()Ljava/util/regex/Pattern;", 1 },
	{ "useDelimiter", (intptr_t) M_java_util_Scanner_useDelimiter_java_util_regex_Pattern_R_java_util_Scanner, VTABLE_java_util_Scanner_useDelimiter_java_util_regex_Pattern_R_java_util_Scanner, "(Ljava/util/regex/Pattern;)Ljava/util/Scanner;", 1 },
	{ "useDelimiter", (intptr_t) M_java_util_Scanner_useDelimiter_java_lang_String_R_java_util_Scanner, VTABLE_java_util_Scanner_useDelimiter_java_lang_String_R_java_util_Scanner, "(Ljava/lang/String;)Ljava/util/Scanner;", 1 },
	{ "locale", (intptr_t) M_java_util_Scanner_locale_R_java_util_Locale, VTABLE_java_util_Scanner_locale_R_java_util_Locale, "()Ljava/util/Locale;", 1 },
	{ "useLocale", (intptr_t) M_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner, VTABLE_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner, "(Ljava/util/Locale;)Ljava/util/Scanner;", 1 },
	{ "radix", (intptr_t) M_java_util_Scanner_radix_R_int, VTABLE_java_util_Scanner_radix_R_int, "()I", 1 },
	{ "useRadix", (intptr_t) M_java_util_Scanner_useRadix_int_R_java_util_Scanner, VTABLE_java_util_Scanner_useRadix_int_R_java_util_Scanner, "(I)Ljava/util/Scanner;", 1 },
	{ "setRadix", (intptr_t) M_java_util_Scanner_setRadix_int, VTABLE_java_util_Scanner_setRadix_int, "(I)V", 2 },
	{ "match", (intptr_t) M_java_util_Scanner_match_R_java_util_regex_MatchResult, VTABLE_java_util_Scanner_match_R_java_util_regex_MatchResult, "()Ljava/util/regex/MatchResult;", 1 },
	{ "toString", (intptr_t) M_java_util_Scanner_toString_R_java_lang_String, VTABLE_java_util_Scanner_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hasNext", (intptr_t) M_java_util_Scanner_hasNext_R_boolean, VTABLE_java_util_Scanner_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_Scanner_next_R_java_lang_String, VTABLE_java_util_Scanner_next_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "remove", (intptr_t) M_java_util_Scanner_remove, VTABLE_java_util_Scanner_remove, "()V", 1 },
	{ "hasNext", (intptr_t) M_java_util_Scanner_hasNext_java_lang_String_R_boolean, VTABLE_java_util_Scanner_hasNext_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "next", (intptr_t) M_java_util_Scanner_next_java_lang_String_R_java_lang_String, VTABLE_java_util_Scanner_next_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "hasNext", (intptr_t) M_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean, VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean, "(Ljava/util/regex/Pattern;)Z", 1 },
	{ "next", (intptr_t) M_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String, VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String, "(Ljava/util/regex/Pattern;)Ljava/lang/String;", 1 },
	{ "hasNextLine", (intptr_t) M_java_util_Scanner_hasNextLine_R_boolean, VTABLE_java_util_Scanner_hasNextLine_R_boolean, "()Z", 1 },
	{ "nextLine", (intptr_t) M_java_util_Scanner_nextLine_R_java_lang_String, VTABLE_java_util_Scanner_nextLine_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "findInLine", (intptr_t) M_java_util_Scanner_findInLine_java_lang_String_R_java_lang_String, VTABLE_java_util_Scanner_findInLine_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "findInLine", (intptr_t) M_java_util_Scanner_findInLine_java_util_regex_Pattern_R_java_lang_String, VTABLE_java_util_Scanner_findInLine_java_util_regex_Pattern_R_java_lang_String, "(Ljava/util/regex/Pattern;)Ljava/lang/String;", 1 },
	{ "findWithinHorizon", (intptr_t) M_java_util_Scanner_findWithinHorizon_java_lang_String_int_R_java_lang_String, VTABLE_java_util_Scanner_findWithinHorizon_java_lang_String_int_R_java_lang_String, "(Ljava/lang/String;I)Ljava/lang/String;", 1 },
	{ "findWithinHorizon", (intptr_t) M_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String, VTABLE_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String, "(Ljava/util/regex/Pattern;I)Ljava/lang/String;", 1 },
	{ "skip", (intptr_t) M_java_util_Scanner_skip_java_util_regex_Pattern_R_java_util_Scanner, VTABLE_java_util_Scanner_skip_java_util_regex_Pattern_R_java_util_Scanner, "(Ljava/util/regex/Pattern;)Ljava/util/Scanner;", 1 },
	{ "skip", (intptr_t) M_java_util_Scanner_skip_java_lang_String_R_java_util_Scanner, VTABLE_java_util_Scanner_skip_java_lang_String_R_java_util_Scanner, "(Ljava/lang/String;)Ljava/util/Scanner;", 1 },
	{ "hasNextBoolean", (intptr_t) M_java_util_Scanner_hasNextBoolean_R_boolean, VTABLE_java_util_Scanner_hasNextBoolean_R_boolean, "()Z", 1 },
	{ "nextBoolean", (intptr_t) M_java_util_Scanner_nextBoolean_R_boolean, VTABLE_java_util_Scanner_nextBoolean_R_boolean, "()Z", 1 },
	{ "hasNextByte", (intptr_t) M_java_util_Scanner_hasNextByte_R_boolean, VTABLE_java_util_Scanner_hasNextByte_R_boolean, "()Z", 1 },
	{ "hasNextByte", (intptr_t) M_java_util_Scanner_hasNextByte_int_R_boolean, VTABLE_java_util_Scanner_hasNextByte_int_R_boolean, "(I)Z", 1 },
	{ "nextByte", (intptr_t) M_java_util_Scanner_nextByte_R_byte, VTABLE_java_util_Scanner_nextByte_R_byte, "()B", 1 },
	{ "nextByte", (intptr_t) M_java_util_Scanner_nextByte_int_R_byte, VTABLE_java_util_Scanner_nextByte_int_R_byte, "(I)B", 1 },
	{ "hasNextShort", (intptr_t) M_java_util_Scanner_hasNextShort_R_boolean, VTABLE_java_util_Scanner_hasNextShort_R_boolean, "()Z", 1 },
	{ "hasNextShort", (intptr_t) M_java_util_Scanner_hasNextShort_int_R_boolean, VTABLE_java_util_Scanner_hasNextShort_int_R_boolean, "(I)Z", 1 },
	{ "nextShort", (intptr_t) M_java_util_Scanner_nextShort_R_short, VTABLE_java_util_Scanner_nextShort_R_short, "()S", 1 },
	{ "nextShort", (intptr_t) M_java_util_Scanner_nextShort_int_R_short, VTABLE_java_util_Scanner_nextShort_int_R_short, "(I)S", 1 },
	{ "hasNextInt", (intptr_t) M_java_util_Scanner_hasNextInt_R_boolean, VTABLE_java_util_Scanner_hasNextInt_R_boolean, "()Z", 1 },
	{ "hasNextInt", (intptr_t) M_java_util_Scanner_hasNextInt_int_R_boolean, VTABLE_java_util_Scanner_hasNextInt_int_R_boolean, "(I)Z", 1 },
	{ "processIntegerToken", (intptr_t) M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String, VTABLE_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "nextInt", (intptr_t) M_java_util_Scanner_nextInt_R_int, VTABLE_java_util_Scanner_nextInt_R_int, "()I", 1 },
	{ "nextInt", (intptr_t) M_java_util_Scanner_nextInt_int_R_int, VTABLE_java_util_Scanner_nextInt_int_R_int, "(I)I", 1 },
	{ "hasNextLong", (intptr_t) M_java_util_Scanner_hasNextLong_R_boolean, VTABLE_java_util_Scanner_hasNextLong_R_boolean, "()Z", 1 },
	{ "hasNextLong", (intptr_t) M_java_util_Scanner_hasNextLong_int_R_boolean, VTABLE_java_util_Scanner_hasNextLong_int_R_boolean, "(I)Z", 1 },
	{ "nextLong", (intptr_t) M_java_util_Scanner_nextLong_R_long, VTABLE_java_util_Scanner_nextLong_R_long, "()J", 1 },
	{ "nextLong", (intptr_t) M_java_util_Scanner_nextLong_int_R_long, VTABLE_java_util_Scanner_nextLong_int_R_long, "(I)J", 1 },
	{ "processFloatToken", (intptr_t) M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String, VTABLE_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "hasNextFloat", (intptr_t) M_java_util_Scanner_hasNextFloat_R_boolean, VTABLE_java_util_Scanner_hasNextFloat_R_boolean, "()Z", 1 },
	{ "nextFloat", (intptr_t) M_java_util_Scanner_nextFloat_R_float, VTABLE_java_util_Scanner_nextFloat_R_float, "()F", 1 },
	{ "hasNextDouble", (intptr_t) M_java_util_Scanner_hasNextDouble_R_boolean, VTABLE_java_util_Scanner_hasNextDouble_R_boolean, "()Z", 1 },
	{ "nextDouble", (intptr_t) M_java_util_Scanner_nextDouble_R_double, VTABLE_java_util_Scanner_nextDouble_R_double, "()D", 1 },
	{ "hasNextBigInteger", (intptr_t) M_java_util_Scanner_hasNextBigInteger_R_boolean, VTABLE_java_util_Scanner_hasNextBigInteger_R_boolean, "()Z", 1 },
	{ "hasNextBigInteger", (intptr_t) M_java_util_Scanner_hasNextBigInteger_int_R_boolean, VTABLE_java_util_Scanner_hasNextBigInteger_int_R_boolean, "(I)Z", 1 },
	{ "nextBigInteger", (intptr_t) M_java_util_Scanner_nextBigInteger_R_java_math_BigInteger, VTABLE_java_util_Scanner_nextBigInteger_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 1 },
	{ "nextBigInteger", (intptr_t) M_java_util_Scanner_nextBigInteger_int_R_java_math_BigInteger, VTABLE_java_util_Scanner_nextBigInteger_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 1 },
	{ "hasNextBigDecimal", (intptr_t) M_java_util_Scanner_hasNextBigDecimal_R_boolean, VTABLE_java_util_Scanner_hasNextBigDecimal_R_boolean, "()Z", 1 },
	{ "nextBigDecimal", (intptr_t) M_java_util_Scanner_nextBigDecimal_R_java_math_BigDecimal, VTABLE_java_util_Scanner_nextBigDecimal_R_java_math_BigDecimal, "()Ljava/math/BigDecimal;", 1 },
	{ "reset", (intptr_t) M_java_util_Scanner_reset_R_java_util_Scanner, VTABLE_java_util_Scanner_reset_R_java_util_Scanner, "()Ljava/util/Scanner;", 1 },
	{ "next", (intptr_t) M_java_util_Scanner_next_R_java_lang_Object, VTABLE_java_util_Scanner_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "access$000", (intptr_t) SM_java_util_Scanner_access$000_java_util_Scanner, 0, "(Ljava/util/Scanner;)V", 4104 },
	{ "access$102", (intptr_t) SM_java_util_Scanner_access$102_java_util_Scanner_boolean_R_boolean, 0, "(Ljava/util/Scanner;Z)Z", 4104 },
	{ "access$200", (intptr_t) SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher, 0, "(Ljava/util/Scanner;)Ljava/util/regex/Matcher;", 4104 },
	{ "access$300", (intptr_t) SM_java_util_Scanner_access$300_java_util_Scanner_R_boolean, 0, "(Ljava/util/Scanner;)Z", 4104 },
	{ "access$400", (intptr_t) SM_java_util_Scanner_access$400_java_util_Scanner, 0, "(Ljava/util/Scanner;)V", 4104 },
	{ "access$500", (intptr_t) SM_java_util_Scanner_access$500_java_util_Scanner_R_int, 0, "(Ljava/util/Scanner;)I", 4104 },
	{ "access$600", (intptr_t) SM_java_util_Scanner_access$600_java_util_Scanner_R_java_nio_CharBuffer, 0, "(Ljava/util/Scanner;)Ljava/nio/CharBuffer;", 4104 },
	{ "access$700", (intptr_t) SM_java_util_Scanner_access$700_java_util_Scanner_R_boolean, 0, "(Ljava/util/Scanner;)Z", 4104 },
	{ "access$302", (intptr_t) SM_java_util_Scanner_access$302_java_util_Scanner_boolean_R_boolean, 0, "(Ljava/util/Scanner;Z)Z", 4104 },
	{ "access$508", (intptr_t) SM_java_util_Scanner_access$508_java_util_Scanner_R_int, 0, "(Ljava/util/Scanner;)I", 4104 },
	{ "access$502", (intptr_t) SM_java_util_Scanner_access$502_java_util_Scanner_int_R_int, 0, "(Ljava/util/Scanner;I)I", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_util_Scanner, 0, "()V", 8 },
};

Class class_java_util_Scanner{
		.nativeName = (intptr_t) "java/util/Scanner",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Scanner),
		.classVtable = (intptr_t) vtable_java_util_Scanner,
		.staticInitializer = (intptr_t) clinit_java_util_Scanner,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Scanner,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 46,
		.nativeFields = (intptr_t) fields,
		.methodCount = 114,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 92,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Scanner = registerClass(&class_java_util_Scanner);

}
