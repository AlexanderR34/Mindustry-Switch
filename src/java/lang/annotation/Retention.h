#ifndef HEADER_java_lang_annotation_Retention
#define HEADER_java_lang_annotation_Retention

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_annotation_Retention {
	java_lang_Object parent;
	jref F_value;
} java_lang_annotation_Retention;

extern Class class_java_lang_annotation_Retention;


#define INDEX_java_lang_annotation_Retention_annotationType_R_java_lang_Class 0
typedef jobject (*func_java_lang_annotation_Retention_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define INDEX_java_lang_annotation_Retention_value_R_java_lang_annotation_RetentionPolicy 1
typedef jobject (*func_java_lang_annotation_Retention_value_R_java_lang_annotation_RetentionPolicy)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_hashCode_R_int 0
typedef jint (*func_java_lang_annotation_Retention_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_annotation_Retention_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_annotation_Retention_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_annotation_Retention_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_annotation_Retention_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_annotation_Retention_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_finalize 5
typedef void (*func_java_lang_annotation_Retention_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_notify 6
typedef void (*func_java_lang_annotation_Retention_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_notifyAll 7
typedef void (*func_java_lang_annotation_Retention_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_wait 8
typedef void (*func_java_lang_annotation_Retention_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_wait_long 9
typedef void (*func_java_lang_annotation_Retention_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_annotation_Retention_wait_long_int 10
typedef void (*func_java_lang_annotation_Retention_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_annotation_Retention_annotationType_R_java_lang_Class 11
typedef jobject (*func_java_lang_annotation_Retention_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_annotation_Retention_value_R_java_lang_annotation_RetentionPolicy 12
typedef jobject (*func_java_lang_annotation_Retention_value_R_java_lang_annotation_RetentionPolicy)(jcontext ctx, jobject self);

void mark_java_lang_annotation_Retention(jobject object, jint mark, jint depth);
void clinit_java_lang_annotation_Retention(jcontext ctx);
jobject M_java_lang_annotation_Retention_annotationType_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_annotation_Retention_value_R_java_lang_annotation_RetentionPolicy(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
