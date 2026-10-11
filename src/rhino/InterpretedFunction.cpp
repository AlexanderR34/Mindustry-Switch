#include "rhino/InterpretedFunction.h"
#include "rhino/InterpreterData.h"
#include "rhino/NativeFunction.h"
#include "rhino/Interpreter.h"
#include "rhino/debug/DebuggableScript.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/BaseFunction.h"
#include "rhino/Callable.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/InterpretedFunction.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/Script.h"

extern "C" {


void mark_rhino_InterpretedFunction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_NativeFunction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_InterpretedFunction *) object;
	if (self->F_idata)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_idata)->clazz)->markFunction)((jobject) self->F_idata, mark, depth + 1);
}

void clinit_rhino_InterpretedFunction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_NativeFunction(ctx);
}

void init_rhino_InterpretedFunction_rhino_InterpreterData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterpretedFunction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(8);
	init_rhino_NativeFunction(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata = (jref) (frame[1].o);
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_InterpretedFunction_rhino_InterpretedFunction_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterpretedFunction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(12);
	init_rhino_NativeFunction(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[1].o)))->F_idata;
	sp[1].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[1].o))->F_itsNestedFunctions;
	((rhino_InterpretedFunction *) NULL_CHECK(sp[0].o))->F_idata = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_InterpretedFunction_createScript_rhino_InterpreterData_R_rhino_InterpretedFunction(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:createScript", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterpretedFunction(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(21);
	clinit_rhino_InterpretedFunction(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_InterpretedFunction);
	init_rhino_InterpretedFunction_rhino_InterpreterData(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_InterpretedFunction_createFunction_rhino_Context_rhino_Scriptable_rhino_InterpreterData_R_rhino_InterpretedFunction(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:createFunction", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterpretedFunction(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(31);
	clinit_rhino_InterpretedFunction(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_InterpretedFunction);
	init_rhino_InterpretedFunction_rhino_InterpreterData(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[3].o)))->F_idata;
	((func_rhino_InterpretedFunction_initScriptFunction_rhino_Context_rhino_Scriptable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpretedFunction_initScriptFunction_rhino_Context_rhino_Scriptable_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[3].o))->F_isES6Generator));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_InterpretedFunction_createFunction_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int_R_rhino_InterpretedFunction(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:createFunction", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_InterpretedFunction(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(42);
	clinit_rhino_InterpretedFunction(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_InterpretedFunction);
	init_rhino_InterpretedFunction_rhino_InterpretedFunction_int(ctx, sp[0].o, (frame[2].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[4].o)))->F_idata;
	((func_rhino_InterpretedFunction_initScriptFunction_rhino_Context_rhino_Scriptable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpretedFunction_initScriptFunction_rhino_Context_rhino_Scriptable_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[3].o))->F_isES6Generator));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterpretedFunction_getFunctionName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:getFunctionName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsName;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsName;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_InterpretedFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:call", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(65);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_hasTopCall_rhino_Context_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	sp[4].o = frame[4].o;
	sp[5].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_boolean_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[5].o))->F_isStrict));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_rhino_Interpreter_interpret_rhino_InterpretedFunction_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterpretedFunction_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:exec", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_rhino_InterpretedFunction_isScript_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_InterpretedFunction_isScript_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(75);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_hasTopCall_rhino_Context_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[5].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_boolean_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[5].o))->F_isStrict));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)SM_rhino_Interpreter_interpret_rhino_InterpretedFunction_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_InterpretedFunction_isScript_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:isScript", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	if (((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_itsFunctionType) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_InterpretedFunction_getEncodedSource_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:getEncodedSource", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)SM_rhino_Interpreter_getEncodedSource_rhino_InterpreterData_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterpretedFunction_getDebuggableView_R_rhino_debug_DebuggableScript(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:getDebuggableView", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterpretedFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:resumeGenerator", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)SM_rhino_Interpreter_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_InterpretedFunction_getLanguageVersion_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:getLanguageVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	popStackFrame(ctx);
	return ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_languageVersion);
	}

	popStackFrame(ctx);
}

