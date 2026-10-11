#ifndef HEADER_java_lang_Deprecated
#define HEADER_java_lang_Deprecated

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Deprecated {
	java_lang_Object parent;
	jref F_since;
	jbool F_forRemoval;
} java_lang_Deprecated;

extern Class class_java_lang_Deprecated;


#define INDEX_java_lang_Deprecated_annotationType_R_java_lang_Class 0
typedef jobject (*func_java_lang_Deprecated_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define INDEX_java_lang_Deprecated_since_R_java_lang_String 1
typedef jobject (*func_java_lang_Deprecated_since_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_java_lang_Deprecated_forRemoval_R_boolean 2
typedef jbool (*func_java_lang_Deprecated_forRemoval_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_hashCode_R_int 0
typedef jint (*func_java_lang_Deprecated_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Deprecated_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Deprecated_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Deprecated_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Deprecated_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Deprecated_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_finalize 5
typedef void (*func_java_lang_Deprecated_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_notify 6
typedef void (*func_java_lang_Deprecated_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_notifyAll 7
typedef void (*func_java_lang_Deprecated_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_wait 8
typedef void (*func_java_lang_Deprecated_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_wait_long 9
typedef void (*func_java_lang_Deprecated_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Deprecated_wait_long_int 10
typedef void (*func_java_lang_Deprecated_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Deprecated_annotationType_R_java_lang_Class 11
typedef jobject (*func_java_lang_Deprecated_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_since_R_java_lang_String 12
typedef jobject (*func_java_lang_Deprecated_since_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Deprecated_forRemoval_R_boolean 13
typedef jbool (*func_java_lang_Deprecated_forRemoval_R_boolean)(jcontext ctx, jobject self);

void mark_java_lang_Deprecated(jobject object, jint mark, jint depth);
void clinit_java_lang_Deprecated(jcontext ctx);
jobject M_java_lang_Deprecated_annotationType_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_Deprecated_since_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_lang_Deprecated_forRemoval_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
