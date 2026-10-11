#include "rhino/NativeJavaObject.h"
#include "java/lang/Integer.h"
#include "rhino/Function.h"
#include "rhino/Symbol.h"
#include "rhino/SymbolScriptable.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Boolean.h"
#include "rhino/NativeArray.h"
#include "rhino/NativeFunction.h"
#include "java/lang/reflect/Array.h"
#include "rhino/Scriptable.h"
#include "java/lang/Float.h"
#include "rhino/Undefined.h"
#include "java/util/Date.h"
#include "rhino/EvaluatorException.h"
#include "java/lang/Short.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/lang/reflect/Method.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "rhino/NativeObject.h"
#include "java/lang/Number.h"
#include "java/lang/Byte.h"
#include "rhino/NativeJavaClass.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/ArrowFunction.h"
#include "java/lang/reflect/InvocationTargetException.h"
#include "java/util/Map.h"
#include "java/lang/Long.h"
#include "rhino/NativeJavaArray.h"
#include "rhino/Wrapper.h"
#include "rhino/NativeJavaObject.h"
#include "rhino/JavaMembers.h"
#include "java/lang/CharSequence.h"
#include "rhino/NativeDate.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/TopLevel.h"
#include "rhino/InterfaceAdapter.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {

jint SF_rhino_NativeJavaObject_JSTYPE_UNDEFINED;
jint SF_rhino_NativeJavaObject_JSTYPE_NULL;
jint SF_rhino_NativeJavaObject_JSTYPE_BOOLEAN;
jint SF_rhino_NativeJavaObject_JSTYPE_NUMBER;
jint SF_rhino_NativeJavaObject_JSTYPE_STRING;
jint SF_rhino_NativeJavaObject_JSTYPE_JAVA_CLASS;
jint SF_rhino_NativeJavaObject_JSTYPE_JAVA_OBJECT;
jint SF_rhino_NativeJavaObject_JSTYPE_JAVA_ARRAY;
jint SF_rhino_NativeJavaObject_JSTYPE_OBJECT;
jbyte SF_rhino_NativeJavaObject_CONVERSION_TRIVIAL;
jbyte SF_rhino_NativeJavaObject_CONVERSION_NONTRIVIAL;
jbyte SF_rhino_NativeJavaObject_CONVERSION_NONE;
jobject SF_rhino_NativeJavaObject_COERCED_INTERFACE_KEY;

void mark_rhino_NativeJavaObject(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeJavaObject_COERCED_INTERFACE_KEY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeJavaObject_COERCED_INTERFACE_KEY)->clazz)->markFunction)((jobject) SF_rhino_NativeJavaObject_COERCED_INTERFACE_KEY, mark, depth + 1);
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
	auto self = (rhino_NativeJavaObject *) object;
	if (self->F_prototype)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prototype)->clazz)->markFunction)((jobject) self->F_prototype, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_javaObject)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_javaObject)->clazz)->markFunction)((jobject) self->F_javaObject, mark, depth + 1);
	if (self->F_staticType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_staticType)->clazz)->markFunction)((jobject) self->F_staticType, mark, depth + 1);
	if (self->F_members)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_members)->clazz)->markFunction)((jobject) self->F_members, mark, depth + 1);
	if (self->F_fieldAndMethods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fieldAndMethods)->clazz)->markFunction)((jobject) self->F_fieldAndMethods, mark, depth + 1);
}

