#include "rhino/NativeCallSite.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "rhino/NativeCallSite.h"
#include "java/lang/Boolean.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/Undefined.h"
#include "rhino/ScriptStackElement.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"

extern "C" {

jobject SF_rhino_NativeCallSite_CALLSITE_TAG;
jint SF_rhino_NativeCallSite_Id_constructor;
jint SF_rhino_NativeCallSite_Id_getThis;
jint SF_rhino_NativeCallSite_Id_getTypeName;
jint SF_rhino_NativeCallSite_Id_getFunction;
jint SF_rhino_NativeCallSite_Id_getFunctionName;
jint SF_rhino_NativeCallSite_Id_getMethodName;
jint SF_rhino_NativeCallSite_Id_getFileName;
jint SF_rhino_NativeCallSite_Id_getLineNumber;
jint SF_rhino_NativeCallSite_Id_getColumnNumber;
jint SF_rhino_NativeCallSite_Id_getEvalOrigin;
jint SF_rhino_NativeCallSite_Id_isToplevel;
jint SF_rhino_NativeCallSite_Id_isEval;
jint SF_rhino_NativeCallSite_Id_isNative;
jint SF_rhino_NativeCallSite_Id_isConstructor;
jint SF_rhino_NativeCallSite_Id_toString;
jint SF_rhino_NativeCallSite_MAX_PROTOTYPE_ID;

void mark_rhino_NativeCallSite(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeCallSite_CALLSITE_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeCallSite_CALLSITE_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeCallSite_CALLSITE_TAG, mark, depth + 1);
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
	auto self = (rhino_NativeCallSite *) object;
	if (self->F_element)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_element)->clazz)->markFunction)((jobject) self->F_element, mark, depth + 1);
}

void clinit_rhino_NativeCallSite(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeCallSite_CALLSITE_TAG = ((jobject) createStringLiteral(ctx, u8"CallSite"_j));
	SF_rhino_NativeCallSite_Id_constructor = jint(1);
	SF_rhino_NativeCallSite_Id_getThis = jint(2);
	SF_rhino_NativeCallSite_Id_getTypeName = jint(3);
	SF_rhino_NativeCallSite_Id_getFunction = jint(4);
	SF_rhino_NativeCallSite_Id_getFunctionName = jint(5);
	SF_rhino_NativeCallSite_Id_getMethodName = jint(6);
	SF_rhino_NativeCallSite_Id_getFileName = jint(7);
	SF_rhino_NativeCallSite_Id_getLineNumber = jint(8);
	SF_rhino_NativeCallSite_Id_getColumnNumber = jint(9);
	SF_rhino_NativeCallSite_Id_getEvalOrigin = jint(10);
	SF_rhino_NativeCallSite_Id_isToplevel = jint(11);
	SF_rhino_NativeCallSite_Id_isEval = jint(12);
	SF_rhino_NativeCallSite_Id_isNative = jint(13);
	SF_rhino_NativeCallSite_Id_isConstructor = jint(14);
	SF_rhino_NativeCallSite_Id_toString = jint(15);
	SF_rhino_NativeCallSite_MAX_PROTOTYPE_ID = jint(15);
}

void SM_rhino_NativeCallSite_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCallSite(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(14);
	clinit_rhino_NativeCallSite(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCallSite);
	init_rhino_NativeCallSite(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)((func_rhino_NativeCallSite_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeCallSite_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (15), (frame[0].o), (frame[1].i));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeCallSite_make_rhino_Scriptable_rhino_Scriptable_R_rhino_NativeCallSite(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:make", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCallSite(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(19);
	clinit_rhino_NativeCallSite(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCallSite);
	init_rhino_NativeCallSite(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"prototype"_j))), (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_rhino_Scriptable, (checkCast(ctx, &class_rhino_Scriptable, sp[0].o))));
	LINE_NUMBER(21);
	((func_rhino_NativeCallSite_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeCallSite_setParentScope_rhino_Scriptable])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(22);
	((func_rhino_NativeCallSite_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeCallSite_setPrototype_rhino_Scriptable])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void init_rhino_NativeCallSite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCallSite(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeCallSite_setElement_rhino_ScriptStackElement(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:setElement", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	((rhino_NativeCallSite *) NULL_CHECK((frame[0].o)))->F_element = (jref) (frame[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeCallSite_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"CallSite"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeCallSite_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(42);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_10;
		case 11: goto label_11;
		case 12: goto label_12;
		case 13: goto label_13;
		case 14: goto label_14;
		case 15: goto label_15;
		default: goto label_16;
	}
	}
