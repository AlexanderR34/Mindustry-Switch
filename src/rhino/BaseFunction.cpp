#include "rhino/BaseFunction.h"
#include "rhino/NativeCall.h"
#include "rhino/Function.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "rhino/NativeFunction.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/BaseFunction.h"
#include "rhino/Callable.h"
#include "rhino/Undefined.h"
#include "rhino/JavaScriptException.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "rhino/Delegator.h"
#include "rhino/ErrorReporter.h"
#include "rhino/Evaluator.h"
#include "rhino/NativeObject.h"
#include "rhino/BoundFunction.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "rhino/Context.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/UniqueTag.h"
#include "rhino/DefaultErrorReporter.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_rhino_BaseFunction_FUNCTION_TAG;
jobject SF_rhino_BaseFunction_FUNCTION_CLASS;
jobject SF_rhino_BaseFunction_GENERATOR_FUNCTION_CLASS;
jint SF_rhino_BaseFunction_Id_length;
jint SF_rhino_BaseFunction_Id_arity;
jint SF_rhino_BaseFunction_Id_name;
jint SF_rhino_BaseFunction_Id_prototype;
jint SF_rhino_BaseFunction_Id_arguments;
jint SF_rhino_BaseFunction_MAX_INSTANCE_ID;
jint SF_rhino_BaseFunction_Id_constructor;
jint SF_rhino_BaseFunction_Id_toString;
jint SF_rhino_BaseFunction_Id_toSource;
jint SF_rhino_BaseFunction_Id_apply;
jint SF_rhino_BaseFunction_Id_call;
jint SF_rhino_BaseFunction_Id_bind;
jint SF_rhino_BaseFunction_MAX_PROTOTYPE_ID;

void mark_rhino_BaseFunction(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_BaseFunction_FUNCTION_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_BaseFunction_FUNCTION_TAG)->clazz)->markFunction)((jobject) SF_rhino_BaseFunction_FUNCTION_TAG, mark, depth + 1);
		if (SF_rhino_BaseFunction_FUNCTION_CLASS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_BaseFunction_FUNCTION_CLASS)->clazz)->markFunction)((jobject) SF_rhino_BaseFunction_FUNCTION_CLASS, mark, depth + 1);
		if (SF_rhino_BaseFunction_GENERATOR_FUNCTION_CLASS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_BaseFunction_GENERATOR_FUNCTION_CLASS)->clazz)->markFunction)((jobject) SF_rhino_BaseFunction_GENERATOR_FUNCTION_CLASS, mark, depth + 1);
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
	auto self = (rhino_BaseFunction *) object;
	if (self->F_prototypeProperty)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prototypeProperty)->clazz)->markFunction)((jobject) self->F_prototypeProperty, mark, depth + 1);
	if (self->F_argumentsObj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_argumentsObj)->clazz)->markFunction)((jobject) self->F_argumentsObj, mark, depth + 1);
}

