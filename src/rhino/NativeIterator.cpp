#include "rhino/NativeIterator.h"
#include "rhino/NativeObject.h"
#include "java/util/Iterator.h"
#include "rhino/WrapFactory.h"
#include "java/lang/Boolean.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "java/lang/Iterable.h"
#include "rhino/NativeGenerator.h"
#include "rhino/Undefined.h"
#include "rhino/Wrapper.h"
#include "rhino/JavaScriptException.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/NativeIterator_WrappedJavaIterator.h"
#include "rhino/NativeIterator.h"
#include "rhino/ES6Generator.h"
#include "java/lang/Class.h"
#include "rhino/NativeIterator_StopIteration.h"

extern "C" {

jobject SF_rhino_NativeIterator_ITERATOR_TAG;
jobject SF_rhino_NativeIterator_STOP_ITERATION;
jobject SF_rhino_NativeIterator_ITERATOR_PROPERTY_NAME;
jint SF_rhino_NativeIterator_Id_constructor;
jint SF_rhino_NativeIterator_Id_next;
jint SF_rhino_NativeIterator_Id___iterator__;
jint SF_rhino_NativeIterator_MAX_PROTOTYPE_ID;

void mark_rhino_NativeIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeIterator_ITERATOR_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeIterator_ITERATOR_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeIterator_ITERATOR_TAG, mark, depth + 1);
		if (SF_rhino_NativeIterator_STOP_ITERATION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeIterator_STOP_ITERATION)->clazz)->markFunction)((jobject) SF_rhino_NativeIterator_STOP_ITERATION, mark, depth + 1);
		if (SF_rhino_NativeIterator_ITERATOR_PROPERTY_NAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeIterator_ITERATOR_PROPERTY_NAME)->clazz)->markFunction)((jobject) SF_rhino_NativeIterator_ITERATOR_PROPERTY_NAME, mark, depth + 1);
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
	auto self = (rhino_NativeIterator *) object;
	if (self->F_objectIterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objectIterator)->clazz)->markFunction)((jobject) self->F_objectIterator, mark, depth + 1);
}

void SM_rhino_NativeIterator_init_rhino_Context_rhino_ScriptableObject_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:init", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeIterator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(15);
	clinit_rhino_NativeIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeIterator);
	init_rhino_NativeIterator(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_rhino_NativeIterator_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeIterator_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[3].o), (jint(3)), (frame[1].o), (frame[2].i));
	LINE_NUMBER(19);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 < (200)) goto label_3;
	}
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)SM_rhino_ES6Generator_init_rhino_ScriptableObject_boolean_R_rhino_ES6Generator(ctx, (frame[1].o), (frame[2].i));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_rhino_NativeGenerator_init_rhino_ScriptableObject_boolean_R_rhino_NativeGenerator(ctx, (frame[1].o), (frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(26);
	clinit_rhino_NativeIterator$StopIteration(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeIterator$StopIteration);
	init_rhino_NativeIterator$StopIteration(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	((func_rhino_NativeObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(28);
	((func_rhino_NativeObject_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_NativeObject_setParentScope_rhino_Scriptable])(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(29);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(30);
	((func_rhino_NativeObject_sealObject) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_NativeObject_sealObject])(ctx, (frame[4].o));
	}
label_9:;
	{
	LINE_NUMBER(32);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"StopIteration"_j))), (frame[4].o), (jint(2)));
	LINE_NUMBER(37);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeIterator(ctx);
	sp[1].o = (jobject)SF_rhino_NativeIterator_ITERATOR_TAG;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeIterator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeIterator_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((rhino_NativeIterator *) NULL_CHECK((frame[0].o)))->F_objectIterator = (jref) (frame[1].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeIterator_getStopIterationObject_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:getStopIterationObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeIterator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeIterator(ctx);
	sp[1].o = (jobject)SF_rhino_NativeIterator_ITERATOR_TAG;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopScopeValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeIterator_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Iterator"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeIterator_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(105);
	frame[3].i = (jint(2));
	LINE_NUMBER(106);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(107);
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(109);
	frame[3].i = (jint(0));
	LINE_NUMBER(110);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"next"_j)));
	LINE_NUMBER(111);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(113);
	frame[3].i = (jint(1));
	LINE_NUMBER(114);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"__iterator__"_j)));
	LINE_NUMBER(115);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(117);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeIterator(ctx);
	sp[1].o = (jobject)SF_rhino_NativeIterator_ITERATOR_TAG;
	sp[0].o = (jobject)((func_rhino_NativeIterator_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeIterator_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeIterator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:execIdCall", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeIterator(ctx);
	sp[1].o = (jobject)SF_rhino_NativeIterator_ITERATOR_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(130);
	if ((frame[6].i) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)SM_rhino_NativeIterator_jsConstructor_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(134);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeIterator)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(137);
	frame[7].o = (checkCast(ctx, &class_rhino_NativeIterator, (frame[4].o)));
	LINE_NUMBER(139);
	switch((frame[6].i)) {
		case 2: goto label_9;
		case 3: goto label_10;
		default: goto label_11;
	}
	}
