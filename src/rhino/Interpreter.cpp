#include "rhino/Interpreter.h"
#include "rhino/Function.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Error.h"
#include "rhino/InterpreterData.h"
#include "rhino/NativeFunction.h"
#include "java/util/ArrayList.h"
#include "rhino/ES6Generator_YieldStarResult.h"
#include "rhino/Callable.h"
#include "java/io/PrintStream.h"
#include "rhino/EvaluatorException.h"
#include "rhino/Ref.h"
#include "rhino/ConsString.h"
#include "rhino/ast/ScriptNode.h"
#include "rhino/Interpreter_ContinuationJump.h"
#include "rhino/NativeIterator.h"
#include "java/lang/Throwable.h"
#include "rhino/NativeIterator_StopIteration.h"
#include "rhino/NativeWith.h"
#include "rhino/UintMap.h"
#include "rhino/Context.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/NativeGenerator.h"
#include "rhino/ObjArray.h"
#include "rhino/ScriptStackElement.h"
#include "rhino/Interpreter_CallFrame.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/ScriptRuntime_NoSuchMethodShim.h"
#include "rhino/debug/DebugFrame.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/ContinuationPending.h"
#include "java/lang/RuntimeException.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"
#include "java/lang/Boolean.h"
#include "rhino/Scriptable.h"
#include "rhino/BaseFunction.h"
#include "rhino/Undefined.h"
#include "rhino/JavaScriptException.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "rhino/InterpretedFunction.h"
#include "rhino/Script.h"
#include "rhino/Evaluator.h"
#include "rhino/Interpreter_GeneratorState.h"
#include "rhino/Icode.h"
#include "rhino/NativeContinuation.h"
#include "java/lang/Number.h"
#include "rhino/Interpreter.h"
#include "rhino/ScriptableObject.h"
#include "rhino/ArrowFunction.h"
#include "rhino/EcmaError.h"
#include "rhino/UniqueTag.h"
#include "rhino/CodeGenerator.h"
#include "java/lang/CharSequence.h"
#include "rhino/RhinoException.h"
#include "rhino/CompilerEnvirons.h"
#include "rhino/ConstProperties.h"
#include "rhino/ES6Generator.h"
#include "java/util/Objects.h"

extern "C" {

jint SF_rhino_Interpreter_EXCEPTION_TRY_START_SLOT;
jint SF_rhino_Interpreter_EXCEPTION_TRY_END_SLOT;
jint SF_rhino_Interpreter_EXCEPTION_HANDLER_SLOT;
jint SF_rhino_Interpreter_EXCEPTION_TYPE_SLOT;
jint SF_rhino_Interpreter_EXCEPTION_LOCAL_SLOT;
jint SF_rhino_Interpreter_EXCEPTION_SCOPE_SLOT;
jint SF_rhino_Interpreter_EXCEPTION_SLOT_SIZE;

void mark_rhino_Interpreter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_Icode(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_Interpreter *) object;
	if (self->F_itsData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsData)->clazz)->markFunction)((jobject) self->F_itsData, mark, depth + 1);
}

void init_rhino_Interpreter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_rhino_Icode(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Interpreter_compareIdata_rhino_InterpreterData_rhino_InterpreterData_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:compareIdata", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(279);
	if ((frame[0].o) == (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_rhino_Interpreter_getEncodedSource_rhino_InterpreterData_R_java_lang_String(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_rhino_Interpreter_getEncodedSource_rhino_InterpreterData_R_java_lang_String(ctx, (frame[1].o));
	jint temp0 = (jint)SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_captureFrameForGenerator_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:captureFrameForGenerator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(333);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_frozen = (jint(1));
	LINE_NUMBER(334);
	sp[0].o = (jobject)((func_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(335);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_frozen = (jint(0));
	LINE_NUMBER(338);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame = (jref) (jobject(nullptr));
	LINE_NUMBER(339);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frameIndex = (jint(0));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:compile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(364);
	clinit_rhino_CodeGenerator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_CodeGenerator);
	init_rhino_CodeGenerator(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_CodeGenerator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_rhino_InterpreterData) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_CodeGenerator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_rhino_InterpreterData])(ctx, (frame[5].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i));
	((rhino_Interpreter *) NULL_CHECK(sp[0].o))->F_itsData = (jref) sp[1].o;
	LINE_NUMBER(366);
	sp[0].o = (jobject)((rhino_Interpreter *) NULL_CHECK((frame[0].o)))->F_itsData;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter_createScriptObject_java_lang_Object_R_rhino_Script(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:createScriptObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(371);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_1:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((rhino_Interpreter *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)SM_rhino_InterpretedFunction_createScript_rhino_InterpreterData_R_rhino_InterpretedFunction(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Interpreter_setEvalScriptFlag_rhino_Script(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:setEvalScriptFlag", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((checkCast(ctx, &class_rhino_InterpretedFunction, (frame[1].o)))))->F_idata;
	((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_evalScriptFlag = (jint(1));
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:createFunctionObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(386);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Interpreter *) NULL_CHECK((frame[0].o)))->F_itsData;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_1:;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((rhino_Interpreter *) NULL_CHECK((frame[0].o)))->F_itsData;
	sp[0].o = (jobject)SM_rhino_InterpretedFunction_createFunction_rhino_Context_rhino_Scriptable_rhino_InterpreterData_R_rhino_InterpretedFunction(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_getShort_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getShort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) << (8)) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return (((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) & (255)) << (8)) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_getInt_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return ((((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) << (24)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (16))) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))) & (255)) << (8))) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))) & (255)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_getExceptionHandler_rhino_Interpreter$CallFrame_boolean_R_int(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getExceptionHandler", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsExceptionTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(409);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(417);
	frame[3].i = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_pc) - (jint(1)));
	LINE_NUMBER(420);
	frame[4].i = (jint(-1));
	frame[5].i = (jint(0));
	frame[6].i = (jint(0));
	LINE_NUMBER(421);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	if ((frame[7].i) == (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(422);
	frame[8].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), ((frame[7].i) + (jint(0)))));
	LINE_NUMBER(423);
	frame[9].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(424);
	if ((frame[8].i) > (frame[3].i)) goto label_13;
	}
	{
	if ((frame[3].i) < (frame[9].i)) goto label_14;
	}
	LINE_NUMBER(425);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(427);
	if ((frame[1].i) == 0) goto label_16;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), ((frame[7].i) + (jint(3))))) == (jint(1))) goto label_16;
	}
	LINE_NUMBER(428);
	goto label_13;
label_16:;
	{
	LINE_NUMBER(430);
	if ((frame[4].i) < 0) goto label_18;
	}
	{
	LINE_NUMBER(434);
	if ((frame[6].i) >= (frame[9].i)) goto label_20;
	}
	LINE_NUMBER(435);
	goto label_13;
label_20:;
	{
	LINE_NUMBER(438);
	if ((frame[5].i) <= (frame[8].i)) goto label_22;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_22:;
	{
	LINE_NUMBER(439);
	if ((frame[6].i) != (frame[9].i)) goto label_18;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_18:;
	{
	LINE_NUMBER(441);
	frame[4].i = (frame[7].i);
	LINE_NUMBER(442);
	frame[5].i = (frame[8].i);
	LINE_NUMBER(443);
	frame[6].i = (frame[9].i);
	}
label_13:;
	{
	LINE_NUMBER(421);
	INST_IINC(7, 6);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void SM_rhino_Interpreter_dumpICode_rhino_InterpreterData(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:dumpICode", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	LINE_NUMBER(450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_bytecodeSpan_int_R_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:bytecodeSpan", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(652);
	switch((frame[0].i)) {
		case -66: goto label_1;
		case -65: goto label_1;
		case -64: goto label_2;
		case -63: goto label_1;
		case -62: goto label_1;
		case -61: goto label_3;
		case -60: goto label_2;
		case -59: goto label_2;
		case -58: goto label_2;
		case -57: goto label_2;
		case -56: goto label_2;
		case -55: goto label_2;
		case -54: goto label_1;
		case -53: goto label_2;
		case -52: goto label_2;
		case -51: goto label_2;
		case -50: goto label_2;
		case -49: goto label_3;
		case -48: goto label_3;
		case -47: goto label_4;
		case -46: goto label_1;
		case -45: goto label_3;
		case -44: goto label_2;
		case -43: goto label_2;
		case -42: goto label_2;
		case -41: goto label_2;
		case -40: goto label_4;
		case -39: goto label_1;
		case -38: goto label_3;
		case -37: goto label_2;
		case -36: goto label_2;
		case -35: goto label_2;
		case -34: goto label_2;
		case -33: goto label_2;
		case -32: goto label_2;
		case -31: goto label_2;
		case -30: goto label_2;
		case -29: goto label_2;
		case -28: goto label_4;
		case -27: goto label_1;
		case -26: goto label_1;
		case -25: goto label_2;
		case -24: goto label_2;
		case -23: goto label_1;
		case -22: goto label_2;
		case -21: goto label_5;
		case -20: goto label_2;
		case -19: goto label_2;
		case -18: goto label_2;
		case -17: goto label_2;
		case -16: goto label_2;
		case -15: goto label_2;
		case -14: goto label_2;
		case -13: goto label_2;
		case -12: goto label_2;
		case -11: goto label_3;
		case -10: goto label_3;
		case -9: goto label_3;
		case -8: goto label_3;
		case -7: goto label_3;
		case -6: goto label_1;
		case -5: goto label_2;
		case -4: goto label_2;
		case -3: goto label_2;
		case -2: goto label_2;
		case -1: goto label_2;
		case 0: goto label_2;
		case 1: goto label_2;
		case 2: goto label_2;
		case 3: goto label_2;
		case 4: goto label_2;
		case 5: goto label_1;
		case 6: goto label_1;
		case 7: goto label_1;
		case 8: goto label_2;
		case 9: goto label_2;
		case 10: goto label_2;
		case 11: goto label_2;
		case 12: goto label_2;
		case 13: goto label_2;
		case 14: goto label_2;
		case 15: goto label_2;
		case 16: goto label_2;
		case 17: goto label_2;
		case 18: goto label_2;
		case 19: goto label_2;
		case 20: goto label_2;
		case 21: goto label_2;
		case 22: goto label_2;
		case 23: goto label_2;
		case 24: goto label_2;
		case 25: goto label_2;
		case 26: goto label_2;
		case 27: goto label_2;
		case 28: goto label_2;
		case 29: goto label_2;
		case 30: goto label_2;
		case 31: goto label_2;
		case 32: goto label_2;
		case 33: goto label_2;
		case 34: goto label_2;
		case 35: goto label_2;
		case 36: goto label_2;
		case 37: goto label_2;
		case 38: goto label_2;
		case 39: goto label_2;
		case 40: goto label_2;
		case 41: goto label_2;
		case 42: goto label_2;
		case 43: goto label_2;
		case 44: goto label_2;
		case 45: goto label_2;
		case 46: goto label_2;
		case 47: goto label_2;
		case 48: goto label_2;
		case 49: goto label_2;
		case 50: goto label_1;
		case 51: goto label_2;
		case 52: goto label_2;
		case 53: goto label_2;
		case 54: goto label_2;
		case 55: goto label_2;
		case 56: goto label_2;
		case 57: goto label_3;
		case 58: goto label_2;
		case 59: goto label_2;
		case 60: goto label_2;
		case 61: goto label_2;
		case 62: goto label_2;
		case 63: goto label_2;
		case 64: goto label_2;
		case 65: goto label_2;
		case 66: goto label_2;
		case 67: goto label_2;
		case 68: goto label_2;
		case 69: goto label_2;
		case 70: goto label_2;
		case 71: goto label_2;
		case 72: goto label_2;
		case 73: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(680);
	popStackFrame(ctx);
	return (jint(3));
	}
label_5:;
	{
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return (jint(5));
	}
label_3:;
	{
	LINE_NUMBER(708);
	popStackFrame(ctx);
	return (jint(2));
	}
label_4:;
	{
	LINE_NUMBER(718);
	popStackFrame(ctx);
	return (jint(5));
	}
label_2:;
	{
	LINE_NUMBER(720);
	jint temp0 = (jint)SM_rhino_Icode_validBytecode_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_6;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_6:;
	{
	LINE_NUMBER(721);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_getLineNumbers_rhino_InterpreterData_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getLineNumbers", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(725);
	clinit_rhino_UintMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_UintMap);
	init_rhino_UintMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(727);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_itsICode;
	frame[2].o = sp[0].o;
	LINE_NUMBER(728);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(729);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) == (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(730);
	frame[5].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(731);
	jint temp0 = (jint)SM_rhino_Interpreter_bytecodeSpan_int_R_int(ctx, (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(732);
	if ((frame[5].i) != (-26)) goto label_9;
	}
	{
	LINE_NUMBER(733);
	if ((frame[6].i) == (jint(3))) goto label_11;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_11:;
	{
	LINE_NUMBER(734);
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, (frame[2].o), ((frame[4].i) + (jint(1))));
	frame[7].i = temp0;
	LINE_NUMBER(735);
	((func_rhino_UintMap_put_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_UintMap_put_int_int])(ctx, (frame[1].o), (frame[7].i), (jint(0)));
	}
label_9:;
	{
	LINE_NUMBER(737);
	frame[4].i = ((frame[4].i) + (frame[6].i));
	LINE_NUMBER(738);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(740);
	sp[0].o = (jobject)((func_rhino_UintMap_getKeys_R_Array1_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_UintMap_getKeys_R_Array1_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Interpreter_captureStackInfo_rhino_RhinoException(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:captureStackInfo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(745);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(746);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_lastInterpreterFrame;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(748);
	((rhino_RhinoException *) NULL_CHECK((frame[1].o)))->F_interpreterStackInfo = (jref) (jobject(nullptr));
	LINE_NUMBER(749);
	((rhino_RhinoException *) NULL_CHECK((frame[1].o)))->F_interpreterLineData = (jref) (jobject(nullptr));
	LINE_NUMBER(750);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_previousInterpreterInvocations;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_previousInterpreterInvocations;
	LINE_NUMBER(755);
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_Interpreter$CallFrame, (jint(1)));
	frame[3].o = sp[0].o;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_previousInterpreterInvocations;
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(759);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_previousInterpreterInvocations;
	sp[0].o = (jobject)((func_rhino_ObjArray_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_lastInterpreterFrame;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	LINE_NUMBER(765);
	INST_IINC(4, -1);
label_12:;
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_Interpreter$CallFrame, ((frame[4].i) + (jint(1))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(768);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_previousInterpreterInvocations;
	((func_rhino_ObjArray_toArray_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_toArray_Array1_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	}
label_10:;
	{
	LINE_NUMBER(770);
	sp[0].o = frame[3].o;
	jint temp0 = (((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1));
	sp[1].o = (jobject)((rhino_Context *) NULL_CHECK((frame[2].o)))->F_lastInterpreterFrame;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_rhino_Interpreter$CallFrame, sp[1].o));
	LINE_NUMBER(772);
	frame[4].i = (jint(0));
	LINE_NUMBER(773);
	frame[5].i = (jint(0));
	}
label_17:;
	{
	if ((frame[5].i) == (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_18;
	}
	{
	LINE_NUMBER(774);
	frame[4].i = ((frame[4].i) + ((jint(1)) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)))))->F_frameIndex)));
	LINE_NUMBER(773);
	INST_IINC(5, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(777);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(780);
	frame[6].i = (frame[4].i);
	LINE_NUMBER(781);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_23:;
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_24;
	{
	LINE_NUMBER(782);
	INST_IINC(7, -1);
	LINE_NUMBER(783);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i)));
	}
label_27:;
	{
	LINE_NUMBER(784);
	if ((frame[8].o) == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(785);
	INST_IINC(6, -1);
	LINE_NUMBER(786);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[6].i)) = ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[8].o)))->F_pcSourceLineStart);
	LINE_NUMBER(787);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[8].o)))->F_parentFrame;
	frame[8].o = sp[0].o;
	goto label_27;
	}
label_28:;
	LINE_NUMBER(789);
	goto label_23;
label_24:;
	{
	LINE_NUMBER(790);
	if ((frame[6].i) == 0) goto label_32;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_32:;
	{
	LINE_NUMBER(792);
	((rhino_RhinoException *) NULL_CHECK((frame[1].o)))->F_interpreterStackInfo = (jref) (frame[3].o);
	LINE_NUMBER(793);
	((rhino_RhinoException *) NULL_CHECK((frame[1].o)))->F_interpreterLineData = (jref) (frame[5].o);
	LINE_NUMBER(794);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getSourcePositionFromStack", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(798);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_lastInterpreterFrame;
	frame[3].o = (checkCast(ctx, &class_rhino_Interpreter$CallFrame, sp[0].o));
	LINE_NUMBER(799);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[3].o)))->F_idata;
	frame[4].o = sp[0].o;
	LINE_NUMBER(800);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[3].o)))->F_pcSourceLineStart) < 0) goto label_3;
	}
	{
	LINE_NUMBER(801);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[4].o)))->F_itsICode;
	jint temp1 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, sp[1].o, ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[3].o)))->F_pcSourceLineStart));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(803);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[4].o)))->F_itsSourceFile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getPatchedStack", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(811);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"rhino.Interpreter.interpretLoop"_j)));
	LINE_NUMBER(812);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (temp0 + (1000)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(813);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"line.separator"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(815);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[1].o)))->F_interpreterStackInfo;
	frame[6].o = (checkCast(ctx, getArrayClass(&class_rhino_Interpreter$CallFrame, 1), (checkCast(ctx, getArrayClass(&class_rhino_Interpreter$CallFrame, 1), sp[0].o))));
	LINE_NUMBER(816);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[1].o)))->F_interpreterLineData;
	frame[7].o = sp[0].o;
	LINE_NUMBER(817);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	LINE_NUMBER(818);
	frame[9].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	LINE_NUMBER(819);
	frame[10].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(820);
	if ((frame[8].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(821);
	INST_IINC(8, -1);
	LINE_NUMBER(822);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_int_R_int])(ctx, (frame[2].o), (frame[3].o), (frame[10].i));
	frame[11].i = temp0;
	LINE_NUMBER(823);
	if ((frame[11].i) >= 0) goto label_13;
	}
	LINE_NUMBER(824);
	goto label_9;
label_13:;
	{
	LINE_NUMBER(828);
	jint temp0 = frame[11].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[11].i = (temp0 + temp1);
	}
label_15:;
	{
	LINE_NUMBER(830);
	jint temp0 = frame[11].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 == temp1) goto label_16;
	}
	{
	LINE_NUMBER(831);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[11].i));
	frame[12].i = temp0;
	LINE_NUMBER(832);
	if ((frame[12].i) == (10)) goto label_16;
	}
	{
	if ((frame[12].i) != (13)) goto label_19;
	}
	LINE_NUMBER(833);
	goto label_16;
label_19:;
	{
	LINE_NUMBER(830);
	INST_IINC(11, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[4].o), (frame[2].o), (frame[10].i), (frame[11].i));
	LINE_NUMBER(837);
	frame[10].i = (frame[11].i);
	LINE_NUMBER(839);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	}
label_23:;
	{
	LINE_NUMBER(840);
	if ((frame[12].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(841);
	if ((frame[9].i) != 0) goto label_26;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_26:;
	{
	LINE_NUMBER(842);
	INST_IINC(9, -1);
	LINE_NUMBER(843);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[12].o)))->F_idata;
	frame[13].o = sp[0].o;
	LINE_NUMBER(844);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(845);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"\tat script"_j))));
	LINE_NUMBER(846);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[13].o)))->F_itsName;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[13].o)))->F_itsName;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (46));
	LINE_NUMBER(848);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[13].o)))->F_itsName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_31:;
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (40));
	LINE_NUMBER(851);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[13].o)))->F_itsSourceFile;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(852);
	frame[14].i = ((jint)ARRAY_ACCESS(jint, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(853);
	if ((frame[14].i) < 0) goto label_37;
	}
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (58));
	LINE_NUMBER(856);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[13].o)))->F_itsICode;
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, sp[1].o, (frame[14].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	}
label_37:;
	{
	LINE_NUMBER(858);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (41));
	LINE_NUMBER(859);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[12].o)))->F_parentFrame;
	frame[12].o = sp[0].o;
	LINE_NUMBER(860);
	goto label_23;
	}
label_24:;
	LINE_NUMBER(861);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(862);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (frame[10].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(864);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter_getScriptStack_rhino_RhinoException_R_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getScriptStack", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)((func_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(870);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	frame[3].o = sp[0].o;
	LINE_NUMBER(871);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"line.separator"_j));
	LINE_NUMBER(872);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(873);
	frame[5].o = (frame[2].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_6;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(874);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(875);
	frame[10].o = (frame[8].o);
	frame[11].i = (((jarray) nullCheck(ctx, (frame[10].o)))->length);
	frame[12].i = (jint(0));
	}
label_9:;
	{
	if ((frame[12].i) >= (frame[11].i)) goto label_10;
	}
	{
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[12].i)));
	LINE_NUMBER(876);
	((func_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder])(ctx, (frame[13].o), (frame[9].o));
	LINE_NUMBER(877);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[9].o), (frame[4].o));
	LINE_NUMBER(875);
	INST_IINC(12, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(879);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(873);
	INST_IINC(7, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getScriptStackElements", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[1].o)))->F_interpreterStackInfo;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(886);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_rhino_ScriptStackElement, 2), (jobject(nullptr))));
	}
label_1:;
	{
	LINE_NUMBER(889);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(891);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[1].o)))->F_interpreterStackInfo;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_rhino_Interpreter$CallFrame, 1), (checkCast(ctx, getArrayClass(&class_rhino_Interpreter$CallFrame, 1), sp[0].o))));
	LINE_NUMBER(892);
	sp[0].o = (jobject)((rhino_RhinoException *) NULL_CHECK((frame[1].o)))->F_interpreterLineData;
	frame[4].o = sp[0].o;
	LINE_NUMBER(893);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(894);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	}
label_7:;
	{
	LINE_NUMBER(895);
	if ((frame[5].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(896);
	INST_IINC(5, -1);
	LINE_NUMBER(897);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(898);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(899);
	if ((frame[7].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(900);
	if ((frame[6].i) != 0) goto label_15;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_15:;
	{
	LINE_NUMBER(901);
	INST_IINC(6, -1);
	LINE_NUMBER(902);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[7].o)))->F_idata;
	frame[9].o = sp[0].o;
	LINE_NUMBER(903);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[9].o)))->F_itsSourceFile;
	frame[10].o = sp[0].o;
	LINE_NUMBER(904);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(905);
	frame[12].i = (jint(-1));
	LINE_NUMBER(906);
	frame[13].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(907);
	if ((frame[13].i) < 0) goto label_22;
	}
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[9].o)))->F_itsICode;
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, sp[0].o, (frame[13].i));
	frame[12].i = temp0;
	}
label_22:;
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[9].o)))->F_itsName;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[9].o)))->F_itsName;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[9].o)))->F_itsName;
	frame[11].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(913);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[7].o)))->F_parentFrame;
	frame[7].o = sp[0].o;
	LINE_NUMBER(914);
	sp[0].o = frame[8].o;
	clinit_rhino_ScriptStackElement(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ScriptStackElement);
	init_rhino_ScriptStackElement_java_lang_String_java_lang_String_int(ctx, sp[1].o, (frame[10].o), (frame[11].o), (frame[12].i));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(915);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(916);
	sp[0].o = frame[2].o;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)createArray(ctx, &class_rhino_ScriptStackElement, (jint(0)));
	sp[1].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[1].o))(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(917);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(918);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_rhino_ScriptStackElement, 1), temp0);
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_rhino_ScriptStackElement, 2), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_getEncodedSource_rhino_InterpreterData_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getEncodedSource", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(922);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_encodedSource;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(923);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(925);
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_encodedSource;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_encodedSourceStart), ((jint)((rhino_InterpreterData *) NULL_CHECK((frame[0].o)))->F_encodedSourceEnd));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_Interpreter_initFunction_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:initFunction", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)SM_rhino_InterpretedFunction_createFunction_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int_R_rhino_InterpretedFunction(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(933);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[4].o)))->F_idata;
	jint temp0 = (jint)((rhino_InterpreterData *) NULL_CHECK(sp[3].o))->F_itsFunctionType;
	sp[3].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[2].o)))->F_idata;
	SM_rhino_ScriptRuntime_initFunction_rhino_Context_rhino_Scriptable_rhino_NativeFunction_int_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[3].o))->F_evalScriptFlag));
	LINE_NUMBER(935);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_interpret_rhino_InterpretedFunction_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:interpret", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(940);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_hasTopCall_rhino_Context_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)SM_rhino_Interpreter_initFrame_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int_rhino_InterpretedFunction_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (jobject(nullptr)), (jint(0)), (((jarray) nullCheck(ctx, (frame[4].o)))->length), (frame[0].o), (jobject(nullptr)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(944);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[5].o)))->F_isContinuationsTopFrame = ((jint)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_isContinuationsTopCall);
	LINE_NUMBER(945);
	((rhino_Context *) NULL_CHECK((frame[1].o)))->F_isContinuationsTopCall = (jint(0));
	LINE_NUMBER(947);
	sp[0].o = (jobject)SM_rhino_Interpreter_interpretLoop_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), (frame[5].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:resumeGenerator", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(966);
	frame[5].o = (checkCast(ctx, &class_rhino_Interpreter$CallFrame, (frame[3].o)));
	LINE_NUMBER(967);
	clinit_rhino_Interpreter$GeneratorState(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Interpreter$GeneratorState);
	init_rhino_Interpreter$GeneratorState_int_java_lang_Object(ctx, sp[0].o, (frame[2].i), (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(968);
	if ((frame[2].i) != (jint(2))) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)SM_rhino_Interpreter_interpretLoop_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[5].o), (frame[6].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(971);
	frame[7].o = sp[0].o;
	LINE_NUMBER(973);
	if ((frame[7].o) == (frame[4].o)) goto label_9;
	}
	{
	LINE_NUMBER(974);
	throwException(ctx, (frame[7].o));	}
label_9:;
	{
	LINE_NUMBER(976);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(978);
	sp[0].o = (jobject)SM_rhino_Interpreter_interpretLoop_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[5].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(979);
	sp[0].o = (jobject)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[6].o)))->F_returnedException;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(980);
	sp[0].o = (jobject)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[6].o)))->F_returnedException;
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(981);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_restartContinuation_rhino_NativeContinuation_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:restartContinuation", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(986);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_hasTopCall_rhino_Context_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_boolean_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (frame[3].o), ((jint)((rhino_Context *) NULL_CHECK((frame[1].o)))->F_isTopLevelStrict));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(991);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(992);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[4].o = sp[0].o;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(994);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))));
	}
label_6:;
	{
	LINE_NUMBER(997);
	sp[0].o = (jobject)((func_rhino_NativeContinuation_getImplementation_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeContinuation_getImplementation_R_java_lang_Object])(ctx, (frame[0].o));
	frame[5].o = (checkCast(ctx, &class_rhino_Interpreter$CallFrame, sp[0].o));
	LINE_NUMBER(998);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1000);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_8:;
	{
	LINE_NUMBER(1003);
	clinit_rhino_Interpreter$ContinuationJump(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Interpreter$ContinuationJump);
	init_rhino_Interpreter$ContinuationJump_rhino_NativeContinuation_rhino_Interpreter$CallFrame(ctx, sp[0].o, (frame[0].o), (jobject(nullptr)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1005);
	((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[6].o)))->F_result = (jref) (frame[4].o);
	LINE_NUMBER(1006);
	sp[0].o = (jobject)SM_rhino_Interpreter_interpretLoop_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), (jobject(nullptr)), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_interpretLoop_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[40];
	auto stack = &frame[29];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:interpretLoop", 40 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[340]{};

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1015);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1016);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1018);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionThreshold) == 0) goto label_47;
	}
	INST_ICONST(1);
	goto label_48;
label_47:;
	INST_ICONST(0);
label_48:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1021);
	frame[6].i = (100);
	LINE_NUMBER(1023);
	frame[7].i = (100);
	LINE_NUMBER(1025);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(1026);
	frame[9].i = (jint(-1));
	LINE_NUMBER(1028);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_lastInterpreterFrame;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(1031);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_previousInterpreterInvocations;
	if (sp[0].o != nullptr) goto label_56;
	}
	{
	LINE_NUMBER(1032);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjArray);
	init_rhino_ObjArray(ctx, sp[1].o);
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_previousInterpreterInvocations = (jref) sp[1].o;
	}
