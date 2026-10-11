#ifndef HEADER_arc_util_NativeUtils
#define HEADER_arc_util_NativeUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_NativeUtils {
	java_lang_Object parent;
} arc_util_NativeUtils;

extern Class class_arc_util_NativeUtils;


#define VTABLE_arc_util_NativeUtils_hashCode_R_int 0
typedef jint (*func_arc_util_NativeUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_NativeUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_NativeUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_NativeUtils_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_NativeUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_NativeUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_NativeUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_NativeUtils_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_NativeUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_NativeUtils_finalize 5
typedef void (*func_arc_util_NativeUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_NativeUtils_notify 6
typedef void (*func_arc_util_NativeUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_NativeUtils_notifyAll 7
typedef void (*func_arc_util_NativeUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_NativeUtils_wait 8
typedef void (*func_arc_util_NativeUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_NativeUtils_wait_long 9
typedef void (*func_arc_util_NativeUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_NativeUtils_wait_long_int 10
typedef void (*func_arc_util_NativeUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_NativeUtils(jobject object, jint mark, jint depth);
void clinit_arc_util_NativeUtils(jcontext ctx);
void init_arc_util_NativeUtils(jcontext ctx, jobject self);
jint SM_arc_util_NativeUtils_setEnv_java_lang_String_java_lang_String_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2);
jint SM_arc_util_NativeUtils_unsetEnv_java_lang_String_R_int(jcontext ctx, jobject param0);
jobject SM_arc_util_NativeUtils_getEnv_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
void SM_arc_util_NativeUtils_forceUtf8Locale(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