void init_rhino_NativeJavaObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(23);
	init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(0)));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(29);
	((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject = (jref) (frame[2].o);
	LINE_NUMBER(30);
	((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_staticType = (jref) (frame[3].o);
	LINE_NUMBER(31);
	((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_isAdapter = (frame[4].i);
	LINE_NUMBER(32);
	((func_rhino_NativeJavaObject_initMembers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaObject_initMembers])(ctx, (frame[0].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeJavaObject_initMembers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:initMembers", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_staticType;
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_staticType;
	sp[1].o = (jobject)SM_rhino_JavaMembers_lookupClass_rhino_Scriptable_java_lang_Class_java_lang_Class_boolean_R_rhino_JavaMembers(ctx, sp[1].o, sp[2].o, sp[3].o, ((jint)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_isAdapter));
	((rhino_NativeJavaObject *) NULL_CHECK(sp[0].o))->F_members = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	jint temp0 = jint(0);
	LINE_NUMBER(45);
	sp[1].o = (jobject)((func_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map])(ctx, sp[1].o, sp[2].o, sp[3].o, temp0);
	((rhino_NativeJavaObject *) NULL_CHECK(sp[0].o))->F_fieldAndMethods = (jref) sp[1].o;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaObject_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	jint temp0 = (jint)((func_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaObject_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaObject_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_fieldAndMethods;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_fieldAndMethods;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(67);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_1:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	sp[0].o = (jobject)((func_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaObject_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException])(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_NativeJavaObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:put", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	jint temp0 = (jint)((func_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	((func_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[3].o), (jint(0)));
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].o));
	}
label_3:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeJavaObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:put", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(104);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	jint temp0 = (jint)((func_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[1].o = frame[0].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	((func_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[3].o), (jint(0)));
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	if ((isInstance(ctx, sp[0].o, &class_rhino_SymbolScriptable)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	sp[0].o = checkCast(ctx, &class_rhino_SymbolScriptable, sp[0].o);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	((func_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].o));
	}
label_4:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeJavaObject_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException])(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaObject_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:hasInstance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeJavaObject_delete_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:delete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeJavaObject_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:delete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeJavaObject_delete_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:delete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaObject_getPrototype_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:getPrototype", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_parent;
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[0].o);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_String;
	LINE_NUMBER(137);
	sp[0].o = (jobject)SM_rhino_TopLevel_getBuiltinPrototype_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeJavaObject_setPrototype_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:setPrototype", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype = (jref) (frame[1].o);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaObject_getParentScope_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:getParentScope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeJavaObject_setParentScope_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:setParentScope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaObject_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:getIds", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_members;
	sp[0].o = (jobject)((func_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaObject_unwrap_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:unwrap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaObject_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"JavaObject"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaObject_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:getDefaultValue", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Boolean)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(188);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Number)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(191);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(194);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(198);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(199);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"booleanValue"_j)));
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(200);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(201);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"doubleValue"_j)));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.default.value"_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].o), (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(206);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Function)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(207);
	frame[5].o = (checkCast(ctx, &class_rhino_Function, (frame[4].o)));
	LINE_NUMBER(208);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	sp[2].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[5].o)))(ctx, (frame[5].o));
	sp[3].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(210);
	goto label_9;
	}
label_18:;
	{
	LINE_NUMBER(211);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	if (sp[0].o != sp[1].o) goto label_22;
	}
	{
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Boolean)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)));
	frame[5].i = temp0;
	LINE_NUMBER(214);
	if ((frame[5].i) == 0) goto label_25;
	}
	INST_DCONST(1);
	goto label_26;
label_25:;
	INST_DCONST(0);
label_26:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, sp[0].d);
	frame[2].o = sp[0].o;
	LINE_NUMBER(215);
	goto label_9;
	}
label_22:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_javaObject;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_NativeJavaObject_canConvert_java_lang_Object_java_lang_Class_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:canConvert", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(229);
	jint temp0 = (jint)SM_rhino_NativeJavaObject_getConversionWeight_java_lang_Object_java_lang_Class_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(231);
	if ((frame[2].i) >= (99)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_NativeJavaObject_getConversionWeight_java_lang_Object_java_lang_Class_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:getConversionWeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)SM_rhino_NativeJavaObject_getJSTypeCode_java_lang_Object_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(260);
	switch((frame[2].i)) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		case 7: goto label_8;
		case 8: goto label_9;
		default: goto label_10;
	}
	}
label_2:;
	{
	LINE_NUMBER(263);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(279);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return (jint(2));
	}
label_15:;
	{
	LINE_NUMBER(281);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (jint(3));
	}
label_17:;
	{
	LINE_NUMBER(283);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (jint(4));
	}
label_5:;
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(290);
	sp[0].o = frame[1].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o != sp[1].o) goto label_22;
	}
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (jint(1));
	}
label_22:;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(293);
	jint temp0 = jint(1);
	jint temp1 = (jint)SM_rhino_NativeJavaObject_getSizeRank_java_lang_Class_R_int(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}
label_20:;
	{
	LINE_NUMBER(296);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_25;
	}
	{
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (9);
	}
label_25:;
	{
	LINE_NUMBER(299);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_27;
	}
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return (10);
	}
label_27:;
	{
	LINE_NUMBER(301);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (jint(2));
	}
label_6:;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_30;
	}
	{
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return (jint(1));
	}
label_30:;
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (jint(2));
	}
label_32:;
	{
	LINE_NUMBER(313);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = frame[1].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return (jint(3));
	}
label_35:;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (jint(4));
	}
label_7:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ClassClass;
	if (sp[0].o != sp[1].o) goto label_38;
	}
	{
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (jint(1));
	}
label_38:;
	{
	LINE_NUMBER(325);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_40;
	}
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (jint(3));
	}
label_40:;
	{
	LINE_NUMBER(327);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return (jint(4));
	}
label_8:;
	{
	LINE_NUMBER(334);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(335);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Wrapper)) == 0) goto label_44;
	}
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[3].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[3].o))));
	frame[3].o = sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(338);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[3].o));
	if (temp0 == 0) goto label_46;
	}
	{
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (jint(0));
	}
label_46:;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_48;
	}
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (jint(2));
	}
label_48:;
	{
	LINE_NUMBER(343);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(344);
	if ((frame[2].i) != (7)) goto label_51;
	}
	INST_BIPUSH(99);
	goto label_52;
