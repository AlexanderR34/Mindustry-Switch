#include "rhino/Interpreter_CallFrame.h"
#include "rhino/InterpreterData.h"
#include "java/lang/Boolean.h"
#include "rhino/EqualObjectGraphs_Func.h"
#include "rhino/NativeFunction.h"
#include "rhino/Interpreter_CallFrame_invoke_rhino_Callable_0.h"
#include "rhino/Scriptable.h"
#include "rhino/Undefined.h"
#include "rhino/Callable.h"
#include "rhino/EvaluatorException.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "rhino/InterpretedFunction.h"
#include "java/lang/Throwable.h"
#include "rhino/debug/Debugger.h"
#include "java/lang/Cloneable.h"
#include "rhino/Interpreter.h"
#include "rhino/debug/DebuggableScript.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "java/lang/CloneNotSupportedException.h"
#include "rhino/Interpreter_CallFrame.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/Interpreter_CallFrame_invoke_rhino_EqualObjectGraphs_Func_0.h"
#include "rhino/debug/DebugFrame.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/EqualObjectGraphs.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/System.h"

extern "C" {


void mark_rhino_Interpreter$CallFrame(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_Interpreter$CallFrame *) object;
	if (self->F_parentFrame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parentFrame)->clazz)->markFunction)((jobject) self->F_parentFrame, mark, depth + 1);
	if (self->F_fnOrScript)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fnOrScript)->clazz)->markFunction)((jobject) self->F_fnOrScript, mark, depth + 1);
	if (self->F_idata)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_idata)->clazz)->markFunction)((jobject) self->F_idata, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_stackAttributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stackAttributes)->clazz)->markFunction)((jobject) self->F_stackAttributes, mark, depth + 1);
	if (self->F_sDbl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sDbl)->clazz)->markFunction)((jobject) self->F_sDbl, mark, depth + 1);
	if (self->F_varSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_varSource)->clazz)->markFunction)((jobject) self->F_varSource, mark, depth + 1);
	if (self->F_debuggerFrame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_debuggerFrame)->clazz)->markFunction)((jobject) self->F_debuggerFrame, mark, depth + 1);
	if (self->F_thisObj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thisObj)->clazz)->markFunction)((jobject) self->F_thisObj, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_scope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scope)->clazz)->markFunction)((jobject) self->F_scope, mark, depth + 1);
	if (self->F_throwable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_throwable)->clazz)->markFunction)((jobject) self->F_throwable, mark, depth + 1);
}

void clinit_rhino_Interpreter$CallFrame(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Interpreter$CallFrame_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_rhino_Interpreter$CallFrame(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter$CallFrame(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(74);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[3].o)))->F_idata;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_idata = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_debugger;
	sp += 1;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_debugger;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((func_rhino_debug_Debugger_getFrame_rhino_Context_rhino_debug_DebuggableScript_R_rhino_debug_DebugFrame) resolveInterfaceMethod(ctx, &class_rhino_debug_Debugger, INDEX_rhino_debug_Debugger_getFrame_rhino_Context_rhino_debug_DebuggableScript_R_rhino_debug_DebugFrame, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 2;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_debuggerFrame = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_debuggerFrame;
	sp += 1;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation) == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_useActivation = sp[1].i;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	jint temp0 = (jint)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_itsMaxVars;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_emptyStackTop = ((temp0 + ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_itsMaxLocals)) - (jint(1)));
	LINE_NUMBER(81);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_fnOrScript = (jref) (frame[3].o);
	LINE_NUMBER(82);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_varSource = (jref) (frame[0].o);
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_localShift = ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_itsMaxVars);
	LINE_NUMBER(84);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_thisObj = (jref) (frame[2].o);
	LINE_NUMBER(86);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_parentFrame = (jref) (frame[4].o);
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_16;
	}
	INST_ICONST(0);
	goto label_17;
