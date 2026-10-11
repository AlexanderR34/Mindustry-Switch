#include "java/nio/channels/Selector.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/function/Consumer.h"
#include "java/nio/channels/Selector.h"
#include "java/io/Closeable.h"
#include "java/util/Objects.h"
#include "java/nio/channels/spi/SelectorProvider.h"

extern "C" {


void mark_java_nio_channels_Selector(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_channels_Selector *) object;
}

void clinit_java_nio_channels_Selector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_nio_channels_Selector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Selector:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Selector(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Selector_open_R_java_nio_channels_Selector(jcontext ctx) {
	clinit_java_nio_channels_Selector(ctx);
	auto sel = gcAlloc(ctx, &class_java_nio_channels_Selector);
	init_java_nio_channels_Selector(ctx, sel);
	return sel;
}

jint M_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Selector:select", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(34);
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(35);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Negative timeout"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	jint temp0 = (jint)M_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_function_Consumer, sp[1].o)), (frame[2].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_Selector_select_java_util_function_Consumer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Selector:select", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	jint temp0 = (jint)((func_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int])(ctx, (frame[0].o), (frame[1].o), (jlong(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_Selector_selectNow_java_util_function_Consumer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Selector:selectNow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	jint temp0 = (jint)M_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int(ctx, sp[0].o, (checkCast(ctx, &class_java_util_function_Consumer, sp[1].o)), (jlong(-1ll)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Selector:doSelect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_Selector[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int,
	(void *) M_java_nio_channels_Selector_select_java_util_function_Consumer_R_int,
	(void *) M_java_nio_channels_Selector_selectNow_java_util_function_Consumer_R_int,
	(void *) M_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int,
	(void *) nullptr,
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
	{ "close", "()V" },
	{ "isOpen", "()Z" },
	{ "provider", "()Ljava/nio/channels/spi/SelectorProvider;" },
	{ "keys", "()Ljava/util/Set;" },
	{ "selectedKeys", "()Ljava/util/Set;" },
	{ "selectNow", "()I" },
	{ "select", "(J)I" },
	{ "select", "()I" },
	{ "select", "(Ljava/util/function/Consumer;J)I" },
	{ "select", "(Ljava/util/function/Consumer;)I" },
	{ "selectNow", "(Ljava/util/function/Consumer;)I" },
	{ "doSelect", "(Ljava/util/function/Consumer;J)I" },
	{ "wakeup", "()Ljava/nio/channels/Selector;" },
};

static jclass interfaces[] { &class_java_io_Closeable, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_Selector, 0, "()V", 4 },
	{ "open", (intptr_t) SM_java_nio_channels_Selector_open_R_java_nio_channels_Selector, 0, "()Ljava/nio/channels/Selector;", 9 },
	{ "isOpen", 0, VTABLE_java_nio_channels_Selector_isOpen_R_boolean, "()Z", 1025 },
	{ "provider", 0, VTABLE_java_nio_channels_Selector_provider_R_java_nio_channels_spi_SelectorProvider, "()Ljava/nio/channels/spi/SelectorProvider;", 1025 },
	{ "keys", 0, VTABLE_java_nio_channels_Selector_keys_R_java_util_Set, "()Ljava/util/Set;", 1025 },
	{ "selectedKeys", 0, VTABLE_java_nio_channels_Selector_selectedKeys_R_java_util_Set, "()Ljava/util/Set;", 1025 },
	{ "selectNow", 0, VTABLE_java_nio_channels_Selector_selectNow_R_int, "()I", 1025 },
	{ "select", 0, VTABLE_java_nio_channels_Selector_select_long_R_int, "(J)I", 1025 },
	{ "select", 0, VTABLE_java_nio_channels_Selector_select_R_int, "()I", 1025 },
	{ "select", (intptr_t) M_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int, VTABLE_java_nio_channels_Selector_select_java_util_function_Consumer_long_R_int, "(Ljava/util/function/Consumer;J)I", 1 },
	{ "select", (intptr_t) M_java_nio_channels_Selector_select_java_util_function_Consumer_R_int, VTABLE_java_nio_channels_Selector_select_java_util_function_Consumer_R_int, "(Ljava/util/function/Consumer;)I", 1 },
	{ "selectNow", (intptr_t) M_java_nio_channels_Selector_selectNow_java_util_function_Consumer_R_int, VTABLE_java_nio_channels_Selector_selectNow_java_util_function_Consumer_R_int, "(Ljava/util/function/Consumer;)I", 1 },
	{ "doSelect", (intptr_t) M_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int, VTABLE_java_nio_channels_Selector_doSelect_java_util_function_Consumer_long_R_int, "(Ljava/util/function/Consumer;J)I", 2 },
	{ "wakeup", 0, VTABLE_java_nio_channels_Selector_wakeup_R_java_nio_channels_Selector, "()Ljava/nio/channels/Selector;", 1025 },
	{ "close", 0, VTABLE_java_nio_channels_Selector_close, "()V", 1025 },
};

Class class_java_nio_channels_Selector{
		.nativeName = (intptr_t) "java/nio/channels/Selector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_channels_Selector),
		.classVtable = (intptr_t) vtable_java_nio_channels_Selector,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_Selector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_Selector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_Selector = registerClass(&class_java_nio_channels_Selector);

}