label_51:;
	{
	jint temp0 = jint(2);
	sp[0].o = frame[1].o;
	LINE_NUMBER(345);
	jint temp1 = (jint)SM_rhino_NativeJavaObject_getSizeRank_java_lang_Class_R_int(ctx, sp[0].o);
	jint temp2 = temp0 + temp1;
	sp[0].i = temp2;
	sp += 1;
	}
label_52:;
	LINE_NUMBER(344);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(351);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o == sp[1].o) goto label_54;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_54;
	}
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (jint(1));
	}
label_54:;
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_56;
	}
	{
	LINE_NUMBER(356);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeArray)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (jint(2));
	}
label_56:;
	{
	LINE_NUMBER(362);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_59;
	}
	{
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return (jint(3));
	}
label_59:;
	{
	LINE_NUMBER(364);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_61;
	}
	{
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return (jint(4));
	}
label_61:;
	{
	LINE_NUMBER(366);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_DateClass;
	if (sp[0].o != sp[1].o) goto label_63;
	}
	{
	LINE_NUMBER(367);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeDate)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return (jint(1));
	}
label_63:;
	{
	LINE_NUMBER(371);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_66;
	}
	{
	LINE_NUMBER(373);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeFunction)) == 0) goto label_68;
	}
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (jint(1));
	}
label_68:;
	{
	LINE_NUMBER(377);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeObject)) == 0) goto label_70;
	}
	{
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return (jint(2));
	}
label_70:;
	{
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return (12);
	}
label_66:;
	{
	LINE_NUMBER(381);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(382);
	jint temp0 = jint(4);
	jint temp1 = (jint)SM_rhino_NativeJavaObject_getSizeRank_java_lang_Class_R_int(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}
label_10:;
	{
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return (99);
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeJavaObject_getSizeRank_java_lang_Class_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:getSizeRank", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (jint(2));
	}
label_3:;
	{
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return (jint(3));
	}
label_5:;
	{
	LINE_NUMBER(397);
	sp[0].o = frame[0].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return (jint(4));
	}
label_7:;
	{
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	clinit_java_lang_Short(ctx);
	sp[1].o = (jobject)SF_java_lang_Short_TYPE;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return (jint(5));
	}
label_9:;
	{
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return (6);
	}
label_11:;
	{
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return (7);
	}
label_13:;
	{
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (99);
	}
label_15:;
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (8);
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeJavaObject_getJSTypeCode_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:getJSTypeCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(413);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(417);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_CharSequence)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return (jint(4));
	}
label_5:;
	{
	LINE_NUMBER(419);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return (jint(3));
	}
label_7:;
	{
	LINE_NUMBER(421);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return (jint(2));
	}
label_9:;
	{
	LINE_NUMBER(423);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(424);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeJavaClass)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (jint(5));
	}
label_13:;
	{
	LINE_NUMBER(426);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeJavaArray)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return (7);
	}
label_15:;
	{
	LINE_NUMBER(428);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Wrapper)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (6);
	}
label_17:;
	{
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return (8);
	}
label_11:;
	{
	LINE_NUMBER(433);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Class)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return (jint(5));
	}
label_19:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(437);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return (7);
	}
label_22:;
	{
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return (6);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJavaObject_coerceTypeImpl_java_lang_Class_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:coerceTypeImpl", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(449);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_5;
	}
	{
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(453);
	jint temp0 = (jint)SM_rhino_NativeJavaObject_getJSTypeCode_java_lang_Object_R_int(ctx, (frame[1].o));
	switch(temp0) {
		case 0: goto label_7;
		case 1: goto label_8;
		case 2: goto label_9;
		case 3: goto label_10;
		case 4: goto label_11;
		case 5: goto label_12;
		case 6: goto label_13;
		case 7: goto label_13;
		case 8: goto label_14;
		default: goto label_15;
	}
	}
label_8:;
	{
	LINE_NUMBER(457);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(458);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	}
label_16:;
	{
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(463);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o == sp[1].o) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"undefined"_j)));
	}
label_19:;
	{
	LINE_NUMBER(467);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"undefined"_j))), (frame[0].o));
	LINE_NUMBER(468);
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_22:;
	{
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(479);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(481);
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(484);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_26;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(486);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_28;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(488);
	if ((frame[2].o) == nullptr) goto label_31;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = 18;
	LINE_NUMBER(489);
	jint temp1 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_31;
	}
	{
	LINE_NUMBER(491);
	jdouble temp0 = (jdouble)SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double(ctx, (frame[1].o));
	jlong temp1 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, temp0);
	frame[3].l = temp1;
	LINE_NUMBER(492);
	jdouble temp2 = jdouble((frame[3].l));
	jdouble temp3 = (jdouble)SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double(ctx, (frame[1].o));
	if ((doubleCompare(temp2, temp3, -1)) != 0) goto label_31;
	}
	{
	LINE_NUMBER(493);
	clinit_java_lang_Long(ctx);
	sp[0].o = (jobject)SF_java_lang_Long_TYPE;
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(496);
	clinit_java_lang_Double(ctx);
	sp[0].o = (jobject)SF_java_lang_Double_TYPE;
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(497);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_36;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_37;
	}
