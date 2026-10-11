#ifndef HEADER_java_util_Formatter$Doormat
#define HEADER_java_util_Formatter$Doormat

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/Substitution.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Formatter$Doormat {
	java_lang_Object parent;
	jref F_arguments;
	jint F_index;
	jref F_workBuffer;
} java_util_Formatter$Doormat;

extern Class class_java_util_Formatter$Doormat;

extern jint SF_java_util_Formatter$Doormat_bufLen;

#define VTABLE_java_util_Formatter$Doormat_hashCode_R_int 0
typedef jint (*func_java_util_Formatter$Doormat_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter$Doormat_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Formatter$Doormat_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Formatter$Doormat_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Formatter$Doormat_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter$Doormat_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Formatter$Doormat_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter$Doormat_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Formatter$Doormat_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter$Doormat_finalize 5
typedef void (*func_java_util_Formatter$Doormat_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter$Doormat_notify 6
typedef void (*func_java_util_Formatter$Doormat_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter$Doormat_notifyAll 7
typedef void (*func_java_util_Formatter$Doormat_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter$Doormat_wait 8
typedef void (*func_java_util_Formatter$Doormat_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter$Doormat_wait_long 9
typedef void (*func_java_util_Formatter$Doormat_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Formatter$Doormat_wait_long_int 10
typedef void (*func_java_util_Formatter$Doormat_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Formatter$Doormat_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer 11
typedef void (*func_java_util_Formatter$Doormat_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Formatter$Doormat_byteToHexString_byte_int_Array1_char_R_java_lang_String 12
typedef jobject (*func_java_util_Formatter$Doormat_byteToHexString_byte_int_Array1_char_R_java_lang_String)(jcontext ctx, jobject self, jbyte param0, jint param1, jobject param2);
#define VTABLE_java_util_Formatter$Doormat_shortToHexString_short_int_Array1_char_R_java_lang_String 13
typedef jobject (*func_java_util_Formatter$Doormat_shortToHexString_short_int_Array1_char_R_java_lang_String)(jcontext ctx, jobject self, jshort param0, jint param1, jobject param2);
#define VTABLE_java_util_Formatter$Doormat_intToHexString_int_int_Array1_char_R_java_lang_String 14
typedef jobject (*func_java_util_Formatter$Doormat_intToHexString_int_int_Array1_char_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_java_util_Formatter$Doormat_longToHexString_long_int_Array1_char_R_java_lang_String 15
typedef jobject (*func_java_util_Formatter$Doormat_longToHexString_long_int_Array1_char_R_java_lang_String)(jcontext ctx, jobject self, jlong param0, jint param1, jobject param2);

void mark_java_util_Formatter$Doormat(jobject object, jint mark, jint depth);
void clinit_java_util_Formatter$Doormat(jcontext ctx);
void init_java_util_Formatter$Doormat_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_util_Formatter$Doormat_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_Formatter$Doormat_byteToHexString_byte_int_Array1_char_R_java_lang_String(jcontext ctx, jobject self, jbyte param0, jint param1, jobject param2);
jobject M_java_util_Formatter$Doormat_shortToHexString_short_int_Array1_char_R_java_lang_String(jcontext ctx, jobject self, jshort param0, jint param1, jobject param2);
jobject M_java_util_Formatter$Doormat_intToHexString_int_int_Array1_char_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject M_java_util_Formatter$Doormat_longToHexString_long_int_Array1_char_R_java_lang_String(jcontext ctx, jobject self, jlong param0, jint param1, jobject param2);
void init_java_util_Formatter$Doormat_Array1_java_lang_Object_java_util_Formatter$1(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