label_56:;
	{
	LINE_NUMBER(1034);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_previousInterpreterInvocations;
	sp[1].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_lastInterpreterFrame;
	((func_rhino_ObjArray_push_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_push_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_54:;
	{
	LINE_NUMBER(1044);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(1045);
	if ((frame[2].o) == nullptr) goto label_59;
	}
	{
	LINE_NUMBER(1046);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Interpreter$GeneratorState)) == 0) goto label_61;
	}
	{
	LINE_NUMBER(1047);
	frame[10].o = (checkCast(ctx, &class_rhino_Interpreter$GeneratorState, (frame[2].o)));
	LINE_NUMBER(1050);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	SM_rhino_Interpreter_enterFrame_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(1051);
	frame[2].o = (jobject(nullptr));
	goto label_59;
	}
label_61:;
	{
	LINE_NUMBER(1052);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Interpreter$ContinuationJump)) != 0) goto label_59;
	}
	{
	LINE_NUMBER(1054);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_59:;
	{
	LINE_NUMBER(1058);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(1059);
	frame[12].d = (jdouble(0));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[218]) { bypasses[218] = false; goto label_80; }
	if (bypasses[221]) { bypasses[221] = false; goto label_80; }
	if (bypasses[222]) { bypasses[222] = false; goto label_80; }
	if (bypasses[223]) { bypasses[223] = false; goto label_80; }
	if (bypasses[224]) { bypasses[224] = false; goto label_80; }
	if (bypasses[226]) { bypasses[226] = false; goto label_80; }
	if (bypasses[228]) { bypasses[228] = false; goto label_80; }
	if (bypasses[229]) { bypasses[229] = false; goto label_80; }
	if (bypasses[233]) { bypasses[233] = false; goto label_80; }
	if (bypasses[234]) { bypasses[234] = false; goto label_80; }
	if (bypasses[235]) { bypasses[235] = false; goto label_80; }
	if (bypasses[236]) { bypasses[236] = false; goto label_80; }
	if (bypasses[237]) { bypasses[237] = false; goto label_80; }
	if (bypasses[238]) { bypasses[238] = false; goto label_80; }
	if (bypasses[239]) { bypasses[239] = false; goto label_80; }
	if (bypasses[240]) { bypasses[240] = false; goto label_80; }
	if (bypasses[241]) { bypasses[241] = false; goto label_80; }
	if (bypasses[242]) { bypasses[242] = false; goto label_80; }
	if (bypasses[246]) { bypasses[246] = false; goto label_80; }
	if (bypasses[247]) { bypasses[247] = false; goto label_80; }
	if (bypasses[248]) { bypasses[248] = false; goto label_80; }
	if (bypasses[249]) { bypasses[249] = false; goto label_80; }
	if (bypasses[250]) { bypasses[250] = false; goto label_80; }
	if (bypasses[251]) { bypasses[251] = false; goto label_80; }
	if (bypasses[252]) { bypasses[252] = false; goto label_80; }
	if (bypasses[253]) { bypasses[253] = false; goto label_80; }
	if (bypasses[254]) { bypasses[254] = false; goto label_80; }
	if (bypasses[255]) { bypasses[255] = false; goto label_80; }
	if (bypasses[256]) { bypasses[256] = false; goto label_80; }
	if (bypasses[257]) { bypasses[257] = false; goto label_80; }
	if (bypasses[258]) { bypasses[258] = false; goto label_80; }
	if (bypasses[259]) { bypasses[259] = false; goto label_80; }
	if (bypasses[260]) { bypasses[260] = false; goto label_80; }
	if (bypasses[261]) { bypasses[261] = false; goto label_80; }
	if (bypasses[262]) { bypasses[262] = false; goto label_80; }
	if (bypasses[263]) { bypasses[263] = false; goto label_80; }
	if (bypasses[264]) { bypasses[264] = false; goto label_80; }
	if (bypasses[265]) { bypasses[265] = false; goto label_80; }
	if (bypasses[266]) { bypasses[266] = false; goto label_80; }
	if (bypasses[267]) { bypasses[267] = false; goto label_80; }
	if (bypasses[268]) { bypasses[268] = false; goto label_80; }
	if (bypasses[269]) { bypasses[269] = false; goto label_80; }
	if (bypasses[270]) { bypasses[270] = false; goto label_80; }
	if (bypasses[271]) { bypasses[271] = false; goto label_80; }
	if (bypasses[272]) { bypasses[272] = false; goto label_80; }
	if (bypasses[273]) { bypasses[273] = false; goto label_80; }
	if (bypasses[274]) { bypasses[274] = false; goto label_80; }
	if (bypasses[275]) { bypasses[275] = false; goto label_80; }
	if (bypasses[276]) { bypasses[276] = false; goto label_80; }
	if (bypasses[277]) { bypasses[277] = false; goto label_80; }
	if (bypasses[278]) { bypasses[278] = false; goto label_80; }
	if (bypasses[279]) { bypasses[279] = false; goto label_80; }
	if (bypasses[280]) { bypasses[280] = false; goto label_80; }
	if (bypasses[281]) { bypasses[281] = false; goto label_80; }
	if (bypasses[282]) { bypasses[282] = false; goto label_80; }
	if (bypasses[283]) { bypasses[283] = false; goto label_80; }
	if (bypasses[284]) { bypasses[284] = false; goto label_80; }
	if (bypasses[285]) { bypasses[285] = false; goto label_80; }
	if (bypasses[286]) { bypasses[286] = false; goto label_80; }
	if (bypasses[287]) { bypasses[287] = false; goto label_80; }
	if (bypasses[288]) { bypasses[288] = false; goto label_80; }
	if (bypasses[289]) { bypasses[289] = false; goto label_80; }
	if (bypasses[290]) { bypasses[290] = false; goto label_80; }
	if (bypasses[291]) { bypasses[291] = false; goto label_80; }
	if (bypasses[292]) { bypasses[292] = false; goto label_80; }
	if (bypasses[293]) { bypasses[293] = false; goto label_80; }
	if (bypasses[294]) { bypasses[294] = false; goto label_80; }
	if (bypasses[295]) { bypasses[295] = false; goto label_80; }
	if (bypasses[296]) { bypasses[296] = false; goto label_80; }
	if (bypasses[297]) { bypasses[297] = false; goto label_80; }
	if (bypasses[298]) { bypasses[298] = false; goto label_80; }
	if (bypasses[299]) { bypasses[299] = false; goto label_80; }
	if (bypasses[300]) { bypasses[300] = false; goto label_80; }
	if (bypasses[301]) { bypasses[301] = false; goto label_80; }
	if (bypasses[302]) { bypasses[302] = false; goto label_80; }
	if (bypasses[303]) { bypasses[303] = false; goto label_80; }
	if (bypasses[304]) { bypasses[304] = false; goto label_80; }
	if (bypasses[305]) { bypasses[305] = false; goto label_80; }
	if (bypasses[306]) { bypasses[306] = false; goto label_80; }
	if (bypasses[307]) { bypasses[307] = false; goto label_80; }
	if (bypasses[308]) { bypasses[308] = false; goto label_80; }
	if (bypasses[309]) { bypasses[309] = false; goto label_80; }
	if (bypasses[310]) { bypasses[310] = false; goto label_80; }
	if (bypasses[311]) { bypasses[311] = false; goto label_80; }
	if (bypasses[312]) { bypasses[312] = false; goto label_80; }
	if (bypasses[313]) { bypasses[313] = false; goto label_80; }
	if (bypasses[314]) { bypasses[314] = false; goto label_80; }
	if (bypasses[315]) { bypasses[315] = false; goto label_80; }
	if (bypasses[316]) { bypasses[316] = false; goto label_80; }
	if (bypasses[317]) { bypasses[317] = false; goto label_80; }
	if (bypasses[318]) { bypasses[318] = false; goto label_80; }
	if (bypasses[319]) { bypasses[319] = false; goto label_80; }
	if (bypasses[320]) { bypasses[320] = false; goto label_80; }
	if (bypasses[321]) { bypasses[321] = false; goto label_80; }
	if (bypasses[322]) { bypasses[322] = false; goto label_80; }
	if (bypasses[323]) { bypasses[323] = false; goto label_80; }
	if (bypasses[324]) { bypasses[324] = false; goto label_80; }
	if (bypasses[325]) { bypasses[325] = false; goto label_80; }
	if (bypasses[326]) { bypasses[326] = false; goto label_80; }
	if (bypasses[327]) { bypasses[327] = false; goto label_80; }
	if (bypasses[328]) { bypasses[328] = false; goto label_80; }
	if (bypasses[329]) { bypasses[329] = false; goto label_80; }
	if (bypasses[330]) { bypasses[330] = false; goto label_80; }
	if (bypasses[331]) { bypasses[331] = false; goto label_80; }
	if (bypasses[332]) { bypasses[332] = false; goto label_80; }
	if (bypasses[333]) { bypasses[333] = false; goto label_80; }
	if (bypasses[334]) { bypasses[334] = false; goto label_80; }
	if (bypasses[335]) { bypasses[335] = false; goto label_80; }
	if (bypasses[336]) { bypasses[336] = false; goto label_80; }
	if (bypasses[337]) { bypasses[337] = false; goto label_80; }
	if (bypasses[338]) { bypasses[338] = false; goto label_80; }
	if (bypasses[339]) { bypasses[339] = false; goto label_80; }
	{
	LINE_NUMBER(1066);
	if ((frame[2].o) == nullptr) goto label_67;
	}
	{
	LINE_NUMBER(1070);
	sp[0].o = (jobject)SM_rhino_Interpreter_processThrowable_rhino_Context_java_lang_Object_rhino_Interpreter$CallFrame_int_boolean_R_rhino_Interpreter$CallFrame(ctx, (frame[0].o), (frame[2].o), (frame[1].o), (frame[9].i), (frame[5].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_throwable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1073);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_throwable = (jref) (jobject(nullptr));
	goto label_71;
	}
label_67:;
	{
	LINE_NUMBER(1075);
	if ((frame[10].o) != nullptr) goto label_71;
	}
	{
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frozen) == 0) goto label_71;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_71:;
	{
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_stack;
	frame[14].o = sp[0].o;
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_sDbl;
	frame[15].o = sp[0].o;
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_varSource;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_stack;
	frame[16].o = sp[0].o;
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_varSource;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_sDbl;
	frame[17].o = sp[0].o;
	LINE_NUMBER(1084);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_varSource;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_stackAttributes;
	frame[18].o = sp[0].o;
	LINE_NUMBER(1085);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	frame[19].o = sp[0].o;
	LINE_NUMBER(1086);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsStringTable;
	frame[20].o = sp[0].o;
	LINE_NUMBER(1092);
	frame[21].i = ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedStackTop);
	LINE_NUMBER(1095);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_lastInterpreterFrame = (jref) (frame[1].o);
	}
label_80:;
	{
	LINE_NUMBER(1103);
	sp[0].o = frame[19].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_pc;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_pc = (temp0 + (jint(1)));
	frame[22].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(1108);
	switch((frame[22].i)) {
		case -66: goto label_82;
		case -65: { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_83
		case -64: { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_33; } // goto label_84
		case -63: { popExceptionFrames(frameRef, 1); goto label_7; }
		case -62: goto label_85;
		case -61: { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_33; } // goto label_86
		case -60: { popExceptionFrames(frameRef, 1); bypasses[10] = true; goto label_33; } // goto label_87
		case -59: { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_18; } // goto label_88
		case -58: { popExceptionFrames(frameRef, 1); bypasses[5] = true; goto label_33; } // goto label_89
		case -57: { popExceptionFrames(frameRef, 1); bypasses[6] = true; goto label_33; } // goto label_90
		case -56: { popExceptionFrames(frameRef, 1); bypasses[7] = true; goto label_18; } // goto label_91
		case -55: { popExceptionFrames(frameRef, 1); bypasses[8] = true; goto label_18; } // goto label_92
		case -54: { popExceptionFrames(frameRef, 1); bypasses[9] = true; goto label_33; } // goto label_93
		case -53: { popExceptionFrames(frameRef, 1); bypasses[64] = true; goto label_33; } // goto label_87
		case -52: { popExceptionFrames(frameRef, 1); bypasses[11] = true; goto label_33; } // goto label_94
		case -51: { popExceptionFrames(frameRef, 1); bypasses[12] = true; goto label_33; } // goto label_95
		case -50: { popExceptionFrames(frameRef, 1); bypasses[13] = true; goto label_33; } // goto label_96
		case -49: { popExceptionFrames(frameRef, 1); bypasses[14] = true; goto label_33; } // goto label_97
		case -48: { popExceptionFrames(frameRef, 1); bypasses[15] = true; goto label_33; } // goto label_98
		case -47: { popExceptionFrames(frameRef, 1); bypasses[16] = true; goto label_33; } // goto label_99
		case -46: { popExceptionFrames(frameRef, 1); bypasses[17] = true; goto label_33; } // goto label_100
		case -45: { popExceptionFrames(frameRef, 1); bypasses[18] = true; goto label_33; } // goto label_101
		case -44: { popExceptionFrames(frameRef, 1); bypasses[19] = true; goto label_33; } // goto label_102
		case -43: { popExceptionFrames(frameRef, 1); bypasses[20] = true; goto label_33; } // goto label_103
		case -42: { popExceptionFrames(frameRef, 1); bypasses[21] = true; goto label_33; } // goto label_104
		case -41: { popExceptionFrames(frameRef, 1); bypasses[22] = true; goto label_33; } // goto label_105
		case -40: { popExceptionFrames(frameRef, 1); bypasses[23] = true; goto label_33; } // goto label_106
		case -39: { popExceptionFrames(frameRef, 1); bypasses[24] = true; goto label_33; } // goto label_107
		case -38: { popExceptionFrames(frameRef, 1); bypasses[25] = true; goto label_33; } // goto label_108
		case -37: { popExceptionFrames(frameRef, 1); bypasses[26] = true; goto label_33; } // goto label_109
		case -36: { popExceptionFrames(frameRef, 1); bypasses[27] = true; goto label_33; } // goto label_110
		case -35: { popExceptionFrames(frameRef, 1); bypasses[28] = true; goto label_33; } // goto label_111
		case -34: { popExceptionFrames(frameRef, 1); bypasses[29] = true; goto label_33; } // goto label_112
		case -33: { popExceptionFrames(frameRef, 1); bypasses[30] = true; goto label_33; } // goto label_113
		case -32: { popExceptionFrames(frameRef, 1); bypasses[31] = true; goto label_33; } // goto label_114
		case -31: { popExceptionFrames(frameRef, 1); bypasses[32] = true; goto label_33; } // goto label_115
		case -30: { popExceptionFrames(frameRef, 1); bypasses[33] = true; goto label_33; } // goto label_116
		case -29: { popExceptionFrames(frameRef, 1); bypasses[34] = true; goto label_33; } // goto label_117
		case -28: { popExceptionFrames(frameRef, 1); bypasses[35] = true; goto label_33; } // goto label_118
		case -27: { popExceptionFrames(frameRef, 1); bypasses[36] = true; goto label_33; } // goto label_119
		case -26: { popExceptionFrames(frameRef, 1); bypasses[37] = true; goto label_33; } // goto label_120
		case -25: { popExceptionFrames(frameRef, 1); bypasses[38] = true; goto label_15; } // goto label_121
		case -24: { popExceptionFrames(frameRef, 1); bypasses[39] = true; goto label_15; } // goto label_122
		case -23: { popExceptionFrames(frameRef, 1); bypasses[40] = true; goto label_15; } // goto label_123
		case -22: { popExceptionFrames(frameRef, 1); bypasses[41] = true; goto label_18; } // goto label_124
		case -21: { popExceptionFrames(frameRef, 1); bypasses[42] = true; goto label_18; } // goto label_125
		case -20: { popExceptionFrames(frameRef, 1); bypasses[43] = true; goto label_33; } // goto label_126
		case -19: { popExceptionFrames(frameRef, 1); bypasses[44] = true; goto label_33; } // goto label_127
		case -18: { popExceptionFrames(frameRef, 1); bypasses[45] = true; goto label_18; } // goto label_128
		case -17: { popExceptionFrames(frameRef, 1); bypasses[46] = true; goto label_18; } // goto label_129
		case -16: { popExceptionFrames(frameRef, 1); bypasses[47] = true; goto label_18; } // goto label_130
		case -15: { popExceptionFrames(frameRef, 1); bypasses[48] = true; goto label_18; } // goto label_131
		case -14: { popExceptionFrames(frameRef, 1); bypasses[49] = true; goto label_33; } // goto label_132
		case -13: { popExceptionFrames(frameRef, 1); bypasses[50] = true; goto label_33; } // goto label_133
		case -12: { popExceptionFrames(frameRef, 1); bypasses[51] = true; goto label_33; } // goto label_134
		case -11: { popExceptionFrames(frameRef, 1); bypasses[52] = true; goto label_18; } // goto label_135
		case -10: { popExceptionFrames(frameRef, 1); bypasses[53] = true; goto label_18; } // goto label_136
		case -9: { popExceptionFrames(frameRef, 1); bypasses[54] = true; goto label_18; } // goto label_137
		case -8: { popExceptionFrames(frameRef, 1); bypasses[55] = true; goto label_33; } // goto label_138
		case -7: { popExceptionFrames(frameRef, 1); bypasses[56] = true; goto label_33; } // goto label_139
		case -6: { popExceptionFrames(frameRef, 1); bypasses[57] = true; goto label_15; } // goto label_140
		case -5: { popExceptionFrames(frameRef, 1); bypasses[58] = true; goto label_18; } // goto label_141
		case -4: { popExceptionFrames(frameRef, 1); bypasses[59] = true; goto label_18; } // goto label_142
		case -3: { popExceptionFrames(frameRef, 1); bypasses[60] = true; goto label_18; } // goto label_143
		case -2: { popExceptionFrames(frameRef, 1); bypasses[61] = true; goto label_18; } // goto label_144
		case -1: { popExceptionFrames(frameRef, 1); bypasses[62] = true; goto label_18; } // goto label_145
		case 0: { popExceptionFrames(frameRef, 1); bypasses[63] = true; goto label_18; } // goto label_146
		case 1: { popExceptionFrames(frameRef, 1); bypasses[132] = true; goto label_33; } // goto label_87
		case 2: { popExceptionFrames(frameRef, 1); bypasses[65] = true; goto label_33; } // goto label_147
		case 3: { popExceptionFrames(frameRef, 1); bypasses[66] = true; goto label_33; } // goto label_148
		case 4: { popExceptionFrames(frameRef, 1); bypasses[67] = true; goto label_18; } // goto label_149
		case 5: { popExceptionFrames(frameRef, 1); bypasses[68] = true; goto label_15; } // goto label_150
		case 6: { popExceptionFrames(frameRef, 1); bypasses[69] = true; goto label_15; } // goto label_151
		case 7: { popExceptionFrames(frameRef, 1); bypasses[70] = true; goto label_15; } // goto label_152
		case 8: { popExceptionFrames(frameRef, 1); bypasses[71] = true; goto label_18; } // goto label_153
		case 9: { popExceptionFrames(frameRef, 1); bypasses[72] = true; goto label_18; } // goto label_154
		case 10: { popExceptionFrames(frameRef, 1); bypasses[73] = true; goto label_18; } // goto label_154
		case 11: { popExceptionFrames(frameRef, 1); bypasses[74] = true; goto label_18; } // goto label_154
		case 12: { popExceptionFrames(frameRef, 1); bypasses[75] = true; goto label_15; } // goto label_155
		case 13: { popExceptionFrames(frameRef, 1); bypasses[76] = true; goto label_15; } // goto label_155
		case 14: { popExceptionFrames(frameRef, 1); goto label_13; }
		case 15: { popExceptionFrames(frameRef, 1); goto label_13; }
		case 16: { popExceptionFrames(frameRef, 1); goto label_13; }
		case 17: { popExceptionFrames(frameRef, 1); goto label_13; }
		case 18: { popExceptionFrames(frameRef, 1); bypasses[77] = true; goto label_18; } // goto label_154
		case 19: { popExceptionFrames(frameRef, 1); bypasses[78] = true; goto label_18; } // goto label_154
		case 20: { popExceptionFrames(frameRef, 1); bypasses[79] = true; goto label_18; } // goto label_156
		case 21: { popExceptionFrames(frameRef, 1); bypasses[80] = true; goto label_18; } // goto label_157
		case 22: { popExceptionFrames(frameRef, 1); bypasses[81] = true; goto label_18; } // goto label_158
		case 23: { popExceptionFrames(frameRef, 1); bypasses[82] = true; goto label_18; } // goto label_158
		case 24: { popExceptionFrames(frameRef, 1); bypasses[83] = true; goto label_18; } // goto label_158
		case 25: { popExceptionFrames(frameRef, 1); bypasses[84] = true; goto label_18; } // goto label_158
		case 26: { popExceptionFrames(frameRef, 1); bypasses[85] = true; goto label_18; } // goto label_159
		case 27: { popExceptionFrames(frameRef, 1); bypasses[86] = true; goto label_18; } // goto label_160
		case 28: { popExceptionFrames(frameRef, 1); bypasses[87] = true; goto label_18; } // goto label_161
		case 29: { popExceptionFrames(frameRef, 1); bypasses[88] = true; goto label_18; } // goto label_161
		case 30: { popExceptionFrames(frameRef, 1); bypasses[89] = true; goto label_30; } // goto label_162
		case 31: { popExceptionFrames(frameRef, 1); bypasses[90] = true; goto label_18; } // goto label_146
		case 32: { popExceptionFrames(frameRef, 1); bypasses[91] = true; goto label_33; } // goto label_163
		case 33: { popExceptionFrames(frameRef, 1); bypasses[92] = true; goto label_18; } // goto label_164
		case 34: { popExceptionFrames(frameRef, 1); bypasses[93] = true; goto label_18; } // goto label_165
		case 35: { popExceptionFrames(frameRef, 1); bypasses[94] = true; goto label_18; } // goto label_166
		case 36: { popExceptionFrames(frameRef, 1); bypasses[95] = true; goto label_18; } // goto label_167
		case 37: { popExceptionFrames(frameRef, 1); bypasses[96] = true; goto label_18; } // goto label_168
		case 38: { popExceptionFrames(frameRef, 1); bypasses[97] = true; goto label_18; } // goto label_92
		case 39: { popExceptionFrames(frameRef, 1); bypasses[98] = true; goto label_33; } // goto label_169
		case 40: { popExceptionFrames(frameRef, 1); bypasses[99] = true; goto label_33; } // goto label_170
		case 41: { popExceptionFrames(frameRef, 1); bypasses[100] = true; goto label_33; } // goto label_171
		case 42: { popExceptionFrames(frameRef, 1); bypasses[101] = true; goto label_33; } // goto label_172
		case 43: { popExceptionFrames(frameRef, 1); bypasses[102] = true; goto label_33; } // goto label_173
		case 44: { popExceptionFrames(frameRef, 1); bypasses[103] = true; goto label_33; } // goto label_174
		case 45: { popExceptionFrames(frameRef, 1); bypasses[104] = true; goto label_33; } // goto label_175
		case 46: { popExceptionFrames(frameRef, 1); bypasses[105] = true; goto label_15; } // goto label_176
		case 47: { popExceptionFrames(frameRef, 1); bypasses[106] = true; goto label_15; } // goto label_176
		case 48: { popExceptionFrames(frameRef, 1); bypasses[107] = true; goto label_33; } // goto label_177
		case 49: { popExceptionFrames(frameRef, 1); bypasses[108] = true; goto label_18; } // goto label_178
		case 50: { popExceptionFrames(frameRef, 1); bypasses[109] = true; goto label_9; } // goto label_179
		case 51: { popExceptionFrames(frameRef, 1); goto label_10; }
		case 52: { popExceptionFrames(frameRef, 1); bypasses[110] = true; goto label_15; } // goto label_180
		case 53: { popExceptionFrames(frameRef, 1); bypasses[111] = true; goto label_15; } // goto label_180
		case 54: { popExceptionFrames(frameRef, 1); bypasses[112] = true; goto label_18; } // goto label_181
		case 55: { popExceptionFrames(frameRef, 1); bypasses[113] = true; goto label_33; } // goto label_182
		case 56: { popExceptionFrames(frameRef, 1); bypasses[114] = true; goto label_33; } // goto label_183
		case 57: { popExceptionFrames(frameRef, 1); bypasses[115] = true; goto label_33; } // goto label_184
		case 58: { popExceptionFrames(frameRef, 1); bypasses[116] = true; goto label_33; } // goto label_185
		case 59: { popExceptionFrames(frameRef, 1); bypasses[117] = true; goto label_33; } // goto label_185
		case 60: { popExceptionFrames(frameRef, 1); bypasses[118] = true; goto label_33; } // goto label_185
		case 61: { popExceptionFrames(frameRef, 1); bypasses[119] = true; goto label_33; } // goto label_185
		case 62: { popExceptionFrames(frameRef, 1); bypasses[120] = true; goto label_33; } // goto label_186
		case 63: { popExceptionFrames(frameRef, 1); bypasses[121] = true; goto label_33; } // goto label_186
		case 64: { popExceptionFrames(frameRef, 1); bypasses[122] = true; goto label_33; } // goto label_187
		case 65: { popExceptionFrames(frameRef, 1); bypasses[123] = true; goto label_18; } // goto label_188
		case 66: { popExceptionFrames(frameRef, 1); bypasses[124] = true; goto label_33; } // goto label_115
		case 67: { popExceptionFrames(frameRef, 1); bypasses[125] = true; goto label_33; } // goto label_115
		case 68: { popExceptionFrames(frameRef, 1); bypasses[126] = true; goto label_18; } // goto label_189
		case 69: { popExceptionFrames(frameRef, 1); bypasses[127] = true; goto label_18; } // goto label_190
		case 70: { popExceptionFrames(frameRef, 1); bypasses[128] = true; goto label_18; } // goto label_191
		case 71: { popExceptionFrames(frameRef, 1); bypasses[129] = true; goto label_18; } // goto label_92
		case 72: { popExceptionFrames(frameRef, 1); bypasses[130] = true; goto label_33; } // goto label_192
		case 73: goto label_82;
		case 74: { popExceptionFrames(frameRef, 1); bypasses[131] = true; goto label_18; } // goto label_153
		case 75: { popExceptionFrames(frameRef, 1); bypasses[133] = true; goto label_33; } // goto label_87
		case 76: { popExceptionFrames(frameRef, 1); bypasses[134] = true; goto label_33; } // goto label_87
		case 77: { popExceptionFrames(frameRef, 1); bypasses[135] = true; goto label_33; } // goto label_87
		case 78: { popExceptionFrames(frameRef, 1); bypasses[136] = true; goto label_33; } // goto label_87
		case 79: { popExceptionFrames(frameRef, 1); bypasses[137] = true; goto label_33; } // goto label_87
		case 80: { popExceptionFrames(frameRef, 1); bypasses[138] = true; goto label_33; } // goto label_87
		case 81: { popExceptionFrames(frameRef, 1); bypasses[139] = true; goto label_33; } // goto label_87
		case 82: { popExceptionFrames(frameRef, 1); bypasses[140] = true; goto label_33; } // goto label_87
		case 83: { popExceptionFrames(frameRef, 1); bypasses[141] = true; goto label_33; } // goto label_87
		case 84: { popExceptionFrames(frameRef, 1); bypasses[142] = true; goto label_33; } // goto label_87
		case 85: { popExceptionFrames(frameRef, 1); bypasses[143] = true; goto label_33; } // goto label_87
		case 86: { popExceptionFrames(frameRef, 1); bypasses[144] = true; goto label_33; } // goto label_87
		case 87: { popExceptionFrames(frameRef, 1); bypasses[145] = true; goto label_33; } // goto label_87
		case 88: { popExceptionFrames(frameRef, 1); bypasses[146] = true; goto label_33; } // goto label_87
		case 89: { popExceptionFrames(frameRef, 1); bypasses[147] = true; goto label_33; } // goto label_87
		case 90: { popExceptionFrames(frameRef, 1); bypasses[148] = true; goto label_33; } // goto label_87
		case 91: { popExceptionFrames(frameRef, 1); bypasses[149] = true; goto label_33; } // goto label_87
		case 92: { popExceptionFrames(frameRef, 1); bypasses[150] = true; goto label_33; } // goto label_87
		case 93: { popExceptionFrames(frameRef, 1); bypasses[151] = true; goto label_33; } // goto label_87
		case 94: { popExceptionFrames(frameRef, 1); bypasses[152] = true; goto label_33; } // goto label_87
		case 95: { popExceptionFrames(frameRef, 1); bypasses[153] = true; goto label_33; } // goto label_87
		case 96: { popExceptionFrames(frameRef, 1); bypasses[154] = true; goto label_33; } // goto label_87
		case 97: { popExceptionFrames(frameRef, 1); bypasses[155] = true; goto label_33; } // goto label_87
		case 98: { popExceptionFrames(frameRef, 1); bypasses[156] = true; goto label_33; } // goto label_87
		case 99: { popExceptionFrames(frameRef, 1); bypasses[157] = true; goto label_33; } // goto label_87
		case 100: { popExceptionFrames(frameRef, 1); bypasses[158] = true; goto label_33; } // goto label_87
		case 101: { popExceptionFrames(frameRef, 1); bypasses[159] = true; goto label_33; } // goto label_87
		case 102: { popExceptionFrames(frameRef, 1); bypasses[160] = true; goto label_33; } // goto label_87
		case 103: { popExceptionFrames(frameRef, 1); bypasses[161] = true; goto label_33; } // goto label_87
		case 104: { popExceptionFrames(frameRef, 1); bypasses[162] = true; goto label_33; } // goto label_87
		case 105: { popExceptionFrames(frameRef, 1); bypasses[163] = true; goto label_33; } // goto label_87
		case 106: { popExceptionFrames(frameRef, 1); bypasses[164] = true; goto label_33; } // goto label_87
		case 107: { popExceptionFrames(frameRef, 1); bypasses[165] = true; goto label_33; } // goto label_87
		case 108: { popExceptionFrames(frameRef, 1); bypasses[166] = true; goto label_33; } // goto label_87
		case 109: { popExceptionFrames(frameRef, 1); bypasses[167] = true; goto label_33; } // goto label_87
		case 110: { popExceptionFrames(frameRef, 1); bypasses[168] = true; goto label_33; } // goto label_87
		case 111: { popExceptionFrames(frameRef, 1); bypasses[169] = true; goto label_33; } // goto label_87
		case 112: { popExceptionFrames(frameRef, 1); bypasses[170] = true; goto label_33; } // goto label_87
		case 113: { popExceptionFrames(frameRef, 1); bypasses[171] = true; goto label_33; } // goto label_87
		case 114: { popExceptionFrames(frameRef, 1); bypasses[172] = true; goto label_33; } // goto label_87
		case 115: { popExceptionFrames(frameRef, 1); bypasses[173] = true; goto label_33; } // goto label_87
		case 116: { popExceptionFrames(frameRef, 1); bypasses[174] = true; goto label_33; } // goto label_87
		case 117: { popExceptionFrames(frameRef, 1); bypasses[175] = true; goto label_33; } // goto label_87
		case 118: { popExceptionFrames(frameRef, 1); bypasses[176] = true; goto label_33; } // goto label_87
		case 119: { popExceptionFrames(frameRef, 1); bypasses[177] = true; goto label_33; } // goto label_87
		case 120: { popExceptionFrames(frameRef, 1); bypasses[178] = true; goto label_33; } // goto label_87
		case 121: { popExceptionFrames(frameRef, 1); bypasses[179] = true; goto label_33; } // goto label_87
		case 122: { popExceptionFrames(frameRef, 1); bypasses[180] = true; goto label_33; } // goto label_87
		case 123: { popExceptionFrames(frameRef, 1); bypasses[181] = true; goto label_33; } // goto label_87
		case 124: { popExceptionFrames(frameRef, 1); bypasses[182] = true; goto label_33; } // goto label_87
		case 125: { popExceptionFrames(frameRef, 1); bypasses[183] = true; goto label_33; } // goto label_87
		case 126: { popExceptionFrames(frameRef, 1); bypasses[184] = true; goto label_33; } // goto label_87
		case 127: { popExceptionFrames(frameRef, 1); bypasses[185] = true; goto label_33; } // goto label_87
		case 128: { popExceptionFrames(frameRef, 1); bypasses[186] = true; goto label_33; } // goto label_87
		case 129: { popExceptionFrames(frameRef, 1); bypasses[187] = true; goto label_33; } // goto label_87
		case 130: { popExceptionFrames(frameRef, 1); bypasses[188] = true; goto label_33; } // goto label_87
		case 131: { popExceptionFrames(frameRef, 1); bypasses[189] = true; goto label_33; } // goto label_87
		case 132: { popExceptionFrames(frameRef, 1); bypasses[190] = true; goto label_33; } // goto label_87
		case 133: { popExceptionFrames(frameRef, 1); bypasses[191] = true; goto label_33; } // goto label_87
		case 134: { popExceptionFrames(frameRef, 1); bypasses[192] = true; goto label_33; } // goto label_87
		case 135: { popExceptionFrames(frameRef, 1); bypasses[193] = true; goto label_33; } // goto label_87
		case 136: { popExceptionFrames(frameRef, 1); bypasses[194] = true; goto label_33; } // goto label_87
		case 137: { popExceptionFrames(frameRef, 1); bypasses[195] = true; goto label_33; } // goto label_87
		case 138: { popExceptionFrames(frameRef, 1); bypasses[196] = true; goto label_33; } // goto label_87
		case 139: { popExceptionFrames(frameRef, 1); bypasses[197] = true; goto label_33; } // goto label_87
		case 140: { popExceptionFrames(frameRef, 1); bypasses[198] = true; goto label_33; } // goto label_87
		case 141: { popExceptionFrames(frameRef, 1); bypasses[199] = true; goto label_33; } // goto label_87
		case 142: { popExceptionFrames(frameRef, 1); bypasses[200] = true; goto label_33; } // goto label_87
		case 143: { popExceptionFrames(frameRef, 1); bypasses[201] = true; goto label_33; } // goto label_87
		case 144: { popExceptionFrames(frameRef, 1); bypasses[202] = true; goto label_33; } // goto label_87
		case 145: { popExceptionFrames(frameRef, 1); bypasses[203] = true; goto label_33; } // goto label_87
		case 146: { popExceptionFrames(frameRef, 1); bypasses[204] = true; goto label_33; } // goto label_87
		case 147: { popExceptionFrames(frameRef, 1); bypasses[205] = true; goto label_33; } // goto label_87
		case 148: { popExceptionFrames(frameRef, 1); bypasses[206] = true; goto label_33; } // goto label_87
		case 149: { popExceptionFrames(frameRef, 1); bypasses[207] = true; goto label_33; } // goto label_87
		case 150: { popExceptionFrames(frameRef, 1); bypasses[208] = true; goto label_33; } // goto label_87
		case 151: { popExceptionFrames(frameRef, 1); bypasses[209] = true; goto label_33; } // goto label_87
		case 152: { popExceptionFrames(frameRef, 1); bypasses[210] = true; goto label_33; } // goto label_87
		case 153: { popExceptionFrames(frameRef, 1); bypasses[211] = true; goto label_33; } // goto label_87
		case 154: { popExceptionFrames(frameRef, 1); bypasses[212] = true; goto label_33; } // goto label_87
		case 155: { popExceptionFrames(frameRef, 1); bypasses[213] = true; goto label_33; } // goto label_87
		case 156: { popExceptionFrames(frameRef, 1); bypasses[215] = true; goto label_33; } // goto label_87
		case 157: { popExceptionFrames(frameRef, 1); bypasses[214] = true; goto label_33; } // goto label_193
		default: { bypasses[3] = true; goto label_33; } // goto label_87
	}
	}
label_85:;
	{
	LINE_NUMBER(1110);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frozen) != 0) goto label_82;
	}
	{
	LINE_NUMBER(1113);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) - (jint(1)));
	LINE_NUMBER(1114);
	sp[0].o = (jobject)SM_rhino_Interpreter_captureFrameForGenerator_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(ctx, (frame[1].o));
	frame[23].o = sp[0].o;
	LINE_NUMBER(1115);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[23].o)))->F_frozen = (jint(1));
	LINE_NUMBER(1116);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 < (200)) goto label_198;
	}
	{
	LINE_NUMBER(1117);
	sp[0].o = frame[1].o;
	clinit_rhino_ES6Generator(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ES6Generator);
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[23].o)))->F_fnOrScript;
	init_rhino_ES6Generator_rhino_Scriptable_rhino_NativeFunction_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[23].o));
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	{ popExceptionFrames(frameRef, 1); bypasses[216] = true; goto label_33; } // goto label_200
	}
