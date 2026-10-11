#ifndef HEADER_java_util_Scanner
#define HEADER_java_util_Scanner

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Scanner {
	java_lang_Object parent;
	jref F_buf;
	jint F_position;
	jref F_matcher;
	jref F_delimPattern;
	jref F_hasNextPattern;
	jint F_hasNextPosition;
	jref F_hasNextResult;
	jref F_source;
	jbool F_sourceClosed;
	jbool F_needInput;
	jbool F_skipped;
	jint F_savedScannerPosition;
	jref F_typeCache;
	jbool F_matchValid;
	jbool F_closed;
	jint F_radix;
	jint F_defaultRadix;
	jref F_locale;
	jref F_patternCache;
	jref F_lastException;
	jint F_modCount;
	jref F_groupSeparator;
	jref F_decimalSeparator;
	jref F_nanString;
	jref F_infinityString;
	jref F_positivePrefix;
	jref F_negativePrefix;
	jref F_positiveSuffix;
	jref F_negativeSuffix;
	jref F_integerPattern;
	jref F_digits;
	jref F_non0Digit;
	jint F_SIMPLE_GROUP_INDEX;
	jref F_floatPattern;
	jref F_decimalPattern;
} java_util_Scanner;

extern Class class_java_util_Scanner;

extern jint SF_java_util_Scanner_BUFFER_SIZE;
extern jobject SF_java_util_Scanner_WHITESPACE_PATTERN;
extern jobject SF_java_util_Scanner_FIND_ANY_PATTERN;
extern jobject SF_java_util_Scanner_NON_ASCII_DIGIT;
extern volatile jobject SF_java_util_Scanner_boolPattern;
extern jobject SF_java_util_Scanner_BOOLEAN_PATTERN;
extern volatile jobject SF_java_util_Scanner_separatorPattern;
extern volatile jobject SF_java_util_Scanner_linePattern;
extern jobject SF_java_util_Scanner_LINE_SEPARATOR_PATTERN;
extern jobject SF_java_util_Scanner_LINE_PATTERN;
extern jbool SF_java_util_Scanner_$assertionsDisabled;

