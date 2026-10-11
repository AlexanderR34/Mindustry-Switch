#include "rhino/Ref.h"
#include "rhino/Ref.h"
#include "java/lang/Object.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"

extern "C" {


void mark_rhino_Ref(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Ref *) object;
}

void clinit_rhino_Ref(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Ref(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Ref:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Ref(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Ref_has_rhino_Context_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Ref:has", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_rhino_Ref_delete_rhino_Context_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Ref:delete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Ref[] {
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
	(void *) M_rhino_Ref_has_rhino_Context_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_rhino_Ref_delete_rhino_Context_R_boolean,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Ref, 0, "()V", 1 },
	{ "has", (intptr_t) M_rhino_Ref_has_rhino_Context_R_boolean, VTABLE_rhino_Ref_has_rhino_Context_R_boolean, "(Lrhino/Context;)Z", 1 },
	{ "get", 0, VTABLE_rhino_Ref_get_rhino_Context_R_java_lang_Object, "(Lrhino/Context;)Ljava/lang/Object;", 1025 },
	{ "set", 0, VTABLE_rhino_Ref_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "delete", (intptr_t) M_rhino_Ref_delete_rhino_Context_R_boolean, VTABLE_rhino_Ref_delete_rhino_Context_R_boolean, "(Lrhino/Context;)Z", 1 },
};

Class class_rhino_Ref{
		.nativeName = (intptr_t) "rhino/Ref",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Ref),
		.classVtable = (intptr_t) vtable_rhino_Ref,
		.staticInitializer = (intptr_t) clinit_rhino_Ref,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Ref,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Ref = registerClass(&class_rhino_Ref);

}