label_198:;
	{
	LINE_NUMBER(1119);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeGenerator(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_NativeGenerator);
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[23].o)))->F_fnOrScript;
	init_rhino_NativeGenerator_rhino_Scriptable_rhino_NativeFunction_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[23].o));
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1122);
	{ popExceptionFrames(frameRef, 1); bypasses[217] = true; goto label_33; } // goto label_200
	}
label_82:;
	{
	LINE_NUMBER(1129);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frozen) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(1130);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[21].i;
	sp[2].o = frame[10].o;
	jobject temp1 = sp[2].o;
	sp[2].i = temp0;
	sp[3].o = temp1;
	sp += 4;
	if ((frame[22].i) != (-66)) goto label_203;
	}
	INST_ICONST(1);
	goto label_204;
label_203:;
	INST_ICONST(0);
label_204:;
	POP_N(5); // Pop method args
	sp->o = (jobject)SM_rhino_Interpreter_freezeGenerator_rhino_Context_rhino_Interpreter$CallFrame_int_rhino_Interpreter$GeneratorState_boolean_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].o, sp[4].i);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1132);
	sp[0].o = (jobject)SM_rhino_Interpreter_thawGenerator_rhino_Interpreter$CallFrame_int_rhino_Interpreter$GeneratorState_int_R_java_lang_Object(ctx, (frame[1].o), (frame[21].i), (frame[10].o), (frame[22].i));
	frame[23].o = sp[0].o;
	LINE_NUMBER(1133);
	sp[0].o = frame[23].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) { popExceptionFrames(frameRef, 1); bypasses[218] = true; goto label_3; } // goto label_80
	}
	{
	LINE_NUMBER(1134);
	frame[2].o = (frame[23].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1135);
	goto label_207;
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_83; }
	if (bypasses[109]) { bypasses[109] = false; goto label_179; }
	{
	LINE_NUMBER(1141);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frozen = (jint(1));
	LINE_NUMBER(1142);
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	frame[23].i = temp0;
	LINE_NUMBER(1143);
	sp[0].o = frame[10].o;
	clinit_rhino_JavaScriptException(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	LINE_NUMBER(1144);
	sp[2].o = (jobject)SM_rhino_NativeIterator_getStopIterationObject_rhino_Scriptable_R_java_lang_Object(ctx, sp[2].o);
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[3].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[3].o))->F_itsSourceFile;
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[23].i));
	((rhino_Interpreter$GeneratorState *) NULL_CHECK(sp[0].o))->F_returnedException = (jref) sp[1].o;
	LINE_NUMBER(1146);
	{ popExceptionFrames(frameRef, 1); bypasses[219] = true; goto label_33; } // goto label_200
	}
label_83:;
	{
	LINE_NUMBER(1150);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frozen = (jint(1));
	LINE_NUMBER(1151);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1152);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_resultDbl = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)));
	LINE_NUMBER(1153);
	INST_IINC(21, -1);
	LINE_NUMBER(1155);
	clinit_rhino_NativeIterator$StopIteration(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeIterator$StopIteration);
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_result;
	clinit_rhino_UniqueTag(ctx);
	sp[2].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp += 2;
	if (temp0 != sp[0].o) goto label_216;
	}
	{
	jdouble temp0 = (jdouble)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_resultDbl;
	LINE_NUMBER(1156);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	sp += 1;
	goto label_218;
	}
label_216:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[-1].o))->F_result;
label_218:;
	{
	sp -= 3;
	init_rhino_NativeIterator$StopIteration_java_lang_Object(ctx, sp[0].o, sp[2].o);
	frame[23].o = sp[0].o;
	LINE_NUMBER(1158);
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	frame[24].i = temp0;
	LINE_NUMBER(1159);
	sp[0].o = frame[10].o;
	clinit_rhino_JavaScriptException(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	sp[2].o = frame[23].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[3].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[3].o))->F_itsSourceFile;
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[24].i));
	((rhino_Interpreter$GeneratorState *) NULL_CHECK(sp[0].o))->F_returnedException = (jref) sp[1].o;
	LINE_NUMBER(1161);
	{ popExceptionFrames(frameRef, 1); bypasses[220] = true; goto label_33; } // goto label_200
	}
label_179:;
	{
	LINE_NUMBER(1164);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1165);
	if ((frame[23].o) != (frame[3].o)) goto label_223;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_223:;
	{
	LINE_NUMBER(1166);
	INST_IINC(21, -1);
	LINE_NUMBER(1168);
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	frame[24].i = temp0;
	LINE_NUMBER(1169);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	sp[1].o = frame[23].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[2].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[2].o))->F_itsSourceFile;
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[24].i));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1172);
	goto label_207;
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1175);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1176);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[9].i)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1177);
	goto label_207;
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[38]) { bypasses[38] = false; goto label_121; }
	if (bypasses[39]) { bypasses[39] = false; goto label_122; }
	if (bypasses[40]) { bypasses[40] = false; goto label_123; }
	if (bypasses[57]) { bypasses[57] = false; goto label_140; }
	if (bypasses[68]) { bypasses[68] = false; goto label_150; }
	if (bypasses[69]) { bypasses[69] = false; goto label_151; }
	if (bypasses[70]) { bypasses[70] = false; goto label_152; }
	if (bypasses[75]) { bypasses[75] = false; goto label_155; }
	if (bypasses[76]) { bypasses[76] = false; goto label_155; }
	if (bypasses[105]) { bypasses[105] = false; goto label_176; }
	if (bypasses[106]) { bypasses[106] = false; goto label_176; }
	if (bypasses[110]) { bypasses[110] = false; goto label_180; }
	if (bypasses[111]) { bypasses[111] = false; goto label_180; }
	{
	LINE_NUMBER(1183);
	jint temp0 = (jint)SM_rhino_Interpreter_doCompare_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[1].o), (frame[22].i), (frame[14].o), (frame[15].o), (frame[21].i));
	frame[21].i = temp0;
	LINE_NUMBER(1184);
	{ popExceptionFrames(frameRef, 1); bypasses[221] = true; goto label_3; } // goto label_80
	}
label_180:;
	{
	LINE_NUMBER(1188);
	jint temp0 = (jint)SM_rhino_Interpreter_doInOrInstanceof_rhino_Context_int_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[0].o), (frame[22].i), (frame[14].o), (frame[15].o), (frame[21].i));
	frame[21].i = temp0;
	LINE_NUMBER(1189);
	{ popExceptionFrames(frameRef, 1); bypasses[222] = true; goto label_3; } // goto label_80
	}
label_155:;
	{
	LINE_NUMBER(1193);
	INST_IINC(21, -1);
	LINE_NUMBER(1194);
	jint temp0 = (jint)SM_rhino_Interpreter_doEquals_Array1_java_lang_Object_Array1_double_int_R_boolean(ctx, (frame[14].o), (frame[15].o), (frame[21].i));
	frame[23].i = temp0;
	LINE_NUMBER(1195);
	jint temp1 = frame[23].i;
	sp[0].i = temp1;
	sp += 1;
	if ((frame[22].i) != (13)) goto label_231;
	}
	INST_ICONST(1);
	goto label_232;
label_231:;
	INST_ICONST(0);
label_232:;
	{
	sp -= 2;
	frame[23].i = (sp[0].i ^ sp[1].i);
	LINE_NUMBER(1196);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, (frame[23].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1197);
	{ popExceptionFrames(frameRef, 1); bypasses[223] = true; goto label_3; } // goto label_80
	}
label_176:;
	{
	LINE_NUMBER(1201);
	INST_IINC(21, -1);
	LINE_NUMBER(1202);
	jint temp0 = (jint)SM_rhino_Interpreter_doShallowEquals_Array1_java_lang_Object_Array1_double_int_R_boolean(ctx, (frame[14].o), (frame[15].o), (frame[21].i));
	frame[23].i = temp0;
	LINE_NUMBER(1203);
	jint temp1 = frame[23].i;
	sp[0].i = temp1;
	sp += 1;
	if ((frame[22].i) != (47)) goto label_237;
	}
	INST_ICONST(1);
	goto label_238;
label_237:;
	INST_ICONST(0);
label_238:;
	{
	sp -= 2;
	frame[23].i = (sp[0].i ^ sp[1].i);
	LINE_NUMBER(1204);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, (frame[23].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1205);
	{ popExceptionFrames(frameRef, 1); bypasses[224] = true; goto label_3; } // goto label_80
	}
label_152:;
	{
	LINE_NUMBER(1208);
	sp[0].o = frame[1].o;
	jint temp0 = frame[21].i;
	INST_IINC(21, -1);
	jint temp1 = (jint)SM_rhino_Interpreter_stack_boolean_rhino_Interpreter$CallFrame_int_R_boolean(ctx, sp[0].o, temp0);
	if (temp1 == 0) { popExceptionFrames(frameRef, 1); bypasses[225] = true; goto label_33; } // goto label_241
	}
	{
	LINE_NUMBER(1209);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(2)));
	LINE_NUMBER(1210);
	{ popExceptionFrames(frameRef, 1); bypasses[226] = true; goto label_3; } // goto label_80
	}
label_151:;
	{
	LINE_NUMBER(1214);
	sp[0].o = frame[1].o;
	jint temp0 = frame[21].i;
	INST_IINC(21, -1);
	jint temp1 = (jint)SM_rhino_Interpreter_stack_boolean_rhino_Interpreter$CallFrame_int_R_boolean(ctx, sp[0].o, temp0);
	if (temp1 != 0) { popExceptionFrames(frameRef, 1); bypasses[227] = true; goto label_33; } // goto label_241
	}
	{
	LINE_NUMBER(1215);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(2)));
	LINE_NUMBER(1216);
	{ popExceptionFrames(frameRef, 1); bypasses[228] = true; goto label_3; } // goto label_80
	}
label_140:;
	{
	LINE_NUMBER(1220);
	sp[0].o = frame[1].o;
	jint temp0 = frame[21].i;
	INST_IINC(21, -1);
	jint temp1 = (jint)SM_rhino_Interpreter_stack_boolean_rhino_Interpreter$CallFrame_int_R_boolean(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_246;
	}
	{
	LINE_NUMBER(1221);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(2)));
	LINE_NUMBER(1222);
	{ popExceptionFrames(frameRef, 1); bypasses[229] = true; goto label_3; } // goto label_80
	}
label_246:;
	{
	LINE_NUMBER(1224);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	INST_IINC(21, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (jobject(nullptr));
	LINE_NUMBER(1225);
	{ popExceptionFrames(frameRef, 1); bypasses[230] = true; goto label_33; } // goto label_241
	}
label_150:;
	LINE_NUMBER(1227);
	{ popExceptionFrames(frameRef, 1); bypasses[231] = true; goto label_33; } // goto label_241
label_123:;
	{
	LINE_NUMBER(1229);
	INST_IINC(21, 1);
	LINE_NUMBER(1230);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[3].o);
	LINE_NUMBER(1231);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = (jdouble((((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc) + (jint(2)))));
	LINE_NUMBER(1232);
	{ popExceptionFrames(frameRef, 1); bypasses[232] = true; goto label_33; } // goto label_241
	}
label_122:;
	{
	LINE_NUMBER(1234);
	if ((frame[21].i) != (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_emptyStackTop) + (jint(1)))) goto label_253;
	}
	{
	LINE_NUMBER(1236);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1237);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[9].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1238);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[9].i)) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)));
	LINE_NUMBER(1239);
	INST_IINC(21, -1);
	{ popExceptionFrames(frameRef, 1); bypasses[233] = true; goto label_3; } // goto label_80
	}
label_253:;
	{
	LINE_NUMBER(1243);
	if ((frame[21].i) == ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_emptyStackTop)) { popExceptionFrames(frameRef, 1); bypasses[234] = true; goto label_3; } // goto label_80
	}
	{
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	{ popExceptionFrames(frameRef, 1); bypasses[235] = true; goto label_3; } // goto label_80
	}
label_121:;
	{
	LINE_NUMBER(1248);
	if ((frame[5].i) == 0) goto label_258;
	}
	{
	LINE_NUMBER(1249);
	SM_rhino_Interpreter_addInstructionCount_rhino_Context_rhino_Interpreter$CallFrame_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	}
label_258:;
	{
	LINE_NUMBER(1251);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1252);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[9].i)));
	LINE_NUMBER(1253);
	if ((frame[23].o) == (frame[3].o)) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(1255);
	frame[2].o = (frame[23].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1256);
	goto label_207;
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[4]) { bypasses[4] = false; goto label_88; }
	if (bypasses[7]) { bypasses[7] = false; goto label_91; }
	if (bypasses[8]) { bypasses[8] = false; goto label_92; }
	if (bypasses[41]) { bypasses[41] = false; goto label_124; }
	if (bypasses[42]) { bypasses[42] = false; goto label_125; }
	if (bypasses[45]) { bypasses[45] = false; goto label_128; }
	if (bypasses[46]) { bypasses[46] = false; goto label_129; }
	if (bypasses[47]) { bypasses[47] = false; goto label_130; }
	if (bypasses[48]) { bypasses[48] = false; goto label_131; }
	if (bypasses[52]) { bypasses[52] = false; goto label_135; }
	if (bypasses[53]) { bypasses[53] = false; goto label_136; }
	if (bypasses[54]) { bypasses[54] = false; goto label_137; }
	if (bypasses[58]) { bypasses[58] = false; goto label_141; }
	if (bypasses[59]) { bypasses[59] = false; goto label_142; }
	if (bypasses[60]) { bypasses[60] = false; goto label_143; }
	if (bypasses[61]) { bypasses[61] = false; goto label_144; }
	if (bypasses[62]) { bypasses[62] = false; goto label_145; }
	if (bypasses[63]) { bypasses[63] = false; goto label_146; }
	if (bypasses[67]) { bypasses[67] = false; goto label_149; }
	if (bypasses[71]) { bypasses[71] = false; goto label_153; }
	if (bypasses[72]) { bypasses[72] = false; goto label_154; }
	if (bypasses[73]) { bypasses[73] = false; goto label_154; }
	if (bypasses[74]) { bypasses[74] = false; goto label_154; }
	if (bypasses[77]) { bypasses[77] = false; goto label_154; }
	if (bypasses[78]) { bypasses[78] = false; goto label_154; }
	if (bypasses[79]) { bypasses[79] = false; goto label_156; }
	if (bypasses[80]) { bypasses[80] = false; goto label_157; }
	if (bypasses[81]) { bypasses[81] = false; goto label_158; }
	if (bypasses[82]) { bypasses[82] = false; goto label_158; }
	if (bypasses[83]) { bypasses[83] = false; goto label_158; }
	if (bypasses[84]) { bypasses[84] = false; goto label_158; }
	if (bypasses[85]) { bypasses[85] = false; goto label_159; }
	if (bypasses[86]) { bypasses[86] = false; goto label_160; }
	if (bypasses[87]) { bypasses[87] = false; goto label_161; }
	if (bypasses[88]) { bypasses[88] = false; goto label_161; }
	if (bypasses[90]) { bypasses[90] = false; goto label_146; }
	if (bypasses[92]) { bypasses[92] = false; goto label_164; }
	if (bypasses[93]) { bypasses[93] = false; goto label_165; }
	if (bypasses[94]) { bypasses[94] = false; goto label_166; }
	if (bypasses[95]) { bypasses[95] = false; goto label_167; }
	if (bypasses[96]) { bypasses[96] = false; goto label_168; }
	if (bypasses[97]) { bypasses[97] = false; goto label_92; }
	if (bypasses[108]) { bypasses[108] = false; goto label_178; }
	if (bypasses[112]) { bypasses[112] = false; goto label_181; }
	if (bypasses[123]) { bypasses[123] = false; goto label_188; }
	if (bypasses[126]) { bypasses[126] = false; goto label_189; }
	if (bypasses[127]) { bypasses[127] = false; goto label_190; }
	if (bypasses[128]) { bypasses[128] = false; goto label_191; }
	if (bypasses[129]) { bypasses[129] = false; goto label_92; }
	if (bypasses[131]) { bypasses[131] = false; goto label_153; }
	{
	LINE_NUMBER(1259);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc = (jint(((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[9].i)))));
	LINE_NUMBER(1260);
	if ((frame[5].i) == 0) { popExceptionFrames(frameRef, 1); bypasses[236] = true; goto label_3; } // goto label_80
	}
	{
	LINE_NUMBER(1261);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pcPrevBranch = ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc);
	{ popExceptionFrames(frameRef, 1); bypasses[237] = true; goto label_3; } // goto label_80
	}
label_142:;
	{
	LINE_NUMBER(1266);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (jobject(nullptr));
	LINE_NUMBER(1267);
	INST_IINC(21, -1);
	LINE_NUMBER(1268);
	{ popExceptionFrames(frameRef, 1); bypasses[238] = true; goto label_3; } // goto label_80
	}
label_141:;
	{
	LINE_NUMBER(1270);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1271);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_resultDbl = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)));
	LINE_NUMBER(1272);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (jobject(nullptr));
	LINE_NUMBER(1273);
	INST_IINC(21, -1);
	LINE_NUMBER(1274);
	{ popExceptionFrames(frameRef, 1); bypasses[239] = true; goto label_3; } // goto label_80
	}
label_145:;
	{
	LINE_NUMBER(1276);
	ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) + (jint(1)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1277);
	ARRAY_ACCESS(jdouble, (frame[15].o), ((frame[21].i) + (jint(1)))) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)));
	LINE_NUMBER(1278);
	INST_IINC(21, 1);
	LINE_NUMBER(1279);
	{ popExceptionFrames(frameRef, 1); bypasses[240] = true; goto label_3; } // goto label_80
	}
label_144:;
	{
	LINE_NUMBER(1281);
	ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) + (jint(1)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) - (jint(1)))));
	LINE_NUMBER(1282);
	ARRAY_ACCESS(jdouble, (frame[15].o), ((frame[21].i) + (jint(1)))) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), ((frame[21].i) - (jint(1)))));
	LINE_NUMBER(1283);
	ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) + (jint(2)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1284);
	ARRAY_ACCESS(jdouble, (frame[15].o), ((frame[21].i) + (jint(2)))) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)));
	LINE_NUMBER(1285);
	INST_IINC(21, 2);
	LINE_NUMBER(1286);
	{ popExceptionFrames(frameRef, 1); bypasses[241] = true; goto label_3; } // goto label_80
	}
label_143:;
	{
	LINE_NUMBER(1288);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1289);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) - (jint(1)))));
	LINE_NUMBER(1290);
	ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) - (jint(1)))) = (frame[23].o);
	LINE_NUMBER(1291);
	frame[24].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)));
	LINE_NUMBER(1292);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), ((frame[21].i) - (jint(1)))));
	LINE_NUMBER(1293);
	ARRAY_ACCESS(jdouble, (frame[15].o), ((frame[21].i) - (jint(1)))) = (frame[24].d);
	LINE_NUMBER(1294);
	{ popExceptionFrames(frameRef, 1); bypasses[242] = true; goto label_3; } // goto label_80
	}
label_149:;
	{
	LINE_NUMBER(1297);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1298);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_resultDbl = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)));
	LINE_NUMBER(1299);
	INST_IINC(21, -1);
	LINE_NUMBER(1300);
	{ popExceptionFrames(frameRef, 1); bypasses[243] = true; goto label_33; } // goto label_200
	}
label_188:;
	LINE_NUMBER(1302);
	{ popExceptionFrames(frameRef, 1); bypasses[244] = true; goto label_33; } // goto label_200
label_124:;
	{
	LINE_NUMBER(1304);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_result = (jref) (frame[4].o);
	LINE_NUMBER(1305);
	{ popExceptionFrames(frameRef, 1); bypasses[245] = true; goto label_33; } // goto label_200
	}
label_160:;
	{
	LINE_NUMBER(1307);
	jint temp0 = (jint)SM_rhino_Interpreter_stack_int32_rhino_Interpreter$CallFrame_int_R_int(ctx, (frame[1].o), (frame[21].i));
	frame[23].i = temp0;
	LINE_NUMBER(1308);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[3].o);
	LINE_NUMBER(1309);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = (jdouble(((frame[23].i) ^ (jint(-1)))));
	LINE_NUMBER(1310);
	{ popExceptionFrames(frameRef, 1); bypasses[246] = true; goto label_3; } // goto label_80
	}
label_154:;
	{
	LINE_NUMBER(1317);
	jint temp0 = (jint)SM_rhino_Interpreter_doBitOp_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[1].o), (frame[22].i), (frame[14].o), (frame[15].o), (frame[21].i));
	frame[21].i = temp0;
	LINE_NUMBER(1318);
	{ popExceptionFrames(frameRef, 1); bypasses[247] = true; goto label_3; } // goto label_80
	}
