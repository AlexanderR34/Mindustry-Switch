#include "rhino/JavaAdapter.h"
#include "rhino/Function.h"
#include "java/lang/StringBuilder.h"
#include "rhino/JavaAdapter.h"
#include "rhino/WrapFactory.h"
#include "java/util/ArrayList.h"
#include "rhino/Callable.h"
#include "rhino/EvaluatorException.h"
#include "java/lang/reflect/Constructor.h"
#include "rhino/IdFunctionCall.h"
#include "rhino/ObjToIntMap.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/NoSuchMethodException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/Modifier.h"
#include "rhino/Context.h"
#include "java/lang/Void.h"
#include "rhino/IdFunctionObject.h"
#include "java/util/Map.h"
#include "rhino/MemberBox.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/classfile/ClassFileWriter.h"
#include "rhino/JavaAdapter_JavaAdapterSignature.h"
#include "rhino/JavaAdapter_invoke_rhino_ContextAction_1.h"
#include "rhino/JavaAdapter_invoke_rhino_ContextAction_0.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"
#include "java/lang/Boolean.h"
#include "rhino/Scriptable.h"
#include "rhino/Undefined.h"
#include "rhino/GeneratedClassLoader.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "rhino/ClassCache.h"
#include "rhino/ContextFactory.h"
#include "rhino/Script.h"
#include "java/util/HashSet.h"
#include "rhino/NativeObject.h"
#include "rhino/ContextAction.h"
#include "rhino/NativeJavaClass.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/Long.h"
#include "rhino/Wrapper.h"
#include "rhino/ObjToIntMap_Iterator.h"
#include "rhino/NativeJavaObject.h"
#include "rhino/JavaMembers.h"
#include "rhino/NativeJavaMethod.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jobject SF_rhino_JavaAdapter_FTAG;
jint SF_rhino_JavaAdapter_Id_JavaAdapter;

void mark_rhino_JavaAdapter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_JavaAdapter_FTAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_JavaAdapter_FTAG)->clazz)->markFunction)((jobject) SF_rhino_JavaAdapter_FTAG, mark, depth + 1);
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
	auto self = (rhino_JavaAdapter *) object;
}

void init_rhino_JavaAdapter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:init", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(58);
	clinit_rhino_JavaAdapter(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaAdapter);
	init_rhino_JavaAdapter(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(59);
	clinit_rhino_IdFunctionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IdFunctionObject);
	sp[1].o = frame[3].o;
	clinit_rhino_JavaAdapter(ctx);
	sp[2].o = (jobject)SF_rhino_JavaAdapter_FTAG;
	init_rhino_IdFunctionObject_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)), (((jobject) createStringLiteral(ctx, u8"JavaAdapter"_j))), (jint(1)), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(61);
	((func_rhino_IdFunctionObject_markAsConstructor_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_IdFunctionObject_markAsConstructor_rhino_Scriptable])(ctx, (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(62);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(63);
	((func_rhino_IdFunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_IdFunctionObject_sealObject])(ctx, (frame[4].o));
	}
label_4:;
	{
	LINE_NUMBER(65);
	((func_rhino_IdFunctionObject_exportAsScopeProperty) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_IdFunctionObject_exportAsScopeProperty])(ctx, (frame[4].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_JavaAdapter_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:execIdCall", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[1].o;
	clinit_rhino_JavaAdapter(ctx);
	sp[1].o = (jobject)SF_rhino_JavaAdapter_FTAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	if (temp0 != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_js_createAdapter_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException])(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_convertResult_java_lang_Object_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:convertResult", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_createAdapterWrapper_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:createAdapterWrapper", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(91);
	clinit_rhino_NativeJavaObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaObject);
	init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class_boolean(ctx, sp[0].o, (frame[2].o), (frame[1].o), (jobject(nullptr)), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(92);
	((func_rhino_NativeJavaObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeJavaObject_setPrototype_rhino_Scriptable])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_getAdapterSelf_java_lang_Class_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:getAdapterSelf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"self"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_js_createAdapter_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[24];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:js_createAdapter", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(103);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(104);
	if ((frame[3].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.adapter.zero.args"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(115);
	frame[4].i = (jint(0));
	}
label_11:;
	{
	if ((frame[4].i) >= ((frame[3].i) - (jint(1)))) goto label_12;
	}
	{
	LINE_NUMBER(116);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(121);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_NativeObject)) == 0) goto label_15;
	}
	LINE_NUMBER(122);
	goto label_12;
label_15:;
	{
	LINE_NUMBER(125);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_NativeJavaClass)) != 0) goto label_17;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_rhino_NativeJavaObject)) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_rhino_NativeJavaObject_unwrap_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeJavaObject, (frame[5].o))))->vtable)[VTABLE_rhino_NativeJavaObject_unwrap_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_NativeJavaObject, (frame[5].o))));
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Class)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	clinit_rhino_NativeJavaClass(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_NativeJavaClass);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((func_rhino_NativeJavaObject_unwrap_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeJavaObject, (frame[5].o))))->vtable)[VTABLE_rhino_NativeJavaObject_unwrap_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_NativeJavaObject, (frame[5].o))));
	init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class(ctx, sp[1].o, sp[2].o, (checkCast(ctx, &class_java_lang_Class, sp[3].o)));
	frame[5].o = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_17:;
	{
	LINE_NUMBER(129);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_NativeJavaClass)) != 0) goto label_19;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.not.java.class.arg"_j));
	jint temp0 = frame[4].i;
	LINE_NUMBER(131);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, temp0);
	sp[2].o = frame[5].o;
	LINE_NUMBER(132);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	LINE_NUMBER(130);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(115);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(135);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(136);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Class, (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(137);
	frame[7].i = (jint(0));
	LINE_NUMBER(138);
	frame[8].i = (jint(0));
	}
label_27:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_28;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_rhino_NativeJavaClass_getClassObject_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeJavaClass, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[8].i))))))->vtable)[VTABLE_rhino_NativeJavaClass_getClassObject_R_java_lang_Class])(ctx, (checkCast(ctx, &class_rhino_NativeJavaClass, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[8].i))))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_31;
	}
	{
	LINE_NUMBER(141);
	if ((frame[5].o) == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.only.one.super"_j));
	sp[1].o = frame[5].o;
	LINE_NUMBER(143);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[9].o));
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_33:;
	{
	LINE_NUMBER(145);
	frame[5].o = (frame[9].o);
	goto label_37;
	}
label_31:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[9].o);
	}
label_37:;
	{
	LINE_NUMBER(138);
	INST_IINC(8, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(151);
	if ((frame[5].o) != nullptr) goto label_38;
	}
	{
	LINE_NUMBER(152);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	frame[5].o = sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Class, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(156);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[8].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(158);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(160);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_getAdapterClass_rhino_Scriptable_java_lang_Class_Array1_java_lang_Class_rhino_Scriptable_R_java_lang_Class(ctx, (frame[1].o), (frame[5].o), (frame[8].o), (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(163);
	frame[12].i = (((frame[3].i) - (frame[4].i)) - (jint(1)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(165);
	if ((frame[12].i) <= 0) goto label_44;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[12].i) + (jint(2))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(170);
	ARRAY_ACCESS(jobject, (frame[13].o), (jint(0))) = (frame[9].o);
	LINE_NUMBER(171);
	sp[0].o = frame[13].o;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((func_rhino_Context_getFactory_R_rhino_ContextFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(172);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[4].i) + (jint(1))), (frame[13].o), (jint(2)), (frame[12].i));
	LINE_NUMBER(174);
	clinit_rhino_NativeJavaClass(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaClass);
	init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class_boolean(ctx, sp[0].o, (frame[1].o), (frame[10].o), (jint(1)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(176);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[14].o)))->F_members;
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK(sp[0].o))->F_ctors;
	frame[15].o = sp[0].o;
	LINE_NUMBER(177);
	jint temp1 = (jint)((func_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int])(ctx, (frame[15].o), (frame[0].o), (frame[13].o));
	frame[16].i = temp1;
	LINE_NUMBER(178);
	if ((frame[16].i) >= 0) goto label_53;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)SM_rhino_NativeJavaMethod_scriptSignature_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(180);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.no.java.ctor"_j));
	sp[1].o = frame[10].o;
	LINE_NUMBER(181);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = frame[17].o;
	LINE_NUMBER(180);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_53:;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[15].o)))->F_methods;
	sp[0].o = (jobject)SM_rhino_NativeJavaClass_constructInternal_Array1_java_lang_Object_rhino_MemberBox_R_java_lang_Object(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[16].i))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(186);
	goto label_59;
	}
