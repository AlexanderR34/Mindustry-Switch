#ifndef HEADER_rhino_annotations_JSGetter
#define HEADER_rhino_annotations_JSGetter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_annotations_JSGetter {
	java_lang_Object parent;
	jref F_value;
} rhino_annotations_JSGetter;

extern Class class_rhino_annotations_JSGetter;


#define INDEX_rhino_annotations_JSGetter_annotationType_R_java_lang_Class 0
typedef jobject (*func_rhino_annotations_JSGetter_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define INDEX_rhino_annotations_JSGetter_value_R_java_lang_String 1
typedef jobject (*func_rhino_annotations_JSGetter_value_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_hashCode_R_int 0
typedef jint (*func_rhino_annotations_JSGetter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_annotations_JSGetter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_annotations_JSGetter_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_annotations_JSGetter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_annotations_JSGetter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_toString_R_java_lang_String 4
typedef jobject (*func_rhino_annotations_JSGetter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_finalize 5
typedef void (*func_rhino_annotations_JSGetter_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_notify 6
typedef void (*func_rhino_annotations_JSGetter_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_notifyAll 7
typedef void (*func_rhino_annotations_JSGetter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_wait 8
typedef void (*func_rhino_annotations_JSGetter_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_wait_long 9
typedef void (*func_rhino_annotations_JSGetter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_annotations_JSGetter_wait_long_int 10
typedef void (*func_rhino_annotations_JSGetter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_annotations_JSGetter_annotationType_R_java_lang_Class 11
typedef jobject (*func_rhino_annotations_JSGetter_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSGetter_value_R_java_lang_String 12
typedef jobject (*func_rhino_annotations_JSGetter_value_R_java_lang_String)(jcontext ctx, jobject self);

void mark_rhino_annotations_JSGetter(jobject object, jint mark, jint depth);
void clinit_rhino_annotations_JSGetter(jcontext ctx);
jobject M_rhino_annotations_JSGetter_annotationType_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_rhino_annotations_JSGetter_value_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
