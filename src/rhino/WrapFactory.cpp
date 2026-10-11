#include "rhino/WrapFactory.h"
#include "java/lang/Integer.h"
#include "rhino/WrapFactory.h"
#include "java/lang/Boolean.h"
#include "rhino/NativeJavaClass.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "java/lang/Void.h"
#include "java/lang/Float.h"
#include "java/lang/Long.h"
#include "rhino/NativeJavaArray.h"
#include "rhino/Undefined.h"
#include "rhino/NativeJavaObject.h"
#include "java/lang/Short.h"
#include "java/lang/Object.h"
#include "java/lang/Character.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {


void mark_rhino_WrapFactory(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_WrapFactory *) object;
}

void clinit_rhino_WrapFactory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_WrapFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/WrapFactory:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_WrapFactory(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(151);
	((rhino_WrapFactory *) NULL_CHECK((frame[0].o)))->F_javaPrimitiveWrap = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/WrapFactory:wrap", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(37);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[3].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Scriptable)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(41);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = frame[4].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(43);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[4].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_java_lang_Character_charValue_R_char) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[3].o))))->vtable)[VTABLE_java_lang_Character_charValue_R_char])(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[3].o))));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_3:;
	{
	LINE_NUMBER(48);
	jint temp0 = (jint)((func_rhino_WrapFactory_isJavaPrimitiveWrap_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_WrapFactory_isJavaPrimitiveWrap_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(49);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_String)) != 0) goto label_11;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Boolean)) != 0) goto label_11;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Integer)) != 0) goto label_11;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Short)) != 0) goto label_11;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Long)) != 0) goto label_11;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Float)) != 0) goto label_11;
	}
	{
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Double)) == 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_12:;
	{
	LINE_NUMBER(57);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Character)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_java_lang_Character_charValue_R_char) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[3].o))))->vtable)[VTABLE_java_lang_Character_charValue_R_char])(ctx, (checkCast(ctx, &class_java_lang_Character, (frame[3].o))));
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(62);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)SM_rhino_NativeJavaArray_wrap_rhino_Scriptable_java_lang_Object_R_rhino_NativeJavaArray(ctx, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_WrapFactory_wrapNewObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/WrapFactory:wrapNewObject", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(76);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Scriptable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, (frame[3].o)));
	}
label_1:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)SM_rhino_NativeJavaArray_wrap_rhino_Scriptable_java_lang_Object_R_rhino_NativeJavaArray(ctx, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/WrapFactory:wrapAsJavaObject", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(105);
	clinit_rhino_NativeJavaObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaObject);
	init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/WrapFactory:wrapJavaClass", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(122);
	clinit_rhino_NativeJavaClass(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaClass);
	init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class(ctx, sp[0].o, (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_WrapFactory_isJavaPrimitiveWrap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/WrapFactory:isJavaPrimitiveWrap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return ((jint)((rhino_WrapFactory *) NULL_CHECK((frame[0].o)))->F_javaPrimitiveWrap);
	}

	popStackFrame(ctx);
}

void M_rhino_WrapFactory_setJavaPrimitiveWrap_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/WrapFactory:setJavaPrimitiveWrap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(145);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_rhino_Context_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_isSealed_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	LINE_NUMBER(146);
	SM_rhino_Context_onSealedMutation(ctx);
label_2:;
	{
	LINE_NUMBER(148);
	((rhino_WrapFactory *) NULL_CHECK((frame[0].o)))->F_javaPrimitiveWrap = (frame[1].i);
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_WrapFactory[] {
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
	(void *) M_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_WrapFactory_wrapNewObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable,
	(void *) M_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable,
	(void *) M_rhino_WrapFactory_isJavaPrimitiveWrap_R_boolean,
	(void *) M_rhino_WrapFactory_setJavaPrimitiveWrap_boolean,
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
	{ "wrap", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "wrapNewObject", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "wrapAsJavaObject", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Class;)Lrhino/Scriptable;" },
	{ "wrapJavaClass", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Class;)Lrhino/Scriptable;" },
	{ "isJavaPrimitiveWrap", "()Z" },
	{ "setJavaPrimitiveWrap", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "javaPrimitiveWrap", &class_boolean, offsetof(rhino_WrapFactory, F_javaPrimitiveWrap), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_WrapFactory, 0, "()V", 1 },
	{ "wrap", (intptr_t) M_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object, VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "wrapNewObject", (intptr_t) M_rhino_WrapFactory_wrapNewObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_WrapFactory_wrapNewObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "wrapAsJavaObject", (intptr_t) M_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable, VTABLE_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/Class;)Lrhino/Scriptable;", 1 },
	{ "wrapJavaClass", (intptr_t) M_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable, VTABLE_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Class;)Lrhino/Scriptable;", 1 },
	{ "isJavaPrimitiveWrap", (intptr_t) M_rhino_WrapFactory_isJavaPrimitiveWrap_R_boolean, VTABLE_rhino_WrapFactory_isJavaPrimitiveWrap_R_boolean, "()Z", 17 },
	{ "setJavaPrimitiveWrap", (intptr_t) M_rhino_WrapFactory_setJavaPrimitiveWrap_boolean, VTABLE_rhino_WrapFactory_setJavaPrimitiveWrap_boolean, "(Z)V", 17 },
};

Class class_rhino_WrapFactory{
		.nativeName = (intptr_t) "rhino/WrapFactory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_WrapFactory),
		.classVtable = (intptr_t) vtable_rhino_WrapFactory,
		.staticInitializer = (intptr_t) clinit_rhino_WrapFactory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_WrapFactory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_WrapFactory = registerClass(&class_rhino_WrapFactory);

}
