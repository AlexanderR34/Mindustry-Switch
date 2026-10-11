#include "rhino/NativeJavaClass.h"
#include "rhino/Function.h"
#include "java/lang/StringBuilder.h"
#include "rhino/WrapFactory.h"
#include "java/lang/Boolean.h"
#include "rhino/NativeArray.h"
#include "java/lang/reflect/Array.h"
#include "rhino/Scriptable.h"
#include "rhino/EvaluatorException.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Modifier.h"
#include "rhino/NativeJavaClass.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "java/util/Map.h"
#include "rhino/NativeJavaArray.h"
#include "rhino/Wrapper.h"
#include "rhino/NativeJavaObject.h"
#include "rhino/JavaMembers.h"
#include "rhino/MemberBox.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/NativeJavaMethod.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jobject SF_rhino_NativeJavaClass_javaClassPropertyName;

void mark_rhino_NativeJavaClass(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeJavaClass_javaClassPropertyName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeJavaClass_javaClassPropertyName)->clazz)->markFunction)((jobject) SF_rhino_NativeJavaClass_javaClassPropertyName, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_NativeJavaObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeJavaClass *) object;
	if (self->F_staticFieldAndMethods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_staticFieldAndMethods)->clazz)->markFunction)((jobject) self->F_staticFieldAndMethods, mark, depth + 1);
}

void clinit_rhino_NativeJavaClass(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_NativeJavaObject(ctx);
	SF_rhino_NativeJavaClass_javaClassPropertyName = ((jobject) createStringLiteral(ctx, u8"__javaObject__"_j));
}

void init_rhino_NativeJavaClass(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaClass(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_rhino_NativeJavaObject(ctx, (frame[0].o));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaClass(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(29);
	init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaClass(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(33);
	init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (frame[3].i));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeJavaClass_initMembers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:initMembers", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	frame[1].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[1].o = (jobject)SM_rhino_JavaMembers_lookupClass_rhino_Scriptable_java_lang_Class_java_lang_Class_boolean_R_rhino_JavaMembers(ctx, sp[1].o, (frame[1].o), (frame[1].o), ((jint)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_isAdapter));
	((rhino_NativeJavaObject *) NULL_CHECK(sp[0].o))->F_members = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[1].o = (jobject)((func_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map])(ctx, sp[1].o, (frame[0].o), (frame[1].o), (jint(1)));
	((rhino_NativeJavaClass *) NULL_CHECK(sp[0].o))->F_staticFieldAndMethods = (jref) sp[1].o;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaClass_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"JavaClass"_j)));
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaClass_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	jint temp0 = (jint)((func_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"__javaObject__"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"__javaObject__"_j))), (frame[1].o));
	if (temp0 == 0) goto label_2;
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

jobject M_rhino_NativeJavaClass_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:get", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(59);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"prototype"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((rhino_NativeJavaClass *) NULL_CHECK((frame[0].o)))->F_staticFieldAndMethods;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((rhino_NativeJavaClass *) NULL_CHECK((frame[0].o)))->F_staticFieldAndMethods;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(64);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_3:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	jint temp0 = (jint)((func_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	sp[0].o = (jobject)((func_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"__javaObject__"_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"__javaObject__"_j))), (frame[1].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[5].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_ClassClass;
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_rhino_NativeJavaClass_getClassObject_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaClass_getClassObject_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_rhino_NativeJavaClass_findNestedClass_java_lang_Class_java_lang_String_R_java_lang_Class(ctx, sp[0].o, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(84);
	if ((frame[6].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable])(ctx, (frame[5].o), (frame[3].o), (frame[4].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(87);
	((func_rhino_Scriptable_setParentScope_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setParentScope_rhino_Scriptable, (frame[7].o)))(ctx, (frame[7].o), (frame[0].o));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_15:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[0].o = (jobject)((func_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException])(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeJavaClass_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:put", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	((func_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[3].o), (jint(1)));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaClass_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:getIds", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[0].o = (jobject)((func_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaClass_getClassObject_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:getClassObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)M_rhino_NativeJavaObject_unwrap_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaClass_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:getDefaultValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_rhino_NativeJavaClass_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaClass_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(112);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(113);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(115);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaClass_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:call", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(125);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) != (jint(1))) goto label_1;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), &class_rhino_Scriptable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_rhino_NativeJavaClass_getClassObject_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaClass_getClassObject_R_java_lang_Class])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(127);
	frame[6].o = (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0))))));
	}
