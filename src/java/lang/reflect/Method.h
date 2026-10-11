#ifndef HEADER_java_lang_reflect_Method
#define HEADER_java_lang_reflect_Method

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Method {
	java_lang_Object parent;
	jlong F_address;
	jlong F_offset;
	jref F_declaringClass;
	jref F_desc;
	jref F_name;
	jint F_modifiers;
	jref F_annotations;
	jref F_parameterTypes;
	jref F_returnType;
	jlong F_nativeFunc;
} java_lang_reflect_Method;

extern Class class_java_lang_reflect_Method;


#define VTABLE_java_lang_reflect_Method_hashCode_R_int 0
typedef jint (*func_java_lang_reflect_Method_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_reflect_Method_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Method_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_reflect_Method_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_reflect_Method_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_reflect_Method_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_finalize 5
typedef void (*func_java_lang_reflect_Method_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_notify 6
typedef void (*func_java_lang_reflect_Method_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_notifyAll 7
typedef void (*func_java_lang_reflect_Method_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_wait 8
typedef void (*func_java_lang_reflect_Method_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_wait_long 9
typedef void (*func_java_lang_reflect_Method_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_reflect_Method_wait_long_int 10
typedef void (*func_java_lang_reflect_Method_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_reflect_Method_ensureSignatureInitialized 11
typedef void (*func_java_lang_reflect_Method_ensureSignatureInitialized)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class 12
typedef jobject (*func_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_getName_R_java_lang_String 13
typedef jobject (*func_java_lang_reflect_Method_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_isAccessible_R_boolean 14
typedef jbool (*func_java_lang_reflect_Method_isAccessible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_setAccessible_boolean 15
typedef void (*func_java_lang_reflect_Method_setAccessible_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_lang_reflect_Method_isVarArgs_R_boolean 16
typedef jbool (*func_java_lang_reflect_Method_isVarArgs_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_getModifiers_R_int 17
typedef jint (*func_java_lang_reflect_Method_getModifiers_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation 19
typedef jobject (*func_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean 20
typedef jbool (*func_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation 21
typedef jobject (*func_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class 22
typedef jobject (*func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class 23
typedef jobject (*func_java_lang_reflect_Method_getReturnType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Method_isDefault_R_boolean 24
typedef jbool (*func_java_lang_reflect_Method_isDefault_R_boolean)(jcontext ctx, jobject self);

void mark_java_lang_reflect_Method(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Method(jcontext ctx);
void init_java_lang_reflect_Method_long_long_java_lang_Class_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jlong param0, jlong param1, jobject param2, jobject param3, jobject param4, jint param5);
void M_java_lang_reflect_Method_ensureSignatureInitialized(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Method_getName_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Method_isAccessible_R_boolean(jcontext ctx, jobject self);
void M_java_lang_reflect_Method_setAccessible_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_lang_reflect_Method_isVarArgs_R_boolean(jcontext ctx, jobject self);
jint M_java_lang_reflect_Method_getModifiers_R_int(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_lang_reflect_Method_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Method_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_reflect_Method_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Method_getReturnType_R_java_lang_Class(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Method_isDefault_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
