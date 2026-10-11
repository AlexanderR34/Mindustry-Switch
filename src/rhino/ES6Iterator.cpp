#include "rhino/ES6Iterator.h"
#include "rhino/ES6Iterator.h"
#include "rhino/Symbol.h"
#include "java/lang/Boolean.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/Undefined.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/SymbolKey.h"

extern "C" {

jint SF_rhino_ES6Iterator_Id_next;
jint SF_rhino_ES6Iterator_SymbolId_iterator;
jint SF_rhino_ES6Iterator_SymbolId_toStringTag;
jint SF_rhino_ES6Iterator_MAX_PROTOTYPE_ID;
jobject SF_rhino_ES6Iterator_NEXT_METHOD;
jobject SF_rhino_ES6Iterator_DONE_PROPERTY;
jobject SF_rhino_ES6Iterator_RETURN_PROPERTY;
jobject SF_rhino_ES6Iterator_VALUE_PROPERTY;
jobject SF_rhino_ES6Iterator_RETURN_METHOD;

void mark_rhino_ES6Iterator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ES6Iterator_NEXT_METHOD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ES6Iterator_NEXT_METHOD)->clazz)->markFunction)((jobject) SF_rhino_ES6Iterator_NEXT_METHOD, mark, depth + 1);
		if (SF_rhino_ES6Iterator_DONE_PROPERTY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ES6Iterator_DONE_PROPERTY)->clazz)->markFunction)((jobject) SF_rhino_ES6Iterator_DONE_PROPERTY, mark, depth + 1);
		if (SF_rhino_ES6Iterator_RETURN_PROPERTY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ES6Iterator_RETURN_PROPERTY)->clazz)->markFunction)((jobject) SF_rhino_ES6Iterator_RETURN_PROPERTY, mark, depth + 1);
		if (SF_rhino_ES6Iterator_VALUE_PROPERTY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ES6Iterator_VALUE_PROPERTY)->clazz)->markFunction)((jobject) SF_rhino_ES6Iterator_VALUE_PROPERTY, mark, depth + 1);
		if (SF_rhino_ES6Iterator_RETURN_METHOD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ES6Iterator_RETURN_METHOD)->clazz)->markFunction)((jobject) SF_rhino_ES6Iterator_RETURN_METHOD, mark, depth + 1);
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
	auto self = (rhino_ES6Iterator *) object;
	if (self->F_tag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tag)->clazz)->markFunction)((jobject) self->F_tag, mark, depth + 1);
}

void clinit_rhino_ES6Iterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_ES6Iterator_Id_next = jint(1);
	SF_rhino_ES6Iterator_SymbolId_iterator = jint(2);
	SF_rhino_ES6Iterator_SymbolId_toStringTag = jint(3);
	SF_rhino_ES6Iterator_MAX_PROTOTYPE_ID = jint(3);
	SF_rhino_ES6Iterator_NEXT_METHOD = ((jobject) createStringLiteral(ctx, u8"next"_j));
	SF_rhino_ES6Iterator_DONE_PROPERTY = ((jobject) createStringLiteral(ctx, u8"done"_j));
	SF_rhino_ES6Iterator_RETURN_PROPERTY = ((jobject) createStringLiteral(ctx, u8"return"_j));
	SF_rhino_ES6Iterator_VALUE_PROPERTY = ((jobject) createStringLiteral(ctx, u8"value"_j));
	SF_rhino_ES6Iterator_RETURN_METHOD = ((jobject) createStringLiteral(ctx, u8"return"_j));
}

