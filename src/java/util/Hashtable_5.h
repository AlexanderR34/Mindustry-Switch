#ifndef HEADER_java_util_Hashtable$5
#define HEADER_java_util_Hashtable$5

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/MapEntry_Type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Hashtable$5 {
	java_lang_Object parent;
	jref F_this$0;
} java_util_Hashtable$5;

extern Class class_java_util_Hashtable$5;


#define VTABLE_java_util_Hashtable$5_hashCode_R_int 0
typedef jint (*func_java_util_Hashtable$5_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$5_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Hashtable$5_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable$5_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Hashtable$5_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$5_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Hashtable$5_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$5_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Hashtable$5_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$5_finalize 5
typedef void (*func_java_util_Hashtable$5_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$5_notify 6
typedef void (*func_java_util_Hashtable$5_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$5_notifyAll 7
typedef void (*func_java_util_Hashtable$5_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$5_wait 8
typedef void (*func_java_util_Hashtable$5_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$5_wait_long 9
typedef void (*func_java_util_Hashtable$5_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Hashtable$5_wait_long_int 10
typedef void (*func_java_util_Hashtable$5_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Hashtable$5_get_java_util_MapEntry_R_java_lang_Object 11
typedef jobject (*func_java_util_Hashtable$5_get_java_util_MapEntry_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Hashtable$5(jobject object, jint mark, jint depth);
void clinit_java_util_Hashtable$5(jcontext ctx);
void init_java_util_Hashtable$5_java_util_Hashtable(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Hashtable$5_get_java_util_MapEntry_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
