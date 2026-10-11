#include "rhino/NativeGenerator.h"
#include "rhino/NativeFunction.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/NativeGenerator_GeneratorClosedException.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/NativeGenerator.h"
#include "rhino/Undefined.h"
#include "rhino/JavaScriptException.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/RhinoException.h"
#include "java/lang/String.h"
#include "rhino/NativeIterator.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_rhino_NativeGenerator_GENERATOR_TAG;
jint SF_rhino_NativeGenerator_GENERATOR_SEND;
jint SF_rhino_NativeGenerator_GENERATOR_THROW;
jint SF_rhino_NativeGenerator_GENERATOR_CLOSE;
jint SF_rhino_NativeGenerator_Id_close;
jint SF_rhino_NativeGenerator_Id_next;
jint SF_rhino_NativeGenerator_Id_send;
jint SF_rhino_NativeGenerator_Id_throw;
jint SF_rhino_NativeGenerator_Id___iterator__;
jint SF_rhino_NativeGenerator_MAX_PROTOTYPE_ID;

void mark_rhino_NativeGenerator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeGenerator_GENERATOR_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeGenerator_GENERATOR_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeGenerator_GENERATOR_TAG, mark, depth + 1);
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
	auto self = (rhino_NativeGenerator *) object;
	if (self->F_function)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_function)->clazz)->markFunction)((jobject) self->F_function, mark, depth + 1);
	if (self->F_savedState)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_savedState)->clazz)->markFunction)((jobject) self->F_savedState, mark, depth + 1);
	if (self->F_lineSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lineSource)->clazz)->markFunction)((jobject) self->F_lineSource, mark, depth + 1);
}

jobject SM_rhino_NativeGenerator_init_rhino_ScriptableObject_boolean_R_rhino_NativeGenerator(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGenerator:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGenerator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(16);
	clinit_rhino_NativeGenerator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeGenerator);
	init_rhino_NativeGenerator(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(17);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(18);
	((func_rhino_NativeGenerator_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeGenerator_setParentScope_rhino_Scriptable])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(19);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	((func_rhino_NativeGenerator_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeGenerator_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(21);
	((func_rhino_NativeGenerator_activatePrototypeMap_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeGenerator_activatePrototypeMap_int])(ctx, (frame[2].o), (jint(5)));
	LINE_NUMBER(22);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(23);
	((func_rhino_NativeGenerator_sealObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeGenerator_sealObject])(ctx, (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(30);
	if ((frame[0].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeGenerator(ctx);
	sp[1].o = (jobject)SF_rhino_NativeGenerator_GENERATOR_TAG;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void init_rhino_NativeGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGenerator:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(239);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_firstTime = (jint(1));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeGenerator_rhino_Scriptable_rhino_NativeFunction_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGenerator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGenerator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(44);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(239);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_firstTime = (jint(1));
	LINE_NUMBER(45);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_function = (jref) (frame[2].o);
	LINE_NUMBER(46);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_savedState = (jref) (frame[3].o);
	LINE_NUMBER(50);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(51);
	((func_rhino_NativeGenerator_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeGenerator_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(52);
	sp[0].o = frame[4].o;
	clinit_rhino_NativeGenerator(ctx);
	sp[1].o = (jobject)SF_rhino_NativeGenerator_GENERATOR_TAG;
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopScopeValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_rhino_NativeGenerator, sp[0].o));
	LINE_NUMBER(54);
	((func_rhino_NativeGenerator_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeGenerator_setPrototype_rhino_Scriptable])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeGenerator_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGenerator:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Generator"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeGenerator_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGenerator:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(70);
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
	LINE_NUMBER(72);
	frame[3].i = (jint(1));
	LINE_NUMBER(73);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"close"_j)));
	LINE_NUMBER(74);
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(76);
	frame[3].i = (jint(1));
	LINE_NUMBER(77);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"next"_j)));
	LINE_NUMBER(78);
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(80);
	frame[3].i = (jint(0));
	LINE_NUMBER(81);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"send"_j)));
	LINE_NUMBER(82);
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(84);
	frame[3].i = (jint(0));
	LINE_NUMBER(85);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"throw"_j)));
	LINE_NUMBER(86);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(88);
	frame[3].i = (jint(1));
	LINE_NUMBER(89);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"__iterator__"_j)));
	LINE_NUMBER(90);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(92);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeGenerator(ctx);
	sp[1].o = (jobject)SF_rhino_NativeGenerator_GENERATOR_TAG;
	sp[0].o = (jobject)((func_rhino_NativeGenerator_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeGenerator_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeGenerator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGenerator:execIdCall", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeGenerator(ctx);
	sp[1].o = (jobject)SF_rhino_NativeGenerator_GENERATOR_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(105);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeGenerator)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(108);
	frame[7].o = (checkCast(ctx, &class_rhino_NativeGenerator, (frame[4].o)));
	LINE_NUMBER(110);
	switch((frame[6].i)) {
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		case 5: goto label_11;
		default: goto label_12;
	}
	}