label_16:;
	{
	jint temp0 = ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_frameIndex) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 2;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_frameIndex = sp[1].i;
	LINE_NUMBER(88);
	jint temp0 = (jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_frameIndex;
	jint temp1 = (jint)((func_rhino_Context_getMaximumInterpreterStackDepth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getMaximumInterpreterStackDepth_R_int])(ctx, (frame[1].o));
	if (temp0 <= temp1) goto label_19;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"Exceeded maximum stack depth"_j))));
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pcSourceLineStart = ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_firstLinePC);
	LINE_NUMBER(97);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_savedStackTop = ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_emptyStackTop);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Interpreter$CallFrame_initializeArgs_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:initializeArgs", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(101);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_useActivation) == 0) goto label_1;
	}
	{
	LINE_NUMBER(104);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)SM_rhino_Interpreter_access$000_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(ctx, (frame[3].o), (frame[4].o), (frame[5].i), (frame[6].i));
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(107);
	frame[5].i = (jint(0));
	LINE_NUMBER(108);
	frame[4].o = (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsFunctionType) == 0) goto label_6;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_fnOrScript;
	sp[1].o = (jobject)((func_rhino_InterpretedFunction_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_InterpretedFunction_getParentScope_R_rhino_Scriptable])(ctx, sp[1].o);
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_scope = (jref) sp[1].o;
	LINE_NUMBER(114);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_useActivation) == 0) goto label_9;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsFunctionType) != (jint(4))) goto label_11;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_fnOrScript;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[3].o = frame[3].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_createArrowFunctionActivation_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_R_rhino_Scriptable(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[4].o))->F_isStrict));
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_scope = (jref) sp[1].o;
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_fnOrScript;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[3].o = frame[3].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_createFunctionActivation_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_R_rhino_Scriptable(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[4].o))->F_isStrict));
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_scope = (jref) sp[1].o;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(122);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope = (jref) (frame[2].o);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_fnOrScript;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_thisObj;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_fnOrScript;
	sp[4].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK(sp[4].o))->F_idata;
	SM_rhino_ScriptRuntime_initScript_rhino_NativeFunction_rhino_Scriptable_rhino_Context_rhino_Scriptable_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[4].o))->F_evalScriptFlag));
	}
label_9:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNestedFunctions;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsFunctionType) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation) != 0) goto label_16;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_16:;
	{
	LINE_NUMBER(130);
	frame[7].i = (jint(0));
	}
label_18:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNestedFunctions;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_14;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNestedFunctions;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)));
	LINE_NUMBER(132);
	if (((jint)((rhino_InterpreterData *) NULL_CHECK((frame[8].o)))->F_itsFunctionType) != (jint(1))) goto label_21;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_fnOrScript;
	SM_rhino_Interpreter_access$100_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[7].i));
	}
label_21:;
	{
	LINE_NUMBER(130);
	INST_IINC(7, 1);
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	frame[7].i = ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxFrameArray);
	LINE_NUMBER(140);
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_emptyStackTop;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	if (temp0 == ((temp1 + ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxStack)) + (jint(1)))) goto label_24;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_24:;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[7].i));
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[7].i));
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_stackAttributes = (jref) sp[1].o;
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_double, (frame[7].i));
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_sDbl = (jref) sp[1].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	jint temp0 = (jint)((func_rhino_InterpreterData_getParamAndVarCount_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpreterData_getParamAndVarCount_R_int])(ctx, sp[0].o);
	frame[8].i = temp0;
	LINE_NUMBER(150);
	frame[9].i = (jint(0));
	}
label_30:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_31;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	jint temp0 = (jint)((func_rhino_InterpreterData_getParamOrVarConst_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpreterData_getParamOrVarConst_int_R_boolean])(ctx, sp[0].o, (frame[9].i));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stackAttributes;
	ARRAY_ACCESS(jint, sp[0].o, (frame[9].i)) = (13);
	}
label_33:;
	{
	LINE_NUMBER(150);
	INST_IINC(9, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	frame[9].i = ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argCount);
	LINE_NUMBER(155);
	if ((frame[9].i) <= (frame[6].i)) goto label_36;
	}
	{
	LINE_NUMBER(156);
	frame[9].i = (frame[6].i);
	}
label_36:;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stack;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[9].i));
	LINE_NUMBER(162);
	if ((frame[4].o) == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_sDbl;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[9].i));
	}
label_39:;
	{
	LINE_NUMBER(165);
	frame[10].i = (frame[9].i);
	}
label_41:;
	{
	jint temp0 = frame[10].i;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	if (temp0 == ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsMaxVars)) goto label_42;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = frame[10].i;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(165);
	INST_IINC(10, 1);
	goto label_41;
	}
