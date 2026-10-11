#include "java/nio/channels/SelectableChannel.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channel.h"
#include "java/nio/channels/SelectionKey.h"
#include "java/nio/channels/Selector.h"
#include "java/nio/channels/SelectableChannel.h"
#include "java/nio/channels/spi/SelectorProvider.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"

extern "C" {


void mark_java_nio_channels_SelectableChannel(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_nio_channels_spi_AbstractInterruptibleChannel(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_channels_SelectableChannel *) object;
}

void clinit_java_nio_channels_SelectableChannel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_channels_spi_AbstractInterruptibleChannel(ctx);
}

void init_java_nio_channels_SelectableChannel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectableChannel:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_SelectableChannel(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_nio_channels_spi_AbstractInterruptibleChannel(ctx, (frame[0].o));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_channels_SelectableChannel_register_java_nio_channels_Selector_int_R_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectableChannel:register", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((func_java_nio_channels_SelectableChannel_register_java_nio_channels_Selector_int_java_lang_Object_R_java_nio_channels_SelectionKey) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_SelectableChannel_register_java_nio_channels_Selector_int_java_lang_Object_R_java_nio_channels_SelectionKey])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_SelectableChannel[] {
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
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_close,
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_isOpen_R_boolean,
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_begin,
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_end_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_channels_SelectableChannel_register_java_nio_channels_Selector_int_R_java_nio_channels_SelectionKey,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "begin", "()V" },
	{ "end", "(Z)V" },
	{ "provider", "()Ljava/nio/channels/spi/SelectorProvider;" },
	{ "validOps", "()I" },
	{ "isRegistered", "()Z" },
	{ "keyFor", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;" },
	{ "register", "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;" },
	{ "register", "(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;" },
	{ "configureBlocking", "(Z)Ljava/nio/channels/SelectableChannel;" },
	{ "isBlocking", "()Z" },
	{ "blockingLock", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_nio_channels_Channel, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_SelectableChannel, 0, "()V", 4 },
	{ "provider", 0, VTABLE_java_nio_channels_SelectableChannel_provider_R_java_nio_channels_spi_SelectorProvider, "()Ljava/nio/channels/spi/SelectorProvider;", 1025 },
	{ "validOps", 0, VTABLE_java_nio_channels_SelectableChannel_validOps_R_int, "()I", 1025 },
	{ "isRegistered", 0, VTABLE_java_nio_channels_SelectableChannel_isRegistered_R_boolean, "()Z", 1025 },
	{ "keyFor", 0, VTABLE_java_nio_channels_SelectableChannel_keyFor_java_nio_channels_Selector_R_java_nio_channels_SelectionKey, "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", 1025 },
	{ "register", 0, VTABLE_java_nio_channels_SelectableChannel_register_java_nio_channels_Selector_int_java_lang_Object_R_java_nio_channels_SelectionKey, "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;", 1025 },
	{ "register", (intptr_t) M_java_nio_channels_SelectableChannel_register_java_nio_channels_Selector_int_R_java_nio_channels_SelectionKey, VTABLE_java_nio_channels_SelectableChannel_register_java_nio_channels_Selector_int_R_java_nio_channels_SelectionKey, "(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;", 17 },
	{ "configureBlocking", 0, VTABLE_java_nio_channels_SelectableChannel_configureBlocking_boolean_R_java_nio_channels_SelectableChannel, "(Z)Ljava/nio/channels/SelectableChannel;", 1025 },
	{ "isBlocking", 0, VTABLE_java_nio_channels_SelectableChannel_isBlocking_R_boolean, "()Z", 1025 },
	{ "blockingLock", 0, VTABLE_java_nio_channels_SelectableChannel_blockingLock_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
};

Class class_java_nio_channels_SelectableChannel{
		.nativeName = (intptr_t) "java/nio/channels/SelectableChannel",
		.parentClass = (intptr_t) &class_java_nio_channels_spi_AbstractInterruptibleChannel,
		.size = sizeof(java_nio_channels_SelectableChannel),
		.classVtable = (intptr_t) vtable_java_nio_channels_SelectableChannel,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_SelectableChannel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_SelectableChannel,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_SelectableChannel = registerClass(&class_java_nio_channels_SelectableChannel);

}
