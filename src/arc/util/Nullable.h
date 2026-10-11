#ifndef HEADER_arc_util_Nullable
#define HEADER_arc_util_Nullable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Nullable {
	java_lang_Object parent;
} arc_util_Nullable;

extern Class class_arc_util_Nullable;


#define INDEX_arc_util_Nullable_annotationType_R_java_lang_Class 0
typedef jobject (*func_arc_util_Nullable_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Nullable_hashCode_R_int 0
typedef jint (*func_arc_util_Nullable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Nullable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Nullable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Nullable_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Nullable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Nullable_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Nullable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Nullable_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Nullable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Nullable_finalize 5
typedef void (*func_arc_util_Nullable_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Nullable_notify 6
typedef void (*func_arc_util_Nullable_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Nullable_notifyAll 7
typedef void (*func_arc_util_Nullable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Nullable_wait 8
typedef void (*func_arc_util_Nullable_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Nullable_wait_long 9
typedef void (*func_arc_util_Nullable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Nullable_wait_long_int 10
typedef void (*func_arc_util_Nullable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Nullable_annotationType_R_java_lang_Class 11
typedef jobject (*func_arc_util_Nullable_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_util_Nullable(jobject object, jint mark, jint depth);
void clinit_arc_util_Nullable(jcontext ctx);
jobject M_arc_util_Nullable_annotationType_R_java_lang_Class(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
