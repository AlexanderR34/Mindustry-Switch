#include "java/nio/channels/spi/SelectorProvider.h"
#include "java/nio/channels/spi/AbstractSelector.h"
#include "java/lang/Object.h"
#include "java/lang/Void.h"
#include "java/nio/channels/spi/SelectorProvider.h"

extern "C" {

jobject SF_java_nio_channels_spi_SelectorProvider_lock;
jobject SF_java_nio_channels_spi_SelectorProvider_provider;

void mark_java_nio_channels_spi_SelectorProvider(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_nio_channels_spi_SelectorProvider_lock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_channels_spi_SelectorProvider_lock)->clazz)->markFunction)((jobject) SF_java_nio_channels_spi_SelectorProvider_lock, mark, depth + 1);
		if (SF_java_nio_channels_spi_SelectorProvider_provider)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_channels_spi_SelectorProvider_provider)->clazz)->markFunction)((jobject) SF_java_nio_channels_spi_SelectorProvider_provider, mark, depth + 1);
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
	auto self = (java_nio_channels_spi_SelectorProvider *) object;
}

jobject SM_java_nio_channels_spi_SelectorProvider_checkPermission_R_java_lang_Void(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/SelectorProvider:checkPermission", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_SelectorProvider(ctx);
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void init_java_nio_channels_spi_SelectorProvider_java_lang_Void(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/SelectorProvider:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_SelectorProvider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_nio_channels_spi_SelectorProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/SelectorProvider:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_SelectorProvider(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_channels_spi_SelectorProvider_checkPermission_R_java_lang_Void(ctx);
	init_java_nio_channels_spi_SelectorProvider_java_lang_Void(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_java_nio_channels_spi_SelectorProvider_loadProviderFromProperty_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/SelectorProvider:loadProviderFromProperty", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_SelectorProvider(ctx);
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_spi_SelectorProvider_provider_R_java_nio_channels_spi_SelectorProvider(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/SelectorProvider:provider", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_SelectorProvider(ctx);
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void clinit_java_nio_channels_spi_SelectorProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/SelectorProvider:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_SelectorProvider(ctx);
	{
	LINE_NUMBER(16);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_java_nio_channels_spi_SelectorProvider(ctx);
	SF_java_nio_channels_spi_SelectorProvider_lock = sp[0].o;
	LINE_NUMBER(17);
	clinit_java_nio_channels_spi_SelectorProvider(ctx);
	SF_java_nio_channels_spi_SelectorProvider_provider = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_spi_SelectorProvider[] {
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
	{ "openSelector", "()Ljava/nio/channels/spi/AbstractSelector;" },
};

static FieldMetadata fields[] {
	{ "lock", &class_java_lang_Object, (intptr_t) &SF_java_nio_channels_spi_SelectorProvider_lock, "Ljava/lang/Object;", 26 },
	{ "provider", &class_java_nio_channels_spi_SelectorProvider, (intptr_t) &SF_java_nio_channels_spi_SelectorProvider_provider, "Ljava/nio/channels/spi/SelectorProvider;", 10 },
};

static MethodMetadata methods[] {
	{ "checkPermission", (intptr_t) SM_java_nio_channels_spi_SelectorProvider_checkPermission_R_java_lang_Void, 0, "()Ljava/lang/Void;", 10 },
	{ "<init>", (intptr_t) init_java_nio_channels_spi_SelectorProvider_java_lang_Void, 0, "(Ljava/lang/Void;)V", 2 },
	{ "<init>", (intptr_t) init_java_nio_channels_spi_SelectorProvider, 0, "()V", 4 },
	{ "loadProviderFromProperty", (intptr_t) SM_java_nio_channels_spi_SelectorProvider_loadProviderFromProperty_R_boolean, 0, "()Z", 10 },
	{ "provider", (intptr_t) SM_java_nio_channels_spi_SelectorProvider_provider_R_java_nio_channels_spi_SelectorProvider, 0, "()Ljava/nio/channels/spi/SelectorProvider;", 9 },
	{ "openSelector", 0, VTABLE_java_nio_channels_spi_SelectorProvider_openSelector_R_java_nio_channels_spi_AbstractSelector, "()Ljava/nio/channels/spi/AbstractSelector;", 1025 },
	{ "<clinit>", (intptr_t) clinit_java_nio_channels_spi_SelectorProvider, 0, "()V", 8 },
};

Class class_java_nio_channels_spi_SelectorProvider{
		.nativeName = (intptr_t) "java/nio/channels/spi/SelectorProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_channels_spi_SelectorProvider),
		.classVtable = (intptr_t) vtable_java_nio_channels_spi_SelectorProvider,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_spi_SelectorProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_spi_SelectorProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_spi_SelectorProvider = registerClass(&class_java_nio_channels_spi_SelectorProvider);

}