label_44:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(2)));
	jint temp0 = jint(0);
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ContextFactoryClass;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	frame[13].o = sp[0].o;
	LINE_NUMBER(191);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[9].o);
	jint temp2 = jint(1);
	sp[1].o = (jobject)((func_rhino_Context_getFactory_R_rhino_ContextFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getFactory_R_rhino_ContextFactory])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	frame[14].o = sp[0].o;
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, (frame[10].o), (frame[13].o));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[14].o));
	frame[11].o = sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_getAdapterSelf_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, (frame[10].o), (frame[11].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(197);
	if ((isInstance(ctx, (frame[13].o), &class_rhino_Wrapper)) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[13].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[13].o))));
	frame[14].o = sp[0].o;
	LINE_NUMBER(199);
	if ((isInstance(ctx, (frame[14].o), &class_rhino_Scriptable)) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(200);
	if ((isInstance(ctx, (frame[14].o), &class_rhino_ScriptableObject)) == 0) goto label_66;
	}
	{
	LINE_NUMBER(201);
	SM_rhino_ScriptRuntime_setObjectProtoAndParent_rhino_ScriptableObject_rhino_Scriptable(ctx, (checkCast(ctx, &class_rhino_ScriptableObject, (frame[14].o))), (frame[1].o));
	}
label_66:;
	LINE_NUMBER(204);
	INST_ALOAD(14);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(207);
	INST_ALOAD(13);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(208);
	frame[13].o = sp[0].o;
	LINE_NUMBER(209);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[13].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_getObjectFunctionNames_rhino_Scriptable_R_rhino_ObjToIntMap(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:getObjectFunctionNames", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getPropertyIds_rhino_Scriptable_R_Array1_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(215);
	clinit_rhino_ObjToIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(216);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(217);
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))), &class_java_lang_String)) != 0) goto label_6;
	}
	LINE_NUMBER(218);
	goto label_8;
label_6:;
	{
	LINE_NUMBER(219);
	frame[4].o = (checkCast(ctx, &class_java_lang_String, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))));
	LINE_NUMBER(220);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(221);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Function)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(222);
	frame[6].o = (checkCast(ctx, &class_rhino_Function, (frame[5].o)));
	LINE_NUMBER(223);
	sp[0].o = frame[6].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"length"_j));
	LINE_NUMBER(224);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(223);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, sp[0].o);
	frame[7].i = temp0;
	LINE_NUMBER(225);
	if ((frame[7].i) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(226);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(228);
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, (frame[2].o), (frame[4].o), (frame[7].i));
	}
label_8:;
	{
	LINE_NUMBER(216);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_getAdapterClass_rhino_Scriptable_java_lang_Class_Array1_java_lang_Class_rhino_Scriptable_R_java_lang_Class(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:getAdapterClass", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)SM_rhino_ClassCache_get_rhino_Scriptable_R_rhino_ClassCache(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(237);
	sp[0].o = frame[4].o;
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_rhino_ClassCache_getInterfaceAdapterCacheMap_R_java_util_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ClassCache_getInterfaceAdapterCacheMap_R_java_util_Map])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(240);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_getObjectFunctionNames_rhino_Scriptable_R_rhino_ObjToIntMap(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(242);
	clinit_rhino_JavaAdapter$JavaAdapterSignature(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaAdapter$JavaAdapterSignature);
	init_rhino_JavaAdapter$JavaAdapterSignature_java_lang_Class_Array1_java_lang_Class_rhino_ObjToIntMap(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(244);
	if ((frame[8].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(245);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"adapter"_j))));
	jint temp0 = (jint)((func_rhino_ClassCache_newClassSerialNumber_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ClassCache_newClassSerialNumber_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_createAdapterCode_rhino_ObjToIntMap_java_lang_String_java_lang_Class_Array1_java_lang_Class_java_lang_String_R_Array1_byte(ctx, (frame[6].o), (frame[9].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_loadAdapterClass_java_lang_String_Array1_byte_R_java_lang_Class(ctx, (frame[9].o), (frame[10].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(250);
	jint temp1 = (jint)((func_rhino_ClassCache_isCachingEnabled_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ClassCache_isCachingEnabled_R_boolean])(ctx, (frame[4].o));
	if (temp1 == 0) goto label_7;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[7].o), (frame[8].o));
	}
label_7:;
	{
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_createAdapterCode_rhino_ObjToIntMap_java_lang_String_java_lang_Class_Array1_java_lang_Class_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[29];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:createAdapterCode", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(262);
	clinit_rhino_classfile_ClassFileWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_classfile_ClassFileWriter);
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	LINE_NUMBER(263);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	init_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"<adapter>"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(265);
	((func_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"factory"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/ContextFactory;"_j))), (17));
	LINE_NUMBER(268);
	((func_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"delegee"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))), (17));
	LINE_NUMBER(271);
	((func_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addField_java_lang_String_java_lang_String_short])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"self"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))), (17));
	LINE_NUMBER(274);
	if ((frame[3].o) != nullptr) goto label_10;
	}
	INST_ICONST(0);
	goto label_11;
label_10:;
	INST_ALOAD(3);
	INST_ARRAYLENGTH();
label_11:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(275);
	frame[7].i = (jint(0));
	}
label_13:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_14;
	}
	{
	LINE_NUMBER(276);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))));
	((func_rhino_classfile_ClassFileWriter_addInterface_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInterface_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(275);
	INST_IINC(7, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (46), (47));
	frame[7].o = sp[0].o;
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, (frame[2].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(282);
	frame[9].o = (frame[8].o);
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_20:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_21;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(283);
	jint temp0 = (jint)((func_java_lang_reflect_Constructor_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getModifiers_R_int])(ctx, (frame[12].o));
	frame[13].i = temp0;
	LINE_NUMBER(284);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, (frame[13].i));
	if (temp1 != 0) goto label_24;
	}
	{
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isProtected_int_R_boolean(ctx, (frame[13].i));
	if (temp0 == 0) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(285);
	SM_rhino_JavaAdapter_generateCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_reflect_Constructor(ctx, (frame[5].o), (frame[1].o), (frame[7].o), (frame[12].o));
	}
label_25:;
	{
	LINE_NUMBER(282);
	INST_IINC(11, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(288);
	SM_rhino_JavaAdapter_generateSerialCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String(ctx, (frame[5].o), (frame[1].o), (frame[7].o));
	LINE_NUMBER(289);
	if ((frame[4].o) == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(290);
	SM_rhino_JavaAdapter_generateEmptyCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String(ctx, (frame[5].o), (frame[1].o), (frame[7].o), (frame[4].o));
	}
label_27:;
	{
	LINE_NUMBER(293);
	clinit_rhino_ObjToIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(294);
	clinit_rhino_ObjToIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(297);
	frame[11].i = (jint(0));
	}
label_31:;
	{
	if ((frame[11].i) >= (frame[6].i)) goto label_32;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[11].i))))->vtable)[VTABLE_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[11].i))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(299);
	frame[13].o = (frame[12].o);
	frame[14].i = (((jarray) nullCheck(ctx, (frame[13].o)))->length);
	frame[15].i = (jint(0));
	}
