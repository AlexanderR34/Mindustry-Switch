#ifndef HEADER_rhino_classfile_ClassFileWriter
#define HEADER_rhino_classfile_ClassFileWriter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_classfile_ClassFileWriter {
	java_lang_Object parent;
	jref F_itsSuperBlockStarts;
	jint F_itsSuperBlockStartsTop;
	jref F_itsJumpFroms;
	jref F_generatedClassName;
	jref F_itsExceptionTable;
	jint F_itsExceptionTableTop;
	jref F_itsLineNumberTable;
	jint F_itsLineNumberTableTop;
	jref F_itsCodeBuffer;
	jint F_itsCodeBufferTop;
	jref F_itsConstantPool;
	jref F_itsCurrentMethod;
	jshort F_itsStackTop;
	jshort F_itsMaxStack;
	jshort F_itsMaxLocals;
	jref F_itsMethods;
	jref F_itsFields;
	jref F_itsInterfaces;
	jshort F_itsFlags;
	jshort F_itsThisClassIndex;
	jshort F_itsSuperClassIndex;
	jshort F_itsSourceFileNameIndex;
	jref F_itsLabelTable;
	jint F_itsLabelTableTop;
	jref F_itsFixupTable;
	jint F_itsFixupTableTop;
	jref F_itsVarDescriptors;
	jref F_itsBootstrapMethods;
	jint F_itsBootstrapMethodsLength;
	jref F_tmpCharBuffer;
} rhino_classfile_ClassFileWriter;

extern Class class_rhino_classfile_ClassFileWriter;

extern jshort SF_rhino_classfile_ClassFileWriter_ACC_PUBLIC;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_PRIVATE;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_PROTECTED;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_STATIC;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_FINAL;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_SUPER;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_SYNCHRONIZED;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_VOLATILE;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_TRANSIENT;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_NATIVE;
extern jshort SF_rhino_classfile_ClassFileWriter_ACC_ABSTRACT;
extern jint SF_rhino_classfile_ClassFileWriter_SuperBlockStartsSize;
extern jint SF_rhino_classfile_ClassFileWriter_LineNumberTableSize;
extern jint SF_rhino_classfile_ClassFileWriter_ExceptionTableSize;
extern jint SF_rhino_classfile_ClassFileWriter_MajorVersion;
extern jint SF_rhino_classfile_ClassFileWriter_MinorVersion;
extern jbool SF_rhino_classfile_ClassFileWriter_GenerateStackMap;
extern jint SF_rhino_classfile_ClassFileWriter_FileHeaderConstant;
extern jbool SF_rhino_classfile_ClassFileWriter_DEBUGSTACK;
extern jbool SF_rhino_classfile_ClassFileWriter_DEBUGLABELS;
extern jbool SF_rhino_classfile_ClassFileWriter_DEBUGCODE;
extern jint SF_rhino_classfile_ClassFileWriter_MIN_LABEL_TABLE_SIZE;
extern jint SF_rhino_classfile_ClassFileWriter_MIN_FIXUP_TABLE_SIZE;

