#ifndef HEADER_rhino_Interpreter
#define HEADER_rhino_Interpreter

#include "Clearwing.h"
#include "rhino/Icode.h"
#include "rhino/Evaluator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Interpreter {
	rhino_Icode parent;
	jref F_itsData;
} rhino_Interpreter;

extern Class class_rhino_Interpreter;

extern jint SF_rhino_Interpreter_EXCEPTION_TRY_START_SLOT;
extern jint SF_rhino_Interpreter_EXCEPTION_TRY_END_SLOT;
extern jint SF_rhino_Interpreter_EXCEPTION_HANDLER_SLOT;
extern jint SF_rhino_Interpreter_EXCEPTION_TYPE_SLOT;
extern jint SF_rhino_Interpreter_EXCEPTION_LOCAL_SLOT;
extern jint SF_rhino_Interpreter_EXCEPTION_SCOPE_SLOT;
extern jint SF_rhino_Interpreter_EXCEPTION_SLOT_SIZE;

#define VTABLE_rhino_Interpreter_hashCode_R_int 0
typedef jint (*func_rhino_Interpreter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Interpreter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Interpreter_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Interpreter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Interpreter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Interpreter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter_finalize 5
typedef void (*func_rhino_Interpreter_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter_notify 6
typedef void (*func_rhino_Interpreter_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter_notifyAll 7
typedef void (*func_rhino_Interpreter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter_wait 8
typedef void (*func_rhino_Interpreter_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter_wait_long 9
typedef void (*func_rhino_Interpreter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Interpreter_wait_long_int 10
typedef void (*func_rhino_Interpreter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Interpreter_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object 11
typedef jobject (*func_rhino_Interpreter_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define VTABLE_rhino_Interpreter_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function 12
typedef jobject (*func_rhino_Interpreter_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Interpreter_createScriptObject_java_lang_Object_R_rhino_Script 13
typedef jobject (*func_rhino_Interpreter_createScriptObject_java_lang_Object_R_rhino_Script)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Interpreter_captureStackInfo_rhino_RhinoException 14
typedef void (*func_rhino_Interpreter_captureStackInfo_rhino_RhinoException)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Interpreter_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String 15
typedef jobject (*func_rhino_Interpreter_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Interpreter_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String 16
typedef jobject (*func_rhino_Interpreter_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Interpreter_getScriptStack_rhino_RhinoException_R_java_util_List 17
typedef jobject (*func_rhino_Interpreter_getScriptStack_rhino_RhinoException_R_java_util_List)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Interpreter_setEvalScriptFlag_rhino_Script 18
typedef void (*func_rhino_Interpreter_setEvalScriptFlag_rhino_Script)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement 19
typedef jobject (*func_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_Interpreter(jobject object, jint mark, jint depth);
void clinit_rhino_Interpreter(jcontext ctx);
void init_rhino_Interpreter(jcontext ctx, jobject self);
jbool SM_rhino_Interpreter_compareIdata_rhino_InterpreterData_rhino_InterpreterData_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Interpreter_captureFrameForGenerator_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0);
jobject M_rhino_Interpreter_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
jobject M_rhino_Interpreter_createScriptObject_java_lang_Object_R_rhino_Script(jcontext ctx, jobject self, jobject param0);
void M_rhino_Interpreter_setEvalScriptFlag_rhino_Script(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Interpreter_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jint SM_rhino_Interpreter_getShort_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_rhino_Interpreter_getInt_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_rhino_Interpreter_getExceptionHandler_rhino_Interpreter$CallFrame_boolean_R_int(jcontext ctx, jobject param0, jbool param1);
void SM_rhino_Interpreter_dumpICode_rhino_InterpreterData(jcontext ctx, jobject param0);
jint SM_rhino_Interpreter_bytecodeSpan_int_R_int(jcontext ctx, jint param0);
jobject SM_rhino_Interpreter_getLineNumbers_rhino_InterpreterData_R_Array1_int(jcontext ctx, jobject param0);
void M_rhino_Interpreter_captureStackInfo_rhino_RhinoException(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Interpreter_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Interpreter_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Interpreter_getScriptStack_rhino_RhinoException_R_java_util_List(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement(jcontext ctx, jobject self, jobject param0);
jobject SM_rhino_Interpreter_getEncodedSource_rhino_InterpreterData_R_java_lang_String(jcontext ctx, jobject param0);
void SM_rhino_Interpreter_initFunction_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3);
jobject SM_rhino_Interpreter_interpret_rhino_InterpretedFunction_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject SM_rhino_Interpreter_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4);
jobject SM_rhino_Interpreter_restartContinuation_rhino_NativeContinuation_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_Interpreter_interpretLoop_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_rhino_Interpreter_doInOrInstanceof_rhino_Context_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
jint SM_rhino_Interpreter_doCompare_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
jint SM_rhino_Interpreter_doBitOp_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
jint SM_rhino_Interpreter_doDelName_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jint param5);
jint SM_rhino_Interpreter_doGetElem_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
jint SM_rhino_Interpreter_doSetElem_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
jint SM_rhino_Interpreter_doElemIncDec_rhino_Context_rhino_Interpreter$CallFrame_Array1_byte_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5);
jint SM_rhino_Interpreter_doCallSpecial_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_byte_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jobject param5, jint param6);
jint SM_rhino_Interpreter_doSetConstVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6, jint param7);
jint SM_rhino_Interpreter_doSetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6, jint param7);
jint SM_rhino_Interpreter_doGetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jint param6);
jint SM_rhino_Interpreter_doVarIncDec_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jobject param5, jobject param6, jobject param7, jint param8);
jobject SM_rhino_Interpreter_initFrameForNoSuchMethod_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_int_rhino_Scriptable_rhino_Scriptable_rhino_ScriptRuntime$NoSuchMethodShim_rhino_InterpretedFunction_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jint param5, jint param6, jobject param7, jobject param8, jobject param9, jobject param10);
jbool SM_rhino_Interpreter_doEquals_Array1_java_lang_Object_Array1_double_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2);
jbool SM_rhino_Interpreter_doShallowEquals_Array1_java_lang_Object_Array1_double_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_rhino_Interpreter_processThrowable_rhino_Context_java_lang_Object_rhino_Interpreter$CallFrame_int_boolean_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jbool param4);
jobject SM_rhino_Interpreter_freezeGenerator_rhino_Context_rhino_Interpreter$CallFrame_int_rhino_Interpreter$GeneratorState_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jbool param4);
jobject SM_rhino_Interpreter_thawGenerator_rhino_Interpreter$CallFrame_int_rhino_Interpreter$GeneratorState_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
jobject SM_rhino_Interpreter_initFrameForApplyOrCall_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_int_rhino_Scriptable_rhino_IdFunctionObject_rhino_InterpretedFunction_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jint param5, jint param6, jobject param7, jobject param8, jobject param9);
jobject SM_rhino_Interpreter_initFrame_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int_rhino_InterpretedFunction_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5, jint param6, jobject param7, jobject param8);
void SM_rhino_Interpreter_enterFrame_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3);
void SM_rhino_Interpreter_exitFrame_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_rhino_Interpreter_setCallResult_rhino_Interpreter$CallFrame_java_lang_Object_double(jcontext ctx, jobject param0, jobject param1, jdouble param2);
jobject SM_rhino_Interpreter_captureContinuation_rhino_Context_R_rhino_NativeContinuation(jcontext ctx, jobject param0);
jobject SM_rhino_Interpreter_captureContinuation_rhino_Context_rhino_Interpreter$CallFrame_boolean_R_rhino_NativeContinuation(jcontext ctx, jobject param0, jobject param1, jbool param2);
jint SM_rhino_Interpreter_stack_int32_rhino_Interpreter$CallFrame_int_R_int(jcontext ctx, jobject param0, jint param1);
jdouble SM_rhino_Interpreter_stack_double_rhino_Interpreter$CallFrame_int_R_double(jcontext ctx, jobject param0, jint param1);
jbool SM_rhino_Interpreter_stack_boolean_rhino_Interpreter$CallFrame_int_R_boolean(jcontext ctx, jobject param0, jint param1);
void SM_rhino_Interpreter_doAdd_Array1_java_lang_Object_Array1_double_int_rhino_Context(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);
jint SM_rhino_Interpreter_doArithmetic_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
jobject SM_rhino_Interpreter_getArgsArray_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_rhino_Interpreter_addInstructionCount_rhino_Context_rhino_Interpreter$CallFrame_int(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_rhino_Interpreter_access$000_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_rhino_Interpreter_access$100_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3);
jbool SM_rhino_Interpreter_access$200_rhino_InterpreterData_rhino_InterpreterData_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
