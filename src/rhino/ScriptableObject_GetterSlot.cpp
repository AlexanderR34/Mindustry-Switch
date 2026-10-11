#include "rhino/ScriptableObject_GetterSlot.h"
#include "rhino/Function.h"
#include "rhino/NativeObject.h"
#include "java/lang/StringBuilder.h"
#include "rhino/ScriptableObject_GetterSlot.h"
#include "java/lang/Boolean.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "rhino/Scriptable.h"
#include "rhino/FunctionObject.h"
#include "rhino/MemberBox.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/ScriptableObject_Slot.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/lang/reflect/Member.h"
#include "java/lang/Class.h"
#include "rhino/LazilyLoadedCtor.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_rhino_ScriptableObject$GetterSlot(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_ScriptableObject$Slot(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ScriptableObject$GetterSlot *) object;
	if (self->F_getter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_getter)->clazz)->markFunction)((jobject) self->F_getter, mark, depth + 1);
	if (self->F_setter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_setter)->clazz)->markFunction)((jobject) self->F_setter, mark, depth + 1);
}

void clinit_rhino_ScriptableObject$GetterSlot(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ScriptableObject$Slot(ctx);
}

void init_rhino_ScriptableObject$GetterSlot_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$GetterSlot:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject$GetterSlot(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(182);
	init_rhino_ScriptableObject$Slot_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject$GetterSlot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$GetterSlot:getPropertyDescriptor", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_rhino_ScriptableObject$GetterSlot_getAttributes_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ScriptableObject$GetterSlot_getAttributes_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(188);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(189);
	sp[0].o = frame[4].o;
	sp[1].o = frame[2].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Object;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(190);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enumerable"_j));
	sp += 2;
	if (((frame[3].i) & (jint(2))) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(191);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"configurable"_j));
	sp += 2;
	if (((frame[3].i) & (jint(4))) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"writable"_j));
	sp += 2;
	if (((frame[3].i) & (jint(1))) != 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	}
label_10:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"f"_j));
	goto label_15;
label_14:;
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(197);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	if ((isInstance(ctx, sp[0].o, &class_rhino_MemberBox)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"get"_j));
	clinit_rhino_FunctionObject(ctx);
	sp[2].o = gcAlloc(ctx, &class_rhino_FunctionObject);
	sp[3].o = frame[5].o;
	sp[4].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	sp[4].o = (jobject)((func_rhino_MemberBox_member_R_java_lang_reflect_Member) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_MemberBox, sp[4].o)))->vtable)[VTABLE_rhino_MemberBox_member_R_java_lang_reflect_Member])(ctx, (checkCast(ctx, &class_rhino_MemberBox, sp[4].o)));
	init_rhino_FunctionObject_java_lang_String_java_lang_reflect_Member_rhino_Scriptable(ctx, sp[2].o, sp[3].o, sp[4].o, (frame[2].o));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_reflect_Member)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"get"_j));
	clinit_rhino_FunctionObject(ctx);
	sp[2].o = gcAlloc(ctx, &class_rhino_FunctionObject);
	sp[3].o = frame[5].o;
	sp[4].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	init_rhino_FunctionObject_java_lang_String_java_lang_reflect_Member_rhino_Scriptable(ctx, sp[2].o, sp[3].o, (checkCast(ctx, &class_java_lang_reflect_Member, sp[4].o)), (frame[2].o));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	goto label_17;
	}
label_21:;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"get"_j));
	sp[2].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	}
label_17:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	if ((isInstance(ctx, sp[0].o, &class_rhino_MemberBox)) == 0) goto label_25;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"set"_j));
	clinit_rhino_FunctionObject(ctx);
	sp[2].o = gcAlloc(ctx, &class_rhino_FunctionObject);
	sp[3].o = frame[5].o;
	sp[4].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	sp[4].o = (jobject)((func_rhino_MemberBox_member_R_java_lang_reflect_Member) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_MemberBox, sp[4].o)))->vtable)[VTABLE_rhino_MemberBox_member_R_java_lang_reflect_Member])(ctx, (checkCast(ctx, &class_rhino_MemberBox, sp[4].o)));
	init_rhino_FunctionObject_java_lang_String_java_lang_reflect_Member_rhino_Scriptable(ctx, sp[2].o, sp[3].o, sp[4].o, (frame[2].o));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	goto label_23;
	}
label_25:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_reflect_Member)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"set"_j));
	clinit_rhino_FunctionObject(ctx);
	sp[2].o = gcAlloc(ctx, &class_rhino_FunctionObject);
	sp[3].o = frame[5].o;
	sp[4].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	init_rhino_FunctionObject_java_lang_String_java_lang_reflect_Member_rhino_Scriptable(ctx, sp[2].o, sp[3].o, (checkCast(ctx, &class_java_lang_reflect_Member, sp[4].o)), (frame[2].o));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	goto label_23;
	}
label_27:;
	{
	LINE_NUMBER(212);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"set"_j));
	sp[2].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	}