void SM_rhino_BaseFunction_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BaseFunction(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(17);
	clinit_rhino_BaseFunction(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_BaseFunction);
	init_rhino_BaseFunction(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(19);
	((rhino_BaseFunction *) NULL_CHECK((frame[2].o)))->F_prototypePropertyAttributes = (7);
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_rhino_BaseFunction_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_BaseFunction_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (6), (frame[0].o), (frame[1].i));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_BaseFunction_initAsGeneratorFunction_rhino_Scriptable_boolean_R_java_lang_Object(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:initAsGeneratorFunction", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BaseFunction(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(24);
	clinit_rhino_BaseFunction(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_BaseFunction);
	init_rhino_BaseFunction_boolean(ctx, sp[0].o, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(26);
	((rhino_BaseFunction *) NULL_CHECK((frame[2].o)))->F_prototypePropertyAttributes = (jint(5));
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_rhino_BaseFunction_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_BaseFunction_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (6), (frame[0].o), (frame[1].i));
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"__GeneratorFunction"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_rhino_BaseFunction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BaseFunction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(666);
	sp[0].o = frame[0].o;
	clinit_rhino_BaseFunction(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	((rhino_BaseFunction *) NULL_CHECK(sp[0].o))->F_argumentsObj = (jref) sp[1].o;
	LINE_NUMBER(667);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_isGeneratorFunction = (jint(0));
	LINE_NUMBER(672);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypePropertyAttributes = (6);
	LINE_NUMBER(673);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_argumentsAttributes = (6);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_BaseFunction_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BaseFunction(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(666);
	sp[0].o = frame[0].o;
	clinit_rhino_BaseFunction(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	((rhino_BaseFunction *) NULL_CHECK(sp[0].o))->F_argumentsObj = (jref) sp[1].o;
	LINE_NUMBER(667);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_isGeneratorFunction = (jint(0));
	LINE_NUMBER(672);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypePropertyAttributes = (6);
	LINE_NUMBER(673);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_argumentsAttributes = (6);
	LINE_NUMBER(37);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_isGeneratorFunction = (frame[1].i);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_BaseFunction_rhino_Scriptable_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BaseFunction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(41);
	init_rhino_IdScriptableObject_rhino_Scriptable_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(666);
	sp[0].o = frame[0].o;
	clinit_rhino_BaseFunction(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	((rhino_BaseFunction *) NULL_CHECK(sp[0].o))->F_argumentsObj = (jref) sp[1].o;
	LINE_NUMBER(667);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_isGeneratorFunction = (jint(0));
	LINE_NUMBER(672);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypePropertyAttributes = (6);
	LINE_NUMBER(673);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_argumentsAttributes = (6);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_rhino_BaseFunction_isGeneratorFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_isGeneratorFunction_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"__GeneratorFunction"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Function"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_rhino_BaseFunction_isGeneratorFunction_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:isGeneratorFunction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return ((jint)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_isGeneratorFunction);
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_getTypeOf_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getTypeOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((func_rhino_BaseFunction_avoidObjectDetection_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_avoidObjectDetection_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"undefined"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"function"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_rhino_BaseFunction_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:hasInstance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"prototype"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_jsDelegatesTo_rhino_Scriptable_rhino_Scriptable_R_boolean(ctx, (frame[1].o), (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(82);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.instanceof.bad.prototype"_j));
	sp[1].o = frame[0].o;
	LINE_NUMBER(83);
	sp[1].o = (jobject)((func_rhino_BaseFunction_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_BaseFunction_getFunctionName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_BaseFunction_getMaxInstanceId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getMaxInstanceId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jint(5));
	}

	popStackFrame(ctx);
}

jint M_rhino_BaseFunction_findInstanceIdInfo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:findInstanceIdInfo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	frame[2].i = (jint(0));
	LINE_NUMBER(109);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 4: goto label_3;
		case 5: goto label_4;
		case 6: goto label_5;
		case 7: goto label_6;
		case 8: goto label_6;
		case 9: goto label_7;
		default: goto label_6;
	}
	}
label_3:;
	{
	LINE_NUMBER(114);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"name"_j)));
	LINE_NUMBER(115);
	frame[2].i = (jint(3));
	LINE_NUMBER(116);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(118);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"arity"_j)));
	LINE_NUMBER(119);
	frame[2].i = (jint(2));
	LINE_NUMBER(120);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(122);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"length"_j)));
	LINE_NUMBER(123);
	frame[2].i = (jint(1));
	LINE_NUMBER(124);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(127);
	if ((frame[4].i) != (97)) goto label_15;
	}
	{
	LINE_NUMBER(128);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"arguments"_j)));
	LINE_NUMBER(129);
	frame[2].i = (jint(5));
	goto label_6;
	}
label_15:;
	{
	LINE_NUMBER(130);
	if ((frame[4].i) != (112)) goto label_6;
	}
	{
	LINE_NUMBER(131);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"prototype"_j)));
	LINE_NUMBER(132);
	frame[2].i = (jint(4));
	}
label_6:;
	{
	LINE_NUMBER(136);
	if ((frame[3].o) == nullptr) goto label_20;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_20;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_20:;
	{
	LINE_NUMBER(141);
	if ((frame[2].i) != 0) goto label_21;
	}
	{
	jint temp0 = (jint)M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_21:;
	{
	LINE_NUMBER(144);
	switch((frame[2].i)) {
		case 1: goto label_22;
		case 2: goto label_22;
		case 3: goto label_22;
		case 4: goto label_23;
		case 5: goto label_24;
		default: goto label_25;
	}
	}
label_22:;
	{
	LINE_NUMBER(148);
	frame[3].i = (7);
	LINE_NUMBER(149);
	goto label_27;
	}
label_23:;
	{
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_rhino_BaseFunction_hasPrototypeProperty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_hasPrototypeProperty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(155);
	frame[3].i = ((jint)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypePropertyAttributes);
	LINE_NUMBER(156);
	goto label_27;
	}
label_24:;
	{
	LINE_NUMBER(158);
	frame[3].i = ((jint)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_argumentsAttributes);
	LINE_NUMBER(159);
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(161);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(163);
	jint temp0 = (jint)SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int(ctx, (frame[3].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_getInstanceIdName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getInstanceIdName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(168);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"length"_j)));
	}
label_2:;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"arity"_j)));
	}
