#ifndef HEADER_java_lang_annotation_Annotation
#define HEADER_java_lang_annotation_Annotation

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_annotation_Annotation {
	java_lang_Object parent;
} java_lang_annotation_Annotation;

extern Class class_java_lang_annotation_Annotation;


#define INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class 0
typedef jobject (*func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define INDEX_java_lang_annotation_Annotation_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_annotation_Annotation_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_lang_annotation_Annotation_hashCode_R_int 2
typedef jint (*func_java_lang_annotation_Annotation_hashCode_R_int)(jcontext ctx, jobject self);
#define INDEX_java_lang_annotation_Annotation_toString_R_java_lang_String 3
typedef jobject (*func_java_lang_annotation_Annotation_toString_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_lang_annotation_Annotation(jobject object, jint mark, jint depth);
void clinit_java_lang_annotation_Annotation(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
