#ifndef HEADER_rhino_ResolvedOverload
#define HEADER_rhino_ResolvedOverload

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ResolvedOverload {
	java_lang_Object parent;
	jref F_types;
	jint F_index;
} rhino_ResolvedOverload;

extern Class class_rhino_ResolvedOverload;


#define VTABLE_rhino_ResolvedOverload_hashCode_R_int 0
typedef jint (*func_rhino_ResolvedOverload_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ResolvedOverload_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ResolvedOverload_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ResolvedOverload_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ResolvedOverload_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ResolvedOverload_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ResolvedOverload_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ResolvedOverload_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ResolvedOverload_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ResolvedOverload_finalize 5
typedef void (*func_rhino_ResolvedOverload_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ResolvedOverload_notify 6
typedef void (*func_rhino_ResolvedOverload_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ResolvedOverload_notifyAll 7
typedef void (*func_rhino_ResolvedOverload_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ResolvedOverload_wait 8
typedef void (*func_rhino_ResolvedOverload_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ResolvedOverload_wait_long 9
typedef void (*func_rhino_ResolvedOverload_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ResolvedOverload_wait_long_int 10
typedef void (*func_rhino_ResolvedOverload_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ResolvedOverload_matches_Array1_java_lang_Object_R_boolean 11
typedef jbool (*func_rhino_ResolvedOverload_matches_Array1_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ResolvedOverload(jobject object, jint mark, jint depth);
void clinit_rhino_ResolvedOverload(jcontext ctx);
void init_rhino_ResolvedOverload_Array1_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_rhino_ResolvedOverload_matches_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_ResolvedOverload_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ResolvedOverload_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
