#include "rhino/ES6Generator.h"
#include "rhino/Symbol.h"
#include "java/lang/Boolean.h"
#include "rhino/NativeFunction.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/NativeGenerator_GeneratorClosedException.h"
#include "rhino/ES6Generator_YieldStarResult.h"
#include "rhino/Undefined.h"
#include "rhino/Callable.h"
#include "rhino/JavaScriptException.h"
#include "java/lang/String.h"
#include "rhino/SymbolKey.h"
#include "java/lang/Throwable.h"
#include "rhino/NativeIterator_StopIteration.h"
#include "rhino/ES6Generator_State.h"
#include "rhino/ES6Iterator.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdFunctionObject.h"
#include "java/lang/Object.h"
#include "rhino/RhinoException.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/ES6Generator.h"

extern "C" {

jobject SF_rhino_ES6Generator_GENERATOR_TAG;
jint SF_rhino_ES6Generator_Id_next;
jint SF_rhino_ES6Generator_Id_return;
jint SF_rhino_ES6Generator_Id_throw;
jint SF_rhino_ES6Generator_SymbolId_iterator;
jint SF_rhino_ES6Generator_MAX_PROTOTYPE_ID;

void mark_rhino_ES6Generator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ES6Generator_GENERATOR_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ES6Generator_GENERATOR_TAG)->clazz)->markFunction)((jobject) SF_rhino_ES6Generator_GENERATOR_TAG, mark, depth + 1);
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
	auto self = (rhino_ES6Generator *) object;
	if (self->F_function)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_function)->clazz)->markFunction)((jobject) self->F_function, mark, depth + 1);
	if (self->F_savedState)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_savedState)->clazz)->markFunction)((jobject) self->F_savedState, mark, depth + 1);
	if (self->F_lineSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lineSource)->clazz)->markFunction)((jobject) self->F_lineSource, mark, depth + 1);
	if (self->F_state)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_state)->clazz)->markFunction)((jobject) self->F_state, mark, depth + 1);
	if (self->F_delegee)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_delegee)->clazz)->markFunction)((jobject) self->F_delegee, mark, depth + 1);
}