label_35:;
	{
	if ((frame[15].i) >= (frame[14].i)) goto label_36;
	}
	{
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[15].i)));
	LINE_NUMBER(300);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[16].o));
	frame[17].i = temp0;
	LINE_NUMBER(301);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, (frame[17].i));
	if (temp1 != 0) goto label_39;
	}
	{
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isFinal_int_R_boolean(ctx, (frame[17].i));
	if (temp0 != 0) goto label_39;
	}
	{
	jint temp0 = (jint)SM_rhino_JavaAdapter_methodIsDefault_java_lang_reflect_Method_R_boolean(ctx, (frame[16].o));
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[16].o));
	jint temp0 = (jint)((func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_40;
	}
	LINE_NUMBER(302);
	goto label_39;
label_40:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[16].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[16].o));
	frame[19].o = sp[0].o;
	LINE_NUMBER(306);
	jint temp0 = (jint)((func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[18].o));
	if (temp0 != 0) goto label_44;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, (frame[2].o), (frame[18].o), (frame[19].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(312);
	goto label_39;
label_2:;
	LINE_NUMBER(313);
	INST_ASTORE(20);
label_44:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_getMethodSignature_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_String(ctx, (frame[16].o), (frame[19].o));
	frame[20].o = sp[0].o;
	LINE_NUMBER(320);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[18].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[20].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[21].o = sp[0].o;
	LINE_NUMBER(321);
	jint temp0 = (jint)((func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean])(ctx, (frame[9].o), (frame[21].o));
	if (temp0 != 0) goto label_39;
	}
	{
	LINE_NUMBER(322);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[18].o;
	sp[3].o = frame[19].o;
	sp[4].o = frame[16].o;
	LINE_NUMBER(323);
	sp[4].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, sp[4].o);
	jint temp0 = jint(1);
	LINE_NUMBER(322);
	SM_rhino_JavaAdapter_generateMethod_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0);
	LINE_NUMBER(324);
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, (frame[9].o), (frame[21].o), (jint(0)));
	LINE_NUMBER(325);
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, (frame[10].o), (frame[18].o), (jint(0)));
	}
label_39:;
	{
	LINE_NUMBER(299);
	INST_IINC(15, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(297);
	INST_IINC(11, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_getOverridableMethods_java_lang_Class_R_Array1_java_lang_reflect_Method(ctx, (frame[2].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(335);
	frame[12].o = (frame[11].o);
	frame[13].i = (((jarray) nullCheck(ctx, (frame[12].o)))->length);
	frame[14].i = (jint(0));
	}
label_53:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_54;
	}
	{
	frame[15].o = ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (frame[14].i)));
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[15].o));
	frame[16].i = temp0;
	LINE_NUMBER(340);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean(ctx, (frame[16].i));
	frame[17].i = temp1;
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[15].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(342);
	if ((frame[17].i) != 0) goto label_59;
	}
	{
	jint temp0 = (jint)((func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[18].o));
	if (temp0 == 0) goto label_60;
	}
label_59:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[15].o));
	frame[19].o = sp[0].o;
	LINE_NUMBER(346);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_getMethodSignature_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_String(ctx, (frame[15].o), (frame[19].o));
	frame[20].o = sp[0].o;
	LINE_NUMBER(347);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[18].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[20].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[21].o = sp[0].o;
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean])(ctx, (frame[9].o), (frame[21].o));
	if (temp0 != 0) goto label_60;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[18].o;
	sp[3].o = frame[19].o;
	sp[4].o = frame[15].o;
	LINE_NUMBER(350);
	sp[4].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, sp[4].o);
	jint temp0 = jint(1);
	LINE_NUMBER(349);
	SM_rhino_JavaAdapter_generateMethod_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0);
	LINE_NUMBER(351);
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, (frame[9].o), (frame[21].o), (jint(0)));
	LINE_NUMBER(352);
	((func_rhino_ObjToIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int])(ctx, (frame[10].o), (frame[18].o), (jint(0)));
	LINE_NUMBER(356);
	if ((frame[17].i) != 0) goto label_60;
	}
	{
	LINE_NUMBER(357);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[7].o;
	sp[3].o = frame[18].o;
	sp[4].o = frame[20].o;
	sp[5].o = frame[19].o;
	sp[6].o = frame[15].o;
	LINE_NUMBER(359);
	sp[6].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, sp[6].o);
	LINE_NUMBER(357);
	SM_rhino_JavaAdapter_generateSuper_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	}
label_60:;
	{
	LINE_NUMBER(335);
	INST_IINC(14, 1);
	goto label_53;
	}
label_54:;
	{
	LINE_NUMBER(367);
	clinit_rhino_ObjToIntMap$Iterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ObjToIntMap$Iterator);
	init_rhino_ObjToIntMap$Iterator_rhino_ObjToIntMap(ctx, sp[0].o, (frame[0].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(368);
	((func_rhino_ObjToIntMap$Iterator_start) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_start])(ctx, (frame[12].o));
	}
label_74:;
	{
	jint temp0 = (jint)((func_rhino_ObjToIntMap$Iterator_done_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_done_R_boolean])(ctx, (frame[12].o));
	if (temp0 != 0) goto label_75;
	}
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((func_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object])(ctx, (frame[12].o));
	frame[13].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(370);
	jint temp0 = (jint)((func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean])(ctx, (frame[10].o), (frame[13].o));
	if (temp0 == 0) goto label_78;
	}
	LINE_NUMBER(371);
	goto label_80;
label_78:;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)((func_rhino_ObjToIntMap$Iterator_getValue_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_getValue_R_int])(ctx, (frame[12].o));
	frame[14].i = temp0;
	LINE_NUMBER(373);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Class, (frame[14].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(374);
	frame[16].i = (jint(0));
	}
label_83:;
	{
	if ((frame[16].i) >= (frame[14].i)) goto label_84;
	}
	{
	LINE_NUMBER(375);
	sp[0].o = frame[15].o;
	jint temp0 = frame[16].i;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(374);
	INST_IINC(16, 1);
	goto label_83;
	}
label_84:;
	{
	LINE_NUMBER(376);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[13].o;
	sp[3].o = frame[15].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	SM_rhino_JavaAdapter_generateMethod_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	}
label_80:;
	{
	LINE_NUMBER(368);
	((func_rhino_ObjToIntMap$Iterator_next) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_next])(ctx, (frame[12].o));
	goto label_74;
	}
label_75:;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_toByteArray_R_Array1_byte])(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_JavaAdapter_methodIsDefault_java_lang_reflect_Method_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:methodIsDefault", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(383);
	if ((clinit_rhino_Kit(ctx), (jint)SF_rhino_Kit_isIos) == 0) goto label_0;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_java_lang_reflect_Method_isDefault_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Method_isDefault_R_boolean])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(387);
	frame[1].o = sp[0].o;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_getOverridableMethods_java_lang_Class_R_Array1_java_lang_reflect_Method(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:getOverridableMethods", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(393);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(394);
	clinit_java_util_HashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(399);
	frame[3].o = (frame[0].o);
	}
