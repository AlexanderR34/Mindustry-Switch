#include "rhino/NativeWith.h"
#include "rhino/NativeWith.h"
#include "rhino/Symbol.h"
#include "rhino/SymbolScriptable.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/EvaluatorException.h"
#include "java/lang/Object.h"
#include "rhino/IdFunctionCall.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_rhino_NativeWith_FTAG;
jint SF_rhino_NativeWith_Id_constructor;

void mark_rhino_NativeWith(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeWith_FTAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeWith_FTAG)->clazz)->markFunction)((jobject) SF_rhino_NativeWith_FTAG, mark, depth + 1);
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
	auto self = (rhino_NativeWith *) object;
	if (self->F_prototype)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prototype)->clazz)->markFunction)((jobject) self->F_prototype, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
}

void SM_rhino_NativeWith_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:init", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeWith(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(11);
	clinit_rhino_NativeWith(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeWith);
	init_rhino_NativeWith(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(13);
	((func_rhino_NativeWith_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeWith_setParentScope_rhino_Scriptable])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	((func_rhino_NativeWith_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeWith_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(16);
	clinit_rhino_IdFunctionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IdFunctionObject);
	sp[1].o = frame[2].o;
	clinit_rhino_NativeWith(ctx);
	sp[2].o = (jobject)SF_rhino_NativeWith_FTAG;
	init_rhino_IdFunctionObject_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)), (((jobject) createStringLiteral(ctx, u8"With"_j))), (jint(0)), (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(18);
	((func_rhino_IdFunctionObject_markAsConstructor_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_IdFunctionObject_markAsConstructor_rhino_Scriptable])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(19);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(20);
	((func_rhino_IdFunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_IdFunctionObject_sealObject])(ctx, (frame[3].o));
	}