#define VTABLE_rhino_classfile_ClassFileWriter_hashCode_R_int 0
typedef jint (*func_rhino_classfile_ClassFileWriter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_classfile_ClassFileWriter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_classfile_ClassFileWriter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_classfile_ClassFileWriter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_toString_R_java_lang_String 4
typedef jobject (*func_rhino_classfile_ClassFileWriter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_finalize 5
typedef void (*func_rhino_classfile_ClassFileWriter_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_notify 6
typedef void (*func_rhino_classfile_ClassFileWriter_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_notifyAll 7
typedef void (*func_rhino_classfile_ClassFileWriter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_wait 8
typedef void (*func_rhino_classfile_ClassFileWriter_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_wait_long 9
typedef void (*func_rhino_classfile_ClassFileWriter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ClassFileWriter_wait_long_int 10
typedef void (*func_rhino_classfile_ClassFileWriter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_classfile_ClassFileWriter_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_addInterface_java_lang_String 12
typedef void (*func_rhino_classfile_ClassFileWriter_addInterface_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter_setFlags_short 13
typedef void (*func_rhino_classfile_ClassFileWriter_setFlags_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short 14
typedef void (*func_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short)(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2);
#define VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_int 15
typedef void (*func_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2, jint param3);
#define VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_long 16
typedef void (*func_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_long)(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2, jlong param3);
#define VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_double 17
typedef void (*func_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_double)(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2, jdouble param3);
#define VTABLE_rhino_classfile_ClassFileWriter_addVariableDescriptor_java_lang_String_java_lang_String_int_int 18
typedef void (*func_rhino_classfile_ClassFileWriter_addVariableDescriptor_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short 19
typedef void (*func_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short)(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2);
#define VTABLE_rhino_classfile_ClassFileWriter_stopMethod_short 20
typedef void (*func_rhino_classfile_ClassFileWriter_stopMethod_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_rhino_classfile_ClassFileWriter_add_int 21
typedef void (*func_rhino_classfile_ClassFileWriter_add_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_add_int_int 22
typedef void (*func_rhino_classfile_ClassFileWriter_add_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_int 23
typedef void (*func_rhino_classfile_ClassFileWriter_addLoadConstant_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_long 24
typedef void (*func_rhino_classfile_ClassFileWriter_addLoadConstant_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_float 25
typedef void (*func_rhino_classfile_ClassFileWriter_addLoadConstant_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_double 26
typedef void (*func_rhino_classfile_ClassFileWriter_addLoadConstant_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String 27
typedef void (*func_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter_add_int_int_int 28
typedef void (*func_rhino_classfile_ClassFileWriter_add_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String 29
typedef void (*func_rhino_classfile_ClassFileWriter_add_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String 30
typedef void (*func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String 31
typedef void (*func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_classfile_ClassFileWriter_addInvokeDynamic_java_lang_String_java_lang_String_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object 32
typedef void (*func_rhino_classfile_ClassFileWriter_addInvokeDynamic_java_lang_String_java_lang_String_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_classfile_ClassFileWriter_addPush_int 33
typedef void (*func_rhino_classfile_ClassFileWriter_addPush_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addPush_boolean 34
typedef void (*func_rhino_classfile_ClassFileWriter_addPush_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addPush_long 35
typedef void (*func_rhino_classfile_ClassFileWriter_addPush_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addPush_double 36
typedef void (*func_rhino_classfile_ClassFileWriter_addPush_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addPush_java_lang_String 37
typedef void (*func_rhino_classfile_ClassFileWriter_addPush_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter_isUnderStringSizeLimit_java_lang_String_R_boolean 38
typedef jbool (*func_rhino_classfile_ClassFileWriter_isUnderStringSizeLimit_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addIStore_int 39
typedef void (*func_rhino_classfile_ClassFileWriter_addIStore_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addLStore_int 40
typedef void (*func_rhino_classfile_ClassFileWriter_addLStore_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addFStore_int 41
typedef void (*func_rhino_classfile_ClassFileWriter_addFStore_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addDStore_int 42
typedef void (*func_rhino_classfile_ClassFileWriter_addDStore_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addAStore_int 43
typedef void (*func_rhino_classfile_ClassFileWriter_addAStore_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addILoad_int 44
typedef void (*func_rhino_classfile_ClassFileWriter_addILoad_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addLLoad_int 45
typedef void (*func_rhino_classfile_ClassFileWriter_addLLoad_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addFLoad_int 46
typedef void (*func_rhino_classfile_ClassFileWriter_addFLoad_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addDLoad_int 47
typedef void (*func_rhino_classfile_ClassFileWriter_addDLoad_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addALoad_int 48
typedef void (*func_rhino_classfile_ClassFileWriter_addALoad_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addLoadThis 49
typedef void (*func_rhino_classfile_ClassFileWriter_addLoadThis)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_xop_int_int_int 50
typedef void (*func_rhino_classfile_ClassFileWriter_xop_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_rhino_classfile_ClassFileWriter_addTableSwitch_int_int_R_int 51
typedef jint (*func_rhino_classfile_ClassFileWriter_addTableSwitch_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter_markTableSwitchDefault_int 52
typedef void (*func_rhino_classfile_ClassFileWriter_markTableSwitchDefault_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int 53
typedef void (*func_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int_int 54
typedef void (*func_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int 55
typedef void (*func_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_rhino_classfile_ClassFileWriter_acquireLabel_R_int 56
typedef jint (*func_rhino_classfile_ClassFileWriter_acquireLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_markLabel_int 57
typedef void (*func_rhino_classfile_ClassFileWriter_markLabel_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_markLabel_int_short 58
typedef void (*func_rhino_classfile_ClassFileWriter_markLabel_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_rhino_classfile_ClassFileWriter_markHandler_int 59
typedef void (*func_rhino_classfile_ClassFileWriter_markHandler_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int 60
typedef jint (*func_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addLabelFixup_int_int 61
typedef void (*func_rhino_classfile_ClassFileWriter_addLabelFixup_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_classfile_ClassFileWriter_fixLabelGotos 62
typedef void (*func_rhino_classfile_ClassFileWriter_fixLabelGotos)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_getCurrentCodeOffset_R_int 63
typedef jint (*func_rhino_classfile_ClassFileWriter_getCurrentCodeOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_getStackTop_R_short 64
typedef jshort (*func_rhino_classfile_ClassFileWriter_getStackTop_R_short)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_setStackTop_short 65
typedef void (*func_rhino_classfile_ClassFileWriter_setStackTop_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_rhino_classfile_ClassFileWriter_adjustStackTop_int 66
typedef void (*func_rhino_classfile_ClassFileWriter_adjustStackTop_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addToCodeBuffer_int 67
typedef void (*func_rhino_classfile_ClassFileWriter_addToCodeBuffer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addToCodeInt16_int 68
typedef void (*func_rhino_classfile_ClassFileWriter_addToCodeInt16_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int 69
typedef jint (*func_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addExceptionHandler_int_int_int_java_lang_String 70
typedef void (*func_rhino_classfile_ClassFileWriter_addExceptionHandler_int_int_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_rhino_classfile_ClassFileWriter_addLineNumberEntry_short 71
typedef void (*func_rhino_classfile_ClassFileWriter_addLineNumberEntry_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_rhino_classfile_ClassFileWriter_createInitialLocals_R_Array1_int 72
typedef jobject (*func_rhino_classfile_ClassFileWriter_createInitialLocals_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_write_java_io_OutputStream 73
typedef void (*func_rhino_classfile_ClassFileWriter_write_java_io_OutputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_classfile_ClassFileWriter_getWriteSize_R_int 74
typedef jint (*func_rhino_classfile_ClassFileWriter_getWriteSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte 75
typedef jobject (*func_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_rhino_classfile_ClassFileWriter_getCharBuffer_int_R_Array1_char 76
typedef jobject (*func_rhino_classfile_ClassFileWriter_getCharBuffer_int_R_Array1_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_addSuperBlockStart_int 77
typedef void (*func_rhino_classfile_ClassFileWriter_addSuperBlockStart_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_classfile_ClassFileWriter_finalizeSuperBlockStarts 78
typedef void (*func_rhino_classfile_ClassFileWriter_finalizeSuperBlockStarts)(jcontext ctx, jobject self);

void mark_rhino_classfile_ClassFileWriter(jobject object, jint mark, jint depth);
void clinit_rhino_classfile_ClassFileWriter(jcontext ctx);
void init_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject SM_rhino_classfile_ClassFileWriter_getSlashedForm_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_ClassFileWriter_classNameToSignature_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jchar SM_rhino_classfile_ClassFileWriter_arrayTypeToName_int_R_char(jcontext ctx, jint param0);
jobject SM_rhino_classfile_ClassFileWriter_classDescriptorToInternalName_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_ClassFileWriter_descriptorToInternalName_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jint SM_rhino_classfile_ClassFileWriter_putInt64_long_Array1_byte_int_R_int(jcontext ctx, jlong param0, jobject param1, jint param2);
void SM_rhino_classfile_ClassFileWriter_badStack_int(jcontext ctx, jint param0);
jint SM_rhino_classfile_ClassFileWriter_sizeOfParameters_java_lang_String_R_int(jcontext ctx, jobject param0);
jint SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2);
jint SM_rhino_classfile_ClassFileWriter_putInt32_int_Array1_byte_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2);
jint SM_rhino_classfile_ClassFileWriter_opcodeLength_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jint SM_rhino_classfile_ClassFileWriter_opcodeCount_int_R_int(jcontext ctx, jint param0);
jint SM_rhino_classfile_ClassFileWriter_stackChange_int_R_int(jcontext ctx, jint param0);
jobject SM_rhino_classfile_ClassFileWriter_bytecodeStr_int_R_java_lang_String(jcontext ctx, jint param0);
jobject M_rhino_classfile_ClassFileWriter_getClassName_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter_addInterface_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_classfile_ClassFileWriter_setFlags_short(jcontext ctx, jobject self, jshort param0);
void M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2);
void M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_int(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2, jint param3);
void M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_long(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2, jlong param3);
void M_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short_double(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2, jdouble param3);
void M_rhino_classfile_ClassFileWriter_addVariableDescriptor_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short(jcontext ctx, jobject self, jobject param0, jobject param1, jshort param2);
void M_rhino_classfile_ClassFileWriter_stopMethod_short(jcontext ctx, jobject self, jshort param0);
void M_rhino_classfile_ClassFileWriter_add_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_add_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_classfile_ClassFileWriter_addLoadConstant_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addLoadConstant_long(jcontext ctx, jobject self, jlong param0);
void M_rhino_classfile_ClassFileWriter_addLoadConstant_float(jcontext ctx, jobject self, jfloat param0);
void M_rhino_classfile_ClassFileWriter_addLoadConstant_double(jcontext ctx, jobject self, jdouble param0);
void M_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_classfile_ClassFileWriter_add_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_rhino_classfile_ClassFileWriter_add_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3);
void M_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3);
void M_rhino_classfile_ClassFileWriter_addInvokeDynamic_java_lang_String_java_lang_String_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_rhino_classfile_ClassFileWriter_addPush_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addPush_boolean(jcontext ctx, jobject self, jbool param0);
void M_rhino_classfile_ClassFileWriter_addPush_long(jcontext ctx, jobject self, jlong param0);
void M_rhino_classfile_ClassFileWriter_addPush_double(jcontext ctx, jobject self, jdouble param0);
void M_rhino_classfile_ClassFileWriter_addPush_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_classfile_ClassFileWriter_isUnderStringSizeLimit_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_rhino_classfile_ClassFileWriter_addIStore_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addLStore_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addFStore_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addDStore_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addAStore_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addILoad_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addLLoad_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addFLoad_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addDLoad_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addALoad_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addLoadThis(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter_xop_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_rhino_classfile_ClassFileWriter_addTableSwitch_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_classfile_ClassFileWriter_markTableSwitchDefault_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_classfile_ClassFileWriter_markTableSwitchCase_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_rhino_classfile_ClassFileWriter_setTableSwitchJump_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_rhino_classfile_ClassFileWriter_acquireLabel_R_int(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter_markLabel_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_markLabel_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_rhino_classfile_ClassFileWriter_markHandler_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_classfile_ClassFileWriter_getLabelPC_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addLabelFixup_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_classfile_ClassFileWriter_fixLabelGotos(jcontext ctx, jobject self);
jint M_rhino_classfile_ClassFileWriter_getCurrentCodeOffset_R_int(jcontext ctx, jobject self);
jshort M_rhino_classfile_ClassFileWriter_getStackTop_R_short(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter_setStackTop_short(jcontext ctx, jobject self, jshort param0);
void M_rhino_classfile_ClassFileWriter_adjustStackTop_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addToCodeBuffer_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addToCodeInt16_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_classfile_ClassFileWriter_addReservedCodeSpace_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addExceptionHandler_int_int_int_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
void M_rhino_classfile_ClassFileWriter_addLineNumberEntry_short(jcontext ctx, jobject self, jshort param0);
jobject M_rhino_classfile_ClassFileWriter_createInitialLocals_R_Array1_int(jcontext ctx, jobject self);
void M_rhino_classfile_ClassFileWriter_write_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
jint M_rhino_classfile_ClassFileWriter_getWriteSize_R_int(jcontext ctx, jobject self);
jobject M_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte(jcontext ctx, jobject self);
jobject M_rhino_classfile_ClassFileWriter_getCharBuffer_int_R_Array1_char(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_addSuperBlockStart_int(jcontext ctx, jobject self, jint param0);
void M_rhino_classfile_ClassFileWriter_finalizeSuperBlockStarts(jcontext ctx, jobject self);
jint SM_rhino_classfile_ClassFileWriter_access$000_rhino_classfile_ClassFileWriter_R_int(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_ClassFileWriter_access$100_rhino_classfile_ClassFileWriter_R_Array1_int(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_ClassFileWriter_access$200_rhino_classfile_ClassFileWriter_R_Array1_int(jcontext ctx, jobject param0);
jint SM_rhino_classfile_ClassFileWriter_access$300_rhino_classfile_ClassFileWriter_R_int(jcontext ctx, jobject param0);
jint SM_rhino_classfile_ClassFileWriter_access$400_rhino_classfile_ClassFileWriter_R_int(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_ClassFileWriter_access$500_rhino_classfile_ClassFileWriter_R_Array1_rhino_classfile_ExceptionTableEntry(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_ClassFileWriter_access$600_rhino_classfile_ClassFileWriter_R_rhino_UintMap(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_ClassFileWriter_access$700_rhino_classfile_ClassFileWriter_R_Array1_byte(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(jcontext ctx, jobject param0);
jint SM_rhino_classfile_ClassFileWriter_access$410_rhino_classfile_ClassFileWriter_R_int(jcontext ctx, jobject param0);
jchar SM_rhino_classfile_ClassFileWriter_access$900_int_R_char(jcontext ctx, jint param0);
jint SM_rhino_classfile_ClassFileWriter_access$1000_java_lang_String_R_int(jcontext ctx, jobject param0);
jshort SM_rhino_classfile_ClassFileWriter_access$1100_rhino_classfile_ClassFileWriter_R_short(jcontext ctx, jobject param0);
jobject SM_rhino_classfile_ClassFileWriter_access$1200_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jint SM_rhino_classfile_ClassFileWriter_access$1300_int_boolean_R_int(jcontext ctx, jint param0, jbool param1);
jshort SM_rhino_classfile_ClassFileWriter_access$1400_rhino_classfile_ClassFileWriter_R_short(jcontext ctx, jobject param0);
jshort SM_rhino_classfile_ClassFileWriter_access$1500_rhino_classfile_ClassFileWriter_R_short(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