label_3:;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"name"_j)));
	}
label_4:;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"prototype"_j)));
	}
label_5:;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"arguments"_j)));
	}
label_6:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_getInstanceIdValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getInstanceIdValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(185);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_rhino_BaseFunction_getLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getLength_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_rhino_BaseFunction_getArity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getArity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_rhino_BaseFunction_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getFunctionName_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)M_rhino_BaseFunction_getArguments_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_BaseFunction_setInstanceIdValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:setInstanceIdValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(202);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_1;
		case 4: goto label_2;
		case 5: goto label_3;
		default: goto label_4;
	}
	}
label_2:;
	{
	LINE_NUMBER(204);
	if ((((jint)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypePropertyAttributes) & (jint(1))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_7;
	}
	INST_ALOAD(2);
	goto label_8;
label_7:;
	clinit_rhino_UniqueTag(ctx);
	(sp++)->o = SF_rhino_UniqueTag_NULL_VALUE;
label_8:;
	sp -= 2;
	((rhino_BaseFunction *) NULL_CHECK(sp[0].o))->F_prototypeProperty = (jref) sp[1].o;
label_5:;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[2].o;
	clinit_rhino_BaseFunction(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_9:;
	{
	LINE_NUMBER(214);
	jint temp0 = (jint)((func_rhino_BaseFunction_defaultHas_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_defaultHas_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"arguments"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(215);
	((func_rhino_BaseFunction_defaultPut_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_defaultPut_java_lang_String_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"arguments"_j))), (frame[2].o));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(216);
	if ((((jint)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_argumentsAttributes) & (jint(1))) != 0) goto label_13;
	}
	{
	LINE_NUMBER(217);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_argumentsObj = (jref) (frame[2].o);
	}
label_13:;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	LINE_NUMBER(223);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(225);
	M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_BaseFunction_setInstanceIdAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:setInstanceIdAttributes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(230);
	switch((frame[1].i)) {
		case 4: goto label_1;
		case 5: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(232);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypePropertyAttributes = (frame[2].i);
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(235);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_argumentsAttributes = (frame[2].i);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(238);
	M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_BaseFunction_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:fillConstructorProperties", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	((func_rhino_IdFunctionObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_setPrototype_rhino_Scriptable])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(247);
	M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_BaseFunction_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(254);
	switch((frame[1].i)) {
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
	LINE_NUMBER(256);
	frame[3].i = (jint(1));
	LINE_NUMBER(257);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(258);
	goto label_10;
	}
label_2:;
	{
	LINE_NUMBER(260);
	frame[3].i = (jint(0));
	LINE_NUMBER(261);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(262);
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(264);
	frame[3].i = (jint(1));
	LINE_NUMBER(265);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(266);
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(268);
	frame[3].i = (jint(2));
	LINE_NUMBER(269);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"apply"_j)));
	LINE_NUMBER(270);
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(272);
	frame[3].i = (jint(1));
	LINE_NUMBER(273);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"call"_j)));
	LINE_NUMBER(274);
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(276);
	frame[3].i = (jint(1));
	LINE_NUMBER(277);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"bind"_j)));
	LINE_NUMBER(278);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(280);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_rhino_BaseFunction(ctx);
	sp[1].o = (jobject)SF_rhino_BaseFunction_FUNCTION_TAG;
	sp[0].o = (jobject)((func_rhino_BaseFunction_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_BaseFunction_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_BaseFunction_isApply_rhino_IdFunctionObject_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:isApply", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BaseFunction(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	clinit_rhino_BaseFunction(ctx);
	sp[1].o = (jobject)SF_rhino_BaseFunction_FUNCTION_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[0].o));
	if (temp0 != (jint(4))) goto label_1;
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

jbool SM_rhino_BaseFunction_isApplyOrCall_rhino_IdFunctionObject_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:isApplyOrCall", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BaseFunction(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	clinit_rhino_BaseFunction(ctx);
	sp[1].o = (jobject)SF_rhino_BaseFunction_FUNCTION_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[0].o));
	switch(temp0) {
		case 4: goto label_3;
		case 5: goto label_3;
		default: goto label_1;
	}
	}
