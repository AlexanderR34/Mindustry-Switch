#ifndef HEADER_rhino_regexp_RECompiled
#define HEADER_rhino_regexp_RECompiled

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_regexp_RECompiled {
	java_lang_Object parent;
	jref F_source;
	jint F_parenCount;
	jint F_flags;
	jref F_program;
	jint F_classCount;
	jref F_classList;
	jint F_anchorCh;
} rhino_regexp_RECompiled;

extern Class class_rhino_regexp_RECompiled;


#define VTABLE_rhino_regexp_RECompiled_hashCode_R_int 0
typedef jint (*func_rhino_regexp_RECompiled_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECompiled_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_regexp_RECompiled_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_regexp_RECompiled_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_regexp_RECompiled_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECompiled_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_regexp_RECompiled_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECompiled_toString_R_java_lang_String 4
typedef jobject (*func_rhino_regexp_RECompiled_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECompiled_finalize 5
typedef void (*func_rhino_regexp_RECompiled_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECompiled_notify 6
typedef void (*func_rhino_regexp_RECompiled_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECompiled_notifyAll 7
typedef void (*func_rhino_regexp_RECompiled_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECompiled_wait 8
typedef void (*func_rhino_regexp_RECompiled_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RECompiled_wait_long 9
typedef void (*func_rhino_regexp_RECompiled_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_regexp_RECompiled_wait_long_int 10
typedef void (*func_rhino_regexp_RECompiled_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_regexp_RECompiled(jobject object, jint mark, jint depth);
void clinit_rhino_regexp_RECompiled(jcontext ctx);
void init_rhino_regexp_RECompiled_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
