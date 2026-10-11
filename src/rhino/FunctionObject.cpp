#include "rhino/FunctionObject.h"
#include "java/lang/Integer.h"
#include "rhino/WrapFactory.h"
#include "java/lang/Boolean.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/BaseFunction.h"
#include "rhino/Undefined.h"
#include "java/lang/reflect/Constructor.h"
#include "rhino/EvaluatorException.h"
#include "rhino/ConsString.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/reflect/Member.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Modifier.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Void.h"
#include "rhino/FunctionObject.h"
#include "rhino/MemberBox.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/Object.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {

jshort SF_rhino_FunctionObject_VARARGS_METHOD;
jshort SF_rhino_FunctionObject_VARARGS_CTOR;
jint SF_rhino_FunctionObject_JAVA_UNSUPPORTED_TYPE;
jint SF_rhino_FunctionObject_JAVA_STRING_TYPE;
jint SF_rhino_FunctionObject_JAVA_INT_TYPE;
jint SF_rhino_FunctionObject_JAVA_BOOLEAN_TYPE;
jint SF_rhino_FunctionObject_JAVA_DOUBLE_TYPE;
jint SF_rhino_FunctionObject_JAVA_SCRIPTABLE_TYPE;
jint SF_rhino_FunctionObject_JAVA_OBJECT_TYPE;

void mark_rhino_FunctionObject(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_BaseFunction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_FunctionObject *) object;
	if (self->F_member)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_member)->clazz)->markFunction)((jobject) self->F_member, mark, depth + 1);
	if (self->F_functionName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_functionName)->clazz)->markFunction)((jobject) self->F_functionName, mark, depth + 1);
	if (self->F_typeTags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_typeTags)->clazz)->markFunction)((jobject) self->F_typeTags, mark, depth + 1);
}

void clinit_rhino_FunctionObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_BaseFunction(ctx);
	SF_rhino_FunctionObject_VARARGS_METHOD = jint(-1);
	SF_rhino_FunctionObject_VARARGS_CTOR = jint(-2);
	SF_rhino_FunctionObject_JAVA_UNSUPPORTED_TYPE = jint(0);
	SF_rhino_FunctionObject_JAVA_STRING_TYPE = jint(1);
	SF_rhino_FunctionObject_JAVA_INT_TYPE = jint(2);
	SF_rhino_FunctionObject_JAVA_BOOLEAN_TYPE = jint(3);
	SF_rhino_FunctionObject_JAVA_DOUBLE_TYPE = jint(4);
	SF_rhino_FunctionObject_JAVA_SCRIPTABLE_TYPE = jint(5);
	SF_rhino_FunctionObject_JAVA_OBJECT_TYPE = jint(6);
}

void init_rhino_FunctionObject_java_lang_String_java_lang_reflect_Member_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_FunctionObject(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(72);
	init_rhino_BaseFunction(ctx, (frame[0].o));
	LINE_NUMBER(73);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_reflect_Constructor)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_rhino_MemberBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_MemberBox);
	init_rhino_MemberBox_java_lang_reflect_Constructor(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_reflect_Constructor, (frame[2].o))));
	((rhino_FunctionObject *) NULL_CHECK(sp[0].o))->F_member = (jref) sp[1].o;
	LINE_NUMBER(75);
	((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_isStatic = (jint(1));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_rhino_MemberBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_MemberBox);
	init_rhino_MemberBox_java_lang_reflect_Method(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_reflect_Method, (frame[2].o))));
	((rhino_FunctionObject *) NULL_CHECK(sp[0].o))->F_member = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	jint temp0 = (jint)((func_rhino_MemberBox_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_MemberBox_isStatic_R_boolean])(ctx, sp[1].o);
	((rhino_FunctionObject *) NULL_CHECK(sp[0].o))->F_isStatic = temp0;
	}