jobject SM_rhino_ES6Generator_init_rhino_ScriptableObject_boolean_R_rhino_ES6Generator(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Generator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(8);
	clinit_rhino_ES6Generator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ES6Generator);
	init_rhino_ES6Generator(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(9);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(10);
	((func_rhino_ES6Generator_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ES6Generator_setParentScope_rhino_Scriptable])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	((func_rhino_ES6Generator_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ES6Generator_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(13);
	((func_rhino_ES6Generator_activatePrototypeMap_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ES6Generator_activatePrototypeMap_int])(ctx, (frame[2].o), (jint(4)));
	LINE_NUMBER(14);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(15);
	((func_rhino_ES6Generator_sealObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ES6Generator_sealObject])(ctx, (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(22);
	if ((frame[0].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator_GENERATOR_TAG;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void init_rhino_ES6Generator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Generator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_START;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ES6Generator_rhino_Scriptable_rhino_NativeFunction_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Generator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(36);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_START;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(37);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_function = (jref) (frame[2].o);
	LINE_NUMBER(38);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_savedState = (jref) (frame[3].o);
	LINE_NUMBER(42);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(43);
	((func_rhino_ES6Generator_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Generator_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(44);
	sp[0].o = frame[4].o;
	clinit_rhino_ES6Generator(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator_GENERATOR_TAG;
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopScopeValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_rhino_ES6Generator, sp[0].o));
	LINE_NUMBER(46);
	((func_rhino_ES6Generator_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Generator_setPrototype_rhino_Scriptable])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Generator_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Generator"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_ES6Generator_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:initPrototypeId", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(56);
	if ((frame[1].i) != (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator_GENERATOR_TAG;
	jint temp0 = frame[1].i;
	clinit_rhino_SymbolKey(ctx);
	sp[2].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	sp[0].o = (jobject)((func_rhino_ES6Generator_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ES6Generator_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (((jobject) createStringLiteral(ctx, u8"[Symbol.iterator]"_j))), (jint(0)));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(63);
	switch((frame[1].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		default: goto label_7;
	}
	}
label_4:;
	{
	LINE_NUMBER(65);
	frame[3].i = (jint(1));
	LINE_NUMBER(66);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"next"_j)));
	LINE_NUMBER(67);
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(69);
	frame[3].i = (jint(1));
	LINE_NUMBER(70);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"return"_j)));
	LINE_NUMBER(71);
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(73);
	frame[3].i = (jint(1));
	LINE_NUMBER(74);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"throw"_j)));
	LINE_NUMBER(75);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(77);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator_GENERATOR_TAG;
	sp[0].o = (jobject)((func_rhino_ES6Generator_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ES6Generator_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Generator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:execIdCall", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	clinit_rhino_ES6Generator(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator_GENERATOR_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(90);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ES6Generator)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(94);
	frame[7].o = (checkCast(ctx, &class_rhino_ES6Generator, (frame[4].o)));
	LINE_NUMBER(95);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) < (jint(1))) goto label_7;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_8;
	}
label_7:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_8:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(97);
	switch((frame[6].i)) {
		case 1: goto label_10;
		case 2: goto label_11;
		case 3: goto label_12;
		case 4: goto label_13;
		default: goto label_14;
	}
	}
label_11:;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[7].o)))->F_delegee;
	if (sp[0].o != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(ctx, (frame[7].o), (frame[2].o), (frame[3].o), (jint(2)), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeDelegeeReturn_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[7].o), (frame[2].o), (frame[3].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[7].o)))->F_delegee;
	if (sp[0].o != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeLocal_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[7].o), (frame[2].o), (frame[3].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeDelegee_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[7].o), (frame[2].o), (frame[3].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[7].o)))->F_delegee;
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(ctx, (frame[7].o), (frame[2].o), (frame[3].o), (jint(1)), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeDelegeeThrow_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[7].o), (frame[2].o), (frame[3].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_14:;
	{
	LINE_NUMBER(116);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Generator_resumeDelegee_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:resumeDelegee", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(123);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	clinit_rhino_ScriptRuntime(ctx);
	(sp++)->o = SF_rhino_ScriptRuntime_emptyArgs;
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[3].o);
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next"_j))), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(126);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[1].o), (frame[2].o), (frame[6].o), (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(130);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isIteratorDone_rhino_Context_java_lang_Object_R_boolean(ctx, (frame[1].o), (frame[8].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(132);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeLocal_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(137);
	INST_ALOAD(8);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(139);
	frame[4].o = sp[0].o;
	LINE_NUMBER(142);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(143);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Generator_resumeDelegeeThrow_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:resumeDelegeeThrow", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(148);
	frame[4].i = (jint(0));
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getPropFunctionAndThis_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_rhino_Callable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"throw"_j))), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(152);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_lastStoredScriptable_rhino_Context_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(153);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[6].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[3].o);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(155);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isIteratorDone_rhino_Context_java_lang_Object_R_boolean(ctx, (frame[1].o), (frame[7].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(159);
	frame[4].i = (jint(1));
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[3].o = (jobject)SF_rhino_Undefined_instance;
	sp[0].o = (jobject)M_rhino_ES6Generator_callReturnOptionally_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(162);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(163);
	goto label_29;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(162);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(163);
	throwException(ctx, (frame[8].o));	}
label_29:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[7].o;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"value"_j));
	sp[5].o = frame[1].o;
	sp[6].o = frame[2].o;
	LINE_NUMBER(165);
	sp[3].o = (jobject)SM_rhino_ScriptRuntime_getObjectProp_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(164);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeLocal_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[7].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	LINE_NUMBER(170);
	INST_ASTORE(5);
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(173);
	if ((frame[4].i) != 0) { popExceptionFrames(frameRef, 1); goto label_33; }
	}
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_15; }
	}
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[3].o = (jobject)SF_rhino_Undefined_instance;
	sp[0].o = (jobject)M_rhino_ES6Generator_callReturnOptionally_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(178);
	{ popExceptionFrames(frameRef, 1); goto label_33; }
