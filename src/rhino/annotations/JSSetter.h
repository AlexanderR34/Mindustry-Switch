#ifndef HEADER_rhino_annotations_JSSetter
#define HEADER_rhino_annotations_JSSetter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_annotations_JSSetter {
	java_lang_Object parent;
	jref F_value;
} rhino_annotations_JSSetter;

extern Class class_rhino_annotations_JSSetter;


#define INDEX_rhino_annotations_JSSetter_annotationType_R_java_lang_Class 0
typedef jobject (*func_rhino_annotations_JSSetter_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define INDEX_rhino_annotations_JSSetter_value_R_java_lang_String 1
typedef jobject (*func_rhino_annotations_JSSetter_value_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_hashCode_R_int 0
typedef jint (*func_rhino_annotations_JSSetter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_annotations_JSSetter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_annotations_JSSetter_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_annotations_JSSetter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_annotations_JSSetter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_toString_R_java_lang_String 4
typedef jobject (*func_rhino_annotations_JSSetter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_finalize 5
typedef void (*func_rhino_annotations_JSSetter_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_notify 6
typedef void (*func_rhino_annotations_JSSetter_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_notifyAll 7
typedef void (*func_rhino_annotations_JSSetter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_wait 8
typedef void (*func_rhino_annotations_JSSetter_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_wait_long 9
typedef void (*func_rhino_annotations_JSSetter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_annotations_JSSetter_wait_long_int 10
typedef void (*func_rhino_annotations_JSSetter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_annotations_JSSetter_annotationType_R_java_lang_Class 11
typedef jobject (*func_rhino_annotations_JSSetter_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_annotations_JSSetter_value_R_java_lang_String 12
typedef jobject (*func_rhino_annotations_JSSetter_value_R_java_lang_String)(jcontext ctx, jobject self);

void mark_rhino_annotations_JSSetter(jobject object, jint mark, jint depth);
void clinit_rhino_annotations_JSSetter(jcontext ctx);
jobject M_rhino_annotations_JSSetter_annotationType_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_rhino_annotations_JSSetter_value_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