label_5:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(81);
	((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_functionName = (jref) (frame[1].o);
	LINE_NUMBER(82);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK(sp[0].o))->F_argTypes;
	frame[5].o = sp[0].o;
	LINE_NUMBER(83);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	LINE_NUMBER(84);
	if ((frame[6].i) != (jint(4))) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	if (temp0 != 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(2)))))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(2)))));
	if (temp0 == 0) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(87);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_isStatic) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ContextClass;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(2)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_FunctionClass;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(3)));
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.varargs.ctor"_j))), (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(95);
	((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength = (-2);
	goto label_18;
	}
label_13:;
	{
	LINE_NUMBER(97);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_isStatic) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ContextClass;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(2)));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(3)));
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_FunctionClass;
	if (sp[0].o == sp[1].o) goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.varargs.fun"_j))), (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(105);
	((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength = (jint(-1));
	goto label_18;
	}
label_11:;
	{
	LINE_NUMBER(108);
	((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength = (frame[6].i);
	LINE_NUMBER(109);
	if ((frame[6].i) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[6].i));
	((rhino_FunctionObject *) NULL_CHECK(sp[0].o))->F_typeTags = (jref) sp[1].o;
	LINE_NUMBER(111);
	frame[7].i = (jint(0));
	}
label_25:;
	{
	if ((frame[7].i) == (frame[6].i)) goto label_18;
	}
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)SM_rhino_FunctionObject_getTypeTag_java_lang_Class_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))));
	frame[8].i = temp0;
	LINE_NUMBER(113);
	if ((frame[8].i) != 0) goto label_28;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.bad.parms"_j));
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i));
	LINE_NUMBER(115);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = frame[4].o;
	LINE_NUMBER(114);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_typeTags;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[7].i)) = (jbyte((frame[8].i)));
	LINE_NUMBER(111);
	INST_IINC(7, 1);
	goto label_25;
	}
label_18:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	jint temp0 = (jint)((func_rhino_MemberBox_isMethod_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_isMethod_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = frame[8].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o != sp[1].o) goto label_37;
	}
	{
	LINE_NUMBER(126);
	((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_hasVoidReturn = (jint(1));
	goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_rhino_FunctionObject_getTypeTag_java_lang_Class_R_int(ctx, (frame[8].o));
	((rhino_FunctionObject *) NULL_CHECK(sp[0].o))->F_returnTypeTag = temp0;
	}
label_39:;
	LINE_NUMBER(130);
	goto label_40;
label_33:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_getDeclaringClass_R_java_lang_Class])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(132);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, (frame[7].o));
	if (temp0 != 0) goto label_40;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.bad.ctor.return"_j));
	sp[1].o = frame[7].o;
	LINE_NUMBER(134);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(133);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_40:;
	{
	LINE_NUMBER(138);
	SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_rhino_FunctionObject_getTypeTag_java_lang_Class_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:getTypeTag", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_FunctionObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_IntegerClass;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o != sp[1].o) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (jint(2));
	}
label_4:;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (jint(3));
	}
label_6:;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_DoubleClass;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o != sp[1].o) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (jint(4));
	}
label_8:;
	{
	LINE_NUMBER(155);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (jint(5));
	}
label_9:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (6);
	}
label_11:;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_FunctionObject_convertArg_rhino_Context_rhino_Scriptable_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:convertArg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_FunctionObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(168);
	switch((frame[3].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		default: goto label_7;
	}
	}
label_1:;
	{
	LINE_NUMBER(170);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_String)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_8:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(174);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Integer)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_10:;
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(178);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Boolean)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_12:;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_14;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_TRUE;
	goto label_15;
