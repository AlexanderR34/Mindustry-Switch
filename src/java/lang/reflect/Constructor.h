#ifndef HEADER_java_lang_reflect_Constructor
#define HEADER_java_lang_reflect_Constructor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Constructor {
	java_lang_Object parent;
	jref F_method;
} java_lang_reflect_Constructor;

extern Class class_java_lang_reflect_Constructor;


#define VTABLE_java_lang_reflect_Constructor_hashCode_R_int 0
typedef jint (*func_java_lang_reflect_Constructor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_reflect_Constructor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Constructor_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_reflect_Constructor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_reflect_Constructor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_reflect_Constructor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_finalize 5
typedef void (*func_java_lang_reflect_Constructor_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_notify 6
typedef void (*func_java_lang_reflect_Constructor_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_notifyAll 7
typedef void (*func_java_lang_reflect_Constructor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_wait 8
typedef void (*func_java_lang_reflect_Constructor_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_wait_long 9
typedef void (*func_java_lang_reflect_Constructor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_reflect_Constructor_wait_long_int 10
typedef void (*func_java_lang_reflect_Constructor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_reflect_Constructor_getName_R_java_lang_String 11
typedef jobject (*func_java_lang_reflect_Constructor_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_isAccessible_R_boolean 12
typedef jbool (*func_java_lang_reflect_Constructor_isAccessible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_setAccessible_boolean 13
typedef void (*func_java_lang_reflect_Constructor_setAccessible_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_lang_reflect_Constructor_getModifiers_R_int 14
typedef jint (*func_java_lang_reflect_Constructor_getModifiers_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_isVarArgs_R_boolean 15
typedef jbool (*func_java_lang_reflect_Constructor_isVarArgs_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class 16
typedef jobject (*func_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation 17
typedef jobject (*func_java_lang_reflect_Constructor_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Constructor_isAnnotationPresent_java_lang_Class_R_boolean 18
typedef jbool (*func_java_lang_reflect_Constructor_isAnnotationPresent_java_lang_Class_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object 19
typedef jobject (*func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class 20
typedef jobject (*func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_lang_reflect_Constructor(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Constructor(jcontext ctx);
void init_java_lang_reflect_Constructor_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_reflect_Constructor_getName_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Constructor_isAccessible_R_boolean(jcontext ctx, jobject self);
void M_java_lang_reflect_Constructor_setAccessible_boolean(jcontext ctx, jobject self, jbool param0);
jint M_java_lang_reflect_Constructor_getModifiers_R_int(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Constructor_isVarArgs_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Constructor_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Constructor_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject SM_java_lang_reflect_Constructor_nativeCreate_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0);
jobject M_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