#define VTABLE_java_util_Scanner_hashCode_R_int 0
typedef jint (*func_java_util_Scanner_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Scanner_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Scanner_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Scanner_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Scanner_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_finalize 5
typedef void (*func_java_util_Scanner_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_notify 6
typedef void (*func_java_util_Scanner_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_notifyAll 7
typedef void (*func_java_util_Scanner_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_wait 8
typedef void (*func_java_util_Scanner_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_wait_long 9
typedef void (*func_java_util_Scanner_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Scanner_wait_long_int 10
typedef void (*func_java_util_Scanner_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Scanner_hasNext_R_boolean 11
typedef jbool (*func_java_util_Scanner_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_next_R_java_lang_Object 12
typedef jobject (*func_java_util_Scanner_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_remove 13
typedef void (*func_java_util_Scanner_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_Scanner_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_close 15
typedef void (*func_java_util_Scanner_close)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_buildIntegerPatternString_R_java_lang_String 16
typedef jobject (*func_java_util_Scanner_buildIntegerPatternString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_integerPattern_R_java_util_regex_Pattern 17
typedef jobject (*func_java_util_Scanner_integerPattern_R_java_util_regex_Pattern)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_buildFloatAndDecimalPattern 18
typedef void (*func_java_util_Scanner_buildFloatAndDecimalPattern)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_floatPattern_R_java_util_regex_Pattern 19
typedef jobject (*func_java_util_Scanner_floatPattern_R_java_util_regex_Pattern)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_decimalPattern_R_java_util_regex_Pattern 20
typedef jobject (*func_java_util_Scanner_decimalPattern_R_java_util_regex_Pattern)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_saveState 21
typedef void (*func_java_util_Scanner_saveState)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_revertState 22
typedef void (*func_java_util_Scanner_revertState)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_revertState_boolean_R_boolean 23
typedef jbool (*func_java_util_Scanner_revertState_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_util_Scanner_cacheResult 24
typedef void (*func_java_util_Scanner_cacheResult)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_cacheResult_java_lang_String 25
typedef void (*func_java_util_Scanner_cacheResult_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_clearCaches 26
typedef void (*func_java_util_Scanner_clearCaches)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_getCachedResult_R_java_lang_String 27
typedef jobject (*func_java_util_Scanner_getCachedResult_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_useTypeCache 28
typedef void (*func_java_util_Scanner_useTypeCache)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_readInput 29
typedef void (*func_java_util_Scanner_readInput)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_makeSpace_R_boolean 30
typedef jbool (*func_java_util_Scanner_makeSpace_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_translateSavedIndexes_int 31
typedef void (*func_java_util_Scanner_translateSavedIndexes_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_throwFor 32
typedef void (*func_java_util_Scanner_throwFor)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasTokenInBuffer_R_boolean 33
typedef jbool (*func_java_util_Scanner_hasTokenInBuffer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String 34
typedef jobject (*func_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_findPatternInBuffer_java_util_regex_Pattern_int_R_boolean 35
typedef jbool (*func_java_util_Scanner_findPatternInBuffer_java_util_regex_Pattern_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Scanner_matchPatternInBuffer_java_util_regex_Pattern_R_boolean 36
typedef jbool (*func_java_util_Scanner_matchPatternInBuffer_java_util_regex_Pattern_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_ensureOpen 37
typedef void (*func_java_util_Scanner_ensureOpen)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_ioException_R_java_io_IOException 38
typedef jobject (*func_java_util_Scanner_ioException_R_java_io_IOException)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_delimiter_R_java_util_regex_Pattern 39
typedef jobject (*func_java_util_Scanner_delimiter_R_java_util_regex_Pattern)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_useDelimiter_java_util_regex_Pattern_R_java_util_Scanner 40
typedef jobject (*func_java_util_Scanner_useDelimiter_java_util_regex_Pattern_R_java_util_Scanner)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_useDelimiter_java_lang_String_R_java_util_Scanner 41
typedef jobject (*func_java_util_Scanner_useDelimiter_java_lang_String_R_java_util_Scanner)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_locale_R_java_util_Locale 42
typedef jobject (*func_java_util_Scanner_locale_R_java_util_Locale)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner 43
typedef jobject (*func_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_radix_R_int 44
typedef jint (*func_java_util_Scanner_radix_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_useRadix_int_R_java_util_Scanner 45
typedef jobject (*func_java_util_Scanner_useRadix_int_R_java_util_Scanner)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_setRadix_int 46
typedef void (*func_java_util_Scanner_setRadix_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_match_R_java_util_regex_MatchResult 47
typedef jobject (*func_java_util_Scanner_match_R_java_util_regex_MatchResult)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_next_R_java_lang_String 48
typedef jobject (*func_java_util_Scanner_next_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasNext_java_lang_String_R_boolean 49
typedef jbool (*func_java_util_Scanner_hasNext_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_next_java_lang_String_R_java_lang_String 50
typedef jobject (*func_java_util_Scanner_next_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean 51
typedef jbool (*func_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String 52
typedef jobject (*func_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_hasNextLine_R_boolean 53
typedef jbool (*func_java_util_Scanner_hasNextLine_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextLine_R_java_lang_String 54
typedef jobject (*func_java_util_Scanner_nextLine_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_findInLine_java_lang_String_R_java_lang_String 55
typedef jobject (*func_java_util_Scanner_findInLine_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_findInLine_java_util_regex_Pattern_R_java_lang_String 56
typedef jobject (*func_java_util_Scanner_findInLine_java_util_regex_Pattern_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_findWithinHorizon_java_lang_String_int_R_java_lang_String 57
typedef jobject (*func_java_util_Scanner_findWithinHorizon_java_lang_String_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String 58
typedef jobject (*func_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Scanner_skip_java_util_regex_Pattern_R_java_util_Scanner 59
typedef jobject (*func_java_util_Scanner_skip_java_util_regex_Pattern_R_java_util_Scanner)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_skip_java_lang_String_R_java_util_Scanner 60
typedef jobject (*func_java_util_Scanner_skip_java_lang_String_R_java_util_Scanner)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_hasNextBoolean_R_boolean 61
typedef jbool (*func_java_util_Scanner_hasNextBoolean_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextBoolean_R_boolean 62
typedef jbool (*func_java_util_Scanner_nextBoolean_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasNextByte_R_boolean 63
typedef jbool (*func_java_util_Scanner_hasNextByte_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasNextByte_int_R_boolean 64
typedef jbool (*func_java_util_Scanner_hasNextByte_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_nextByte_R_byte 65
typedef jbyte (*func_java_util_Scanner_nextByte_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextByte_int_R_byte 66
typedef jbyte (*func_java_util_Scanner_nextByte_int_R_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_hasNextShort_R_boolean 67
typedef jbool (*func_java_util_Scanner_hasNextShort_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasNextShort_int_R_boolean 68
typedef jbool (*func_java_util_Scanner_hasNextShort_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_nextShort_R_short 69
typedef jshort (*func_java_util_Scanner_nextShort_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextShort_int_R_short 70
typedef jshort (*func_java_util_Scanner_nextShort_int_R_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_hasNextInt_R_boolean 71
typedef jbool (*func_java_util_Scanner_hasNextInt_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasNextInt_int_R_boolean 72
typedef jbool (*func_java_util_Scanner_hasNextInt_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String 73
typedef jobject (*func_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_nextInt_R_int 74
typedef jint (*func_java_util_Scanner_nextInt_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextInt_int_R_int 75
typedef jint (*func_java_util_Scanner_nextInt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_hasNextLong_R_boolean 76
typedef jbool (*func_java_util_Scanner_hasNextLong_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasNextLong_int_R_boolean 77
typedef jbool (*func_java_util_Scanner_hasNextLong_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_nextLong_R_long 78
typedef jlong (*func_java_util_Scanner_nextLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextLong_int_R_long 79
typedef jlong (*func_java_util_Scanner_nextLong_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String 80
typedef jobject (*func_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner_hasNextFloat_R_boolean 81
typedef jbool (*func_java_util_Scanner_hasNextFloat_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextFloat_R_float 82
typedef jfloat (*func_java_util_Scanner_nextFloat_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasNextDouble_R_boolean 83
typedef jbool (*func_java_util_Scanner_hasNextDouble_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextDouble_R_double 84
typedef jdouble (*func_java_util_Scanner_nextDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasNextBigInteger_R_boolean 85
typedef jbool (*func_java_util_Scanner_hasNextBigInteger_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_hasNextBigInteger_int_R_boolean 86
typedef jbool (*func_java_util_Scanner_hasNextBigInteger_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_nextBigInteger_R_java_math_BigInteger 87
typedef jobject (*func_java_util_Scanner_nextBigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextBigInteger_int_R_java_math_BigInteger 88
typedef jobject (*func_java_util_Scanner_nextBigInteger_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner_hasNextBigDecimal_R_boolean 89
typedef jbool (*func_java_util_Scanner_hasNextBigDecimal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_nextBigDecimal_R_java_math_BigDecimal 90
typedef jobject (*func_java_util_Scanner_nextBigDecimal_R_java_math_BigDecimal)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner_reset_R_java_util_Scanner 91
typedef jobject (*func_java_util_Scanner_reset_R_java_util_Scanner)(jcontext ctx, jobject self);

void mark_java_util_Scanner(jobject object, jint mark, jint depth);
void clinit_java_util_Scanner(jcontext ctx);
jobject SM_java_util_Scanner_boolPattern_R_java_util_regex_Pattern(jcontext ctx);
jobject M_java_util_Scanner_buildIntegerPatternString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_Scanner_integerPattern_R_java_util_regex_Pattern(jcontext ctx, jobject self);
jobject SM_java_util_Scanner_separatorPattern_R_java_util_regex_Pattern(jcontext ctx);
jobject SM_java_util_Scanner_linePattern_R_java_util_regex_Pattern(jcontext ctx);
void M_java_util_Scanner_buildFloatAndDecimalPattern(jcontext ctx, jobject self);
jobject M_java_util_Scanner_floatPattern_R_java_util_regex_Pattern(jcontext ctx, jobject self);
jobject M_java_util_Scanner_decimalPattern_R_java_util_regex_Pattern(jcontext ctx, jobject self);
void init_java_util_Scanner_java_lang_Readable_java_util_regex_Pattern(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_Scanner_java_lang_Readable(jcontext ctx, jobject self, jobject param0);
void init_java_util_Scanner_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
void init_java_util_Scanner_java_io_InputStream_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_java_util_Scanner_toCharset_java_lang_String_R_java_nio_charset_Charset(jcontext ctx, jobject param0);
jobject SM_java_util_Scanner_makeReadable_java_io_InputStream_java_nio_charset_Charset_R_java_lang_Readable(jcontext ctx, jobject param0, jobject param1);
void init_java_util_Scanner_java_io_File(jcontext ctx, jobject self, jobject param0);
void init_java_util_Scanner_java_io_File_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_Scanner_java_io_File_java_nio_charset_CharsetDecoder(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_java_util_Scanner_toDecoder_java_lang_String_R_java_nio_charset_CharsetDecoder(jcontext ctx, jobject param0);
jobject SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_R_java_lang_Readable(jcontext ctx, jobject param0, jobject param1);
void init_java_util_Scanner_java_nio_file_Path(jcontext ctx, jobject self, jobject param0);
void init_java_util_Scanner_java_nio_file_Path_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_Scanner_java_nio_file_Path_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_Scanner_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_util_Scanner_java_nio_channels_ReadableByteChannel(jcontext ctx, jobject self, jobject param0);
jobject SM_java_util_Scanner_makeReadable_java_nio_channels_ReadableByteChannel_R_java_lang_Readable(jcontext ctx, jobject param0);
void init_java_util_Scanner_java_nio_channels_ReadableByteChannel_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_Scanner_saveState(jcontext ctx, jobject self);
void M_java_util_Scanner_revertState(jcontext ctx, jobject self);
jbool M_java_util_Scanner_revertState_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_util_Scanner_cacheResult(jcontext ctx, jobject self);
void M_java_util_Scanner_cacheResult_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_util_Scanner_clearCaches(jcontext ctx, jobject self);
jobject M_java_util_Scanner_getCachedResult_R_java_lang_String(jcontext ctx, jobject self);
void M_java_util_Scanner_useTypeCache(jcontext ctx, jobject self);
void M_java_util_Scanner_readInput(jcontext ctx, jobject self);
jbool M_java_util_Scanner_makeSpace_R_boolean(jcontext ctx, jobject self);
void M_java_util_Scanner_translateSavedIndexes_int(jcontext ctx, jobject self, jint param0);
void M_java_util_Scanner_throwFor(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasTokenInBuffer_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Scanner_getCompleteTokenInBuffer_java_util_regex_Pattern_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Scanner_findPatternInBuffer_java_util_regex_Pattern_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_java_util_Scanner_matchPatternInBuffer_java_util_regex_Pattern_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_Scanner_ensureOpen(jcontext ctx, jobject self);
void M_java_util_Scanner_close(jcontext ctx, jobject self);
jobject M_java_util_Scanner_ioException_R_java_io_IOException(jcontext ctx, jobject self);
jobject M_java_util_Scanner_delimiter_R_java_util_regex_Pattern(jcontext ctx, jobject self);
jobject M_java_util_Scanner_useDelimiter_java_util_regex_Pattern_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Scanner_useDelimiter_java_lang_String_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Scanner_locale_R_java_util_Locale(jcontext ctx, jobject self);
jobject M_java_util_Scanner_useLocale_java_util_Locale_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Scanner_radix_R_int(jcontext ctx, jobject self);
jobject M_java_util_Scanner_useRadix_int_R_java_util_Scanner(jcontext ctx, jobject self, jint param0);
void M_java_util_Scanner_setRadix_int(jcontext ctx, jobject self, jint param0);
jobject M_java_util_Scanner_match_R_java_util_regex_MatchResult(jcontext ctx, jobject self);
jobject M_java_util_Scanner_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Scanner_next_R_java_lang_String(jcontext ctx, jobject self);
void M_java_util_Scanner_remove(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNext_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Scanner_next_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Scanner_hasNext_java_util_regex_Pattern_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Scanner_next_java_util_regex_Pattern_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Scanner_hasNextLine_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Scanner_nextLine_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_Scanner_findInLine_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Scanner_findInLine_java_util_regex_Pattern_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Scanner_findWithinHorizon_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_util_Scanner_findWithinHorizon_java_util_regex_Pattern_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_util_Scanner_skip_java_util_regex_Pattern_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Scanner_skip_java_lang_String_R_java_util_Scanner(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Scanner_hasNextBoolean_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Scanner_nextBoolean_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNextByte_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNextByte_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbyte M_java_util_Scanner_nextByte_R_byte(jcontext ctx, jobject self);
jbyte M_java_util_Scanner_nextByte_int_R_byte(jcontext ctx, jobject self, jint param0);
jbool M_java_util_Scanner_hasNextShort_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNextShort_int_R_boolean(jcontext ctx, jobject self, jint param0);
jshort M_java_util_Scanner_nextShort_R_short(jcontext ctx, jobject self);
jshort M_java_util_Scanner_nextShort_int_R_short(jcontext ctx, jobject self, jint param0);
jbool M_java_util_Scanner_hasNextInt_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNextInt_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_java_util_Scanner_processIntegerToken_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Scanner_nextInt_R_int(jcontext ctx, jobject self);
jint M_java_util_Scanner_nextInt_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_java_util_Scanner_hasNextLong_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNextLong_int_R_boolean(jcontext ctx, jobject self, jint param0);
jlong M_java_util_Scanner_nextLong_R_long(jcontext ctx, jobject self);
jlong M_java_util_Scanner_nextLong_int_R_long(jcontext ctx, jobject self, jint param0);
jobject M_java_util_Scanner_processFloatToken_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Scanner_hasNextFloat_R_boolean(jcontext ctx, jobject self);
jfloat M_java_util_Scanner_nextFloat_R_float(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNextDouble_R_boolean(jcontext ctx, jobject self);
jdouble M_java_util_Scanner_nextDouble_R_double(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNextBigInteger_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Scanner_hasNextBigInteger_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_java_util_Scanner_nextBigInteger_R_java_math_BigInteger(jcontext ctx, jobject self);
jobject M_java_util_Scanner_nextBigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jbool M_java_util_Scanner_hasNextBigDecimal_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Scanner_nextBigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self);
jobject M_java_util_Scanner_reset_R_java_util_Scanner(jcontext ctx, jobject self);
jobject M_java_util_Scanner_next_R_java_lang_Object(jcontext ctx, jobject self);
void SM_java_util_Scanner_access$000_java_util_Scanner(jcontext ctx, jobject param0);
jbool SM_java_util_Scanner_access$102_java_util_Scanner_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1);
jobject SM_java_util_Scanner_access$200_java_util_Scanner_R_java_util_regex_Matcher(jcontext ctx, jobject param0);
jbool SM_java_util_Scanner_access$300_java_util_Scanner_R_boolean(jcontext ctx, jobject param0);
void SM_java_util_Scanner_access$400_java_util_Scanner(jcontext ctx, jobject param0);
jint SM_java_util_Scanner_access$500_java_util_Scanner_R_int(jcontext ctx, jobject param0);
jobject SM_java_util_Scanner_access$600_java_util_Scanner_R_java_nio_CharBuffer(jcontext ctx, jobject param0);
jbool SM_java_util_Scanner_access$700_java_util_Scanner_R_boolean(jcontext ctx, jobject param0);
jbool SM_java_util_Scanner_access$302_java_util_Scanner_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1);
jint SM_java_util_Scanner_access$508_java_util_Scanner_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Scanner_access$502_java_util_Scanner_int_R_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
