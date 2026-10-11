#ifndef HEADER_rhino_classfile_ConstantPool
#define HEADER_rhino_classfile_ConstantPool

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_ConstantPool {
	java_lang_Object parent;
	jref F_cfw;
	jref F_itsStringConstHash;
	jref F_itsUtf8Hash;
	jref F_itsFieldRefHash;
	jref F_itsMethodRefHash;
	jref F_itsClassHash;
	jref F_itsConstantHash;
	jint F_itsTop;
	jint F_itsTopIndex;
	jref F_itsConstantData;
	jref F_itsPoolTypes;
	jref F_itsPool;
} rhino_classfile_ConstantPool;

extern Class class_rhino_classfile_ConstantPool;

extern jint SF_rhino_classfile_ConstantPool_ConstantPoolSize;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Class;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Fieldref;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Methodref;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_InterfaceMethodref;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_String;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Integer;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Float;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Long;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Double;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_NameAndType;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_Utf8;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_MethodType;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_MethodHandle;
extern jbyte SF_rhino_classfile_ConstantPool_CONSTANT_InvokeDynamic;
extern jint SF_rhino_classfile_ConstantPool_MAX_UTF_ENCODING_SIZE;

#define VTABLE_rhino_classfile_ConstantPool_hashCode_R_int 0
typedef jint (*func_rhino_classfile_ConstantPool_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantPool_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_ConstantPool_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ConstantPool_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_ConstantPool_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantPool_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_ConstantPool_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantPool_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_ConstantPool_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantPool_finalize 5
typedef void (*func_rhino_classfile_ConstantPool_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantPool_notify 6
typedef void (*func_rhino_classfile_ConstantPool_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantPool_notifyAll 7
typedef void (*func_rhino_classfile_ConstantPool_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantPool_wait 8
typedef void (*func_rhino_classfile_ConstantPool_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantPool_wait_long 9
typedef void (*func_rhino_classfile_ConstantPool_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ConstantPool_wait_long_int 10
typedef void (*func_rhino_classfile_ConstantPool_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_classfile_ConstantPool_write_Array1_byte_int_R_int 11
typedef jint (*func_rhino_classfile_ConstantPool_write_Array1_byte_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_classfile_ConstantPool_getWriteSize_R_int 12
typedef jint (*func_rhino_classfile_ConstantPool_getWriteSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ConstantPool_addConstant_int_R_int 13
typedef jint (*func_rhino_classfile_ConstantPool_addConstant_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ConstantPool_addConstant_long_R_int 14
typedef jint (*func_rhino_classfile_ConstantPool_addConstant_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ConstantPool_addConstant_float_R_int 15
typedef jint (*func_rhino_classfile_ConstantPool_addConstant_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_rhino_classfile_ConstantPool_addConstant_double_R_int 16
typedef jint (*func_rhino_classfile_ConstantPool_addConstant_double_R_int)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int 17
typedef jint (*func_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ConstantPool_addConstant_java_lang_Object_R_int 18
typedef jint (*func_rhino_classfile_ConstantPool_addConstant_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ConstantPool_isUnderUtfEncodingLimit_java_lang_String_R_boolean 19
typedef jbool (*func_rhino_classfile_ConstantPool_isUnderUtfEncodingLimit_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int 20
typedef jint (*func_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short 21
typedef jshort (*func_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short 22
typedef jshort (*func_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short 23
typedef jshort (*func_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short 24
typedef jshort (*func_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short 25
typedef jshort (*func_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short 26
typedef jshort (*func_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_classfile_ConstantPool_addInvokeDynamic_java_lang_String_java_lang_String_int_R_short 27
typedef jshort (*func_rhino_classfile_ConstantPool_addInvokeDynamic_java_lang_String_java_lang_String_int_R_short)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short 28
typedef jshort (*func_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object 29
typedef jobject (*func_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object 30
typedef void (*func_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_classfile_ConstantPool_getConstantType_int_R_byte 31
typedef jbyte (*func_rhino_classfile_ConstantPool_getConstantType_int_R_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ConstantPool_ensure_int 32
typedef void (*func_rhino_classfile_ConstantPool_ensure_int)(jcontext ctx, jobject self, jint param0);

void mark_rhino_classfile_ConstantPool(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_ConstantPool(jcontext ctx);
void init_rhino_classfile_ConstantPool_rhino_classfile_ClassFileWriter(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_ConstantPool_write_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_rhino_classfile_ConstantPool_getWriteSize_R_int(jcontext ctx, jobject self);
jint M_rhino_classfile_ConstantPool_addConstant_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_classfile_ConstantPool_addConstant_long_R_int(jcontext ctx, jobject self, jlong param0);
jint M_rhino_classfile_ConstantPool_addConstant_float_R_int(jcontext ctx, jobject self, jfloat param0);
jint M_rhino_classfile_ConstantPool_addConstant_double_R_int(jcontext ctx, jobject self, jdouble param0);
jint M_rhino_classfile_ConstantPool_addConstant_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_ConstantPool_addConstant_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_classfile_ConstantPool_isUnderUtfEncodingLimit_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_ConstantPool_getUtfEncodingLimit_java_lang_String_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jshort M_rhino_classfile_ConstantPool_addUtf8_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0);
jshort M_rhino_classfile_ConstantPool_addNameAndType_java_lang_String_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0, jobject param1);
jshort M_rhino_classfile_ConstantPool_addClass_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0);
jshort M_rhino_classfile_ConstantPool_addFieldRef_java_lang_String_java_lang_String_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jshort M_rhino_classfile_ConstantPool_addMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jshort M_rhino_classfile_ConstantPool_addInterfaceMethodRef_java_lang_String_java_lang_String_java_lang_String_R_short(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jshort M_rhino_classfile_ConstantPool_addInvokeDynamic_java_lang_String_java_lang_String_int_R_short(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jshort M_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_classfile_ConstantPool_getConstantData_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ConstantPool_setConstantData_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jbyte M_rhino_classfile_ConstantPool_getConstantType_int_R_byte(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ConstantPool_ensure_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
