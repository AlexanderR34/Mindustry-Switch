#include "rhino/NativeJavaTopPackage.h"
#include "rhino/Function.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/NativeJavaTopPackage.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/Wrapper.h"
#include "rhino/EvaluatorException.h"
#include "rhino/IdFunctionCall.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/NativeJavaPackage.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jobject SF_rhino_NativeJavaTopPackage_commonPackages;
jobject SF_rhino_NativeJavaTopPackage_FTAG;
jint SF_rhino_NativeJavaTopPackage_Id_getClass;

void mark_rhino_NativeJavaTopPackage(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeJavaTopPackage_commonPackages)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeJavaTopPackage_commonPackages)->clazz)->markFunction)((jobject) SF_rhino_NativeJavaTopPackage_commonPackages, mark, depth + 1);
		if (SF_rhino_NativeJavaTopPackage_FTAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeJavaTopPackage_FTAG)->clazz)->markFunction)((jobject) SF_rhino_NativeJavaTopPackage_FTAG, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_NativeJavaPackage(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeJavaTopPackage *) object;
}

void init_rhino_NativeJavaTopPackage_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaTopPackage:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaTopPackage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	init_rhino_NativeJavaPackage_java_lang_String_java_lang_ClassLoader(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaTopPackage_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaTopPackage:call", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_rhino_NativeJavaTopPackage_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaTopPackage_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaTopPackage_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaTopPackage:construct", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(41);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(42);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) == 0) goto label_2;
	}
	{
	LINE_NUMBER(43);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))));
	LINE_NUMBER(44);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Wrapper)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[5].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[5].o))));
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(47);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_ClassLoader)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(48);
	frame[4].o = (checkCast(ctx, &class_java_lang_ClassLoader, (frame[5].o)));
	}
label_2:;
	{
	LINE_NUMBER(51);
	if ((frame[4].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.classloader"_j))));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(55);
	clinit_rhino_NativeJavaPackage(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaPackage);
	init_rhino_NativeJavaPackage_java_lang_String_java_lang_ClassLoader(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(56);
	SM_rhino_ScriptRuntime_setObjectProtoAndParent_rhino_ScriptableObject_rhino_Scriptable(ctx, (frame[5].o), (frame[2].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeJavaTopPackage_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaTopPackage:init", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaTopPackage(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(62);
	clinit_rhino_NativeJavaTopPackage(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaTopPackage);
	init_rhino_NativeJavaTopPackage_java_lang_ClassLoader(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(63);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	((func_rhino_NativeJavaTopPackage_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeJavaTopPackage_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	((func_rhino_NativeJavaTopPackage_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_NativeJavaTopPackage_setParentScope_rhino_Scriptable])(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(66);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[5].i;
	clinit_rhino_NativeJavaTopPackage(ctx);
	sp[0].o = (jobject)SF_rhino_NativeJavaTopPackage_commonPackages;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(67);
	frame[6].o = (frame[4].o);
	LINE_NUMBER(68);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[7].i;
	clinit_rhino_NativeJavaTopPackage(ctx);
	sp[0].o = (jobject)SF_rhino_NativeJavaTopPackage_commonPackages;
	if (temp0 == (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->length)) goto label_10;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = frame[6].o;
	clinit_rhino_NativeJavaTopPackage(ctx);
	sp[1].o = (jobject)SF_rhino_NativeJavaTopPackage_commonPackages;
	sp[0].o = (jobject)((func_rhino_NativeJavaPackage_forcePackage_java_lang_String_rhino_Scriptable_R_rhino_NativeJavaPackage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeJavaPackage_forcePackage_java_lang_String_rhino_Scriptable_R_rhino_NativeJavaPackage])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (frame[7].i))), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(68);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(66);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(74);
	clinit_rhino_IdFunctionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IdFunctionObject);
	sp[1].o = frame[4].o;
	clinit_rhino_NativeJavaTopPackage(ctx);
	sp[2].o = (jobject)SF_rhino_NativeJavaTopPackage_FTAG;
	init_rhino_IdFunctionObject_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)), (((jobject) createStringLiteral(ctx, u8"getClass"_j))), (jint(1)), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getTopPackageNames_R_Array1_java_lang_String(ctx);
	frame[6].o = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_NativeJavaPackage, (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	frame[7].o = sp[0].o;
	LINE_NUMBER(82);
	frame[8].i = (jint(0));
	}
label_16:;
	{
	if ((frame[8].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_17;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)((func_rhino_NativeJavaTopPackage_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_NativeJavaTopPackage_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))), (frame[4].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_rhino_NativeJavaPackage, sp[1].o));
	LINE_NUMBER(82);
	INST_IINC(8, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(88);
	frame[8].o = (checkCast(ctx, &class_rhino_ScriptableObject, (frame[1].o)));
	LINE_NUMBER(90);
	if ((frame[2].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(91);
	((func_rhino_IdFunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_IdFunctionObject_sealObject])(ctx, (frame[5].o));
	}
label_21:;
	{
	LINE_NUMBER(93);
	((func_rhino_IdFunctionObject_exportAsScopeProperty) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_IdFunctionObject_exportAsScopeProperty])(ctx, (frame[5].o));
	LINE_NUMBER(94);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"Packages"_j))), (frame[4].o), (jint(2)));
	LINE_NUMBER(95);
	frame[9].i = (jint(0));
	}
label_25:;
	{
	if ((frame[9].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_26;
	}
	{
	LINE_NUMBER(96);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[8].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[9].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i))), (jint(2)));
	LINE_NUMBER(95);
	INST_IINC(9, 1);
	goto label_25;
	}
