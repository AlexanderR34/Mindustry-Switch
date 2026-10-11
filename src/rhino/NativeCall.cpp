#include "rhino/NativeCall.h"
#include "rhino/NativeCall.h"
#include "rhino/NativeFunction.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/Undefined.h"
#include "rhino/EvaluatorException.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/InterpretedFunction.h"
#include "rhino/Arguments.h"

extern "C" {

jobject SF_rhino_NativeCall_CALL_TAG;
jint SF_rhino_NativeCall_Id_constructor;
jint SF_rhino_NativeCall_MAX_PROTOTYPE_ID;

void mark_rhino_NativeCall(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeCall_CALL_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeCall_CALL_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeCall_CALL_TAG, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_IdScriptableObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeCall *) object;
	if (self->F_function)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_function)->clazz)->markFunction)((jobject) self->F_function, mark, depth + 1);
	if (self->F_originalArgs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_originalArgs)->clazz)->markFunction)((jobject) self->F_originalArgs, mark, depth + 1);
	if (self->F_arguments)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arguments)->clazz)->markFunction)((jobject) self->F_arguments, mark, depth + 1);
	if (self->F_parentActivationCall)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parentActivationCall)->clazz)->markFunction)((jobject) self->F_parentActivationCall, mark, depth + 1);
}

void SM_rhino_NativeCall_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCall:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCall(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(14);
	clinit_rhino_NativeCall(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCall);
	init_rhino_NativeCall(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)((func_rhino_NativeCall_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeCall_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (jint(1)), (frame[0].o), (frame[1].i));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeCall(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCall:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCall(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeCall_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCall:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCall(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(21);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((rhino_NativeCall *) NULL_CHECK((frame[0].o)))->F_function = (jref) (frame[1].o);
	LINE_NUMBER(24);
	((func_rhino_NativeCall_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeCall_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].o) != nullptr) goto label_4;
	}
	clinit_rhino_ScriptRuntime(ctx);
	(sp++)->o = SF_rhino_ScriptRuntime_emptyArgs;
	goto label_5;
label_4:;
	INST_ALOAD(3);
label_5:;
	{
	sp -= 2;
	((rhino_NativeCall *) NULL_CHECK(sp[0].o))->F_originalArgs = (jref) sp[1].o;
	LINE_NUMBER(28);
	((rhino_NativeCall *) NULL_CHECK((frame[0].o)))->F_isStrict = (frame[5].i);
	LINE_NUMBER(31);
	jint temp0 = (jint)((func_rhino_NativeFunction_getParamAndVarCount_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeFunction_getParamAndVarCount_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(32);
	jint temp1 = (jint)((func_rhino_NativeFunction_getParamCount_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeFunction_getParamCount_R_int])(ctx, (frame[1].o));
	frame[7].i = temp1;
	LINE_NUMBER(33);
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(34);
	frame[8].i = (jint(0));
	}
label_12:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_10;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String])(ctx, (frame[1].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(36);
	if ((frame[8].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_15;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[8].i));
	sp += 1;
	goto label_16;
	}
label_15:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_16:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(38);
	((func_rhino_NativeCall_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeCall_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[0].o), (frame[9].o), (frame[10].o), (jint(4)));
	LINE_NUMBER(34);
	INST_IINC(8, 1);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(44);
	jint temp0 = (jint)M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"arguments"_j))), (frame[0].o));
	if (temp0 != 0) goto label_19;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_19;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_rhino_Arguments(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_Arguments);
	init_rhino_Arguments_rhino_NativeCall(ctx, sp[1].o, (frame[0].o));
	((rhino_NativeCall *) NULL_CHECK(sp[0].o))->F_arguments = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"arguments"_j));
	sp[2].o = (jobject)((rhino_NativeCall *) NULL_CHECK((frame[0].o)))->F_arguments;
	((func_rhino_NativeCall_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeCall_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(4)));
	}
label_19:;
	{
	LINE_NUMBER(49);
	if ((frame[6].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(50);
	frame[8].i = (frame[7].i);
	}
label_24:;
	{
	if ((frame[8].i) >= (frame[6].i)) goto label_22;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String])(ctx, (frame[1].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(52);
	jint temp0 = (jint)M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[9].o), (frame[0].o));
	if (temp0 != 0) goto label_27;
	}
	{
	LINE_NUMBER(53);
	jint temp0 = (jint)((func_rhino_NativeFunction_getParamOrVarConst_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeFunction_getParamOrVarConst_int_R_boolean])(ctx, (frame[1].o), (frame[8].i));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = frame[9].o;
	clinit_rhino_Undefined(ctx);
	sp[2].o = (jobject)SF_rhino_Undefined_instance;
	((func_rhino_NativeCall_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeCall_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (13));
	goto label_27;
	}
label_29:;
	{
	LINE_NUMBER(55);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_InterpretedFunction)) == 0) goto label_31;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_InterpretedFunction, (frame[1].o));
	sp[1].o = frame[9].o;
	LINE_NUMBER(56);
	jint temp0 = (jint)((func_rhino_InterpretedFunction_hasFunctionNamed_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_InterpretedFunction_hasFunctionNamed_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_27;
	}
label_31:;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = frame[9].o;
	clinit_rhino_Undefined(ctx);
	sp[2].o = (jobject)SF_rhino_Undefined_instance;
	((func_rhino_NativeCall_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeCall_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(4)));
	}
