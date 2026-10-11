#ifndef HEADER_java_lang_reflect_Field
#define HEADER_java_lang_reflect_Field

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Field {
	java_lang_Object parent;
	jlong F_offset;
	jref F_declaringClass;
	jref F_type;
	jref F_signature;
	jref F_genericType;
	jref F_name;
	jint F_modifiers;
	jref F_annotations;
} java_lang_reflect_Field;

extern Class class_java_lang_reflect_Field;


#define VTABLE_java_lang_reflect_Field_hashCode_R_int 0
typedef jint (*func_java_lang_reflect_Field_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_reflect_Field_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_reflect_Field_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_reflect_Field_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_reflect_Field_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_finalize 5
typedef void (*func_java_lang_reflect_Field_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_notify 6
typedef void (*func_java_lang_reflect_Field_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_notifyAll 7
typedef void (*func_java_lang_reflect_Field_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_wait 8
typedef void (*func_java_lang_reflect_Field_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_wait_long 9
typedef void (*func_java_lang_reflect_Field_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_reflect_Field_wait_long_int 10
typedef void (*func_java_lang_reflect_Field_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_reflect_Field_parseSignature_java_lang_String_R_java_lang_reflect_Type 11
typedef jobject (*func_java_lang_reflect_Field_parseSignature_java_lang_String_R_java_lang_reflect_Type)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class 12
typedef jobject (*func_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_getName_R_java_lang_String 13
typedef jobject (*func_java_lang_reflect_Field_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_isAccessible_R_boolean 14
typedef jbool (*func_java_lang_reflect_Field_isAccessible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_setAccessible_boolean 15
typedef void (*func_java_lang_reflect_Field_setAccessible_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_lang_reflect_Field_getModifiers_R_int 16
typedef jint (*func_java_lang_reflect_Field_getModifiers_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_isEnumConstant_R_boolean 17
typedef jbool (*func_java_lang_reflect_Field_isEnumConstant_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_isStatic_R_boolean 18
typedef jbool (*func_java_lang_reflect_Field_isStatic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_isSynthetic_R_boolean 19
typedef jbool (*func_java_lang_reflect_Field_isSynthetic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class 20
typedef jobject (*func_java_lang_reflect_Field_getType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type 21
typedef jobject (*func_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object 22
typedef jobject (*func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object 23
typedef void (*func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_reflect_Field_getByte_java_lang_Object_R_byte 24
typedef jbyte (*func_java_lang_reflect_Field_getByte_java_lang_Object_R_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_getShort_java_lang_Object_R_short 25
typedef jshort (*func_java_lang_reflect_Field_getShort_java_lang_Object_R_short)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_getChar_java_lang_Object_R_char 26
typedef jchar (*func_java_lang_reflect_Field_getChar_java_lang_Object_R_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_getInt_java_lang_Object_R_int 27
typedef jint (*func_java_lang_reflect_Field_getInt_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_getLong_java_lang_Object_R_long 28
typedef jlong (*func_java_lang_reflect_Field_getLong_java_lang_Object_R_long)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_getFloat_java_lang_Object_R_float 29
typedef jfloat (*func_java_lang_reflect_Field_getFloat_java_lang_Object_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_getDouble_java_lang_Object_R_double 30
typedef jdouble (*func_java_lang_reflect_Field_getDouble_java_lang_Object_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_getBoolean_java_lang_Object_R_boolean 31
typedef jbool (*func_java_lang_reflect_Field_getBoolean_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_setByte_java_lang_Object_byte 32
typedef void (*func_java_lang_reflect_Field_setByte_java_lang_Object_byte)(jcontext ctx, jobject self, jobject param0, jbyte param1);
#define VTABLE_java_lang_reflect_Field_setShort_java_lang_Object_short 33
typedef void (*func_java_lang_reflect_Field_setShort_java_lang_Object_short)(jcontext ctx, jobject self, jobject param0, jshort param1);
#define VTABLE_java_lang_reflect_Field_setChar_java_lang_Object_char 34
typedef void (*func_java_lang_reflect_Field_setChar_java_lang_Object_char)(jcontext ctx, jobject self, jobject param0, jchar param1);
#define VTABLE_java_lang_reflect_Field_setInt_java_lang_Object_int 35
typedef void (*func_java_lang_reflect_Field_setInt_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_reflect_Field_setLong_java_lang_Object_long 36
typedef void (*func_java_lang_reflect_Field_setLong_java_lang_Object_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_java_lang_reflect_Field_setFloat_java_lang_Object_float 37
typedef void (*func_java_lang_reflect_Field_setFloat_java_lang_Object_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_java_lang_reflect_Field_setDouble_java_lang_Object_double 38
typedef void (*func_java_lang_reflect_Field_setDouble_java_lang_Object_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_java_lang_reflect_Field_setBoolean_java_lang_Object_boolean 39
typedef void (*func_java_lang_reflect_Field_setBoolean_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation 40
typedef jobject (*func_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean 41
typedef jbool (*func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Field_getAnnotations_R_Array1_java_lang_annotation_Annotation 42
typedef jobject (*func_java_lang_reflect_Field_getAnnotations_R_Array1_java_lang_annotation_Annotation)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Field_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation 43
typedef jobject (*func_java_lang_reflect_Field_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_reflect_Field(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Field(jcontext ctx);
void init_java_lang_reflect_Field_long_java_lang_Class_java_lang_Class_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jlong param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5);
jobject M_java_lang_reflect_Field_parseSignature_java_lang_String_R_java_lang_reflect_Type(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_reflect_Field_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Field_getName_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Field_isAccessible_R_boolean(jcontext ctx, jobject self);
void M_java_lang_reflect_Field_setAccessible_boolean(jcontext ctx, jobject self, jbool param0);
jint M_java_lang_reflect_Field_getModifiers_R_int(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Field_isEnumConstant_R_boolean(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Field_isStatic_R_boolean(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Field_isSynthetic_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Field_getType_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbyte M_java_lang_reflect_Field_getByte_java_lang_Object_R_byte(jcontext ctx, jobject self, jobject param0);
jshort M_java_lang_reflect_Field_getShort_java_lang_Object_R_short(jcontext ctx, jobject self, jobject param0);
jchar M_java_lang_reflect_Field_getChar_java_lang_Object_R_char(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_reflect_Field_getInt_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jlong M_java_lang_reflect_Field_getLong_java_lang_Object_R_long(jcontext ctx, jobject self, jobject param0);
jfloat M_java_lang_reflect_Field_getFloat_java_lang_Object_R_float(jcontext ctx, jobject self, jobject param0);
jdouble M_java_lang_reflect_Field_getDouble_java_lang_Object_R_double(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_reflect_Field_getBoolean_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_lang_reflect_Field_setByte_java_lang_Object_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);
void M_java_lang_reflect_Field_setShort_java_lang_Object_short(jcontext ctx, jobject self, jobject param0, jshort param1);
void M_java_lang_reflect_Field_setChar_java_lang_Object_char(jcontext ctx, jobject self, jobject param0, jchar param1);
void M_java_lang_reflect_Field_setInt_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_lang_reflect_Field_setLong_java_lang_Object_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_java_lang_reflect_Field_setFloat_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_java_lang_reflect_Field_setDouble_java_lang_Object_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_java_lang_reflect_Field_setBoolean_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_java_lang_reflect_Field_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self);
jbool M_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_reflect_Field_getAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self);
jobject M_java_lang_reflect_Field_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
