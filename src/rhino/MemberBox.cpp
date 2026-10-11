#include "rhino/MemberBox.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Modifier.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalAccessException.h"
#include "rhino/Context.h"
#include "java/lang/reflect/InvocationTargetException.h"
#include "rhino/MemberBox.h"
#include "java/lang/reflect/Constructor.h"
#include "rhino/JavaMembers.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/ContinuationPending.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/reflect/Member.h"
#include "java/lang/reflect/AccessibleObject.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "rhino/VMBridge.h"

extern "C" {


void mark_rhino_MemberBox(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_MemberBox *) object;
	if (self->F_memberObject)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_memberObject)->clazz)->markFunction)((jobject) self->F_memberObject, mark, depth + 1);
	if (self->F_argTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_argTypes)->clazz)->markFunction)((jobject) self->F_argTypes, mark, depth + 1);
	if (self->F_delegateTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_delegateTo)->clazz)->markFunction)((jobject) self->F_delegateTo, mark, depth + 1);
}

void clinit_rhino_MemberBox(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_MemberBox_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_MemberBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	M_rhino_MemberBox_init_java_lang_reflect_Method(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_MemberBox_java_lang_reflect_Constructor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_MemberBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	M_rhino_MemberBox_init_java_lang_reflect_Constructor(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_MemberBox_init_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject = (jref) (frame[1].o);
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[1].o));
	((rhino_MemberBox *) NULL_CHECK(sp[0].o))->F_argTypes = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_reflect_Method_isVarArgs_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Method_isVarArgs_R_boolean])(ctx, (frame[1].o));
	((rhino_MemberBox *) NULL_CHECK(sp[0].o))->F_vararg = temp0;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_MemberBox_init_java_lang_reflect_Constructor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject = (jref) (frame[1].o);
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[1].o));
	((rhino_MemberBox *) NULL_CHECK(sp[0].o))->F_argTypes = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_reflect_Constructor_isVarArgs_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Constructor_isVarArgs_R_boolean])(ctx, (frame[1].o));
	((rhino_MemberBox *) NULL_CHECK(sp[0].o))->F_vararg = temp0;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_MemberBox_method_R_java_lang_reflect_Method(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:method", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_reflect_Method, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:ctor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_reflect_Constructor, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_rhino_MemberBox_member_R_java_lang_reflect_Member(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:member", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_MemberBox_isMethod_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:isMethod", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_lang_reflect_Method));
	}

	popStackFrame(ctx);
}

jbool M_rhino_MemberBox_isCtor_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:isCtor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_lang_reflect_Constructor));
	}

	popStackFrame(ctx);
}

jbool M_rhino_MemberBox_isStatic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:isStatic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	jint temp0 = (jint)((func_java_lang_reflect_Member_getModifiers_R_int) resolveInterfaceMethod(ctx, &class_java_lang_reflect_Member, INDEX_java_lang_reflect_Member_getModifiers_R_int, sp[0].o))(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_rhino_MemberBox_isPublic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:isPublic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	jint temp0 = (jint)((func_java_lang_reflect_Member_getModifiers_R_int) resolveInterfaceMethod(ctx, &class_java_lang_reflect_Member, INDEX_java_lang_reflect_Member_getModifiers_R_int, sp[0].o))(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_rhino_MemberBox_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	sp[0].o = (jobject)((func_java_lang_reflect_Member_getName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_lang_reflect_Member, INDEX_java_lang_reflect_Member_getName_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_MemberBox_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:getDeclaringClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	sp[0].o = (jobject)((func_java_lang_reflect_Member_getDeclaringClass_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_reflect_Member, INDEX_java_lang_reflect_Member_getDeclaringClass_R_java_lang_Class, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_MemberBox_toJavaDeclaration_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:toJavaDeclaration", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_rhino_MemberBox_isMethod_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_MemberBox_isMethod_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (32));
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getDeclaringClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(85);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[3].o), (46));
	frame[4].i = temp0;
	LINE_NUMBER(86);
	if ((frame[4].i) < 0) goto label_12;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[3].o), ((frame[4].i) + (jint(1))));
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[3].o));
	}
