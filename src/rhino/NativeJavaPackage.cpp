#include "rhino/NativeJavaPackage.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/StringBuilder.h"
#include "rhino/WrapFactory.h"
#include "java/lang/annotation/Annotation.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "java/lang/reflect/Constructor.h"
#include "rhino/EvaluatorException.h"
#include "java/util/Set.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "rhino/ClassShutter.h"
#include "rhino/NativeJavaPackage.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "java/util/HashSet.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_rhino_NativeJavaPackage(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_ScriptableObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeJavaPackage *) object;
	if (self->F_packageName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packageName)->clazz)->markFunction)((jobject) self->F_packageName, mark, depth + 1);
	if (self->F_classLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classLoader)->clazz)->markFunction)((jobject) self->F_classLoader, mark, depth + 1);
	if (self->F_negativeCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_negativeCache)->clazz)->markFunction)((jobject) self->F_negativeCache, mark, depth + 1);
}

void clinit_rhino_NativeJavaPackage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ScriptableObject(ctx);
}

void init_rhino_NativeJavaPackage_java_lang_String_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaPackage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	init_rhino_ScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_negativeCache = (jref) (jobject(nullptr));
	LINE_NUMBER(23);
	((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_packageName = (jref) (frame[1].o);
	LINE_NUMBER(24);
	((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_classLoader = (jref) (frame[2].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJavaPackage_boolean_java_lang_String_java_lang_ClassLoader(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaPackage(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(29);
	init_rhino_NativeJavaPackage_java_lang_String_java_lang_ClassLoader(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaPackage_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"JavaPackage"_j)));
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaPackage_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaPackage_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_NativeJavaPackage_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:put", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeJavaPackage_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:put", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.pkg.int"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaPackage_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_rhino_NativeJavaPackage_getPkgProperty_java_lang_String_rhino_Scriptable_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaPackage_getPkgProperty_java_lang_String_rhino_Scriptable_boolean_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaPackage_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	clinit_rhino_NativeJavaPackage(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaPackage_forcePackage_java_lang_String_rhino_Scriptable_R_rhino_NativeJavaPackage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:forcePackage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)M_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(71);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_rhino_NativeJavaPackage)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_NativeJavaPackage, (frame[3].o)));
	}
label_2:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_packageName;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	INST_ALOAD(1);
	goto label_5;
label_4:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_packageName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(77);
	clinit_rhino_NativeJavaPackage(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaPackage);
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_classLoader;
	init_rhino_NativeJavaPackage_java_lang_String_java_lang_ClassLoader(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(78);
	SM_rhino_ScriptRuntime_setObjectProtoAndParent_rhino_ScriptableObject_rhino_Scriptable(ctx, (frame[5].o), (frame[2].o));
	LINE_NUMBER(79);
	M_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[0].o), (frame[5].o));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaPackage_getPkgProperty_java_lang_String_rhino_Scriptable_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:getPkgProperty", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)M_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = frame[4].o;
	clinit_rhino_NativeJavaPackage(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(87);
	popStackFrame(ctx, self);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_negativeCache;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_negativeCache;
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(90);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_packageName;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	INST_ALOAD(1);
	goto label_7;
label_6:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_packageName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (46));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[6].o = sp[0].o;
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_rhino_Context_getClassShutter_R_rhino_ClassShutter) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Context_getClassShutter_R_rhino_ClassShutter])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(97);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(98);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_rhino_ClassShutter_visibleToScripts_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ClassShutter, INDEX_rhino_ClassShutter_visibleToScripts_java_lang_String_R_boolean, (frame[7].o)))(ctx, (frame[7].o), (frame[5].o));
	if (temp0 == 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_classLoader;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_classLoader;
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_ClassLoader_java_lang_String_R_java_lang_Class(ctx, sp[0].o, (frame[5].o));
	frame[9].o = sp[0].o;
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, (frame[5].o));
	frame[9].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(105);
	if ((frame[9].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[6].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(107);
	sp[0].o = frame[10].o;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[9].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_rhino_NativeJavaPackage_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaPackage_getPrototype_R_rhino_Scriptable])(ctx, (frame[0].o));
	((func_rhino_Scriptable_setPrototype_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(111);
	if ((frame[8].o) != nullptr) goto label_21;
	}
	{
	LINE_NUMBER(112);
	if ((frame[3].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(114);
	clinit_rhino_NativeJavaPackage(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaPackage);
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_classLoader;
	init_rhino_NativeJavaPackage_java_lang_String_java_lang_ClassLoader(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(115);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_rhino_NativeJavaPackage_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaPackage_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	SM_rhino_ScriptRuntime_setObjectProtoAndParent_rhino_ScriptableObject_rhino_Scriptable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	frame[8].o = (frame[9].o);
	LINE_NUMBER(117);
	goto label_21;
	}
label_23:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_negativeCache;
	if (sp[0].o != nullptr) goto label_28;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_java_util_HashSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[1].o);
	((rhino_NativeJavaPackage *) NULL_CHECK(sp[0].o))->F_negativeCache = (jref) sp[1].o;
	}
label_28:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_negativeCache;
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
label_21:;
	{
	LINE_NUMBER(124);
	if ((frame[8].o) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(127);
	M_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[8].o));
	}
label_30:;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx, self);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaPackage_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:getDefaultValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_rhino_NativeJavaPackage_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaPackage_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaPackage_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[JavaPackage "_j))));
	sp[1].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_packageName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaPackage_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(144);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeJavaPackage)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(145);
	frame[2].o = (checkCast(ctx, &class_rhino_NativeJavaPackage, (frame[1].o)));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_packageName;
	sp[1].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[2].o)))->F_packageName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_classLoader;
	sp[1].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[2].o)))->F_classLoader;
	if (sp[0].o != sp[1].o) goto label_4;
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
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeJavaPackage_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaPackage:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_packageName;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_classLoader;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_NativeJavaPackage *) NULL_CHECK((frame[0].o)))->F_classLoader;
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	jint temp0 = sp[0].i ^ sp[1].i;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_rhino_NativeJavaPackage;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method <init>
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_rhino_NativeJavaPackage[] {
	(void *) M_rhino_NativeJavaPackage_hashCode_R_int,
	(void *) M_rhino_NativeJavaPackage_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeJavaPackage_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeJavaPackage_getClassName_R_java_lang_String,
	(void *) M_rhino_NativeJavaPackage_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaPackage_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaPackage_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
	(void *) M_rhino_ScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_ScriptableObject_setAttributes_java_lang_String_int,
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
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
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
	(void *) M_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeJavaPackage_forcePackage_java_lang_String_rhino_Scriptable_R_rhino_NativeJavaPackage,
	(void *) M_rhino_NativeJavaPackage_getPkgProperty_java_lang_String_rhino_Scriptable_boolean_R_java_lang_Object,
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
	{ "forcePackage", "(Ljava/lang/String;Lrhino/Scriptable;)Lrhino/NativeJavaPackage;" },
	{ "getPkgProperty", "(Ljava/lang/String;Lrhino/Scriptable;Z)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "packageName", &class_java_lang_String, offsetof(rhino_NativeJavaPackage, F_packageName), "Ljava/lang/String;", 18 },
	{ "classLoader", &class_java_lang_ClassLoader, offsetof(rhino_NativeJavaPackage, F_classLoader), "Ljava/lang/ClassLoader;", 130 },
	{ "negativeCache", &class_java_util_Set, offsetof(rhino_NativeJavaPackage, F_negativeCache), "Ljava/util/Set;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeJavaPackage_java_lang_String_java_lang_ClassLoader, 0, "(Ljava/lang/String;Ljava/lang/ClassLoader;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_NativeJavaPackage_boolean_java_lang_String_java_lang_ClassLoader, 0, "(ZLjava/lang/String;Ljava/lang/ClassLoader;)V", 131073 },
	{ "getClassName", (intptr_t) M_rhino_NativeJavaPackage_getClassName_R_java_lang_String, VTABLE_rhino_NativeJavaPackage_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "has", (intptr_t) M_rhino_NativeJavaPackage_has_java_lang_String_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaPackage_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_NativeJavaPackage_has_int_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaPackage_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1 },
	{ "put", (intptr_t) M_rhino_NativeJavaPackage_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeJavaPackage_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_NativeJavaPackage_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeJavaPackage_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "get", (intptr_t) M_rhino_NativeJavaPackage_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeJavaPackage_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_NativeJavaPackage_get_int_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeJavaPackage_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "forcePackage", (intptr_t) M_rhino_NativeJavaPackage_forcePackage_java_lang_String_rhino_Scriptable_R_rhino_NativeJavaPackage, VTABLE_rhino_NativeJavaPackage_forcePackage_java_lang_String_rhino_Scriptable_R_rhino_NativeJavaPackage, "(Ljava/lang/String;Lrhino/Scriptable;)Lrhino/NativeJavaPackage;", 0 },
	{ "getPkgProperty", (intptr_t) M_rhino_NativeJavaPackage_getPkgProperty_java_lang_String_rhino_Scriptable_boolean_R_java_lang_Object, VTABLE_rhino_NativeJavaPackage_getPkgProperty_java_lang_String_rhino_Scriptable_boolean_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Z)Ljava/lang/Object;", 32 },
	{ "getDefaultValue", (intptr_t) M_rhino_NativeJavaPackage_getDefaultValue_java_lang_Class_R_java_lang_Object, VTABLE_rhino_NativeJavaPackage_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_rhino_NativeJavaPackage_toString_R_java_lang_String, VTABLE_rhino_NativeJavaPackage_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_rhino_NativeJavaPackage_equals_java_lang_Object_R_boolean, VTABLE_rhino_NativeJavaPackage_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_NativeJavaPackage_hashCode_R_int, VTABLE_rhino_NativeJavaPackage_hashCode_R_int, "()I", 1 },
};

Class class_rhino_NativeJavaPackage{
		.nativeName = (intptr_t) "rhino/NativeJavaPackage",
		.parentClass = (intptr_t) &class_rhino_ScriptableObject,
		.size = sizeof(rhino_NativeJavaPackage),
		.classVtable = (intptr_t) vtable_rhino_NativeJavaPackage,
		.staticInitializer = (intptr_t) clinit_rhino_NativeJavaPackage,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_rhino_NativeJavaPackage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 87,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeJavaPackage = registerClass(&class_rhino_NativeJavaPackage);

}