label_3:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_4;
	{
	LINE_NUMBER(400);
	SM_rhino_JavaAdapter_appendOverridableMethods_java_lang_Class_java_util_ArrayList_java_util_HashSet(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(402);
	frame[3].o = (frame[0].o);
	}
label_7:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_8;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_java_lang_Class_getInterfaces_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getInterfaces_R_Array1_java_lang_Class])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_11;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(404);
	SM_rhino_JavaAdapter_appendOverridableMethods_java_lang_Class_java_util_ArrayList_java_util_HashSet(ctx, (frame[7].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(403);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(406);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_reflect_Method, (jint(0)));
	sp[0].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_reflect_Method, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_appendOverridableMethods_java_lang_Class_java_util_ArrayList_java_util_HashSet(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:appendOverridableMethods", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(412);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(413);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i));
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i));
	LINE_NUMBER(415);
	sp[2].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, sp[2].o);
	LINE_NUMBER(414);
	sp[1].o = (jobject)SM_rhino_JavaAdapter_getMethodSignature_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(416);
	jint temp0 = (jint)((func_java_util_HashSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_HashSet_contains_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[5].o));
	if (temp0 == 0) goto label_8;
	}
	LINE_NUMBER(417);
	goto label_10;
label_8:;
	{
	LINE_NUMBER(418);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	frame[6].i = temp0;
	LINE_NUMBER(419);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, (frame[6].i));
	if (temp1 == 0) goto label_12;
	}
	LINE_NUMBER(420);
	goto label_10;
label_12:;
	{
	LINE_NUMBER(421);
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isFinal_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(424);
	jint temp0 = (jint)((func_java_util_HashSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[5].o));
	LINE_NUMBER(425);
	goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(427);
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, (frame[6].i));
	if (temp0 != 0) goto label_17;
	}
	{
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isProtected_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_10;
	}
label_17:;
	{
	LINE_NUMBER(428);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(429);
	jint temp1 = (jint)((func_java_util_HashSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[5].o));
	}
label_10:;
	{
	LINE_NUMBER(412);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(432);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_loadAdapterClass_java_lang_String_Array1_byte_R_java_lang_Class(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:loadAdapterClass", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(436);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getApplicationClassLoader_R_java_lang_ClassLoader])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_Context_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_rhino_GeneratedClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_rhino_GeneratedClassLoader, INDEX_rhino_GeneratedClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class, (frame[3].o)))(ctx, (frame[3].o), (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(438);
	((func_rhino_GeneratedClassLoader_linkClass_java_lang_Class) resolveInterfaceMethod(ctx, &class_rhino_GeneratedClassLoader, INDEX_rhino_GeneratedClassLoader_linkClass_java_lang_Class, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_getFunction_rhino_Scriptable_java_lang_String_R_rhino_Function(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:getFunction", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(444);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(452);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Function)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[2].o), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Function, (frame[2].o)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_callMethod_rhino_ContextFactory_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jlong param4) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:callMethod", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].l = param4;
	{
	LINE_NUMBER(466);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(470);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)SM_rhino_ContextFactory_getGlobal_R_rhino_ContextFactory(ctx);
	frame[0].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(475);
	if ((longCompare((frame[4].l), (jlong(0)))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)SM_rhino_Context_call_rhino_ContextFactory_rhino_Callable_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (frame[6].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(480);
	if ((frame[7].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_doCall_rhino_Context_rhino_Scriptable_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_R_java_lang_Object(ctx, (frame[7].o), (frame[6].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].l));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(483);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_rhino_JavaAdapter_invoke_rhino_ContextAction_0(ctx);
		auto proxy = (rhino_JavaAdapter_invoke_rhino_ContextAction_0 *) gcAlloc(ctx, &class_rhino_JavaAdapter_invoke_rhino_ContextAction_0);
		proxy->F_field4 = (frame[4].l);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_doCall_rhino_Context_rhino_Scriptable_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jlong param5) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:doCall", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].l = param5;
	{
	LINE_NUMBER(490);
	frame[7].i = (jint(0));
	}
label_1:;
	{
	if ((frame[7].i) == (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(491);
	if ((longCompare((jlong(0)), ((frame[5].l) & (jlong(((jint(1)) << (frame[7].i))))))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(492);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)));
	LINE_NUMBER(493);
	if ((isInstance(ctx, (frame[8].o), &class_rhino_Scriptable)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(494);
	sp[0].o = frame[4].o;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (frame[0].o), (frame[1].o), (frame[8].o), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(490);
	INST_IINC(7, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_runScript_rhino_Script_R_rhino_Scriptable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:runScript", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)SM_rhino_ContextFactory_getGlobal_R_rhino_ContextFactory(ctx);
	{ /* InvokeDynamic */
		clinit_rhino_JavaAdapter_invoke_rhino_ContextAction_1(ctx);
		auto proxy = (rhino_JavaAdapter_invoke_rhino_ContextAction_1 *) gcAlloc(ctx, &class_rhino_JavaAdapter_invoke_rhino_ContextAction_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_generateCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_reflect_Constructor(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generateCtor", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(512);
	frame[4].i = (jint(3));
	LINE_NUMBER(513);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(517);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(518);
	((func_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"(Lrhino/Scriptable;Lrhino/ContextFactory;)V"_j))), (jint(1)));
	LINE_NUMBER(524);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(525);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (183), (frame[2].o), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"()V"_j))));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(527);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(Lrhino/Scriptable;Lrhino/ContextFactory;"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(530);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(531);
	frame[8].o = (frame[5].o);
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_10:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_11;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(532);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_appendTypeString_java_lang_StringBuilder_java_lang_Class_R_java_lang_StringBuilder(ctx, (frame[6].o), (frame[11].o));
	LINE_NUMBER(531);
	INST_IINC(10, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(534);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8")V"_j))));
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"<init>"_j));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	((func_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(538);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(539);
	frame[8].i = (jint(3));
	LINE_NUMBER(540);
	frame[9].o = (frame[5].o);
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_18:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_19;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(541);
	jint temp0 = frame[8].i;
	jint temp1 = (jint)SM_rhino_JavaAdapter_generatePushParam_rhino_classfile_ClassFileWriter_int_java_lang_Class_R_int(ctx, (frame[0].o), (frame[8].i), (frame[12].o));
	frame[8].i = (jshort((temp0 + temp1)));
	LINE_NUMBER(540);
	INST_IINC(11, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(543);
	frame[4].i = (frame[8].i);
	LINE_NUMBER(544);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jint(1)), (frame[7].i));
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	jint temp0 = 183;
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"<init>"_j));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o);
	}
label_7:;
	{
	LINE_NUMBER(549);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(550);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (43));
	LINE_NUMBER(551);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (181), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"delegee"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))));
	LINE_NUMBER(555);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(556);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (44));
	LINE_NUMBER(557);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (181), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"factory"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/ContextFactory;"_j))));
	LINE_NUMBER(560);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(562);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (43));
	LINE_NUMBER(563);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(564);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"rhino/JavaAdapter"_j))), (((jobject) createStringLiteral(ctx, u8"createAdapterWrapper"_j))), (((jobject) createStringLiteral(ctx, u8"(Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;"_j))));
	LINE_NUMBER(570);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (181), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"self"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))));
	LINE_NUMBER(573);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (177));
	LINE_NUMBER(574);
	((func_rhino_classfile_ClassFileWriter_stopMethod_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_stopMethod_short])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_generateSerialCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generateSerialCtor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(580);
	((func_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"(Lrhino/ContextFactory;Lrhino/Scriptable;Lrhino/Scriptable;)V"_j))), (jint(1)));
	LINE_NUMBER(588);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(589);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (183), (frame[2].o), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"()V"_j))));
	LINE_NUMBER(592);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(593);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (43));
	LINE_NUMBER(594);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (181), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"factory"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/ContextFactory;"_j))));
	LINE_NUMBER(598);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(599);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (44));
	LINE_NUMBER(600);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (181), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"delegee"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))));
	LINE_NUMBER(603);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(604);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (45));
	LINE_NUMBER(605);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (181), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"self"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))));
	LINE_NUMBER(608);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (177));
	LINE_NUMBER(609);
	((func_rhino_classfile_ClassFileWriter_stopMethod_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_stopMethod_short])(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_generateEmptyCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generateEmptyCtor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(616);
	((func_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"()V"_j))), (jint(1)));
	LINE_NUMBER(619);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(620);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (183), (frame[2].o), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"()V"_j))));
	LINE_NUMBER(623);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(624);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(625);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (181), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"factory"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/ContextFactory;"_j))));
	LINE_NUMBER(629);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String])(ctx, (frame[0].o), (187), (frame[3].o));
	LINE_NUMBER(630);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (89));
	LINE_NUMBER(631);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (183), (frame[3].o), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"()V"_j))));
	LINE_NUMBER(634);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"rhino/JavaAdapter"_j))), (((jobject) createStringLiteral(ctx, u8"runScript"_j))), (((jobject) createStringLiteral(ctx, u8"(Lrhino/Script;)Lrhino/Scriptable;"_j))));
	LINE_NUMBER(639);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (76));
	LINE_NUMBER(642);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(643);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (43));
	LINE_NUMBER(644);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (181), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"delegee"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))));
	LINE_NUMBER(647);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(649);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (43));
	LINE_NUMBER(650);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(651);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"rhino/JavaAdapter"_j))), (((jobject) createStringLiteral(ctx, u8"createAdapterWrapper"_j))), (((jobject) createStringLiteral(ctx, u8"(Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;"_j))));
	LINE_NUMBER(657);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (181), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"self"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))));
	LINE_NUMBER(660);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (177));
	LINE_NUMBER(661);
	((func_rhino_classfile_ClassFileWriter_stopMethod_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_stopMethod_short])(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_generatePushWrappedArgs_rhino_classfile_ClassFileWriter_Array1_java_lang_Class_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generatePushWrappedArgs", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(673);
	((func_rhino_classfile_ClassFileWriter_addPush_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addPush_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(674);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String])(ctx, (frame[0].o), (189), (((jobject) createStringLiteral(ctx, u8"java/lang/Object"_j))));
	LINE_NUMBER(675);
	frame[3].i = (jint(1));
	LINE_NUMBER(676);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(677);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (89));
	LINE_NUMBER(678);
	((func_rhino_classfile_ClassFileWriter_addPush_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addPush_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(679);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_JavaAdapter_generateWrapArg_rhino_classfile_ClassFileWriter_int_java_lang_Class_R_int(ctx, (frame[0].o), (frame[3].i), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(680);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (83));
	LINE_NUMBER(676);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(682);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_rhino_JavaAdapter_generateWrapArg_rhino_classfile_ClassFileWriter_int_java_lang_Class_R_int(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generateWrapArg", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(691);
	frame[3].i = (jint(1));
	LINE_NUMBER(692);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(693);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (25), (frame[1].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(695);
	sp[0].o = frame[2].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(697);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String])(ctx, (frame[0].o), (187), (((jobject) createStringLiteral(ctx, u8"java/lang/Boolean"_j))));
	LINE_NUMBER(698);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (89));
	LINE_NUMBER(699);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (21), (frame[1].i));
	LINE_NUMBER(700);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (183), (((jobject) createStringLiteral(ctx, u8"java/lang/Boolean"_j))), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"(Z)V"_j))));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(703);
	sp[0].o = frame[2].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(705);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (21), (frame[1].i));
	LINE_NUMBER(706);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"java/lang/String"_j))), (((jobject) createStringLiteral(ctx, u8"valueOf"_j))), (((jobject) createStringLiteral(ctx, u8"(C)Ljava/lang/String;"_j))));
	goto label_4;
	}