label_4:;
	{
	LINE_NUMBER(129);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_Wrapper)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[6].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[6].o))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[7].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_5:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[6].o)))(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(135);
	if ((frame[6].o) != nullptr) goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_rhino_NativeJavaClass_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaClass_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaClass_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:construct", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_rhino_NativeJavaClass_getClassObject_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaClass_getClassObject_R_java_lang_Class])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(143);
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(144);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isInterface_int_R_boolean(ctx, (frame[5].i));
	if (temp1 != 0) goto label_11;
	}
	{
	jint temp0 = frame[5].i;
	LINE_NUMBER(145);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_11;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[0].o = (jobject)((rhino_JavaMembers *) NULL_CHECK(sp[0].o))->F_ctors;
	frame[6].o = sp[0].o;
	LINE_NUMBER(147);
	jint temp0 = (jint)((func_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int])(ctx, (frame[6].o), (frame[1].o), (frame[3].o));
	frame[7].i = temp0;
	LINE_NUMBER(148);
	if ((frame[7].i) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)SM_rhino_NativeJavaMethod_scriptSignature_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.no.java.ctor"_j));
	sp[1].o = frame[4].o;
	LINE_NUMBER(151);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = frame[8].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(155);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[6].o)))->F_methods;
	sp[0].o = (jobject)SM_rhino_NativeJavaClass_constructSpecific_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_rhino_MemberBox_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[7].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(157);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_21;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.adapter.zero.args"_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(161);
	frame[7].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(164);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Dalvik"_j));
	sp[1].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.vm.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_25;
	}
	clinit_rhino_Kit(ctx);
	(sp++)->i = SF_rhino_Kit_isIos;
	if ((--sp)->i == 0) goto label_0;
label_25:;
	{
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	LINE_NUMBER(166);
	sp[1].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, sp[1].o);
	LINE_NUMBER(165);
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_createInterfaceAdapter_java_lang_Class_rhino_ScriptableObject_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[8].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"JavaAdapter"_j))), (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(173);
	sp[0].o = frame[8].o;
	clinit_rhino_NativeJavaClass(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	{
	LINE_NUMBER(174);
	frame[9].o = (checkCast(ctx, &class_rhino_Function, (frame[8].o)));
	LINE_NUMBER(176);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[0].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, (frame[9].o)))(ctx, (frame[9].o), (frame[1].o), (frame[6].o), (frame[10].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_31:;
	LINE_NUMBER(200);
	goto label_35;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(179);
	frame[8].o = sp[0].o;
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_37;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(186);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	LINE_NUMBER(187);
	sp[1].o = (jobject)SM_rhino_ScriptableObject_ensureScriptableObject_java_lang_Object_R_rhino_ScriptableObject(ctx, sp[1].o);
	LINE_NUMBER(186);
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_createInterfaceAdapter_java_lang_Class_rhino_ScriptableObject_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[9].o), (jobject(nullptr)));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(189);
	frame[9].o = sp[0].o;
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(191);
	if ((frame[10].o) == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(192);
	frame[7].o = (frame[10].o);
	}
label_43:;
	LINE_NUMBER(193);
	goto label_35;
label_37:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(197);
	if ((frame[9].o) == nullptr) goto label_35;
	}
	{
	LINE_NUMBER(198);
	frame[7].o = (frame[9].o);
	}
label_35:;
	{
	LINE_NUMBER(201);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.cant.instantiate"_j));
	sp[1].o = frame[7].o;
	sp[2].o = frame[4].o;
	LINE_NUMBER(202);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	LINE_NUMBER(201);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJavaClass_constructSpecific_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_rhino_MemberBox_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:constructSpecific", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaClass(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)SM_rhino_NativeJavaClass_constructInternal_Array1_java_lang_Object_rhino_MemberBox_R_java_lang_Object(ctx, (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(210);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrapNewObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrapNewObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable])(ctx, sp[0].o, (frame[0].o), (frame[5].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJavaClass_constructInternal_Array1_java_lang_Object_rhino_MemberBox_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:constructInternal", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaClass(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[1].o)))->F_argTypes;
	frame[2].o = sp[0].o;
	LINE_NUMBER(217);
	if (((jint)((rhino_MemberBox *) NULL_CHECK((frame[1].o)))->F_vararg) == 0) goto label_2;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	frame[3].o = sp[0].o;
	LINE_NUMBER(220);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)))) goto label_6;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(220);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(228);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_9;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))))) == nullptr) goto label_10;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))))), &class_rhino_NativeArray)) != 0) goto label_10;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))))), &class_rhino_NativeJavaArray)) == 0) goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))))), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1))))));
	frame[4].o = sp[0].o;
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1))));
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(239);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[5].o), (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (((jarray) nullCheck(ctx, (frame[2].o)))->length)) + (jint(1))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(241);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(ctx, (frame[4].o));
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1))) + (frame[6].i)))), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(244);
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, (frame[4].o), (frame[6].i), (frame[7].o));
	LINE_NUMBER(241);
	INST_IINC(6, 1);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(249);
	ARRAY_ACCESS(jobject, (frame[3].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)))) = (frame[4].o);
	LINE_NUMBER(251);
	frame[0].o = (frame[3].o);
	LINE_NUMBER(252);
	goto label_22;
	}
label_2:;
	{
	LINE_NUMBER(253);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(254);
	frame[4].i = (jint(0));
	}
label_24:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_22;
	}
	{
	LINE_NUMBER(255);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i)));
	LINE_NUMBER(256);
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(257);
	if ((frame[6].o) == (frame[5].o)) goto label_28;
	}
	{
	LINE_NUMBER(258);
	if ((frame[0].o) != (frame[3].o)) goto label_30;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[3].o));
	frame[0].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_30:;
	{
	LINE_NUMBER(261);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i)) = (frame[6].o);
	}
