#include "rhino/NativeError.h"
#include "java/lang/Integer.h"
#include "rhino/Function.h"
#include "java/lang/StringBuilder.h"
#include "rhino/NativeCallSite.h"
#include "rhino/NativeError_1.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/NativeError.h"
#include "rhino/Undefined.h"
#include "rhino/EvaluatorException.h"
#include "rhino/NativeError_ProtoProps.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/NoSuchMethodException.h"
#include "java/lang/Throwable.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/ScriptStackElement.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/RhinoException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_rhino_NativeError_ERROR_TAG;
jobject SF_rhino_NativeError_ERROR_DELEGATE_GET_STACK;
jobject SF_rhino_NativeError_ERROR_DELEGATE_SET_STACK;
jint SF_rhino_NativeError_DEFAULT_STACK_LIMIT;
jobject SF_rhino_NativeError_STACK_HIDE_KEY;
jint SF_rhino_NativeError_Id_constructor;
jint SF_rhino_NativeError_Id_toString;
jint SF_rhino_NativeError_Id_toSource;
jint SF_rhino_NativeError_ConstructorId_captureStackTrace;
jint SF_rhino_NativeError_MAX_PROTOTYPE_ID;

void mark_rhino_NativeError(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeError_ERROR_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeError_ERROR_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeError_ERROR_TAG, mark, depth + 1);
		if (SF_rhino_NativeError_ERROR_DELEGATE_GET_STACK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeError_ERROR_DELEGATE_GET_STACK)->clazz)->markFunction)((jobject) SF_rhino_NativeError_ERROR_DELEGATE_GET_STACK, mark, depth + 1);
		if (SF_rhino_NativeError_ERROR_DELEGATE_SET_STACK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeError_ERROR_DELEGATE_SET_STACK)->clazz)->markFunction)((jobject) SF_rhino_NativeError_ERROR_DELEGATE_SET_STACK, mark, depth + 1);
		if (SF_rhino_NativeError_STACK_HIDE_KEY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeError_STACK_HIDE_KEY)->clazz)->markFunction)((jobject) SF_rhino_NativeError_STACK_HIDE_KEY, mark, depth + 1);
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
	auto self = (rhino_NativeError *) object;
	if (self->F_stackProvider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stackProvider)->clazz)->markFunction)((jobject) self->F_stackProvider, mark, depth + 1);
}