label_7:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[7].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	jint temp0 = jint(2);
	clinit_rhino_NativeGenerator$GeneratorClosedException(ctx);
	sp[3].o = gcAlloc(ctx, &class_rhino_NativeGenerator$GeneratorClosedException);
	init_rhino_NativeGenerator$GeneratorClosedException(ctx, sp[3].o);
	sp[0].o = (jobject)M_rhino_NativeGenerator_resume_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(119);
	((rhino_NativeGenerator *) NULL_CHECK((frame[7].o)))->F_firstTime = (jint(0));
	LINE_NUMBER(120);
	sp[0].o = frame[7].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	jint temp0 = jint(0);
	clinit_rhino_Undefined(ctx);
	sp[3].o = (jobject)SF_rhino_Undefined_instance;
	sp[0].o = (jobject)M_rhino_NativeGenerator_resume_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(124);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_14;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_15;
	}
label_14:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_15:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(125);
	if (((jint)((rhino_NativeGenerator *) NULL_CHECK((frame[7].o)))->F_firstTime) == 0) goto label_17;
	}
	{
	sp[0].o = frame[8].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.send.newborn"_j))));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)M_rhino_NativeGenerator_resume_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_java_lang_Object(ctx, (frame[7].o), (frame[2].o), (frame[3].o), (jint(0)), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[7].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	jint temp0 = jint(1);
	sp[3].i = temp0;
	sp += 4;
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_19;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_20;
	}
label_19:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_20:;
	POP_N(5); // Pop method args
	sp->o = (jobject)M_rhino_NativeGenerator_resume_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_11:;
	{
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_12:;
	{
	LINE_NUMBER(139);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeGenerator_resume_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGenerator:resume", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_savedState;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(146);
	if ((frame[3].i) != (jint(2))) goto label_38;
	}
	{
	LINE_NUMBER(147);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(149);
	if ((frame[3].i) != (jint(1))) goto label_40;
	}
	{
	LINE_NUMBER(150);
	frame[5].o = (frame[4].o);
	goto label_43;
	}
label_40:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)SM_rhino_NativeIterator_getStopIterationObject_rhino_Scriptable_R_java_lang_Object(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(154);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_lineSource;
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_lineNumber));
	throwException(ctx, sp[0].o);	}
label_12:;
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_22; }
	}
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_35; } // goto label_24
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_NativeGenerator$GeneratorClosedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_14; }
	}
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(161);
	if (((jint)((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_locked) == 0) goto label_44;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.already.exec.gen"_j))));
	throwException(ctx, sp[0].o);	}
label_44:;
	{
	LINE_NUMBER(163);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_locked = (jint(1));
	LINE_NUMBER(164);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_47;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_47:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_function;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[3].o = (jobject)((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_savedState;
	sp[0].o = (jobject)((func_rhino_NativeFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, (frame[4].o));
	frame[5].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(179);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_locked = (jint(0));
	LINE_NUMBER(180);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_49;
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_49:;
	{
	LINE_NUMBER(181);
	if ((frame[3].i) != (jint(2))) goto label_50;
	}
	{
	LINE_NUMBER(182);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_savedState = (jref) (jobject(nullptr));
	}
label_50:;
	{
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_14:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_35; } // goto label_24
	}
	{
	sp -= 1;
	LINE_NUMBER(167);
	frame[5].o = sp[0].o;
	LINE_NUMBER(171);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[6].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(179);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_locked = (jint(0));
	LINE_NUMBER(180);
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	goto label_54;
label_18:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_54:;
	{
	LINE_NUMBER(181);
	if ((frame[3].i) != (jint(2))) goto label_55;
	}
	{
	LINE_NUMBER(182);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_savedState = (jref) (jobject(nullptr));
	}
label_55:;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_22:;
label_35: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_24;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_24; }
	if (bypasses[1]) { bypasses[1] = false; goto label_24; }
	{
	sp -= 1;
	LINE_NUMBER(172);
	frame[5].o = sp[0].o;
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_RhinoException_lineNumber_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_RhinoException_lineNumber_R_int])(ctx, (frame[5].o));
	((rhino_NativeGenerator *) NULL_CHECK(sp[0].o))->F_lineNumber = temp0;
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_RhinoException_lineSource_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_RhinoException_lineSource_R_java_lang_String])(ctx, (frame[5].o));
	((rhino_NativeGenerator *) NULL_CHECK(sp[0].o))->F_lineSource = (jref) sp[1].o;
	LINE_NUMBER(175);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_savedState = (jref) (jobject(nullptr));
	LINE_NUMBER(176);
	throwException(ctx, (frame[5].o));	}