label_23:;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject$GetterSlot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$GetterSlot:setValue", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(223);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = frame[4].o;
	jint temp0 = 11;
	LINE_NUMBER(226);
	jint temp1 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(228);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(229);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(230);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((func_rhino_Scriptable_getClassName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getClassName_R_java_lang_String, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]."_j))));
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(232);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.set.prop.no.setter"_j));
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)SM_rhino_Context_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(240);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	if ((isInstance(ctx, sp[0].o, &class_rhino_MemberBox)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	frame[5].o = (checkCast(ctx, &class_rhino_MemberBox, sp[0].o));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[5].o)))->F_argTypes;
	frame[6].o = sp[0].o;
	LINE_NUMBER(245);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), ((((jarray) nullCheck(ctx, (frame[6].o)))->length) - (jint(1)))));
	LINE_NUMBER(246);
	jint temp0 = (jint)SM_rhino_FunctionObject_getTypeTag_java_lang_Class_R_int(ctx, (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(247);
	sp[0].o = (jobject)SM_rhino_FunctionObject_convertArg_rhino_Context_rhino_Scriptable_java_lang_Object_int_R_java_lang_Object(ctx, (frame[4].o), (frame[3].o), (frame[1].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(251);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[5].o)))->F_delegateTo;
	if (sp[0].o != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(252);
	frame[10].o = (frame[3].o);
	LINE_NUMBER(253);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[9].o);
	frame[11].o = sp[0].o;
	goto label_24;
	}
label_20:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[5].o)))->F_delegateTo;
	frame[10].o = sp[0].o;
	LINE_NUMBER(256);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[9].o);
	frame[11].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((func_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[5].o), (frame[10].o), (frame[11].o));
	LINE_NUMBER(259);
	goto label_27;
	}
label_13:;
	{
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	if ((isInstance(ctx, sp[0].o, &class_rhino_Function)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_setter;
	frame[5].o = (checkCast(ctx, &class_rhino_Function, sp[0].o));
	LINE_NUMBER(261);
	sp[0].o = frame[5].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[5].o)))(ctx, (frame[5].o));
	sp[3].o = frame[3].o;
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[1].o);
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_27:;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)M_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject$GetterSlot_getValue_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$GetterSlot:getValue", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	if ((isInstance(ctx, sp[0].o, &class_rhino_MemberBox)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	frame[2].o = (checkCast(ctx, &class_rhino_MemberBox, sp[0].o));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[2].o)))->F_delegateTo;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(277);
	frame[3].o = (frame[1].o);
	LINE_NUMBER(278);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	frame[4].o = sp[0].o;
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[2].o)))->F_delegateTo;
	frame[3].o = sp[0].o;
	LINE_NUMBER(281);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	frame[4].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	if ((isInstance(ctx, sp[0].o, &class_rhino_Function)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((rhino_ScriptableObject$GetterSlot *) NULL_CHECK((frame[0].o)))->F_getter;
	frame[2].o = (checkCast(ctx, &class_rhino_Function, sp[0].o));
	LINE_NUMBER(286);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(287);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[2].o)))(ctx, (frame[2].o));
	sp[3].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].o = sp[0].o;
	LINE_NUMBER(292);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_LazilyLoadedCtor)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(293);
	frame[3].o = (checkCast(ctx, &class_rhino_LazilyLoadedCtor, (frame[2].o)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(295);
	((func_rhino_LazilyLoadedCtor_init) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_LazilyLoadedCtor_init])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object])(ctx, (frame[3].o));
	frame[2].o = sp[1].o;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(298);
	goto label_22;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(297);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object])(ctx, (frame[3].o));
	frame[2].o = sp[1].o;
	((rhino_ScriptableObject$Slot *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(298);
	throwException(ctx, (frame[5].o));	}
label_22:;
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptableObject$GetterSlot[] {
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
	(void *) M_rhino_ScriptableObject$GetterSlot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject$GetterSlot_getValue_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject$Slot_getAttributes_R_int,
	(void *) M_rhino_ScriptableObject$Slot_setAttributes_int,
	(void *) M_rhino_ScriptableObject$GetterSlot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject,
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
	{ "setValue", "(Ljava/lang/Object;Lrhino/Scriptable;Lrhino/Scriptable;)Z" },
	{ "getValue", "(Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "getAttributes", "()I" },
	{ "setAttributes", "(I)V" },
	{ "getPropertyDescriptor", "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/ScriptableObject;" },
};

static FieldMetadata fields[] {
	{ "getter", &class_java_lang_Object, offsetof(rhino_ScriptableObject$GetterSlot, F_getter), "Ljava/lang/Object;", 0 },
	{ "setter", &class_java_lang_Object, offsetof(rhino_ScriptableObject$GetterSlot, F_setter), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ScriptableObject$GetterSlot_java_lang_Object_int_int, 0, "(Ljava/lang/Object;II)V", 0 },
	{ "getPropertyDescriptor", (intptr_t) M_rhino_ScriptableObject$GetterSlot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject, VTABLE_rhino_ScriptableObject$GetterSlot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject, "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/ScriptableObject;", 0 },
	{ "setValue", (intptr_t) M_rhino_ScriptableObject$GetterSlot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean, VTABLE_rhino_ScriptableObject$GetterSlot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean, "(Ljava/lang/Object;Lrhino/Scriptable;Lrhino/Scriptable;)Z", 0 },
	{ "getValue", (intptr_t) M_rhino_ScriptableObject$GetterSlot_getValue_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_ScriptableObject$GetterSlot_getValue_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Scriptable;)Ljava/lang/Object;", 0 },
};

Class class_rhino_ScriptableObject$GetterSlot{
		.nativeName = (intptr_t) "rhino/ScriptableObject$GetterSlot",
		.parentClass = (intptr_t) &class_rhino_ScriptableObject$Slot,
		.size = sizeof(rhino_ScriptableObject$GetterSlot),
		.classVtable = (intptr_t) vtable_rhino_ScriptableObject$GetterSlot,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptableObject$GetterSlot,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptableObject$GetterSlot,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ScriptableObject,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptableObject$GetterSlot = registerClass(&class_rhino_ScriptableObject$GetterSlot);

}