label_10:;
	{
	LINE_NUMBER(711);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String])(ctx, (frame[0].o), (187), (((jobject) createStringLiteral(ctx, u8"java/lang/Double"_j))));
	LINE_NUMBER(712);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (89));
	LINE_NUMBER(713);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(714);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[4].o), (jint(0)));
	switch(temp0) {
		case 98: goto label_16;
		case 99: goto label_17;
		case 100: goto label_18;
		case 101: goto label_17;
		case 102: goto label_19;
		case 103: goto label_17;
		case 104: goto label_17;
		case 105: goto label_16;
		case 106: goto label_17;
		case 107: goto label_17;
		case 108: goto label_20;
		case 109: goto label_17;
		case 110: goto label_17;
		case 111: goto label_17;
		case 112: goto label_17;
		case 113: goto label_17;
		case 114: goto label_17;
		case 115: goto label_16;
		default: goto label_17;
	}
	}
label_16:;
	{
	LINE_NUMBER(719);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (21), (frame[1].i));
	LINE_NUMBER(720);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (135));
	LINE_NUMBER(721);
	goto label_17;
	}
label_20:;
	{
	LINE_NUMBER(724);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (22), (frame[1].i));
	LINE_NUMBER(725);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (138));
	LINE_NUMBER(726);
	frame[3].i = (jint(2));
	LINE_NUMBER(727);
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(730);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (23), (frame[1].i));
	LINE_NUMBER(731);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (141));
	LINE_NUMBER(732);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(734);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (24), (frame[1].i));
	LINE_NUMBER(735);
	frame[3].i = (jint(2));
	}
label_17:;
	{
	LINE_NUMBER(738);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (183), (((jobject) createStringLiteral(ctx, u8"java/lang/Double"_j))), (((jobject) createStringLiteral(ctx, u8"<init>"_j))), (((jobject) createStringLiteral(ctx, u8"(D)V"_j))));
	}
label_4:;
	{
	LINE_NUMBER(741);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_generateReturnResult_rhino_classfile_ClassFileWriter_java_lang_Class_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generateReturnResult", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(753);
	sp[0].o = frame[1].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(754);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (87));
	LINE_NUMBER(755);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (177));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(757);
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(758);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"rhino/Context"_j))), (((jobject) createStringLiteral(ctx, u8"toBoolean"_j))), (((jobject) createStringLiteral(ctx, u8"(Ljava/lang/Object;)Z"_j))));
	LINE_NUMBER(761);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (172));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(763);
	sp[0].o = frame[1].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(767);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"rhino/Context"_j))), (((jobject) createStringLiteral(ctx, u8"toString"_j))), (((jobject) createStringLiteral(ctx, u8"(Ljava/lang/Object;)Ljava/lang/String;"_j))));
	LINE_NUMBER(771);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(772);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (182), (((jobject) createStringLiteral(ctx, u8"java/lang/String"_j))), (((jobject) createStringLiteral(ctx, u8"charAt"_j))), (((jobject) createStringLiteral(ctx, u8"(I)C"_j))));
	LINE_NUMBER(774);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (172));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(776);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(777);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"rhino/Context"_j))), (((jobject) createStringLiteral(ctx, u8"toNumber"_j))), (((jobject) createStringLiteral(ctx, u8"(Ljava/lang/Object;)D"_j))));
	LINE_NUMBER(780);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(781);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	switch(temp0) {
		case 98: goto label_17;
		case 99: goto label_18;
		case 100: goto label_19;
		case 101: goto label_18;
		case 102: goto label_20;
		case 103: goto label_18;
		case 104: goto label_18;
		case 105: goto label_17;
		case 106: goto label_18;
		case 107: goto label_18;
		case 108: goto label_21;
		case 109: goto label_18;
		case 110: goto label_18;
		case 111: goto label_18;
		case 112: goto label_18;
		case 113: goto label_18;
		case 114: goto label_18;
		case 115: goto label_17;
		default: goto label_18;
	}
	}