label_24:;
	LINE_NUMBER(178);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	frame[10].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_30; }
	}
	{
	LINE_NUMBER(179);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_locked = (jint(0));
	LINE_NUMBER(180);
	monitorExit(ctx, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	goto label_62;
label_30:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_30; }
	}
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	monitorExit(ctx, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(11);
	INST_ATHROW();
	label_62:;
	{
	LINE_NUMBER(181);
	if ((frame[3].i) != (jint(2))) goto label_63;
	}
	{
	LINE_NUMBER(182);
	((rhino_NativeGenerator *) NULL_CHECK((frame[0].o)))->F_savedState = (jref) (jobject(nullptr));
	}
label_63:;
	{
	LINE_NUMBER(183);
	throwException(ctx, (frame[9].o));	}

	popStackFrame(ctx);
}

jint M_rhino_NativeGenerator_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGenerator:findPrototypeId", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	frame[2].i = (jint(0));
	LINE_NUMBER(195);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(197);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(198);
	if ((frame[5].i) != (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(200);
	if ((frame[4].i) != (110)) goto label_7;
	}
	{
	LINE_NUMBER(201);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"next"_j)));
	LINE_NUMBER(202);
	frame[2].i = (jint(2));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(203);
	if ((frame[4].i) != (115)) goto label_10;
	}
	{
	LINE_NUMBER(204);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"send"_j)));
	LINE_NUMBER(205);
	frame[2].i = (jint(3));
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(207);
	if ((frame[5].i) != (jint(5))) goto label_13;
	}
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(209);
	if ((frame[4].i) != (99)) goto label_16;
	}
	{
	LINE_NUMBER(210);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"close"_j)));
	LINE_NUMBER(211);
	frame[2].i = (jint(1));
	goto label_10;
	}
label_16:;
	{
	LINE_NUMBER(212);
	if ((frame[4].i) != (116)) goto label_10;
	}
	{
	LINE_NUMBER(213);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"throw"_j)));
	LINE_NUMBER(214);
	frame[2].i = (jint(4));
	goto label_10;
	}
label_13:;
	{
	LINE_NUMBER(216);
	if ((frame[5].i) != (12)) goto label_10;
	}
	{
	LINE_NUMBER(217);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"__iterator__"_j)));
	LINE_NUMBER(218);
	frame[2].i = (jint(5));
	}
