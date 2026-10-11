#include "rhino/Delegator.h"
#include "rhino/Function.h"
#include "java/lang/Exception.h"
#include "rhino/Symbol.h"
#include "rhino/NativeObject.h"
#include "rhino/SymbolScriptable.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/Delegator.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_rhino_Delegator(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (rhino_Delegator *) object;
	if (self->F_obj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_obj)->clazz)->markFunction)((jobject) self->F_obj, mark, depth + 1);
}

void clinit_rhino_Delegator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Delegator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Delegator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((rhino_Delegator *) NULL_CHECK((frame[0].o)))->F_obj = (jref) (jobject(nullptr));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Delegator_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Delegator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((rhino_Delegator *) NULL_CHECK((frame[0].o)))->F_obj = (jref) (jobject(nullptr));
	LINE_NUMBER(41);
	((rhino_Delegator *) NULL_CHECK((frame[0].o)))->F_obj = (jref) (frame[1].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_newInstance_R_rhino_Delegator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:newInstance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_newInstance_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_newInstance_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_rhino_Delegator, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(52);
	frame[1].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_getDelegee_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:getDelegee", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((rhino_Delegator *) NULL_CHECK((frame[0].o)))->F_obj;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Delegator_setDelegee_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:setDelegee", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	((rhino_Delegator *) NULL_CHECK((frame[0].o)))->F_obj = (jref) (frame[1].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_Scriptable_getClassName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getClassName_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(93);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_SymbolScriptable)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[3].o)))))(ctx, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[3].o))), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(96);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Delegator_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Delegator_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(118);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_SymbolScriptable)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[3].o)))))(ctx, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[3].o))), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_Delegator_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_Delegator_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Delegator_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(146);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_SymbolScriptable)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(147);
	((func_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[4].o)))))(ctx, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[4].o))), (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_2:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Delegator_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Delegator_delete_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:delete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_delete_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Delegator_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:delete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(170);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_SymbolScriptable)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(171);
	((func_rhino_SymbolScriptable_delete_rhino_Symbol) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_delete_rhino_Symbol, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[2].o))), (frame[1].o));
	}