label_3:;
	{
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:execIdCall", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(303);
	sp[0].o = frame[1].o;
	clinit_rhino_BaseFunction(ctx);
	sp[1].o = (jobject)SF_rhino_BaseFunction_FUNCTION_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(306);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(307);
	switch((frame[6].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		case 4: goto label_7;
		case 5: goto label_7;
		case 6: goto label_8;
		default: goto label_9;
	}
	}
label_4:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(313);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_Array1_java_lang_Object_int_R_int(ctx, (frame[5].o), (jint(0)));
	frame[8].i = temp0;
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_rhino_BaseFunction_decompile_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_BaseFunction_decompile_int_int_R_java_lang_String])(ctx, (frame[7].o), (frame[8].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(319);
	frame[8].i = (jint(0));
	LINE_NUMBER(320);
	frame[9].i = (jint(2));
	LINE_NUMBER(321);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) == 0) goto label_15;
	}
	{
	LINE_NUMBER(322);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_java_lang_Object_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[8].i = temp0;
	LINE_NUMBER(323);
	if ((frame[8].i) < 0) goto label_18;
	}
	{
	LINE_NUMBER(324);
	frame[9].i = (jint(0));
	goto label_15;
	}
label_18:;
	{
	LINE_NUMBER(326);
	frame[8].i = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((func_rhino_BaseFunction_decompile_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_BaseFunction_decompile_int_int_R_java_lang_String])(ctx, (frame[7].o), (frame[8].i), (frame[9].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(334);
	if ((frame[6].i) != (jint(4))) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_applyOrCall_boolean_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, sp[0].i, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(338);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Callable)) != 0) goto label_22;
	}
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(341);
	frame[7].o = (checkCast(ctx, &class_rhino_Callable, (frame[4].o)));
	LINE_NUMBER(342);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	LINE_NUMBER(345);
	if ((frame[8].i) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), (frame[3].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[8].i) - (jint(1))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(348);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (jint(1)), (frame[10].o), (jint(0)), ((frame[8].i) - (jint(1))));
	goto label_30;
	}
label_26:;
	{
	LINE_NUMBER(350);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(351);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[10].o = sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(353);
	clinit_rhino_BoundFunction(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_BoundFunction);
	init_rhino_BoundFunction_rhino_Context_rhino_Scriptable_rhino_Callable_rhino_Scriptable_Array1_java_lang_Object(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[7].o), (frame[9].o), (frame[10].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(355);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:realFunction", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(359);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_FunctionClass;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(360);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Delegator)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_Delegator, (frame[3].o))))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (checkCast(ctx, &class_rhino_Delegator, (frame[3].o))));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(363);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_BaseFunction)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_BaseFunction, (frame[3].o)));
	}
label_4:;
	{
	LINE_NUMBER(366);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.incompat.call"_j));
	sp[1].o = frame[2].o;
	LINE_NUMBER(367);
	sp[1].o = (jobject)((func_rhino_IdFunctionObject_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IdFunctionObject_getFunctionName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(366);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:setImmunePrototypeProperty", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(375);
	if ((((jint)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypePropertyAttributes) & (jint(1))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(376);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	goto label_4;
label_3:;
	clinit_rhino_UniqueTag(ctx);
	(sp++)->o = SF_rhino_UniqueTag_NULL_VALUE;
label_4:;
	{
	sp -= 2;
	((rhino_BaseFunction *) NULL_CHECK(sp[0].o))->F_prototypeProperty = (jref) sp[1].o;
	LINE_NUMBER(379);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypePropertyAttributes = (7);
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getClassPrototype", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(384);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Scriptable)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, (frame[1].o)));
	}
label_2:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:call", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(396);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:construct", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(402);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_rhino_BaseFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(404);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Scriptable)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(405);
	frame[4].o = (checkCast(ctx, &class_rhino_Scriptable, (frame[5].o)));
	}
label_5:;
	LINE_NUMBER(407);
	goto label_7;
label_2:;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((func_rhino_BaseFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(409);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Scriptable)) != 0) goto label_9;
	}
	{
	LINE_NUMBER(412);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad implementaion of call as constructor, name="_j))));
	sp[2].o = frame[0].o;
	LINE_NUMBER(414);
	sp[2].o = (jobject)((func_rhino_BaseFunction_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_BaseFunction_getFunctionName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" in "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(416);
	frame[4].o = (checkCast(ctx, &class_rhino_Scriptable, (frame[5].o)));
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o));
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(419);
	if ((frame[4].o) == (frame[6].o)) goto label_13;
	}
	{
	LINE_NUMBER(420);
	((func_rhino_Scriptable_setPrototype_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o), (frame[6].o));
	}
label_13:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o));
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((func_rhino_BaseFunction_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(425);
	if ((frame[4].o) == (frame[6].o)) goto label_7;
	}
	{
	LINE_NUMBER(426);
	((func_rhino_Scriptable_setParentScope_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setParentScope_rhino_Scriptable, (frame[4].o)))(ctx, (frame[4].o), (frame[6].o));
	}
label_7:;
	{
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:createObject", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(444);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(445);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_setPrototype_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(446);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_BaseFunction_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_setParentScope_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setParentScope_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_decompile_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:decompile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(457);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(458);
	if ((jint(0)) == ((frame[2].i) & (jint(1)))) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(459);
	if ((frame[4].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"function "_j))));
	LINE_NUMBER(461);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_BaseFunction_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getFunctionName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"() {\n\t"_j))));
	}