label_156:;
	{
	LINE_NUMBER(1321);
	jdouble temp0 = (jdouble)SM_rhino_Interpreter_stack_double_rhino_Interpreter$CallFrame_int_R_double(ctx, (frame[1].o), ((frame[21].i) - (jint(1))));
	frame[23].d = temp0;
	LINE_NUMBER(1322);
	jint temp1 = (jint)SM_rhino_Interpreter_stack_int32_rhino_Interpreter$CallFrame_int_R_int(ctx, (frame[1].o), (frame[21].i));
	frame[25].i = (temp1 & (31));
	LINE_NUMBER(1323);
	sp[0].o = frame[14].o;
	INST_IINC(21, -1);
	ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i)) = (frame[3].o);
	LINE_NUMBER(1324);
	sp[0].o = frame[15].o;
	jint temp2 = frame[21].i;
	jlong temp3 = (jlong)SM_rhino_ScriptRuntime_toUint32_double_R_long(ctx, (frame[23].d));
	ARRAY_ACCESS(jdouble, sp[0].o, temp2) = (jdouble((bit_cast<jlong>(bit_cast<uint64_t>(temp3) >> (frame[25].i)))));
	LINE_NUMBER(1325);
	{ popExceptionFrames(frameRef, 1); bypasses[248] = true; goto label_3; } // goto label_80
	}
label_161:;
	{
	LINE_NUMBER(1329);
	jdouble temp0 = (jdouble)SM_rhino_Interpreter_stack_double_rhino_Interpreter$CallFrame_int_R_double(ctx, (frame[1].o), (frame[21].i));
	frame[23].d = temp0;
	LINE_NUMBER(1330);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[3].o);
	LINE_NUMBER(1331);
	if ((frame[22].i) != (29)) goto label_299;
	}
	{
	LINE_NUMBER(1332);
	frame[23].d = (-(frame[23].d));
	}
label_299:;
	{
	LINE_NUMBER(1334);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = (frame[23].d);
	LINE_NUMBER(1335);
	{ popExceptionFrames(frameRef, 1); bypasses[249] = true; goto label_3; } // goto label_80
	}
label_157:;
	{
	LINE_NUMBER(1338);
	INST_IINC(21, -1);
	LINE_NUMBER(1339);
	SM_rhino_Interpreter_doAdd_Array1_java_lang_Object_Array1_double_int_rhino_Context(ctx, (frame[14].o), (frame[15].o), (frame[21].i), (frame[0].o));
	LINE_NUMBER(1340);
	{ popExceptionFrames(frameRef, 1); bypasses[250] = true; goto label_3; } // goto label_80
	}
label_158:;
	{
	LINE_NUMBER(1345);
	jint temp0 = (jint)SM_rhino_Interpreter_doArithmetic_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[1].o), (frame[22].i), (frame[14].o), (frame[15].o), (frame[21].i));
	frame[21].i = temp0;
	LINE_NUMBER(1346);
	{ popExceptionFrames(frameRef, 1); bypasses[251] = true; goto label_3; } // goto label_80
	}
label_159:;
	{
	LINE_NUMBER(1349);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[1].o;
	jint temp1 = frame[21].i;
	LINE_NUMBER(1350);
	jint temp2 = (jint)SM_rhino_Interpreter_stack_boolean_rhino_Interpreter$CallFrame_int_R_boolean(ctx, sp[1].o, temp1);
	sp[1].i = temp0;
	sp += 2;
	if (temp2 != 0) goto label_306;
	}
	INST_ICONST(1);
	goto label_307;
label_306:;
	INST_ICONST(0);
label_307:;
	{
	sp -= 3;
	LINE_NUMBER(1349);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(1351);
	{ popExceptionFrames(frameRef, 1); bypasses[252] = true; goto label_3; } // goto label_80
	}
label_178:;
	{
	LINE_NUMBER(1353);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_bind_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, sp[1].o, sp[2].o, (frame[8].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1354);
	{ popExceptionFrames(frameRef, 1); bypasses[253] = true; goto label_3; } // goto label_80
	}
label_153:;
	{
	LINE_NUMBER(1357);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1358);
	if ((frame[23].o) != (frame[3].o)) goto label_311;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_311:;
	{
	LINE_NUMBER(1359);
	INST_IINC(21, -1);
	LINE_NUMBER(1360);
	frame[24].o = (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)))));
	LINE_NUMBER(1361);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[22].i) != (8)) goto label_314;
	}
	{
	sp[0].o = frame[24].o;
	sp[1].o = frame[23].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[4].o = frame[8].o;
	LINE_NUMBER(1362);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_setName_rhino_Scriptable_java_lang_Object_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp += 1;
	goto label_316;
	}
label_314:;
	{
	sp[0].o = frame[24].o;
	sp[1].o = frame[23].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[4].o = frame[8].o;
	LINE_NUMBER(1364);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_strictSetName_rhino_Scriptable_java_lang_Object_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp += 1;
	}
label_316:;
	{
	sp -= 3;
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(1366);
	{ popExceptionFrames(frameRef, 1); bypasses[254] = true; goto label_3; } // goto label_80
	}
label_88:;
	{
	LINE_NUMBER(1369);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1370);
	if ((frame[23].o) != (frame[3].o)) goto label_320;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_320:;
	{
	LINE_NUMBER(1371);
	INST_IINC(21, -1);
	LINE_NUMBER(1372);
	frame[24].o = (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)))));
	LINE_NUMBER(1373);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_setConst_rhino_Scriptable_java_lang_Object_rhino_Context_java_lang_String_R_java_lang_Object(ctx, (frame[24].o), (frame[23].o), (frame[0].o), (frame[8].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1374);
	{ popExceptionFrames(frameRef, 1); bypasses[255] = true; goto label_3; } // goto label_80
	}
label_146:;
	{
	LINE_NUMBER(1378);
	jint temp0 = (jint)SM_rhino_Interpreter_doDelName_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[22].i), (frame[14].o), (frame[15].o), (frame[21].i));
	frame[21].i = temp0;
	LINE_NUMBER(1379);
	{ popExceptionFrames(frameRef, 1); bypasses[256] = true; goto label_3; } // goto label_80
	}
label_165:;
	{
	LINE_NUMBER(1382);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1383);
	if ((frame[23].o) != (frame[3].o)) goto label_326;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_326:;
	{
	LINE_NUMBER(1384);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[23].o;
	sp[2].o = frame[8].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getObjectPropNoWarn_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1386);
	{ popExceptionFrames(frameRef, 1); bypasses[257] = true; goto label_3; } // goto label_80
	}
label_164:;
	{
	LINE_NUMBER(1389);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1390);
	if ((frame[23].o) != (frame[3].o)) goto label_329;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_329:;
	{
	LINE_NUMBER(1391);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[23].o;
	sp[2].o = frame[8].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getObjectProp_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1393);
	{ popExceptionFrames(frameRef, 1); bypasses[258] = true; goto label_3; } // goto label_80
	}
label_166:;
	{
	LINE_NUMBER(1396);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1397);
	if ((frame[23].o) != (frame[3].o)) goto label_332;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_332:;
	{
	LINE_NUMBER(1398);
	INST_IINC(21, -1);
	LINE_NUMBER(1399);
	frame[24].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1400);
	if ((frame[24].o) != (frame[3].o)) goto label_335;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[24].o = sp[0].o;
	}
label_335:;
	{
	LINE_NUMBER(1401);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[24].o;
	sp[2].o = frame[8].o;
	sp[3].o = frame[23].o;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_setObjectProp_java_lang_Object_java_lang_String_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1403);
	{ popExceptionFrames(frameRef, 1); bypasses[259] = true; goto label_3; } // goto label_80
	}
label_137:;
	{
	LINE_NUMBER(1406);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1407);
	if ((frame[23].o) != (frame[3].o)) goto label_338;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_338:;
	{
	LINE_NUMBER(1408);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[23].o;
	sp[2].o = frame[8].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_propIncrDecr_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, ((jint)ARRAY_ACCESS(jbyte, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1411);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(1)));
	LINE_NUMBER(1412);
	{ popExceptionFrames(frameRef, 1); bypasses[260] = true; goto label_3; } // goto label_80
	}
label_167:;
	{
	LINE_NUMBER(1415);
	jint temp0 = (jint)SM_rhino_Interpreter_doGetElem_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[14].o), (frame[15].o), (frame[21].i));
	frame[21].i = temp0;
	LINE_NUMBER(1416);
	{ popExceptionFrames(frameRef, 1); bypasses[261] = true; goto label_3; } // goto label_80
	}
label_168:;
	{
	LINE_NUMBER(1419);
	jint temp0 = (jint)SM_rhino_Interpreter_doSetElem_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[14].o), (frame[15].o), (frame[21].i));
	frame[21].i = temp0;
	LINE_NUMBER(1420);
	{ popExceptionFrames(frameRef, 1); bypasses[262] = true; goto label_3; } // goto label_80
	}
label_136:;
	{
	LINE_NUMBER(1423);
	jint temp0 = (jint)SM_rhino_Interpreter_doElemIncDec_rhino_Context_rhino_Interpreter$CallFrame_Array1_byte_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[19].o), (frame[14].o), (frame[15].o), (frame[21].i));
	frame[21].i = temp0;
	LINE_NUMBER(1424);
	{ popExceptionFrames(frameRef, 1); bypasses[263] = true; goto label_3; } // goto label_80
	}
label_189:;
	{
	LINE_NUMBER(1427);
	frame[23].o = (checkCast(ctx, &class_rhino_Ref, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)))));
	LINE_NUMBER(1428);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_refGet_rhino_Ref_rhino_Context_R_java_lang_Object(ctx, (frame[23].o), (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1429);
	{ popExceptionFrames(frameRef, 1); bypasses[264] = true; goto label_3; } // goto label_80
	}
label_190:;
	{
	LINE_NUMBER(1432);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1433);
	if ((frame[23].o) != (frame[3].o)) goto label_347;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_347:;
	{
	LINE_NUMBER(1434);
	INST_IINC(21, -1);
	LINE_NUMBER(1435);
	frame[24].o = (checkCast(ctx, &class_rhino_Ref, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)))));
	LINE_NUMBER(1436);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[24].o;
	sp[2].o = frame[23].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_refSet_rhino_Ref_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1437);
	{ popExceptionFrames(frameRef, 1); bypasses[265] = true; goto label_3; } // goto label_80
	}
label_191:;
	{
	LINE_NUMBER(1440);
	frame[23].o = (checkCast(ctx, &class_rhino_Ref, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)))));
	LINE_NUMBER(1441);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_refDel_rhino_Ref_rhino_Context_R_java_lang_Object(ctx, (frame[23].o), (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1442);
	{ popExceptionFrames(frameRef, 1); bypasses[266] = true; goto label_3; } // goto label_80
	}
label_135:;
	{
	LINE_NUMBER(1445);
	frame[23].o = (checkCast(ctx, &class_rhino_Ref, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)))));
	LINE_NUMBER(1446);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[23].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_refIncrDecr_rhino_Ref_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)ARRAY_ACCESS(jbyte, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1448);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(1)));
	LINE_NUMBER(1449);
	{ popExceptionFrames(frameRef, 1); bypasses[267] = true; goto label_3; } // goto label_80
	}
label_181:;
	{
	LINE_NUMBER(1452);
	INST_IINC(21, 1);
	LINE_NUMBER(1453);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1454);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[9].i)));
	LINE_NUMBER(1455);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[9].i)));
	LINE_NUMBER(1456);
	{ popExceptionFrames(frameRef, 1); bypasses[268] = true; goto label_3; } // goto label_80
	}
label_91:;
	{
	LINE_NUMBER(1458);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1459);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[9].i)) = (jobject(nullptr));
	LINE_NUMBER(1460);
	{ popExceptionFrames(frameRef, 1); bypasses[269] = true; goto label_3; } // goto label_80
	}
label_131:;
	{
	LINE_NUMBER(1463);
	INST_IINC(21, 1);
	LINE_NUMBER(1464);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[8].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getNameFunctionAndThis_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1466);
	INST_IINC(21, 1);
	LINE_NUMBER(1467);
	sp[0].o = frame[14].o;
	jint temp1 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1468);
	{ popExceptionFrames(frameRef, 1); bypasses[270] = true; goto label_3; } // goto label_80
	}
label_130:;
	{
	LINE_NUMBER(1470);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1471);
	if ((frame[23].o) != (frame[3].o)) goto label_367;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_367:;
	{
	LINE_NUMBER(1473);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[23].o;
	sp[2].o = frame[8].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1475);
	INST_IINC(21, 1);
	LINE_NUMBER(1476);
	sp[0].o = frame[14].o;
	jint temp1 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1477);
	{ popExceptionFrames(frameRef, 1); bypasses[271] = true; goto label_3; } // goto label_80
	}
label_129:;
	{
	LINE_NUMBER(1480);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) - (jint(1)))));
	LINE_NUMBER(1481);
	if ((frame[23].o) != (frame[3].o)) goto label_372;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), ((frame[21].i) - (jint(1))))));
	frame[23].o = sp[0].o;
	}
label_372:;
	{
	LINE_NUMBER(1482);
	frame[24].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1483);
	if ((frame[24].o) != (frame[3].o)) goto label_374;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[24].o = sp[0].o;
	}
label_374:;
	{
	LINE_NUMBER(1484);
	sp[0].o = frame[14].o;
	jint temp0 = (frame[21].i) - (jint(1));
	sp[1].o = frame[23].o;
	sp[2].o = frame[24].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getElemFunctionAndThis_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1486);
	sp[0].o = frame[14].o;
	jint temp1 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1487);
	{ popExceptionFrames(frameRef, 1); bypasses[272] = true; goto label_3; } // goto label_80
	}
label_128:;
	{
	LINE_NUMBER(1490);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1491);
	if ((frame[23].o) != (frame[3].o)) goto label_378;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_378:;
	{
	LINE_NUMBER(1492);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getValueFunctionAndThis_java_lang_Object_rhino_Context_R_rhino_Callable(ctx, (frame[23].o), (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1493);
	INST_IINC(21, 1);
	LINE_NUMBER(1494);
	sp[0].o = frame[14].o;
	jint temp1 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1495);
	{ popExceptionFrames(frameRef, 1); bypasses[273] = true; goto label_3; } // goto label_80
	}
label_125:;
	{
	LINE_NUMBER(1498);
	if ((frame[5].i) == 0) goto label_382;
	}
	{
	LINE_NUMBER(1499);
	sp[0].o = frame[0].o;
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount = (((jint)((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount) + (100));
	}
label_382:;
	{
	LINE_NUMBER(1501);
	jint temp0 = (jint)SM_rhino_Interpreter_doCallSpecial_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_byte_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[14].o), (frame[15].o), (frame[21].i), (frame[19].o), (frame[9].i));
	frame[21].i = temp0;
	LINE_NUMBER(1502);
	{ popExceptionFrames(frameRef, 1); bypasses[274] = true; goto label_3; } // goto label_80
	}
label_92:;
	{
	LINE_NUMBER(1507);
	if ((frame[5].i) == 0) goto label_385;
	}
	{
	LINE_NUMBER(1508);
	sp[0].o = frame[0].o;
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount = (((jint)((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount) + (100));
	}
label_385:;
	{
	LINE_NUMBER(1512);
	frame[21].i = ((frame[21].i) - ((jint(1)) + (frame[9].i)));
	LINE_NUMBER(1516);
	frame[23].o = (checkCast(ctx, &class_rhino_Callable, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)))));
	LINE_NUMBER(1517);
	frame[24].o = (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) + (jint(1)))))));
	LINE_NUMBER(1518);
	if ((frame[22].i) != (71)) goto label_390;
	}
	{
	LINE_NUMBER(1519);
	sp[0].o = (jobject)SM_rhino_Interpreter_getArgsArray_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(ctx, (frame[14].o), (frame[15].o), ((frame[21].i) + (jint(2))), (frame[9].i));
	frame[25].o = sp[0].o;
	LINE_NUMBER(1521);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_callRef_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_rhino_Context_R_rhino_Ref(ctx, (frame[23].o), (frame[24].o), (frame[25].o), (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1523);
	{ popExceptionFrames(frameRef, 1); bypasses[275] = true; goto label_3; } // goto label_80
	}
label_390:;
	{
	LINE_NUMBER(1525);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	frame[25].o = sp[0].o;
	LINE_NUMBER(1526);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_useActivation) == 0) goto label_395;
	}
	{
	LINE_NUMBER(1527);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o);
	frame[25].o = sp[0].o;
	}
label_395:;
	{
	LINE_NUMBER(1529);
	if ((isInstance(ctx, (frame[23].o), &class_rhino_InterpretedFunction)) == 0) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(1530);
	frame[26].o = (checkCast(ctx, &class_rhino_InterpretedFunction, (frame[23].o)));
	LINE_NUMBER(1531);
	frame[27].o = (frame[1].o);
	LINE_NUMBER(1532);
	if ((frame[22].i) != (-55)) goto label_400;
	}
	{
	LINE_NUMBER(1548);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	frame[27].o = sp[0].o;
	LINE_NUMBER(1551);
	SM_rhino_Interpreter_exitFrame_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	}
label_400:;
	{
	LINE_NUMBER(1553);
	sp[0].o = (jobject)SM_rhino_Interpreter_initFrame_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int_rhino_InterpretedFunction_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(ctx, (frame[0].o), (frame[25].o), (frame[24].o), (frame[14].o), (frame[15].o), ((frame[21].i) + (jint(2))), (frame[9].i), (frame[26].o), (frame[27].o));
	frame[28].o = sp[0].o;
	LINE_NUMBER(1555);
	if ((frame[22].i) == (-55)) goto label_404;
	}
	{
	LINE_NUMBER(1556);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedStackTop = (frame[21].i);
	LINE_NUMBER(1557);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedCallOp = (frame[22].i);
	}
label_404:;
	{
	LINE_NUMBER(1559);
	frame[1].o = (frame[28].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1560);
	goto label_0;
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1563);
	if ((isInstance(ctx, (frame[23].o), &class_rhino_NativeContinuation)) == 0) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	LINE_NUMBER(1566);
	clinit_rhino_Interpreter$ContinuationJump(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Interpreter$ContinuationJump);
	init_rhino_Interpreter$ContinuationJump_rhino_NativeContinuation_rhino_Interpreter$CallFrame(ctx, sp[0].o, (checkCast(ctx, &class_rhino_NativeContinuation, (frame[23].o))), (frame[1].o));
	frame[26].o = sp[0].o;
	LINE_NUMBER(1570);
	if ((frame[9].i) != 0) goto label_409;
	}
	{
	LINE_NUMBER(1571);
	((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[26].o)))->F_result = (jref) (frame[4].o);
	goto label_411;
	}
label_409:;
	{
	LINE_NUMBER(1573);
	((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[26].o)))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) + (jint(2)))));
	LINE_NUMBER(1574);
	((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[26].o)))->F_resultDbl = ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), ((frame[21].i) + (jint(2)))));
	}
