#ifndef HEADER_java_lang_reflect_Field$ParameterizedTypeImpl
#define HEADER_java_lang_reflect_Field$ParameterizedTypeImpl

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/ParameterizedType.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Field$ParameterizedTypeImpl {
	java_lang_Object parent;
	jref F_args;
	jref F_raw;
	jref F_owner;
} java_lang_reflect_Field$ParameterizedTypeImpl;

extern Class class_java_lang_reflect_Field$ParameterizedTypeImpl;


#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_hashCode_R_int 0
typedef jint (*func_java_lang_reflect_Field$ParameterizedTypeImpl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_reflect_Field$ParameterizedTypeImpl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_reflect_Field$ParameterizedTypeImpl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_reflect_Field$ParameterizedTypeImpl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_reflect_Field$ParameterizedTypeImpl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_finalize 5
typedef void (*func_java_lang_reflect_Field$ParameterizedTypeImpl_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_notify 6
typedef void (*func_java_lang_reflect_Field$ParameterizedTypeImpl_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_notifyAll 7
typedef void (*func_java_lang_reflect_Field$ParameterizedTypeImpl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_wait 8
typedef void (*func_java_lang_reflect_Field$ParameterizedTypeImpl_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_wait_long 9
typedef void (*func_java_lang_reflect_Field$ParameterizedTypeImpl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_wait_long_int 10
typedef void (*func_java_lang_reflect_Field$ParameterizedTypeImpl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_getActualTypeArguments_R_Array1_java_lang_reflect_Type 11
typedef jobject (*func_java_lang_reflect_Field$ParameterizedTypeImpl_getActualTypeArguments_R_Array1_java_lang_reflect_Type)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_getRawType_R_java_lang_reflect_Type 12
typedef jobject (*func_java_lang_reflect_Field$ParameterizedTypeImpl_getRawType_R_java_lang_reflect_Type)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$ParameterizedTypeImpl_getOwnerType_R_java_lang_reflect_Type 13
typedef jobject (*func_java_lang_reflect_Field$ParameterizedTypeImpl_getOwnerType_R_java_lang_reflect_Type)(jcontext ctx, jobject self);

void mark_java_lang_reflect_Field$ParameterizedTypeImpl(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Field$ParameterizedTypeImpl(jcontext ctx);
void init_java_lang_reflect_Field$ParameterizedTypeImpl_Array1_java_lang_reflect_Type_java_lang_reflect_Type_java_lang_reflect_Type(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_java_lang_reflect_Field$ParameterizedTypeImpl_getActualTypeArguments_R_Array1_java_lang_reflect_Type(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Field$ParameterizedTypeImpl_getRawType_R_java_lang_reflect_Type(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Field$ParameterizedTypeImpl_getOwnerType_R_java_lang_reflect_Type(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
