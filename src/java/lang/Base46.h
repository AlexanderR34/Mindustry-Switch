#ifndef HEADER_java_lang_Base46
#define HEADER_java_lang_Base46

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Base46 {
	java_lang_Object parent;
} java_lang_Base46;

extern Class class_java_lang_Base46;


#define VTABLE_java_lang_Base46_hashCode_R_int 0
typedef jint (*func_java_lang_Base46_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Base46_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Base46_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Base46_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Base46_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Base46_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Base46_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Base46_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Base46_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Base46_finalize 5
typedef void (*func_java_lang_Base46_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Base46_notify 6
typedef void (*func_java_lang_Base46_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Base46_notifyAll 7
typedef void (*func_java_lang_Base46_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Base46_wait 8
typedef void (*func_java_lang_Base46_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Base46_wait_long 9
typedef void (*func_java_lang_Base46_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Base46_wait_long_int 10
typedef void (*func_java_lang_Base46_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_Base46(jobject object, jint mark, jint depth);
void clinit_java_lang_Base46(jcontext ctx);
void init_java_lang_Base46(jcontext ctx, jobject self);
void SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1);
void SM_java_lang_Base46_encode_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1);
void SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_long(jcontext ctx, jobject param0, jlong param1);
void SM_java_lang_Base46_encode_java_lang_StringBuilder_long(jcontext ctx, jobject param0, jlong param1);
jint SM_java_lang_Base46_decodeUnsigned_java_lang_CharFlow_R_int(jcontext ctx, jobject param0);
jint SM_java_lang_Base46_decode_java_lang_CharFlow_R_int(jcontext ctx, jobject param0);
jlong SM_java_lang_Base46_decodeUnsignedLong_java_lang_CharFlow_R_long(jcontext ctx, jobject param0);
jlong SM_java_lang_Base46_decodeLong_java_lang_CharFlow_R_long(jcontext ctx, jobject param0);
jchar SM_java_lang_Base46_encodeDigit_int_R_char(jcontext ctx, jint param0);
jint SM_java_lang_Base46_decodeDigit_char_R_int(jcontext ctx, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