label_26:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaTopPackage_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaTopPackage:execIdCall", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeJavaTopPackage(ctx);
	sp[1].o = (jobject)SF_rhino_NativeJavaTopPackage_FTAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	if (temp0 != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)M_rhino_NativeJavaTopPackage_js_getClass_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException])(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaTopPackage_js_getClass_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaTopPackage:js_getClass", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(113);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= 0) goto label_1;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), &class_rhino_Wrapper)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(114);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))))))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(119);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[6].o), (46), (frame[7].i));
	frame[8].i = temp0;
	LINE_NUMBER(122);
	if ((frame[8].i) != (jint(-1))) goto label_8;
	}
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	jint temp1 = frame[8].i;
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[9].o), (frame[4].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(126);
	if ((isInstance(ctx, (frame[10].o), &class_rhino_Scriptable)) != 0) goto label_14;
	}
	LINE_NUMBER(127);
	goto label_1;
label_14:;
	{
	LINE_NUMBER(128);
	frame[4].o = (checkCast(ctx, &class_rhino_Scriptable, (frame[10].o)));
	LINE_NUMBER(129);
	if ((frame[8].i) != (jint(-1))) goto label_17;
	}
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_17:;
	{
	LINE_NUMBER(131);
	frame[7].i = ((frame[8].i) + (jint(1)));
	LINE_NUMBER(132);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.not.java.obj"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeJavaTopPackage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_NativeJavaPackage(ctx);
	SF_rhino_NativeJavaTopPackage_Id_getClass = jint(1);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaTopPackage:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaTopPackage(ctx);
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (8));
	jint temp0 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"java"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"lang"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"reflect"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"java"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"io"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"java"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"math"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"java"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"net"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"java"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"util"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"zip"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"java"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"text"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"resources"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"java"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"applet"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"javax"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"swing"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	clinit_rhino_NativeJavaTopPackage(ctx);
	SF_rhino_NativeJavaTopPackage_commonPackages = sp[0].o;
	LINE_NUMBER(137);
	clinit_rhino_NativeJavaTopPackage(ctx);
	SF_rhino_NativeJavaTopPackage_FTAG = (((jobject) createStringLiteral(ctx, u8"JavaTopPackage"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeJavaTopPackage[] {
	(void *) M_rhino_NativeJavaPackage_hashCode_R_int,
	(void *) M_rhino_NativeJavaPackage_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeJavaPackage_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeJavaPackage_getClassName_R_java_lang_String,
	(void *) M_rhino_NativeJavaPackage_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaPackage_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaPackage_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
	(void *) M_rhino_ScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_ScriptableObject_setAttributes_java_lang_String_int,
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
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
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
	(void *) M_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_forcePackage_java_lang_String_rhino_Scriptable_R_rhino_NativeJavaPackage,
	(void *) M_rhino_NativeJavaPackage_getPkgProperty_java_lang_String_rhino_Scriptable_boolean_R_java_lang_Object,
	(void *) M_rhino_NativeJavaTopPackage_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeJavaTopPackage_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_NativeJavaTopPackage_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeJavaTopPackage_js_getClass_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
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
	{ "forcePackage", "(Ljava/lang/String;Lrhino/Scriptable;)Lrhino/NativeJavaPackage;" },
	{ "getPkgProperty", "(Ljava/lang/String;Lrhino/Scriptable;Z)Ljava/lang/Object;" },
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "construct", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_getClass", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
};

static jclass interfaces[] { &class_rhino_Function, &class_rhino_IdFunctionCall, };

static FieldMetadata fields[] {
	{ "commonPackages", getArrayClass(&class_java_lang_String, 2), (intptr_t) &SF_rhino_NativeJavaTopPackage_commonPackages, "[[Ljava/lang/String;", 26 },
	{ "FTAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeJavaTopPackage_FTAG, "Ljava/lang/Object;", 26 },
	{ "Id_getClass", &class_int, (intptr_t) &SF_rhino_NativeJavaTopPackage_Id_getClass, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeJavaTopPackage_java_lang_ClassLoader, 0, "(Ljava/lang/ClassLoader;)V", 1 },
	{ "call", (intptr_t) M_rhino_NativeJavaTopPackage_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeJavaTopPackage_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "construct", (intptr_t) M_rhino_NativeJavaTopPackage_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_NativeJavaTopPackage_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "init", (intptr_t) SM_rhino_NativeJavaTopPackage_init_rhino_Context_rhino_Scriptable_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)V", 9 },
	{ "execIdCall", (intptr_t) M_rhino_NativeJavaTopPackage_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeJavaTopPackage_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "js_getClass", (intptr_t) M_rhino_NativeJavaTopPackage_js_getClass_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_NativeJavaTopPackage_js_getClass_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeJavaTopPackage, 0, "()V", 8 },
};

Class class_rhino_NativeJavaTopPackage{
		.nativeName = (intptr_t) "rhino/NativeJavaTopPackage",
		.parentClass = (intptr_t) &class_rhino_NativeJavaPackage,
		.size = sizeof(rhino_NativeJavaTopPackage),
		.classVtable = (intptr_t) vtable_rhino_NativeJavaTopPackage,
		.staticInitializer = (intptr_t) clinit_rhino_NativeJavaTopPackage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeJavaTopPackage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 91,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeJavaTopPackage = registerClass(&class_rhino_NativeJavaTopPackage);

}
