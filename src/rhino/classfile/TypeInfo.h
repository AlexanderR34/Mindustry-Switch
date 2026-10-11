#ifndef HEADER_rhino_classfile_TypeInfo
#define HEADER_rhino_classfile_TypeInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_TypeInfo {
	java_lang_Object parent;
} rhino_classfile_TypeInfo;

extern Class class_rhino_classfile_TypeInfo;

extern jint SF_rhino_classfile_TypeInfo_TOP;
extern jint SF_rhino_classfile_TypeInfo_INTEGER;
extern jint SF_rhino_classfile_TypeInfo_FLOAT;
extern jint SF_rhino_classfile_TypeInfo_DOUBLE;
extern jint SF_rhino_classfile_TypeInfo_LONG;
extern jint SF_rhino_classfile_TypeInfo_NULL;
extern jint SF_rhino_classfile_TypeInfo_UNINITIALIZED_THIS;
extern jint SF_rhino_classfile_TypeInfo_OBJECT_TAG;
extern jint SF_rhino_classfile_TypeInfo_UNINITIALIZED_VAR_TAG;

#define VTABLE_rhino_classfile_TypeInfo_hashCode_R_int 0
typedef jint (*func_rhino_classfile_TypeInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_TypeInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_TypeInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_TypeInfo_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_TypeInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_TypeInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_TypeInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_TypeInfo_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_TypeInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_TypeInfo_finalize 5
typedef void (*func_rhino_classfile_TypeInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_TypeInfo_notify 6
typedef void (*func_rhino_classfile_TypeInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_TypeInfo_notifyAll 7
typedef void (*func_rhino_classfile_TypeInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_TypeInfo_wait 8
typedef void (*func_rhino_classfile_TypeInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_TypeInfo_wait_long 9
typedef void (*func_rhino_classfile_TypeInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_TypeInfo_wait_long_int 10
typedef void (*func_rhino_classfile_TypeInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_classfile_TypeInfo(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_TypeInfo(jcontext ctx);
void init_rhino_classfile_TypeInfo(jcontext ctx, jobject self);
jint SM_rhino_classfile_TypeInfo_OBJECT_int_R_int(jcontext ctx, jint param0);
jint SM_rhino_classfile_TypeInfo_OBJECT_java_lang_String_rhino_classfile_ConstantPool_R_int(jcontext ctx, jobject param0, jobject param1);
jint SM_rhino_classfile_TypeInfo_UNINITIALIZED_VARIABLE_int_R_int(jcontext ctx, jint param0);
jint SM_rhino_classfile_TypeInfo_getTag_int_R_int(jcontext ctx, jint param0);
jint SM_rhino_classfile_TypeInfo_getPayload_int_R_int(jcontext ctx, jint param0);
jobject SM_rhino_classfile_TypeInfo_getPayloadAsType_int_rhino_classfile_ConstantPool_R_java_lang_String(jcontext ctx, jint param0, jobject param1);
jint SM_rhino_classfile_TypeInfo_fromType_java_lang_String_rhino_classfile_ConstantPool_R_int(jcontext ctx, jobject param0, jobject param1);
jbool SM_rhino_classfile_TypeInfo_isTwoWords_int_R_boolean(jcontext ctx, jint param0);
jint SM_rhino_classfile_TypeInfo_merge_int_int_rhino_classfile_ConstantPool_R_int(jcontext ctx, jint param0, jint param1, jobject param2);
jobject SM_rhino_classfile_TypeInfo_toString_int_rhino_classfile_ConstantPool_R_java_lang_String(jcontext ctx, jint param0, jobject param1);
jobject SM_rhino_classfile_TypeInfo_getClassFromInternalName_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_TypeInfo_toString_Array1_int_int_rhino_classfile_ConstantPool_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_rhino_classfile_TypeInfo_print_Array1_int_Array1_int_rhino_classfile_ConstantPool(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_rhino_classfile_TypeInfo_print_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
