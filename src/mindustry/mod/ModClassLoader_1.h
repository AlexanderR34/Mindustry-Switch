#ifndef HEADER_mindustry_mod_ModClassLoader$1
#define HEADER_mindustry_mod_ModClassLoader$1

#include "Clearwing.h"
#include "java/lang/ThreadLocal.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_ModClassLoader$1 {
	java_lang_ThreadLocal parent;
	jref F_this$0;
} mindustry_mod_ModClassLoader$1;

extern Class class_mindustry_mod_ModClassLoader$1;


#define VTABLE_mindustry_mod_ModClassLoader$1_hashCode_R_int 0
typedef jint (*func_mindustry_mod_ModClassLoader$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_ModClassLoader$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_ModClassLoader$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_ModClassLoader$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_ModClassLoader$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_finalize 5
typedef void (*func_mindustry_mod_ModClassLoader$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_notify 6
typedef void (*func_mindustry_mod_ModClassLoader$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_notifyAll 7
typedef void (*func_mindustry_mod_ModClassLoader$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_wait 8
typedef void (*func_mindustry_mod_ModClassLoader$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_wait_long 9
typedef void (*func_mindustry_mod_ModClassLoader$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_ModClassLoader$1_wait_long_int 10
typedef void (*func_mindustry_mod_ModClassLoader$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Object 11
typedef jobject (*func_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_get_R_java_lang_Object 12
typedef jobject (*func_mindustry_mod_ModClassLoader$1_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_set_java_lang_Object 13
typedef void (*func_mindustry_mod_ModClassLoader$1_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader$1_remove 14
typedef void (*func_mindustry_mod_ModClassLoader$1_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Boolean 15
typedef jobject (*func_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Boolean)(jcontext ctx, jobject self);

void mark_mindustry_mod_ModClassLoader$1(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_ModClassLoader$1(jcontext ctx);
void init_mindustry_mod_ModClassLoader$1_mindustry_mod_ModClassLoader(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Boolean(jcontext ctx, jobject self);
jobject M_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