label_36:;
	{
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	sp[1].o = frame[0].o;
	LINE_NUMBER(498);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(501);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(503);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(506);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o == sp[1].o) goto label_41;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_42;
	}
label_41:;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(508);
	sp[0].o = frame[0].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o == sp[1].o) goto label_43;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_CharacterClass;
	if (sp[0].o != sp[1].o) goto label_44;
	}
label_43:;
	{
	LINE_NUMBER(514);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (checkCast(ctx, &class_java_lang_CharSequence, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_lang_CharSequence, (frame[1].o))));
	if (temp0 != (jint(1))) goto label_45;
	}
	{
	LINE_NUMBER(515);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (checkCast(ctx, &class_java_lang_CharSequence, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_lang_CharSequence, (frame[1].o))), (jint(0)));
	sp[0].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_45:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(518);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_47;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_48;
	}
label_47:;
	{
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	sp[1].o = frame[0].o;
	LINE_NUMBER(519);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_50;
	}
label_48:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_50:;
	{
	LINE_NUMBER(522);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(524);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(527);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Wrapper)) == 0) goto label_52;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o))));
	frame[1].o = sp[0].o;
	}
label_52:;
	{
	LINE_NUMBER(531);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ClassClass;
	if (sp[0].o == sp[1].o) goto label_54;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o != sp[1].o) goto label_55;
	}
label_54:;
	{
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_55:;
	{
	LINE_NUMBER(534);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_56;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_56:;
	{
	LINE_NUMBER(537);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(539);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(543);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Wrapper)) == 0) goto label_59;
	}
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o))));
	frame[1].o = sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(546);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_61;
	}
	{
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_63;
	}
	{
	LINE_NUMBER(548);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	}
label_63:;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_61:;
	{
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_65;
	}
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_65:;
	{
	LINE_NUMBER(555);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_67;
	}
	{
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_67:;
	{
	LINE_NUMBER(558);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(559);
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(562);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_70;
	}
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_70:;
	{
	LINE_NUMBER(564);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_72;
	}
	{
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o != sp[1].o) goto label_74;
	}
	{
	LINE_NUMBER(566);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	}
label_74:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_72:;
	{
	LINE_NUMBER(569);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_76;
	}
	{
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_76:;
	{
	LINE_NUMBER(571);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_DateClass;
	if (sp[0].o != sp[1].o) goto label_78;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeDate)) == 0) goto label_78;
	}
	{
	LINE_NUMBER(573);
	jdouble temp0 = (jdouble)((func_rhino_NativeDate_getJSTimeValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeDate, (frame[1].o))))->vtable)[VTABLE_rhino_NativeDate_getJSTimeValue_R_double])(ctx, (checkCast(ctx, &class_rhino_NativeDate, (frame[1].o))));
	frame[2].d = temp0;
	LINE_NUMBER(575);
	clinit_java_util_Date(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date_long(ctx, sp[0].o, (jlong((frame[2].d))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_78:;
	{
	LINE_NUMBER(576);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_81;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeArray)) == 0) goto label_81;
	}
	{
	LINE_NUMBER(579);
	frame[2].o = (checkCast(ctx, &class_rhino_NativeArray, (frame[1].o)));
	LINE_NUMBER(580);
	jlong temp0 = (jlong)((func_rhino_NativeArray_getLength_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeArray_getLength_R_long])(ctx, (frame[2].o));
	frame[3].l = temp0;
	LINE_NUMBER(581);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(582);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[5].o), (jint((frame[3].l))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(583);
	frame[7].i = (jint(0));
	}
label_87:;
	{
	if ((longCompare((jlong((frame[7].i))), (frame[3].l))) >= 0) goto label_88;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_rhino_EvaluatorException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(585);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	sp[1].o = frame[5].o;
	sp[2].o = frame[2].o;
	jint temp1 = frame[7].i;
	sp[3].o = frame[2].o;
	LINE_NUMBER(586);
	sp[2].o = (jobject)((func_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object])(ctx, sp[2].o, temp1, sp[3].o);
	LINE_NUMBER(585);
	sp[1].o = (jobject)SM_rhino_NativeJavaObject_coerceTypeImpl_java_lang_Class_java_lang_Object_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(589);
	goto label_91;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(587);
	frame[8].o = sp[0].o;
	LINE_NUMBER(588);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	}
label_91:;
	{
	LINE_NUMBER(583);
	INST_IINC(7, 1);
	goto label_87;
	}
label_88:;
	{
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_81:;
	{
	LINE_NUMBER(593);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Wrapper)) == 0) goto label_93;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(595);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_96;
	}
	{
	LINE_NUMBER(596);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_96:;
	{
	LINE_NUMBER(597);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	goto label_15;
	}
label_93:;
	{
	LINE_NUMBER(598);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_98;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeObject)) != 0) goto label_99;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeFunction)) != 0) goto label_99;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ArrowFunction)) == 0) goto label_98;
	}