label_14:;
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
label_15:;
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(183);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Double)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_16:;
	{
	LINE_NUMBER(185);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_7:;
	{
	LINE_NUMBER(191);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_FunctionObject_getArity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:getArity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength) >= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].i = ((rhino_FunctionObject *) NULL_CHECK(sp[-1].o))->F_parmsLength;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_FunctionObject_getLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_rhino_FunctionObject_getArity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_FunctionObject_getArity_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_FunctionObject_getFunctionName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:getFunctionName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_functionName;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_FunctionObject *) NULL_CHECK(sp[-1].o))->F_functionName;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_FunctionObject_getMethodOrConstructor_R_java_lang_reflect_Member(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:getMethodOrConstructor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	jint temp0 = (jint)((func_rhino_MemberBox_isMethod_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_isMethod_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_FunctionObject_findSingleMethod_Array1_java_lang_reflect_Method_java_lang_String_R_java_lang_reflect_Method(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:findSingleMethod", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_FunctionObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(230);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(231);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	}
label_3:;
	{
	if ((frame[3].i) == (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(232);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(233);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(234);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.no.overload"_j));
	sp[1].o = frame[1].o;
	sp[2].o = frame[5].o;
	LINE_NUMBER(237);
	sp[2].o = (jobject)((func_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	LINE_NUMBER(235);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(239);
	frame[2].o = (frame[5].o);
	}
label_7:;
	{
	LINE_NUMBER(231);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_FunctionObject_getMethodList_java_lang_Class_R_Array1_java_lang_reflect_Method(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:getMethodList", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_FunctionObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(255);
	frame[2].i = (jint(0));
	LINE_NUMBER(256);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(257);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_6;
	}
	{
	LINE_NUMBER(258);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (jobject(nullptr));
	goto label_8;
	}
label_6:;
	LINE_NUMBER(260);
	INST_IINC(2, 1);
label_8:;
	{
	LINE_NUMBER(256);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_reflect_Method, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(264);
	frame[4].i = (jint(0));
	LINE_NUMBER(265);
	frame[5].o = (frame[1].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_12;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(266);
	if ((frame[8].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[8].o);
	}
label_14:;
	{
	LINE_NUMBER(265);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_rhino_FunctionObject_addAsConstructor_rhino_Scriptable_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:addAsConstructor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(288);
	((func_rhino_FunctionObject_initAsConstructor_rhino_Scriptable_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_FunctionObject_initAsConstructor_rhino_Scriptable_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(289);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_Scriptable_getClassName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getClassName_R_java_lang_String, (frame[2].o)))(ctx, (frame[2].o));
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, sp[0].o, sp[1].o, (frame[0].o), (jint(2)));
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_FunctionObject_initAsConstructor_rhino_Scriptable_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:initAsConstructor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(294);
	SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(295);
	((func_rhino_FunctionObject_setImmunePrototypeProperty_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_FunctionObject_setImmunePrototypeProperty_java_lang_Object])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(297);
	((func_rhino_Scriptable_setParentScope_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setParentScope_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(299);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"constructor"_j))), (frame[0].o), (7));
	LINE_NUMBER(303);
	((func_rhino_FunctionObject_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_FunctionObject_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_FunctionObject_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:call", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(318);
	frame[6].i = (jint(0));
	LINE_NUMBER(319);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(321);
	frame[8].i = (jint(0));
	}
label_3:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_4;
	}
	{
	LINE_NUMBER(323);
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i))), &class_rhino_ConsString)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(324);
	sp[0].o = frame[4].o;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i))))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(321);
	INST_IINC(8, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(328);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(329);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength) != (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (frame[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (frame[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(331);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)), (frame[8].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(332);
	frame[6].i = (jint(1));
	LINE_NUMBER(333);
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(334);
	if ((frame[3].o) != nullptr) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(335);
	if ((frame[8].i) == 0) goto label_19;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_TRUE;
	goto label_20;
label_19:;
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
label_20:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(336);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (frame[0].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (frame[9].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(337);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	jint temp0 = (jint)((func_rhino_MemberBox_isCtor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_isCtor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[1].o = frame[10].o;
	LINE_NUMBER(338);
	sp[0].o = (jobject)((func_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_25;
	}
label_23:;
	{
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[1].o = jobject(nullptr);
	sp[2].o = frame[10].o;
	LINE_NUMBER(339);
	sp[0].o = (jobject)((func_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_25:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(340);
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(343);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_isStatic) != 0) goto label_28;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_getDeclaringClass_R_java_lang_Class])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(345);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[8].o), (frame[3].o));
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(346);
	frame[9].i = (jint(0));
	LINE_NUMBER(347);
	if ((frame[3].o) != (frame[2].o)) goto label_33;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_rhino_FunctionObject_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_FunctionObject_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(349);
	if ((frame[2].o) == (frame[10].o)) goto label_33;
	}
	{
	LINE_NUMBER(352);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[8].o), (frame[10].o));
	frame[9].i = temp0;
	LINE_NUMBER(353);
	if ((frame[9].i) == 0) goto label_33;
	}
	{
	LINE_NUMBER(354);
	frame[3].o = (frame[10].o);
	}
label_33:;
	{
	LINE_NUMBER(358);
	if ((frame[9].i) != 0) goto label_28;
	}
	{
	LINE_NUMBER(360);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.incompat.call"_j));
	sp[1].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_functionName;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(367);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength) != (frame[7].i)) goto label_40;
	}
	{
	LINE_NUMBER(370);
	frame[8].o = (frame[4].o);
	LINE_NUMBER(371);
	frame[9].i = (jint(0));
	}
label_43:;
	{
	if ((frame[9].i) == ((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength)) goto label_44;
	}
	{
	LINE_NUMBER(372);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[9].i)));
	LINE_NUMBER(373);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[10].o;
	sp[3].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_typeTags;
	sp[0].o = (jobject)SM_rhino_FunctionObject_convertArg_rhino_Context_rhino_Scriptable_java_lang_Object_int_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)ARRAY_ACCESS(jbyte, sp[3].o, (frame[9].i))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(374);
	if ((frame[10].o) == (frame[11].o)) goto label_48;
	}
	{
	LINE_NUMBER(375);
	if ((frame[8].o) != (frame[4].o)) goto label_50;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[4].o));
	frame[8].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_50:;
	{
	LINE_NUMBER(378);
	ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i)) = (frame[11].o);
	}
