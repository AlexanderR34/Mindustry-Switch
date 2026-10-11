#ifndef HEADER_rhino_classfile_SuperBlock
#define HEADER_rhino_classfile_SuperBlock

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_SuperBlock {
	java_lang_Object parent;
	jint F_index;
	jint F_start;
	jint F_end;
	jref F_locals;
	jref F_stack;
	jbool F_isInitialized;
	jbool F_isInQueue;
} rhino_classfile_SuperBlock;

extern Class class_rhino_classfile_SuperBlock;


#define VTABLE_rhino_classfile_SuperBlock_hashCode_R_int 0
typedef jint (*func_rhino_classfile_SuperBlock_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_SuperBlock_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_SuperBlock_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_SuperBlock_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_SuperBlock_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_SuperBlock_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_finalize 5
typedef void (*func_rhino_classfile_SuperBlock_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_notify 6
typedef void (*func_rhino_classfile_SuperBlock_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_notifyAll 7
typedef void (*func_rhino_classfile_SuperBlock_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_wait 8
typedef void (*func_rhino_classfile_SuperBlock_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_wait_long 9
typedef void (*func_rhino_classfile_SuperBlock_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_SuperBlock_wait_long_int 10
typedef void (*func_rhino_classfile_SuperBlock_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_classfile_SuperBlock_getIndex_R_int 11
typedef jint (*func_rhino_classfile_SuperBlock_getIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_getLocals_R_Array1_int 12
typedef jobject (*func_rhino_classfile_SuperBlock_getLocals_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int 13
typedef jobject (*func_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_getStack_R_Array1_int 14
typedef jobject (*func_rhino_classfile_SuperBlock_getStack_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean 15
typedef jbool (*func_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jobject param4);
#define VTABLE_rhino_classfile_SuperBlock_mergeState_Array1_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean 16
typedef jbool (*func_rhino_classfile_SuperBlock_mergeState_Array1_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
#define VTABLE_rhino_classfile_SuperBlock_getStart_R_int 17
typedef jint (*func_rhino_classfile_SuperBlock_getStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_getEnd_R_int 18
typedef jint (*func_rhino_classfile_SuperBlock_getEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_isInitialized_R_boolean 19
typedef jbool (*func_rhino_classfile_SuperBlock_isInitialized_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_setInitialized_boolean 20
typedef void (*func_rhino_classfile_SuperBlock_setInitialized_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_classfile_SuperBlock_isInQueue_R_boolean 21
typedef jbool (*func_rhino_classfile_SuperBlock_isInQueue_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_SuperBlock_setInQueue_boolean 22
typedef void (*func_rhino_classfile_SuperBlock_setInQueue_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_rhino_classfile_SuperBlock(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_SuperBlock(jcontext ctx);
void init_rhino_classfile_SuperBlock_int_int_int_Array1_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jint M_rhino_classfile_SuperBlock_getIndex_R_int(jcontext ctx, jobject self);
jobject M_rhino_classfile_SuperBlock_getLocals_R_Array1_int(jcontext ctx, jobject self);
jobject M_rhino_classfile_SuperBlock_getTrimmedLocals_R_Array1_int(jcontext ctx, jobject self);
jobject M_rhino_classfile_SuperBlock_getStack_R_Array1_int(jcontext ctx, jobject self);
jbool M_rhino_classfile_SuperBlock_merge_Array1_int_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jobject param4);
jbool M_rhino_classfile_SuperBlock_mergeState_Array1_int_Array1_int_int_rhino_classfile_ConstantPool_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
jint M_rhino_classfile_SuperBlock_getStart_R_int(jcontext ctx, jobject self);
jint M_rhino_classfile_SuperBlock_getEnd_R_int(jcontext ctx, jobject self);
jobject M_rhino_classfile_SuperBlock_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_rhino_classfile_SuperBlock_isInitialized_R_boolean(jcontext ctx, jobject self);
void M_rhino_classfile_SuperBlock_setInitialized_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_classfile_SuperBlock_isInQueue_R_boolean(jcontext ctx, jobject self);
void M_rhino_classfile_SuperBlock_setInQueue_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