label_99:;
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)SM_rhino_NativeJavaObject_createInterfaceAdapter_java_lang_Class_rhino_ScriptableObject_R_java_lang_Object(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ScriptableObject, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_98:;
	{
	LINE_NUMBER(604);
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, (frame[1].o), (frame[0].o));
	}
label_15:;
	{
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJavaObject_createInterfaceAdapter_java_lang_Class_rhino_ScriptableObject_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:createInterfaceAdapter", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(619);
	clinit_rhino_NativeJavaObject(ctx);
	sp[0].o = (jobject)SF_rhino_NativeJavaObject_COERCED_INTERFACE_KEY;
	sp[0].o = (jobject)SM_rhino_Kit_makeHashKeyFromPair_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(621);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_3:;
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(626);
	sp[0].o = (jobject)SM_rhino_InterfaceAdapter_create_rhino_Context_java_lang_Class_rhino_ScriptableObject_R_java_lang_Object(ctx, (frame[4].o), (frame[0].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].o), (frame[5].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:coerceToNumber", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(636);
	sp[0].o = frame[0].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_CharacterClass;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(637);
	sp[0].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_CharacterClass;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(640);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_CharacterClass;
	jlong temp0 = (jlong)SM_rhino_NativeJavaObject_toInteger_java_lang_Object_java_lang_Class_double_double_R_long(ctx, sp[0].o, sp[1].o, (jdouble(0)), (jdouble(65535.0)));
	sp[0].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (jchar((jint(temp0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(647);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_DoubleClass;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o != sp[1].o) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(649);
	sp[0].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_DoubleClass;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	INST_ALOAD(1);
	goto label_9;
label_8:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(651);
	jdouble temp0 = (jdouble)SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	sp += 1;
	}
label_9:;
	LINE_NUMBER(649);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(654);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_FloatClass;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	if (sp[0].o != sp[1].o) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(655);
	sp[0].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_FloatClass;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(656);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_13:;
	{
	LINE_NUMBER(658);
	jdouble temp0 = (jdouble)SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double(ctx, (frame[1].o));
	frame[3].d = temp0;
	LINE_NUMBER(659);
	jint temp1 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[3].d));
	if (temp1 != 0) goto label_16;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[3].d));
	if (temp0 != 0) goto label_16;
	}
	{
	if ((doubleCompare((frame[3].d), (jdouble(0)), -1)) != 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat((frame[3].d))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(664);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[3].d));
	frame[5].d = temp0;
	LINE_NUMBER(665);
	if ((doubleCompare((frame[5].d), (jdouble(1,401298e-45)), 1)) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(666);
	if ((doubleCompare((frame[3].d), (jdouble(0)), -1)) <= 0) goto label_21;
	}
	INST_FCONST(0);
	goto label_22;
label_21:;
	(sp++)->f = jfloat(-0,000000e+00f);
label_22:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, sp[0].f);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_19:;
	{
	LINE_NUMBER(667);
	if ((doubleCompare((frame[5].d), (jdouble(3,402823e+38)), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(668);
	if ((doubleCompare((frame[3].d), (jdouble(0)), -1)) <= 0) goto label_25;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::infinity());
	goto label_26;
label_25:;
	(sp++)->f = jfloat(-std::numeric_limits<float>::infinity());
label_26:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, sp[0].f);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_23:;
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat((frame[3].d))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(677);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_IntegerClass;
	if (sp[0].o == sp[1].o) goto label_27;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o != sp[1].o) goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(678);
	sp[0].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_IntegerClass;
	if (sp[0].o != sp[1].o) goto label_29;
	}
	{
	LINE_NUMBER(679);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_29:;
	{
	LINE_NUMBER(681);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_IntegerClass;
	jlong temp0 = (jlong)SM_rhino_NativeJavaObject_toInteger_java_lang_Object_java_lang_Class_double_double_R_long(ctx, sp[0].o, sp[1].o, (jdouble(-2,147484e+09)), (jdouble(2,147484e+09)));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(687);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_LongClass;
	if (sp[0].o == sp[1].o) goto label_31;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o != sp[1].o) goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(688);
	sp[0].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_LongClass;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	{
	LINE_NUMBER(689);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_33:;
	{
	LINE_NUMBER(698);
	jdouble temp0 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, (jlong(4890909195324358655ll)));
	frame[3].d = temp0;
	LINE_NUMBER(699);
	jdouble temp1 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, (jlong(-4332462841530417152ll)));
	frame[5].d = temp1;
	LINE_NUMBER(700);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_LongClass;
	jlong temp2 = (jlong)SM_rhino_NativeJavaObject_toInteger_java_lang_Object_java_lang_Class_double_double_R_long(ctx, sp[0].o, sp[1].o, (frame[5].d), (frame[3].d));
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(706);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ShortClass;
	if (sp[0].o == sp[1].o) goto label_37;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Short(ctx);
	sp[1].o = (jobject)SF_java_lang_Short_TYPE;
	if (sp[0].o != sp[1].o) goto label_38;
	}