label_411:;
	{
	LINE_NUMBER(1578);
	frame[2].o = (frame[26].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1579);
	goto label_207;
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1582);
	if ((isInstance(ctx, (frame[23].o), &class_rhino_IdFunctionObject)) == 0) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(1583);
	frame[26].o = (checkCast(ctx, &class_rhino_IdFunctionObject, (frame[23].o)));
	LINE_NUMBER(1584);
	jint temp0 = (jint)SM_rhino_NativeContinuation_isContinuationConstructor_rhino_IdFunctionObject_R_boolean(ctx, (frame[26].o));
	if (temp0 == 0) goto label_415;
	}
	{
	LINE_NUMBER(1585);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_stack;
	jint temp0 = frame[21].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	sp[1].o = (jobject)SM_rhino_Interpreter_captureContinuation_rhino_Context_rhino_Interpreter$CallFrame_boolean_R_rhino_NativeContinuation(ctx, sp[1].o, sp[2].o, (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1587);
	{ popExceptionFrames(frameRef, 1); bypasses[276] = true; goto label_3; } // goto label_80
	}
label_415:;
	{
	LINE_NUMBER(1591);
	jint temp0 = (jint)SM_rhino_BaseFunction_isApplyOrCall_rhino_IdFunctionObject_R_boolean(ctx, (frame[26].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(1592);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getCallable_rhino_Scriptable_R_rhino_Callable(ctx, (frame[24].o));
	frame[27].o = sp[0].o;
	LINE_NUMBER(1593);
	if ((isInstance(ctx, (frame[27].o), &class_rhino_InterpretedFunction)) == 0) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(1594);
	frame[28].o = (checkCast(ctx, &class_rhino_InterpretedFunction, (frame[27].o)));
	LINE_NUMBER(1595);
	sp[0].o = (jobject)SM_rhino_Interpreter_initFrameForApplyOrCall_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_int_rhino_Scriptable_rhino_IdFunctionObject_rhino_InterpretedFunction_R_rhino_Interpreter$CallFrame(ctx, (frame[0].o), (frame[1].o), (frame[9].i), (frame[14].o), (frame[15].o), (frame[21].i), (frame[22].i), (frame[25].o), (frame[26].o), (frame[28].o));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1598);
	goto label_0;
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1605);
	if ((isInstance(ctx, (frame[23].o), &class_rhino_ScriptRuntime$NoSuchMethodShim)) == 0) { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(1607);
	frame[26].o = (checkCast(ctx, &class_rhino_ScriptRuntime$NoSuchMethodShim, (frame[23].o)));
	LINE_NUMBER(1608);
	sp[0].o = (jobject)((rhino_ScriptRuntime$NoSuchMethodShim *) NULL_CHECK((frame[26].o)))->F_noSuchMethodMethod;
	frame[27].o = sp[0].o;
	LINE_NUMBER(1610);
	if ((isInstance(ctx, (frame[27].o), &class_rhino_InterpretedFunction)) == 0) { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(1611);
	frame[28].o = (checkCast(ctx, &class_rhino_InterpretedFunction, (frame[27].o)));
	LINE_NUMBER(1612);
	sp[0].o = (jobject)SM_rhino_Interpreter_initFrameForNoSuchMethod_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_int_rhino_Scriptable_rhino_Scriptable_rhino_ScriptRuntime$NoSuchMethodShim_rhino_InterpretedFunction_R_rhino_Interpreter$CallFrame(ctx, (frame[0].o), (frame[1].o), (frame[9].i), (frame[14].o), (frame[15].o), (frame[21].i), (frame[22].i), (frame[24].o), (frame[25].o), (frame[26].o), (frame[28].o));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1615);
	goto label_0;
label_28:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[89]) { bypasses[89] = false; goto label_162; }
	{
	LINE_NUMBER(1619);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_lastInterpreterFrame = (jref) (frame[1].o);
	LINE_NUMBER(1620);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedCallOp = (frame[22].i);
	LINE_NUMBER(1621);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedStackTop = (frame[21].i);
	LINE_NUMBER(1622);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[23].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[25].o;
	sp[4].o = frame[24].o;
	sp[5].o = frame[14].o;
	sp[6].o = frame[15].o;
	jint temp1 = (frame[21].i) + (jint(2));
	jint temp2 = frame[9].i;
	LINE_NUMBER(1623);
	sp[5].o = (jobject)SM_rhino_Interpreter_getArgsArray_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(ctx, sp[5].o, sp[6].o, temp1, temp2);
	LINE_NUMBER(1622);
	sp[1].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1625);
	{ popExceptionFrames(frameRef, 1); bypasses[277] = true; goto label_3; } // goto label_80
	}
label_162:;
	{
	LINE_NUMBER(1628);
	if ((frame[5].i) == 0) goto label_433;
	}
	{
	LINE_NUMBER(1629);
	sp[0].o = frame[0].o;
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount = (((jint)((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount) + (100));
	}
label_433:;
	{
	LINE_NUMBER(1633);
	frame[21].i = ((frame[21].i) - (frame[9].i));
	LINE_NUMBER(1635);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1636);
	if ((isInstance(ctx, (frame[23].o), &class_rhino_InterpretedFunction)) == 0) { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	{
	LINE_NUMBER(1637);
	frame[24].o = (checkCast(ctx, &class_rhino_InterpretedFunction, (frame[23].o)));
	LINE_NUMBER(1638);
	sp[0].o = frame[24].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)((func_rhino_InterpretedFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpretedFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[25].o = sp[0].o;
	LINE_NUMBER(1639);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_Interpreter_initFrame_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int_rhino_InterpretedFunction_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(ctx, sp[0].o, sp[1].o, (frame[25].o), (frame[14].o), (frame[15].o), ((frame[21].i) + (jint(1))), (frame[9].i), (frame[24].o), (frame[1].o));
	frame[26].o = sp[0].o;
	LINE_NUMBER(1642);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[25].o);
	LINE_NUMBER(1643);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedStackTop = (frame[21].i);
	LINE_NUMBER(1644);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedCallOp = (frame[22].i);
	LINE_NUMBER(1645);
	frame[1].o = (frame[26].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1646);
	goto label_0;
label_31:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_84; }
	if (bypasses[2]) { bypasses[2] = false; goto label_86; }
	if (bypasses[3]) { bypasses[3] = false; goto label_87; }
	if (bypasses[5]) { bypasses[5] = false; goto label_89; }
	if (bypasses[6]) { bypasses[6] = false; goto label_90; }
	if (bypasses[9]) { bypasses[9] = false; goto label_93; }
	if (bypasses[10]) { bypasses[10] = false; goto label_87; }
	if (bypasses[11]) { bypasses[11] = false; goto label_94; }
	if (bypasses[12]) { bypasses[12] = false; goto label_95; }
	if (bypasses[13]) { bypasses[13] = false; goto label_96; }
	if (bypasses[14]) { bypasses[14] = false; goto label_97; }
	if (bypasses[15]) { bypasses[15] = false; goto label_98; }
	if (bypasses[16]) { bypasses[16] = false; goto label_99; }
	if (bypasses[17]) { bypasses[17] = false; goto label_100; }
	if (bypasses[18]) { bypasses[18] = false; goto label_101; }
	if (bypasses[19]) { bypasses[19] = false; goto label_102; }
	if (bypasses[20]) { bypasses[20] = false; goto label_103; }
	if (bypasses[21]) { bypasses[21] = false; goto label_104; }
	if (bypasses[22]) { bypasses[22] = false; goto label_105; }
	if (bypasses[23]) { bypasses[23] = false; goto label_106; }
	if (bypasses[24]) { bypasses[24] = false; goto label_107; }
	if (bypasses[25]) { bypasses[25] = false; goto label_108; }
	if (bypasses[26]) { bypasses[26] = false; goto label_109; }
	if (bypasses[27]) { bypasses[27] = false; goto label_110; }
	if (bypasses[28]) { bypasses[28] = false; goto label_111; }
	if (bypasses[29]) { bypasses[29] = false; goto label_112; }
	if (bypasses[30]) { bypasses[30] = false; goto label_113; }
	if (bypasses[31]) { bypasses[31] = false; goto label_114; }
	if (bypasses[32]) { bypasses[32] = false; goto label_115; }
	if (bypasses[33]) { bypasses[33] = false; goto label_116; }
	if (bypasses[34]) { bypasses[34] = false; goto label_117; }
	if (bypasses[35]) { bypasses[35] = false; goto label_118; }
	if (bypasses[36]) { bypasses[36] = false; goto label_119; }
	if (bypasses[37]) { bypasses[37] = false; goto label_120; }
	if (bypasses[43]) { bypasses[43] = false; goto label_126; }
	if (bypasses[44]) { bypasses[44] = false; goto label_127; }
	if (bypasses[49]) { bypasses[49] = false; goto label_132; }
	if (bypasses[50]) { bypasses[50] = false; goto label_133; }
	if (bypasses[51]) { bypasses[51] = false; goto label_134; }
	if (bypasses[55]) { bypasses[55] = false; goto label_138; }
	if (bypasses[56]) { bypasses[56] = false; goto label_139; }
	if (bypasses[64]) { bypasses[64] = false; goto label_87; }
	if (bypasses[65]) { bypasses[65] = false; goto label_147; }
	if (bypasses[66]) { bypasses[66] = false; goto label_148; }
	if (bypasses[91]) { bypasses[91] = false; goto label_163; }
	if (bypasses[98]) { bypasses[98] = false; goto label_169; }
	if (bypasses[99]) { bypasses[99] = false; goto label_170; }
	if (bypasses[100]) { bypasses[100] = false; goto label_171; }
	if (bypasses[101]) { bypasses[101] = false; goto label_172; }
	if (bypasses[102]) { bypasses[102] = false; goto label_173; }
	if (bypasses[103]) { bypasses[103] = false; goto label_174; }
	if (bypasses[104]) { bypasses[104] = false; goto label_175; }
	if (bypasses[107]) { bypasses[107] = false; goto label_177; }
	if (bypasses[113]) { bypasses[113] = false; goto label_182; }
	if (bypasses[114]) { bypasses[114] = false; goto label_183; }
	if (bypasses[115]) { bypasses[115] = false; goto label_184; }
	if (bypasses[116]) { bypasses[116] = false; goto label_185; }
	if (bypasses[117]) { bypasses[117] = false; goto label_185; }
	if (bypasses[118]) { bypasses[118] = false; goto label_185; }
	if (bypasses[119]) { bypasses[119] = false; goto label_185; }
	if (bypasses[120]) { bypasses[120] = false; goto label_186; }
	if (bypasses[121]) { bypasses[121] = false; goto label_186; }
	if (bypasses[122]) { bypasses[122] = false; goto label_187; }
	if (bypasses[124]) { bypasses[124] = false; goto label_115; }
	if (bypasses[125]) { bypasses[125] = false; goto label_115; }
	if (bypasses[130]) { bypasses[130] = false; goto label_192; }
	if (bypasses[132]) { bypasses[132] = false; goto label_87; }
	if (bypasses[133]) { bypasses[133] = false; goto label_87; }
	if (bypasses[134]) { bypasses[134] = false; goto label_87; }
	if (bypasses[135]) { bypasses[135] = false; goto label_87; }
	if (bypasses[136]) { bypasses[136] = false; goto label_87; }
	if (bypasses[137]) { bypasses[137] = false; goto label_87; }
	if (bypasses[138]) { bypasses[138] = false; goto label_87; }
	if (bypasses[139]) { bypasses[139] = false; goto label_87; }
	if (bypasses[140]) { bypasses[140] = false; goto label_87; }
	if (bypasses[141]) { bypasses[141] = false; goto label_87; }
	if (bypasses[142]) { bypasses[142] = false; goto label_87; }
	if (bypasses[143]) { bypasses[143] = false; goto label_87; }
	if (bypasses[144]) { bypasses[144] = false; goto label_87; }
	if (bypasses[145]) { bypasses[145] = false; goto label_87; }
	if (bypasses[146]) { bypasses[146] = false; goto label_87; }
	if (bypasses[147]) { bypasses[147] = false; goto label_87; }
	if (bypasses[148]) { bypasses[148] = false; goto label_87; }
	if (bypasses[149]) { bypasses[149] = false; goto label_87; }
	if (bypasses[150]) { bypasses[150] = false; goto label_87; }
	if (bypasses[151]) { bypasses[151] = false; goto label_87; }
	if (bypasses[152]) { bypasses[152] = false; goto label_87; }
	if (bypasses[153]) { bypasses[153] = false; goto label_87; }
	if (bypasses[154]) { bypasses[154] = false; goto label_87; }
	if (bypasses[155]) { bypasses[155] = false; goto label_87; }
	if (bypasses[156]) { bypasses[156] = false; goto label_87; }
	if (bypasses[157]) { bypasses[157] = false; goto label_87; }
	if (bypasses[158]) { bypasses[158] = false; goto label_87; }
	if (bypasses[159]) { bypasses[159] = false; goto label_87; }
	if (bypasses[160]) { bypasses[160] = false; goto label_87; }
	if (bypasses[161]) { bypasses[161] = false; goto label_87; }
	if (bypasses[162]) { bypasses[162] = false; goto label_87; }
	if (bypasses[163]) { bypasses[163] = false; goto label_87; }
	if (bypasses[164]) { bypasses[164] = false; goto label_87; }
	if (bypasses[165]) { bypasses[165] = false; goto label_87; }
	if (bypasses[166]) { bypasses[166] = false; goto label_87; }
	if (bypasses[167]) { bypasses[167] = false; goto label_87; }
	if (bypasses[168]) { bypasses[168] = false; goto label_87; }
	if (bypasses[169]) { bypasses[169] = false; goto label_87; }
	if (bypasses[170]) { bypasses[170] = false; goto label_87; }
	if (bypasses[171]) { bypasses[171] = false; goto label_87; }
	if (bypasses[172]) { bypasses[172] = false; goto label_87; }
	if (bypasses[173]) { bypasses[173] = false; goto label_87; }
	if (bypasses[174]) { bypasses[174] = false; goto label_87; }
	if (bypasses[175]) { bypasses[175] = false; goto label_87; }
	if (bypasses[176]) { bypasses[176] = false; goto label_87; }
	if (bypasses[177]) { bypasses[177] = false; goto label_87; }
	if (bypasses[178]) { bypasses[178] = false; goto label_87; }
	if (bypasses[179]) { bypasses[179] = false; goto label_87; }
	if (bypasses[180]) { bypasses[180] = false; goto label_87; }
	if (bypasses[181]) { bypasses[181] = false; goto label_87; }
	if (bypasses[182]) { bypasses[182] = false; goto label_87; }
	if (bypasses[183]) { bypasses[183] = false; goto label_87; }
	if (bypasses[184]) { bypasses[184] = false; goto label_87; }
	if (bypasses[185]) { bypasses[185] = false; goto label_87; }
	if (bypasses[186]) { bypasses[186] = false; goto label_87; }
	if (bypasses[187]) { bypasses[187] = false; goto label_87; }
	if (bypasses[188]) { bypasses[188] = false; goto label_87; }
	if (bypasses[189]) { bypasses[189] = false; goto label_87; }
	if (bypasses[190]) { bypasses[190] = false; goto label_87; }
	if (bypasses[191]) { bypasses[191] = false; goto label_87; }
	if (bypasses[192]) { bypasses[192] = false; goto label_87; }
	if (bypasses[193]) { bypasses[193] = false; goto label_87; }
	if (bypasses[194]) { bypasses[194] = false; goto label_87; }
	if (bypasses[195]) { bypasses[195] = false; goto label_87; }
	if (bypasses[196]) { bypasses[196] = false; goto label_87; }
	if (bypasses[197]) { bypasses[197] = false; goto label_87; }
	if (bypasses[198]) { bypasses[198] = false; goto label_87; }
	if (bypasses[199]) { bypasses[199] = false; goto label_87; }
	if (bypasses[200]) { bypasses[200] = false; goto label_87; }
	if (bypasses[201]) { bypasses[201] = false; goto label_87; }
	if (bypasses[202]) { bypasses[202] = false; goto label_87; }
	if (bypasses[203]) { bypasses[203] = false; goto label_87; }
	if (bypasses[204]) { bypasses[204] = false; goto label_87; }
	if (bypasses[205]) { bypasses[205] = false; goto label_87; }
	if (bypasses[206]) { bypasses[206] = false; goto label_87; }
	if (bypasses[207]) { bypasses[207] = false; goto label_87; }
	if (bypasses[208]) { bypasses[208] = false; goto label_87; }
	if (bypasses[209]) { bypasses[209] = false; goto label_87; }
	if (bypasses[210]) { bypasses[210] = false; goto label_87; }
	if (bypasses[211]) { bypasses[211] = false; goto label_87; }
	if (bypasses[212]) { bypasses[212] = false; goto label_87; }
	if (bypasses[213]) { bypasses[213] = false; goto label_87; }
	if (bypasses[214]) { bypasses[214] = false; goto label_193; }
	if (bypasses[215]) { bypasses[215] = false; goto label_87; }
	if (bypasses[216]) { bypasses[216] = false; goto label_200; }
	if (bypasses[217]) { bypasses[217] = false; goto label_200; }
	if (bypasses[219]) { bypasses[219] = false; goto label_200; }
	if (bypasses[220]) { bypasses[220] = false; goto label_200; }
	if (bypasses[225]) { bypasses[225] = false; goto label_241; }
	if (bypasses[227]) { bypasses[227] = false; goto label_241; }
	if (bypasses[230]) { bypasses[230] = false; goto label_241; }
	if (bypasses[231]) { bypasses[231] = false; goto label_241; }
	if (bypasses[232]) { bypasses[232] = false; goto label_241; }
	if (bypasses[243]) { bypasses[243] = false; goto label_200; }
	if (bypasses[244]) { bypasses[244] = false; goto label_200; }
	if (bypasses[245]) { bypasses[245] = false; goto label_200; }
	{
	LINE_NUMBER(1648);
	if ((isInstance(ctx, (frame[23].o), &class_rhino_Function)) != 0) goto label_444;
	}
	{
	LINE_NUMBER(1649);
	if ((frame[23].o) != (frame[3].o)) goto label_446;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_446:;
	{
	LINE_NUMBER(1650);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[23].o));
	throwException(ctx, sp[0].o);	}
label_444:;
	{
	LINE_NUMBER(1652);
	frame[24].o = (checkCast(ctx, &class_rhino_Function, (frame[23].o)));
	LINE_NUMBER(1654);
	if ((isInstance(ctx, (frame[24].o), &class_rhino_IdFunctionObject)) == 0) goto label_448;
	}
	{
	LINE_NUMBER(1655);
	frame[25].o = (checkCast(ctx, &class_rhino_IdFunctionObject, (frame[24].o)));
	LINE_NUMBER(1656);
	jint temp0 = (jint)SM_rhino_NativeContinuation_isContinuationConstructor_rhino_IdFunctionObject_R_boolean(ctx, (frame[25].o));
	if (temp0 == 0) goto label_448;
	}
	{
	LINE_NUMBER(1657);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_stack;
	jint temp0 = frame[21].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	jint temp1 = jint(0);
	LINE_NUMBER(1658);
	sp[1].o = (jobject)SM_rhino_Interpreter_captureContinuation_rhino_Context_rhino_Interpreter$CallFrame_boolean_R_rhino_NativeContinuation(ctx, sp[1].o, sp[2].o, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1659);
	{ popExceptionFrames(frameRef, 1); bypasses[278] = true; goto label_3; } // goto label_80
	}
label_448:;
	{
	LINE_NUMBER(1663);
	sp[0].o = (jobject)SM_rhino_Interpreter_getArgsArray_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(ctx, (frame[14].o), (frame[15].o), ((frame[21].i) + (jint(1))), (frame[9].i));
	frame[25].o = sp[0].o;
	LINE_NUMBER(1664);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[24].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)((func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, sp[1].o))(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[25].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1665);
	{ popExceptionFrames(frameRef, 1); bypasses[279] = true; goto label_3; } // goto label_80
	}
label_163:;
	{
	LINE_NUMBER(1668);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1669);
	if ((frame[23].o) != (frame[3].o)) goto label_457;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_457:;
	{
	LINE_NUMBER(1670);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, (frame[23].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1671);
	{ popExceptionFrames(frameRef, 1); bypasses[280] = true; goto label_3; } // goto label_80
	}
label_132:;
	{
	LINE_NUMBER(1674);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_typeofName_rhino_Scriptable_java_lang_String_R_java_lang_String(ctx, sp[1].o, (frame[8].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1675);
	{ popExceptionFrames(frameRef, 1); bypasses[281] = true; goto label_3; } // goto label_80
	}
label_171:;
	{
	LINE_NUMBER(1677);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i)) = (frame[8].o);
	LINE_NUMBER(1678);
	{ popExceptionFrames(frameRef, 1); bypasses[282] = true; goto label_3; } // goto label_80
	}
label_119:;
	{
	LINE_NUMBER(1680);
	INST_IINC(21, 1);
	LINE_NUMBER(1681);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[3].o);
	LINE_NUMBER(1682);
	sp[0].o = frame[15].o;
	jint temp0 = frame[21].i;
	jint temp1 = (jint)SM_rhino_Interpreter_getShort_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = (jdouble(temp1));
	LINE_NUMBER(1683);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(2)));
	LINE_NUMBER(1684);
	{ popExceptionFrames(frameRef, 1); bypasses[283] = true; goto label_3; } // goto label_80
	}
label_118:;
	{
	LINE_NUMBER(1686);
	INST_IINC(21, 1);
	LINE_NUMBER(1687);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[3].o);
	LINE_NUMBER(1688);
	sp[0].o = frame[15].o;
	jint temp0 = frame[21].i;
	jint temp1 = (jint)SM_rhino_Interpreter_getInt_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = (jdouble(temp1));
	LINE_NUMBER(1689);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(4)));
	LINE_NUMBER(1690);
	{ popExceptionFrames(frameRef, 1); bypasses[284] = true; goto label_3; } // goto label_80
	}
label_170:;
	{
	LINE_NUMBER(1692);
	INST_IINC(21, 1);
	LINE_NUMBER(1693);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[3].o);
	LINE_NUMBER(1694);
	sp[0].o = frame[15].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_itsDoubleTable;
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = ((jdouble)ARRAY_ACCESS(jdouble, sp[1].o, (frame[9].i)));
	LINE_NUMBER(1695);
	{ popExceptionFrames(frameRef, 1); bypasses[285] = true; goto label_3; } // goto label_80
	}
label_169:;
	{
	LINE_NUMBER(1697);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_name_rhino_Context_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[8].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1698);
	{ popExceptionFrames(frameRef, 1); bypasses[286] = true; goto label_3; } // goto label_80
	}
label_138:;
	{
	LINE_NUMBER(1700);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_nameIncrDecr_rhino_Scriptable_java_lang_String_rhino_Context_int_R_java_lang_Object(ctx, sp[1].o, (frame[8].o), (frame[0].o), ((jint)ARRAY_ACCESS(jbyte, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1702);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(1)));
	LINE_NUMBER(1703);
	{ popExceptionFrames(frameRef, 1); bypasses[287] = true; goto label_3; } // goto label_80
	}
label_98:;
	{
	LINE_NUMBER(1705);
	sp[0].o = frame[19].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_pc;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_pc = (temp0 + (jint(1)));
	frame[9].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(1706);
	jint temp3 = (jint)SM_rhino_Interpreter_doGetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[1].o), (frame[14].o), (frame[15].o), (frame[21].i), (frame[16].o), (frame[17].o), (frame[9].i));
	frame[21].i = temp3;
	LINE_NUMBER(1707);
	{ popExceptionFrames(frameRef, 1); bypasses[288] = true; goto label_3; } // goto label_80
	}
label_97:;
	{
	LINE_NUMBER(1709);
	sp[0].o = frame[19].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_pc;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_pc = (temp0 + (jint(1)));
	frame[9].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(1710);
	jint temp3 = (jint)SM_rhino_Interpreter_doSetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(ctx, (frame[1].o), (frame[14].o), (frame[15].o), (frame[21].i), (frame[16].o), (frame[17].o), (frame[18].o), (frame[9].i));
	frame[21].i = temp3;
	LINE_NUMBER(1712);
	{ popExceptionFrames(frameRef, 1); bypasses[289] = true; goto label_3; } // goto label_80
	}
label_86:;
	{
	LINE_NUMBER(1714);
	sp[0].o = frame[19].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_pc;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[1].o))->F_pc = (temp0 + (jint(1)));
	frame[9].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}
label_193:;
	{
	LINE_NUMBER(1717);
	jint temp0 = (jint)SM_rhino_Interpreter_doSetConstVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(ctx, (frame[1].o), (frame[14].o), (frame[15].o), (frame[21].i), (frame[16].o), (frame[17].o), (frame[18].o), (frame[9].i));
	frame[21].i = temp0;
	LINE_NUMBER(1719);
	{ popExceptionFrames(frameRef, 1); bypasses[290] = true; goto label_3; } // goto label_80
	}
label_183:;
	{
	LINE_NUMBER(1722);
	jint temp0 = (jint)SM_rhino_Interpreter_doSetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(ctx, (frame[1].o), (frame[14].o), (frame[15].o), (frame[21].i), (frame[16].o), (frame[17].o), (frame[18].o), (frame[9].i));
	frame[21].i = temp0;
	LINE_NUMBER(1724);
	{ popExceptionFrames(frameRef, 1); bypasses[291] = true; goto label_3; } // goto label_80
	}
label_182:;
	{
	LINE_NUMBER(1727);
	jint temp0 = (jint)SM_rhino_Interpreter_doGetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_int_R_int(ctx, (frame[1].o), (frame[14].o), (frame[15].o), (frame[21].i), (frame[16].o), (frame[17].o), (frame[9].i));
	frame[21].i = temp0;
	LINE_NUMBER(1728);
	{ popExceptionFrames(frameRef, 1); bypasses[292] = true; goto label_3; } // goto label_80
	}
label_139:;
	{
	LINE_NUMBER(1730);
	jint temp0 = (jint)SM_rhino_Interpreter_doVarIncDec_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[14].o), (frame[15].o), (frame[21].i), (frame[16].o), (frame[17].o), (frame[18].o), (frame[9].i));
	frame[21].i = temp0;
	LINE_NUMBER(1732);
	{ popExceptionFrames(frameRef, 1); bypasses[293] = true; goto label_3; } // goto label_80
	}
label_95:;
	{
	LINE_NUMBER(1735);
	INST_IINC(21, 1);
	LINE_NUMBER(1736);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[3].o);
	LINE_NUMBER(1737);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = (jdouble(0));
	LINE_NUMBER(1738);
	{ popExceptionFrames(frameRef, 1); bypasses[294] = true; goto label_3; } // goto label_80
	}
label_94:;
	{
	LINE_NUMBER(1740);
	INST_IINC(21, 1);
	LINE_NUMBER(1741);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[3].o);
	LINE_NUMBER(1742);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = (jdouble(1));
	LINE_NUMBER(1743);
	{ popExceptionFrames(frameRef, 1); bypasses[295] = true; goto label_3; } // goto label_80
	}
label_172:;
	{
	LINE_NUMBER(1745);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i)) = (jobject(nullptr));
	LINE_NUMBER(1746);
	{ popExceptionFrames(frameRef, 1); bypasses[296] = true; goto label_3; } // goto label_80
	}
label_173:;
	{
	LINE_NUMBER(1748);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_thisObj;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1749);
	{ popExceptionFrames(frameRef, 1); bypasses[297] = true; goto label_3; } // goto label_80
	}
label_187:;
	{
	LINE_NUMBER(1751);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_fnOrScript;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1752);
	{ popExceptionFrames(frameRef, 1); bypasses[298] = true; goto label_3; } // goto label_80
	}
label_174:;
	{
	LINE_NUMBER(1754);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_FALSE;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1755);
	{ popExceptionFrames(frameRef, 1); bypasses[299] = true; goto label_3; } // goto label_80
	}
label_175:;
	{
	LINE_NUMBER(1757);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1758);
	{ popExceptionFrames(frameRef, 1); bypasses[300] = true; goto label_3; } // goto label_80
	}
label_96:;
	{
	LINE_NUMBER(1760);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i)) = (frame[4].o);
	LINE_NUMBER(1761);
	{ popExceptionFrames(frameRef, 1); bypasses[301] = true; goto label_3; } // goto label_80
	}
label_147:;
	{
	LINE_NUMBER(1763);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1764);
	if ((frame[23].o) != (frame[3].o)) goto label_496;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_496:;
	{
	LINE_NUMBER(1765);
	INST_IINC(21, -1);
	LINE_NUMBER(1766);
	sp[0].o = frame[1].o;
	sp[1].o = frame[23].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_enterWith_java_lang_Object_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[1].o, sp[2].o, sp[3].o);
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_scope = (jref) sp[1].o;
	LINE_NUMBER(1767);
	{ popExceptionFrames(frameRef, 1); bypasses[302] = true; goto label_3; } // goto label_80
	}
label_148:;
	{
	LINE_NUMBER(1770);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_leaveWith_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[1].o);
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_scope = (jref) sp[1].o;
	LINE_NUMBER(1771);
	{ popExceptionFrames(frameRef, 1); bypasses[303] = true; goto label_3; } // goto label_80
	}
label_184:;
	{
	LINE_NUMBER(1776);
	INST_IINC(21, -1);
	LINE_NUMBER(1777);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1779);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc))) == 0) goto label_502;
	}
	INST_ICONST(1);
	goto label_503;
label_502:;
	INST_ICONST(0);
label_503:;
	{
	sp -= 1;
	frame[23].i = sp[0].i;
	LINE_NUMBER(1780);
	frame[24].o = (checkCast(ctx, &class_java_lang_Throwable, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) + (jint(1)))))));
	LINE_NUMBER(1782);
	if ((frame[23].i) != 0) goto label_506;
	}
	{
	LINE_NUMBER(1783);
	frame[25].o = (jobject(nullptr));
	goto label_509;
	}
label_506:;
	{
	LINE_NUMBER(1785);
	frame[25].o = (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[9].i)))));
	}
label_509:;
	{
	LINE_NUMBER(1787);
	sp[0].o = frame[14].o;
	jint temp0 = frame[9].i;
	sp[1].o = frame[24].o;
	sp[2].o = frame[25].o;
	sp[3].o = frame[8].o;
	sp[4].o = frame[0].o;
	sp[5].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_newCatchScope_java_lang_Throwable_rhino_Scriptable_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1790);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(1)));
	LINE_NUMBER(1791);
	{ popExceptionFrames(frameRef, 1); bypasses[304] = true; goto label_3; } // goto label_80
	}
label_185:;
	{
	LINE_NUMBER(1797);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1798);
	if ((frame[23].o) != (frame[3].o)) goto label_513;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_513:;
	{
	LINE_NUMBER(1799);
	INST_IINC(21, -1);
	LINE_NUMBER(1800);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1801);
	if ((frame[22].i) != (58)) goto label_516;
	}
	INST_ICONST(0);
	goto label_517;
label_516:;
	{
	if ((frame[22].i) != (59)) goto label_518;
	}
	INST_ICONST(1);
	goto label_517;
label_518:;
	{
	if ((frame[22].i) != (61)) goto label_519;
	}
	INST_BIPUSH(6);
	goto label_517;
label_519:;
	INST_ICONST(2);
label_517:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1808);
	sp[0].o = frame[14].o;
	jint temp0 = frame[9].i;
	sp[1].o = frame[23].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_enumInit_java_lang_Object_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[24].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1809);
	{ popExceptionFrames(frameRef, 1); bypasses[305] = true; goto label_3; } // goto label_80
	}
label_186:;
	{
	LINE_NUMBER(1813);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1814);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[9].i)));
	LINE_NUMBER(1815);
	INST_IINC(21, 1);
	LINE_NUMBER(1816);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[22].i) != (62)) goto label_525;
	}
	{
	sp[0].o = frame[23].o;
	LINE_NUMBER(1817);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_enumNext_java_lang_Object_R_java_lang_Boolean(ctx, sp[0].o);
	sp += 1;
	goto label_527;
	}
label_525:;
	{
	sp[0].o = frame[23].o;
	sp[1].o = frame[0].o;
	LINE_NUMBER(1818);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_enumId_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_527:;
	{
	sp -= 3;
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(1819);
	{ popExceptionFrames(frameRef, 1); bypasses[306] = true; goto label_3; } // goto label_80
	}
label_192:;
	{
	LINE_NUMBER(1823);
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1824);
	if ((frame[23].o) != (frame[3].o)) goto label_531;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[23].o = sp[0].o;
	}
label_531:;
	{
	LINE_NUMBER(1825);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = frame[23].o;
	sp[2].o = frame[8].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_specialRef_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Ref(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1827);
	{ popExceptionFrames(frameRef, 1); bypasses[307] = true; goto label_3; } // goto label_80
	}
label_134:;
	{
	LINE_NUMBER(1830);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1831);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope = (jref) (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[9].i)))));
	LINE_NUMBER(1832);
	{ popExceptionFrames(frameRef, 1); bypasses[308] = true; goto label_3; } // goto label_80
	}
label_133:;
	{
	LINE_NUMBER(1834);
	frame[9].i = ((frame[9].i) + ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_localShift));
	LINE_NUMBER(1835);
	sp[0].o = frame[14].o;
	jint temp0 = frame[9].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1836);
	{ popExceptionFrames(frameRef, 1); bypasses[309] = true; goto label_3; } // goto label_80
	}
label_127:;
	{
	LINE_NUMBER(1838);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_fnOrScript;
	sp[0].o = (jobject)SM_rhino_InterpretedFunction_createFunction_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int_R_rhino_InterpretedFunction(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[9].i));
	frame[23].o = sp[0].o;
	LINE_NUMBER(1841);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[23].o)))->F_idata;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsFunctionType) != (jint(4))) goto label_538;
	}
	{
	LINE_NUMBER(1842);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	clinit_rhino_ArrowFunction(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ArrowFunction);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[4].o = frame[23].o;
	sp[5].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_thisObj;
	init_rhino_ArrowFunction_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	{ popExceptionFrames(frameRef, 1); bypasses[310] = true; goto label_3; } // goto label_80
	}
label_538:;
	{
	LINE_NUMBER(1844);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i)) = (frame[23].o);
	LINE_NUMBER(1846);
	{ popExceptionFrames(frameRef, 1); bypasses[311] = true; goto label_3; } // goto label_80
	}
label_126:;
	{
	LINE_NUMBER(1848);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_fnOrScript;
	SM_rhino_Interpreter_initFunction_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[9].i));
	LINE_NUMBER(1849);
	{ popExceptionFrames(frameRef, 1); bypasses[312] = true; goto label_3; } // goto label_80
	}
label_177:;
	{
	LINE_NUMBER(1851);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsRegExpLiterals;
	frame[24].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)));
	LINE_NUMBER(1852);
	sp[0].o = frame[14].o;
	INST_IINC(21, 1);
	jint temp0 = frame[21].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[1].o, sp[2].o, (frame[24].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1853);
	{ popExceptionFrames(frameRef, 1); bypasses[313] = true; goto label_3; } // goto label_80
	}
label_117:;
	{
	LINE_NUMBER(1856);
	INST_IINC(21, 1);
	LINE_NUMBER(1857);
	sp[0].o = frame[14].o;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[9].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1858);
	INST_IINC(21, 1);
	LINE_NUMBER(1859);
	sp[0].o = frame[14].o;
	jint temp1 = frame[21].i;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[9].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1860);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = (jdouble(0));
	LINE_NUMBER(1861);
	{ popExceptionFrames(frameRef, 1); bypasses[314] = true; goto label_3; } // goto label_80
	}
label_116:;
	{
	LINE_NUMBER(1863);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1864);
	if ((frame[25].o) != (frame[3].o)) goto label_550;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i))));
	frame[25].o = sp[0].o;
	}
label_550:;
	{
	LINE_NUMBER(1865);
	INST_IINC(21, -1);
	LINE_NUMBER(1866);
	frame[26].i = (jint(((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)))));
	LINE_NUMBER(1867);
	ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i))))))), (frame[26].i)) = (frame[25].o);
	LINE_NUMBER(1868);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = (jdouble(((frame[26].i) + (jint(1)))));
	LINE_NUMBER(1869);
	{ popExceptionFrames(frameRef, 1); bypasses[315] = true; goto label_3; } // goto label_80
	}
label_90:;
	{
	LINE_NUMBER(1872);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1873);
	INST_IINC(21, -1);
	LINE_NUMBER(1874);
	frame[26].i = (jint(((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)))));
	LINE_NUMBER(1875);
	ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i))))))), (frame[26].i)) = (frame[25].o);
	LINE_NUMBER(1876);
	ARRAY_ACCESS(jint, (checkCast(ctx, getArrayClass(&class_int, 1), (checkCast(ctx, getArrayClass(&class_int, 1), ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) - (jint(1))))))))), (frame[26].i)) = (jint(-1));
	LINE_NUMBER(1877);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = (jdouble(((frame[26].i) + (jint(1)))));
	LINE_NUMBER(1878);
	{ popExceptionFrames(frameRef, 1); bypasses[316] = true; goto label_3; } // goto label_80
	}
label_89:;
	{
	LINE_NUMBER(1881);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)));
	LINE_NUMBER(1882);
	INST_IINC(21, -1);
	LINE_NUMBER(1883);
	frame[26].i = (jint(((jdouble)ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)))));
	LINE_NUMBER(1884);
	ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i))))))), (frame[26].i)) = (frame[25].o);
	LINE_NUMBER(1885);
	ARRAY_ACCESS(jint, (checkCast(ctx, getArrayClass(&class_int, 1), (checkCast(ctx, getArrayClass(&class_int, 1), ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), ((frame[21].i) - (jint(1))))))))), (frame[26].i)) = (jint(1));
	LINE_NUMBER(1886);
	ARRAY_ACCESS(jdouble, (frame[15].o), (frame[21].i)) = (jdouble(((frame[26].i) + (jint(1)))));
	LINE_NUMBER(1887);
	{ popExceptionFrames(frameRef, 1); bypasses[317] = true; goto label_3; } // goto label_80
	}
label_115:;
	{
	LINE_NUMBER(1892);
	frame[25].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)))))));
	LINE_NUMBER(1893);
	INST_IINC(21, -1);
	LINE_NUMBER(1894);
	frame[26].o = (checkCast(ctx, getArrayClass(&class_int, 1), (checkCast(ctx, getArrayClass(&class_int, 1), ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)))))));
	LINE_NUMBER(1896);
	if ((frame[22].i) != (67)) goto label_570;
	}
	{
	LINE_NUMBER(1897);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_literalIds;
	frame[28].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)))))));
	LINE_NUMBER(1898);
	sp[0].o = frame[28].o;
	sp[1].o = frame[25].o;
	sp[2].o = frame[26].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_newObjectLiteral_Array1_java_lang_Object_Array1_java_lang_Object_Array1_int_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[27].o = sp[0].o;
	LINE_NUMBER(1900);
	goto label_574;
	}
