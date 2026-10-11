#include "java/util/ResourceBundle.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Enumeration.h"
#include "java/util/Locale.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_java_util_ResourceBundle(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_ResourceBundle *) object;
}

void clinit_java_util_ResourceBundle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_ResourceBundle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ResourceBundle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ResourceBundle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_ResourceBundle_getBundle_java_lang_String_java_util_Locale_java_lang_ClassLoader_R_java_util_ResourceBundle(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ResourceBundle:getBundle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ResourceBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(6);
	clinit_java_util_ResourceBundle(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ResourceBundle);
	init_java_util_ResourceBundle(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_ResourceBundle_getBundle_java_lang_String_java_util_Locale_R_java_util_ResourceBundle(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ResourceBundle:getBundle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ResourceBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(10);
	clinit_java_util_ResourceBundle(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ResourceBundle);
	init_java_util_ResourceBundle(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_ResourceBundle_getBundle_java_lang_String_R_java_util_ResourceBundle(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ResourceBundle:getBundle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ResourceBundle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(14);
	clinit_java_util_ResourceBundle(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ResourceBundle);
	init_java_util_ResourceBundle(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_ResourceBundle_getKeys_R_java_util_Enumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ResourceBundle:getKeys", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_ResourceBundle_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ResourceBundle:getString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_ResourceBundle[] {
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
	(void *) M_java_util_ResourceBundle_getKeys_R_java_util_Enumeration,
	(void *) M_java_util_ResourceBundle_getString_java_lang_String_R_java_lang_String,
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
	{ "getKeys", "()Ljava/util/Enumeration;" },
	{ "getString", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_ResourceBundle, 0, "()V", 1 },
	{ "getBundle", (intptr_t) SM_java_util_ResourceBundle_getBundle_java_lang_String_java_util_Locale_java_lang_ClassLoader_R_java_util_ResourceBundle, 0, "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;", 9 },
	{ "getBundle", (intptr_t) SM_java_util_ResourceBundle_getBundle_java_lang_String_java_util_Locale_R_java_util_ResourceBundle, 0, "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", 9 },
	{ "getBundle", (intptr_t) SM_java_util_ResourceBundle_getBundle_java_lang_String_R_java_util_ResourceBundle, 0, "(Ljava/lang/String;)Ljava/util/ResourceBundle;", 9 },
	{ "getKeys", (intptr_t) M_java_util_ResourceBundle_getKeys_R_java_util_Enumeration, VTABLE_java_util_ResourceBundle_getKeys_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 1 },
	{ "getString", (intptr_t) M_java_util_ResourceBundle_getString_java_lang_String_R_java_lang_String, VTABLE_java_util_ResourceBundle_getString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
};

Class class_java_util_ResourceBundle{
		.nativeName = (intptr_t) "java/util/ResourceBundle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_ResourceBundle),
		.classVtable = (intptr_t) vtable_java_util_ResourceBundle,
		.staticInitializer = (intptr_t) clinit_java_util_ResourceBundle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_ResourceBundle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_ResourceBundle = registerClass(&class_java_util_ResourceBundle);

}