label_48:;
	{
	LINE_NUMBER(371);
	INST_IINC(9, 1);
	goto label_43;
	}
label_44:;
	goto label_52;
label_40:;
	{
	LINE_NUMBER(381);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength) != 0) goto label_53;
	}
	{
	LINE_NUMBER(382);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[8].o = sp[0].o;
	goto label_52;
	}
label_53:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength));
	frame[8].o = sp[0].o;
	LINE_NUMBER(385);
	frame[9].i = (jint(0));
	}
label_57:;
	{
	if ((frame[9].i) == ((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength)) goto label_52;
	}
	{
	LINE_NUMBER(386);
	if ((frame[9].i) >= (frame[7].i)) goto label_59;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[9].i));
	sp += 1;
	goto label_60;
	}
label_59:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_60:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(389);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[10].o;
	sp[4].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_typeTags;
	sp[1].o = (jobject)SM_rhino_FunctionObject_convertArg_rhino_Context_rhino_Scriptable_java_lang_Object_int_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)ARRAY_ACCESS(jbyte, sp[4].o, (frame[9].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(385);
	INST_IINC(9, 1);
	goto label_57;
	}
label_52:;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	jint temp0 = (jint)((func_rhino_MemberBox_isMethod_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_isMethod_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_63;
	}
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o), (frame[8].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(395);
	frame[6].i = (jint(1));
	goto label_15;
	}
label_63:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	frame[5].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(402);
	if ((frame[6].i) == 0) goto label_66;
	}
	{
	LINE_NUMBER(403);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_hasVoidReturn) == 0) goto label_68;
	}
	{
	LINE_NUMBER(404);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[5].o = sp[0].o;
	goto label_66;
	}
label_68:;
	{
	LINE_NUMBER(405);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_returnTypeTag) != 0) goto label_66;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[5].o), (jobject(nullptr)));
	frame[5].o = sp[0].o;
	}
label_66:;
	{
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_FunctionObject_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:createObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	jint temp0 = (jint)((func_rhino_MemberBox_isCtor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_isCtor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength) != (-2)) goto label_0;
	}
label_5:;
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_member;
	sp[0].o = (jobject)((func_rhino_MemberBox_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_getDeclaringClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_newInstance_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_newInstance_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_rhino_Scriptable, sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(433);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(431);
	frame[4].o = sp[0].o;
	LINE_NUMBER(432);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(435);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_FunctionObject_getClassPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_FunctionObject_getClassPrototype_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_setPrototype_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(436);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_FunctionObject_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_FunctionObject_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_setParentScope_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setParentScope_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_FunctionObject_isVarArgsMethod_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:isVarArgsMethod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(441);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength) != (jint(-1))) goto label_1;
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

