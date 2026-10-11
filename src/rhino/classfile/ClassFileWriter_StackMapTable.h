#ifndef HEADER_rhino_classfile_ClassFileWriter$StackMapTable
#define HEADER_rhino_classfile_ClassFileWriter$StackMapTable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_ClassFileWriter$StackMapTable {
	java_lang_Object parent;
	jref F_locals;
	jint F_localsTop;
	jref F_stack;
	jint F_stackTop;
	jref F_workList;
	jint F_workListTop;
	jref F_superBlocks;
	jref F_superBlockDeps;
	jref F_rawStackMap;
	jint F_rawStackMapTop;
	jbool F_wide;
	jref F_this$0;
} rhino_classfile_ClassFileWriter$StackMapTable;

extern Class class_rhino_classfile_ClassFileWriter$StackMapTable;

extern jbool SF_rhino_classfile_ClassFileWriter$StackMapTable_DEBUGSTACKMAP;

#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_hashCode_R_int 0
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_ClassFileWriter$StackMapTable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_ClassFileWriter$StackMapTable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_ClassFileWriter$StackMapTable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_ClassFileWriter$StackMapTable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_finalize 5
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_notify 6
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_notifyAll 7
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_wait 8
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_wait_long 9
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_wait_long_int 10
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_generate 11
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_generate)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock 12
typedef jobject (*func_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_isSuperBlockEnd_int_R_boolean 13
typedef jbool (*func_rhino_classfile_ClassFileWriter$StackMapTable_isSuperBlockEnd_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockDependencies_R_Array1_rhino_classfile_SuperBlock 14
typedef jobject (*func_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockDependencies_R_Array1_rhino_classfile_SuperBlock)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getBranchTarget_int_R_rhino_classfile_SuperBlock 15
typedef jobject (*func_rhino_classfile_ClassFileWriter$StackMapTable_getBranchTarget_int_R_rhino_classfile_SuperBlock)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_isBranch_int_R_boolean 16
typedef jbool (*func_rhino_classfile_ClassFileWriter$StackMapTable_isBranch_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_R_int 17
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int 18
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_verify 19
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_verify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_killSuperBlock_rhino_classfile_SuperBlock 20
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_killSuperBlock_rhino_classfile_SuperBlock)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeWorkList 21
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_executeWorkList)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeBlock_rhino_classfile_SuperBlock 22
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_executeBlock_rhino_classfile_SuperBlock)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock 23
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_addToWorkList_rhino_classfile_SuperBlock 24
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_addToWorkList_rhino_classfile_SuperBlock)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_execute_int_R_int 25
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_execute_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeALoad_int 26
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_executeALoad_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeAStore_int 27
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_executeAStore_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int 28
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int 29
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int_Array1_int_int 30
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getLocal_int_R_int 31
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_getLocal_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_setLocal_int_int 32
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_setLocal_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_push_int 33
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_push_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int 34
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_push2_long 35
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_push2_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long 36
typedef jlong (*func_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_clearStack 37
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_clearStack)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_computeWriteSize_R_int 38
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_computeWriteSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_write_Array1_byte_int_R_int 39
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_write_Array1_byte_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_computeRawStackMap 40
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_computeRawStackMap)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_getWorstCaseWriteSize_R_int 41
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_getWorstCaseWriteSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeSameFrame_int 42
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_writeSameFrame_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeSameLocalsOneStackItemFrame_Array1_int_int 43
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_writeSameLocalsOneStackItemFrame_Array1_int_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int 44
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeAppendFrame_Array1_int_int_int 45
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_writeAppendFrame_Array1_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeChopFrame_int_int 46
typedef void (*func_rhino_classfile_ClassFileWriter$StackMapTable_writeChopFrame_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_R_int 47
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_int_R_int 48
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter$StackMapTable_writeType_int_R_int 49
typedef jint (*func_rhino_classfile_ClassFileWriter$StackMapTable_writeType_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_rhino_classfile_ClassFileWriter$StackMapTable(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_ClassFileWriter$StackMapTable(jcontext ctx);
void init_rhino_classfile_ClassFileWriter$StackMapTable_rhino_classfile_ClassFileWriter(jcontext ctx, jobject self, jobject param0);
void M_rhino_classfile_ClassFileWriter$StackMapTable_generate(jcontext ctx, jobject self);
jobject M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockFromOffset_int_R_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jint param0);
jbool M_rhino_classfile_ClassFileWriter$StackMapTable_isSuperBlockEnd_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_rhino_classfile_ClassFileWriter$StackMapTable_getSuperBlockDependencies_R_Array1_rhino_classfile_SuperBlock(jcontext ctx, jobject self);
jobject M_rhino_classfile_ClassFileWriter$StackMapTable_getBranchTarget_int_R_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jint param0);
jbool M_rhino_classfile_ClassFileWriter$StackMapTable_isBranch_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_getOperand_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_classfile_ClassFileWriter$StackMapTable_verify(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter$StackMapTable_killSuperBlock_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jobject param0);
void M_rhino_classfile_ClassFileWriter$StackMapTable_executeWorkList(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter$StackMapTable_executeBlock_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jobject param0);
void M_rhino_classfile_ClassFileWriter$StackMapTable_flowInto_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jobject param0);
void M_rhino_classfile_ClassFileWriter$StackMapTable_addToWorkList_rhino_classfile_SuperBlock(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_execute_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter$StackMapTable_executeALoad_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter$StackMapTable_executeAStore_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter$StackMapTable_executeStore_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_classfile_ClassFileWriter$StackMapTable_initializeTypeInfo_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_getLocal_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter$StackMapTable_setLocal_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_classfile_ClassFileWriter$StackMapTable_push_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_pop_R_int(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter$StackMapTable_push2_long(jcontext ctx, jobject self, jlong param0);
jlong M_rhino_classfile_ClassFileWriter$StackMapTable_pop2_R_long(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter$StackMapTable_clearStack(jcontext ctx, jobject self);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_computeWriteSize_R_int(jcontext ctx, jobject self);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_write_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_classfile_ClassFileWriter$StackMapTable_computeRawStackMap(jcontext ctx, jobject self);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_getWorstCaseWriteSize_R_int(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameFrame_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter$StackMapTable_writeSameLocalsOneStackItemFrame_Array1_int_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_classfile_ClassFileWriter$StackMapTable_writeFullFrame_Array1_int_Array1_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_rhino_classfile_ClassFileWriter$StackMapTable_writeAppendFrame_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_rhino_classfile_ClassFileWriter$StackMapTable_writeChopFrame_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_writeTypes_Array1_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_rhino_classfile_ClassFileWriter$StackMapTable_writeType_int_R_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