label_1:;
	{
	LINE_NUMBER(44);
	frame[3].i = (jint(0));
	LINE_NUMBER(45);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(46);
	goto label_19;
	}
label_2:;
	{
	LINE_NUMBER(48);
	frame[3].i = (jint(0));
	LINE_NUMBER(49);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getThis"_j)));
	LINE_NUMBER(50);
	goto label_19;
	}
label_3:;
	{
	LINE_NUMBER(52);
	frame[3].i = (jint(0));
	LINE_NUMBER(53);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getTypeName"_j)));
	LINE_NUMBER(54);
	goto label_19;
	}
label_4:;
	{
	LINE_NUMBER(56);
	frame[3].i = (jint(0));
	LINE_NUMBER(57);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getFunction"_j)));
	LINE_NUMBER(58);
	goto label_19;
	}
label_5:;
	{
	LINE_NUMBER(60);
	frame[3].i = (jint(0));
	LINE_NUMBER(61);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getFunctionName"_j)));
	LINE_NUMBER(62);
	goto label_19;
	}
label_6:;
	{
	LINE_NUMBER(64);
	frame[3].i = (jint(0));
	LINE_NUMBER(65);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getMethodName"_j)));
	LINE_NUMBER(66);
	goto label_19;
	}
label_7:;
	{
	LINE_NUMBER(68);
	frame[3].i = (jint(0));
	LINE_NUMBER(69);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getFileName"_j)));
	LINE_NUMBER(70);
	goto label_19;
	}
label_8:;
	{
	LINE_NUMBER(72);
	frame[3].i = (jint(0));
	LINE_NUMBER(73);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getLineNumber"_j)));
	LINE_NUMBER(74);
	goto label_19;
	}
label_9:;
	{
	LINE_NUMBER(76);
	frame[3].i = (jint(0));
	LINE_NUMBER(77);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getColumnNumber"_j)));
	LINE_NUMBER(78);
	goto label_19;
	}
label_10:;
	{
	LINE_NUMBER(80);
	frame[3].i = (jint(0));
	LINE_NUMBER(81);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getEvalOrigin"_j)));
	LINE_NUMBER(82);
	goto label_19;
	}
label_11:;
	{
	LINE_NUMBER(84);
	frame[3].i = (jint(0));
	LINE_NUMBER(85);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"isToplevel"_j)));
	LINE_NUMBER(86);
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(88);
	frame[3].i = (jint(0));
	LINE_NUMBER(89);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"isEval"_j)));
	LINE_NUMBER(90);
	goto label_19;
	}
label_13:;
	{
	LINE_NUMBER(92);
	frame[3].i = (jint(0));
	LINE_NUMBER(93);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"isNative"_j)));
	LINE_NUMBER(94);
	goto label_19;
	}
label_14:;
	{
	LINE_NUMBER(96);
	frame[3].i = (jint(0));
	LINE_NUMBER(97);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"isConstructor"_j)));
	LINE_NUMBER(98);
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(100);
	frame[3].i = (jint(0));
	LINE_NUMBER(101);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(102);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(104);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_rhino_NativeCallSite_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeCallSite_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"CallSite"_j))), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeCallSite_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:execIdCall", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"CallSite"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(116);
	switch((frame[6].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_5;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		case 7: goto label_8;
		case 8: goto label_9;
		case 9: goto label_5;
		case 10: goto label_10;
		case 11: goto label_10;
		case 12: goto label_10;
		case 13: goto label_10;
		case 14: goto label_10;
		case 15: goto label_11;
		default: goto label_12;
	}
	}
