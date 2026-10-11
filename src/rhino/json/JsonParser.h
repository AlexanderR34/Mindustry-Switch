#ifndef HEADER_rhino_json_JsonParser
#define HEADER_rhino_json_JsonParser

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_json_JsonParser {
	java_lang_Object parent;
	jref F_cx;
	jref F_scope;
	jint F_pos;
	jint F_length;
	jref F_src;
} rhino_json_JsonParser;

extern Class class_rhino_json_JsonParser;

extern jbool SF_rhino_json_JsonParser_$assertionsDisabled;

#define VTABLE_rhino_json_JsonParser_hashCode_R_int 0
typedef jint (*func_rhino_json_JsonParser_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_json_JsonParser_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_json_JsonParser_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_json_JsonParser_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_json_JsonParser_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_toString_R_java_lang_String 4
typedef jobject (*func_rhino_json_JsonParser_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_finalize 5
typedef void (*func_rhino_json_JsonParser_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_notify 6
typedef void (*func_rhino_json_JsonParser_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_notifyAll 7
typedef void (*func_rhino_json_JsonParser_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_wait 8
typedef void (*func_rhino_json_JsonParser_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_wait_long 9
typedef void (*func_rhino_json_JsonParser_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_json_JsonParser_wait_long_int 10
typedef void (*func_rhino_json_JsonParser_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_json_JsonParser_parseValue_java_lang_String_R_java_lang_Object 11
typedef jobject (*func_rhino_json_JsonParser_parseValue_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_json_JsonParser_readValue_R_java_lang_Object 12
typedef jobject (*func_rhino_json_JsonParser_readValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_readObject_R_java_lang_Object 13
typedef jobject (*func_rhino_json_JsonParser_readObject_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_readArray_R_java_lang_Object 14
typedef jobject (*func_rhino_json_JsonParser_readArray_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_readString_R_java_lang_String 15
typedef jobject (*func_rhino_json_JsonParser_readString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_fromHex_char_R_int 16
typedef jint (*func_rhino_json_JsonParser_fromHex_char_R_int)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_rhino_json_JsonParser_readNumber_char_R_java_lang_Number 17
typedef jobject (*func_rhino_json_JsonParser_readNumber_char_R_java_lang_Number)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException 18
typedef jobject (*func_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_json_JsonParser_nextOrNumberError_int_R_char 19
typedef jchar (*func_rhino_json_JsonParser_nextOrNumberError_int_R_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_json_JsonParser_readDigits 20
typedef void (*func_rhino_json_JsonParser_readDigits)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_readTrue_R_java_lang_Boolean 21
typedef jobject (*func_rhino_json_JsonParser_readTrue_R_java_lang_Boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_readFalse_R_java_lang_Boolean 22
typedef jobject (*func_rhino_json_JsonParser_readFalse_R_java_lang_Boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_readNull_R_java_lang_Object 23
typedef jobject (*func_rhino_json_JsonParser_readNull_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_consumeWhitespace 24
typedef void (*func_rhino_json_JsonParser_consumeWhitespace)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser_consume_char 25
typedef void (*func_rhino_json_JsonParser_consume_char)(jcontext ctx, jobject self, jchar param0);

void mark_rhino_json_JsonParser(jobject object, jint mark, jint depth);
void clinit_rhino_json_JsonParser(jcontext ctx);
void init_rhino_json_JsonParser_rhino_Context_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_json_JsonParser_parseValue_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_json_JsonParser_readValue_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_json_JsonParser_readObject_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_json_JsonParser_readArray_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_json_JsonParser_readString_R_java_lang_String(jcontext ctx, jobject self);
jint M_rhino_json_JsonParser_fromHex_char_R_int(jcontext ctx, jobject self, jchar param0);
jobject M_rhino_json_JsonParser_readNumber_char_R_java_lang_Number(jcontext ctx, jobject self, jchar param0);
jobject M_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException(jcontext ctx, jobject self, jint param0, jint param1);
jchar M_rhino_json_JsonParser_nextOrNumberError_int_R_char(jcontext ctx, jobject self, jint param0);
void M_rhino_json_JsonParser_readDigits(jcontext ctx, jobject self);
jobject M_rhino_json_JsonParser_readTrue_R_java_lang_Boolean(jcontext ctx, jobject self);
jobject M_rhino_json_JsonParser_readFalse_R_java_lang_Boolean(jcontext ctx, jobject self);
jobject M_rhino_json_JsonParser_readNull_R_java_lang_Object(jcontext ctx, jobject self);
void M_rhino_json_JsonParser_consumeWhitespace(jcontext ctx, jobject self);
void M_rhino_json_JsonParser_consume_char(jcontext ctx, jobject self, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
