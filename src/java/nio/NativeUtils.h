#ifndef HEADER_java_nio_NativeUtils
#define HEADER_java_nio_NativeUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_NativeUtils {
	java_lang_Object parent;
} java_nio_NativeUtils;

extern Class class_java_nio_NativeUtils;


#define VTABLE_java_nio_NativeUtils_hashCode_R_int 0
typedef jint (*func_java_nio_NativeUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_NativeUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_NativeUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_NativeUtils_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_NativeUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_NativeUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_NativeUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_NativeUtils_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_NativeUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_NativeUtils_finalize 5
typedef void (*func_java_nio_NativeUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_NativeUtils_notify 6
typedef void (*func_java_nio_NativeUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_NativeUtils_notifyAll 7
typedef void (*func_java_nio_NativeUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_NativeUtils_wait 8
typedef void (*func_java_nio_NativeUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_NativeUtils_wait_long 9
typedef void (*func_java_nio_NativeUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_NativeUtils_wait_long_int 10
typedef void (*func_java_nio_NativeUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_nio_NativeUtils(jobject object, jint mark, jint depth);
void clinit_java_nio_NativeUtils(jcontext ctx);
void init_java_nio_NativeUtils(jcontext ctx, jobject self);
jlong SM_java_nio_NativeUtils_getLong_long_R_long(jcontext ctx, jlong param0);
void SM_java_nio_NativeUtils_putLong_long_long(jcontext ctx, jlong param0, jlong param1);
jint SM_java_nio_NativeUtils_getInt_long_R_int(jcontext ctx, jlong param0);
void SM_java_nio_NativeUtils_putInt_long_int(jcontext ctx, jlong param0, jint param1);
jshort SM_java_nio_NativeUtils_getShort_long_R_short(jcontext ctx, jlong param0);
void SM_java_nio_NativeUtils_putShort_long_short(jcontext ctx, jlong param0, jshort param1);
jchar SM_java_nio_NativeUtils_getChar_long_R_char(jcontext ctx, jlong param0);
void SM_java_nio_NativeUtils_putChar_long_char(jcontext ctx, jlong param0, jchar param1);
jbyte SM_java_nio_NativeUtils_getByte_long_R_byte(jcontext ctx, jlong param0);
void SM_java_nio_NativeUtils_putByte_long_byte(jcontext ctx, jlong param0, jbyte param1);
void SM_java_nio_NativeUtils_copyMemory_long_long_long(jcontext ctx, jlong param0, jlong param1, jlong param2);
jlong SM_java_nio_NativeUtils_getArrayAddress_java_lang_Object_R_long(jcontext ctx, jobject param0);
jobject SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0);
jobject SM_java_nio_NativeUtils_getArrayClass_java_lang_Class_int_R_java_lang_Class(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
