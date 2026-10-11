#include "java/math/BigDecimal_1.h"
#include "java/lang/Object.h"
#include "java/lang/ThreadLocal.h"
#include "java/math/BigDecimal_1.h"
#include "java/math/BigDecimal_StringBuilderHelper.h"

extern "C" {


void mark_java_math_BigDecimal$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ThreadLocal(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_math_BigDecimal$1 *) object;
}

void clinit_java_math_BigDecimal$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ThreadLocal(ctx);
}

void init_java_math_BigDecimal$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$1:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(279);
	init_java_lang_ThreadLocal(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal$1_initialValue_R_java_math_BigDecimal$StringBuilderHelper(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$1:initialValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal$StringBuilderHelper);
	init_java_math_BigDecimal$StringBuilderHelper(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal$1_initialValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$1:initialValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_java_math_BigDecimal$1_initialValue_R_java_math_BigDecimal$StringBuilderHelper) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal$1_initialValue_R_java_math_BigDecimal$StringBuilderHelper])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_math_BigDecimal$1[] {
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
	(void *) M_java_math_BigDecimal$1_initialValue_R_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_get_R_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_set_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_remove,
	(void *) M_java_math_BigDecimal$1_initialValue_R_java_math_BigDecimal$StringBuilderHelper,
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
	{ "initialValue", "()Ljava/lang/Object;" },
	{ "get", "()Ljava/lang/Object;" },
	{ "set", "(Ljava/lang/Object;)V" },
	{ "remove", "()V" },
	{ "initialValue", "()Ljava/math/BigDecimal$StringBuilderHelper;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_math_BigDecimal$1, 0, "()V", 0 },
	{ "initialValue", (intptr_t) M_java_math_BigDecimal$1_initialValue_R_java_math_BigDecimal$StringBuilderHelper, VTABLE_java_math_BigDecimal$1_initialValue_R_java_math_BigDecimal$StringBuilderHelper, "()Ljava/math/BigDecimal$StringBuilderHelper;", 4 },
	{ "initialValue", (intptr_t) M_java_math_BigDecimal$1_initialValue_R_java_lang_Object, VTABLE_java_math_BigDecimal$1_initialValue_R_java_lang_Object, "()Ljava/lang/Object;", 4164 },
};

Class class_java_math_BigDecimal$1{
		.nativeName = (intptr_t) "java/math/BigDecimal$1",
		.parentClass = (intptr_t) &class_java_lang_ThreadLocal,
		.size = sizeof(java_math_BigDecimal$1),
		.classVtable = (intptr_t) vtable_java_math_BigDecimal$1,
		.staticInitializer = (intptr_t) clinit_java_math_BigDecimal$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_math_BigDecimal$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_math_BigDecimal$1 = registerClass(&class_java_math_BigDecimal$1);

}