label_8:;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_argTypes;
	sp[1].o = (jobject)SM_rhino_JavaMembers_liveConnectSignature_Array1_java_lang_Class_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_MemberBox_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:invoke", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_reflect_InvocationTargetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_4; }
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_reflect_InvocationTargetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(105);
	frame[4].o = sp[0].o;
	LINE_NUMBER(106);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_argTypes;
	sp[0].o = (jobject)SM_rhino_MemberBox_searchAccessibleMethod_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_reflect_Method(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(107);
	if ((frame[5].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(108);
	((rhino_MemberBox *) NULL_CHECK((frame[0].o)))->F_memberObject = (jref) (frame[5].o);
	LINE_NUMBER(109);
	frame[3].o = (frame[5].o);
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)SM_rhino_VMBridge_tryToMakeAccessible_java_lang_reflect_AccessibleObject_R_boolean(ctx, (frame[3].o));
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(118);
	frame[4].o = sp[0].o;
	LINE_NUMBER(120);
	frame[5].o = (frame[4].o);
	}
label_20:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_reflect_InvocationTargetException, (frame[5].o))))->vtable)[VTABLE_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable])(ctx, (checkCast(ctx, &class_java_lang_reflect_InvocationTargetException, (frame[5].o))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(123);
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_reflect_InvocationTargetException)) != 0) goto label_20;
	}
	{
	LINE_NUMBER(124);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_ContinuationPending)) == 0) goto label_23;
	}
	{
	LINE_NUMBER(125);
	throwException(ctx, (checkCast(ctx, &class_rhino_ContinuationPending, (frame[5].o))));	}
label_23:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(127);
	frame[4].o = sp[0].o;
	LINE_NUMBER(128);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[4].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:newInstance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(137);
	frame[3].o = sp[0].o;
	LINE_NUMBER(138);
	jint temp0 = (jint)SM_rhino_VMBridge_tryToMakeAccessible_java_lang_reflect_AccessibleObject_R_boolean(ctx, (frame[2].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(143);
	frame[3].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_MemberBox_searchAccessibleMethod_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_reflect_Method(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/MemberBox:searchAccessibleMethod", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_MemberBox(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(150);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, (frame[2].i));
	if (temp1 == 0) goto label_10;
	}
	{
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, (frame[2].i));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_10;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_java_lang_Class_getInterfaces_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getInterfaces_R_Array1_java_lang_Class])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(155);
	frame[6].i = (jint(0));
	frame[7].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	}