label_15:;
	{
	sp -= 1;
	LINE_NUMBER(176);
	frame[6].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)), (frame[6].o));
	frame[7].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(181);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_33:;
	{
	LINE_NUMBER(181);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(182);
	goto label_37;
	}
label_19:;
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	LINE_NUMBER(181);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(182);
	throwException(ctx, (frame[9].o));	}
label_37:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Generator_resumeDelegeeReturn_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:resumeDelegeeReturn", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)M_rhino_ES6Generator_callReturnOptionally_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(191);
	if ((frame[4].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isIteratorDone_rhino_Context_java_lang_Object_R_boolean(ctx, (frame[1].o), (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(194);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = jint(2);
	sp[3].o = frame[4].o;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"value"_j));
	sp[5].o = frame[1].o;
	sp[6].o = frame[2].o;
	LINE_NUMBER(197);
	sp[3].o = (jobject)SM_rhino_ScriptRuntime_getObjectPropNoWarn_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(196);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(205);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(206);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(2)), (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(208);
	frame[4].o = sp[0].o;
	LINE_NUMBER(211);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(212);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Generator_resumeLocal_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:resumeLocal", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[5]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_38;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)SM_rhino_ES6Iterator_makeIteratorResult_rhino_Context_rhino_Scriptable_boolean_R_rhino_Scriptable(ctx, (frame[1].o), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_EXECUTING;
	if (sp[0].o != sp[1].o) goto label_40;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.generator.executing"_j))));
	throwException(ctx, sp[0].o);	}
label_40:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)SM_rhino_ES6Iterator_makeIteratorResult_rhino_Context_rhino_Scriptable_boolean_R_rhino_Scriptable(ctx, (frame[1].o), (frame[2].o), (jint(0)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_EXECUTING;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
label_28: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_36; } // goto label_27
	}
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_23; }
	}
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_JavaScriptException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_19; }
	}
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_NativeGenerator$GeneratorClosedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 4); goto label_12; }
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_function;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_savedState;
	sp[0].o = (jobject)((func_rhino_NativeFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(231);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ES6Generator$YieldStarResult)) == 0) { popExceptionFrames(frameRef, 4); goto label_16; }
	}
	{
	LINE_NUMBER(233);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_YIELD;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(234);
	frame[6].o = (checkCast(ctx, &class_rhino_ES6Generator$YieldStarResult, (frame[5].o)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ES6Generator$YieldStarResult_getResult_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ES6Generator$YieldStarResult_getResult_R_java_lang_Object])(ctx, (frame[6].o));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_callIterator_java_lang_Object_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_delegee = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(241);
	{ popExceptionFrames(frameRef, 4); goto label_4; }
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(237);
	frame[7].o = sp[0].o;
	LINE_NUMBER(239);
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)), (frame[7].o));
	frame[8].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_47;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_49;
	}
label_47:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_YIELD;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
label_49:;
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_4:;
label_29: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_36; } // goto label_27
	}
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_23; }
	}
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_JavaScriptException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_19; }
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_NativeGenerator$GeneratorClosedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 4); goto label_12; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[3].o = (jobject)SF_rhino_Undefined_instance;
	sp[0].o = (jobject)M_rhino_ES6Generator_resumeDelegee_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[7].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_EXECUTING;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(250);
	goto label_51;
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(249);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_EXECUTING;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(250);
	throwException(ctx, (frame[9].o));	}
label_51:;
	{
	LINE_NUMBER(251);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isIteratorDone_rhino_Context_java_lang_Object_R_boolean(ctx, (frame[1].o), (frame[7].o));
	if (temp0 == 0) goto label_53;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
label_53:;
	{
	LINE_NUMBER(254);
	frame[8].o = (frame[7].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_55;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_57;
	}
label_55:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_YIELD;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
label_57:;
	{
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_16:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_36; } // goto label_27
	}
label_26: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_23; }
	}
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_JavaScriptException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_19; }
	}
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_NativeGenerator$GeneratorClosedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 4); goto label_12; }
	}
	{
	LINE_NUMBER(257);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[5].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_58;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_60;
	}