label_27:;
	{
	LINE_NUMBER(50);
	INST_IINC(8, 1);
	goto label_24;
	}
label_22:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeCall_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCall:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Call"_j)));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeCall_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCall:findPrototypeId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"constructor"_j))));
	if (temp0 == 0) goto label_1;
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

void M_rhino_NativeCall_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCall:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(78);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(79);
	frame[3].i = (jint(1));
	LINE_NUMBER(80);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(82);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeCall(ctx);
	sp[1].o = (jobject)SF_rhino_NativeCall_CALL_TAG;
	sp[0].o = (jobject)((func_rhino_NativeCall_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeCall_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeCall_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCall:execIdCall", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeCall(ctx);
	sp[1].o = (jobject)SF_rhino_NativeCall_CALL_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(94);
	if ((frame[6].i) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(95);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.only.from.new"_j))), (((jobject) createStringLiteral(ctx, u8"Call"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(98);
	SM_rhino_ScriptRuntime_checkDeprecated_rhino_Context_java_lang_String(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"Call"_j))));
	LINE_NUMBER(99);
	clinit_rhino_NativeCall(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCall);
	init_rhino_NativeCall(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[3].o));
	((func_rhino_NativeCall_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeCall_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_4:;
	{
	LINE_NUMBER(103);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeCall_defineAttributesForArguments(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCall:defineAttributesForArguments", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((rhino_NativeCall *) NULL_CHECK((frame[0].o)))->F_arguments;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((rhino_NativeCall *) NULL_CHECK((frame[0].o)))->F_arguments;
	((func_rhino_Arguments_defineAttributesForStrictMode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Arguments_defineAttributesForStrictMode])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_rhino_NativeCall(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeCall_Id_constructor = jint(1);
	SF_rhino_NativeCall_MAX_PROTOTYPE_ID = jint(1);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCall:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCall(ctx);
	{
	LINE_NUMBER(11);
	clinit_rhino_NativeCall(ctx);
	SF_rhino_NativeCall_CALL_TAG = (((jobject) createStringLiteral(ctx, u8"Call"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeCall[] {
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
	(void *) M_rhino_NativeCall_getClassName_R_java_lang_String,
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
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
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
	(void *) M_rhino_NativeCall_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getMaxInstanceId_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_NativeCall_initPrototypeId_int,
	(void *) M_rhino_NativeCall_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeCall_defineAttributesForArguments,
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
	{ "defineAttributesForArguments", "()V" },
};

static FieldMetadata fields[] {
	{ "CALL_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeCall_CALL_TAG, "Ljava/lang/Object;", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeCall_Id_constructor, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeCall_MAX_PROTOTYPE_ID, "I", 26 },
	{ "function", &class_rhino_NativeFunction, offsetof(rhino_NativeCall, F_function), "Lrhino/NativeFunction;", 0 },
	{ "originalArgs", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_NativeCall, F_originalArgs), "[Ljava/lang/Object;", 0 },
	{ "isStrict", &class_boolean, offsetof(rhino_NativeCall, F_isStrict), "Z", 0 },
	{ "arguments", &class_rhino_Arguments, offsetof(rhino_NativeCall, F_arguments), "Lrhino/Arguments;", 2 },
	{ "parentActivationCall", &class_rhino_NativeCall, offsetof(rhino_NativeCall, F_parentActivationCall), "Lrhino/NativeCall;", 128 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeCall_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeCall, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_rhino_NativeCall_rhino_NativeFunction_rhino_Scriptable_Array1_java_lang_Object_boolean_boolean, 0, "(Lrhino/NativeFunction;Lrhino/Scriptable;[Ljava/lang/Object;ZZ)V", 0 },
	{ "getClassName", (intptr_t) M_rhino_NativeCall_getClassName_R_java_lang_String, VTABLE_rhino_NativeCall_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeCall_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeCall_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeCall_initPrototypeId_int, VTABLE_rhino_NativeCall_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeCall_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeCall_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "defineAttributesForArguments", (intptr_t) M_rhino_NativeCall_defineAttributesForArguments, VTABLE_rhino_NativeCall_defineAttributesForArguments, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeCall, 0, "()V", 8 },
};

Class class_rhino_NativeCall{
		.nativeName = (intptr_t) "rhino/NativeCall",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeCall),
		.classVtable = (intptr_t) vtable_rhino_NativeCall,
		.staticInitializer = (intptr_t) clinit_rhino_NativeCall,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeCall,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 114,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeCall = registerClass(&class_rhino_NativeCall);

}