label_17:;
	{
	LINE_NUMBER(785);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (142));
	LINE_NUMBER(786);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (172));
	LINE_NUMBER(787);
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(789);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (143));
	LINE_NUMBER(790);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (173));
	LINE_NUMBER(791);
	goto label_24;
	}
label_20:;
	{
	LINE_NUMBER(793);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (144));
	LINE_NUMBER(794);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (174));
	LINE_NUMBER(795);
	goto label_24;
	}
label_19:;
	{
	LINE_NUMBER(797);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (175));
	LINE_NUMBER(798);
	goto label_24;
	}
label_18:;
	{
	LINE_NUMBER(800);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unexpected return type "_j))));
	sp[2].o = frame[1].o;
	LINE_NUMBER(801);
	sp[2].o = (jobject)((func_java_lang_Class_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_24:;
	LINE_NUMBER(804);
	goto label_4;
label_13:;
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(806);
	if ((frame[2].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(807);
	((func_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addLoadConstant_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(808);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"java/lang/Class"_j))), (((jobject) createStringLiteral(ctx, u8"forName"_j))), (((jobject) createStringLiteral(ctx, u8"(Ljava/lang/String;)Ljava/lang/Class;"_j))));
	LINE_NUMBER(813);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"rhino/JavaAdapter"_j))), (((jobject) createStringLiteral(ctx, u8"convertResult"_j))), (((jobject) createStringLiteral(ctx, u8"(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;"_j))));
	}
label_32:;
	{
	LINE_NUMBER(821);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String])(ctx, (frame[0].o), (192), (frame[3].o));
	LINE_NUMBER(822);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (176));
	}
label_4:;
	LINE_NUMBER(824);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_generateMethod_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generateMethod", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(829);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(830);
	jint temp0 = (jint)SM_rhino_JavaAdapter_appendMethodSignature_Array1_java_lang_Class_java_lang_Class_java_lang_StringBuilder_R_int(ctx, (frame[3].o), (frame[4].o), (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(831);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(832);
	((func_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short])(ctx, (frame[0].o), (frame[2].o), (frame[8].o), (jint(1)));
	LINE_NUMBER(838);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(839);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (180), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"factory"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/ContextFactory;"_j))));
	LINE_NUMBER(843);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(844);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (180), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"self"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))));
	LINE_NUMBER(848);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (42));
	LINE_NUMBER(849);
	((func_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (180), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"delegee"_j))), (((jobject) createStringLiteral(ctx, u8"Lrhino/Scriptable;"_j))));
	LINE_NUMBER(851);
	((func_rhino_classfile_ClassFileWriter_addPush_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addPush_java_lang_String])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(852);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"rhino/JavaAdapter"_j))), (((jobject) createStringLiteral(ctx, u8"getFunction"_j))), (((jobject) createStringLiteral(ctx, u8"(Lrhino/Scriptable;Ljava/lang/String;)Lrhino/Function;"_j))));
	LINE_NUMBER(860);
	SM_rhino_JavaAdapter_generatePushWrappedArgs_rhino_classfile_ClassFileWriter_Array1_java_lang_Class_int(ctx, (frame[0].o), (frame[3].o), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(863);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= (64)) goto label_14;
	}
	{
	LINE_NUMBER(866);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"JavaAdapter can not subclass methods with more then 64 arguments."_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(870);
	frame[9].l = (jlong(0));
	LINE_NUMBER(871);
	frame[11].i = (jint(0));
	}
label_17:;
	{
	if ((frame[11].i) == (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_18;
	}
	{
	LINE_NUMBER(872);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[11].i))))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[11].i))));
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(873);
	frame[9].l = ((frame[9].l) | (jlong(((jint(1)) << (frame[11].i)))));
	}