label_58:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_YIELD;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(284);
	goto label_60;
	}
label_12:;
label_32: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_36; } // goto label_27
	}
	{
	sp -= 1;
	LINE_NUMBER(259);
	frame[5].o = sp[0].o;
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_63;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_60;
	}
label_63:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_YIELD;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(284);
	goto label_60;
	}
label_19:;
label_34: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_36; } // goto label_27
	}
	{
	sp -= 1;
	LINE_NUMBER(261);
	frame[5].o = sp[0].o;
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, (frame[5].o));
	if ((isInstance(ctx, sp[0].o, &class_rhino_NativeIterator$StopIteration)) == 0) goto label_68;
	}
	{
	LINE_NUMBER(264);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"value"_j));
	sp[2].o = frame[5].o;
	LINE_NUMBER(265);
	sp[2].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_rhino_NativeIterator$StopIteration_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeIterator$StopIteration, sp[2].o)))->vtable)[VTABLE_rhino_NativeIterator$StopIteration_getValue_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_NativeIterator$StopIteration, sp[2].o)));
	LINE_NUMBER(264);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_33;
	}
label_68:;
	{
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_JavaScriptException_lineNumber_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_JavaScriptException_lineNumber_R_int])(ctx, (frame[5].o));
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_lineNumber = temp0;
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_JavaScriptException_lineSource_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_JavaScriptException_lineSource_R_java_lang_String])(ctx, (frame[5].o));
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_lineSource = (jref) sp[1].o;
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, (frame[5].o));
	if ((isInstance(ctx, sp[0].o, &class_rhino_RhinoException)) == 0) goto label_74;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, (frame[5].o));
	throwException(ctx, (checkCast(ctx, &class_rhino_RhinoException, sp[0].o)));	}
label_74:;
	{
	LINE_NUMBER(272);
	throwException(ctx, (frame[5].o));	}
label_33:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_76;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_60;
	}
label_76:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_YIELD;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(284);
	goto label_60;
	}
label_23:;
label_36: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_27;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_27; }
	if (bypasses[1]) { bypasses[1] = false; goto label_27; }
	if (bypasses[2]) { bypasses[2] = false; goto label_27; }
	if (bypasses[3]) { bypasses[3] = false; goto label_27; }
	if (bypasses[4]) { bypasses[4] = false; goto label_27; }
	{
	sp -= 1;
	LINE_NUMBER(274);
	frame[5].o = sp[0].o;
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_RhinoException_lineNumber_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_RhinoException_lineNumber_R_int])(ctx, (frame[5].o));
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_lineNumber = temp0;
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_RhinoException_lineSource_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_RhinoException_lineSource_R_java_lang_String])(ctx, (frame[5].o));
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_lineSource = (jref) sp[1].o;
	LINE_NUMBER(277);
	throwException(ctx, (frame[5].o));	}
label_27:;
	LINE_NUMBER(279);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_82;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_84;
	}
label_82:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_YIELD;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
label_84:;
	{
	LINE_NUMBER(284);
	throwException(ctx, (frame[10].o));	}
label_60:;
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:resumeAbruptLocal", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_EXECUTING;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.generator.executing"_j))));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_START;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)SM_rhino_ES6Iterator_makeIteratorResult_rhino_Context_rhino_Scriptable_boolean_R_rhino_Scriptable(ctx, (frame[1].o), (frame[2].o), (jint(0)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(298);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_22;
	}
	{
	LINE_NUMBER(299);
	if ((frame[3].i) != (jint(1))) goto label_24;
	}
	{
	LINE_NUMBER(300);
	clinit_rhino_JavaScriptException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_JavaScriptException);
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_lineSource;
	init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_lineNumber));
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(302);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_22:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_EXECUTING;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(308);
	frame[6].o = (frame[4].o);
	LINE_NUMBER(309);
	if ((frame[3].i) != (jint(2))) goto label_29;
	}
	{
	LINE_NUMBER(310);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeGenerator$GeneratorClosedException)) != 0) goto label_0;
	}
	{
	LINE_NUMBER(311);
	clinit_rhino_NativeGenerator$GeneratorClosedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeGenerator$GeneratorClosedException);
	init_rhino_NativeGenerator$GeneratorClosedException(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	goto label_0;
	}