label_570:;
	{
	LINE_NUMBER(1901);
	frame[28].o = (jobject(nullptr));
	LINE_NUMBER(1902);
	if ((frame[22].i) != (-31)) goto label_576;
	}
	{
	LINE_NUMBER(1903);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_literalIds;
	frame[28].o = (checkCast(ctx, getArrayClass(&class_int, 1), (checkCast(ctx, getArrayClass(&class_int, 1), ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)))))));
	}
label_576:;
	{
	LINE_NUMBER(1905);
	sp[0].o = frame[25].o;
	sp[1].o = frame[28].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_newArrayLiteral_Array1_java_lang_Object_Array1_int_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[27].o = sp[0].o;
	}
label_574:;
	{
	LINE_NUMBER(1908);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[27].o);
	LINE_NUMBER(1909);
	{ popExceptionFrames(frameRef, 1); bypasses[318] = true; goto label_3; } // goto label_80
	}
label_93:;
	{
	LINE_NUMBER(1912);
	jint temp0 = (jint)SM_rhino_Interpreter_stack_boolean_rhino_Interpreter$CallFrame_int_R_boolean(ctx, (frame[1].o), (frame[21].i));
	frame[25].i = temp0;
	LINE_NUMBER(1913);
	jint temp1 = frame[25].i;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_updateDotQuery_boolean_rhino_Scriptable_R_java_lang_Object(ctx, temp1, sp[0].o);
	frame[26].o = sp[0].o;
	LINE_NUMBER(1914);
	if ((frame[26].o) == nullptr) goto label_581;
	}
	{
	LINE_NUMBER(1915);
	ARRAY_ACCESS(jobject, (frame[14].o), (frame[21].i)) = (frame[26].o);
	LINE_NUMBER(1916);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_leaveDotQuery_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[1].o);
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_scope = (jref) sp[1].o;
	LINE_NUMBER(1917);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(2)));
	LINE_NUMBER(1918);
	{ popExceptionFrames(frameRef, 1); bypasses[319] = true; goto label_3; } // goto label_80
	}
label_581:;
	{
	LINE_NUMBER(1921);
	INST_IINC(21, -1);
	LINE_NUMBER(1922);
	goto label_241;
	}
label_84:;
	{
	LINE_NUMBER(1925);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); bypasses[320] = true; goto label_3; } // goto label_80
	}
	{
	LINE_NUMBER(1926);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	((func_rhino_debug_DebugFrame_onDebuggerStatement_rhino_Context) resolveInterfaceMethod(ctx, &class_rhino_debug_DebugFrame, INDEX_rhino_debug_DebugFrame_onDebuggerStatement_rhino_Context, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	{ popExceptionFrames(frameRef, 1); bypasses[321] = true; goto label_3; } // goto label_80
	}
label_120:;
	{
	LINE_NUMBER(1930);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pcSourceLineStart = ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc);
	LINE_NUMBER(1931);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	if (sp[0].o == nullptr) goto label_589;
	}
	{
	LINE_NUMBER(1932);
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	frame[25].i = temp0;
	LINE_NUMBER(1933);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	((func_rhino_debug_DebugFrame_onLineChange_rhino_Context_int) resolveInterfaceMethod(ctx, &class_rhino_debug_DebugFrame, INDEX_rhino_debug_DebugFrame_onLineChange_rhino_Context_int, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[25].i));
	}
label_589:;
	{
	LINE_NUMBER(1935);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(2)));
	LINE_NUMBER(1936);
	{ popExceptionFrames(frameRef, 1); bypasses[322] = true; goto label_3; } // goto label_80
	}
label_114:;
	{
	LINE_NUMBER(1938);
	frame[9].i = (jint(0));
	LINE_NUMBER(1939);
	{ popExceptionFrames(frameRef, 1); bypasses[323] = true; goto label_3; } // goto label_80
	}
label_113:;
	{
	LINE_NUMBER(1941);
	frame[9].i = (jint(1));
	LINE_NUMBER(1942);
	{ popExceptionFrames(frameRef, 1); bypasses[324] = true; goto label_3; } // goto label_80
	}
label_112:;
	{
	LINE_NUMBER(1944);
	frame[9].i = (jint(2));
	LINE_NUMBER(1945);
	{ popExceptionFrames(frameRef, 1); bypasses[325] = true; goto label_3; } // goto label_80
	}
label_111:;
	{
	LINE_NUMBER(1947);
	frame[9].i = (jint(3));
	LINE_NUMBER(1948);
	{ popExceptionFrames(frameRef, 1); bypasses[326] = true; goto label_3; } // goto label_80
	}
label_110:;
	{
	LINE_NUMBER(1950);
	frame[9].i = (jint(4));
	LINE_NUMBER(1951);
	{ popExceptionFrames(frameRef, 1); bypasses[327] = true; goto label_3; } // goto label_80
	}
label_109:;
	{
	LINE_NUMBER(1953);
	frame[9].i = (jint(5));
	LINE_NUMBER(1954);
	{ popExceptionFrames(frameRef, 1); bypasses[328] = true; goto label_3; } // goto label_80
	}
label_108:;
	{
	LINE_NUMBER(1956);
	frame[9].i = ((255) & ((jint)ARRAY_ACCESS(jbyte, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc))));
	LINE_NUMBER(1957);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(1)));
	LINE_NUMBER(1958);
	{ popExceptionFrames(frameRef, 1); bypasses[329] = true; goto label_3; } // goto label_80
	}
label_107:;
	{
	LINE_NUMBER(1960);
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	frame[9].i = temp0;
	LINE_NUMBER(1961);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(2)));
	LINE_NUMBER(1962);
	{ popExceptionFrames(frameRef, 1); bypasses[330] = true; goto label_3; } // goto label_80
	}
label_106:;
	{
	LINE_NUMBER(1964);
	jint temp0 = (jint)SM_rhino_Interpreter_getInt_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	frame[9].i = temp0;
	LINE_NUMBER(1965);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(4)));
	LINE_NUMBER(1966);
	{ popExceptionFrames(frameRef, 1); bypasses[331] = true; goto label_3; } // goto label_80
	}
label_105:;
	{
	LINE_NUMBER(1968);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[20].o), (jint(0))));
	LINE_NUMBER(1969);
	{ popExceptionFrames(frameRef, 1); bypasses[332] = true; goto label_3; } // goto label_80
	}
label_104:;
	{
	LINE_NUMBER(1971);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[20].o), (jint(1))));
	LINE_NUMBER(1972);
	{ popExceptionFrames(frameRef, 1); bypasses[333] = true; goto label_3; } // goto label_80
	}
label_103:;
	{
	LINE_NUMBER(1974);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[20].o), (jint(2))));
	LINE_NUMBER(1975);
	{ popExceptionFrames(frameRef, 1); bypasses[334] = true; goto label_3; } // goto label_80
	}
label_102:;
	{
	LINE_NUMBER(1977);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[20].o), (jint(3))));
	LINE_NUMBER(1978);
	{ popExceptionFrames(frameRef, 1); bypasses[335] = true; goto label_3; } // goto label_80
	}
label_101:;
	{
	LINE_NUMBER(1980);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[20].o), ((255) & ((jint)ARRAY_ACCESS(jbyte, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc))))));
	LINE_NUMBER(1981);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(1)));
	LINE_NUMBER(1982);
	{ popExceptionFrames(frameRef, 1); bypasses[336] = true; goto label_3; } // goto label_80
	}
label_100:;
	{
	LINE_NUMBER(1984);
	sp[0].o = frame[20].o;
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(1985);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(2)));
	LINE_NUMBER(1986);
	{ popExceptionFrames(frameRef, 1); bypasses[337] = true; goto label_3; } // goto label_80
	}
label_99:;
	{
	LINE_NUMBER(1988);
	sp[0].o = frame[20].o;
	jint temp0 = (jint)SM_rhino_Interpreter_getInt_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(1989);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(4)));
	LINE_NUMBER(1990);
	{ popExceptionFrames(frameRef, 1); bypasses[338] = true; goto label_3; } // goto label_80
	}
label_87:;
	{
	LINE_NUMBER(1992);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	SM_rhino_Interpreter_dumpICode_rhino_InterpreterData(ctx, sp[0].o);
	LINE_NUMBER(1993);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unknown icode : "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[22].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" @ pc : "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc) - (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_241:;
	{
	LINE_NUMBER(2001);
	if ((frame[5].i) == 0) goto label_616;
	}
	{
	LINE_NUMBER(2002);
	SM_rhino_Interpreter_addInstructionCount_rhino_Context_rhino_Interpreter$CallFrame_int(ctx, (frame[0].o), (frame[1].o), (jint(2)));
	}
label_616:;
	{
	LINE_NUMBER(2004);
	jint temp0 = (jint)SM_rhino_Interpreter_getShort_Array1_byte_int_R_int(ctx, (frame[19].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc));
	frame[23].i = temp0;
	LINE_NUMBER(2005);
	if ((frame[23].i) == 0) goto label_619;
	}
	{
	LINE_NUMBER(2007);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + ((frame[23].i) - (jint(1))));
	goto label_621;
	}
label_619:;
	{
	LINE_NUMBER(2009);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_longJumps;
	jint temp0 = (jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc;
	LINE_NUMBER(2010);
	jint temp1 = (jint)((func_rhino_UintMap_getExistingInt_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_UintMap_getExistingInt_int_R_int])(ctx, sp[1].o, temp0);
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = temp1;
	}
label_621:;
	{
	LINE_NUMBER(2012);
	if ((frame[5].i) == 0) goto label_623;
	}
	{
	LINE_NUMBER(2013);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pcPrevBranch = ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc);
	}
label_623:;
	LINE_NUMBER(2016);
	{ popExceptionFrames(frameRef, 1); bypasses[339] = true; goto label_3; } // goto label_80
label_200:;
	{
	LINE_NUMBER(2018);
	SM_rhino_Interpreter_exitFrame_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(2019);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_result;
	frame[11].o = sp[0].o;
	LINE_NUMBER(2020);
	frame[12].d = ((jdouble)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_resultDbl);
	LINE_NUMBER(2021);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_628; }
	}
	{
	LINE_NUMBER(2022);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	frame[1].o = sp[0].o;
	LINE_NUMBER(2023);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frozen) == 0) goto label_631;
	}
	{
	LINE_NUMBER(2024);
	sp[0].o = (jobject)((func_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_631:;
	{
	LINE_NUMBER(2026);
	SM_rhino_Interpreter_setCallResult_rhino_Interpreter$CallFrame_java_lang_Object_double(ctx, (frame[1].o), (frame[11].o), (frame[12].d));
	LINE_NUMBER(2028);
	frame[11].o = (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2029);
	goto label_0;
label_628:;
	LINE_NUMBER(2031);
	goto label_634;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2034);
	frame[14].o = sp[0].o;
	LINE_NUMBER(2035);
	if ((frame[2].o) == nullptr) goto label_636;
	}
	{
	LINE_NUMBER(2037);
	sp[0].o = frame[14].o;
	clinit_java_lang_System(ctx);
	sp[1].o = (jobject)SF_java_lang_System_err;
	((func_java_lang_Throwable_printStackTrace_java_io_PrintStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintStream])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2038);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_636:;
	{
	LINE_NUMBER(2040);
	frame[2].o = (frame[14].o);
	}
label_207:;
	{
	LINE_NUMBER(2046);
	if ((frame[2].o) != nullptr) goto label_639;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_639:;
	{
	LINE_NUMBER(2049);
	frame[14].i = (jint(2));
	LINE_NUMBER(2050);
	frame[15].i = (jint(1));
	LINE_NUMBER(2051);
	frame[16].i = (jint(0));
	LINE_NUMBER(2054);
	frame[18].o = (jobject(nullptr));
	LINE_NUMBER(2056);
	if ((frame[10].o) == nullptr) goto label_644;
	}
	{
	if (((jint)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[10].o)))->F_operation) != (jint(2))) goto label_644;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[10].o)))->F_value;
	if (sp[0].o != sp[1].o) goto label_644;
	}
	{
	LINE_NUMBER(2059);
	frame[17].i = (jint(1));
	goto label_647;
	}
label_644:;
	{
	LINE_NUMBER(2060);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_JavaScriptException)) == 0) goto label_648;
	}
	{
	LINE_NUMBER(2061);
	frame[17].i = (jint(2));
	goto label_647;
	}
label_648:;
	{
	LINE_NUMBER(2062);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_EcmaError)) == 0) goto label_651;
	}
	{
	LINE_NUMBER(2064);
	frame[17].i = (jint(2));
	goto label_647;
	}
label_651:;
	{
	LINE_NUMBER(2065);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_EvaluatorException)) == 0) goto label_654;
	}
	{
	LINE_NUMBER(2066);
	frame[17].i = (jint(2));
	goto label_647;
	}
label_654:;
	{
	LINE_NUMBER(2067);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_ContinuationPending)) == 0) goto label_657;
	}
	{
	LINE_NUMBER(2068);
	frame[17].i = (jint(0));
	goto label_647;
	}
label_657:;
	{
	LINE_NUMBER(2069);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_RuntimeException)) == 0) goto label_660;
	}
	{
	LINE_NUMBER(2070);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[0].o), (13));
	if (temp0 == 0) goto label_662;
	}
	INST_ICONST(2);
	goto label_663;
label_662:;
	INST_ICONST(1);
label_663:;
	INST_ISTORE(17);
	goto label_647;
label_660:;
	{
	LINE_NUMBER(2073);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Error)) == 0) goto label_665;
	}
	{
	LINE_NUMBER(2074);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[0].o), (13));
	if (temp0 == 0) goto label_667;
	}
	INST_ICONST(2);
	goto label_668;
label_667:;
	INST_ICONST(0);
label_668:;
	INST_ISTORE(17);
	goto label_647;
label_665:;
	{
	LINE_NUMBER(2077);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Interpreter$ContinuationJump)) == 0) goto label_670;
	}
	{
	LINE_NUMBER(2079);
	frame[17].i = (jint(1));
	LINE_NUMBER(2080);
	frame[18].o = (checkCast(ctx, &class_rhino_Interpreter$ContinuationJump, (frame[2].o)));
	goto label_647;
	}
label_670:;
	{
	LINE_NUMBER(2082);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[0].o), (13));
	if (temp0 == 0) goto label_673;
	}
	INST_ICONST(2);
	goto label_674;
label_673:;
	INST_ICONST(1);
label_674:;
	INST_ISTORE(17);
label_647:;
	{
	LINE_NUMBER(2087);
	if ((frame[5].i) == 0) goto label_675;
	}
label_37: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_36; }
	}
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Error))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_38; }
	}
	{
	LINE_NUMBER(2089);
	SM_rhino_Interpreter_addInstructionCount_rhino_Context_rhino_Interpreter$CallFrame_int(ctx, (frame[0].o), (frame[1].o), (100));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(2099);
	goto label_675;
label_36:;
	{
	sp -= 1;
	LINE_NUMBER(2090);
	frame[19].o = sp[0].o;
	LINE_NUMBER(2091);
	frame[2].o = (frame[19].o);
	LINE_NUMBER(2092);
	frame[17].i = (jint(1));
	LINE_NUMBER(2099);
	goto label_675;
	}
label_38:;
	{
	sp -= 1;
	LINE_NUMBER(2093);
	frame[19].o = sp[0].o;
	LINE_NUMBER(2096);
	frame[2].o = (frame[19].o);
	LINE_NUMBER(2097);
	frame[18].o = (jobject(nullptr));
	LINE_NUMBER(2098);
	frame[17].i = (jint(0));
	}
label_675:;
	{
	LINE_NUMBER(2101);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	if (sp[0].o == nullptr) goto label_682;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_RuntimeException)) == 0) goto label_682;
	}
	{
	LINE_NUMBER(2104);
	frame[19].o = (checkCast(ctx, &class_java_lang_RuntimeException, (frame[2].o)));
	}
label_43: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_42; }
	}
	{
	LINE_NUMBER(2106);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	((func_rhino_debug_DebugFrame_onExceptionThrown_rhino_Context_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_rhino_debug_DebugFrame, INDEX_rhino_debug_DebugFrame_onExceptionThrown_rhino_Context_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[19].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2113);
	goto label_682;
label_42:;
	{
	sp -= 1;
	LINE_NUMBER(2107);
	frame[20].o = sp[0].o;
	LINE_NUMBER(2110);
	frame[2].o = (frame[20].o);
	LINE_NUMBER(2111);
	frame[18].o = (jobject(nullptr));
	LINE_NUMBER(2112);
	frame[17].i = (jint(0));
	}
label_682:;
	{
	LINE_NUMBER(2117);
	if ((frame[17].i) == 0) goto label_687;
	}
	{
	LINE_NUMBER(2118);
	if ((frame[17].i) == (jint(2))) goto label_689;
	}
	INST_ICONST(1);
	goto label_690;
label_689:;
	INST_ICONST(0);
label_690:;
	{
	sp -= 1;
	frame[19].i = sp[0].i;
	LINE_NUMBER(2119);
	jint temp0 = (jint)SM_rhino_Interpreter_getExceptionHandler_rhino_Interpreter$CallFrame_boolean_R_int(ctx, (frame[1].o), (frame[19].i));
	frame[9].i = temp0;
	LINE_NUMBER(2120);
	if ((frame[9].i) < 0) goto label_687;
	}
	LINE_NUMBER(2124);
	goto label_0;
label_687:;
	{
	LINE_NUMBER(2130);
	SM_rhino_Interpreter_exitFrame_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(2132);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	frame[1].o = sp[0].o;
	LINE_NUMBER(2133);
	if ((frame[1].o) != nullptr) goto label_696;
	}
	LINE_NUMBER(2134);
	goto label_698;
label_696:;
	{
	LINE_NUMBER(2136);
	if ((frame[18].o) == nullptr) goto label_682;
	}
	{
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[18].o)))->F_branchFrame;
	if (sp[0].o != (frame[1].o)) goto label_682;
	}
	{
	LINE_NUMBER(2139);
	frame[9].i = (jint(-1));
	LINE_NUMBER(2140);
	goto label_0;
	}
label_698:;
	{
	LINE_NUMBER(2145);
	if ((frame[18].o) == nullptr) goto label_634;
	}
	{
	LINE_NUMBER(2146);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[18].o)))->F_branchFrame;
	if (sp[0].o == nullptr) goto label_702;
	}
	{
	LINE_NUMBER(2148);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_702:;
	{
	LINE_NUMBER(2150);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[18].o)))->F_capturedFrame;
	if (sp[0].o == nullptr) goto label_704;
	}
	{
	LINE_NUMBER(2152);
	frame[9].i = (jint(-1));
	LINE_NUMBER(2153);
	goto label_0;
	}
label_704:;
	{
	LINE_NUMBER(2156);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[18].o)))->F_result;
	frame[11].o = sp[0].o;
	LINE_NUMBER(2157);
	frame[12].d = ((jdouble)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[18].o)))->F_resultDbl);
	LINE_NUMBER(2158);
	frame[2].o = (jobject(nullptr));
	goto label_634;
	}
label_634:;
	{
	LINE_NUMBER(2166);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_previousInterpreterInvocations;
	if (sp[0].o == nullptr) goto label_709;
	}
	{
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_previousInterpreterInvocations;
	LINE_NUMBER(2167);
	jint temp0 = (jint)((func_rhino_ObjArray_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjArray_size_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_709;
	}
	{
	LINE_NUMBER(2168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_previousInterpreterInvocations;
	LINE_NUMBER(2169);
	sp[1].o = (jobject)((func_rhino_ObjArray_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ObjArray_pop_R_java_lang_Object])(ctx, sp[1].o);
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_lastInterpreterFrame = (jref) sp[1].o;
	goto label_713;
	}
label_709:;
	{
	LINE_NUMBER(2172);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_lastInterpreterFrame = (jref) (jobject(nullptr));
	LINE_NUMBER(2174);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_previousInterpreterInvocations = (jref) (jobject(nullptr));
	}
label_713:;
	{
	LINE_NUMBER(2177);
	if ((frame[2].o) == nullptr) goto label_715;
	}
	{
	LINE_NUMBER(2178);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_RuntimeException)) == 0) goto label_717;
	}
	{
	LINE_NUMBER(2179);
	throwException(ctx, (checkCast(ctx, &class_java_lang_RuntimeException, (frame[2].o))));	}
label_717:;
	{
	LINE_NUMBER(2182);
	throwException(ctx, (checkCast(ctx, &class_java_lang_Error, (frame[2].o))));	}
label_715:;
	{
	LINE_NUMBER(2185);
	if ((frame[11].o) == (frame[3].o)) goto label_719;
	}
	INST_ALOAD(11);
	goto label_720;
label_719:;
	{
	jdouble temp0 = frame[12].d;
	LINE_NUMBER(2187);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp0);
	sp += 1;
	}
label_720:;
	LINE_NUMBER(2185);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doInOrInstanceof_rhino_Context_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doInOrInstanceof", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2192);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(2193);
	sp[0].o = frame[5].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), (frame[4].i))));
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2194);
	INST_IINC(4, -1);
	LINE_NUMBER(2195);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(2196);
	sp[0].o = frame[6].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), (frame[4].i))));
	frame[6].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2198);
	if ((frame[1].i) != (52)) goto label_6;
	}
	{
	LINE_NUMBER(2199);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_in_java_lang_Object_java_lang_Object_rhino_Context_R_boolean(ctx, (frame[6].o), (frame[5].o), (frame[0].o));
	frame[7].i = temp0;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(2201);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_instanceOf_java_lang_Object_java_lang_Object_rhino_Context_R_boolean(ctx, (frame[6].o), (frame[5].o), (frame[0].o));
	frame[7].i = temp0;
	}
label_9:;
	{
	LINE_NUMBER(2203);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, (frame[7].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2204);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doCompare_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4) {
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doCompare", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2209);
	INST_IINC(4, -1);
	LINE_NUMBER(2210);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(2211);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(2218);
	sp[0].o = frame[5].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(2219);
	frame[8].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(2220);
	jdouble temp0 = (jdouble)SM_rhino_Interpreter_stack_double_rhino_Interpreter$CallFrame_int_R_double(ctx, (frame[0].o), (frame[4].i));
	frame[10].d = temp0;
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(2221);
	sp[0].o = frame[6].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(2222);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[5].o));
	frame[8].d = temp0;
	LINE_NUMBER(2223);
	frame[10].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), (frame[4].i)));
	}
label_8:;
	{
	LINE_NUMBER(2227);
	switch((frame[1].i)) {
		case 14: goto label_12;
		case 15: goto label_13;
		case 16: goto label_14;
		case 17: goto label_15;
		default: goto label_16;
	}
	}
label_15:;
	{
	LINE_NUMBER(2229);
	if ((doubleCompare((frame[10].d), (frame[8].d), -1)) < 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(2230);
	goto label_20;
	}
label_13:;
	{
	LINE_NUMBER(2232);
	if ((doubleCompare((frame[10].d), (frame[8].d), 1)) > 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(2233);
	goto label_20;
	}
label_14:;
	{
	LINE_NUMBER(2235);
	if ((doubleCompare((frame[10].d), (frame[8].d), -1)) <= 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(2236);
	goto label_20;
	}
label_12:;
	{
	LINE_NUMBER(2238);
	if ((doubleCompare((frame[10].d), (frame[8].d), 1)) >= 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(2239);
	goto label_20;
	}
label_16:;
	{
	LINE_NUMBER(2241);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(2244);
	switch((frame[1].i)) {
		case 14: goto label_30;
		case 15: goto label_31;
		case 16: goto label_32;
		case 17: goto label_33;
		default: goto label_34;
	}
	}
label_33:;
	{
	LINE_NUMBER(2246);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_cmp_LE_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[5].o), (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(2247);
	goto label_20;
	}
label_31:;
	{
	LINE_NUMBER(2249);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_cmp_LE_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[6].o), (frame[5].o));
	frame[7].i = temp0;
	LINE_NUMBER(2250);
	goto label_20;
	}
label_32:;
	{
	LINE_NUMBER(2252);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_cmp_LT_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[5].o), (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(2253);
	goto label_20;
	}
label_30:;
	{
	LINE_NUMBER(2255);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_cmp_LT_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[6].o), (frame[5].o));
	frame[7].i = temp0;
	LINE_NUMBER(2256);
	goto label_20;
	}
label_34:;
	{
	LINE_NUMBER(2258);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(2261);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, (frame[7].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2262);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doBitOp_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doBitOp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2267);
	jint temp0 = (jint)SM_rhino_Interpreter_stack_int32_rhino_Interpreter$CallFrame_int_R_int(ctx, (frame[0].o), ((frame[4].i) - (jint(1))));
	frame[5].i = temp0;
	LINE_NUMBER(2268);
	jint temp1 = (jint)SM_rhino_Interpreter_stack_int32_rhino_Interpreter$CallFrame_int_R_int(ctx, (frame[0].o), (frame[4].i));
	frame[6].i = temp1;
	LINE_NUMBER(2269);
	sp[0].o = frame[2].o;
	INST_IINC(4, -1);
	jint temp2 = frame[4].i;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(2270);
	switch((frame[1].i)) {
		case 9: goto label_4;
		case 10: goto label_5;
		case 11: goto label_6;
		case 12: goto label_7;
		case 13: goto label_7;
		case 14: goto label_7;
		case 15: goto label_7;
		case 16: goto label_7;
		case 17: goto label_7;
		case 18: goto label_8;
		case 19: goto label_9;
		default: goto label_7;
	}
	}
label_6:;
	{
	LINE_NUMBER(2272);
	frame[5].i = ((frame[5].i) & (frame[6].i));
	LINE_NUMBER(2273);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(2275);
	frame[5].i = ((frame[5].i) | (frame[6].i));
	LINE_NUMBER(2276);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(2278);
	frame[5].i = ((frame[5].i) ^ (frame[6].i));
	LINE_NUMBER(2279);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2281);
	frame[5].i = ((frame[5].i) << (frame[6].i));
	LINE_NUMBER(2282);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(2284);
	frame[5].i = ((frame[5].i) >> (frame[6].i));
	}
label_7:;
	{
	LINE_NUMBER(2287);
	ARRAY_ACCESS(jdouble, (frame[3].o), (frame[4].i)) = (jdouble((frame[5].i)));
	LINE_NUMBER(2288);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doDelName_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jint param5) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doDelName", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(2293);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2294);
	sp[0].o = frame[6].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[4].o), (frame[5].i))));
	frame[6].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2295);
	INST_IINC(5, -1);
	LINE_NUMBER(2296);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2297);
	sp[0].o = frame[7].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[4].o), (frame[5].i))));
	frame[7].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2298);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	sp[1].o = frame[7].o;
	sp[2].o = frame[6].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	jobject temp2 = sp[2].o;
	sp[2].o = temp1;
	jobject temp3 = sp[3].o;
	sp[3].o = temp2;
	jobject temp4 = sp[4].o;
	sp[4].o = temp3;
	sp[5].o = temp4;
	sp += 6;
	if ((frame[2].i) != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 7;
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_delete_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_boolean_R_java_lang_Object(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(2300);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doGetElem_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doGetElem", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2305);
	INST_IINC(4, -1);
	LINE_NUMBER(2306);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(2307);
	sp[0].o = frame[5].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(2308);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), (frame[4].i))));
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2311);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(2312);
	sp[0].o = frame[7].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(2313);
	sp[0].o = frame[5].o;
	sp[1].o = frame[7].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectElem_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[6].o = sp[0].o;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(2315);
	frame[8].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(2316);
	sp[0].o = frame[5].o;
	jdouble temp0 = frame[8].d;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectIndex_java_lang_Object_double_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(2318);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)) = (frame[6].o);
	LINE_NUMBER(2319);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doSetElem_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doSetElem", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2324);
	INST_IINC(4, -2);
	LINE_NUMBER(2325);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[4].i) + (jint(2)))));
	LINE_NUMBER(2326);
	sp[0].o = frame[5].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(2327);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), ((frame[4].i) + (jint(2))))));
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2329);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(2330);
	sp[0].o = frame[6].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(2331);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), (frame[4].i))));
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2334);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(2335);
	sp[0].o = frame[8].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(2336);
	sp[0].o = frame[6].o;
	sp[1].o = frame[8].o;
	sp[2].o = frame[5].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_setObjectElem_java_lang_Object_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[7].o = sp[0].o;
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(2338);
	frame[9].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(2339);
	sp[0].o = frame[6].o;
	jdouble temp0 = frame[9].d;
	sp[1].o = frame[5].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_setObjectIndex_java_lang_Object_double_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o);
	frame[7].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(2341);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)) = (frame[7].o);
	LINE_NUMBER(2342);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doElemIncDec_rhino_Context_rhino_Interpreter$CallFrame_Array1_byte_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doElemIncDec", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(2347);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2348);
	sp[0].o = frame[6].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[4].o), (frame[5].i))));
	frame[6].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2349);
	INST_IINC(5, -1);
	LINE_NUMBER(2350);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2351);
	sp[0].o = frame[7].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[4].o), (frame[5].i))));
	frame[7].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2352);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	sp[1].o = frame[7].o;
	sp[2].o = frame[6].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_elemIncrDecr_java_lang_Object_java_lang_Object_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2354);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(1)));
	LINE_NUMBER(2355);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doCallSpecial_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_byte_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jobject param5, jint param6) {
	jtype frame[24];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doCallSpecial", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(2362);
	frame[7].i = (((jint)ARRAY_ACCESS(jbyte, (frame[5].o), ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc))) & (255));
	LINE_NUMBER(2363);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc) + (jint(1))))) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(2364);
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, (frame[5].o), (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc) + (jint(2))));
	frame[9].i = temp0;
	LINE_NUMBER(2367);
	if ((frame[8].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(2369);
	frame[4].i = ((frame[4].i) - (frame[6].i));
	LINE_NUMBER(2371);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(2372);
	sp[0].o = frame[10].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(2373);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[3].o), (frame[4].i))));
	frame[10].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(2374);
	sp[0].o = (jobject)SM_rhino_Interpreter_getArgsArray_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(ctx, (frame[2].o), (frame[3].o), ((frame[4].i) + (jint(1))), (frame[6].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(2376);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	sp[1].o = frame[0].o;
	sp[2].o = frame[10].o;
	sp[3].o = frame[11].o;
	sp[4].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_newSpecial_rhino_Context_java_lang_Object_Array1_java_lang_Object_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[7].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2378);
	goto label_14;
	}