label_4:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)SM_rhino_NativeCallSite_make_rhino_Scriptable_rhino_Scriptable_R_rhino_NativeCallSite(ctx, (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)SM_rhino_NativeCallSite_getFunctionName_rhino_Scriptable_R_java_lang_Object(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)SM_rhino_NativeCallSite_getFileName_rhino_Scriptable_R_java_lang_Object(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)SM_rhino_NativeCallSite_getLineNumber_rhino_Scriptable_R_java_lang_Object(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(129);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(137);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_rhino_NativeCallSite_js_toString_rhino_Scriptable_R_java_lang_Object(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(141);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeCallSite_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[0].o)))->F_element;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_1:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = (jobject)((func_rhino_ScriptStackElement_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptStackElement_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeCallSite_js_toString_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:js_toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCallSite(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(154);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeCallSite)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(157);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(158);
	clinit_rhino_NativeCallSite(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(160);
	frame[1].o = (checkCast(ctx, &class_rhino_NativeCallSite, (frame[0].o)));
	LINE_NUMBER(161);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[1].o)))->F_element;
	((func_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeCallSite_getFunctionName_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:getFunctionName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCallSite(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(167);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeCallSite)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(170);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(171);
	clinit_rhino_NativeCallSite(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(173);
	frame[1].o = (checkCast(ctx, &class_rhino_NativeCallSite, (frame[0].o)));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[1].o)))->F_element;
	if (sp[0].o != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[1].o)))->F_element;
	sp[0].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK(sp[0].o))->F_functionName;
	sp += 1;
	}
label_7:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_NativeCallSite_getFileName_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:getFileName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCallSite(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(178);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeCallSite)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(181);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(182);
	clinit_rhino_NativeCallSite(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(184);
	frame[1].o = (checkCast(ctx, &class_rhino_NativeCallSite, (frame[0].o)));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[1].o)))->F_element;
	if (sp[0].o != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[1].o)))->F_element;
	sp[0].o = (jobject)((rhino_ScriptStackElement *) NULL_CHECK(sp[0].o))->F_fileName;
	sp += 1;
	}
label_7:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_NativeCallSite_getLineNumber_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:getLineNumber", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCallSite(ctx);
	frame[0].o = param0;
label_0:;
	{
	LINE_NUMBER(189);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeCallSite)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(192);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(193);
	clinit_rhino_NativeCallSite(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(195);
	frame[1].o = (checkCast(ctx, &class_rhino_NativeCallSite, (frame[0].o)));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[1].o)))->F_element;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[1].o)))->F_element;
	if (((jint)((rhino_ScriptStackElement *) NULL_CHECK(sp[0].o))->F_lineNumber) >= 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(197);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((rhino_NativeCallSite *) NULL_CHECK((frame[1].o)))->F_element;
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((rhino_ScriptStackElement *) NULL_CHECK(sp[0].o))->F_lineNumber));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeCallSite_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCallSite:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(210);
	frame[2].i = (jint(0));
	LINE_NUMBER(211);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(214);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 6: goto label_3;
		case 7: goto label_4;
		case 8: goto label_5;
		case 9: goto label_6;
		case 10: goto label_7;
		case 11: goto label_8;
		case 12: goto label_6;
		case 13: goto label_9;
		case 14: goto label_6;
		case 15: goto label_10;
		default: goto label_6;
	}
	}
