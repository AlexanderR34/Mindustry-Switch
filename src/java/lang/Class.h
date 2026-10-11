#ifndef HEADER_java_lang_Class
#define HEADER_java_lang_Class

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Class {
	java_lang_Object parent;
	jlong F_nativeName;
	jref F_parentClass;
	jint F_size;
	jlong F_classVtable;
	jlong F_staticInitializer;
	jlong F_annotationInitializer;
	jlong F_markFunction;
	jbool F_primitive;
	jint F_arrayDimensions;
	jref F_componentClass;
	jref F_outerClass;
	jint F_innerClassCount;
	jlong F_nativeInnerClasses;
	jint F_access;
	jint F_interfaceCount;
	jlong F_nativeInterfaces;
	jint F_fieldCount;
	jlong F_nativeFields;
	jint F_methodCount;
	jlong F_nativeMethods;
	jint F_vtableSize;
	jlong F_nativeVtableEntries;
	jbool F_anonymous;
	jbool F_synthetic;
	jlong F_instanceOfCache;
	jlong F_interfaceCache;
	jbool F_initialized;
	jref F_name;
	jref F_interfaces;
	jref F_fields;
	jref F_methods;
	jref F_constructors;
	jref F_annotations;
	jref F_innerClasses;
} java_lang_Class;

extern Class class_java_lang_Class;


