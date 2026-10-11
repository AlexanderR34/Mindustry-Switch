#ifndef HEADER_rhino_classfile_ClassFileField
#define HEADER_rhino_classfile_ClassFileField

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_ClassFileField {
	java_lang_Object parent;
	jshort F_itsNameIndex;
	jshort F_itsTypeIndex;
	jshort F_itsFlags;
	jbool F_itsHasAttributes;
	jshort F_itsAttr1;
	jshort F_itsAttr2;
	jshort F_itsAttr3;
	jint F_itsIndex;
} rhino_classfile_ClassFileField;

extern Class class_rhino_classfile_ClassFileField;


#define VTABLE_rhino_classfile_ClassFileField_hashCode_R_int 0
typedef jint (*func_rhino_classfile_ClassFileField_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileField_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_ClassFileField_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileField_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_ClassFileField_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileField_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_ClassFileField_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileField_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_ClassFileField_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileField_finalize 5
typedef void (*func_rhino_classfile_ClassFileField_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileField_notify 6
typedef void (*func_rhino_classfile_ClassFileField_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileField_notifyAll 7
typedef void (*func_rhino_classfile_ClassFileField_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileField_wait 8
typedef void (*func_rhino_classfile_ClassFileField_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileField_wait_long 9
typedef void (*func_rhino_classfile_ClassFileField_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ClassFileField_wait_long_int 10
typedef void (*func_rhino_classfile_ClassFileField_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileField_setAttributes_short_short_short_int 11
typedef void (*func_rhino_classfile_ClassFileField_setAttributes_short_short_short_int)(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jint param3);
#define VTABLE_rhino_classfile_ClassFileField_write_Array1_byte_int_R_int 12
typedef jint (*func_rhino_classfile_ClassFileField_write_Array1_byte_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileField_getWriteSize_R_int 13
typedef jint (*func_rhino_classfile_ClassFileField_getWriteSize_R_int)(jcontext ctx, jobject self);

void mark_rhino_classfile_ClassFileField(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_ClassFileField(jcontext ctx);
void init_rhino_classfile_ClassFileField_short_short_short(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2);
void M_rhino_classfile_ClassFileField_setAttributes_short_short_short_int(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jint param3);
jint M_rhino_classfile_ClassFileField_write_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_rhino_classfile_ClassFileField_getWriteSize_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