jint M_rhino_InterpretedFunction_getParamCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:getParamCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	popStackFrame(ctx);
	return ((jint)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argCount);
	}

	popStackFrame(ctx);
}

jint M_rhino_InterpretedFunction_getParamAndVarCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:getParamAndVarCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argNames;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jobject M_rhino_InterpretedFunction_getParamOrVarName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:getParamOrVarName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argNames;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jbool M_rhino_InterpretedFunction_getParamOrVarConst_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:getParamOrVarConst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((rhino_InterpreterData *) NULL_CHECK(sp[0].o))->F_argIsConst;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jbool M_rhino_InterpretedFunction_hasFunctionNamed_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/InterpretedFunction:hasFunctionNamed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	jint temp1 = (jint)((func_rhino_InterpreterData_getFunctionCount_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpreterData_getFunctionCount_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((rhino_InterpretedFunction *) NULL_CHECK((frame[0].o)))->F_idata;
	sp[0].o = (jobject)((func_rhino_InterpreterData_getFunction_int_R_rhino_debug_DebuggableScript) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpreterData_getFunction_int_R_rhino_debug_DebuggableScript])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_rhino_InterpreterData, sp[0].o));
	LINE_NUMBER(134);
	if (((jint)((rhino_InterpreterData *) NULL_CHECK((frame[3].o)))->F_declaredAsFunctionExpression) != 0) goto label_5;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	LINE_NUMBER(135);
	sp[1].o = (jobject)((func_rhino_InterpreterData_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_InterpreterData_getFunctionName_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(132);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_InterpretedFunction[] {
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
	(void *) M_rhino_BaseFunction_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_BaseFunction_getTypeOf_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_setAttributes_java_lang_String_int,
	(void *) M_rhino_ScriptableObject_setAttributes_int_int,
	(void *) M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean,
	(void *) M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean,
	(void *) M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int,
	(void *) M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_avoidObjectDetection_R_boolean,
	(void *) M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int,
	(void *) M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
	(void *) M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int,
	(void *) M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_isExtensible_R_boolean,
	(void *) M_rhino_ScriptableObject_preventExtensions,
	(void *) M_rhino_ScriptableObject_sealObject,
	(void *) M_rhino_ScriptableObject_isSealed_R_boolean,
	(void *) M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_BaseFunction_getMaxInstanceId_R_int,
	(void *) M_rhino_BaseFunction_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_BaseFunction_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_BaseFunction_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_BaseFunction_initPrototypeId_int,
	(void *) M_rhino_BaseFunction_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_InterpretedFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_isGeneratorFunction_R_boolean,
	(void *) M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction,
	(void *) M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object,
	(void *) M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable,
	(void *) M_rhino_NativeFunction_decompile_int_int_R_java_lang_String,
	(void *) M_rhino_NativeFunction_getArity_R_int,
	(void *) M_rhino_NativeFunction_getLength_R_int,
	(void *) M_rhino_InterpretedFunction_getFunctionName_R_java_lang_String,
	(void *) M_rhino_BaseFunction_hasPrototypeProperty_R_boolean,
	(void *) M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_getArguments_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeFunction_initScriptFunction_rhino_Context_rhino_Scriptable,
	(void *) M_rhino_NativeFunction_initScriptFunction_rhino_Context_rhino_Scriptable_boolean,
	(void *) M_rhino_InterpretedFunction_getEncodedSource_R_java_lang_String,
	(void *) M_rhino_InterpretedFunction_getDebuggableView_R_rhino_debug_DebuggableScript,
	(void *) M_rhino_InterpretedFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_InterpretedFunction_getLanguageVersion_R_int,
	(void *) M_rhino_InterpretedFunction_getParamCount_R_int,
	(void *) M_rhino_InterpretedFunction_getParamAndVarCount_R_int,
	(void *) M_rhino_InterpretedFunction_getParamOrVarName_int_R_java_lang_String,
	(void *) M_rhino_InterpretedFunction_getParamOrVarConst_int_R_boolean,
	(void *) M_rhino_InterpretedFunction_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_InterpretedFunction_isScript_R_boolean,
	(void *) M_rhino_InterpretedFunction_hasFunctionNamed_java_lang_String_R_boolean,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "get", "(ILrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Lrhino/Scriptable;)Z" },
	{ "has", "(ILrhino/Scriptable;)Z" },
	{ "put", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "put", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Ljava/lang/String;)V" },
	{ "delete", "(I)V" },
	{ "getPrototype", "()Lrhino/Scriptable;" },
	{ "setPrototype", "(Lrhino/Scriptable;)V" },
	{ "getParentScope", "()Lrhino/Scriptable;" },
	{ "setParentScope", "(Lrhino/Scriptable;)V" },
	{ "getIds", "()[Ljava/lang/Object;" },
	{ "getDefaultValue", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasInstance", "(Lrhino/Scriptable;)Z" },
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
	{ "getAllIds", "()[Ljava/lang/Object;" },
	{ "putConst", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "defineConst", "(Ljava/lang/String;Lrhino/Scriptable;)V" },
	{ "isConst", "(Ljava/lang/String;)Z" },
	{ "createSlotMap", "(I)Lrhino/SlotMapContainer;" },
	{ "getTypeOf", "()Ljava/lang/String;" },
	{ "getAttributes", "(Ljava/lang/String;)I" },
	{ "getAttributes", "(I)I" },
	{ "getAttributes", "(Lrhino/Symbol;)I" },
	{ "setAttributes", "(Ljava/lang/String;I)V" },
	{ "setAttributes", "(II)V" },
	{ "setAttributes", "(Lrhino/Symbol;I)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;Z)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;ZZ)V" },
	{ "getGetterOrSetter", "(Ljava/lang/String;IZ)Ljava/lang/Object;" },
	{ "isGetterOrSetter", "(Ljava/lang/String;IZ)Z" },
	{ "addLazilyInitializedValue", "(Ljava/lang/String;ILrhino/LazilyLoadedCtor;I)V" },
	{ "setExternalArrayData", "(Lrhino/ExternalArrayData;)V" },
	{ "getExternalArrayData", "()Lrhino/ExternalArrayData;" },
	{ "getExternalArrayLength", "()Ljava/lang/Object;" },
	{ "avoidObjectDetection", "()Z" },
	{ "equivalentValues", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Lrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;I)V" },
	{ "defineOwnProperties", "(Lrhino/Context;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V" },
	{ "checkPropertyDefinition", "(Lrhino/ScriptableObject;)V" },
	{ "checkPropertyChange", "(Ljava/lang/Object;Lrhino/ScriptableObject;Lrhino/ScriptableObject;)V" },
	{ "sameValue", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "applyDescriptorToAttributeBitset", "(ILrhino/ScriptableObject;)I" },
	{ "isDataDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isAccessorDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isGenericDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "defineFunctionProperties", "([Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "isExtensible", "()Z" },
	{ "preventExtensions", "()V" },
	{ "sealObject", "()V" },
	{ "isSealed", "()Z" },
	{ "checkNotSealed", "(Ljava/lang/Object;I)V" },
	{ "getAssociatedValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "associateValue", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putImpl", "(Ljava/lang/Object;ILrhino/Scriptable;Ljava/lang/Object;)Z" },
	{ "putConstImpl", "(Ljava/lang/String;ILrhino/Scriptable;Ljava/lang/Object;I)Z" },
	{ "findAttributeSlot", "(Ljava/lang/String;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "findAttributeSlot", "(Lrhino/Symbol;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "getIds", "(ZZ)[Ljava/lang/Object;" },
	{ "getOwnPropertyDescriptor", "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getSlot", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defaultHas", "(Ljava/lang/String;)Z" },
	{ "defaultGet", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "defaultPut", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "getMaxInstanceId", "()I" },
	{ "findInstanceIdInfo", "(Ljava/lang/String;)I" },
	{ "findInstanceIdInfo", "(Lrhino/Symbol;)I" },
	{ "getInstanceIdName", "(I)Ljava/lang/String;" },
	{ "getInstanceIdValue", "(I)Ljava/lang/Object;" },
	{ "setInstanceIdValue", "(ILjava/lang/Object;)V" },
	{ "setInstanceIdAttributes", "(II)V" },
	{ "exportAsJSClass", "(ILrhino/Scriptable;Z)Lrhino/IdFunctionObject;" },
	{ "hasPrototypeMap", "()Z" },
	{ "activatePrototypeMap", "(I)V" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILrhino/Symbol;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeConstructor", "(Lrhino/IdFunctionObject;)V" },
	{ "initPrototypeValue", "(ILjava/lang/String;Ljava/lang/Object;I)V" },
	{ "initPrototypeValue", "(ILrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "initPrototypeId", "(I)V" },
	{ "findPrototypeId", "(Ljava/lang/String;)I" },
	{ "findPrototypeId", "(Lrhino/Symbol;)I" },
	{ "fillConstructorProperties", "(Lrhino/IdFunctionObject;)V" },
	{ "addIdFunctionProperty", "(Lrhino/Scriptable;Ljava/lang/Object;ILjava/lang/String;I)V" },
	{ "newIdFunction", "(Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)Lrhino/IdFunctionObject;" },
	{ "getBuiltInDescriptor", "(Ljava/lang/String;)Lrhino/ScriptableObject;" },
	{ "getBuiltInDescriptor", "(Lrhino/Symbol;)Lrhino/ScriptableObject;" },
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "construct", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "isGeneratorFunction", "()Z" },
	{ "realFunction", "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/BaseFunction;" },
	{ "setImmunePrototypeProperty", "(Ljava/lang/Object;)V" },
	{ "getClassPrototype", "()Lrhino/Scriptable;" },
	{ "createObject", "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;" },
	{ "decompile", "(II)Ljava/lang/String;" },
	{ "getArity", "()I" },
	{ "getLength", "()I" },
	{ "getFunctionName", "()Ljava/lang/String;" },
	{ "hasPrototypeProperty", "()Z" },
	{ "getPrototypeProperty", "()Ljava/lang/Object;" },
	{ "setupDefaultPrototype", "()Ljava/lang/Object;" },
	{ "getArguments", "()Ljava/lang/Object;" },
	{ "jsConstructor", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "initScriptFunction", "(Lrhino/Context;Lrhino/Scriptable;)V" },
	{ "initScriptFunction", "(Lrhino/Context;Lrhino/Scriptable;Z)V" },
	{ "getEncodedSource", "()Ljava/lang/String;" },
	{ "getDebuggableView", "()Lrhino/debug/DebuggableScript;" },
	{ "resumeGenerator", "(Lrhino/Context;Lrhino/Scriptable;ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getLanguageVersion", "()I" },
	{ "getParamCount", "()I" },
	{ "getParamAndVarCount", "()I" },
	{ "getParamOrVarName", "(I)Ljava/lang/String;" },
	{ "getParamOrVarConst", "(I)Z" },
	{ "exec", "(Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "isScript", "()Z" },
	{ "hasFunctionNamed", "(Ljava/lang/String;)Z" },
};

static jclass interfaces[] { &class_rhino_Script, };

static FieldMetadata fields[] {
	{ "idata", &class_rhino_InterpreterData, offsetof(rhino_InterpretedFunction, F_idata), "Lrhino/InterpreterData;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_InterpretedFunction_rhino_InterpreterData, 0, "(Lrhino/InterpreterData;)V", 2 },
	{ "<init>", (intptr_t) init_rhino_InterpretedFunction_rhino_InterpretedFunction_int, 0, "(Lrhino/InterpretedFunction;I)V", 2 },
	{ "createScript", (intptr_t) SM_rhino_InterpretedFunction_createScript_rhino_InterpreterData_R_rhino_InterpretedFunction, 0, "(Lrhino/InterpreterData;)Lrhino/InterpretedFunction;", 8 },
	{ "createFunction", (intptr_t) SM_rhino_InterpretedFunction_createFunction_rhino_Context_rhino_Scriptable_rhino_InterpreterData_R_rhino_InterpretedFunction, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/InterpreterData;)Lrhino/InterpretedFunction;", 8 },
	{ "createFunction", (intptr_t) SM_rhino_InterpretedFunction_createFunction_rhino_Context_rhino_Scriptable_rhino_InterpretedFunction_int_R_rhino_InterpretedFunction, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/InterpretedFunction;I)Lrhino/InterpretedFunction;", 8 },
	{ "getFunctionName", (intptr_t) M_rhino_InterpretedFunction_getFunctionName_R_java_lang_String, VTABLE_rhino_InterpretedFunction_getFunctionName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "call", (intptr_t) M_rhino_InterpretedFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_InterpretedFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "exec", (intptr_t) M_rhino_InterpretedFunction_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_InterpretedFunction_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "isScript", (intptr_t) M_rhino_InterpretedFunction_isScript_R_boolean, VTABLE_rhino_InterpretedFunction_isScript_R_boolean, "()Z", 1 },
	{ "getEncodedSource", (intptr_t) M_rhino_InterpretedFunction_getEncodedSource_R_java_lang_String, VTABLE_rhino_InterpretedFunction_getEncodedSource_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getDebuggableView", (intptr_t) M_rhino_InterpretedFunction_getDebuggableView_R_rhino_debug_DebuggableScript, VTABLE_rhino_InterpretedFunction_getDebuggableView_R_rhino_debug_DebuggableScript, "()Lrhino/debug/DebuggableScript;", 1 },
	{ "resumeGenerator", (intptr_t) M_rhino_InterpretedFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_rhino_InterpretedFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "getLanguageVersion", (intptr_t) M_rhino_InterpretedFunction_getLanguageVersion_R_int, VTABLE_rhino_InterpretedFunction_getLanguageVersion_R_int, "()I", 4 },
	{ "getParamCount", (intptr_t) M_rhino_InterpretedFunction_getParamCount_R_int, VTABLE_rhino_InterpretedFunction_getParamCount_R_int, "()I", 4 },
	{ "getParamAndVarCount", (intptr_t) M_rhino_InterpretedFunction_getParamAndVarCount_R_int, VTABLE_rhino_InterpretedFunction_getParamAndVarCount_R_int, "()I", 4 },
	{ "getParamOrVarName", (intptr_t) M_rhino_InterpretedFunction_getParamOrVarName_int_R_java_lang_String, VTABLE_rhino_InterpretedFunction_getParamOrVarName_int_R_java_lang_String, "(I)Ljava/lang/String;", 4 },
	{ "getParamOrVarConst", (intptr_t) M_rhino_InterpretedFunction_getParamOrVarConst_int_R_boolean, VTABLE_rhino_InterpretedFunction_getParamOrVarConst_int_R_boolean, "(I)Z", 4 },
	{ "hasFunctionNamed", (intptr_t) M_rhino_InterpretedFunction_hasFunctionNamed_java_lang_String_R_boolean, VTABLE_rhino_InterpretedFunction_hasFunctionNamed_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 0 },
};

Class class_rhino_InterpretedFunction{
		.nativeName = (intptr_t) "rhino/InterpretedFunction",
		.parentClass = (intptr_t) &class_rhino_NativeFunction,
		.size = sizeof(rhino_InterpretedFunction),
		.classVtable = (intptr_t) vtable_rhino_InterpretedFunction,
		.staticInitializer = (intptr_t) clinit_rhino_InterpretedFunction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_InterpretedFunction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 142,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_InterpretedFunction = registerClass(&class_rhino_InterpretedFunction);

}