label_3:;
	{
	LINE_NUMBER(216);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"isEval"_j)));
	LINE_NUMBER(217);
	frame[2].i = (12);
	LINE_NUMBER(218);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(220);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getThis"_j)));
	LINE_NUMBER(221);
	frame[2].i = (jint(2));
	LINE_NUMBER(222);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(225);
	if ((frame[4].i) != (105)) goto label_16;
	}
	{
	LINE_NUMBER(226);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"isNative"_j)));
	LINE_NUMBER(227);
	frame[2].i = (13);
	goto label_6;
	}
label_16:;
	{
	LINE_NUMBER(228);
	if ((frame[4].i) != (116)) goto label_6;
	}
	{
	LINE_NUMBER(229);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(230);
	frame[2].i = (15);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(234);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"isToplevel"_j)));
	LINE_NUMBER(235);
	frame[2].i = (11);
	LINE_NUMBER(236);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(4)));
	switch(temp0) {
		case 105: goto label_23;
		case 116: goto label_24;
		case 117: goto label_25;
		case 121: goto label_26;
		default: goto label_27;
	}
	}
label_23:;
	{
	LINE_NUMBER(240);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getFileName"_j)));
	LINE_NUMBER(241);
	frame[2].i = (7);
	LINE_NUMBER(242);
	goto label_6;
	}
label_24:;
	{
	LINE_NUMBER(244);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(245);
	frame[2].i = (jint(1));
	LINE_NUMBER(246);
	goto label_6;
	}
label_25:;
	{
	LINE_NUMBER(248);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getFunction"_j)));
	LINE_NUMBER(249);
	frame[2].i = (jint(4));
	LINE_NUMBER(250);
	goto label_6;
	}
label_26:;
	{
	LINE_NUMBER(252);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getTypeName"_j)));
	LINE_NUMBER(253);
	frame[2].i = (jint(3));
	LINE_NUMBER(254);
	goto label_6;
	}
label_27:;
	LINE_NUMBER(256);
	goto label_6;
label_9:;
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	switch(temp0) {
		case 69: goto label_36;
		case 76: goto label_37;
		case 77: goto label_38;
		case 111: goto label_39;
		default: goto label_40;
	}
	}
label_36:;
	{
	LINE_NUMBER(260);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getEvalOrigin"_j)));
	LINE_NUMBER(261);
	frame[2].i = (10);
	LINE_NUMBER(262);
	goto label_6;
	}
label_37:;
	{
	LINE_NUMBER(264);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getLineNumber"_j)));
	LINE_NUMBER(265);
	frame[2].i = (8);
	LINE_NUMBER(266);
	goto label_6;
	}
label_38:;
	{
	LINE_NUMBER(268);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getMethodName"_j)));
	LINE_NUMBER(269);
	frame[2].i = (6);
	LINE_NUMBER(270);
	goto label_6;
	}
label_39:;
	{
	LINE_NUMBER(272);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"isConstructor"_j)));
	LINE_NUMBER(273);
	frame[2].i = (14);
	LINE_NUMBER(274);
	goto label_6;
	}
label_40:;
	LINE_NUMBER(276);
	goto label_6;
label_10:;
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	frame[4].i = temp0;
	LINE_NUMBER(279);
	if ((frame[4].i) != (67)) goto label_50;
	}
	{
	LINE_NUMBER(280);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getColumnNumber"_j)));
	LINE_NUMBER(281);
	frame[2].i = (9);
	goto label_6;
	}
label_50:;
	{
	LINE_NUMBER(282);
	if ((frame[4].i) != (70)) goto label_6;
	}
	{
	LINE_NUMBER(283);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getFunctionName"_j)));
	LINE_NUMBER(284);
	frame[2].i = (jint(5));
	}