label_28:;
	{
	LINE_NUMBER(254);
	INST_IINC(4, 1);
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaClass_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[JavaClass "_j))));
	sp[1].o = (jobject)((func_rhino_NativeJavaClass_getClassObject_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaClass_getClassObject_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaClass_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:hasInstance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Wrapper)) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeJavaClass)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_rhino_NativeJavaClass_getClassObject_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaClass_getClassObject_R_java_lang_Class])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJavaClass_findNestedClass_java_lang_Class_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaClass:findNestedClass", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaClass(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(297);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (36));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(299);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_ClassLoader_java_lang_String_R_java_lang_Class(ctx, (frame[3].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeJavaClass[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeJavaClass_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeJavaClass_getClassName_R_java_lang_String,
	(void *) M_rhino_NativeJavaClass_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaClass_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaClass_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_delete_java_lang_String,
	(void *) M_rhino_NativeJavaObject_delete_int,
	(void *) M_rhino_NativeJavaObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_NativeJavaClass_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeJavaClass_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_NativeJavaClass_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_delete_rhino_Symbol,
	(void *) M_rhino_NativeJavaObject_unwrap_R_java_lang_Object,
	(void *) M_rhino_NativeJavaClass_initMembers,
	(void *) M_rhino_NativeJavaClass_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeJavaClass_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_NativeJavaClass_getClassObject_R_java_lang_Class,
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
	{ "unwrap", "()Ljava/lang/Object;" },
	{ "initMembers", "()V" },
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "construct", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "getClassObject", "()Ljava/lang/Class;" },
};

static jclass interfaces[] { &class_rhino_Function, };

static FieldMetadata fields[] {
	{ "javaClassPropertyName", &class_java_lang_String, (intptr_t) &SF_rhino_NativeJavaClass_javaClassPropertyName, "Ljava/lang/String;", 24 },
	{ "staticFieldAndMethods", &class_java_util_Map, offsetof(rhino_NativeJavaClass, F_staticFieldAndMethods), "Ljava/util/Map;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeJavaClass, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class, 0, "(Lrhino/Scriptable;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class_boolean, 0, "(Lrhino/Scriptable;Ljava/lang/Class;Z)V", 1 },
	{ "initMembers", (intptr_t) M_rhino_NativeJavaClass_initMembers, VTABLE_rhino_NativeJavaClass_initMembers, "()V", 4 },
	{ "getClassName", (intptr_t) M_rhino_NativeJavaClass_getClassName_R_java_lang_String, VTABLE_rhino_NativeJavaClass_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "has", (intptr_t) M_rhino_NativeJavaClass_has_java_lang_String_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaClass_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1 },
	{ "get", (intptr_t) M_rhino_NativeJavaClass_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeJavaClass_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_rhino_NativeJavaClass_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeJavaClass_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "getIds", (intptr_t) M_rhino_NativeJavaClass_getIds_R_Array1_java_lang_Object, VTABLE_rhino_NativeJavaClass_getIds_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "getClassObject", (intptr_t) M_rhino_NativeJavaClass_getClassObject_R_java_lang_Class, VTABLE_rhino_NativeJavaClass_getClassObject_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getDefaultValue", (intptr_t) M_rhino_NativeJavaClass_getDefaultValue_java_lang_Class_R_java_lang_Object, VTABLE_rhino_NativeJavaClass_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "call", (intptr_t) M_rhino_NativeJavaClass_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeJavaClass_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "construct", (intptr_t) M_rhino_NativeJavaClass_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_NativeJavaClass_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "constructSpecific", (intptr_t) SM_rhino_NativeJavaClass_constructSpecific_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_rhino_MemberBox_R_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;Lrhino/MemberBox;)Lrhino/Scriptable;", 8 },
	{ "constructInternal", (intptr_t) SM_rhino_NativeJavaClass_constructInternal_Array1_java_lang_Object_rhino_MemberBox_R_java_lang_Object, 0, "([Ljava/lang/Object;Lrhino/MemberBox;)Ljava/lang/Object;", 8 },
	{ "toString", (intptr_t) M_rhino_NativeJavaClass_toString_R_java_lang_String, VTABLE_rhino_NativeJavaClass_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hasInstance", (intptr_t) M_rhino_NativeJavaClass_hasInstance_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaClass_hasInstance_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1 },
	{ "findNestedClass", (intptr_t) SM_rhino_NativeJavaClass_findNestedClass_java_lang_Class_java_lang_String_R_java_lang_Class, 0, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Class;", 10 },
};

Class class_rhino_NativeJavaClass{
		.nativeName = (intptr_t) "rhino/NativeJavaClass",
		.parentClass = (intptr_t) &class_rhino_NativeJavaObject,
		.size = sizeof(rhino_NativeJavaClass),
		.classVtable = (intptr_t) vtable_rhino_NativeJavaClass,
		.staticInitializer = (intptr_t) clinit_rhino_NativeJavaClass,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeJavaClass,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeJavaClass = registerClass(&class_rhino_NativeJavaClass);

}