label_42:;
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:cloneFrozen", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_frozen) != 0) goto label_0;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_rhino_Interpreter$CallFrame, sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(178);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(176);
	frame[2].o = sp[0].o;
	LINE_NUMBER(177);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(183);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_stack = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(184);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stackAttributes;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_stackAttributes = (jref) (checkCast(ctx, getArrayClass(&class_int, 1), sp[1].o));
	LINE_NUMBER(185);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_sDbl;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_sDbl = (jref) (checkCast(ctx, getArrayClass(&class_double, 1), sp[1].o));
	LINE_NUMBER(187);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frozen = (jint(0));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_Interpreter$CallFrame_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Interpreter$CallFrame)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)SM_rhino_Context_enter_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_hasTopCall_rhino_Context_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(205);
	jint temp0 = (jint)M_rhino_Interpreter$CallFrame_equalsInTopScope_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(212);
	SM_rhino_Context_exit(ctx);
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(208);
	{ /* InvokeDynamic */
		clinit_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0(ctx);
		auto proxy = (rhino_Interpreter$CallFrame_invoke_rhino_Callable_0 *) gcAlloc(ctx, &class_rhino_Interpreter$CallFrame_invoke_rhino_Callable_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = frame[3].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[5].o = frame[0].o;
	LINE_NUMBER(210);
	jint temp0 = (jint)M_rhino_Interpreter$CallFrame_isStrictTopFrame_R_boolean(ctx, sp[5].o);
	LINE_NUMBER(208);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_boolean_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0);
	jint temp1 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)));
	frame[4].i = temp1;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(212);
	SM_rhino_Context_exit(ctx);
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(212);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	SM_rhino_Context_exit(ctx);
	LINE_NUMBER(213);
	throwException(ctx, (frame[5].o));	}