label_6:;
	{
	LINE_NUMBER(2380);
	frame[4].i = ((frame[4].i) - ((jint(1)) + (frame[6].i)));
	LINE_NUMBER(2384);
	frame[10].o = (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[4].i) + (jint(1)))))));
	LINE_NUMBER(2385);
	frame[11].o = (checkCast(ctx, &class_rhino_Callable, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)))));
	LINE_NUMBER(2386);
	sp[0].o = (jobject)SM_rhino_Interpreter_getArgsArray_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(ctx, (frame[2].o), (frame[3].o), ((frame[4].i) + (jint(2))), (frame[6].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2388);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	sp[1].o = frame[0].o;
	sp[2].o = frame[11].o;
	sp[3].o = frame[10].o;
	sp[4].o = frame[12].o;
	sp[5].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[6].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_thisObj;
	jint temp1 = frame[7].i;
	sp[7].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[7].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[7].o))->F_itsSourceFile;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_callSpecial_rhino_Context_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object_rhino_Scriptable_rhino_Scriptable_int_java_lang_String_int_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, temp1, sp[7].o, (frame[9].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(2393);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(4)));
	LINE_NUMBER(2394);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doSetConstVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6, jint param7) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doSetConstVar", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(2401);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_useActivation) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2402);
	if ((((jint)ARRAY_ACCESS(jint, (frame[6].o), (frame[7].i))) & (8)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2404);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(2405);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (-9));
	LINE_NUMBER(2406);
	ARRAY_ACCESS(jdouble, (frame[5].o), (frame[7].i)) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[3].i)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(2409);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(2410);
	sp[0].o = frame[8].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[3].i))));
	frame[8].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2411);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argNames;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)));
	LINE_NUMBER(2412);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	if ((isInstance(ctx, sp[0].o, &class_rhino_ConstProperties)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2413);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	frame[10].o = (checkCast(ctx, &class_rhino_ConstProperties, sp[0].o));
	LINE_NUMBER(2414);
	sp[0].o = frame[10].o;
	sp[1].o = frame[9].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	((func_rhino_ConstProperties_putConst_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_ConstProperties, INDEX_rhino_ConstProperties_putConst_java_lang_String_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[8].o));
	LINE_NUMBER(2415);
	goto label_3;
	}
label_10:;
	{
	LINE_NUMBER(2416);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2418);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doSetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6, jint param7) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doSetVar", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(2425);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_useActivation) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2426);
	if ((((jint)ARRAY_ACCESS(jint, (frame[6].o), (frame[7].i))) & (jint(1))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2427);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(2428);
	ARRAY_ACCESS(jdouble, (frame[5].o), (frame[7].i)) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[3].i)));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(2430);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.var.redecl"_j));
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_argNames;
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[7].i))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2434);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(2435);
	sp[0].o = frame[8].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[3].i))));
	frame[8].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2436);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argNames;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)));
	LINE_NUMBER(2437);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[1].o = frame[9].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[8].o));
	}
label_6:;
	{
	LINE_NUMBER(2439);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doGetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jint param6) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doGetVar", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(2446);
	INST_IINC(3, 1);
	LINE_NUMBER(2447);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_useActivation) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2448);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(2449);
	ARRAY_ACCESS(jdouble, (frame[2].o), (frame[3].i)) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[5].o), (frame[6].i)));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(2451);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argNames;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(2452);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[2].o = frame[7].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[1].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(2454);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doVarIncDec_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jobject param5, jobject param6, jobject param7, jint param8) {
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doVarIncDec", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(2463);
	INST_IINC(4, 1);
	LINE_NUMBER(2464);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	frame[9].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc)));
	LINE_NUMBER(2465);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_useActivation) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2466);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i)));
	LINE_NUMBER(2468);
	sp[0].o = frame[10].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(2469);
	frame[11].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[6].o), (frame[8].i)));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(2471);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[10].o));
	frame[11].d = temp0;
	}
label_9:;
	{
	LINE_NUMBER(2473);
	if (((frame[9].i) & (jint(1))) != 0) goto label_10;
	}
	{
	jdouble temp0 = (frame[11].d) + (jdouble(1));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	jdouble temp0 = (frame[11].d) - (jdouble(1));
	sp[0].d = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[13].d = sp[0].d;
	LINE_NUMBER(2475);
	if (((frame[9].i) & (jint(2))) == 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(2476);
	if ((((jint)ARRAY_ACCESS(jint, (frame[7].o), (frame[8].i))) & (jint(1))) != 0) goto label_16;
	}
	{
	LINE_NUMBER(2477);
	sp[0].o = frame[10].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o == sp[1].o) goto label_18;
	}
	{
	LINE_NUMBER(2478);
	sp[0].o = frame[5].o;
	jint temp0 = frame[8].i;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(2480);
	ARRAY_ACCESS(jdouble, (frame[6].o), (frame[8].i)) = (frame[13].d);
	LINE_NUMBER(2481);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2482);
	sp[0].o = frame[3].o;
	jint temp1 = frame[4].i;
	sp[1].i = temp1;
	sp += 2;
	if ((frame[15].i) == 0) goto label_22;
	}
	INST_DLOAD(11);
	goto label_23;
label_22:;
	INST_DLOAD(13);
label_23:;
	INST_DASTORE();
	goto label_24;
label_16:;
	{
	LINE_NUMBER(2484);
	if ((frame[15].i) == 0) goto label_25;
	}
	{
	sp[0].o = frame[10].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o == sp[1].o) goto label_25;
	}
	{
	LINE_NUMBER(2485);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)) = (frame[10].o);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(2487);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2488);
	sp[0].o = frame[3].o;
	jint temp1 = frame[4].i;
	sp[1].i = temp1;
	sp += 2;
	if ((frame[15].i) == 0) goto label_28;
	}
	INST_DLOAD(11);
	goto label_29;
label_28:;
	INST_DLOAD(13);
label_29:;
	INST_DASTORE();
label_24:;
	LINE_NUMBER(2491);
	goto label_30;
label_3:;
	{
	LINE_NUMBER(2492);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argNames;
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)));
	LINE_NUMBER(2493);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_nameIncrDecr_rhino_Scriptable_java_lang_String_rhino_Context_int_R_java_lang_Object(ctx, sp[1].o, (frame[10].o), (frame[0].o), (frame[9].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_30:;
	{
	LINE_NUMBER(2496);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(1)));
	LINE_NUMBER(2497);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_initFrameForNoSuchMethod_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_int_rhino_Scriptable_rhino_Scriptable_rhino_ScriptRuntime$NoSuchMethodShim_rhino_InterpretedFunction_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jint param5, jint param6, jobject param7, jobject param8, jobject param9, jobject param10) {
	jtype frame[25];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:initFrameForNoSuchMethod", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].o = param7;
	frame[8].o = param8;
	frame[9].o = param9;
	frame[10].o = param10;
	{
	LINE_NUMBER(2511);
	frame[12].i = ((frame[5].i) + (jint(2)));
	LINE_NUMBER(2512);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(2513);
	frame[14].i = (jint(0));
	}
label_3:;
	{
	if ((frame[14].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(2514);
	frame[15].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[12].i)));
	LINE_NUMBER(2515);
	sp[0].o = frame[15].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(2516);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[4].o), (frame[12].i))));
	frame[15].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2518);
	ARRAY_ACCESS(jobject, (frame[13].o), (frame[14].i)) = (frame[15].o);
	LINE_NUMBER(2513);
	INST_IINC(14, 1);
	INST_IINC(12, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2520);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(2521);
	sp[0].o = frame[11].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((rhino_ScriptRuntime$NoSuchMethodShim *) NULL_CHECK((frame[9].o)))->F_methodName;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2522);
	sp[0].o = frame[11].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[8].o), (frame[13].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(2525);
	frame[14].o = (frame[1].o);
	LINE_NUMBER(2526);
	if ((frame[6].i) != (-55)) goto label_14;
	}
	{
	LINE_NUMBER(2527);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	frame[14].o = sp[0].o;
	LINE_NUMBER(2528);
	SM_rhino_Interpreter_exitFrame_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	}
label_14:;
	{
	LINE_NUMBER(2532);
	sp[0].o = (jobject)SM_rhino_Interpreter_initFrame_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int_rhino_InterpretedFunction_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(ctx, (frame[0].o), (frame[8].o), (frame[7].o), (frame[11].o), (jobject(nullptr)), (jint(0)), (jint(2)), (frame[10].o), (frame[14].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(2534);
	if ((frame[6].i) == (-55)) goto label_18;
	}
	{
	LINE_NUMBER(2535);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedStackTop = (frame[5].i);
	LINE_NUMBER(2536);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedCallOp = (frame[6].i);
	}
label_18:;
	{
	LINE_NUMBER(2538);
	popStackFrame(ctx);
	return (frame[15].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Interpreter_doEquals_Array1_java_lang_Object_Array1_double_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doEquals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2543);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(2544);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(2545);
	sp[0].o = frame[3].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(2546);
	sp[0].o = frame[4].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(2547);
	if ((doubleCompare(((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i))), ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), ((frame[2].i) + (jint(1))))), -1)) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(2549);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eqNumber_double_java_lang_Object_R_boolean(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), ((frame[2].i) + (jint(1))))), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(2551);
	sp[0].o = frame[4].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(2552);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eqNumber_double_java_lang_Object_R_boolean(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i))), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(2554);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[4].o), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Interpreter_doShallowEquals_Array1_java_lang_Object_Array1_double_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doShallowEquals", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2559);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(2560);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(2561);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2563);
	if ((frame[3].o) != (frame[5].o)) goto label_4;
	}
	{
	LINE_NUMBER(2564);
	frame[6].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(2565);
	if ((frame[4].o) != (frame[5].o)) goto label_7;
	}
	{
	LINE_NUMBER(2566);
	frame[8].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i)));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(2567);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Number)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2568);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[4].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[4].o))));
	frame[8].d = temp0;
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(2570);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(2572);
	if ((frame[4].o) != (frame[5].o)) goto label_14;
	}
	{
	LINE_NUMBER(2573);
	frame[8].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(2574);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Number)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(2575);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[3].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[3].o))));
	frame[6].d = temp0;
	goto label_10;
	}
label_17:;
	{
	LINE_NUMBER(2577);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(2580);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_shallowEq_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[4].o), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(2582);
	if ((doubleCompare((frame[8].d), (frame[6].d), -1)) != 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_processThrowable_rhino_Context_java_lang_Object_rhino_Interpreter$CallFrame_int_boolean_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jbool param4) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:processThrowable", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2591);
	if ((frame[3].i) < 0) goto label_1;
	}
	{
	LINE_NUMBER(2595);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_frozen) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2597);
	sp[0].o = (jobject)((func_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame])(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2600);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsExceptionTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2602);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_pc = ((jint)ARRAY_ACCESS(jint, (frame[5].o), ((frame[3].i) + (jint(2)))));
	LINE_NUMBER(2603);
	if ((frame[4].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2604);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_pcPrevBranch = ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_pc);
	}
label_7:;
	{
	LINE_NUMBER(2607);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_savedStackTop = ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_emptyStackTop);
	LINE_NUMBER(2608);
	frame[6].i = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_localShift) + ((jint)ARRAY_ACCESS(jint, (frame[5].o), ((frame[3].i) + (jint(5))))));
	LINE_NUMBER(2611);
	frame[7].i = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_localShift) + ((jint)ARRAY_ACCESS(jint, (frame[5].o), ((frame[3].i) + (jint(4))))));
	LINE_NUMBER(2614);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_stack;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_scope = (jref) (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))));
	LINE_NUMBER(2615);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_stack;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = (frame[1].o);
	LINE_NUMBER(2617);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(2618);
	goto label_15;
	}
label_1:;
	{
	LINE_NUMBER(2620);
	frame[5].o = (checkCast(ctx, &class_rhino_Interpreter$ContinuationJump, (frame[1].o)));
	LINE_NUMBER(2623);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(2625);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[5].o)))->F_branchFrame;
	if (sp[0].o == (frame[2].o)) goto label_18;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_18:;
	{
	LINE_NUMBER(2630);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[5].o)))->F_capturedFrame;
	if (sp[0].o != nullptr) goto label_19;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_19:;
	{
	LINE_NUMBER(2634);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[5].o)))->F_capturedFrame;
	frame[6].i = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_frameIndex) + (jint(1)));
	LINE_NUMBER(2635);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[5].o)))->F_branchFrame;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(2636);
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[5].o)))->F_branchFrame;
	frame[6].i = (temp0 - ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_frameIndex));
	}
label_21:;
	{
	LINE_NUMBER(2639);
	frame[7].i = (jint(0));
	LINE_NUMBER(2640);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(2642);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[5].o)))->F_capturedFrame;
	frame[9].o = sp[0].o;
	LINE_NUMBER(2643);
	frame[10].i = (jint(0));
	}
label_26:;
	{
	if ((frame[10].i) == (frame[6].i)) goto label_27;
	}
	{
	LINE_NUMBER(2644);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[9].o)))->F_frozen) != 0) goto label_29;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_29:;
	{
	LINE_NUMBER(2645);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[9].o)))->F_useActivation) == 0) goto label_30;
	}
	{
	LINE_NUMBER(2646);
	if ((frame[8].o) != nullptr) goto label_32;
	}
	{
	LINE_NUMBER(2650);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_Interpreter$CallFrame, ((frame[6].i) - (frame[10].i)));
	frame[8].o = sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(2653);
	ARRAY_ACCESS(jobject, (frame[8].o), (frame[7].i)) = (frame[9].o);
	LINE_NUMBER(2654);
	INST_IINC(7, 1);
	}
label_30:;
	{
	LINE_NUMBER(2656);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[9].o)))->F_parentFrame;
	frame[9].o = sp[0].o;
	LINE_NUMBER(2643);
	INST_IINC(10, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(2659);
	if ((frame[7].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(2663);
	INST_IINC(7, -1);
	LINE_NUMBER(2664);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[7].i)));
	LINE_NUMBER(2665);
	sp[0].o = frame[0].o;
	sp[1].o = frame[9].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	SM_rhino_Interpreter_enterFrame_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	goto label_27;
	}
label_36:;
	{
	LINE_NUMBER(2672);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[5].o)))->F_capturedFrame;
	sp[0].o = (jobject)((func_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Interpreter$CallFrame_cloneFrozen_R_rhino_Interpreter$CallFrame])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2673);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[5].o)))->F_result;
	SM_rhino_Interpreter_setCallResult_rhino_Interpreter$CallFrame_java_lang_Object_double(ctx, sp[0].o, sp[1].o, ((jdouble)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[5].o)))->F_resultDbl));
	}
label_15:;
	{
	LINE_NUMBER(2676);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[2].o)))->F_throwable = (jref) (frame[1].o);
	LINE_NUMBER(2677);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_freezeGenerator_rhino_Context_rhino_Interpreter$CallFrame_int_rhino_Interpreter$GeneratorState_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jbool param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:freezeGenerator", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2684);
	if (((jint)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[3].o)))->F_operation) != (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(2686);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.yield.closing"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2689);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_frozen = (jint(1));
	LINE_NUMBER(2690);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_stack;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_result = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(2691);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_sDbl;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_resultDbl = ((jdouble)ARRAY_ACCESS(jdouble, sp[1].o, (frame[2].i)));
	LINE_NUMBER(2692);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedStackTop = (frame[2].i);
	LINE_NUMBER(2693);
	sp[0].o = frame[1].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) - (jint(1)));
	LINE_NUMBER(2694);
	SM_rhino_ScriptRuntime_exitActivationFunction_rhino_Context(ctx, (frame[0].o));
	LINE_NUMBER(2695);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_result;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_result;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	jdouble temp0 = (jdouble)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_resultDbl;
	LINE_NUMBER(2697);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp0);
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2698);
	if ((frame[4].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(2699);
	clinit_rhino_ES6Generator$YieldStarResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ES6Generator$YieldStarResult);
	init_rhino_ES6Generator$YieldStarResult_java_lang_Object(ctx, sp[0].o, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(2701);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_thawGenerator_rhino_Interpreter$CallFrame_int_rhino_Interpreter$GeneratorState_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:thawGenerator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2707);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_frozen = (jint(0));
	LINE_NUMBER(2708);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsICode;
	jint temp0 = (jint)SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int(ctx, sp[0].o, ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_pc));
	frame[4].i = temp0;
	LINE_NUMBER(2709);
	sp[0].o = frame[0].o;
	((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_pc) + (jint(2)));
	LINE_NUMBER(2710);
	if (((jint)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[2].o)))->F_operation) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(2713);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	sp[1].o = (jobject)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[2].o)))->F_value;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[2].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[2].o))->F_itsSourceFile;
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2717);
	if (((jint)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[2].o)))->F_operation) != (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(2718);
	sp[0].o = (jobject)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[2].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2720);
	if (((jint)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[2].o)))->F_operation) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2721);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(2722);
	if ((frame[3].i) == (73)) goto label_10;
	}
	{
	if ((frame[3].i) != (-66)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(2723);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((rhino_Interpreter$GeneratorState *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(2725);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_initFrameForApplyOrCall_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_int_rhino_Scriptable_rhino_IdFunctionObject_rhino_InterpretedFunction_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jint param5, jint param6, jobject param7, jobject param8, jobject param9) {
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:initFrameForApplyOrCall", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].o = param7;
	frame[8].o = param8;
	frame[9].o = param9;
	{
	LINE_NUMBER(2733);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2734);
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((frame[5].i) + (jint(2)))));
	LINE_NUMBER(2735);
	sp[0].o = frame[11].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(2736);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[4].o), ((frame[5].i) + (jint(2))))));
	frame[11].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2737);
	sp[0].o = frame[0].o;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(2738);
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(2739);
	frame[10].o = (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(2741);
	if ((frame[10].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2743);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[10].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2745);
	if ((frame[6].i) != (-55)) goto label_10;
	}
	{
	LINE_NUMBER(2746);
	SM_rhino_Interpreter_exitFrame_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(2747);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	frame[1].o = sp[0].o;
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(2749);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedStackTop = (frame[5].i);
	LINE_NUMBER(2750);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_savedCallOp = (frame[6].i);
	}
label_13:;
	{
	LINE_NUMBER(2753);
	jint temp0 = (jint)SM_rhino_BaseFunction_isApply_rhino_IdFunctionObject_R_boolean(ctx, (frame[8].o));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(2754);
	if ((frame[2].i) >= (jint(2))) goto label_17;
	}
	clinit_rhino_ScriptRuntime(ctx);
	(sp++)->o = SF_rhino_ScriptRuntime_emptyArgs;
	goto label_18;
label_17:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((frame[5].i) + (jint(3))));
	LINE_NUMBER(2755);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getApplyArguments_rhino_Context_java_lang_Object_R_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_18:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(2756);
	sp[0].o = (jobject)SM_rhino_Interpreter_initFrame_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int_rhino_InterpretedFunction_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(ctx, (frame[0].o), (frame[7].o), (frame[10].o), (frame[12].o), (jobject(nullptr)), (jint(0)), (((jarray) nullCheck(ctx, (frame[12].o)))->length), (frame[9].o), (frame[1].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(2758);
	goto label_22;
	}
label_15:;
	{
	LINE_NUMBER(2760);
	frame[12].i = (jint(1));
	}
label_23:;
	{
	if ((frame[12].i) >= (frame[2].i)) goto label_24;
	}
	{
	LINE_NUMBER(2761);
	ARRAY_ACCESS(jobject, (frame[3].o), (((frame[5].i) + (jint(1))) + (frame[12].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (((frame[5].i) + (jint(2))) + (frame[12].i))));
	LINE_NUMBER(2762);
	ARRAY_ACCESS(jdouble, (frame[4].o), (((frame[5].i) + (jint(1))) + (frame[12].i))) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[4].o), (((frame[5].i) + (jint(2))) + (frame[12].i))));
	LINE_NUMBER(2760);
	INST_IINC(12, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(2764);
	if ((frame[2].i) >= (jint(2))) goto label_28;
	}
	INST_ICONST(0);
	goto label_29;
label_28:;
	{
	jint temp0 = (frame[2].i) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_29:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(2765);
	sp[0].o = (jobject)SM_rhino_Interpreter_initFrame_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int_rhino_InterpretedFunction_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(ctx, (frame[0].o), (frame[7].o), (frame[10].o), (frame[3].o), (frame[4].o), ((frame[5].i) + (jint(2))), (frame[12].i), (frame[9].o), (frame[1].o));
	frame[11].o = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(2769);
	popStackFrame(ctx);
	return (frame[11].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_initFrame_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int_rhino_InterpretedFunction_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5, jint param6, jobject param7, jobject param8) {
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:initFrame", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].o = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(2778);
	clinit_rhino_Interpreter$CallFrame(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Interpreter$CallFrame);
	init_rhino_Interpreter$CallFrame_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_rhino_Interpreter$CallFrame(ctx, sp[0].o, (frame[0].o), (frame[2].o), (frame[7].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2779);
	((func_rhino_Interpreter$CallFrame_initializeArgs_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_Interpreter$CallFrame_initializeArgs_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int])(ctx, (frame[9].o), (frame[0].o), (frame[1].o), (frame[3].o), (frame[4].o), (frame[5].i), (frame[6].i));
	LINE_NUMBER(2780);
	SM_rhino_Interpreter_enterFrame_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_boolean(ctx, (frame[0].o), (frame[9].o), (frame[3].o), (jint(0)));
	LINE_NUMBER(2781);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_Interpreter_enterFrame_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:enterFrame", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2786);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	frame[4].i = ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation);
	LINE_NUMBER(2787);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(2788);
	if ((frame[4].i) != 0) goto label_5;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_6;
label_5:;
	{
	LINE_NUMBER(2789);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_scope;
	frame[6].o = sp[0].o;
	LINE_NUMBER(2790);
	if ((frame[6].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2791);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(2792);
	if ((frame[3].i) == 0) goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(2802);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_NativeWith)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2803);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[6].o)))(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2804);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_parentFrame;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_scope;
	if (sp[0].o != (frame[6].o)) goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(2809);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	LINE_NUMBER(2810);
	goto label_10;
	}
label_10:;
	{
	LINE_NUMBER(2818);
	if ((frame[5].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(2819);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	sp[1].o = frame[0].o;
	sp[2].o = frame[6].o;
	sp[3].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_thisObj;
	((func_rhino_debug_DebugFrame_onEnter_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_debug_DebugFrame, INDEX_rhino_debug_DebugFrame_onEnter_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	}
label_16:;
	{
	LINE_NUMBER(2824);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(2825);
	SM_rhino_ScriptRuntime_enterActivationFunction_rhino_Context_rhino_Scriptable(ctx, (frame[0].o), (frame[6].o));
	}
label_6:;
	LINE_NUMBER(2828);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_Interpreter_exitFrame_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:exitFrame", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2832);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_idata;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsNeedsActivation) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2833);
	SM_rhino_ScriptRuntime_exitActivationFunction_rhino_Context(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(2836);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	if (sp[0].o == nullptr) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2838);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Throwable)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2839);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	((func_rhino_debug_DebugFrame_onExit_rhino_Context_boolean_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_debug_DebugFrame, INDEX_rhino_debug_DebugFrame_onExit_rhino_Context_boolean_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o), (jint(1)), (frame[2].o));
	goto label_1;
	}
label_8:;
	{
	LINE_NUMBER(2842);
	frame[4].o = (checkCast(ctx, &class_rhino_Interpreter$ContinuationJump, (frame[2].o)));
	LINE_NUMBER(2843);
	if ((frame[4].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2844);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_result;
	frame[3].o = sp[0].o;
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(2846);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[4].o)))->F_result;
	frame[3].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(2848);
	sp[0].o = frame[3].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(2850);
	if ((frame[4].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(2851);
	frame[5].d = ((jdouble)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_resultDbl);
	goto label_20;
	}
label_17:;
	{
	LINE_NUMBER(2853);
	frame[5].d = ((jdouble)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[4].o)))->F_resultDbl);
	}
label_20:;
	{
	LINE_NUMBER(2855);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[5].d));
	frame[3].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(2857);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_debuggerFrame;
	((func_rhino_debug_DebugFrame_onExit_rhino_Context_boolean_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_debug_DebugFrame, INDEX_rhino_debug_DebugFrame_onExit_rhino_Context_boolean_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o), (jint(0)), (frame[3].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(2863);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2859);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2860);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_err;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RHINO USAGE WARNING: onExit terminated with exception"_j))));
	LINE_NUMBER(2862);
	sp[0].o = frame[3].o;
	clinit_java_lang_System(ctx);
	sp[1].o = (jobject)SF_java_lang_System_err;
	((func_java_lang_Throwable_printStackTrace_java_io_PrintStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintStream])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(2865);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_Interpreter_setCallResult_rhino_Interpreter$CallFrame_java_lang_Object_double(jcontext ctx, jobject param0, jobject param1, jdouble param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:setCallResult", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].d = param2;
	{
	LINE_NUMBER(2870);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_savedCallOp) != (38)) goto label_1;
	}
	{
	LINE_NUMBER(2871);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stack;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_savedStackTop)) = (frame[1].o);
	LINE_NUMBER(2872);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_sDbl;
	ARRAY_ACCESS(jdouble, sp[0].o, ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_savedStackTop)) = (frame[2].d);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(2873);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_savedCallOp) != (30)) goto label_5;
	}
	{
	LINE_NUMBER(2877);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2878);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stack;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_savedStackTop)) = (frame[1].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2881);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_4:;
	{
	LINE_NUMBER(2883);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_savedCallOp = (jint(0));
	LINE_NUMBER(2884);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_captureContinuation_rhino_Context_R_rhino_NativeContinuation(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:captureContinuation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2887);
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_lastInterpreterFrame;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_lastInterpreterFrame;
	if ((isInstance(ctx, sp[0].o, &class_rhino_Interpreter$CallFrame)) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2889);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Interpreter frames not found"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2891);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_lastInterpreterFrame;
	sp[0].o = (jobject)SM_rhino_Interpreter_captureContinuation_rhino_Context_rhino_Interpreter$CallFrame_boolean_R_rhino_NativeContinuation(ctx, sp[0].o, (checkCast(ctx, &class_rhino_Interpreter$CallFrame, sp[1].o)), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_captureContinuation_rhino_Context_rhino_Interpreter$CallFrame_boolean_R_rhino_NativeContinuation(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:captureContinuation", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2896);
	clinit_rhino_NativeContinuation(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeContinuation);
	init_rhino_NativeContinuation(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2897);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	LINE_NUMBER(2898);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getTopCallScope_rhino_Context_R_rhino_Scriptable(ctx, sp[1].o);
	LINE_NUMBER(2897);
	SM_rhino_ScriptRuntime_setObjectProtoAndParent_rhino_ScriptableObject_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2901);
	frame[4].o = (frame[1].o);
	LINE_NUMBER(2902);
	frame[5].o = (frame[1].o);
	}
label_6:;
	{
	LINE_NUMBER(2903);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_frozen) != 0) goto label_7;
	}
	{
	LINE_NUMBER(2904);
	((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_frozen = (jint(1));
	LINE_NUMBER(2906);
	frame[6].i = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_savedStackTop) + (jint(1)));
	}
