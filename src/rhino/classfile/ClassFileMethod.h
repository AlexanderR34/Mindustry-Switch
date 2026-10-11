#ifndef HEADER_rhino_classfile_ClassFileMethod
#define HEADER_rhino_classfile_ClassFileMethod

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_ClassFileMethod {
	java_lang_Object parent;
	jref F_itsName;
	jref F_itsType;
	jshort F_itsNameIndex;
	jshort F_itsTypeIndex;
	jshort F_itsFlags;
	jref F_itsCodeAttribute;
} rhino_classfile_ClassFileMethod;

extern Class class_rhino_classfile_ClassFileMethod;


#define VTABLE_rhino_classfile_ClassFileMethod_hashCode_R_int 0
typedef jint (*func_rhino_classfile_ClassFileMethod_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_ClassFileMethod_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileMethod_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_ClassFileMethod_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_ClassFileMethod_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_ClassFileMethod_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_finalize 5
typedef void (*func_rhino_classfile_ClassFileMethod_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_notify 6
typedef void (*func_rhino_classfile_ClassFileMethod_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_notifyAll 7
typedef void (*func_rhino_classfile_ClassFileMethod_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_wait 8
typedef void (*func_rhino_classfile_ClassFileMethod_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_wait_long 9
typedef void (*func_rhino_classfile_ClassFileMethod_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ClassFileMethod_wait_long_int 10
typedef void (*func_rhino_classfile_ClassFileMethod_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileMethod_setCodeAttribute_Array1_byte 11
typedef void (*func_rhino_classfile_ClassFileMethod_setCodeAttribute_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileMethod_write_Array1_byte_int_R_int 12
typedef jint (*func_rhino_classfile_ClassFileMethod_write_Array1_byte_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileMethod_getWriteSize_R_int 13
typedef jint (*func_rhino_classfile_ClassFileMethod_getWriteSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_getName_R_java_lang_String 14
typedef jobject (*func_rhino_classfile_ClassFileMethod_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_getType_R_java_lang_String 15
typedef jobject (*func_rhino_classfile_ClassFileMethod_getType_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileMethod_getFlags_R_short 16
typedef jshort (*func_rhino_classfile_ClassFileMethod_getFlags_R_short)(jcontext ctx, jobject self);

void mark_rhino_classfile_ClassFileMethod(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_ClassFileMethod(jcontext ctx);
void init_rhino_classfile_ClassFileMethod_java_lang_String_short_java_lang_String_short_short(jcontext ctx, jobject self, jobject param0, jshort param1, jobject param2, jshort param3, jshort param4);
void M_rhino_classfile_ClassFileMethod_setCodeAttribute_Array1_byte(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_ClassFileMethod_write_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_rhino_classfile_ClassFileMethod_getWriteSize_R_int(jcontext ctx, jobject self);
jobject M_rhino_classfile_ClassFileMethod_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_classfile_ClassFileMethod_getType_R_java_lang_String(jcontext ctx, jobject self);
jshort M_rhino_classfile_ClassFileMethod_getFlags_R_short(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