void SM_rhino_ES6Iterator_init_rhino_ScriptableObject_boolean_rhino_IdScriptableObject_java_lang_String(jcontext ctx, jobject param0, jbool param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Iterator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(6);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(7);
	((func_rhino_IdScriptableObject_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_IdScriptableObject_setParentScope_rhino_Scriptable])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	((func_rhino_IdScriptableObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(10);
	((func_rhino_IdScriptableObject_activatePrototypeMap_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_IdScriptableObject_activatePrototypeMap_int])(ctx, (frame[2].o), (jint(3)));
	LINE_NUMBER(11);
	if ((frame[1].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(12);
	((func_rhino_IdScriptableObject_sealObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_IdScriptableObject_sealObject])(ctx, (frame[2].o));
	}
label_5:;
	{
	LINE_NUMBER(19);
	if ((frame[0].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	}
label_7:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_rhino_ES6Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Iterator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((rhino_ES6Iterator *) NULL_CHECK((frame[0].o)))->F_exhausted = (jint(0));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ES6Iterator_rhino_Scriptable_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Iterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(30);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((rhino_ES6Iterator *) NULL_CHECK((frame[0].o)))->F_exhausted = (jint(0));
	LINE_NUMBER(34);
	((rhino_ES6Iterator *) NULL_CHECK((frame[0].o)))->F_tag = (jref) (frame[2].o);
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(36);
	((func_rhino_ES6Iterator_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Iterator_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(37);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopScopeValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_rhino_IdScriptableObject, sp[0].o));
	LINE_NUMBER(39);
	((func_rhino_ES6Iterator_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Iterator_setPrototype_rhino_Scriptable])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ES6Iterator_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:initPrototypeId", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(44);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ES6Iterator_getTag_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Iterator_getTag_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_ES6Iterator_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ES6Iterator_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (((jobject) createStringLiteral(ctx, u8"next"_j))), (jint(0)));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_ES6Iterator_getTag_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Iterator_getTag_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = frame[1].i;
	clinit_rhino_SymbolKey(ctx);
	sp[2].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	sp[0].o = (jobject)((func_rhino_ES6Iterator_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ES6Iterator_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (((jobject) createStringLiteral(ctx, u8"[Symbol.iterator]"_j))), (jint(3)));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	jint temp0 = jint(3);
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_TO_STRING_TAG;
	sp[2].o = (jobject)((func_rhino_ES6Iterator_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Iterator_getClassName_R_java_lang_String])(ctx, (frame[0].o));
	((func_rhino_ES6Iterator_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ES6Iterator_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, (jint(3)));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(55);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Iterator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:execIdCall", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_ES6Iterator_getTag_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Iterator_getTag_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(65);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(67);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ES6Iterator)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(70);
	frame[7].o = (checkCast(ctx, &class_rhino_ES6Iterator, (frame[4].o)));
	LINE_NUMBER(72);
	switch((frame[6].i)) {
		case 1: goto label_7;
		case 2: goto label_8;
		default: goto label_9;
	}
	}
label_7:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_rhino_ES6Iterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ES6Iterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[7].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_9:;
	{
	LINE_NUMBER(78);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_ES6Iterator_findPrototypeId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:findPrototypeId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (jint(2));
	}
label_1:;
	{
	LINE_NUMBER(86);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_TO_STRING_TAG;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jint(3));
	}
label_3:;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_ES6Iterator_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:findPrototypeId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"next"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"next"_j))), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Iterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:next", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(105);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[3].o = sp[0].o;
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_rhino_ES6Iterator_isDone_rhino_Context_rhino_Scriptable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Iterator_isDone_rhino_Context_rhino_Scriptable_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 != 0) goto label_2;
	}
	{
	if (((jint)((rhino_ES6Iterator *) NULL_CHECK((frame[0].o)))->F_exhausted) == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(107);
	if ((frame[4].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_rhino_ES6Iterator_nextValue_rhino_Context_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ES6Iterator_nextValue_rhino_Context_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(110);
	((rhino_ES6Iterator *) NULL_CHECK((frame[0].o)))->F_exhausted = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_rhino_ES6Iterator_makeIteratorResult_rhino_Context_rhino_Scriptable_boolean_java_lang_Object_R_rhino_Scriptable(ctx, (frame[1].o), (frame[2].o), (frame[4].i), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Iterator_getTag_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:getTag", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((rhino_ES6Iterator *) NULL_CHECK((frame[0].o)))->F_tag;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ES6Iterator_makeIteratorResult_rhino_Context_rhino_Scriptable_boolean_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:makeIteratorResult", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Iterator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_rhino_Undefined(ctx);
	sp[2].o = (jobject)SF_rhino_Undefined_instance;
	sp[0].o = (jobject)SM_rhino_ES6Iterator_makeIteratorResult_rhino_Context_rhino_Scriptable_boolean_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ES6Iterator_makeIteratorResult_rhino_Context_rhino_Scriptable_boolean_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Iterator:makeIteratorResult", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Iterator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(126);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"done"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[2].i));
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(127);
	SM_rhino_ScriptableObject_putProperty_rhino_Scriptable_java_lang_String_java_lang_Object(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[3].o));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ES6Iterator[] {
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
	(void *) nullptr,
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
	(void *) M_rhino_ES6Iterator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	(void *) M_rhino_ES6Iterator_initPrototypeId_int,
	(void *) M_rhino_ES6Iterator_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_ES6Iterator_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_rhino_ES6Iterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ES6Iterator_getTag_R_java_lang_String,
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
	{ "isDone", "(Lrhino/Context;Lrhino/Scriptable;)Z" },
	{ "nextValue", "(Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "next", "(Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "getTag", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "exhausted", &class_boolean, offsetof(rhino_ES6Iterator, F_exhausted), "Z", 4 },
	{ "tag", &class_java_lang_String, offsetof(rhino_ES6Iterator, F_tag), "Ljava/lang/String;", 2 },
	{ "Id_next", &class_int, (intptr_t) &SF_rhino_ES6Iterator_Id_next, "I", 26 },
	{ "SymbolId_iterator", &class_int, (intptr_t) &SF_rhino_ES6Iterator_SymbolId_iterator, "I", 26 },
	{ "SymbolId_toStringTag", &class_int, (intptr_t) &SF_rhino_ES6Iterator_SymbolId_toStringTag, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_ES6Iterator_MAX_PROTOTYPE_ID, "I", 26 },
	{ "NEXT_METHOD", &class_java_lang_String, (intptr_t) &SF_rhino_ES6Iterator_NEXT_METHOD, "Ljava/lang/String;", 25 },
	{ "DONE_PROPERTY", &class_java_lang_String, (intptr_t) &SF_rhino_ES6Iterator_DONE_PROPERTY, "Ljava/lang/String;", 25 },
	{ "RETURN_PROPERTY", &class_java_lang_String, (intptr_t) &SF_rhino_ES6Iterator_RETURN_PROPERTY, "Ljava/lang/String;", 25 },
	{ "VALUE_PROPERTY", &class_java_lang_String, (intptr_t) &SF_rhino_ES6Iterator_VALUE_PROPERTY, "Ljava/lang/String;", 25 },
	{ "RETURN_METHOD", &class_java_lang_String, (intptr_t) &SF_rhino_ES6Iterator_RETURN_METHOD, "Ljava/lang/String;", 25 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_ES6Iterator_init_rhino_ScriptableObject_boolean_rhino_IdScriptableObject_java_lang_String, 0, "(Lrhino/ScriptableObject;ZLrhino/IdScriptableObject;Ljava/lang/String;)V", 8 },
	{ "<init>", (intptr_t) init_rhino_ES6Iterator, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_rhino_ES6Iterator_rhino_Scriptable_java_lang_String, 0, "(Lrhino/Scriptable;Ljava/lang/String;)V", 0 },
	{ "initPrototypeId", (intptr_t) M_rhino_ES6Iterator_initPrototypeId_int, VTABLE_rhino_ES6Iterator_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_ES6Iterator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ES6Iterator_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "findPrototypeId", (intptr_t) M_rhino_ES6Iterator_findPrototypeId_rhino_Symbol_R_int, VTABLE_rhino_ES6Iterator_findPrototypeId_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_ES6Iterator_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_ES6Iterator_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "isDone", 0, VTABLE_rhino_ES6Iterator_isDone_rhino_Context_rhino_Scriptable_R_boolean, "(Lrhino/Context;Lrhino/Scriptable;)Z", 1028 },
	{ "nextValue", 0, VTABLE_rhino_ES6Iterator_nextValue_rhino_Context_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 1028 },
	{ "next", (intptr_t) M_rhino_ES6Iterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_ES6Iterator_next_rhino_Context_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;)Ljava/lang/Object;", 4 },
	{ "getTag", (intptr_t) M_rhino_ES6Iterator_getTag_R_java_lang_String, VTABLE_rhino_ES6Iterator_getTag_R_java_lang_String, "()Ljava/lang/String;", 4 },
	{ "makeIteratorResult", (intptr_t) SM_rhino_ES6Iterator_makeIteratorResult_rhino_Context_rhino_Scriptable_boolean_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)Lrhino/Scriptable;", 8 },
	{ "makeIteratorResult", (intptr_t) SM_rhino_ES6Iterator_makeIteratorResult_rhino_Context_rhino_Scriptable_boolean_java_lang_Object_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;ZLjava/lang/Object;)Lrhino/Scriptable;", 8 },
};

Class class_rhino_ES6Iterator{
		.nativeName = (intptr_t) "rhino/ES6Iterator",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_ES6Iterator),
		.classVtable = (intptr_t) vtable_rhino_ES6Iterator,
		.staticInitializer = (intptr_t) clinit_rhino_ES6Iterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ES6Iterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 117,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ES6Iterator = registerClass(&class_rhino_ES6Iterator);

}