label_17:;
	{
	if ((frame[6].i) == (frame[7].i)) goto label_18;
	}
	{
	LINE_NUMBER(156);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(157);
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, (frame[8].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_21;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, (frame[8].o), (frame[4].o), (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(160);
	INST_ASTORE(9);
label_21:;
	{
	LINE_NUMBER(155);
	INST_IINC(6, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(166);
	if ((frame[3].o) != nullptr) goto label_23;
	}
	LINE_NUMBER(167);
	goto label_10;
label_23:;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_18;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, (frame[3].o), (frame[4].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(172);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(173);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(ctx, (frame[7].i));
	if (temp1 == 0) { popExceptionFrames(frameRef, 1); goto label_27; }
	}
	{
	jint temp0 = frame[7].i;
	LINE_NUMBER(174);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(ctx, temp0);
	if (temp1 != 0) { popExceptionFrames(frameRef, 1); goto label_27; }
	}
	LINE_NUMBER(175);
	INST_ALOAD(6);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_27:;
	LINE_NUMBER(178);
	goto label_18;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(177);
	frame[6].o = sp[0].o;
	LINE_NUMBER(178);
	goto label_18;
	}
label_10:;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_MemberBox[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_MemberBox_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_MemberBox_init_java_lang_reflect_Method,
	(void *) M_rhino_MemberBox_init_java_lang_reflect_Constructor,
	(void *) M_rhino_MemberBox_method_R_java_lang_reflect_Method,
	(void *) M_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor,
	(void *) M_rhino_MemberBox_member_R_java_lang_reflect_Member,
	(void *) M_rhino_MemberBox_isMethod_R_boolean,
	(void *) M_rhino_MemberBox_isCtor_R_boolean,
	(void *) M_rhino_MemberBox_isStatic_R_boolean,
	(void *) M_rhino_MemberBox_isPublic_R_boolean,
	(void *) M_rhino_MemberBox_getName_R_java_lang_String,
	(void *) M_rhino_MemberBox_getDeclaringClass_R_java_lang_Class,
	(void *) M_rhino_MemberBox_toJavaDeclaration_R_java_lang_String,
	(void *) M_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object,
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
	{ "init", "(Ljava/lang/reflect/Method;)V" },
	{ "init", "(Ljava/lang/reflect/Constructor;)V" },
	{ "method", "()Ljava/lang/reflect/Method;" },
	{ "ctor", "()Ljava/lang/reflect/Constructor;" },
	{ "member", "()Ljava/lang/reflect/Member;" },
	{ "isMethod", "()Z" },
	{ "isCtor", "()Z" },
	{ "isStatic", "()Z" },
	{ "isPublic", "()Z" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "toJavaDeclaration", "()Ljava/lang/String;" },
	{ "invoke", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "memberObject", &class_java_lang_reflect_Member, offsetof(rhino_MemberBox, F_memberObject), "Ljava/lang/reflect/Member;", 130 },
	{ "argTypes", getArrayClass(&class_java_lang_Class, 1), offsetof(rhino_MemberBox, F_argTypes), "[Ljava/lang/Class;", 128 },
	{ "delegateTo", &class_java_lang_Object, offsetof(rhino_MemberBox, F_delegateTo), "Ljava/lang/Object;", 128 },
	{ "vararg", &class_boolean, offsetof(rhino_MemberBox, F_vararg), "Z", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_MemberBox_java_lang_reflect_Method, 0, "(Ljava/lang/reflect/Method;)V", 0 },
	{ "<init>", (intptr_t) init_rhino_MemberBox_java_lang_reflect_Constructor, 0, "(Ljava/lang/reflect/Constructor;)V", 0 },
	{ "init", (intptr_t) M_rhino_MemberBox_init_java_lang_reflect_Method, VTABLE_rhino_MemberBox_init_java_lang_reflect_Method, "(Ljava/lang/reflect/Method;)V", 2 },
	{ "init", (intptr_t) M_rhino_MemberBox_init_java_lang_reflect_Constructor, VTABLE_rhino_MemberBox_init_java_lang_reflect_Constructor, "(Ljava/lang/reflect/Constructor;)V", 2 },
	{ "method", (intptr_t) M_rhino_MemberBox_method_R_java_lang_reflect_Method, VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method, "()Ljava/lang/reflect/Method;", 0 },
	{ "ctor", (intptr_t) M_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor, VTABLE_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor, "()Ljava/lang/reflect/Constructor;", 0 },
	{ "member", (intptr_t) M_rhino_MemberBox_member_R_java_lang_reflect_Member, VTABLE_rhino_MemberBox_member_R_java_lang_reflect_Member, "()Ljava/lang/reflect/Member;", 0 },
	{ "isMethod", (intptr_t) M_rhino_MemberBox_isMethod_R_boolean, VTABLE_rhino_MemberBox_isMethod_R_boolean, "()Z", 0 },
	{ "isCtor", (intptr_t) M_rhino_MemberBox_isCtor_R_boolean, VTABLE_rhino_MemberBox_isCtor_R_boolean, "()Z", 0 },
	{ "isStatic", (intptr_t) M_rhino_MemberBox_isStatic_R_boolean, VTABLE_rhino_MemberBox_isStatic_R_boolean, "()Z", 0 },
	{ "isPublic", (intptr_t) M_rhino_MemberBox_isPublic_R_boolean, VTABLE_rhino_MemberBox_isPublic_R_boolean, "()Z", 0 },
	{ "getName", (intptr_t) M_rhino_MemberBox_getName_R_java_lang_String, VTABLE_rhino_MemberBox_getName_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "getDeclaringClass", (intptr_t) M_rhino_MemberBox_getDeclaringClass_R_java_lang_Class, VTABLE_rhino_MemberBox_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 0 },
	{ "toJavaDeclaration", (intptr_t) M_rhino_MemberBox_toJavaDeclaration_R_java_lang_String, VTABLE_rhino_MemberBox_toJavaDeclaration_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "toString", (intptr_t) M_rhino_MemberBox_toString_R_java_lang_String, VTABLE_rhino_MemberBox_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "invoke", (intptr_t) M_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", 0 },
	{ "newInstance", (intptr_t) M_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object, "([Ljava/lang/Object;)Ljava/lang/Object;", 0 },
	{ "searchAccessibleMethod", (intptr_t) SM_rhino_MemberBox_searchAccessibleMethod_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_reflect_Method, 0, "(Ljava/lang/reflect/Method;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", 10 },
};

Class class_rhino_MemberBox{
		.nativeName = (intptr_t) "rhino/MemberBox",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_MemberBox),
		.classVtable = (intptr_t) vtable_rhino_MemberBox,
		.staticInitializer = (intptr_t) clinit_rhino_MemberBox,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_MemberBox,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_MemberBox = registerClass(&class_rhino_MemberBox);

}
