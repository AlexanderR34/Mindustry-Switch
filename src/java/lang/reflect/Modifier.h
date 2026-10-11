#ifndef HEADER_java_lang_reflect_Modifier
#define HEADER_java_lang_reflect_Modifier

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Modifier {
	java_lang_Object parent;
} java_lang_reflect_Modifier;

extern Class class_java_lang_reflect_Modifier;

extern jint SF_java_lang_reflect_Modifier_PUBLIC;
extern jint SF_java_lang_reflect_Modifier_PRIVATE;
extern jint SF_java_lang_reflect_Modifier_PROTECTED;
extern jint SF_java_lang_reflect_Modifier_STATIC;
extern jint SF_java_lang_reflect_Modifier_FINAL;
extern jint SF_java_lang_reflect_Modifier_SYNCHRONIZED;
extern jint SF_java_lang_reflect_Modifier_VOLATILE;
extern jint SF_java_lang_reflect_Modifier_TRANSIENT;
extern jint SF_java_lang_reflect_Modifier_NATIVE;
extern jint SF_java_lang_reflect_Modifier_INTERFACE;
extern jint SF_java_lang_reflect_Modifier_ABSTRACT;
extern jint SF_java_lang_reflect_Modifier_STRICT;
extern jint SF_java_lang_reflect_Modifier_BRIDGE;
extern jint SF_java_lang_reflect_Modifier_VARARGS;
extern jint SF_java_lang_reflect_Modifier_SYNTHETIC;
extern jint SF_java_lang_reflect_Modifier_ANNOTATION;
extern jint SF_java_lang_reflect_Modifier_ENUM;
extern jint SF_java_lang_reflect_Modifier_MANDATED;
extern jint SF_java_lang_reflect_Modifier_CLASS_MODIFIERS;
extern jint SF_java_lang_reflect_Modifier_INTERFACE_MODIFIERS;
extern jint SF_java_lang_reflect_Modifier_CONSTRUCTOR_MODIFIERS;
extern jint SF_java_lang_reflect_Modifier_METHOD_MODIFIERS;
extern jint SF_java_lang_reflect_Modifier_FIELD_MODIFIERS;
extern jint SF_java_lang_reflect_Modifier_PARAMETER_MODIFIERS;
extern jint SF_java_lang_reflect_Modifier_ACCESS_MODIFIERS;

#define VTABLE_java_lang_reflect_Modifier_hashCode_R_int 0
typedef jint (*func_java_lang_reflect_Modifier_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Modifier_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_reflect_Modifier_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Modifier_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_reflect_Modifier_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Modifier_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_reflect_Modifier_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Modifier_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_reflect_Modifier_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Modifier_finalize 5
typedef void (*func_java_lang_reflect_Modifier_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Modifier_notify 6
typedef void (*func_java_lang_reflect_Modifier_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Modifier_notifyAll 7
typedef void (*func_java_lang_reflect_Modifier_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Modifier_wait 8
typedef void (*func_java_lang_reflect_Modifier_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Modifier_wait_long 9
typedef void (*func_java_lang_reflect_Modifier_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_reflect_Modifier_wait_long_int 10
typedef void (*func_java_lang_reflect_Modifier_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_reflect_Modifier(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Modifier(jcontext ctx);
void init_java_lang_reflect_Modifier(jcontext ctx, jobject self);
jbool SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isPrivate_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isProtected_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isFinal_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isSynchronized_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isVolatile_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isTransient_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isNative_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isInterface_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isAnnotation_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isEnum_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isStrict_int_R_boolean(jcontext ctx, jint param0);
jobject SM_java_lang_reflect_Modifier_toString_int_R_java_lang_String(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isSynthetic_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_lang_reflect_Modifier_isMandated_int_R_boolean(jcontext ctx, jint param0);
jint SM_java_lang_reflect_Modifier_classModifiers_R_int(jcontext ctx);
jint SM_java_lang_reflect_Modifier_interfaceModifiers_R_int(jcontext ctx);
jint SM_java_lang_reflect_Modifier_constructorModifiers_R_int(jcontext ctx);
jint SM_java_lang_reflect_Modifier_methodModifiers_R_int(jcontext ctx);
jint SM_java_lang_reflect_Modifier_fieldModifiers_R_int(jcontext ctx);
jint SM_java_lang_reflect_Modifier_parameterModifiers_R_int(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