label_37:;
	{
	LINE_NUMBER(707);
	sp[0].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ShortClass;
	if (sp[0].o != sp[1].o) goto label_39;
	}
	{
	LINE_NUMBER(708);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_39:;
	{
	LINE_NUMBER(710);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ShortClass;
	jlong temp0 = (jlong)SM_rhino_NativeJavaObject_toInteger_java_lang_Object_java_lang_Class_double_double_R_long(ctx, sp[0].o, sp[1].o, (jdouble(-32768.0)), (jdouble(32767.0)));
	sp[0].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, (jshort((jint(temp0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(716);
	sp[0].o = frame[0].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ByteClass;
	if (sp[0].o == sp[1].o) goto label_41;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	if (sp[0].o != sp[1].o) goto label_42;
	}
label_41:;
	{
	LINE_NUMBER(717);
	sp[0].o = frame[2].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ByteClass;
	if (sp[0].o != sp[1].o) goto label_43;
	}
	{
	LINE_NUMBER(718);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_43:;
	{
	LINE_NUMBER(720);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_ByteClass;
	jlong temp0 = (jlong)SM_rhino_NativeJavaObject_toInteger_java_lang_Object_java_lang_Class_double_double_R_long(ctx, sp[0].o, sp[1].o, (jdouble(-128.0)), (jdouble(127.0)));
	sp[0].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, (jbyte((jint(temp0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(726);
	jdouble temp0 = (jdouble)SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:toDouble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(731);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Number)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(732);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(733);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(734);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_String_R_double(ctx, (checkCast(ctx, &class_java_lang_String, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_12:;
	{
	LINE_NUMBER(735);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Scriptable)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(736);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_Wrapper)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(738);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[0].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[0].o))));
	jdouble temp0 = (jdouble)SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_15:;
	{
	LINE_NUMBER(740);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"doubleValue"_j))), (checkCast(ctx, getArrayClass(&class_java_lang_Class, 1), (jobject(nullptr)))));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(747);
	goto label_17;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(745);
	frame[2].o = sp[0].o;
	LINE_NUMBER(746);
	frame[1].o = (jobject(nullptr));
	}
label_17:;
	{
	LINE_NUMBER(748);
	if ((frame[1].o) == nullptr) goto label_19;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_reflect_InvocationTargetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_6; }
	}
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[0].o), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (jobject(nullptr)))));
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, sp[0].o)));
	sp[0].d = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_DRETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(751);
	frame[2].o = sp[0].o;
	LINE_NUMBER(753);
	sp[0].o = frame[0].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_String_R_double(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_rhino_NativeJavaObject_toInteger_java_lang_Object_java_lang_Class_double_double_R_long(jcontext ctx, jobject param0, jobject param1, jdouble param2, jdouble param3) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:toInteger", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].d = param2;
	frame[4].d = param3;
	{
	LINE_NUMBER(762);
	jdouble temp0 = (jdouble)SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double(ctx, (frame[0].o));
	frame[6].d = temp0;
	LINE_NUMBER(764);
	jint temp1 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[6].d));
	if (temp1 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[6].d));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(766);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(769);
	if ((doubleCompare((frame[6].d), (jdouble(0)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(770);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp0;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(772);
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (frame[6].d));
	frame[6].d = temp0;
	}
label_6:;
	{
	LINE_NUMBER(775);
	if ((doubleCompare((frame[6].d), (frame[2].d), 1)) < 0) goto label_7;
	}
	{
	if ((doubleCompare((frame[6].d), (frame[4].d), -1)) <= 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(777);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(ctx, sp[0].o, (frame[1].o));
	}
label_8:;
	{
	LINE_NUMBER(779);
	popStackFrame(ctx);
	return (jlong((frame[6].d)));
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:reportConversionError", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(785);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.conversion.not.allowed"_j));
	sp[1].o = frame[0].o;
	LINE_NUMBER(787);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = frame[1].o;
	LINE_NUMBER(788);
	sp[2].o = (jobject)SM_rhino_JavaMembers_javaSignature_java_lang_Class_R_java_lang_String(ctx, sp[2].o);
	LINE_NUMBER(785);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeJavaObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_NativeJavaObject_JSTYPE_UNDEFINED = jint(0);
	SF_rhino_NativeJavaObject_JSTYPE_NULL = jint(1);
	SF_rhino_NativeJavaObject_JSTYPE_BOOLEAN = jint(2);
	SF_rhino_NativeJavaObject_JSTYPE_NUMBER = jint(3);
	SF_rhino_NativeJavaObject_JSTYPE_STRING = jint(4);
	SF_rhino_NativeJavaObject_JSTYPE_JAVA_CLASS = jint(5);
	SF_rhino_NativeJavaObject_JSTYPE_JAVA_OBJECT = jint(6);
	SF_rhino_NativeJavaObject_JSTYPE_JAVA_ARRAY = jint(7);
	SF_rhino_NativeJavaObject_JSTYPE_OBJECT = jint(8);
	SF_rhino_NativeJavaObject_CONVERSION_TRIVIAL = jint(1);
	SF_rhino_NativeJavaObject_CONVERSION_NONTRIVIAL = jint(0);
	SF_rhino_NativeJavaObject_CONVERSION_NONE = jint(99);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaObject:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaObject(ctx);
	{
	LINE_NUMBER(808);
	clinit_rhino_NativeJavaObject(ctx);
	SF_rhino_NativeJavaObject_COERCED_INTERFACE_KEY = (((jobject) createStringLiteral(ctx, u8"Coerced Interface"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeJavaObject[] {
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
	(void *) M_rhino_NativeJavaObject_getClassName_R_java_lang_String,
	(void *) M_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_delete_java_lang_String,
	(void *) M_rhino_NativeJavaObject_delete_int,
	(void *) M_rhino_NativeJavaObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_delete_rhino_Symbol,
	(void *) M_rhino_NativeJavaObject_unwrap_R_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_initMembers,
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
};

static jclass interfaces[] { &class_rhino_Scriptable, &class_rhino_SymbolScriptable, &class_rhino_Wrapper, };

static FieldMetadata fields[] {
	{ "JSTYPE_UNDEFINED", &class_int, (intptr_t) &SF_rhino_NativeJavaObject_JSTYPE_UNDEFINED, "I", 26 },
	{ "JSTYPE_NULL", &class_int, (intptr_t) &SF_rhino_NativeJavaObject_JSTYPE_NULL, "I", 26 },
	{ "JSTYPE_BOOLEAN", &class_int, (intptr_t) &SF_rhino_NativeJavaObject_JSTYPE_BOOLEAN, "I", 26 },
	{ "JSTYPE_NUMBER", &class_int, (intptr_t) &SF_rhino_NativeJavaObject_JSTYPE_NUMBER, "I", 26 },
	{ "JSTYPE_STRING", &class_int, (intptr_t) &SF_rhino_NativeJavaObject_JSTYPE_STRING, "I", 26 },
	{ "JSTYPE_JAVA_CLASS", &class_int, (intptr_t) &SF_rhino_NativeJavaObject_JSTYPE_JAVA_CLASS, "I", 26 },
	{ "JSTYPE_JAVA_OBJECT", &class_int, (intptr_t) &SF_rhino_NativeJavaObject_JSTYPE_JAVA_OBJECT, "I", 26 },
	{ "JSTYPE_JAVA_ARRAY", &class_int, (intptr_t) &SF_rhino_NativeJavaObject_JSTYPE_JAVA_ARRAY, "I", 26 },
	{ "JSTYPE_OBJECT", &class_int, (intptr_t) &SF_rhino_NativeJavaObject_JSTYPE_OBJECT, "I", 26 },
	{ "CONVERSION_TRIVIAL", &class_byte, (intptr_t) &SF_rhino_NativeJavaObject_CONVERSION_TRIVIAL, "B", 24 },
	{ "CONVERSION_NONTRIVIAL", &class_byte, (intptr_t) &SF_rhino_NativeJavaObject_CONVERSION_NONTRIVIAL, "B", 24 },
	{ "CONVERSION_NONE", &class_byte, (intptr_t) &SF_rhino_NativeJavaObject_CONVERSION_NONE, "B", 24 },
	{ "prototype", &class_rhino_Scriptable, offsetof(rhino_NativeJavaObject, F_prototype), "Lrhino/Scriptable;", 4 },
	{ "parent", &class_rhino_Scriptable, offsetof(rhino_NativeJavaObject, F_parent), "Lrhino/Scriptable;", 4 },
	{ "javaObject", &class_java_lang_Object, offsetof(rhino_NativeJavaObject, F_javaObject), "Ljava/lang/Object;", 132 },
	{ "staticType", &class_java_lang_Class, offsetof(rhino_NativeJavaObject, F_staticType), "Ljava/lang/Class;", 132 },
	{ "members", &class_rhino_JavaMembers, offsetof(rhino_NativeJavaObject, F_members), "Lrhino/JavaMembers;", 132 },
	{ "fieldAndMethods", &class_java_util_Map, offsetof(rhino_NativeJavaObject, F_fieldAndMethods), "Ljava/util/Map;", 130 },
	{ "isAdapter", &class_boolean, offsetof(rhino_NativeJavaObject, F_isAdapter), "Z", 132 },
	{ "COERCED_INTERFACE_KEY", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeJavaObject_COERCED_INTERFACE_KEY, "Ljava/lang/Object;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeJavaObject, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class, 0, "(Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class_boolean, 0, "(Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Class;Z)V", 1 },
	{ "initMembers", (intptr_t) M_rhino_NativeJavaObject_initMembers, VTABLE_rhino_NativeJavaObject_initMembers, "()V", 4 },
	{ "has", (intptr_t) M_rhino_NativeJavaObject_has_java_lang_String_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaObject_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_NativeJavaObject_has_int_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaObject_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_NativeJavaObject_has_rhino_Symbol_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaObject_has_rhino_Symbol_rhino_Scriptable_R_boolean, "(Lrhino/Symbol;Lrhino/Scriptable;)Z", 1 },
	{ "get", (intptr_t) M_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_NativeJavaObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeJavaObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_NativeJavaObject_get_int_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeJavaObject_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_rhino_NativeJavaObject_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeJavaObject_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_NativeJavaObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeJavaObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_NativeJavaObject_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeJavaObject_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "hasInstance", (intptr_t) M_rhino_NativeJavaObject_hasInstance_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaObject_hasInstance_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1 },
	{ "delete", (intptr_t) M_rhino_NativeJavaObject_delete_java_lang_String, VTABLE_rhino_NativeJavaObject_delete_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "delete", (intptr_t) M_rhino_NativeJavaObject_delete_rhino_Symbol, VTABLE_rhino_NativeJavaObject_delete_rhino_Symbol, "(Lrhino/Symbol;)V", 1 },
	{ "delete", (intptr_t) M_rhino_NativeJavaObject_delete_int, VTABLE_rhino_NativeJavaObject_delete_int, "(I)V", 1 },
	{ "getPrototype", (intptr_t) M_rhino_NativeJavaObject_getPrototype_R_rhino_Scriptable, VTABLE_rhino_NativeJavaObject_getPrototype_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
	{ "setPrototype", (intptr_t) M_rhino_NativeJavaObject_setPrototype_rhino_Scriptable, VTABLE_rhino_NativeJavaObject_setPrototype_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "getParentScope", (intptr_t) M_rhino_NativeJavaObject_getParentScope_R_rhino_Scriptable, VTABLE_rhino_NativeJavaObject_getParentScope_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
	{ "setParentScope", (intptr_t) M_rhino_NativeJavaObject_setParentScope_rhino_Scriptable, VTABLE_rhino_NativeJavaObject_setParentScope_rhino_Scriptable, "(Lrhino/Scriptable;)V", 1 },
	{ "getIds", (intptr_t) M_rhino_NativeJavaObject_getIds_R_Array1_java_lang_Object, VTABLE_rhino_NativeJavaObject_getIds_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "unwrap", (intptr_t) M_rhino_NativeJavaObject_unwrap_R_java_lang_Object, VTABLE_rhino_NativeJavaObject_unwrap_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getClassName", (intptr_t) M_rhino_NativeJavaObject_getClassName_R_java_lang_String, VTABLE_rhino_NativeJavaObject_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getDefaultValue", (intptr_t) M_rhino_NativeJavaObject_getDefaultValue_java_lang_Class_R_java_lang_Object, VTABLE_rhino_NativeJavaObject_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "canConvert", (intptr_t) SM_rhino_NativeJavaObject_canConvert_java_lang_Object_java_lang_Class_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Class;)Z", 9 },
	{ "getConversionWeight", (intptr_t) SM_rhino_NativeJavaObject_getConversionWeight_java_lang_Object_java_lang_Class_R_int, 0, "(Ljava/lang/Object;Ljava/lang/Class;)I", 8 },
	{ "getSizeRank", (intptr_t) SM_rhino_NativeJavaObject_getSizeRank_java_lang_Class_R_int, 0, "(Ljava/lang/Class;)I", 8 },
	{ "getJSTypeCode", (intptr_t) SM_rhino_NativeJavaObject_getJSTypeCode_java_lang_Object_R_int, 0, "(Ljava/lang/Object;)I", 10 },
	{ "coerceTypeImpl", (intptr_t) SM_rhino_NativeJavaObject_coerceTypeImpl_java_lang_Class_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "createInterfaceAdapter", (intptr_t) SM_rhino_NativeJavaObject_createInterfaceAdapter_java_lang_Class_rhino_ScriptableObject_R_java_lang_Object, 0, "(Ljava/lang/Class;Lrhino/ScriptableObject;)Ljava/lang/Object;", 12 },
	{ "coerceToNumber", (intptr_t) SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "toDouble", (intptr_t) SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double, 0, "(Ljava/lang/Object;)D", 10 },
	{ "toInteger", (intptr_t) SM_rhino_NativeJavaObject_toInteger_java_lang_Object_java_lang_Class_double_double_R_long, 0, "(Ljava/lang/Object;Ljava/lang/Class;DD)J", 10 },
	{ "reportConversionError", (intptr_t) SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class, 0, "(Ljava/lang/Object;Ljava/lang/Class;)V", 8 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeJavaObject, 0, "()V", 8 },
};

Class class_rhino_NativeJavaObject{
		.nativeName = (intptr_t) "rhino/NativeJavaObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeJavaObject),
		.classVtable = (intptr_t) vtable_rhino_NativeJavaObject,
		.staticInitializer = (intptr_t) clinit_rhino_NativeJavaObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeJavaObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeJavaObject = registerClass(&class_rhino_NativeJavaObject);

}