label_2:;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Delegator_delete_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:delete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_delete_int) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_getPrototype_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:getPrototype", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Delegator_setPrototype_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:setPrototype", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_setPrototype_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_getParentScope_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:getParentScope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Delegator_setParentScope_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:setParentScope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_setParentScope_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setParentScope_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:getIds", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:getDefaultValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ScriptableClass;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_FunctionClass;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	goto label_3;
label_2:;
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_3:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_rhino_Delegator_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:hasInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:call", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (checkCast(ctx, &class_rhino_Function, sp[0].o))))(ctx, (checkCast(ctx, &class_rhino_Function, sp[0].o)), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Delegator_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Delegator:construct", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_rhino_Delegator_getDelegee_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(274);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_rhino_Delegator_newInstance_R_rhino_Delegator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Delegator_newInstance_R_rhino_Delegator])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(278);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_5;
	}
	{
	LINE_NUMBER(279);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[1].o), (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	frame[6].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(283);
	((func_rhino_Delegator_setDelegee_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_Delegator_setDelegee_rhino_Scriptable])(ctx, (frame[5].o), (frame[6].o));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_2:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, (checkCast(ctx, &class_rhino_Function, (frame[4].o)))))(ctx, (checkCast(ctx, &class_rhino_Function, (frame[4].o))), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Delegator[] {
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
	(void *) M_rhino_Delegator_getClassName_R_java_lang_String,
	(void *) M_rhino_Delegator_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_Delegator_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_Delegator_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_Delegator_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_Delegator_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_Delegator_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_Delegator_delete_java_lang_String,
	(void *) M_rhino_Delegator_delete_int,
	(void *) M_rhino_Delegator_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_Delegator_setPrototype_rhino_Scriptable,
	(void *) M_rhino_Delegator_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_Delegator_setParentScope_rhino_Scriptable,
	(void *) M_rhino_Delegator_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_Delegator_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_Delegator_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_Delegator_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_Delegator_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_Delegator_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_Delegator_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_Delegator_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_Delegator_delete_rhino_Symbol,
	(void *) M_rhino_Delegator_newInstance_R_rhino_Delegator,
	(void *) M_rhino_Delegator_getDelegee_R_rhino_Scriptable,
	(void *) M_rhino_Delegator_setDelegee_rhino_Scriptable,
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
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "construct", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
	{ "newInstance", "()Lrhino/Delegator;" },
	{ "getDelegee", "()Lrhino/Scriptable;" },
	{ "setDelegee", "(Lrhino/Scriptable;)V" },
};

static jclass interfaces[] { &class_rhino_Function, &class_rhino_SymbolScriptable, };

static FieldMetadata fields[] {
	{ "obj", &class_rhino_Scriptable, offsetof(rhino_Delegator, F_obj), "Lrhino/Scriptable;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Delegator, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_Delegator_rhino_Scriptable, 0, "(Lrhino/Scriptable;)V", 1 },
	{ "newInstance", (intptr_t) M_rhino_Delegator_newInstance_R_rhino_Delegator, VTABLE_rhino_Delegator_newInstance_R_rhino_Delegator, "()Lrhino/Delegator;", 4 },
	{ "getDelegee", (intptr_t) M_rhino_Delegator_getDelegee_R_rhino_Scriptable, VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
	{ "setDelegee", (intptr_t) M_rhino_Delegator_setDelegee_rhino_Scriptable, VTABLE_rhino_Delegator_setDelegee_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "getClassName", (intptr_t) M_rhino_Delegator_getClassName_R_java_lang_String, VTABLE_rhino_Delegator_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "get", (intptr_t) M_rhino_Delegator_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_Delegator_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_Delegator_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_Delegator_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_Delegator_get_int_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_Delegator_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "has", (intptr_t) M_rhino_Delegator_has_java_lang_String_rhino_Scriptable_R_boolean, VTABLE_rhino_Delegator_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_Delegator_has_rhino_Symbol_rhino_Scriptable_R_boolean, VTABLE_rhino_Delegator_has_rhino_Symbol_rhino_Scriptable_R_boolean, "(Lrhino/Symbol;Lrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_Delegator_has_int_rhino_Scriptable_R_boolean, VTABLE_rhino_Delegator_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1 },
	{ "put", (intptr_t) M_rhino_Delegator_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_Delegator_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_Delegator_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, VTABLE_rhino_Delegator_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_Delegator_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_Delegator_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "delete", (intptr_t) M_rhino_Delegator_delete_java_lang_String, VTABLE_rhino_Delegator_delete_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "delete", (intptr_t) M_rhino_Delegator_delete_rhino_Symbol, VTABLE_rhino_Delegator_delete_rhino_Symbol, "(Lrhino/Symbol;)V", 1 },
	{ "delete", (intptr_t) M_rhino_Delegator_delete_int, VTABLE_rhino_Delegator_delete_int, "(I)V", 1 },
	{ "getPrototype", (intptr_t) M_rhino_Delegator_getPrototype_R_rhino_Scriptable, VTABLE_rhino_Delegator_getPrototype_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
	{ "setPrototype", (intptr_t) M_rhino_Delegator_setPrototype_rhino_Scriptable, VTABLE_rhino_Delegator_setPrototype_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "getParentScope", (intptr_t) M_rhino_Delegator_getParentScope_R_rhino_Scriptable, VTABLE_rhino_Delegator_getParentScope_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
	{ "setParentScope", (intptr_t) M_rhino_Delegator_setParentScope_rhino_Scriptable, VTABLE_rhino_Delegator_setParentScope_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "getIds", (intptr_t) M_rhino_Delegator_getIds_R_Array1_java_lang_Object, VTABLE_rhino_Delegator_getIds_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "getDefaultValue", (intptr_t) M_rhino_Delegator_getDefaultValue_java_lang_Class_R_java_lang_Object, VTABLE_rhino_Delegator_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "hasInstance", (intptr_t) M_rhino_Delegator_hasInstance_rhino_Scriptable_R_boolean, VTABLE_rhino_Delegator_hasInstance_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1 },
	{ "call", (intptr_t) M_rhino_Delegator_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_Delegator_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "construct", (intptr_t) M_rhino_Delegator_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_Delegator_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
};

Class class_rhino_Delegator{
		.nativeName = (intptr_t) "rhino/Delegator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Delegator),
		.classVtable = (intptr_t) vtable_rhino_Delegator,
		.staticInitializer = (intptr_t) clinit_rhino_Delegator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Delegator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Delegator = registerClass(&class_rhino_Delegator);

}