#define VTABLE_java_lang_Class_hashCode_R_int 0
typedef jint (*func_java_lang_Class_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Class_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Class_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Class_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Class_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_finalize 5
typedef void (*func_java_lang_Class_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_notify 6
typedef void (*func_java_lang_Class_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_notifyAll 7
typedef void (*func_java_lang_Class_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_wait 8
typedef void (*func_java_lang_Class_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_wait_long 9
typedef void (*func_java_lang_Class_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Class_wait_long_int 10
typedef void (*func_java_lang_Class_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Class_ensureInitialized 11
typedef void (*func_java_lang_Class_ensureInitialized)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader 12
typedef jobject (*func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getName_R_java_lang_String 13
typedef jobject (*func_java_lang_Class_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream 14
typedef jobject (*func_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_getResource_java_lang_String_R_java_net_URL 15
typedef jobject (*func_java_lang_Class_getResource_java_lang_String_R_java_net_URL)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_isArray_R_boolean 16
typedef jbool (*func_java_lang_Class_isArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean 17
typedef jbool (*func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean 18
typedef jbool (*func_java_lang_Class_isInstance_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_isInterface_R_boolean 19
typedef jbool (*func_java_lang_Class_isInterface_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_newInstance_R_java_lang_Object 20
typedef jobject (*func_java_lang_Class_newInstance_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_isAnnotation_R_boolean 21
typedef jbool (*func_java_lang_Class_isAnnotation_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation 22
typedef jobject (*func_java_lang_Class_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation 23
typedef jobject (*func_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation 24
typedef jobject (*func_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean 25
typedef jbool (*func_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field 26
typedef jobject (*func_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field 27
typedef jobject (*func_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_asSubclass_java_lang_Class_R_java_lang_Class 28
typedef jobject (*func_java_lang_Class_asSubclass_java_lang_Class_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_cast_java_lang_Object_R_java_lang_Object 29
typedef jobject (*func_java_lang_Class_cast_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_isEnum_R_boolean 30
typedef jbool (*func_java_lang_Class_isEnum_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object 31
typedef jobject (*func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_isAnonymousClass_R_boolean 32
typedef jbool (*func_java_lang_Class_isAnonymousClass_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getDeclaredClasses_R_Array1_java_lang_Class 33
typedef jobject (*func_java_lang_Class_getDeclaredClasses_R_Array1_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getDeclaringClass_R_java_lang_Class 34
typedef jobject (*func_java_lang_Class_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field 35
typedef jobject (*func_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field 36
typedef jobject (*func_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor 37
typedef jobject (*func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor 38
typedef jobject (*func_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor 39
typedef jobject (*func_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor 40
typedef jobject (*func_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method 41
typedef jobject (*func_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method 42
typedef jobject (*func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method 43
typedef jobject (*func_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method 44
typedef jobject (*func_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class 45
typedef jobject (*func_java_lang_Class_getSuperclass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getModifiers_R_int 46
typedef jint (*func_java_lang_Class_getModifiers_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_isMemberClass_R_boolean 47
typedef jbool (*func_java_lang_Class_isMemberClass_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getSimpleName_R_java_lang_String 48
typedef jobject (*func_java_lang_Class_getSimpleName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_isSynthetic_R_boolean 49
typedef jbool (*func_java_lang_Class_isSynthetic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getCanonicalName_R_java_lang_String 50
typedef jobject (*func_java_lang_Class_getCanonicalName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean 51
typedef jbool (*func_java_lang_Class_desiredAssertionStatus_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getComponentType_R_java_lang_Class 52
typedef jobject (*func_java_lang_Class_getComponentType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getInterfaces_R_Array1_java_lang_Class 53
typedef jobject (*func_java_lang_Class_getInterfaces_R_Array1_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getGenericInterfaces_R_Array1_java_lang_reflect_Type 54
typedef jobject (*func_java_lang_Class_getGenericInterfaces_R_Array1_java_lang_reflect_Type)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_isPrimitive_R_boolean 55
typedef jbool (*func_java_lang_Class_isPrimitive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getEnclosingMethod_R_java_lang_reflect_Method 56
typedef jobject (*func_java_lang_Class_getEnclosingMethod_R_java_lang_reflect_Method)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getEnclosingConstructor_R_java_lang_reflect_Constructor 57
typedef jobject (*func_java_lang_Class_getEnclosingConstructor_R_java_lang_reflect_Constructor)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_isLocalClass_R_boolean 58
typedef jbool (*func_java_lang_Class_isLocalClass_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Class_getPackage_R_java_lang_Package 59
typedef jobject (*func_java_lang_Class_getPackage_R_java_lang_Package)(jcontext ctx, jobject self);

void mark_java_lang_Class(jobject object, jint mark, jint depth);
void clinit_java_lang_Class(jcontext ctx);
void init_java_lang_Class(jcontext ctx, jobject self);
void M_java_lang_Class_ensureInitialized(jcontext ctx, jobject self);
jobject M_java_lang_Class_getClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self);
jobject SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0);
jobject SM_java_lang_Class_forName_java_lang_String_boolean_java_lang_ClassLoader_R_java_lang_Class(jcontext ctx, jobject param0, jbool param1, jobject param2);
jobject M_java_lang_Class_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Class_getResource_java_lang_String_R_java_net_URL(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_Class_isArray_R_boolean(jcontext ctx, jobject self);
jbool M_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_Class_isInstance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_Class_isInterface_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_Class_newInstance_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_lang_Class_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_lang_Class_isAnnotation_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_Class_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self);
jobject M_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self);
jbool M_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Class_asSubclass_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Class_cast_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_Class_isEnum_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jbool M_java_lang_Class_isAnonymousClass_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_Class_getDeclaredClasses_R_Array1_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_Class_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field(jcontext ctx, jobject self);
jobject M_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field(jcontext ctx, jobject self);
jobject M_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor(jcontext ctx, jobject self);
jobject M_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor(jcontext ctx, jobject self);
jobject M_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method(jcontext ctx, jobject self);
jobject M_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method(jcontext ctx, jobject self);
jobject M_java_lang_Class_getSuperclass_R_java_lang_Class(jcontext ctx, jobject self);
jint M_java_lang_Class_getModifiers_R_int(jcontext ctx, jobject self);
jbool M_java_lang_Class_isMemberClass_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_Class_getSimpleName_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_lang_Class_isSynthetic_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_Class_getCanonicalName_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_lang_Class_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_lang_Class_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_Class_desiredAssertionStatus_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_Class_getComponentType_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_Class_getInterfaces_R_Array1_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_Class_getGenericInterfaces_R_Array1_java_lang_reflect_Type(jcontext ctx, jobject self);
jbool M_java_lang_Class_isPrimitive_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_Class_getEnclosingMethod_R_java_lang_reflect_Method(jcontext ctx, jobject self);
jobject M_java_lang_Class_getEnclosingConstructor_R_java_lang_reflect_Constructor(jcontext ctx, jobject self);
jbool M_java_lang_Class_isLocalClass_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_Class_getPackage_R_java_lang_Package(jcontext ctx, jobject self);
void M_java_lang_Class_finalize(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
