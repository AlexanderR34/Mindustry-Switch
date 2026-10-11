#ifndef HEADER_rhino_UniqueTag
#define HEADER_rhino_UniqueTag

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_UniqueTag {
	java_lang_Object parent;
	jint F_tagId;
} rhino_UniqueTag;

extern Class class_rhino_UniqueTag;

extern jint SF_rhino_UniqueTag_ID_NOT_FOUND;
extern jint SF_rhino_UniqueTag_ID_NULL_VALUE;
extern jint SF_rhino_UniqueTag_ID_DOUBLE_MARK;
extern jobject SF_rhino_UniqueTag_NOT_FOUND;
extern jobject SF_rhino_UniqueTag_NULL_VALUE;
extern jobject SF_rhino_UniqueTag_DOUBLE_MARK;

#define VTABLE_rhino_UniqueTag_hashCode_R_int 0
typedef jint (*func_rhino_UniqueTag_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_UniqueTag_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_UniqueTag_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_UniqueTag_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_UniqueTag_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_UniqueTag_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_UniqueTag_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_UniqueTag_toString_R_java_lang_String 4
typedef jobject (*func_rhino_UniqueTag_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_UniqueTag_finalize 5
typedef void (*func_rhino_UniqueTag_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_UniqueTag_notify 6
typedef void (*func_rhino_UniqueTag_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_UniqueTag_notifyAll 7
typedef void (*func_rhino_UniqueTag_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_UniqueTag_wait 8
typedef void (*func_rhino_UniqueTag_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_UniqueTag_wait_long 9
typedef void (*func_rhino_UniqueTag_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_UniqueTag_wait_long_int 10
typedef void (*func_rhino_UniqueTag_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_UniqueTag_readResolve_R_java_lang_Object 11
typedef jobject (*func_rhino_UniqueTag_readResolve_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_rhino_UniqueTag(jobject object, jint mark, jint depth);
void clinit_rhino_UniqueTag(jcontext ctx);
void init_rhino_UniqueTag_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_UniqueTag_readResolve_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_UniqueTag_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