label_10:;
	{
	LINE_NUMBER(220);
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
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeGenerator_GENERATOR_SEND = jint(0);
	SF_rhino_NativeGenerator_GENERATOR_THROW = jint(1);
	SF_rhino_NativeGenerator_GENERATOR_CLOSE = jint(2);
	SF_rhino_NativeGenerator_Id_close = jint(1);
	SF_rhino_NativeGenerator_Id_next = jint(2);
	SF_rhino_NativeGenerator_Id_send = jint(3);
	SF_rhino_NativeGenerator_Id_throw = jint(4);
	SF_rhino_NativeGenerator_Id___iterator__ = jint(5);
	SF_rhino_NativeGenerator_MAX_PROTOTYPE_ID = jint(5);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGenerator:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGenerator(ctx);
	{
	LINE_NUMBER(9);
	clinit_rhino_NativeGenerator(ctx);
	SF_rhino_NativeGenerator_GENERATOR_TAG = (((jobject) createStringLiteral(ctx, u8"Generator"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeGenerator[] {
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
	(void *) M_rhino_NativeGenerator_getClassName_R_java_lang_String,
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
	(void *) M_rhino_NativeGenerator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_NativeGenerator_initPrototypeId_int,
	(void *) M_rhino_NativeGenerator_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeGenerator_resume_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_java_lang_Object,
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
	{ "resume", "(Lrhino/Context;Lrhino/Scriptable;ILjava/lang/Object;)Ljava/lang/Object;" },
};

static jclass innerClasses[] {
	&class_rhino_NativeGenerator$GeneratorClosedException,
};

static FieldMetadata fields[] {
	{ "GENERATOR_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeGenerator_GENERATOR_TAG, "Ljava/lang/Object;", 26 },
	{ "GENERATOR_SEND", &class_int, (intptr_t) &SF_rhino_NativeGenerator_GENERATOR_SEND, "I", 25 },
	{ "GENERATOR_THROW", &class_int, (intptr_t) &SF_rhino_NativeGenerator_GENERATOR_THROW, "I", 25 },
	{ "GENERATOR_CLOSE", &class_int, (intptr_t) &SF_rhino_NativeGenerator_GENERATOR_CLOSE, "I", 25 },
	{ "Id_close", &class_int, (intptr_t) &SF_rhino_NativeGenerator_Id_close, "I", 26 },
	{ "Id_next", &class_int, (intptr_t) &SF_rhino_NativeGenerator_Id_next, "I", 26 },
	{ "Id_send", &class_int, (intptr_t) &SF_rhino_NativeGenerator_Id_send, "I", 26 },
	{ "Id_throw", &class_int, (intptr_t) &SF_rhino_NativeGenerator_Id_throw, "I", 26 },
	{ "Id___iterator__", &class_int, (intptr_t) &SF_rhino_NativeGenerator_Id___iterator__, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeGenerator_MAX_PROTOTYPE_ID, "I", 26 },
	{ "function", &class_rhino_NativeFunction, offsetof(rhino_NativeGenerator, F_function), "Lrhino/NativeFunction;", 2 },
	{ "savedState", &class_java_lang_Object, offsetof(rhino_NativeGenerator, F_savedState), "Ljava/lang/Object;", 2 },
	{ "lineSource", &class_java_lang_String, offsetof(rhino_NativeGenerator, F_lineSource), "Ljava/lang/String;", 2 },
	{ "lineNumber", &class_int, offsetof(rhino_NativeGenerator, F_lineNumber), "I", 2 },
	{ "firstTime", &class_boolean, offsetof(rhino_NativeGenerator, F_firstTime), "Z", 2 },
	{ "locked", &class_boolean, offsetof(rhino_NativeGenerator, F_locked), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeGenerator_init_rhino_ScriptableObject_boolean_R_rhino_NativeGenerator, 0, "(Lrhino/ScriptableObject;Z)Lrhino/NativeGenerator;", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeGenerator, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_rhino_NativeGenerator_rhino_Scriptable_rhino_NativeFunction_java_lang_Object, 0, "(Lrhino/Scriptable;Lrhino/NativeFunction;Ljava/lang/Object;)V", 1 },
	{ "getClassName", (intptr_t) M_rhino_NativeGenerator_getClassName_R_java_lang_String, VTABLE_rhino_NativeGenerator_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeGenerator_initPrototypeId_int, VTABLE_rhino_NativeGenerator_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeGenerator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeGenerator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "resume", (intptr_t) M_rhino_NativeGenerator_resume_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeGenerator_resume_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;ILjava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeGenerator_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeGenerator_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeGenerator, 0, "()V", 8 },
};

Class class_rhino_NativeGenerator{
		.nativeName = (intptr_t) "rhino/NativeGenerator",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeGenerator),
		.classVtable = (intptr_t) vtable_rhino_NativeGenerator,
		.staticInitializer = (intptr_t) clinit_rhino_NativeGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 114,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeGenerator = registerClass(&class_rhino_NativeGenerator);

}