jbool M_rhino_FunctionObject_isVarArgsConstructor_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/FunctionObject:isVarArgsConstructor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(445);
	if (((jint)((rhino_FunctionObject *) NULL_CHECK((frame[0].o)))->F_parmsLength) != (-2)) goto label_1;
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

void *vtable_rhino_FunctionObject[] {
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
	(void *) M_rhino_FunctionObject_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_isGeneratorFunction_R_boolean,
	(void *) M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction,
	(void *) M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object,
	(void *) M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable,
	(void *) M_rhino_FunctionObject_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_decompile_int_int_R_java_lang_String,
	(void *) M_rhino_FunctionObject_getArity_R_int,
	(void *) M_rhino_FunctionObject_getLength_R_int,
	(void *) M_rhino_FunctionObject_getFunctionName_R_java_lang_String,
	(void *) M_rhino_BaseFunction_hasPrototypeProperty_R_boolean,
	(void *) M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_getArguments_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_FunctionObject_getMethodOrConstructor_R_java_lang_reflect_Member,
	(void *) M_rhino_FunctionObject_addAsConstructor_rhino_Scriptable_rhino_Scriptable,
	(void *) M_rhino_FunctionObject_initAsConstructor_rhino_Scriptable_rhino_Scriptable,
	(void *) M_rhino_FunctionObject_isVarArgsMethod_R_boolean,
	(void *) M_rhino_FunctionObject_isVarArgsConstructor_R_boolean,
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
	{ "getMethodOrConstructor", "()Ljava/lang/reflect/Member;" },
	{ "addAsConstructor", "(Lrhino/Scriptable;Lrhino/Scriptable;)V" },
	{ "initAsConstructor", "(Lrhino/Scriptable;Lrhino/Scriptable;)V" },
	{ "isVarArgsMethod", "()Z" },
	{ "isVarArgsConstructor", "()Z" },
};

