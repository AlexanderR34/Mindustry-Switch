#ifndef HEADER_java_lang_UnicodeHelper
#define HEADER_java_lang_UnicodeHelper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_UnicodeHelper {
	java_lang_Object parent;
} java_lang_UnicodeHelper;

extern Class class_java_lang_UnicodeHelper;


#define VTABLE_java_lang_UnicodeHelper_hashCode_R_int 0
typedef jint (*func_java_lang_UnicodeHelper_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_UnicodeHelper_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_UnicodeHelper_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_UnicodeHelper_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_UnicodeHelper_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_UnicodeHelper_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper_finalize 5
typedef void (*func_java_lang_UnicodeHelper_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper_notify 6
typedef void (*func_java_lang_UnicodeHelper_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper_notifyAll 7
typedef void (*func_java_lang_UnicodeHelper_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper_wait 8
typedef void (*func_java_lang_UnicodeHelper_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_UnicodeHelper_wait_long 9
typedef void (*func_java_lang_UnicodeHelper_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_UnicodeHelper_wait_long_int 10
typedef void (*func_java_lang_UnicodeHelper_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_UnicodeHelper(jobject object, jint mark, jint depth);
void clinit_java_lang_UnicodeHelper(jcontext ctx);
void init_java_lang_UnicodeHelper(jcontext ctx, jobject self);
jchar SM_java_lang_UnicodeHelper_hexDigit_int_R_char(jcontext ctx, jint param0);
jint SM_java_lang_UnicodeHelper_valueOfHexDigit_char_R_int(jcontext ctx, jchar param0);
jobject SM_java_lang_UnicodeHelper_encodeIntPairsDiff_Array1_int_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_lang_UnicodeHelper_decodeIntPairsDiff_java_lang_String_R_Array1_int(jcontext ctx, jobject param0);
jobject SM_java_lang_UnicodeHelper_encodeIntDiff_Array1_int_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_lang_UnicodeHelper_decodeIntDiff_java_lang_String_R_Array1_int(jcontext ctx, jobject param0);
jchar SM_java_lang_UnicodeHelper_encodeByte_byte_R_char(jcontext ctx, jbyte param0);
jbyte SM_java_lang_UnicodeHelper_decodeByte_char_R_byte(jcontext ctx, jchar param0);
jobject SM_java_lang_UnicodeHelper_compressRle_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_lang_UnicodeHelper_extractRle_java_lang_String_R_Array1_java_lang_UnicodeHelper$Range(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
