#ifndef HEADER_java_io_ObjectStreamField
#define HEADER_java_io_ObjectStreamField

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_ObjectStreamField {
	java_lang_Object parent;
	jref F_name;
	jref F_signature;
	jref F_type;
	jbool F_unshared;
	jref F_field;
	jint F_offset;
} java_io_ObjectStreamField;

extern Class class_java_io_ObjectStreamField;


#define VTABLE_java_io_ObjectStreamField_hashCode_R_int 0
typedef jint (*func_java_io_ObjectStreamField_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_ObjectStreamField_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_ObjectStreamField_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_ObjectStreamField_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_ObjectStreamField_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_toString_R_java_lang_String 4
typedef jobject (*func_java_io_ObjectStreamField_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_finalize 5
typedef void (*func_java_io_ObjectStreamField_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_notify 6
typedef void (*func_java_io_ObjectStreamField_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_notifyAll 7
typedef void (*func_java_io_ObjectStreamField_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_wait 8
typedef void (*func_java_io_ObjectStreamField_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_wait_long 9
typedef void (*func_java_io_ObjectStreamField_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_ObjectStreamField_wait_long_int 10
typedef void (*func_java_io_ObjectStreamField_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_ObjectStreamField_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_io_ObjectStreamField_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_ObjectStreamField_getName_R_java_lang_String 12
typedef jobject (*func_java_io_ObjectStreamField_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_getType_R_java_lang_Class 13
typedef jobject (*func_java_io_ObjectStreamField_getType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_getTypeCode_R_char 14
typedef jchar (*func_java_io_ObjectStreamField_getTypeCode_R_char)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_getTypeString_R_java_lang_String 15
typedef jobject (*func_java_io_ObjectStreamField_getTypeString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_getOffset_R_int 16
typedef jint (*func_java_io_ObjectStreamField_getOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_setOffset_int 17
typedef void (*func_java_io_ObjectStreamField_setOffset_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_ObjectStreamField_isPrimitive_R_boolean 18
typedef jbool (*func_java_io_ObjectStreamField_isPrimitive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_isUnshared_R_boolean 19
typedef jbool (*func_java_io_ObjectStreamField_isUnshared_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_getField_R_java_lang_reflect_Field 20
typedef jobject (*func_java_io_ObjectStreamField_getField_R_java_lang_reflect_Field)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectStreamField_getSignature_R_java_lang_String 21
typedef jobject (*func_java_io_ObjectStreamField_getSignature_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_io_ObjectStreamField(jobject object, jint mark, jint depth);
void clinit_java_io_ObjectStreamField(jcontext ctx);
void init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_io_ObjectStreamField_java_lang_String_java_lang_Class_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void init_java_io_ObjectStreamField_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void init_java_io_ObjectStreamField_java_lang_reflect_Field_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
jobject M_java_io_ObjectStreamField_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_ObjectStreamField_getType_R_java_lang_Class(jcontext ctx, jobject self);
jchar M_java_io_ObjectStreamField_getTypeCode_R_char(jcontext ctx, jobject self);
jobject M_java_io_ObjectStreamField_getTypeString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_io_ObjectStreamField_getOffset_R_int(jcontext ctx, jobject self);
void M_java_io_ObjectStreamField_setOffset_int(jcontext ctx, jobject self, jint param0);
jbool M_java_io_ObjectStreamField_isPrimitive_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_ObjectStreamField_isUnshared_R_boolean(jcontext ctx, jobject self);
jint M_java_io_ObjectStreamField_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_ObjectStreamField_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_ObjectStreamField_getField_R_java_lang_reflect_Field(jcontext ctx, jobject self);
jobject M_java_io_ObjectStreamField_getSignature_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_io_ObjectStreamField_getClassSignature_java_lang_Class_R_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