label_5:;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[native code, arity="_j))));
	LINE_NUMBER(465);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_rhino_BaseFunction_getArity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_getArity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(466);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"]\n"_j))));
	LINE_NUMBER(467);
	if ((frame[4].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"}\n"_j))));
	}
label_12:;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_BaseFunction_getArity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getArity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_BaseFunction_getLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_getFunctionName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getFunctionName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jbool M_rhino_BaseFunction_hasPrototypeProperty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:hasPrototypeProperty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypeProperty;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeFunction)) == 0) goto label_2;
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

jobject M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getPrototypeProperty", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypeProperty;
	frame[1].o = sp[0].o;
	LINE_NUMBER(491);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(494);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeFunction)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(497);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[1].o = sp[0].o;
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(499);
	sp[0].o = frame[1].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(500);
	frame[1].o = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:setupDefaultPrototype", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypeProperty;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypeProperty;
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(509);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(510);
	frame[2].i = (jint(2));
	LINE_NUMBER(511);
	((func_rhino_NativeObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"constructor"_j))), (frame[0].o), (jint(2)));
	LINE_NUMBER(515);
	((rhino_BaseFunction *) NULL_CHECK((frame[0].o)))->F_prototypeProperty = (jref) (frame[1].o);
	LINE_NUMBER(516);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(517);
	if ((frame[3].o) == (frame[1].o)) goto label_8;
	}
	{
	LINE_NUMBER(519);
	((func_rhino_NativeObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeObject_setPrototype_rhino_Scriptable])(ctx, (frame[1].o), (frame[3].o));
	}
label_8:;
	{
	LINE_NUMBER(521);
	popStackFrame(ctx, self);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_getArguments_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:getArguments", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(528);
	jint temp0 = (jint)((func_rhino_BaseFunction_defaultHas_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_defaultHas_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"arguments"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_rhino_BaseFunction_defaultGet_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_defaultGet_java_lang_String_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"arguments"_j))));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_BaseFunction *) NULL_CHECK(sp[-1].o))->F_argumentsObj;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(529);
	sp[0].o = frame[1].o;
	clinit_rhino_BaseFunction(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(538);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_findFunctionActivation_rhino_Context_rhino_Function_R_rhino_NativeCall(ctx, (frame[2].o), (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(539);
	if ((frame[3].o) != nullptr) goto label_8;
	}
	INST_ACONST_NULL();
	goto label_9;
label_8:;
	{
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"arguments"_j));
	sp[2].o = frame[3].o;
	LINE_NUMBER(541);
	sp[0].o = (jobject)((func_rhino_NativeCall_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeCall_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_9:;
	LINE_NUMBER(539);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:jsConstructor", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(545);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(546);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"function "_j))));
	LINE_NUMBER(549);
	jint temp0 = (jint)((func_rhino_BaseFunction_isGeneratorFunction_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_BaseFunction_isGeneratorFunction_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"* "_j))));
	}
label_4:;
	{
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	if (temp0 == (120)) goto label_6;
	}
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"anonymous"_j))));
	}
label_6:;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (40));
	LINE_NUMBER(564);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= ((frame[4].i) - (jint(1)))) goto label_10;
	}
	{
	LINE_NUMBER(565);
	if ((frame[6].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (44));
	}
label_12:;
	{
	LINE_NUMBER(568);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(564);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8") {"_j))));
	LINE_NUMBER(571);
	if ((frame[4].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((frame[4].i) - (jint(1))))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[6].o));
	}