label_6:;
	{
	LINE_NUMBER(288);
	if ((frame[3].o) == nullptr) goto label_55;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_55;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_55;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_55:;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeCallSite[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeCallSite_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeCallSite_getClassName_R_java_lang_String,
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
	(void *) M_rhino_NativeCallSite_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_NativeCallSite_initPrototypeId_int,
	(void *) M_rhino_NativeCallSite_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeCallSite_setElement_rhino_ScriptStackElement,
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
	{ "setElement", "(Lrhino/ScriptStackElement;)V" },
};

static FieldMetadata fields[] {
	{ "CALLSITE_TAG", &class_java_lang_String, (intptr_t) &SF_rhino_NativeCallSite_CALLSITE_TAG, "Ljava/lang/String;", 26 },
	{ "element", &class_rhino_ScriptStackElement, offsetof(rhino_NativeCallSite, F_element), "Lrhino/ScriptStackElement;", 2 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_constructor, "I", 26 },
	{ "Id_getThis", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_getThis, "I", 26 },
	{ "Id_getTypeName", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_getTypeName, "I", 26 },
	{ "Id_getFunction", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_getFunction, "I", 26 },
	{ "Id_getFunctionName", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_getFunctionName, "I", 26 },
	{ "Id_getMethodName", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_getMethodName, "I", 26 },
	{ "Id_getFileName", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_getFileName, "I", 26 },
	{ "Id_getLineNumber", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_getLineNumber, "I", 26 },
	{ "Id_getColumnNumber", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_getColumnNumber, "I", 26 },
	{ "Id_getEvalOrigin", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_getEvalOrigin, "I", 26 },
	{ "Id_isToplevel", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_isToplevel, "I", 26 },
	{ "Id_isEval", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_isEval, "I", 26 },
	{ "Id_isNative", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_isNative, "I", 26 },
	{ "Id_isConstructor", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_isConstructor, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_NativeCallSite_Id_toString, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeCallSite_MAX_PROTOTYPE_ID, "I", 26 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeCallSite_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "make", (intptr_t) SM_rhino_NativeCallSite_make_rhino_Scriptable_rhino_Scriptable_R_rhino_NativeCallSite, 0, "(Lrhino/Scriptable;Lrhino/Scriptable;)Lrhino/NativeCallSite;", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeCallSite, 0, "()V", 2 },
	{ "setElement", (intptr_t) M_rhino_NativeCallSite_setElement_rhino_ScriptStackElement, VTABLE_rhino_NativeCallSite_setElement_rhino_ScriptStackElement, "(Lrhino/ScriptStackElement;)V", 0 },
	{ "getClassName", (intptr_t) M_rhino_NativeCallSite_getClassName_R_java_lang_String, VTABLE_rhino_NativeCallSite_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeCallSite_initPrototypeId_int, VTABLE_rhino_NativeCallSite_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeCallSite_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeCallSite_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_rhino_NativeCallSite_toString_R_java_lang_String, VTABLE_rhino_NativeCallSite_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "js_toString", (intptr_t) SM_rhino_NativeCallSite_js_toString_rhino_Scriptable_R_java_lang_Object, 0, "(Lrhino/Scriptable;)Ljava/lang/Object;", 10 },
	{ "getFunctionName", (intptr_t) SM_rhino_NativeCallSite_getFunctionName_rhino_Scriptable_R_java_lang_Object, 0, "(Lrhino/Scriptable;)Ljava/lang/Object;", 10 },
	{ "getFileName", (intptr_t) SM_rhino_NativeCallSite_getFileName_rhino_Scriptable_R_java_lang_Object, 0, "(Lrhino/Scriptable;)Ljava/lang/Object;", 10 },
	{ "getLineNumber", (intptr_t) SM_rhino_NativeCallSite_getLineNumber_rhino_Scriptable_R_java_lang_Object, 0, "(Lrhino/Scriptable;)Ljava/lang/Object;", 10 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeCallSite_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeCallSite_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
};

Class class_rhino_NativeCallSite{
		.nativeName = (intptr_t) "rhino/NativeCallSite",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeCallSite),
		.classVtable = (intptr_t) vtable_rhino_NativeCallSite,
		.staticInitializer = (intptr_t) clinit_rhino_NativeCallSite,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeCallSite,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 114,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeCallSite = registerClass(&class_rhino_NativeCallSite);

}