label_10:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_stack;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(2908);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_stack;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)) = (jobject(nullptr));
	LINE_NUMBER(2909);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_stackAttributes;
	ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)) = (jint(0));
	LINE_NUMBER(2906);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(2911);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_savedCallOp) != (38)) goto label_15;
	}
	{
	LINE_NUMBER(2913);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_stack;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_savedStackTop)) = (jobject(nullptr));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(2915);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_savedCallOp) == (30)) goto label_17;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_17:;
	{
	LINE_NUMBER(2920);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2921);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_parentFrame;
	frame[4].o = sp[0].o;
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(2924);
	if ((frame[2].i) == 0) goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(2925);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[5].o)))->F_parentFrame;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(2926);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[5].o)))->F_parentFrame;
	frame[5].o = sp[0].o;
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(2928);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[5].o)))->F_isContinuationsTopFrame) != 0) goto label_19;
	}
	{
	LINE_NUMBER(2929);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot capture continuation from JavaScript code not called directly by executeScriptWithContinuations or callFunctionWithContinuations"_j))));
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(2936);
	((func_rhino_NativeContinuation_initImplementation_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeContinuation_initImplementation_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(2937);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_stack_int32_rhino_Interpreter$CallFrame_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:stack_int32", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2941);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stack;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(2942);
	sp[0].o = frame[2].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(2943);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_sDbl;
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_double_R_int(ctx, ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[1].i))));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(2945);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_Interpreter_stack_double_rhino_Interpreter$CallFrame_int_R_double(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:stack_double", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2949);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stack;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(2950);
	sp[0].o = frame[2].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(2951);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(2953);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_sDbl;
	popStackFrame(ctx);
	return ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Interpreter_stack_boolean_rhino_Interpreter$CallFrame_int_R_boolean(jcontext ctx, jobject param0, jint param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:stack_boolean", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2957);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_stack;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(2958);
	sp[0].o = frame[2].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(2959);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(2960);
	sp[0].o = frame[2].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_FALSE;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(2961);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(2962);
	sp[0].o = frame[2].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(2963);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[0].o)))->F_sDbl;
	frame[3].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[1].i)));
	LINE_NUMBER(2964);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[3].d));
	if (temp0 != 0) goto label_9;
	}
	{
	if ((doubleCompare((frame[3].d), (jdouble(0)), -1)) == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(2965);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(2966);
	popStackFrame(ctx);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(2967);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Number)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(2968);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[2].o))));
	frame[3].d = temp0;
	LINE_NUMBER(2969);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[3].d));
	if (temp1 != 0) goto label_16;
	}
	{
	if ((doubleCompare((frame[3].d), (jdouble(0)), -1)) == 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(2970);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Boolean)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(2971);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_18:;
	{
	LINE_NUMBER(2973);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_rhino_Interpreter_doAdd_Array1_java_lang_Object_Array1_double_int_rhino_Context(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doAdd", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2979);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(2980);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(2983);
	sp[0].o = frame[4].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(2984);
	frame[6].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(2985);
	sp[0].o = frame[5].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(2986);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = (((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, temp0)) + (frame[6].d));
	LINE_NUMBER(2987);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(2989);
	frame[8].i = (jint(1));
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(2991);
	sp[0].o = frame[5].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(2992);
	frame[6].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(2993);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2994);
	frame[8].i = (jint(0));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(2997);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Scriptable)) != 0) goto label_16;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Scriptable)) == 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(2998);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_add_java_lang_Object_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[5].o), (frame[4].o), (frame[3].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(2999);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_CharSequence)) != 0) goto label_19;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_CharSequence)) == 0) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(3000);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[5].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(3001);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[4].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(3002);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	clinit_rhino_ConsString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ConsString);
	init_rhino_ConsString_java_lang_CharSequence_java_lang_CharSequence(ctx, sp[1].o, (frame[9].o), (frame[10].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3003);
	goto label_18;
	}
label_20:;
	{
	LINE_NUMBER(3004);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Number)) == 0) goto label_24;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_Number, (frame[5].o));
	LINE_NUMBER(3005);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, sp[0].o);
	sp[0].d = temp0;
	sp += 1;
	goto label_26;
	}
label_24:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->d = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, sp[0].o);
	sp++;
label_26:;
	{
	sp -= 1;
	frame[9].d = sp[0].d;
	LINE_NUMBER(3006);
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Number)) == 0) goto label_28;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_Number, (frame[4].o));
	LINE_NUMBER(3007);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, sp[0].o);
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_28:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->d = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, sp[0].o);
	sp++;
label_30:;
	{
	sp -= 1;
	frame[11].d = sp[0].d;
	LINE_NUMBER(3008);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3009);
	ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i)) = ((frame[9].d) + (frame[11].d));
	}
label_18:;
	LINE_NUMBER(3011);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(3015);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Scriptable)) == 0) goto label_33;
	}
	{
	LINE_NUMBER(3016);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[6].d));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3017);
	if ((frame[8].i) != 0) goto label_36;
	}
	{
	LINE_NUMBER(3018);
	frame[9].o = (frame[5].o);
	LINE_NUMBER(3019);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(3020);
	frame[4].o = (frame[9].o);
	}
label_36:;
	{
	LINE_NUMBER(3022);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_add_java_lang_Object_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, (frame[5].o), (frame[4].o), (frame[3].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_40;
	}
label_33:;
	{
	LINE_NUMBER(3023);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_CharSequence)) == 0) goto label_41;
	}
	{
	LINE_NUMBER(3024);
	frame[9].o = (checkCast(ctx, &class_java_lang_CharSequence, (frame[5].o)));
	LINE_NUMBER(3025);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (frame[6].d));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(3026);
	if ((frame[8].i) == 0) goto label_45;
	}
	{
	LINE_NUMBER(3027);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	clinit_rhino_ConsString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ConsString);
	init_rhino_ConsString_java_lang_CharSequence_java_lang_CharSequence(ctx, sp[1].o, (frame[9].o), (frame[10].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_47;
	}
label_45:;
	{
	LINE_NUMBER(3029);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	clinit_rhino_ConsString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ConsString);
	init_rhino_ConsString_java_lang_CharSequence_java_lang_CharSequence(ctx, sp[1].o, (frame[10].o), (frame[9].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_47:;
	LINE_NUMBER(3031);
	goto label_40;
label_41:;
	{
	LINE_NUMBER(3032);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_Number)) == 0) goto label_48;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_Number, (frame[5].o));
	LINE_NUMBER(3033);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, sp[0].o);
	sp[0].d = temp0;
	sp += 1;
	goto label_50;
	}
label_48:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->d = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, sp[0].o);
	sp++;
label_50:;
	{
	sp -= 1;
	frame[9].d = sp[0].d;
	LINE_NUMBER(3034);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3035);
	ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i)) = ((frame[9].d) + (frame[6].d));
	}
label_40:;
	LINE_NUMBER(3037);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_rhino_Interpreter_doArithmetic_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:doArithmetic", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3041);
	jdouble temp0 = (jdouble)SM_rhino_Interpreter_stack_double_rhino_Interpreter$CallFrame_int_R_double(ctx, (frame[0].o), (frame[4].i));
	frame[5].d = temp0;
	LINE_NUMBER(3042);
	INST_IINC(4, -1);
	LINE_NUMBER(3043);
	jdouble temp1 = (jdouble)SM_rhino_Interpreter_stack_double_rhino_Interpreter$CallFrame_int_R_double(ctx, (frame[0].o), (frame[4].i));
	frame[7].d = temp1;
	LINE_NUMBER(3044);
	sp[0].o = frame[2].o;
	jint temp2 = frame[4].i;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(3045);
	switch((frame[1].i)) {
		case 22: goto label_5;
		case 23: goto label_6;
		case 24: goto label_7;
		case 25: goto label_8;
		default: goto label_9;
	}
	}
label_5:;
	{
	LINE_NUMBER(3047);
	frame[7].d = ((frame[7].d) - (frame[5].d));
	LINE_NUMBER(3048);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(3050);
	frame[7].d = ((frame[7].d) * (frame[5].d));
	LINE_NUMBER(3051);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(3053);
	frame[7].d = ((frame[7].d) / (frame[5].d));
	LINE_NUMBER(3054);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(3056);
	frame[7].d = (fmod((frame[7].d), (frame[5].d)));
	}
label_9:;
	{
	LINE_NUMBER(3059);
	ARRAY_ACCESS(jdouble, (frame[3].o), (frame[4].i)) = (frame[7].d);
	LINE_NUMBER(3060);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_getArgsArray_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:getArgsArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3065);
	if ((frame[3].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3066);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3068);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3069);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) == (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(3070);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(3071);
	sp[0].o = frame[6].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(3072);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i))));
	frame[6].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(3074);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)) = (frame[6].o);
	LINE_NUMBER(3069);
	INST_IINC(5, 1);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(3076);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_Interpreter_addInstructionCount_rhino_Context_rhino_Interpreter$CallFrame_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:addInstructionCount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3081);
	sp[0].o = frame[0].o;
	((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount = (((jint)((rhino_Context *) NULL_CHECK(sp[0].o))->F_instructionCount) + ((((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pc) - ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[1].o)))->F_pcPrevBranch)) + (frame[2].i)));
	LINE_NUMBER(3082);
	if (((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionCount) <= ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionThreshold)) goto label_2;
	}
	{
	LINE_NUMBER(3083);
	((func_rhino_Context_observeInstructionCount_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_observeInstructionCount_int])(ctx, (frame[0].o), ((jint)((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionCount));
	LINE_NUMBER(3084);
	((rhino_Context *) NULL_CHECK((frame[0].o)))->F_instructionCount = (jint(0));
	}
label_2:;
	LINE_NUMBER(3086);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_Interpreter_access$000_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:access$000", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)SM_rhino_Interpreter_getArgsArray_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_Interpreter_access$100_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:access$100", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(12);
	SM_rhino_Interpreter_initFunction_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Interpreter_access$200_rhino_InterpreterData_rhino_InterpreterData_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter:access$200", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(12);
	jint temp0 = (jint)SM_rhino_Interpreter_compareIdata_rhino_InterpreterData_rhino_InterpreterData_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_rhino_Interpreter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_Icode(ctx);
	SF_rhino_Interpreter_EXCEPTION_TRY_START_SLOT = jint(0);
	SF_rhino_Interpreter_EXCEPTION_TRY_END_SLOT = jint(1);
	SF_rhino_Interpreter_EXCEPTION_HANDLER_SLOT = jint(2);
	SF_rhino_Interpreter_EXCEPTION_TYPE_SLOT = jint(3);
	SF_rhino_Interpreter_EXCEPTION_LOCAL_SLOT = jint(4);
	SF_rhino_Interpreter_EXCEPTION_SCOPE_SLOT = jint(5);
	SF_rhino_Interpreter_EXCEPTION_SLOT_SIZE = jint(6);
	FrameInfo frameInfo { "rhino/Interpreter:<clinit>", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_rhino_Interpreter(ctx);
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_Interpreter[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_Interpreter_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object,
	(void *) M_rhino_Interpreter_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function,
	(void *) M_rhino_Interpreter_createScriptObject_java_lang_Object_R_rhino_Script,
	(void *) M_rhino_Interpreter_captureStackInfo_rhino_RhinoException,
	(void *) M_rhino_Interpreter_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String,
	(void *) M_rhino_Interpreter_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String,
	(void *) M_rhino_Interpreter_getScriptStack_rhino_RhinoException_R_java_util_List,
	(void *) M_rhino_Interpreter_setEvalScriptFlag_rhino_Script,
	(void *) M_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement,
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
	{ "compile", "(Lrhino/CompilerEnvirons;Lrhino/ast/ScriptNode;Ljava/lang/String;Z)Ljava/lang/Object;" },
	{ "createFunctionObject", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Function;" },
	{ "createScriptObject", "(Ljava/lang/Object;)Lrhino/Script;" },
	{ "captureStackInfo", "(Lrhino/RhinoException;)V" },
	{ "getSourcePositionFromStack", "(Lrhino/Context;[I)Ljava/lang/String;" },
	{ "getPatchedStack", "(Lrhino/RhinoException;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getScriptStack", "(Lrhino/RhinoException;)Ljava/util/List;" },
	{ "setEvalScriptFlag", "(Lrhino/Script;)V" },
	{ "getScriptStackElements", "(Lrhino/RhinoException;)[[Lrhino/ScriptStackElement;" },
};

static jclass interfaces[] { &class_rhino_Evaluator, };

static jclass innerClasses[] {
	&class_rhino_Interpreter$GeneratorState,
	&class_rhino_Interpreter$ContinuationJump,
	&class_rhino_Interpreter$CallFrame,
};

static FieldMetadata fields[] {
	{ "itsData", &class_rhino_InterpreterData, offsetof(rhino_Interpreter, F_itsData), "Lrhino/InterpreterData;", 0 },
	{ "EXCEPTION_TRY_START_SLOT", &class_int, (intptr_t) &SF_rhino_Interpreter_EXCEPTION_TRY_START_SLOT, "I", 24 },
	{ "EXCEPTION_TRY_END_SLOT", &class_int, (intptr_t) &SF_rhino_Interpreter_EXCEPTION_TRY_END_SLOT, "I", 24 },
	{ "EXCEPTION_HANDLER_SLOT", &class_int, (intptr_t) &SF_rhino_Interpreter_EXCEPTION_HANDLER_SLOT, "I", 24 },
	{ "EXCEPTION_TYPE_SLOT", &class_int, (intptr_t) &SF_rhino_Interpreter_EXCEPTION_TYPE_SLOT, "I", 24 },
	{ "EXCEPTION_LOCAL_SLOT", &class_int, (intptr_t) &SF_rhino_Interpreter_EXCEPTION_LOCAL_SLOT, "I", 24 },
	{ "EXCEPTION_SCOPE_SLOT", &class_int, (intptr_t) &SF_rhino_Interpreter_EXCEPTION_SCOPE_SLOT, "I", 24 },
	{ "EXCEPTION_SLOT_SIZE", &class_int, (intptr_t) &SF_rhino_Interpreter_EXCEPTION_SLOT_SIZE, "I", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Interpreter, 0, "()V", 1 },
	{ "compareIdata", (intptr_t) SM_rhino_Interpreter_compareIdata_rhino_InterpreterData_rhino_InterpreterData_R_boolean, 0, "(Lrhino/InterpreterData;Lrhino/InterpreterData;)Z", 10 },
	{ "captureFrameForGenerator", (intptr_t) SM_rhino_Interpreter_captureFrameForGenerator_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame, 0, "(Lrhino/Interpreter$CallFrame;)Lrhino/Interpreter$CallFrame;", 10 },
	{ "compile", (intptr_t) M_rhino_Interpreter_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object, VTABLE_rhino_Interpreter_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object, "(Lrhino/CompilerEnvirons;Lrhino/ast/ScriptNode;Ljava/lang/String;Z)Ljava/lang/Object;", 1 },
	{ "createScriptObject", (intptr_t) M_rhino_Interpreter_createScriptObject_java_lang_Object_R_rhino_Script, VTABLE_rhino_Interpreter_createScriptObject_java_lang_Object_R_rhino_Script, "(Ljava/lang/Object;)Lrhino/Script;", 1 },
	{ "setEvalScriptFlag", (intptr_t) M_rhino_Interpreter_setEvalScriptFlag_rhino_Script, VTABLE_rhino_Interpreter_setEvalScriptFlag_rhino_Script, "(Lrhino/Script;)V", 1 },
	{ "createFunctionObject", (intptr_t) M_rhino_Interpreter_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function, VTABLE_rhino_Interpreter_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Function;", 1 },
	{ "getShort", (intptr_t) SM_rhino_Interpreter_getShort_Array1_byte_int_R_int, 0, "([BI)I", 10 },
	{ "getIndex", (intptr_t) SM_rhino_Interpreter_getIndex_Array1_byte_int_R_int, 0, "([BI)I", 10 },
	{ "getInt", (intptr_t) SM_rhino_Interpreter_getInt_Array1_byte_int_R_int, 0, "([BI)I", 10 },
	{ "getExceptionHandler", (intptr_t) SM_rhino_Interpreter_getExceptionHandler_rhino_Interpreter$CallFrame_boolean_R_int, 0, "(Lrhino/Interpreter$CallFrame;Z)I", 10 },
	{ "dumpICode", (intptr_t) SM_rhino_Interpreter_dumpICode_rhino_InterpreterData, 0, "(Lrhino/InterpreterData;)V", 8 },
	{ "bytecodeSpan", (intptr_t) SM_rhino_Interpreter_bytecodeSpan_int_R_int, 0, "(I)I", 10 },
	{ "getLineNumbers", (intptr_t) SM_rhino_Interpreter_getLineNumbers_rhino_InterpreterData_R_Array1_int, 0, "(Lrhino/InterpreterData;)[I", 8 },
	{ "captureStackInfo", (intptr_t) M_rhino_Interpreter_captureStackInfo_rhino_RhinoException, VTABLE_rhino_Interpreter_captureStackInfo_rhino_RhinoException, "(Lrhino/RhinoException;)V", 1 },
	{ "getSourcePositionFromStack", (intptr_t) M_rhino_Interpreter_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String, VTABLE_rhino_Interpreter_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String, "(Lrhino/Context;[I)Ljava/lang/String;", 1 },
	{ "getPatchedStack", (intptr_t) M_rhino_Interpreter_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String, VTABLE_rhino_Interpreter_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String, "(Lrhino/RhinoException;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getScriptStack", (intptr_t) M_rhino_Interpreter_getScriptStack_rhino_RhinoException_R_java_util_List, VTABLE_rhino_Interpreter_getScriptStack_rhino_RhinoException_R_java_util_List, "(Lrhino/RhinoException;)Ljava/util/List;", 1 },
	{ "getScriptStackElements", (intptr_t) M_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement, VTABLE_rhino_Interpreter_getScriptStackElements_rhino_RhinoException_R_Array2_rhino_ScriptStackElement, "(Lrhino/RhinoException;)[[Lrhino/ScriptStackElement;", 1 },
	{ "getEncodedSource", (intptr_t) SM_rhino_Interpreter_getEncodedSource_rhino_InterpreterData_R_java_lang_String, 0, "(Lrhino/InterpreterData;)Ljava/lang/String;", 8 },
	{ "initFunction", (intptr_t) SM_rhino_Interpreter_initFunction_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/InterpretedFunction;I)V", 10 },
	{ "interpret", (intptr_t) SM_rhino_Interpreter_interpret_rhino_InterpretedFunction_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/InterpretedFunction;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "resumeGenerator", (intptr_t) SM_rhino_Interpreter_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "restartContinuation", (intptr_t) SM_rhino_Interpreter_restartContinuation_rhino_NativeContinuation_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/NativeContinuation;Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "interpretLoop", (intptr_t) SM_rhino_Interpreter_interpretLoop_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "doInOrInstanceof", (intptr_t) SM_rhino_Interpreter_doInOrInstanceof_rhino_Context_int_Array1_java_lang_Object_Array1_double_int_R_int, 0, "(Lrhino/Context;I[Ljava/lang/Object;[DI)I", 10 },
	{ "doCompare", (intptr_t) SM_rhino_Interpreter_doCompare_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int, 0, "(Lrhino/Interpreter$CallFrame;I[Ljava/lang/Object;[DI)I", 10 },
	{ "doBitOp", (intptr_t) SM_rhino_Interpreter_doBitOp_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int, 0, "(Lrhino/Interpreter$CallFrame;I[Ljava/lang/Object;[DI)I", 10 },
	{ "doDelName", (intptr_t) SM_rhino_Interpreter_doDelName_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;I[Ljava/lang/Object;[DI)I", 10 },
	{ "doGetElem", (intptr_t) SM_rhino_Interpreter_doGetElem_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_R_int, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;[Ljava/lang/Object;[DI)I", 10 },
	{ "doSetElem", (intptr_t) SM_rhino_Interpreter_doSetElem_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_R_int, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;[Ljava/lang/Object;[DI)I", 10 },
	{ "doElemIncDec", (intptr_t) SM_rhino_Interpreter_doElemIncDec_rhino_Context_rhino_Interpreter$CallFrame_Array1_byte_Array1_java_lang_Object_Array1_double_int_R_int, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;[B[Ljava/lang/Object;[DI)I", 10 },
	{ "doCallSpecial", (intptr_t) SM_rhino_Interpreter_doCallSpecial_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_byte_int_R_int, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;[Ljava/lang/Object;[DI[BI)I", 10 },
	{ "doSetConstVar", (intptr_t) SM_rhino_Interpreter_doSetConstVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int, 0, "(Lrhino/Interpreter$CallFrame;[Ljava/lang/Object;[DI[Ljava/lang/Object;[D[II)I", 10 },
	{ "doSetVar", (intptr_t) SM_rhino_Interpreter_doSetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int, 0, "(Lrhino/Interpreter$CallFrame;[Ljava/lang/Object;[DI[Ljava/lang/Object;[D[II)I", 10 },
	{ "doGetVar", (intptr_t) SM_rhino_Interpreter_doGetVar_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_int_R_int, 0, "(Lrhino/Interpreter$CallFrame;[Ljava/lang/Object;[DI[Ljava/lang/Object;[DI)I", 10 },
	{ "doVarIncDec", (intptr_t) SM_rhino_Interpreter_doVarIncDec_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_Array1_double_int_Array1_java_lang_Object_Array1_double_Array1_int_int_R_int, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;[Ljava/lang/Object;[DI[Ljava/lang/Object;[D[II)I", 10 },
	{ "initFrameForNoSuchMethod", (intptr_t) SM_rhino_Interpreter_initFrameForNoSuchMethod_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_int_rhino_Scriptable_rhino_Scriptable_rhino_ScriptRuntime$NoSuchMethodShim_rhino_InterpretedFunction_R_rhino_Interpreter$CallFrame, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;I[Ljava/lang/Object;[DIILrhino/Scriptable;Lrhino/Scriptable;Lrhino/ScriptRuntime$NoSuchMethodShim;Lrhino/InterpretedFunction;)Lrhino/Interpreter$CallFrame;", 10 },
	{ "doEquals", (intptr_t) SM_rhino_Interpreter_doEquals_Array1_java_lang_Object_Array1_double_int_R_boolean, 0, "([Ljava/lang/Object;[DI)Z", 10 },
	{ "doShallowEquals", (intptr_t) SM_rhino_Interpreter_doShallowEquals_Array1_java_lang_Object_Array1_double_int_R_boolean, 0, "([Ljava/lang/Object;[DI)Z", 10 },
	{ "processThrowable", (intptr_t) SM_rhino_Interpreter_processThrowable_rhino_Context_java_lang_Object_rhino_Interpreter$CallFrame_int_boolean_R_rhino_Interpreter$CallFrame, 0, "(Lrhino/Context;Ljava/lang/Object;Lrhino/Interpreter$CallFrame;IZ)Lrhino/Interpreter$CallFrame;", 10 },
	{ "freezeGenerator", (intptr_t) SM_rhino_Interpreter_freezeGenerator_rhino_Context_rhino_Interpreter$CallFrame_int_rhino_Interpreter$GeneratorState_boolean_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;ILrhino/Interpreter$GeneratorState;Z)Ljava/lang/Object;", 10 },
	{ "thawGenerator", (intptr_t) SM_rhino_Interpreter_thawGenerator_rhino_Interpreter$CallFrame_int_rhino_Interpreter$GeneratorState_int_R_java_lang_Object, 0, "(Lrhino/Interpreter$CallFrame;ILrhino/Interpreter$GeneratorState;I)Ljava/lang/Object;", 10 },
	{ "initFrameForApplyOrCall", (intptr_t) SM_rhino_Interpreter_initFrameForApplyOrCall_rhino_Context_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_int_rhino_Scriptable_rhino_IdFunctionObject_rhino_InterpretedFunction_R_rhino_Interpreter$CallFrame, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;I[Ljava/lang/Object;[DIILrhino/Scriptable;Lrhino/IdFunctionObject;Lrhino/InterpretedFunction;)Lrhino/Interpreter$CallFrame;", 10 },
	{ "initFrame", (intptr_t) SM_rhino_Interpreter_initFrame_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_Array1_double_int_int_rhino_InterpretedFunction_rhino_Interpreter$CallFrame_R_rhino_Interpreter$CallFrame, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;[DIILrhino/InterpretedFunction;Lrhino/Interpreter$CallFrame;)Lrhino/Interpreter$CallFrame;", 10 },
	{ "enterFrame", (intptr_t) SM_rhino_Interpreter_enterFrame_rhino_Context_rhino_Interpreter$CallFrame_Array1_java_lang_Object_boolean, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;[Ljava/lang/Object;Z)V", 10 },
	{ "exitFrame", (intptr_t) SM_rhino_Interpreter_exitFrame_rhino_Context_rhino_Interpreter$CallFrame_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;Ljava/lang/Object;)V", 10 },
	{ "setCallResult", (intptr_t) SM_rhino_Interpreter_setCallResult_rhino_Interpreter$CallFrame_java_lang_Object_double, 0, "(Lrhino/Interpreter$CallFrame;Ljava/lang/Object;D)V", 10 },
	{ "captureContinuation", (intptr_t) SM_rhino_Interpreter_captureContinuation_rhino_Context_R_rhino_NativeContinuation, 0, "(Lrhino/Context;)Lrhino/NativeContinuation;", 9 },
	{ "captureContinuation", (intptr_t) SM_rhino_Interpreter_captureContinuation_rhino_Context_rhino_Interpreter$CallFrame_boolean_R_rhino_NativeContinuation, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;Z)Lrhino/NativeContinuation;", 10 },
	{ "stack_int32", (intptr_t) SM_rhino_Interpreter_stack_int32_rhino_Interpreter$CallFrame_int_R_int, 0, "(Lrhino/Interpreter$CallFrame;I)I", 10 },
	{ "stack_double", (intptr_t) SM_rhino_Interpreter_stack_double_rhino_Interpreter$CallFrame_int_R_double, 0, "(Lrhino/Interpreter$CallFrame;I)D", 10 },
	{ "stack_boolean", (intptr_t) SM_rhino_Interpreter_stack_boolean_rhino_Interpreter$CallFrame_int_R_boolean, 0, "(Lrhino/Interpreter$CallFrame;I)Z", 10 },
	{ "doAdd", (intptr_t) SM_rhino_Interpreter_doAdd_Array1_java_lang_Object_Array1_double_int_rhino_Context, 0, "([Ljava/lang/Object;[DILrhino/Context;)V", 10 },
	{ "doArithmetic", (intptr_t) SM_rhino_Interpreter_doArithmetic_rhino_Interpreter$CallFrame_int_Array1_java_lang_Object_Array1_double_int_R_int, 0, "(Lrhino/Interpreter$CallFrame;I[Ljava/lang/Object;[DI)I", 10 },
	{ "getArgsArray", (intptr_t) SM_rhino_Interpreter_getArgsArray_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;[DII)[Ljava/lang/Object;", 10 },
	{ "addInstructionCount", (intptr_t) SM_rhino_Interpreter_addInstructionCount_rhino_Context_rhino_Interpreter$CallFrame_int, 0, "(Lrhino/Context;Lrhino/Interpreter$CallFrame;I)V", 10 },
	{ "access$000", (intptr_t) SM_rhino_Interpreter_access$000_Array1_java_lang_Object_Array1_double_int_int_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;[DII)[Ljava/lang/Object;", 4104 },
	{ "access$100", (intptr_t) SM_rhino_Interpreter_access$100_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/InterpretedFunction;I)V", 4104 },
	{ "access$200", (intptr_t) SM_rhino_Interpreter_access$200_rhino_InterpreterData_rhino_InterpreterData_R_boolean, 0, "(Lrhino/InterpreterData;Lrhino/InterpreterData;)Z", 4104 },
	{ "<clinit>", (intptr_t) clinit_rhino_Interpreter, 0, "()V", 8 },
};

Class class_rhino_Interpreter{
		.nativeName = (intptr_t) "rhino/Interpreter",
		.parentClass = (intptr_t) &class_rhino_Icode,
		.size = sizeof(rhino_Interpreter),
		.classVtable = (intptr_t) vtable_rhino_Interpreter,
		.staticInitializer = (intptr_t) clinit_rhino_Interpreter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Interpreter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 61,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Interpreter = registerClass(&class_rhino_Interpreter);

}