label_16:;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"\n}"_j))));
	LINE_NUMBER(577);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(579);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(580);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(581);
	if ((frame[8].o) != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(582);
	frame[8].o = (((jobject) createStringLiteral(ctx, u8"<eval'ed string>"_j)));
	LINE_NUMBER(583);
	ARRAY_ACCESS(jint, (frame[7].o), (jint(0))) = (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(586);
	jint temp0 = jint(0);
	sp[0].o = frame[8].o;
	jint temp1 = (jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)));
	LINE_NUMBER(587);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_makeUrlForGeneratedScript_boolean_java_lang_String_int_R_java_lang_String(ctx, temp0, sp[0].o, temp1);
	frame[9].o = sp[0].o;
	LINE_NUMBER(589);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_rhino_Context_getErrorReporter_R_rhino_ErrorReporter) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getErrorReporter_R_rhino_ErrorReporter])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_DefaultErrorReporter_forEval_rhino_ErrorReporter_R_rhino_ErrorReporter(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(594);
	sp[0].o = (jobject)SM_rhino_Context_createInterpreter_R_rhino_Evaluator(ctx);
	frame[12].o = sp[0].o;
	LINE_NUMBER(595);
	if ((frame[12].o) != nullptr) goto label_31;
	}
	{
	LINE_NUMBER(596);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Interpreter not present"_j))), (frame[8].o), ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))));
	throwException(ctx, sp[0].o);	}
label_31:;
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((func_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_compileFunction_rhino_Scriptable_java_lang_String_rhino_Evaluator_rhino_ErrorReporter_java_lang_String_int_R_rhino_Function])(ctx, (frame[1].o), (frame[10].o), (frame[6].o), (frame[12].o), (frame[11].o), (frame[9].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_BaseFunction_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(613);
	frame[2].i = (jint(0));
	LINE_NUMBER(614);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(617);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 4: goto label_3;
		case 5: goto label_4;
		case 6: goto label_5;
		case 7: goto label_5;
		case 8: goto label_6;
		case 9: goto label_5;
		case 10: goto label_5;
		case 11: goto label_7;
		default: goto label_5;
	}
	}
label_3:;
	{
	LINE_NUMBER(619);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(620);
	if ((frame[4].i) != (98)) goto label_9;
	}
	{
	LINE_NUMBER(621);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"bind"_j)));
	LINE_NUMBER(622);
	frame[2].i = (6);
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(623);
	if ((frame[4].i) != (99)) goto label_5;
	}
	{
	LINE_NUMBER(624);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"call"_j)));
	LINE_NUMBER(625);
	frame[2].i = (jint(5));
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(629);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"apply"_j)));
	LINE_NUMBER(630);
	frame[2].i = (jint(4));
	LINE_NUMBER(631);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(633);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	frame[4].i = temp0;
	LINE_NUMBER(634);
	if ((frame[4].i) != (111)) goto label_17;
	}
	{
	LINE_NUMBER(635);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(636);
	frame[2].i = (jint(3));
	goto label_5;
	}