label_29:;
	{
	LINE_NUMBER(314);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_JavaScriptException)) == 0) goto label_32;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_JavaScriptException, (frame[4].o))))->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_JavaScriptException, (frame[4].o))));
	frame[6].o = sp[0].o;
	goto label_0;
	}
label_32:;
	{
	LINE_NUMBER(316);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_RhinoException)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapException_java_lang_Throwable_rhino_Scriptable_rhino_Context_R_rhino_Scriptable(ctx, (checkCast(ctx, &class_java_lang_Throwable, (frame[4].o))), (frame[2].o), (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_NativeGenerator$GeneratorClosedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_JavaScriptException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_RhinoException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 4); bypasses[0] = true; goto label_15; } // goto label_8
	}
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_function;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[3].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_savedState;
	sp[0].o = (jobject)((func_rhino_NativeFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeFunction_resumeGenerator_rhino_Context_rhino_Scriptable_int_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(323);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[7].o));
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_SUSPENDED_YIELD;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_37;
	}
	{
	LINE_NUMBER(351);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(352);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_37;
	}
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_15; } // goto label_8
	}
	{
	sp -= 1;
	LINE_NUMBER(327);
	frame[7].o = sp[0].o;
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_37;
	}
	{
	LINE_NUMBER(351);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(352);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_37;
	}
label_4:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_15; } // goto label_8
	}
	{
	sp -= 1;
	LINE_NUMBER(329);
	frame[7].o = sp[0].o;
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, (frame[7].o));
	if ((isInstance(ctx, sp[0].o, &class_rhino_NativeIterator$StopIteration)) == 0) goto label_45;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"value"_j));
	sp[2].o = frame[7].o;
	LINE_NUMBER(333);
	sp[2].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_rhino_NativeIterator$StopIteration_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeIterator$StopIteration, sp[2].o)))->vtable)[VTABLE_rhino_NativeIterator$StopIteration_getValue_R_java_lang_Object])(ctx, (checkCast(ctx, &class_rhino_NativeIterator$StopIteration, sp[2].o)));
	LINE_NUMBER(332);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_12;
	}
label_45:;
	{
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_JavaScriptException_lineNumber_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_JavaScriptException_lineNumber_R_int])(ctx, (frame[7].o));
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_lineNumber = temp0;
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_JavaScriptException_lineSource_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_JavaScriptException_lineSource_R_java_lang_String])(ctx, (frame[7].o));
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_lineSource = (jref) sp[1].o;
	LINE_NUMBER(337);
	sp[0].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, (frame[7].o));
	if ((isInstance(ctx, sp[0].o, &class_rhino_RhinoException)) == 0) goto label_51;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((func_rhino_JavaScriptException_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object])(ctx, (frame[7].o));
	throwException(ctx, (checkCast(ctx, &class_rhino_RhinoException, sp[0].o)));	}
label_51:;
	{
	LINE_NUMBER(340);
	throwException(ctx, (frame[7].o));	}
label_12:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_37;
	}
	{
	LINE_NUMBER(351);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(352);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_37;
	}
label_6:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	if (bypasses[1]) { bypasses[1] = false; goto label_8; }
	if (bypasses[2]) { bypasses[2] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(342);
	frame[7].o = sp[0].o;
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_RhinoException_lineNumber_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_RhinoException_lineNumber_R_int])(ctx, (frame[7].o));
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_lineNumber = temp0;
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_RhinoException_lineSource_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_RhinoException_lineSource_R_java_lang_String])(ctx, (frame[7].o));
	((rhino_ES6Generator *) NULL_CHECK(sp[0].o))->F_lineSource = (jref) sp[1].o;
	LINE_NUMBER(346);
	throwException(ctx, (frame[7].o));	}