void init_rhino_NativeError(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeError_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(35);
	clinit_rhino_NativeError(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeError);
	init_rhino_NativeError(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(36);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8"Error"_j))));
	LINE_NUMBER(37);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"message"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(38);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"fileName"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(39);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lineNumber"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(40);
	((func_rhino_NativeError_setAttributes_java_lang_String_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeError_setAttributes_java_lang_String_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (jint(2)));
	LINE_NUMBER(41);
	((func_rhino_NativeError_setAttributes_java_lang_String_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeError_setAttributes_java_lang_String_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"message"_j))), (jint(2)));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_rhino_NativeError_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeError_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (jint(3)), (frame[0].o), (frame[1].i));
	LINE_NUMBER(43);
	SM_rhino_NativeCallSite_init_rhino_Scriptable_boolean(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeError_make_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_R_rhino_NativeError(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:make", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_rhino_IdFunctionObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_IdFunctionObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"prototype"_j))), (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_rhino_Scriptable, (checkCast(ctx, &class_rhino_Scriptable, sp[0].o))));
	LINE_NUMBER(50);
	clinit_rhino_NativeError(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeError);
	init_rhino_NativeError(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(51);
	((func_rhino_NativeError_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_NativeError_setPrototype_rhino_Scriptable])(ctx, (frame[5].o), (frame[4].o));
	LINE_NUMBER(52);
	((func_rhino_NativeError_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_NativeError_setParentScope_rhino_Scriptable])(ctx, (frame[5].o), (frame[1].o));
	LINE_NUMBER(54);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(55);
	if ((frame[6].i) < (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"message"_j));
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	LINE_NUMBER(58);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	LINE_NUMBER(57);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_8:;
	{
	LINE_NUMBER(60);
	if ((frame[6].i) < (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(61);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"fileName"_j))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	LINE_NUMBER(62);
	if ((frame[6].i) < (jint(3))) goto label_6;
	}
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(2)))));
	frame[7].i = temp0;
	LINE_NUMBER(64);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lineNumber"_j));
	jint temp1 = frame[7].i;
	LINE_NUMBER(65);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	LINE_NUMBER(64);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void M_rhino_NativeError_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:fillConstructorProperties", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeError(ctx);
	sp[2].o = (jobject)SF_rhino_NativeError_ERROR_TAG;
	((func_rhino_NativeError_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeError_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(-1)), (((jobject) createStringLiteral(ctx, u8"captureStackTrace"_j))), (jint(2)));
	LINE_NUMBER(80);
	clinit_rhino_NativeError$ProtoProps(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeError$ProtoProps);
	init_rhino_NativeError$ProtoProps_rhino_NativeError$1(ctx, sp[0].o, (jobject(nullptr)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_rhino_NativeError_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeError_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"_ErrorPrototypeProps"_j))), (frame[2].o));
	LINE_NUMBER(84);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stackTraceLimit"_j));
	sp[2].o = frame[2].o;
	clinit_rhino_NativeError$ProtoProps(ctx);
	sp[3].o = (jobject)SF_rhino_NativeError$ProtoProps_GET_STACK_LIMIT;
	clinit_rhino_NativeError$ProtoProps(ctx);
	sp[4].o = (jobject)SF_rhino_NativeError$ProtoProps_SET_STACK_LIMIT;
	((func_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	LINE_NUMBER(86);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"prepareStackTrace"_j));
	sp[2].o = frame[2].o;
	clinit_rhino_NativeError$ProtoProps(ctx);
	sp[3].o = (jobject)SF_rhino_NativeError$ProtoProps_GET_PREPARE_STACK;
	clinit_rhino_NativeError$ProtoProps(ctx);
	sp[4].o = (jobject)SF_rhino_NativeError$ProtoProps_SET_PREPARE_STACK;
	((func_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	LINE_NUMBER(89);
	M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeError_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Error"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeError_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)SM_rhino_NativeError_js_toString_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(101);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) == 0) goto label_2;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_String, (frame[1].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeError_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(108);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(110);
	frame[3].i = (jint(1));
	LINE_NUMBER(111);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(112);
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(114);
	frame[3].i = (jint(0));
	LINE_NUMBER(115);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(116);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(118);
	frame[3].i = (jint(0));
	LINE_NUMBER(119);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(120);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(122);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_NativeError_ERROR_TAG;
	sp[0].o = (jobject)((func_rhino_NativeError_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeError_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeError_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:execIdCall", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_NativeError_ERROR_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(134);
	switch((frame[6].i)) {
		case -1: goto label_4;
		case 0: goto label_5;
		case 1: goto label_6;
		case 2: goto label_7;
		case 3: goto label_8;
		default: goto label_5;
	}
	}
label_6:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)SM_rhino_NativeError_make_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_R_rhino_NativeError(ctx, (frame[2].o), (frame[3].o), (frame[1].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_rhino_NativeError_js_toString_rhino_Scriptable_R_java_lang_Object(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_rhino_NativeError_js_toSource_rhino_Context_rhino_Scriptable_rhino_Scriptable_R_java_lang_String(ctx, (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(145);
	SM_rhino_NativeError_js_captureStackTrace_rhino_Context_rhino_Scriptable_Array1_java_lang_Object(ctx, (frame[2].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(146);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(148);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeError_setStackProvider_rhino_RhinoException(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:setStackProvider", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((rhino_NativeError *) NULL_CHECK((frame[0].o)))->F_stackProvider;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(157);
	((rhino_NativeError *) NULL_CHECK((frame[0].o)))->F_stackProvider = (jref) (frame[1].o);
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stack"_j));
	sp[2].o = frame[0].o;
	clinit_rhino_NativeError(ctx);
	sp[3].o = (jobject)SF_rhino_NativeError_ERROR_DELEGATE_GET_STACK;
	clinit_rhino_NativeError(ctx);
	sp[4].o = (jobject)SF_rhino_NativeError_ERROR_DELEGATE_SET_STACK;
	((func_rhino_NativeError_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeError_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(2)));
	}
label_1:;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeError_getStackDelegated_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:getStackDelegated", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((rhino_NativeError *) NULL_CHECK((frame[0].o)))->F_stackProvider;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(166);
	clinit_rhino_NativeError(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(170);
	frame[2].i = (jint(-1));
	LINE_NUMBER(171);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_rhino_NativeError_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeError_getPrototype_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[4].o = (checkCast(ctx, &class_rhino_NativeError, sp[0].o));
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_rhino_NativeError_getAssociatedValue_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_NativeError_getAssociatedValue_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"_ErrorPrototypeProps"_j))));
	frame[5].o = (checkCast(ctx, &class_rhino_NativeError$ProtoProps, sp[0].o));
	LINE_NUMBER(175);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_rhino_NativeError$ProtoProps_getStackTraceLimit_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_NativeError$ProtoProps_getStackTraceLimit_R_int])(ctx, (frame[5].o));
	frame[2].i = temp0;
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function])(ctx, (frame[5].o));
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_rhino_NativeError_getAssociatedValue_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeError_getAssociatedValue_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"_stackHide"_j))));
	frame[6].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((rhino_NativeError *) NULL_CHECK((frame[0].o)))->F_stackProvider;
	sp[0].o = (jobject)((func_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement])(ctx, sp[0].o, (frame[2].i), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(186);
	if ((frame[3].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((rhino_NativeError *) NULL_CHECK((frame[0].o)))->F_stackProvider;
	sp[1].o = (jobject)((func_rhino_RhinoException_details_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_RhinoException_details_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_rhino_RhinoException_formatStackTrace_Array1_rhino_ScriptStackElement_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)M_rhino_NativeError_callPrepareStack_rhino_Function_Array1_rhino_ScriptStackElement_R_java_lang_Object(ctx, (frame[0].o), (frame[3].o), (frame[7].o));
	frame[8].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(194);
	((func_rhino_NativeError_setStackDelegated_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeError_setStackDelegated_rhino_Scriptable_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[8].o));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

void M_rhino_NativeError_setStackDelegated_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:setStackDelegated", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(199);
	((func_rhino_Scriptable_delete_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"stack"_j))));
	LINE_NUMBER(200);
	((rhino_NativeError *) NULL_CHECK((frame[0].o)))->F_stackProvider = (jref) (jobject(nullptr));
	LINE_NUMBER(201);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"stack"_j))), (frame[1].o), (frame[2].o));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeError_callPrepareStack_rhino_Function_Array1_rhino_ScriptStackElement_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:callPrepareStack", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(206);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	frame[4].o = sp[0].o;
	LINE_NUMBER(209);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable])(ctx, (frame[3].o), (frame[0].o), (((jobject) createStringLiteral(ctx, u8"CallSite"_j))));
	frame[6].o = (checkCast(ctx, &class_rhino_NativeCallSite, sp[0].o));
	LINE_NUMBER(211);
	((func_rhino_NativeCallSite_setElement_rhino_ScriptStackElement) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_NativeCallSite_setElement_rhino_ScriptStackElement])(ctx, (frame[6].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))));
	LINE_NUMBER(212);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)) = (frame[6].o);
	LINE_NUMBER(209);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[3].o), (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(216);
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[0].o);
	ARRAY_ACCESS(jobject, sp[4].o, (jint(1))) = (frame[5].o);
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeError_js_toString_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:js_toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(221);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(222);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"Error"_j)));
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"message"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = frame[2].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(228);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_9:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_11:;
	{
	LINE_NUMBER(237);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeError_js_toSource_rhino_Context_rhino_Scriptable_rhino_Scriptable_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:js_toSource", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(245);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"message"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"fileName"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(247);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"lineNumber"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(249);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"(new "_j))));
	LINE_NUMBER(251);
	sp[0].o = frame[3].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(252);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(254);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"("_j))));
	LINE_NUMBER(256);
	sp[0].o = frame[4].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	sp[0].o = frame[5].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	sp[0].o = frame[6].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(259);
	sp[0].o = frame[4].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(260);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_13:;
	{
	LINE_NUMBER(262);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_uneval_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(263);
	sp[0].o = frame[5].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	sp[0].o = frame[6].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_12;
	}