label_9:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)M_rhino_NativeIterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, (frame[7].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_11:;
	{
	LINE_NUMBER(149);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeIterator_jsConstructor_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:jsConstructor", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeIterator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(156);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) == 0) goto label_1;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(158);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_3;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(159);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.no.properties"_j));
	sp[1].o = frame[4].o;
	LINE_NUMBER(160);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	LINE_NUMBER(159);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(163);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= (jint(1))) goto label_9;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(164);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)SM_rhino_NativeIterator_getJavaIterator_java_lang_Object_R_java_util_Iterator(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(171);
	if ((frame[6].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[0].o));
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	clinit_rhino_NativeIterator$WrappedJavaIterator(ctx);
	sp[3].o = gcAlloc(ctx, &class_rhino_NativeIterator$WrappedJavaIterator);
	init_rhino_NativeIterator$WrappedJavaIterator_java_util_Iterator_rhino_Scriptable(ctx, sp[3].o, (frame[6].o), (frame[1].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (((jobject) &class_rhino_NativeIterator$WrappedJavaIterator)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toIterator_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(181);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_12:;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp += 3;
	if ((frame[5].i) == 0) goto label_20;
	}
	INST_ICONST(3);
	goto label_21;
label_20:;
	INST_ICONST(5);
label_21:;
	{
	sp -= 4;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_enumInit_java_lang_Object_rhino_Context_rhino_Scriptable_int_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i);
	frame[6].o = sp[0].o;
	LINE_NUMBER(191);
	SM_rhino_ScriptRuntime_setEnumNumbers_java_lang_Object_boolean(ctx, (frame[6].o), (jint(1)));
	LINE_NUMBER(192);
	clinit_rhino_NativeIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeIterator);
	init_rhino_NativeIterator_java_lang_Object(ctx, sp[0].o, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(193);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[7].o;
	LINE_NUMBER(194);
	sp[2].o = (jobject)((func_rhino_NativeIterator_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_NativeIterator_getClassName_R_java_lang_String])(ctx, sp[2].o);
	LINE_NUMBER(193);
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getClassPrototype_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, sp[1].o, sp[2].o);
	((func_rhino_NativeIterator_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeIterator_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(195);
	((func_rhino_NativeIterator_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_NativeIterator_setParentScope_rhino_Scriptable])(ctx, (frame[7].o), (frame[1].o));
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeIterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:next", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((rhino_NativeIterator *) NULL_CHECK((frame[0].o)))->F_objectIterator;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_enumNext_java_lang_Object_R_java_lang_Boolean(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(201);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(203);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	sp[1].o = frame[2].o;
	LINE_NUMBER(204);
	sp[1].o = (jobject)SM_rhino_NativeIterator_getStopIterationObject_rhino_Scriptable_R_java_lang_Object(ctx, sp[1].o);
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, sp[1].o, (jobject(nullptr)), (jint(0)));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((rhino_NativeIterator *) NULL_CHECK((frame[0].o)))->F_objectIterator;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_enumId_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeIterator_getJavaIterator_java_lang_Object_R_java_util_Iterator(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:getJavaIterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeIterator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(215);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Wrapper)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[0].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[0].o))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(217);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(218);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Iterator)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(219);
	frame[2].o = (checkCast(ctx, &class_java_util_Iterator, (frame[1].o)));
	}
label_5:;
	{
	LINE_NUMBER(220);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Iterable)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (checkCast(ctx, &class_java_lang_Iterable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_lang_Iterable, (frame[1].o))));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeIterator_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	frame[2].i = (jint(0));
	LINE_NUMBER(259);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(261);
	if ((frame[4].i) != (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(262);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"next"_j)));
	LINE_NUMBER(263);
	frame[2].i = (jint(2));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(264);
	if ((frame[4].i) != (11)) goto label_8;
	}
	{
	LINE_NUMBER(265);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(266);
	frame[2].i = (jint(1));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(267);
	if ((frame[4].i) != (12)) goto label_7;
	}
	{
	LINE_NUMBER(268);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"__iterator__"_j)));
	LINE_NUMBER(269);
	frame[2].i = (jint(3));
	}