label_8:;
	LINE_NUMBER(350);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_rhino_ES6Generator$State(ctx);
	sp[1].o = (jobject)SF_rhino_ES6Generator$State_COMPLETED;
	if (sp[0].o != sp[1].o) goto label_59;
	}
	{
	LINE_NUMBER(351);
	((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee = (jref) (jobject(nullptr));
	LINE_NUMBER(352);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_59:;
	{
	LINE_NUMBER(354);
	throwException(ctx, (frame[8].o));	}
label_37:;
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Generator_callReturnOptionally_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:callReturnOptionally", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(359);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	clinit_rhino_ScriptRuntime(ctx);
	(sp++)->o = SF_rhino_ScriptRuntime_emptyArgs;
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[3].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(362);
	sp[0].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectPropNoWarn_java_lang_Object_java_lang_String_rhino_Context_rhino_Scriptable_R_java_lang_Object(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"return"_j))), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(364);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(365);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Callable)) != 0) goto label_7;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.isnt.function"_j));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"return"_j));
	sp[2].o = frame[5].o;
	LINE_NUMBER(367);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_typeof_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	LINE_NUMBER(366);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(369);
	sp[0].o = checkCast(ctx, &class_rhino_Callable, (frame[5].o));
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((rhino_ES6Generator *) NULL_CHECK((frame[0].o)))->F_delegee;
	sp[3].o = (jobject)SM_rhino_ScriptableObject_ensureScriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[3].o);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_rhino_ES6Generator_findPrototypeId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:findPrototypeId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(376);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (jint(4));
	}
label_1:;
	{
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_ES6Generator_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(390);
	frame[2].i = (jint(0));
	LINE_NUMBER(391);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(392);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(393);
	if ((frame[4].i) != (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(394);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"next"_j)));
	LINE_NUMBER(395);
	frame[2].i = (jint(1));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(396);
	if ((frame[4].i) != (jint(5))) goto label_8;
	}
	{
	LINE_NUMBER(397);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"throw"_j)));
	LINE_NUMBER(398);
	frame[2].i = (jint(3));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(399);
	if ((frame[4].i) != (6)) goto label_7;
	}
	{
	LINE_NUMBER(400);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"return"_j)));
	LINE_NUMBER(401);
	frame[2].i = (jint(2));
	}