label_17:;
	{
	LINE_NUMBER(637);
	if ((frame[4].i) != (116)) goto label_5;
	}
	{
	LINE_NUMBER(638);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(639);
	frame[2].i = (jint(2));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(643);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(644);
	frame[2].i = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(647);
	if ((frame[3].o) == nullptr) goto label_23;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_23;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_23;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_23:;
	{
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_BaseFunction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_BaseFunction_FUNCTION_CLASS = ((jobject) createStringLiteral(ctx, u8"Function"_j));
	SF_rhino_BaseFunction_GENERATOR_FUNCTION_CLASS = ((jobject) createStringLiteral(ctx, u8"__GeneratorFunction"_j));
	SF_rhino_BaseFunction_Id_length = jint(1);
	SF_rhino_BaseFunction_Id_arity = jint(2);
	SF_rhino_BaseFunction_Id_name = jint(3);
	SF_rhino_BaseFunction_Id_prototype = jint(4);
	SF_rhino_BaseFunction_Id_arguments = jint(5);
	SF_rhino_BaseFunction_MAX_INSTANCE_ID = jint(5);
	SF_rhino_BaseFunction_Id_constructor = jint(1);
	SF_rhino_BaseFunction_Id_toString = jint(2);
	SF_rhino_BaseFunction_Id_toSource = jint(3);
	SF_rhino_BaseFunction_Id_apply = jint(4);
	SF_rhino_BaseFunction_Id_call = jint(5);
	SF_rhino_BaseFunction_Id_bind = jint(6);
	SF_rhino_BaseFunction_MAX_PROTOTYPE_ID = jint(6);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BaseFunction:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BaseFunction(ctx);
	{
	LINE_NUMBER(12);
	clinit_rhino_BaseFunction(ctx);
	SF_rhino_BaseFunction_FUNCTION_TAG = (((jobject) createStringLiteral(ctx, u8"Function"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_BaseFunction[] {
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
	(void *) M_rhino_BaseFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_isGeneratorFunction_R_boolean,
	(void *) M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction,
	(void *) M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object,
	(void *) M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_decompile_int_int_R_java_lang_String,
	(void *) M_rhino_BaseFunction_getArity_R_int,
	(void *) M_rhino_BaseFunction_getLength_R_int,
	(void *) M_rhino_BaseFunction_getFunctionName_R_java_lang_String,
	(void *) M_rhino_BaseFunction_hasPrototypeProperty_R_boolean,
	(void *) M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_getArguments_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
};

static jclass interfaces[] { &class_rhino_Function, };

static FieldMetadata fields[] {
	{ "FUNCTION_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_BaseFunction_FUNCTION_TAG, "Ljava/lang/Object;", 26 },
	{ "FUNCTION_CLASS", &class_java_lang_String, (intptr_t) &SF_rhino_BaseFunction_FUNCTION_CLASS, "Ljava/lang/String;", 26 },
	{ "GENERATOR_FUNCTION_CLASS", &class_java_lang_String, (intptr_t) &SF_rhino_BaseFunction_GENERATOR_FUNCTION_CLASS, "Ljava/lang/String;", 24 },
	{ "Id_length", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_length, "I", 26 },
	{ "Id_arity", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_arity, "I", 26 },
	{ "Id_name", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_name, "I", 26 },
	{ "Id_prototype", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_prototype, "I", 26 },
	{ "Id_arguments", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_arguments, "I", 26 },
	{ "MAX_INSTANCE_ID", &class_int, (intptr_t) &SF_rhino_BaseFunction_MAX_INSTANCE_ID, "I", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_constructor, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_toString, "I", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_toSource, "I", 26 },
	{ "Id_apply", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_apply, "I", 26 },
	{ "Id_call", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_call, "I", 26 },
	{ "Id_bind", &class_int, (intptr_t) &SF_rhino_BaseFunction_Id_bind, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_BaseFunction_MAX_PROTOTYPE_ID, "I", 26 },
	{ "prototypeProperty", &class_java_lang_Object, offsetof(rhino_BaseFunction, F_prototypeProperty), "Ljava/lang/Object;", 2 },
	{ "argumentsObj", &class_java_lang_Object, offsetof(rhino_BaseFunction, F_argumentsObj), "Ljava/lang/Object;", 2 },
	{ "isGeneratorFunction", &class_boolean, offsetof(rhino_BaseFunction, F_isGeneratorFunction), "Z", 2 },
	{ "prototypePropertyAttributes", &class_int, offsetof(rhino_BaseFunction, F_prototypePropertyAttributes), "I", 2 },
	{ "argumentsAttributes", &class_int, offsetof(rhino_BaseFunction, F_argumentsAttributes), "I", 2 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_BaseFunction_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "initAsGeneratorFunction", (intptr_t) SM_rhino_BaseFunction_initAsGeneratorFunction_rhino_Scriptable_boolean_R_java_lang_Object, 0, "(Lrhino/Scriptable;Z)Ljava/lang/Object;", 8 },
	{ "<init>", (intptr_t) init_rhino_BaseFunction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_BaseFunction_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_rhino_BaseFunction_rhino_Scriptable_rhino_Scriptable, 0, "(Lrhino/Scriptable;Lrhino/Scriptable;)V", 1 },
	{ "getClassName", (intptr_t) M_rhino_BaseFunction_getClassName_R_java_lang_String, VTABLE_rhino_BaseFunction_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isGeneratorFunction", (intptr_t) M_rhino_BaseFunction_isGeneratorFunction_R_boolean, VTABLE_rhino_BaseFunction_isGeneratorFunction_R_boolean, "()Z", 4 },
	{ "getTypeOf", (intptr_t) M_rhino_BaseFunction_getTypeOf_R_java_lang_String, VTABLE_rhino_BaseFunction_getTypeOf_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hasInstance", (intptr_t) M_rhino_BaseFunction_hasInstance_rhino_Scriptable_R_boolean, VTABLE_rhino_BaseFunction_hasInstance_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1 },
	{ "getMaxInstanceId", (intptr_t) M_rhino_BaseFunction_getMaxInstanceId_R_int, VTABLE_rhino_BaseFunction_getMaxInstanceId_R_int, "()I", 4 },
	{ "findInstanceIdInfo", (intptr_t) M_rhino_BaseFunction_findInstanceIdInfo_java_lang_String_R_int, VTABLE_rhino_BaseFunction_findInstanceIdInfo_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "getInstanceIdName", (intptr_t) M_rhino_BaseFunction_getInstanceIdName_int_R_java_lang_String, VTABLE_rhino_BaseFunction_getInstanceIdName_int_R_java_lang_String, "(I)Ljava/lang/String;", 4 },
	{ "getInstanceIdValue", (intptr_t) M_rhino_BaseFunction_getInstanceIdValue_int_R_java_lang_Object, VTABLE_rhino_BaseFunction_getInstanceIdValue_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 4 },
	{ "setInstanceIdValue", (intptr_t) M_rhino_BaseFunction_setInstanceIdValue_int_java_lang_Object, VTABLE_rhino_BaseFunction_setInstanceIdValue_int_java_lang_Object, "(ILjava/lang/Object;)V", 4 },
	{ "setInstanceIdAttributes", (intptr_t) M_rhino_BaseFunction_setInstanceIdAttributes_int_int, VTABLE_rhino_BaseFunction_setInstanceIdAttributes_int_int, "(II)V", 4 },
	{ "fillConstructorProperties", (intptr_t) M_rhino_BaseFunction_fillConstructorProperties_rhino_IdFunctionObject, VTABLE_rhino_BaseFunction_fillConstructorProperties_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 4 },
	{ "initPrototypeId", (intptr_t) M_rhino_BaseFunction_initPrototypeId_int, VTABLE_rhino_BaseFunction_initPrototypeId_int, "(I)V", 4 },
	{ "isApply", (intptr_t) SM_rhino_BaseFunction_isApply_rhino_IdFunctionObject_R_boolean, 0, "(Lrhino/IdFunctionObject;)Z", 8 },
	{ "isApplyOrCall", (intptr_t) SM_rhino_BaseFunction_isApplyOrCall_rhino_IdFunctionObject_R_boolean, 0, "(Lrhino/IdFunctionObject;)Z", 8 },
	{ "execIdCall", (intptr_t) M_rhino_BaseFunction_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_BaseFunction_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "realFunction", (intptr_t) M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction, VTABLE_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction, "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/BaseFunction;", 2 },
	{ "setImmunePrototypeProperty", (intptr_t) M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object, VTABLE_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getClassPrototype", (intptr_t) M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable, VTABLE_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable, "()Lrhino/Scriptable;", 4 },
	{ "call", (intptr_t) M_rhino_BaseFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_BaseFunction_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "construct", (intptr_t) M_rhino_BaseFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_BaseFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "createObject", (intptr_t) M_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable, VTABLE_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;", 1 },
	{ "decompile", (intptr_t) M_rhino_BaseFunction_decompile_int_int_R_java_lang_String, VTABLE_rhino_BaseFunction_decompile_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 0 },
	{ "getArity", (intptr_t) M_rhino_BaseFunction_getArity_R_int, VTABLE_rhino_BaseFunction_getArity_R_int, "()I", 1 },
	{ "getLength", (intptr_t) M_rhino_BaseFunction_getLength_R_int, VTABLE_rhino_BaseFunction_getLength_R_int, "()I", 1 },
	{ "getFunctionName", (intptr_t) M_rhino_BaseFunction_getFunctionName_R_java_lang_String, VTABLE_rhino_BaseFunction_getFunctionName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hasPrototypeProperty", (intptr_t) M_rhino_BaseFunction_hasPrototypeProperty_R_boolean, VTABLE_rhino_BaseFunction_hasPrototypeProperty_R_boolean, "()Z", 4 },
	{ "getPrototypeProperty", (intptr_t) M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object, VTABLE_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object, "()Ljava/lang/Object;", 4 },
	{ "setupDefaultPrototype", (intptr_t) M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object, VTABLE_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object, "()Ljava/lang/Object;", 34 },
	{ "getArguments", (intptr_t) M_rhino_BaseFunction_getArguments_R_java_lang_Object, VTABLE_rhino_BaseFunction_getArguments_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "jsConstructor", (intptr_t) M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "findPrototypeId", (intptr_t) M_rhino_BaseFunction_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_BaseFunction_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_BaseFunction, 0, "()V", 8 },
};

Class class_rhino_BaseFunction{
		.nativeName = (intptr_t) "rhino/BaseFunction",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_BaseFunction),
		.classVtable = (intptr_t) vtable_rhino_BaseFunction,
		.staticInitializer = (intptr_t) clinit_rhino_BaseFunction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_BaseFunction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 129,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_BaseFunction = registerClass(&class_rhino_BaseFunction);

}