label_10:;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_Interpreter$CallFrame_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:hashCode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	frame[1].i = (jint(0));
	LINE_NUMBER(225);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(226);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(228);
	jint temp0 = (31) * (((31) * (frame[3].i)) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_pc));
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_idata;
	jint temp1 = (jint)((func_rhino_InterpreterData_icodeHashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpreterData_icodeHashCode_R_int])(ctx, sp[0].o);
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(229);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_parentFrame;
	frame[2].o = sp[0].o;
	LINE_NUMBER(230);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	if (temp0 < (8)) goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_rhino_Interpreter$CallFrame_equalsInTopScope_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:equalsInTopScope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	{ /* InvokeDynamic */
		clinit_rhino_Interpreter$CallFrame_invoke_rhino_EqualObjectGraphs$Func_0(ctx);
		auto proxy = (rhino_Interpreter$CallFrame_invoke_rhino_EqualObjectGraphs$Func_0 *) gcAlloc(ctx, &class_rhino_Interpreter$CallFrame_invoke_rhino_EqualObjectGraphs$Func_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_rhino_EqualObjectGraphs_withThreadLocal_rhino_EqualObjectGraphs$Func_R_java_lang_Object(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Interpreter$CallFrame_isStrictTopFrame_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:isStrictTopFrame", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	frame[1].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	frame[2].o = sp[0].o;
	LINE_NUMBER(242);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	popStackFrame(ctx);
	return ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_isStrict);
	}
label_3:;
	{
	LINE_NUMBER(245);
	frame[1].o = (frame[2].o);
	LINE_NUMBER(246);
	goto label_1;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Interpreter$CallFrame_equals_rhino_Interpreter$CallFrame_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter$CallFrame(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_0:;
	{
	LINE_NUMBER(253);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(255);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(257);
	jint temp0 = (jint)M_rhino_Interpreter$CallFrame_fieldsEqual_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_parentFrame;
	frame[0].o = sp[0].o;
	LINE_NUMBER(261);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	frame[1].o = sp[0].o;
	goto label_0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Interpreter$CallFrame_fieldsEqual_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:fieldsEqual", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(267);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_frameIndex) != ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frameIndex)) goto label_1;
	}
	{
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_pc) != ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	LINE_NUMBER(269);
	jint temp0 = (jint)SM_rhino_Interpreter_access$200_rhino_InterpreterData_rhino_InterpreterData_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_varSource;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_stack;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_varSource;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[2].o))->F_stack;
	LINE_NUMBER(270);
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_varSource;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_sDbl;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_varSource;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_sDbl;
	LINE_NUMBER(271);
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_double_Array1_double_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_thisObj;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_thisObj;
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_fnOrScript;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_fnOrScript;
	LINE_NUMBER(273);
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	LINE_NUMBER(274);
	jint temp0 = (jint)((func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_8;
label_1:;
	INST_ICONST(0);
label_8:;
	LINE_NUMBER(267);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter$CallFrame_lambda$equalsInTopScope$1_java_lang_Object_rhino_EqualObjectGraphs_R_java_lang_Boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:lambda$equalsInTopScope$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(235);
	jint temp0 = (jint)SM_rhino_Interpreter$CallFrame_equals_rhino_Interpreter$CallFrame_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_Interpreter$CallFrame, (frame[1].o))), (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter$CallFrame_lambda$equals$0_java_lang_Object_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$CallFrame:lambda$equals$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)M_rhino_Interpreter$CallFrame_equalsInTopScope_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Interpreter$CallFrame[] {
	(void *) M_rhino_Interpreter$CallFrame_hashCode_R_int,
	(void *) M_rhino_Interpreter$CallFrame_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_Interpreter$CallFrame_initializeArgs_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int,
	(void *) M_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame,
	(void *) M_rhino_Interpreter$CallFrame_equalsInTopScope_java_lang_Object_R_boolean,
	(void *) M_rhino_Interpreter$CallFrame_isStrictTopFrame_R_boolean,
	(void *) M_rhino_Interpreter$CallFrame_fieldsEqual_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean,
	(void *) M_rhino_Interpreter$CallFrame_lambda$equalsInTopScope$1_java_lang_Object_rhino_EqualObjectGraphs_R_java_lang_Boolean,
	(void *) M_rhino_Interpreter$CallFrame_lambda$equals$0_java_lang_Object_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "initializeArgs", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;[DII)V" },
	{ "cloneFrozen", "()Lrhino/Interpreter$CallFrame;" },
	{ "equalsInTopScope", "(Ljava/lang/Object;)Z" },
	{ "isStrictTopFrame", "()Z" },
	{ "fieldsEqual", "(Lrhino/Interpreter$CallFrame;Lrhino/EqualObjectGraphs;)Z" },
	{ "lambda$equalsInTopScope$1", "(Ljava/lang/Object;Lrhino/EqualObjectGraphs;)Ljava/lang/Boolean;" },
	{ "lambda$equals$0", "(Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "parentFrame", &class_rhino_Interpreter$CallFrame, offsetof(rhino_Interpreter$CallFrame, F_parentFrame), "Lrhino/Interpreter$CallFrame;", 0 },
	{ "frameIndex", &class_int, offsetof(rhino_Interpreter$CallFrame, F_frameIndex), "I", 0 },
	{ "frozen", &class_boolean, offsetof(rhino_Interpreter$CallFrame, F_frozen), "Z", 0 },
	{ "fnOrScript", &class_rhino_InterpretedFunction, offsetof(rhino_Interpreter$CallFrame, F_fnOrScript), "Lrhino/InterpretedFunction;", 16 },
	{ "idata", &class_rhino_InterpreterData, offsetof(rhino_Interpreter$CallFrame, F_idata), "Lrhino/InterpreterData;", 16 },
	{ "stack", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_Interpreter$CallFrame, F_stack), "[Ljava/lang/Object;", 0 },
	{ "stackAttributes", getArrayClass(&class_int, 1), offsetof(rhino_Interpreter$CallFrame, F_stackAttributes), "[I", 0 },
	{ "sDbl", getArrayClass(&class_double, 1), offsetof(rhino_Interpreter$CallFrame, F_sDbl), "[D", 0 },
	{ "varSource", &class_rhino_Interpreter$CallFrame, offsetof(rhino_Interpreter$CallFrame, F_varSource), "Lrhino/Interpreter$CallFrame;", 16 },
	{ "localShift", &class_int, offsetof(rhino_Interpreter$CallFrame, F_localShift), "I", 16 },
	{ "emptyStackTop", &class_int, offsetof(rhino_Interpreter$CallFrame, F_emptyStackTop), "I", 16 },
	{ "debuggerFrame", &class_rhino_debug_DebugFrame, offsetof(rhino_Interpreter$CallFrame, F_debuggerFrame), "Lrhino/debug/DebugFrame;", 16 },
	{ "useActivation", &class_boolean, offsetof(rhino_Interpreter$CallFrame, F_useActivation), "Z", 16 },
	{ "isContinuationsTopFrame", &class_boolean, offsetof(rhino_Interpreter$CallFrame, F_isContinuationsTopFrame), "Z", 0 },
	{ "thisObj", &class_rhino_Scriptable, offsetof(rhino_Interpreter$CallFrame, F_thisObj), "Lrhino/Scriptable;", 16 },
	{ "result", &class_java_lang_Object, offsetof(rhino_Interpreter$CallFrame, F_result), "Ljava/lang/Object;", 0 },
	{ "resultDbl", &class_double, offsetof(rhino_Interpreter$CallFrame, F_resultDbl), "D", 0 },
	{ "pc", &class_int, offsetof(rhino_Interpreter$CallFrame, F_pc), "I", 0 },
	{ "pcPrevBranch", &class_int, offsetof(rhino_Interpreter$CallFrame, F_pcPrevBranch), "I", 0 },
	{ "pcSourceLineStart", &class_int, offsetof(rhino_Interpreter$CallFrame, F_pcSourceLineStart), "I", 0 },
	{ "scope", &class_rhino_Scriptable, offsetof(rhino_Interpreter$CallFrame, F_scope), "Lrhino/Scriptable;", 0 },
	{ "savedStackTop", &class_int, offsetof(rhino_Interpreter$CallFrame, F_savedStackTop), "I", 0 },
	{ "savedCallOp", &class_int, offsetof(rhino_Interpreter$CallFrame, F_savedCallOp), "I", 0 },
	{ "throwable", &class_java_lang_Object, offsetof(rhino_Interpreter$CallFrame, F_throwable), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Interpreter$CallFrame_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_rhino_Interpreter$CallFrame, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/InterpretedFunction;Lrhino/Interpreter$CallFrame;)V", 0 },
	{ "initializeArgs", (intptr_t) M_rhino_Interpreter$CallFrame_initializeArgs_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int, VTABLE_rhino_Interpreter$CallFrame_initializeArgs_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;[DII)V", 0 },
	{ "cloneFrozen", (intptr_t) M_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame, VTABLE_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame, "()Lrhino/Interpreter$CallFrame;", 0 },
	{ "equals", (intptr_t) M_rhino_Interpreter$CallFrame_equals_java_lang_Object_R_boolean, VTABLE_rhino_Interpreter$CallFrame_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_Interpreter$CallFrame_hashCode_R_int, VTABLE_rhino_Interpreter$CallFrame_hashCode_R_int, "()I", 1 },
	{ "equalsInTopScope", (intptr_t) M_rhino_Interpreter$CallFrame_equalsInTopScope_java_lang_Object_R_boolean, VTABLE_rhino_Interpreter$CallFrame_equalsInTopScope_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 2 },
	{ "isStrictTopFrame", (intptr_t) M_rhino_Interpreter$CallFrame_isStrictTopFrame_R_boolean, VTABLE_rhino_Interpreter$CallFrame_isStrictTopFrame_R_boolean, "()Z", 2 },
	{ "equals", (intptr_t) SM_rhino_Interpreter$CallFrame_equals_rhino_Interpreter$CallFrame_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean, 0, "(Lrhino/Interpreter$CallFrame;Lrhino/Interpreter$CallFrame;Lrhino/EqualObjectGraphs;)Z", 10 },
	{ "fieldsEqual", (intptr_t) M_rhino_Interpreter$CallFrame_fieldsEqual_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean, VTABLE_rhino_Interpreter$CallFrame_fieldsEqual_rhino_Interpreter$CallFrame_rhino_EqualObjectGraphs_R_boolean, "(Lrhino/Interpreter$CallFrame;Lrhino/EqualObjectGraphs;)Z", 2 },
	{ "lambda$equalsInTopScope$1", (intptr_t) M_rhino_Interpreter$CallFrame_lambda$equalsInTopScope$1_java_lang_Object_rhino_EqualObjectGraphs_R_java_lang_Boolean, VTABLE_rhino_Interpreter$CallFrame_lambda$equalsInTopScope$1_java_lang_Object_rhino_EqualObjectGraphs_R_java_lang_Boolean, "(Ljava/lang/Object;Lrhino/EqualObjectGraphs;)Ljava/lang/Boolean;", 4098 },
	{ "lambda$equals$0", (intptr_t) M_rhino_Interpreter$CallFrame_lambda$equals$0_java_lang_Object_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_Interpreter$CallFrame_lambda$equals$0_java_lang_Object_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 4098 },
};

Class class_rhino_Interpreter$CallFrame{
		.nativeName = (intptr_t) "rhino/Interpreter$CallFrame",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Interpreter$CallFrame),
		.classVtable = (intptr_t) vtable_rhino_Interpreter$CallFrame,
		.staticInitializer = (intptr_t) clinit_rhino_Interpreter$CallFrame,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Interpreter$CallFrame,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Interpreter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Interpreter$CallFrame = registerClass(&class_rhino_Interpreter$CallFrame);

}