label_7:;
	{
	LINE_NUMBER(403);
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
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_ES6Generator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_ES6Generator_Id_next = jint(1);
	SF_rhino_ES6Generator_Id_return = jint(2);
	SF_rhino_ES6Generator_Id_throw = jint(3);
	SF_rhino_ES6Generator_SymbolId_iterator = jint(4);
	SF_rhino_ES6Generator_MAX_PROTOTYPE_ID = jint(4);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Generator(ctx);
	{
	LINE_NUMBER(4);
	clinit_rhino_ES6Generator(ctx);
	SF_rhino_ES6Generator_GENERATOR_TAG = (((jobject) createStringLiteral(ctx, u8"Generator"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ES6Generator[] {
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
	(void *) M_rhino_ES6Generator_getClassName_R_java_lang_String,
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
	(void *) M_rhino_ES6Generator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_ES6Generator_initPrototypeId_int,
	(void *) M_rhino_ES6Generator_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_ES6Generator_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_ES6Generator_resumeDelegee_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_ES6Generator_resumeDelegeeThrow_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_ES6Generator_resumeDelegeeReturn_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_ES6Generator_resumeLocal_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_ES6Generator_callReturnOptionally_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object,
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
	{ "resumeDelegee", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "resumeDelegeeThrow", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "resumeDelegeeReturn", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "resumeLocal", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "resumeAbruptLocal", "(Lrhino/Context;Lrhino/Scriptable;ILjava/lang/Object;)Lrhino/Scriptable;" },
	{ "callReturnOptionally", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass innerClasses[] {
	&class_rhino_ES6Generator$YieldStarResult,
	&class_rhino_ES6Generator$State,
};

static FieldMetadata fields[] {
	{ "GENERATOR_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_ES6Generator_GENERATOR_TAG, "Ljava/lang/Object;", 26 },
	{ "Id_next", &class_int, (intptr_t) &SF_rhino_ES6Generator_Id_next, "I", 26 },
	{ "Id_return", &class_int, (intptr_t) &SF_rhino_ES6Generator_Id_return, "I", 26 },
	{ "Id_throw", &class_int, (intptr_t) &SF_rhino_ES6Generator_Id_throw, "I", 26 },
	{ "SymbolId_iterator", &class_int, (intptr_t) &SF_rhino_ES6Generator_SymbolId_iterator, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_ES6Generator_MAX_PROTOTYPE_ID, "I", 26 },
	{ "function", &class_rhino_NativeFunction, offsetof(rhino_ES6Generator, F_function), "Lrhino/NativeFunction;", 2 },
	{ "savedState", &class_java_lang_Object, offsetof(rhino_ES6Generator, F_savedState), "Ljava/lang/Object;", 2 },
	{ "lineSource", &class_java_lang_String, offsetof(rhino_ES6Generator, F_lineSource), "Ljava/lang/String;", 2 },
	{ "lineNumber", &class_int, offsetof(rhino_ES6Generator, F_lineNumber), "I", 2 },
	{ "state", &class_rhino_ES6Generator$State, offsetof(rhino_ES6Generator, F_state), "Lrhino/ES6Generator$State;", 2 },
	{ "delegee", &class_java_lang_Object, offsetof(rhino_ES6Generator, F_delegee), "Ljava/lang/Object;", 2 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_ES6Generator_init_rhino_ScriptableObject_boolean_R_rhino_ES6Generator, 0, "(Lrhino/ScriptableObject;Z)Lrhino/ES6Generator;", 8 },
	{ "<init>", (intptr_t) init_rhino_ES6Generator, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_rhino_ES6Generator_rhino_Scriptable_rhino_NativeFunction_java_lang_Object, 0, "(Lrhino/Scriptable;Lrhino/NativeFunction;Ljava/lang/Object;)V", 1 },
	{ "getClassName", (intptr_t) M_rhino_ES6Generator_getClassName_R_java_lang_String, VTABLE_rhino_ES6Generator_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "initPrototypeId", (intptr_t) M_rhino_ES6Generator_initPrototypeId_int, VTABLE_rhino_ES6Generator_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_ES6Generator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ES6Generator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "resumeDelegee", (intptr_t) M_rhino_ES6Generator_resumeDelegee_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_ES6Generator_resumeDelegee_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 2 },
	{ "resumeDelegeeThrow", (intptr_t) M_rhino_ES6Generator_resumeDelegeeThrow_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_ES6Generator_resumeDelegeeThrow_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 2 },
	{ "resumeDelegeeReturn", (intptr_t) M_rhino_ES6Generator_resumeDelegeeReturn_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_ES6Generator_resumeDelegeeReturn_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 2 },
	{ "resumeLocal", (intptr_t) M_rhino_ES6Generator_resumeLocal_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_ES6Generator_resumeLocal_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 2 },
	{ "resumeAbruptLocal", (intptr_t) M_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_ES6Generator_resumeAbruptLocal_rhino_Context_rhino_Scriptable_int_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;ILjava/lang/Object;)Lrhino/Scriptable;", 2 },
	{ "callReturnOptionally", (intptr_t) M_rhino_ES6Generator_callReturnOptionally_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ES6Generator_callReturnOptionally_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "findPrototypeId", (intptr_t) M_rhino_ES6Generator_findPrototypeId_rhino_Symbol_R_int, VTABLE_rhino_ES6Generator_findPrototypeId_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_ES6Generator_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_ES6Generator_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_ES6Generator, 0, "()V", 8 },
};

Class class_rhino_ES6Generator{
		.nativeName = (intptr_t) "rhino/ES6Generator",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_ES6Generator),
		.classVtable = (intptr_t) vtable_rhino_ES6Generator,
		.staticInitializer = (intptr_t) clinit_rhino_ES6Generator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ES6Generator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 119,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ES6Generator = registerClass(&class_rhino_ES6Generator);

}