label_20:;
	{
	LINE_NUMBER(871);
	INST_IINC(11, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(876);
	((func_rhino_classfile_ClassFileWriter_addPush_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addPush_long])(ctx, (frame[0].o), (frame[9].l));
	LINE_NUMBER(880);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (184), (((jobject) createStringLiteral(ctx, u8"rhino/JavaAdapter"_j))), (((jobject) createStringLiteral(ctx, u8"callMethod"_j))), (((jobject) createStringLiteral(ctx, u8"(Lrhino/ContextFactory;Lrhino/Scriptable;Lrhino/Function;[Ljava/lang/Object;J)Ljava/lang/Object;"_j))));
	LINE_NUMBER(890);
	SM_rhino_JavaAdapter_generateReturnResult_rhino_classfile_ClassFileWriter_java_lang_Class_boolean(ctx, (frame[0].o), (frame[4].o), (frame[5].i));
	LINE_NUMBER(892);
	((func_rhino_classfile_ClassFileWriter_stopMethod_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_stopMethod_short])(ctx, (frame[0].o), (jshort((frame[7].i))));
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_rhino_JavaAdapter_generatePushParam_rhino_classfile_ClassFileWriter_int_java_lang_Class_R_int(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generatePushParam", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(901);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(902);
	((func_rhino_classfile_ClassFileWriter_addALoad_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addALoad_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(903);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(905);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(906);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	switch(temp0) {
		case 98: goto label_5;
		case 99: goto label_5;
		case 100: goto label_6;
		case 101: goto label_7;
		case 102: goto label_8;
		case 103: goto label_7;
		case 104: goto label_7;
		case 105: goto label_5;
		case 106: goto label_7;
		case 107: goto label_7;
		case 108: goto label_9;
		case 109: goto label_7;
		case 110: goto label_7;
		case 111: goto label_7;
		case 112: goto label_7;
		case 113: goto label_7;
		case 114: goto label_7;
		case 115: goto label_5;
		case 116: goto label_7;
		case 117: goto label_7;
		case 118: goto label_7;
		case 119: goto label_7;
		case 120: goto label_7;
		case 121: goto label_7;
		case 122: goto label_5;
		default: goto label_7;
	}
	}
label_5:;
	{
	LINE_NUMBER(913);
	((func_rhino_classfile_ClassFileWriter_addILoad_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addILoad_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(914);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(917);
	((func_rhino_classfile_ClassFileWriter_addLLoad_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addLLoad_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(918);
	popStackFrame(ctx);
	return (jint(2));
	}
label_8:;
	{
	LINE_NUMBER(921);
	((func_rhino_classfile_ClassFileWriter_addFLoad_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addFLoad_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(922);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(924);
	((func_rhino_classfile_ClassFileWriter_addDLoad_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addDLoad_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(925);
	popStackFrame(ctx);
	return (jint(2));
	}
label_7:;
	{
	LINE_NUMBER(927);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_generatePopResult_rhino_classfile_ClassFileWriter_java_lang_Class(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generatePopResult", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(937);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(938);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(939);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (jint(0)));
	switch(temp0) {
		case 98: goto label_4;
		case 99: goto label_4;
		case 100: goto label_5;
		case 101: goto label_6;
		case 102: goto label_7;
		case 103: goto label_6;
		case 104: goto label_6;
		case 105: goto label_4;
		case 106: goto label_6;
		case 107: goto label_6;
		case 108: goto label_8;
		case 109: goto label_6;
		case 110: goto label_6;
		case 111: goto label_6;
		case 112: goto label_6;
		case 113: goto label_6;
		case 114: goto label_6;
		case 115: goto label_4;
		case 116: goto label_6;
		case 117: goto label_6;
		case 118: goto label_6;
		case 119: goto label_6;
		case 120: goto label_6;
		case 121: goto label_6;
		case 122: goto label_4;
		default: goto label_6;
	}
	}
label_4:;
	{
	LINE_NUMBER(945);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (172));
	LINE_NUMBER(946);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(948);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (173));
	LINE_NUMBER(949);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(951);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (174));
	LINE_NUMBER(952);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(954);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (175));
	}
label_6:;
	LINE_NUMBER(957);
	goto label_12;
label_1:;
	{
	LINE_NUMBER(958);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (176));
	}
label_12:;
	LINE_NUMBER(960);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_JavaAdapter_generateSuper_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:generateSuper", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(971);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"super$"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ClassFileWriter_startMethod_java_lang_String_java_lang_String_short])(ctx, sp[0].o, sp[1].o, (frame[4].o), (jint(1)));
	LINE_NUMBER(975);
	((func_rhino_classfile_ClassFileWriter_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int_int])(ctx, (frame[0].o), (25), (jint(0)));
	LINE_NUMBER(978);
	frame[7].i = (jint(1));
	LINE_NUMBER(979);
	frame[8].o = (frame[5].o);
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_4:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_5;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(980);
	jint temp0 = frame[7].i;
	jint temp1 = (jint)SM_rhino_JavaAdapter_generatePushParam_rhino_classfile_ClassFileWriter_int_java_lang_Class_R_int(ctx, (frame[0].o), (frame[7].i), (frame[11].o));
	frame[7].i = (temp0 + temp1);
	LINE_NUMBER(979);
	INST_IINC(10, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(984);
	((func_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_addInvoke_int_java_lang_String_java_lang_String_java_lang_String])(ctx, (frame[0].o), (183), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(990);
	frame[8].o = (frame[6].o);
	LINE_NUMBER(991);
	sp[0].o = frame[8].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(992);
	SM_rhino_JavaAdapter_generatePopResult_rhino_classfile_ClassFileWriter_java_lang_Class(ctx, (frame[0].o), (frame[8].o));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(994);
	((func_rhino_classfile_ClassFileWriter_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_add_int])(ctx, (frame[0].o), (177));
	}
label_12:;
	{
	LINE_NUMBER(996);
	((func_rhino_classfile_ClassFileWriter_stopMethod_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_classfile_ClassFileWriter_stopMethod_short])(ctx, (frame[0].o), (jshort(((frame[7].i) + (jint(1))))));
	LINE_NUMBER(997);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_getMethodSignature_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:getMethodSignature", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1003);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1004);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, (frame[0].o));
	jint temp0 = (jint)SM_rhino_JavaAdapter_appendMethodSignature_Array1_java_lang_Class_java_lang_Class_java_lang_StringBuilder_R_int(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(1005);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_JavaAdapter_appendMethodSignature_Array1_java_lang_Class_java_lang_Class_java_lang_StringBuilder_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:appendMethodSignature", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (40));
	LINE_NUMBER(1012);
	frame[3].i = ((jint(1)) + (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(1013);
	frame[4].o = (frame[0].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(1014);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_appendTypeString_java_lang_StringBuilder_java_lang_Class_R_java_lang_StringBuilder(ctx, (frame[2].o), (frame[7].o));
	LINE_NUMBER(1015);
	sp[0].o = frame[7].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	sp[0].o = frame[7].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o != sp[1].o) goto label_8;
	}
label_7:;
	LINE_NUMBER(1017);
	INST_IINC(3, 1);
label_8:;
	{
	LINE_NUMBER(1013);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (41));
	LINE_NUMBER(1021);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_appendTypeString_java_lang_StringBuilder_java_lang_Class_R_java_lang_StringBuilder(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(1022);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_appendTypeString_java_lang_StringBuilder_java_lang_Class_R_java_lang_StringBuilder(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:appendTypeString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_0:;
	{
	LINE_NUMBER(1026);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (91));
	LINE_NUMBER(1028);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(1030);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1032);
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(1033);
	frame[2].i = (90);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1034);
	sp[0].o = frame[1].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(1035);
	frame[2].i = (74);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1037);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1038);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, temp0);
	frame[2].i = temp1;
	}
label_9:;
	{
	LINE_NUMBER(1040);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1041);
	goto label_15;
	}
label_4:;
	{
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (76));
	LINE_NUMBER(1043);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[1].o, (46), (47));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (59));
	}
label_15:;
	{
	LINE_NUMBER(1046);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_getArgsToConvert_Array1_java_lang_Class_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:getArgsToConvert", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1050);
	frame[1].i = (jint(0));
	LINE_NUMBER(1051);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) == (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(1052);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	if (temp0 != 0) goto label_5;
	}
	LINE_NUMBER(1053);
	INST_IINC(1, 1);
label_5:;
	{
	LINE_NUMBER(1051);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1055);
	if ((frame[1].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1056);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(1057);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1058);
	frame[1].i = (jint(0));
	LINE_NUMBER(1059);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	if ((frame[3].i) == (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_12;
	}
	{
	LINE_NUMBER(1060);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(1061);
	sp[0].o = frame[2].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[3].i);
	}
label_14:;
	{
	LINE_NUMBER(1059);
	INST_IINC(3, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1063);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_lambda$runScript$1_rhino_Script_rhino_Context_R_rhino_ScriptableObject(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:lambda$runScript$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getGlobal_rhino_Context_R_rhino_ScriptableObject(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Script, INDEX_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_JavaAdapter_lambda$callMethod$0_rhino_Scriptable_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jlong param4, jobject param5) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:lambda$callMethod$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].l = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)SM_rhino_JavaAdapter_doCall_rhino_Context_rhino_Scriptable_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_R_java_lang_Object(ctx, (frame[6].o), (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_JavaAdapter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_JavaAdapter_Id_JavaAdapter = jint(1);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter(ctx);
	{
	LINE_NUMBER(1066);
	clinit_rhino_JavaAdapter(ctx);
	SF_rhino_JavaAdapter_FTAG = (((jobject) createStringLiteral(ctx, u8"JavaAdapter"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_JavaAdapter[] {
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
	(void *) M_rhino_JavaAdapter_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_rhino_IdFunctionCall, };

static jclass innerClasses[] {
	&class_rhino_JavaAdapter$JavaAdapterSignature,
};

static FieldMetadata fields[] {
	{ "FTAG", &class_java_lang_Object, (intptr_t) &SF_rhino_JavaAdapter_FTAG, "Ljava/lang/Object;", 26 },
	{ "Id_JavaAdapter", &class_int, (intptr_t) &SF_rhino_JavaAdapter_Id_JavaAdapter, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_JavaAdapter, 0, "()V", 1 },
	{ "init", (intptr_t) SM_rhino_JavaAdapter_init_rhino_Context_rhino_Scriptable_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)V", 9 },
	{ "execIdCall", (intptr_t) M_rhino_JavaAdapter_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_JavaAdapter_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "convertResult", (intptr_t) SM_rhino_JavaAdapter_convertResult_java_lang_Object_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", 9 },
	{ "createAdapterWrapper", (intptr_t) SM_rhino_JavaAdapter_createAdapterWrapper_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 9 },
	{ "getAdapterSelf", (intptr_t) SM_rhino_JavaAdapter_getAdapterSelf_java_lang_Class_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "js_createAdapter", (intptr_t) SM_rhino_JavaAdapter_js_createAdapter_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "getObjectFunctionNames", (intptr_t) SM_rhino_JavaAdapter_getObjectFunctionNames_rhino_Scriptable_R_rhino_ObjToIntMap, 0, "(Lrhino/Scriptable;)Lrhino/ObjToIntMap;", 10 },
	{ "getAdapterClass", (intptr_t) SM_rhino_JavaAdapter_getAdapterClass_rhino_Scriptable_java_lang_Class_Array1_java_lang_Class_rhino_Scriptable_R_java_lang_Class, 0, "(Lrhino/Scriptable;Ljava/lang/Class;[Ljava/lang/Class;Lrhino/Scriptable;)Ljava/lang/Class;", 10 },
	{ "createAdapterCode", (intptr_t) SM_rhino_JavaAdapter_createAdapterCode_rhino_ObjToIntMap_java_lang_String_java_lang_Class_Array1_java_lang_Class_java_lang_String_R_Array1_byte, 0, "(Lrhino/ObjToIntMap;Ljava/lang/String;Ljava/lang/Class;[Ljava/lang/Class;Ljava/lang/String;)[B", 9 },
	{ "methodIsDefault", (intptr_t) SM_rhino_JavaAdapter_methodIsDefault_java_lang_reflect_Method_R_boolean, 0, "(Ljava/lang/reflect/Method;)Z", 8 },
	{ "getOverridableMethods", (intptr_t) SM_rhino_JavaAdapter_getOverridableMethods_java_lang_Class_R_Array1_java_lang_reflect_Method, 0, "(Ljava/lang/Class;)[Ljava/lang/reflect/Method;", 8 },
	{ "appendOverridableMethods", (intptr_t) SM_rhino_JavaAdapter_appendOverridableMethods_java_lang_Class_java_util_ArrayList_java_util_HashSet, 0, "(Ljava/lang/Class;Ljava/util/ArrayList;Ljava/util/HashSet;)V", 10 },
	{ "loadAdapterClass", (intptr_t) SM_rhino_JavaAdapter_loadAdapterClass_java_lang_String_Array1_byte_R_java_lang_Class, 0, "(Ljava/lang/String;[B)Ljava/lang/Class;", 8 },
	{ "getFunction", (intptr_t) SM_rhino_JavaAdapter_getFunction_rhino_Scriptable_java_lang_String_R_rhino_Function, 0, "(Lrhino/Scriptable;Ljava/lang/String;)Lrhino/Function;", 9 },
	{ "callMethod", (intptr_t) SM_rhino_JavaAdapter_callMethod_rhino_ContextFactory_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_R_java_lang_Object, 0, "(Lrhino/ContextFactory;Lrhino/Scriptable;Lrhino/Function;[Ljava/lang/Object;J)Ljava/lang/Object;", 9 },
	{ "doCall", (intptr_t) SM_rhino_JavaAdapter_doCall_rhino_Context_rhino_Scriptable_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;Lrhino/Function;[Ljava/lang/Object;J)Ljava/lang/Object;", 10 },
	{ "runScript", (intptr_t) SM_rhino_JavaAdapter_runScript_rhino_Script_R_rhino_Scriptable, 0, "(Lrhino/Script;)Lrhino/Scriptable;", 9 },
	{ "generateCtor", (intptr_t) SM_rhino_JavaAdapter_generateCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_reflect_Constructor, 0, "(Lrhino/classfile/ClassFileWriter;Ljava/lang/String;Ljava/lang/String;Ljava/lang/reflect/Constructor;)V", 10 },
	{ "generateSerialCtor", (intptr_t) SM_rhino_JavaAdapter_generateSerialCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String, 0, "(Lrhino/classfile/ClassFileWriter;Ljava/lang/String;Ljava/lang/String;)V", 10 },
	{ "generateEmptyCtor", (intptr_t) SM_rhino_JavaAdapter_generateEmptyCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String, 0, "(Lrhino/classfile/ClassFileWriter;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 10 },
	{ "generatePushWrappedArgs", (intptr_t) SM_rhino_JavaAdapter_generatePushWrappedArgs_rhino_classfile_ClassFileWriter_Array1_java_lang_Class_int, 0, "(Lrhino/classfile/ClassFileWriter;[Ljava/lang/Class;I)V", 8 },
	{ "generateWrapArg", (intptr_t) SM_rhino_JavaAdapter_generateWrapArg_rhino_classfile_ClassFileWriter_int_java_lang_Class_R_int, 0, "(Lrhino/classfile/ClassFileWriter;ILjava/lang/Class;)I", 10 },
	{ "generateReturnResult", (intptr_t) SM_rhino_JavaAdapter_generateReturnResult_rhino_classfile_ClassFileWriter_java_lang_Class_boolean, 0, "(Lrhino/classfile/ClassFileWriter;Ljava/lang/Class;Z)V", 8 },
	{ "generateMethod", (intptr_t) SM_rhino_JavaAdapter_generateMethod_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class_boolean, 0, "(Lrhino/classfile/ClassFileWriter;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;Z)V", 10 },
	{ "generatePushParam", (intptr_t) SM_rhino_JavaAdapter_generatePushParam_rhino_classfile_ClassFileWriter_int_java_lang_Class_R_int, 0, "(Lrhino/classfile/ClassFileWriter;ILjava/lang/Class;)I", 10 },
	{ "generatePopResult", (intptr_t) SM_rhino_JavaAdapter_generatePopResult_rhino_classfile_ClassFileWriter_java_lang_Class, 0, "(Lrhino/classfile/ClassFileWriter;Ljava/lang/Class;)V", 10 },
	{ "generateSuper", (intptr_t) SM_rhino_JavaAdapter_generateSuper_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class, 0, "(Lrhino/classfile/ClassFileWriter;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;)V", 10 },
	{ "getMethodSignature", (intptr_t) SM_rhino_JavaAdapter_getMethodSignature_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_String, 0, "(Ljava/lang/reflect/Method;[Ljava/lang/Class;)Ljava/lang/String;", 10 },
	{ "appendMethodSignature", (intptr_t) SM_rhino_JavaAdapter_appendMethodSignature_Array1_java_lang_Class_java_lang_Class_java_lang_StringBuilder_R_int, 0, "([Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/StringBuilder;)I", 8 },
	{ "appendTypeString", (intptr_t) SM_rhino_JavaAdapter_appendTypeString_java_lang_StringBuilder_java_lang_Class_R_java_lang_StringBuilder, 0, "(Ljava/lang/StringBuilder;Ljava/lang/Class;)Ljava/lang/StringBuilder;", 10 },
	{ "getArgsToConvert", (intptr_t) SM_rhino_JavaAdapter_getArgsToConvert_Array1_java_lang_Class_R_Array1_int, 0, "([Ljava/lang/Class;)[I", 8 },
	{ "lambda$runScript$1", (intptr_t) SM_rhino_JavaAdapter_lambda$runScript$1_rhino_Script_rhino_Context_R_rhino_ScriptableObject, 0, "(Lrhino/Script;Lrhino/Context;)Lrhino/ScriptableObject;", 4106 },
	{ "lambda$callMethod$0", (intptr_t) SM_rhino_JavaAdapter_lambda$callMethod$0_rhino_Scriptable_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_rhino_Context_R_java_lang_Object, 0, "(Lrhino/Scriptable;Lrhino/Scriptable;Lrhino/Function;[Ljava/lang/Object;JLrhino/Context;)Ljava/lang/Object;", 4106 },
	{ "<clinit>", (intptr_t) clinit_rhino_JavaAdapter, 0, "()V", 8 },
};

Class class_rhino_JavaAdapter{
		.nativeName = (intptr_t) "rhino/JavaAdapter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_JavaAdapter),
		.classVtable = (intptr_t) vtable_rhino_JavaAdapter,
		.staticInitializer = (intptr_t) clinit_rhino_JavaAdapter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_JavaAdapter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_JavaAdapter = registerClass(&class_rhino_JavaAdapter);

}