static FieldMetadata fields[] {
	{ "VARARGS_METHOD", &class_short, (intptr_t) &SF_rhino_FunctionObject_VARARGS_METHOD, "S", 26 },
	{ "VARARGS_CTOR", &class_short, (intptr_t) &SF_rhino_FunctionObject_VARARGS_CTOR, "S", 26 },
	{ "JAVA_UNSUPPORTED_TYPE", &class_int, (intptr_t) &SF_rhino_FunctionObject_JAVA_UNSUPPORTED_TYPE, "I", 25 },
	{ "JAVA_STRING_TYPE", &class_int, (intptr_t) &SF_rhino_FunctionObject_JAVA_STRING_TYPE, "I", 25 },
	{ "JAVA_INT_TYPE", &class_int, (intptr_t) &SF_rhino_FunctionObject_JAVA_INT_TYPE, "I", 25 },
	{ "JAVA_BOOLEAN_TYPE", &class_int, (intptr_t) &SF_rhino_FunctionObject_JAVA_BOOLEAN_TYPE, "I", 25 },
	{ "JAVA_DOUBLE_TYPE", &class_int, (intptr_t) &SF_rhino_FunctionObject_JAVA_DOUBLE_TYPE, "I", 25 },
	{ "JAVA_SCRIPTABLE_TYPE", &class_int, (intptr_t) &SF_rhino_FunctionObject_JAVA_SCRIPTABLE_TYPE, "I", 25 },
	{ "JAVA_OBJECT_TYPE", &class_int, (intptr_t) &SF_rhino_FunctionObject_JAVA_OBJECT_TYPE, "I", 25 },
	{ "member", &class_rhino_MemberBox, offsetof(rhino_FunctionObject, F_member), "Lrhino/MemberBox;", 0 },
	{ "functionName", &class_java_lang_String, offsetof(rhino_FunctionObject, F_functionName), "Ljava/lang/String;", 18 },
	{ "typeTags", getArrayClass(&class_byte, 1), offsetof(rhino_FunctionObject, F_typeTags), "[B", 130 },
	{ "parmsLength", &class_int, offsetof(rhino_FunctionObject, F_parmsLength), "I", 18 },
	{ "hasVoidReturn", &class_boolean, offsetof(rhino_FunctionObject, F_hasVoidReturn), "Z", 130 },
	{ "returnTypeTag", &class_int, offsetof(rhino_FunctionObject, F_returnTypeTag), "I", 130 },
	{ "isStatic", &class_boolean, offsetof(rhino_FunctionObject, F_isStatic), "Z", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_FunctionObject_java_lang_String_java_lang_reflect_Member_rhino_Scriptable, 0, "(Ljava/lang/String;Ljava/lang/reflect/Member;Lrhino/Scriptable;)V", 1 },
	{ "getTypeTag", (intptr_t) SM_rhino_FunctionObject_getTypeTag_java_lang_Class_R_int, 0, "(Ljava/lang/Class;)I", 9 },
	{ "convertArg", (intptr_t) SM_rhino_FunctionObject_convertArg_rhino_Context_rhino_Scriptable_java_lang_Object_int_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;I)Ljava/lang/Object;", 9 },
	{ "getArity", (intptr_t) M_rhino_FunctionObject_getArity_R_int, VTABLE_rhino_FunctionObject_getArity_R_int, "()I", 1 },
	{ "getLength", (intptr_t) M_rhino_FunctionObject_getLength_R_int, VTABLE_rhino_FunctionObject_getLength_R_int, "()I", 1 },
	{ "getFunctionName", (intptr_t) M_rhino_FunctionObject_getFunctionName_R_java_lang_String, VTABLE_rhino_FunctionObject_getFunctionName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getMethodOrConstructor", (intptr_t) M_rhino_FunctionObject_getMethodOrConstructor_R_java_lang_reflect_Member, VTABLE_rhino_FunctionObject_getMethodOrConstructor_R_java_lang_reflect_Member, "()Ljava/lang/reflect/Member;", 1 },
	{ "findSingleMethod", (intptr_t) SM_rhino_FunctionObject_findSingleMethod_Array1_java_lang_reflect_Method_java_lang_String_R_java_lang_reflect_Method, 0, "([Ljava/lang/reflect/Method;Ljava/lang/String;)Ljava/lang/reflect/Method;", 8 },
	{ "getMethodList", (intptr_t) SM_rhino_FunctionObject_getMethodList_java_lang_Class_R_Array1_java_lang_reflect_Method, 0, "(Ljava/lang/Class;)[Ljava/lang/reflect/Method;", 8 },
	{ "addAsConstructor", (intptr_t) M_rhino_FunctionObject_addAsConstructor_rhino_Scriptable_rhino_Scriptable, VTABLE_rhino_FunctionObject_addAsConstructor_rhino_Scriptable_rhino_Scriptable, "(Lrhino/Scriptable;Lrhino/Scriptable;)V", 1 },
	{ "initAsConstructor", (intptr_t) M_rhino_FunctionObject_initAsConstructor_rhino_Scriptable_rhino_Scriptable, VTABLE_rhino_FunctionObject_initAsConstructor_rhino_Scriptable_rhino_Scriptable, "(Lrhino/Scriptable;Lrhino/Scriptable;)V", 0 },
	{ "call", (intptr_t) M_rhino_FunctionObject_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_FunctionObject_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "createObject", (intptr_t) M_rhino_FunctionObject_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable, VTABLE_rhino_FunctionObject_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;", 1 },
	{ "isVarArgsMethod", (intptr_t) M_rhino_FunctionObject_isVarArgsMethod_R_boolean, VTABLE_rhino_FunctionObject_isVarArgsMethod_R_boolean, "()Z", 0 },
	{ "isVarArgsConstructor", (intptr_t) M_rhino_FunctionObject_isVarArgsConstructor_R_boolean, VTABLE_rhino_FunctionObject_isVarArgsConstructor_R_boolean, "()Z", 0 },
};

Class class_rhino_FunctionObject{
		.nativeName = (intptr_t) "rhino/FunctionObject",
		.parentClass = (intptr_t) &class_rhino_BaseFunction,
		.size = sizeof(rhino_FunctionObject),
		.classVtable = (intptr_t) vtable_rhino_FunctionObject,
		.staticInitializer = (intptr_t) clinit_rhino_FunctionObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_FunctionObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 134,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_FunctionObject = registerClass(&class_rhino_FunctionObject);

}
