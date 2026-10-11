#ifndef HEADER_java_lang_reflect_Field$GenericArrayTypeImpl
#define HEADER_java_lang_reflect_Field$GenericArrayTypeImpl

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/GenericArrayType.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Field$GenericArrayTypeImpl {
	java_lang_Object parent;
	jref F_componentType;
} java_lang_reflect_Field$GenericArrayTypeImpl;

extern Class class_java_lang_reflect_Field$GenericArrayTypeImpl;


#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_hashCode_R_int 0
typedef jint (*func_java_lang_reflect_Field$GenericArrayTypeImpl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_reflect_Field$GenericArrayTypeImpl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_reflect_Field$GenericArrayTypeImpl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_reflect_Field$GenericArrayTypeImpl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_reflect_Field$GenericArrayTypeImpl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_finalize 5
typedef void (*func_java_lang_reflect_Field$GenericArrayTypeImpl_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_notify 6
typedef void (*func_java_lang_reflect_Field$GenericArrayTypeImpl_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_notifyAll 7
typedef void (*func_java_lang_reflect_Field$GenericArrayTypeImpl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_wait 8
typedef void (*func_java_lang_reflect_Field$GenericArrayTypeImpl_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_wait_long 9
typedef void (*func_java_lang_reflect_Field$GenericArrayTypeImpl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_wait_long_int 10
typedef void (*func_java_lang_reflect_Field$GenericArrayTypeImpl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_reflect_Field$GenericArrayTypeImpl_getGenericComponentType_R_java_lang_reflect_Type 11
typedef jobject (*func_java_lang_reflect_Field$GenericArrayTypeImpl_getGenericComponentType_R_java_lang_reflect_Type)(jcontext ctx, jobject self);

void mark_java_lang_reflect_Field$GenericArrayTypeImpl(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Field$GenericArrayTypeImpl(jcontext ctx);
void init_java_lang_reflect_Field$GenericArrayTypeImpl_java_lang_reflect_Type(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_reflect_Field$GenericArrayTypeImpl_getGenericComponentType_R_java_lang_reflect_Type(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
