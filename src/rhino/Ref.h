#ifndef HEADER_rhino_Ref
#define HEADER_rhino_Ref

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Ref {
	java_lang_Object parent;
} rhino_Ref;

extern Class class_rhino_Ref;


#define VTABLE_rhino_Ref_hashCode_R_int 0
typedef jint (*func_rhino_Ref_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Ref_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Ref_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Ref_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Ref_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Ref_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Ref_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Ref_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Ref_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Ref_finalize 5
typedef void (*func_rhino_Ref_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Ref_notify 6
typedef void (*func_rhino_Ref_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Ref_notifyAll 7
typedef void (*func_rhino_Ref_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Ref_wait 8
typedef void (*func_rhino_Ref_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Ref_wait_long 9
typedef void (*func_rhino_Ref_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Ref_wait_long_int 10
typedef void (*func_rhino_Ref_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Ref_has_rhino_Context_R_boolean 11
typedef jbool (*func_rhino_Ref_has_rhino_Context_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Ref_get_rhino_Context_R_java_lang_Object 12
typedef jobject (*func_rhino_Ref_get_rhino_Context_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Ref_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_rhino_Ref_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Ref_delete_rhino_Context_R_boolean 14
typedef jbool (*func_rhino_Ref_delete_rhino_Context_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_Ref(jobject object, jint mark, jint depth);
void clinit_rhino_Ref(jcontext ctx);
void init_rhino_Ref(jcontext ctx, jobject self);
jbool M_rhino_Ref_has_rhino_Context_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_Ref_delete_rhino_Context_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