label_6:;
	{
	LINE_NUMBER(22);
	((func_rhino_IdFunctionObject_exportAsScopeProperty) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_IdFunctionObject_exportAsScopeProperty])(ctx, (frame[3].o));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeWith(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeWith(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeWith_rhino_Scriptable_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeWith(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(30);
	((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype = (jref) (frame[2].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"With"_j)));
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeWith_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	jint temp0 = (jint)((func_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeWith_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	if ((isInstance(ctx, sp[0].o, &class_rhino_SymbolScriptable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	sp[0].o = checkCast(ctx, &class_rhino_SymbolScriptable, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	jint temp0 = (jint)((func_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeWith_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	jint temp1 = (jint)((func_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(58);
	if ((frame[2].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(66);
	if ((frame[2].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	if ((isInstance(ctx, sp[0].o, &class_rhino_SymbolScriptable)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	sp[0].o = (jobject)((func_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, (checkCast(ctx, &class_rhino_SymbolScriptable, sp[0].o))))(ctx, (checkCast(ctx, &class_rhino_SymbolScriptable, sp[0].o)), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(72);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(77);
	if ((frame[2].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	sp[0].o = (jobject)((func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeWith_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(85);
	if ((frame[2].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeWith_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(92);
	if ((frame[2].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	if ((isInstance(ctx, sp[0].o, &class_rhino_SymbolScriptable)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	((func_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, (checkCast(ctx, &class_rhino_SymbolScriptable, sp[0].o))))(ctx, (checkCast(ctx, &class_rhino_SymbolScriptable, sp[0].o)), (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_3:;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeWith_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(102);
	if ((frame[2].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeWith_delete_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:delete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	((func_rhino_Scriptable_delete_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeWith_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:delete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	if ((isInstance(ctx, sp[0].o, &class_rhino_SymbolScriptable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	((func_rhino_SymbolScriptable_delete_rhino_Symbol) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_delete_rhino_Symbol, (checkCast(ctx, &class_rhino_SymbolScriptable, sp[0].o))))(ctx, (checkCast(ctx, &class_rhino_SymbolScriptable, sp[0].o)), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeWith_delete_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:delete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	((func_rhino_Scriptable_delete_int) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_delete_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_getPrototype_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:getPrototype", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeWith_setPrototype_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:setPrototype", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype = (jref) (frame[1].o);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_getParentScope_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:getParentScope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeWith_setParentScope_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:setParentScope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:getIds", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	sp[0].o = (jobject)((func_rhino_Scriptable_getIds_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:getDefaultValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeWith_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:hasInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((rhino_NativeWith *) NULL_CHECK((frame[0].o)))->F_prototype;
	jint temp0 = (jint)((func_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_updateDotQuery_boolean_R_java_lang_Object(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:updateDotQuery", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(165);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeWith_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:execIdCall", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeWith(ctx);
	sp[1].o = (jobject)SF_rhino_NativeWith_FTAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	if (temp0 != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.cant.call.indirect"_j))), (((jobject) createStringLiteral(ctx, u8"With"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException])(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool SM_rhino_NativeWith_isWithFunction_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:isWithFunction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeWith(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(180);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_IdFunctionObject)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(181);
	frame[1].o = (checkCast(ctx, &class_rhino_IdFunctionObject, (frame[0].o)));
	LINE_NUMBER(182);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeWith(ctx);
	sp[1].o = (jobject)SF_rhino_NativeWith_FTAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	if (temp0 != (jint(1))) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeWith_newWithSpecial_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:newWithSpecial", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeWith(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(188);
	SM_rhino_ScriptRuntime_checkDeprecated_rhino_Context_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"With"_j))));
	LINE_NUMBER(189);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(190);
	clinit_rhino_NativeWith(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeWith);
	init_rhino_NativeWith(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(191);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(192);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_4:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)));
	LINE_NUMBER(193);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	LINE_NUMBER(191);
	((func_rhino_NativeWith_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeWith_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(194);
	((func_rhino_NativeWith_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeWith_setParentScope_rhino_Scriptable])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeWith(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_NativeWith_Id_constructor = jint(1);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeWith:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeWith(ctx);
	{
	LINE_NUMBER(198);
	clinit_rhino_NativeWith(ctx);
	SF_rhino_NativeWith_FTAG = (((jobject) createStringLiteral(ctx, u8"With"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeWith[] {
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
	(void *) M_rhino_NativeWith_getClassName_R_java_lang_String,
	(void *) M_rhino_NativeWith_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeWith_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeWith_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeWith_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeWith_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeWith_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeWith_delete_java_lang_String,
	(void *) M_rhino_NativeWith_delete_int,
	(void *) M_rhino_NativeWith_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_NativeWith_setPrototype_rhino_Scriptable,
	(void *) M_rhino_NativeWith_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_NativeWith_setParentScope_rhino_Scriptable,
	(void *) M_rhino_NativeWith_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeWith_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_NativeWith_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeWith_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeWith_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeWith_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeWith_delete_rhino_Symbol,
	(void *) M_rhino_NativeWith_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeWith_updateDotQuery_boolean_R_java_lang_Object,
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
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "updateDotQuery", "(Z)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_rhino_Scriptable, &class_rhino_SymbolScriptable, &class_rhino_IdFunctionCall, };

static FieldMetadata fields[] {
	{ "FTAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeWith_FTAG, "Ljava/lang/Object;", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeWith_Id_constructor, "I", 26 },
	{ "prototype", &class_rhino_Scriptable, offsetof(rhino_NativeWith, F_prototype), "Lrhino/Scriptable;", 4 },
	{ "parent", &class_rhino_Scriptable, offsetof(rhino_NativeWith, F_parent), "Lrhino/Scriptable;", 4 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeWith_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeWith, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_rhino_NativeWith_rhino_Scriptable_rhino_Scriptable, 0, "(Lrhino/Scriptable;Lrhino/Scriptable;)V", 4 },
	{ "getClassName", (intptr_t) M_rhino_NativeWith_getClassName_R_java_lang_String, VTABLE_rhino_NativeWith_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "has", (intptr_t) M_rhino_NativeWith_has_java_lang_String_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeWith_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_NativeWith_has_rhino_Symbol_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeWith_has_rhino_Symbol_rhino_Scriptable_R_boolean, "(Lrhino/Symbol;Lrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_NativeWith_has_int_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeWith_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1 },
	{ "get", (intptr_t) M_rhino_NativeWith_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeWith_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_NativeWith_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeWith_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_NativeWith_get_int_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeWith_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_rhino_NativeWith_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeWith_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_NativeWith_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeWith_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_NativeWith_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeWith_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "delete", (intptr_t) M_rhino_NativeWith_delete_java_lang_String, VTABLE_rhino_NativeWith_delete_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "delete", (intptr_t) M_rhino_NativeWith_delete_rhino_Symbol, VTABLE_rhino_NativeWith_delete_rhino_Symbol, "(Lrhino/Symbol;)V", 1 },
	{ "delete", (intptr_t) M_rhino_NativeWith_delete_int, VTABLE_rhino_NativeWith_delete_int, "(I)V", 1 },
	{ "getPrototype", (intptr_t) M_rhino_NativeWith_getPrototype_R_rhino_Scriptable, VTABLE_rhino_NativeWith_getPrototype_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
	{ "setPrototype", (intptr_t) M_rhino_NativeWith_setPrototype_rhino_Scriptable, VTABLE_rhino_NativeWith_setPrototype_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "getParentScope", (intptr_t) M_rhino_NativeWith_getParentScope_R_rhino_Scriptable, VTABLE_rhino_NativeWith_getParentScope_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
	{ "setParentScope", (intptr_t) M_rhino_NativeWith_setParentScope_rhino_Scriptable, VTABLE_rhino_NativeWith_setParentScope_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "getIds", (intptr_t) M_rhino_NativeWith_getIds_R_Array1_java_lang_Object, VTABLE_rhino_NativeWith_getIds_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "getDefaultValue", (intptr_t) M_rhino_NativeWith_getDefaultValue_java_lang_Class_R_java_lang_Object, VTABLE_rhino_NativeWith_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "hasInstance", (intptr_t) M_rhino_NativeWith_hasInstance_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeWith_hasInstance_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1 },
	{ "updateDotQuery", (intptr_t) M_rhino_NativeWith_updateDotQuery_boolean_R_java_lang_Object, VTABLE_rhino_NativeWith_updateDotQuery_boolean_R_java_lang_Object, "(Z)Ljava/lang/Object;", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeWith_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeWith_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "isWithFunction", (intptr_t) SM_rhino_NativeWith_isWithFunction_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 8 },
	{ "newWithSpecial", (intptr_t) SM_rhino_NativeWith_newWithSpecial_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeWith, 0, "()V", 8 },
};

Class class_rhino_NativeWith{
		.nativeName = (intptr_t) "rhino/NativeWith",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeWith),
		.classVtable = (intptr_t) vtable_rhino_NativeWith,
		.staticInitializer = (intptr_t) clinit_rhino_NativeWith,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeWith,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeWith = registerClass(&class_rhino_NativeWith);

}