label_7:;
	{
	LINE_NUMBER(271);
	if ((frame[3].o) == nullptr) goto label_13;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_13;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_13:;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeIterator_STOP_ITERATION = ((jobject) createStringLiteral(ctx, u8"StopIteration"_j));
	SF_rhino_NativeIterator_ITERATOR_PROPERTY_NAME = ((jobject) createStringLiteral(ctx, u8"__iterator__"_j));
	SF_rhino_NativeIterator_Id_constructor = jint(1);
	SF_rhino_NativeIterator_Id_next = jint(2);
	SF_rhino_NativeIterator_Id___iterator__ = jint(3);
	SF_rhino_NativeIterator_MAX_PROTOTYPE_ID = jint(3);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeIterator:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeIterator(ctx);
	{
	LINE_NUMBER(11);
	clinit_rhino_NativeIterator(ctx);
	SF_rhino_NativeIterator_ITERATOR_TAG = (((jobject) createStringLiteral(ctx, u8"Iterator"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeIterator[] {
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
	(void *) M_rhino_NativeIterator_getClassName_R_java_lang_String,
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
	(void *) M_rhino_NativeIterator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_NativeIterator_initPrototypeId_int,
	(void *) M_rhino_NativeIterator_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeIterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object,
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
	{ "next", "(Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;" },
};

static jclass innerClasses[] {
	&class_rhino_NativeIterator$WrappedJavaIterator,
	&class_rhino_NativeIterator$StopIteration,
};

static FieldMetadata fields[] {
	{ "ITERATOR_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeIterator_ITERATOR_TAG, "Ljava/lang/Object;", 26 },
	{ "STOP_ITERATION", &class_java_lang_String, (intptr_t) &SF_rhino_NativeIterator_STOP_ITERATION, "Ljava/lang/String;", 26 },
	{ "ITERATOR_PROPERTY_NAME", &class_java_lang_String, (intptr_t) &SF_rhino_NativeIterator_ITERATOR_PROPERTY_NAME, "Ljava/lang/String;", 25 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeIterator_Id_constructor, "I", 26 },
	{ "Id_next", &class_int, (intptr_t) &SF_rhino_NativeIterator_Id_next, "I", 26 },
	{ "Id___iterator__", &class_int, (intptr_t) &SF_rhino_NativeIterator_Id___iterator__, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeIterator_MAX_PROTOTYPE_ID, "I", 26 },
	{ "objectIterator", &class_java_lang_Object, offsetof(rhino_NativeIterator, F_objectIterator), "Ljava/lang/Object;", 2 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeIterator_init_rhino_Context_rhino_ScriptableObject_boolean, 0, "(Lrhino/Context;Lrhino/ScriptableObject;Z)V", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeIterator, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_rhino_NativeIterator_java_lang_Object, 0, "(Ljava/lang/Object;)V", 2 },
	{ "getStopIterationObject", (intptr_t) SM_rhino_NativeIterator_getStopIterationObject_rhino_Scriptable_R_java_lang_Object, 0, "(Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "getClassName", (intptr_t) M_rhino_NativeIterator_getClassName_R_java_lang_String, VTABLE_rhino_NativeIterator_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeIterator_initPrototypeId_int, VTABLE_rhino_NativeIterator_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeIterator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeIterator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "jsConstructor", (intptr_t) SM_rhino_NativeIterator_jsConstructor_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "next", (intptr_t) M_rhino_NativeIterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeIterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 2 },
	{ "getJavaIterator", (intptr_t) SM_rhino_NativeIterator_getJavaIterator_java_lang_Object_R_java_util_Iterator, 0, "(Ljava/lang/Object;)Ljava/util/Iterator;", 10 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeIterator_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeIterator_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeIterator, 0, "()V", 8 },
};

Class class_rhino_NativeIterator{
		.nativeName = (intptr_t) "rhino/NativeIterator",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeIterator),
		.classVtable = (intptr_t) vtable_rhino_NativeIterator,
		.staticInitializer = (intptr_t) clinit_rhino_NativeIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 114,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeIterator = registerClass(&class_rhino_NativeIterator);

}
