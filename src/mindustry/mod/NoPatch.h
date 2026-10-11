#ifndef HEADER_mindustry_mod_NoPatch
#define HEADER_mindustry_mod_NoPatch

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_NoPatch {
	java_lang_Object parent;
} mindustry_mod_NoPatch;

extern Class class_mindustry_mod_NoPatch;


#define INDEX_mindustry_mod_NoPatch_annotationType_R_java_lang_Class 0
typedef jobject (*func_mindustry_mod_NoPatch_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_NoPatch_hashCode_R_int 0
typedef jint (*func_mindustry_mod_NoPatch_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_NoPatch_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_NoPatch_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_NoPatch_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_NoPatch_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_NoPatch_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_NoPatch_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_NoPatch_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_NoPatch_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_NoPatch_finalize 5
typedef void (*func_mindustry_mod_NoPatch_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_NoPatch_notify 6
typedef void (*func_mindustry_mod_NoPatch_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_NoPatch_notifyAll 7
typedef void (*func_mindustry_mod_NoPatch_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_NoPatch_wait 8
typedef void (*func_mindustry_mod_NoPatch_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_NoPatch_wait_long 9
typedef void (*func_mindustry_mod_NoPatch_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_NoPatch_wait_long_int 10
typedef void (*func_mindustry_mod_NoPatch_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_NoPatch_annotationType_R_java_lang_Class 11
typedef jobject (*func_mindustry_mod_NoPatch_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_mod_NoPatch(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_NoPatch(jcontext ctx);
jobject M_mindustry_mod_NoPatch_annotationType_R_java_lang_Class(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
