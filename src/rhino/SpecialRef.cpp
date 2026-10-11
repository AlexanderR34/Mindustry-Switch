#include "rhino/SpecialRef.h"
#include "rhino/SpecialRef.h"
#include "rhino/Ref.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "rhino/Context.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/Scriptable.h"
#include "java/lang/RuntimeException.h"
#include "rhino/BaseFunction.h"
#include "rhino/EvaluatorException.h"

extern "C" {

jint SF_rhino_SpecialRef_SPECIAL_NONE;
jint SF_rhino_SpecialRef_SPECIAL_PROTO;
jint SF_rhino_SpecialRef_SPECIAL_PARENT;

void mark_rhino_SpecialRef(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_Ref(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_SpecialRef *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_rhino_SpecialRef(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_Ref(ctx);
	SF_rhino_SpecialRef_SPECIAL_NONE = jint(0);
	SF_rhino_SpecialRef_SPECIAL_PROTO = jint(1);
	SF_rhino_SpecialRef_SPECIAL_PARENT = jint(2);
}

void init_rhino_SpecialRef_rhino_Scriptable_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SpecialRef:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_SpecialRef(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(12);
	init_rhino_Ref(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(14);
	((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_type = (frame[2].i);
	LINE_NUMBER(15);
	((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[3].o);
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_SpecialRef_createSpecial_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_String_R_rhino_Ref(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SpecialRef:createSpecial", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_SpecialRef(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(21);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_undefReadError_java_lang_Object_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[2].o), (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"__proto__"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(27);
	frame[5].i = (jint(1));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"__parent__"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(29);
	frame[5].i = (jint(2));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(31);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[0].o), (jint(5)));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(36);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(39);
	clinit_rhino_SpecialRef(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SpecialRef);
	init_rhino_SpecialRef_rhino_Scriptable_int_java_lang_String(ctx, sp[0].o, (frame[4].o), (frame[5].i), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_SpecialRef_get_rhino_Context_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SpecialRef:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	switch(((jint)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_type)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getObjectProp_rhino_Scriptable_java_lang_String_rhino_Context_R_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_SpecialRef_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SpecialRef:set", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(58);
	switch(((jint)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_type)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_setObjectProp_rhino_Scriptable_java_lang_String_java_lang_Object_rhino_Context_R_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObjectOrNull_rhino_Context_java_lang_Object_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o), (frame[3].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(64);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(67);
	frame[5].o = (frame[4].o);
	}
label_7:;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.cyclic.value"_j));
	sp[1].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(73);
	if (((jint)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[5].o)))(ctx, (frame[5].o));
	frame[5].o = sp[0].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[5].o)))(ctx, (frame[5].o));
	frame[5].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(78);
	if ((frame[5].o) != nullptr) goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(80);
	if (((jint)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_13;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	if ((isInstance(ctx, sp[0].o, &class_rhino_BaseFunction)) != 0) goto label_15;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	((func_rhino_Scriptable_setPrototype_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	((func_rhino_Scriptable_setParentScope_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_setParentScope_rhino_Scriptable, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
label_15:;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_3:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_SpecialRef_has_rhino_Context_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SpecialRef:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	if (((jint)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_1;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)SM_rhino_ScriptRuntime_hasObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_boolean(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_rhino_SpecialRef_delete_rhino_Context_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SpecialRef:delete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	if (((jint)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_1;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((rhino_SpecialRef *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)SM_rhino_ScriptRuntime_deleteObjectElem_rhino_Scriptable_java_lang_Object_rhino_Context_R_boolean(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_SpecialRef[] {
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
	(void *) M_rhino_SpecialRef_has_rhino_Context_R_boolean,
	(void *) M_rhino_SpecialRef_get_rhino_Context_R_java_lang_Object,
	(void *) M_rhino_SpecialRef_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_SpecialRef_delete_rhino_Context_R_boolean,
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
	{ "has", "(Lrhino/Context;)Z" },
	{ "get", "(Lrhino/Context;)Ljava/lang/Object;" },
	{ "set", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "delete", "(Lrhino/Context;)Z" },
};

static FieldMetadata fields[] {
	{ "SPECIAL_NONE", &class_int, (intptr_t) &SF_rhino_SpecialRef_SPECIAL_NONE, "I", 26 },
	{ "SPECIAL_PROTO", &class_int, (intptr_t) &SF_rhino_SpecialRef_SPECIAL_PROTO, "I", 26 },
	{ "SPECIAL_PARENT", &class_int, (intptr_t) &SF_rhino_SpecialRef_SPECIAL_PARENT, "I", 26 },
	{ "target", &class_rhino_Scriptable, offsetof(rhino_SpecialRef, F_target), "Lrhino/Scriptable;", 18 },
	{ "type", &class_int, offsetof(rhino_SpecialRef, F_type), "I", 18 },
	{ "name", &class_java_lang_String, offsetof(rhino_SpecialRef, F_name), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_SpecialRef_rhino_Scriptable_int_java_lang_String, 0, "(Lrhino/Scriptable;ILjava/lang/String;)V", 2 },
	{ "createSpecial", (intptr_t) SM_rhino_SpecialRef_createSpecial_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_String_R_rhino_Ref, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/String;)Lrhino/Ref;", 8 },
	{ "get", (intptr_t) M_rhino_SpecialRef_get_rhino_Context_R_java_lang_Object, VTABLE_rhino_SpecialRef_get_rhino_Context_R_java_lang_Object, "(Lrhino/Context;)Ljava/lang/Object;", 1 },
	{ "set", (intptr_t) M_rhino_SpecialRef_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object, VTABLE_rhino_SpecialRef_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "has", (intptr_t) M_rhino_SpecialRef_has_rhino_Context_R_boolean, VTABLE_rhino_SpecialRef_has_rhino_Context_R_boolean, "(Lrhino/Context;)Z", 1 },
	{ "delete", (intptr_t) M_rhino_SpecialRef_delete_rhino_Context_R_boolean, VTABLE_rhino_SpecialRef_delete_rhino_Context_R_boolean, "(Lrhino/Context;)Z", 1 },
};

Class class_rhino_SpecialRef{
		.nativeName = (intptr_t) "rhino/SpecialRef",
		.parentClass = (intptr_t) &class_rhino_Ref,
		.size = sizeof(rhino_SpecialRef),
		.classVtable = (intptr_t) vtable_rhino_SpecialRef,
		.staticInitializer = (intptr_t) clinit_rhino_SpecialRef,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_SpecialRef,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_SpecialRef = registerClass(&class_rhino_SpecialRef);

}
