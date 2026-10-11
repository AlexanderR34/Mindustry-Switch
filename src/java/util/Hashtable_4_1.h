#ifndef HEADER_java_util_Hashtable$4$1
#define HEADER_java_util_Hashtable$4$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/MapEntry_Type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Hashtable$4$1 {
	java_lang_Object parent;
	jref F_this$1;
} java_util_Hashtable$4$1;

extern Class class_java_util_Hashtable$4$1;


#define VTABLE_java_util_Hashtable$4$1_hashCode_R_int 0
typedef jint (*func_java_util_Hashtable$4$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$4$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Hashtable$4$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable$4$1_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Hashtable$4$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$4$1_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Hashtable$4$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$4$1_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Hashtable$4$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$4$1_finalize 5
typedef void (*func_java_util_Hashtable$4$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$4$1_notify 6
typedef void (*func_java_util_Hashtable$4$1_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$4$1_notifyAll 7
typedef void (*func_java_util_Hashtable$4$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$4$1_wait 8
typedef void (*func_java_util_Hashtable$4$1_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$4$1_wait_long 9
typedef void (*func_java_util_Hashtable$4$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Hashtable$4$1_wait_long_int 10
typedef void (*func_java_util_Hashtable$4$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_lang_Object 11
typedef jobject (*func_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_util_Map$Entry 12
typedef jobject (*func_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_util_Map$Entry)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Hashtable$4$1(jobject object, jint mark, jint depth);
void clinit_java_util_Hashtable$4$1(jcontext ctx);
void init_java_util_Hashtable$4$1_java_util_Hashtable$4(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Hashtable$4$1_get_java_util_MapEntry_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
