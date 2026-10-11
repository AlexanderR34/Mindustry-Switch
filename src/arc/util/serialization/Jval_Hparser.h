#ifndef HEADER_arc_util_serialization_Jval$Hparser
#define HEADER_arc_util_serialization_Jval$Hparser

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Jval$Hparser {
	java_lang_Object parent;
	jref F_buffer;
	jint F_index;
	jint F_bufferLength;
	jint F_line;
	jint F_lineOffset;
	jint F_current;
	jref F_captureBuffer;
	jint F_captureStart;
	jint F_rawStart;
	jbool F_escaped;
	jbool F_isArray;
} arc_util_serialization_Jval$Hparser;

extern Class class_arc_util_serialization_Jval$Hparser;


#define VTABLE_arc_util_serialization_Jval$Hparser_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_Jval$Hparser_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_Jval$Hparser_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_Jval$Hparser_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_Jval$Hparser_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_Jval$Hparser_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_finalize 5
typedef void (*func_arc_util_serialization_Jval$Hparser_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_notify 6
typedef void (*func_arc_util_serialization_Jval$Hparser_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_notifyAll 7
typedef void (*func_arc_util_serialization_Jval$Hparser_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_wait 8
typedef void (*func_arc_util_serialization_Jval$Hparser_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_wait_long 9
typedef void (*func_arc_util_serialization_Jval$Hparser_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_wait_long_int 10
typedef void (*func_arc_util_serialization_Jval$Hparser_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_serialization_Jval$Hparser_reset 11
typedef void (*func_arc_util_serialization_Jval$Hparser_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval 12
typedef jobject (*func_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval 13
typedef jobject (*func_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval 14
typedef jobject (*func_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_readTfnns_R_arc_util_serialization_Jval 15
typedef jobject (*func_arc_util_serialization_Jval$Hparser_readTfnns_R_arc_util_serialization_Jval)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean 16
typedef jbool (*func_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_util_serialization_Jval$Hparser_readArray_R_arc_util_serialization_Jval 17
typedef jobject (*func_arc_util_serialization_Jval$Hparser_readArray_R_arc_util_serialization_Jval)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_readObject_boolean_R_arc_util_serialization_Jval 18
typedef jobject (*func_arc_util_serialization_Jval$Hparser_readObject_boolean_R_arc_util_serialization_Jval)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_readName_R_java_lang_String 19
typedef jobject (*func_arc_util_serialization_Jval$Hparser_readName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_readMlString_R_java_lang_String 20
typedef jobject (*func_arc_util_serialization_Jval$Hparser_readMlString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_skipIndent_int 21
typedef void (*func_arc_util_serialization_Jval$Hparser_skipIndent_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_readString_R_arc_util_serialization_Jval 22
typedef jobject (*func_arc_util_serialization_Jval$Hparser_readString_R_arc_util_serialization_Jval)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_readStringInternal_boolean_R_java_lang_String 23
typedef jobject (*func_arc_util_serialization_Jval$Hparser_readStringInternal_boolean_R_java_lang_String)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_startCapture 24
typedef void (*func_arc_util_serialization_Jval$Hparser_startCapture)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_readEscape 25
typedef void (*func_arc_util_serialization_Jval$Hparser_readEscape)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_endCapture_R_java_lang_String 26
typedef jobject (*func_arc_util_serialization_Jval$Hparser_endCapture_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean 27
typedef jbool (*func_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_skipWhiteSpace 28
typedef void (*func_arc_util_serialization_Jval$Hparser_skipWhiteSpace)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_read 29
typedef void (*func_arc_util_serialization_Jval$Hparser_read)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_peek_int_R_int 30
typedef jint (*func_arc_util_serialization_Jval$Hparser_peek_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_peek_R_int 31
typedef jint (*func_arc_util_serialization_Jval$Hparser_peek_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException 32
typedef jobject (*func_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException 33
typedef jobject (*func_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$Hparser_isWhiteSpace_R_boolean 34
typedef jbool (*func_arc_util_serialization_Jval$Hparser_isWhiteSpace_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_isHexDigit_R_boolean 35
typedef jbool (*func_arc_util_serialization_Jval$Hparser_isHexDigit_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean 36
typedef jbool (*func_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean)(jcontext ctx, jobject self);

void mark_arc_util_serialization_Jval$Hparser(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Jval$Hparser(jcontext ctx);
void init_arc_util_serialization_Jval$Hparser_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_arc_util_serialization_Jval$Hparser_java_io_Reader(jcontext ctx, jobject self, jobject param0);
jbool SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(jcontext ctx, jint param0);
void M_arc_util_serialization_Jval$Hparser_reset(jcontext ctx, jobject self);
jobject M_arc_util_serialization_Jval$Hparser_parse_R_arc_util_serialization_Jval(jcontext ctx, jobject self);
jobject M_arc_util_serialization_Jval$Hparser_checkTrailing_arc_util_serialization_Jval_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_serialization_Jval$Hparser_readValue_R_arc_util_serialization_Jval(jcontext ctx, jobject self);
jobject M_arc_util_serialization_Jval$Hparser_readTfnns_R_arc_util_serialization_Jval(jcontext ctx, jobject self);
jobject SM_arc_util_serialization_Jval$Hparser_tryParseNumber_Array1_char_int_int_boolean_R_arc_util_serialization_Jval(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
jbool M_arc_util_serialization_Jval$Hparser_regionMatches_int_java_lang_String_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool SM_arc_util_serialization_Jval$Hparser_isTrimChar_char_R_boolean(jcontext ctx, jchar param0);
jobject M_arc_util_serialization_Jval$Hparser_readArray_R_arc_util_serialization_Jval(jcontext ctx, jobject self);
jobject M_arc_util_serialization_Jval$Hparser_readObject_boolean_R_arc_util_serialization_Jval(jcontext ctx, jobject self, jbool param0);
jobject M_arc_util_serialization_Jval$Hparser_readName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_util_serialization_Jval$Hparser_readMlString_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_util_serialization_Jval$Hparser_skipIndent_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_util_serialization_Jval$Hparser_readString_R_arc_util_serialization_Jval(jcontext ctx, jobject self);
jobject M_arc_util_serialization_Jval$Hparser_readStringInternal_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0);
void M_arc_util_serialization_Jval$Hparser_startCapture(jcontext ctx, jobject self);
void M_arc_util_serialization_Jval$Hparser_readEscape(jcontext ctx, jobject self);
jobject M_arc_util_serialization_Jval$Hparser_endCapture_R_java_lang_String(jcontext ctx, jobject self);
jbool SM_arc_util_serialization_Jval$Hparser_isDigit_char_R_boolean(jcontext ctx, jchar param0);
jobject SM_arc_util_serialization_Jval$Hparser_tryParseNumber_java_lang_StringBuilder_boolean_R_arc_util_serialization_Jval(jcontext ctx, jobject param0, jbool param1);
jobject SM_arc_util_serialization_Jval$Hparser_tryParseNumber_java_lang_String_R_arc_util_serialization_Jval(jcontext ctx, jobject param0);
jbool M_arc_util_serialization_Jval$Hparser_readIf_char_R_boolean(jcontext ctx, jobject self, jchar param0);
void M_arc_util_serialization_Jval$Hparser_skipWhiteSpace(jcontext ctx, jobject self);
void M_arc_util_serialization_Jval$Hparser_read(jcontext ctx, jobject self);
jint M_arc_util_serialization_Jval$Hparser_peek_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_util_serialization_Jval$Hparser_peek_R_int(jcontext ctx, jobject self);
jobject M_arc_util_serialization_Jval$Hparser_expected_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_serialization_Jval$Hparser_error_java_lang_String_R_arc_util_serialization_Jval$JsonParseException(jcontext ctx, jobject self, jobject param0);
jbool M_arc_util_serialization_Jval$Hparser_isWhiteSpace_R_boolean(jcontext ctx, jobject self);
jbool M_arc_util_serialization_Jval$Hparser_isHexDigit_R_boolean(jcontext ctx, jobject self);
jbool M_arc_util_serialization_Jval$Hparser_isEndOfText_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
