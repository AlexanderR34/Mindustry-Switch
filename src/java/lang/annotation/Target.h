#ifndef HEADER_java_lang_annotation_Target
#define HEADER_java_lang_annotation_Target

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_annotation_Target {
	java_lang_Object parent;
	jref F_value;
} java_lang_annotation_Target;

extern Class class_java_lang_annotation_Target;


#define INDEX_java_lang_annotation_Target_annotationType_R_java_lang_Class 0
typedef jobject (*func_java_lang_annotation_Target_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define INDEX_java_lang_annotation_Target_value_R_Array1_java_lang_annotation_ElementType 1
typedef jobject (*func_java_lang_annotation_Target_value_R_Array1_java_lang_annotation_ElementType)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_hashCode_R_int 0
typedef jint (*func_java_lang_annotation_Target_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_annotation_Target_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_annotation_Target_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_annotation_Target_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_annotation_Target_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_annotation_Target_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_finalize 5
typedef void (*func_java_lang_annotation_Target_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_notify 6
typedef void (*func_java_lang_annotation_Target_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_notifyAll 7
typedef void (*func_java_lang_annotation_Target_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_wait 8
typedef void (*func_java_lang_annotation_Target_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_wait_long 9
typedef void (*func_java_lang_annotation_Target_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_annotation_Target_wait_long_int 10
typedef void (*func_java_lang_annotation_Target_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_annotation_Target_annotationType_R_java_lang_Class 11
typedef jobject (*func_java_lang_annotation_Target_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Target_value_R_Array1_java_lang_annotation_ElementType 12
typedef jobject (*func_java_lang_annotation_Target_value_R_Array1_java_lang_annotation_ElementType)(jcontext ctx, jobject self);

void mark_java_lang_annotation_Target(jobject object, jint mark, jint depth);
void clinit_java_lang_annotation_Target(jcontext ctx);
jobject M_java_lang_annotation_Target_annotationType_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_annotation_Target_value_R_Array1_java_lang_annotation_ElementType(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