label_16:;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(265);
	sp[0].o = frame[5].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_18;
	}
	{
	LINE_NUMBER(266);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_18:;
	{
	LINE_NUMBER(268);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_uneval_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(269);
	sp[0].o = frame[6].o;
	clinit_rhino_NativeError(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, (frame[6].o));
	frame[8].i = temp0;
	LINE_NUMBER(271);
	if ((frame[8].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(273);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(ctx, (jdouble((frame[8].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"))"_j))));
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeError_js_captureStackTrace_rhino_Context_rhino_Scriptable_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:js_captureStackTrace", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ScriptableObject, sp[0].o));
	LINE_NUMBER(284);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(285);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) <= (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))), (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_rhino_Function, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_java_lang_String_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Error"_j))));
	frame[5].o = (checkCast(ctx, &class_rhino_NativeError, sp[0].o));
	LINE_NUMBER(292);
	sp[0].o = frame[5].o;
	clinit_rhino_EvaluatorException(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_EvaluatorException);
	init_rhino_EvaluatorException_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"[object Object]"_j))));
	((func_rhino_NativeError_setStackProvider_rhino_RhinoException) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeError_setStackProvider_rhino_RhinoException])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(295);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(297);
	if ((frame[6].o) == nullptr) goto label_7;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"_stackHide"_j));
	sp[2].o = (jobject)SM_rhino_Context_toString_java_lang_Object_R_java_lang_String(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_rhino_NativeError_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeError_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_7:;
	{
	LINE_NUMBER(305);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stack"_j));
	sp[2].o = frame[5].o;
	clinit_rhino_NativeError(ctx);
	sp[3].o = (jobject)SF_rhino_NativeError_ERROR_DELEGATE_GET_STACK;
	clinit_rhino_NativeError(ctx);
	sp[4].o = (jobject)SF_rhino_NativeError_ERROR_DELEGATE_SET_STACK;
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeError_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:findPrototypeId", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	frame[2].i = (jint(0));
	LINE_NUMBER(317);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(319);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(320);
	if ((frame[5].i) != (8)) goto label_4;
	}
	{
	LINE_NUMBER(321);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	frame[4].i = temp0;
	LINE_NUMBER(322);
	if ((frame[4].i) != (111)) goto label_7;
	}
	{
	LINE_NUMBER(323);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(324);
	frame[2].i = (jint(3));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(325);
	if ((frame[4].i) != (116)) goto label_10;
	}
	{
	LINE_NUMBER(326);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(327);
	frame[2].i = (jint(2));
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(329);
	if ((frame[5].i) != (11)) goto label_10;
	}
	{
	LINE_NUMBER(330);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(331);
	frame[2].i = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(333);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_15:;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeError(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeError_DEFAULT_STACK_LIMIT = jint(-1);
	SF_rhino_NativeError_STACK_HIDE_KEY = ((jobject) createStringLiteral(ctx, u8"_stackHide"_j));
	SF_rhino_NativeError_Id_constructor = jint(1);
	SF_rhino_NativeError_Id_toString = jint(2);
	SF_rhino_NativeError_Id_toSource = jint(3);
	SF_rhino_NativeError_ConstructorId_captureStackTrace = jint(-1);
	SF_rhino_NativeError_MAX_PROTOTYPE_ID = jint(3);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError(ctx);
	{
	LINE_NUMBER(11);
	clinit_rhino_NativeError(ctx);
	SF_rhino_NativeError_ERROR_TAG = (((jobject) createStringLiteral(ctx, u8"Error"_j)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(19);
	sp[0].o = ((jobject) &class_rhino_NativeError);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"getStackDelegated"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) &class_rhino_Scriptable));
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_rhino_NativeError(ctx);
	SF_rhino_NativeError_ERROR_DELEGATE_GET_STACK = sp[0].o;
	LINE_NUMBER(20);
	sp[0].o = ((jobject) &class_rhino_NativeError);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"setStackDelegated"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) &class_rhino_Scriptable));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) &class_java_lang_Object));
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_rhino_NativeError(ctx);
	SF_rhino_NativeError_ERROR_DELEGATE_SET_STACK = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(23);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(21);
	frame[0].o = sp[0].o;
	LINE_NUMBER(22);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_NativeError[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeError_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeError_getClassName_R_java_lang_String,
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
	(void *) M_rhino_NativeError_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_NativeError_initPrototypeId_int,
	(void *) M_rhino_NativeError_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_NativeError_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeError_setStackProvider_rhino_RhinoException,
	(void *) M_rhino_NativeError_getStackDelegated_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeError_setStackDelegated_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeError_callPrepareStack_rhino_Function_Array1_rhino_ScriptStackElement_R_java_lang_Object,
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
	{ "setStackProvider", "(Lrhino/RhinoException;)V" },
	{ "getStackDelegated", "(Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "setStackDelegated", "(Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "callPrepareStack", "(Lrhino/Function;[Lrhino/ScriptStackElement;)Ljava/lang/Object;" },
};

static jclass innerClasses[] {
	&class_rhino_NativeError$ProtoProps,
};

static FieldMetadata fields[] {
	{ "ERROR_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeError_ERROR_TAG, "Ljava/lang/Object;", 26 },
	{ "ERROR_DELEGATE_GET_STACK", &class_java_lang_reflect_Method, (intptr_t) &SF_rhino_NativeError_ERROR_DELEGATE_GET_STACK, "Ljava/lang/reflect/Method;", 26 },
	{ "ERROR_DELEGATE_SET_STACK", &class_java_lang_reflect_Method, (intptr_t) &SF_rhino_NativeError_ERROR_DELEGATE_SET_STACK, "Ljava/lang/reflect/Method;", 26 },
	{ "DEFAULT_STACK_LIMIT", &class_int, (intptr_t) &SF_rhino_NativeError_DEFAULT_STACK_LIMIT, "I", 25 },
	{ "STACK_HIDE_KEY", &class_java_lang_String, (intptr_t) &SF_rhino_NativeError_STACK_HIDE_KEY, "Ljava/lang/String;", 26 },
	{ "stackProvider", &class_rhino_RhinoException, offsetof(rhino_NativeError, F_stackProvider), "Lrhino/RhinoException;", 2 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeError_Id_constructor, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_NativeError_Id_toString, "I", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_NativeError_Id_toSource, "I", 26 },
	{ "ConstructorId_captureStackTrace", &class_int, (intptr_t) &SF_rhino_NativeError_ConstructorId_captureStackTrace, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeError_MAX_PROTOTYPE_ID, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeError, 0, "()V", 0 },
	{ "init", (intptr_t) SM_rhino_NativeError_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "make", (intptr_t) SM_rhino_NativeError_make_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_R_rhino_NativeError, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/IdFunctionObject;[Ljava/lang/Object;)Lrhino/NativeError;", 8 },
	{ "fillConstructorProperties", (intptr_t) M_rhino_NativeError_fillConstructorProperties_rhino_IdFunctionObject, VTABLE_rhino_NativeError_fillConstructorProperties_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 4 },
	{ "getClassName", (intptr_t) M_rhino_NativeError_getClassName_R_java_lang_String, VTABLE_rhino_NativeError_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_rhino_NativeError_toString_R_java_lang_String, VTABLE_rhino_NativeError_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeError_initPrototypeId_int, VTABLE_rhino_NativeError_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeError_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeError_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "setStackProvider", (intptr_t) M_rhino_NativeError_setStackProvider_rhino_RhinoException, VTABLE_rhino_NativeError_setStackProvider_rhino_RhinoException, "(Lrhino/RhinoException;)V", 1 },
	{ "getStackDelegated", (intptr_t) M_rhino_NativeError_getStackDelegated_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeError_getStackDelegated_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "setStackDelegated", (intptr_t) M_rhino_NativeError_setStackDelegated_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeError_setStackDelegated_rhino_Scriptable_java_lang_Object, "(Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "callPrepareStack", (intptr_t) M_rhino_NativeError_callPrepareStack_rhino_Function_Array1_rhino_ScriptStackElement_R_java_lang_Object, VTABLE_rhino_NativeError_callPrepareStack_rhino_Function_Array1_rhino_ScriptStackElement_R_java_lang_Object, "(Lrhino/Function;[Lrhino/ScriptStackElement;)Ljava/lang/Object;", 2 },
	{ "js_toString", (intptr_t) SM_rhino_NativeError_js_toString_rhino_Scriptable_R_java_lang_Object, 0, "(Lrhino/Scriptable;)Ljava/lang/Object;", 10 },
	{ "js_toSource", (intptr_t) SM_rhino_NativeError_js_toSource_rhino_Context_rhino_Scriptable_rhino_Scriptable_R_java_lang_String, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;)Ljava/lang/String;", 10 },
	{ "js_captureStackTrace", (intptr_t) SM_rhino_NativeError_js_captureStackTrace_rhino_Context_rhino_Scriptable_Array1_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)V", 10 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeError_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeError_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeError, 0, "()V", 8 },
};

Class class_rhino_NativeError{
		.nativeName = (intptr_t) "rhino/NativeError",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeError),
		.classVtable = (intptr_t) vtable_rhino_NativeError,
		.staticInitializer = (intptr_t) clinit_rhino_NativeError,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeError,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 117,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeError = registerClass(&class_rhino_NativeError);

}
