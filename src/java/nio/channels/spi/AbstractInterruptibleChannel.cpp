#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channel.h"
#include "java/nio/channels/InterruptibleChannel.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_nio_channels_spi_AbstractInterruptibleChannel(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_channels_spi_AbstractInterruptibleChannel *) object;
	if (self->F_closeLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_closeLock)->clazz)->markFunction)((jobject) self->F_closeLock, mark, depth + 1);
	if (self->F_interrupted)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interrupted)->clazz)->markFunction)((jobject) self->F_interrupted, mark, depth + 1);
}

void clinit_java_nio_channels_spi_AbstractInterruptibleChannel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_nio_channels_spi_AbstractInterruptibleChannel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractInterruptibleChannel:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_AbstractInterruptibleChannel(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_nio_channels_spi_AbstractInterruptibleChannel *) NULL_CHECK(sp[0].o))->F_closeLock = (jref) sp[1].o;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractInterruptibleChannel_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractInterruptibleChannel:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_nio_channels_spi_AbstractInterruptibleChannel_isOpen_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractInterruptibleChannel:isOpen", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	if (((jint)((java_nio_channels_spi_AbstractInterruptibleChannel *) NULL_CHECK((frame[0].o)))->F_closed) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractInterruptibleChannel_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractInterruptibleChannel:begin", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractInterruptibleChannel_end_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractInterruptibleChannel:end", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_spi_AbstractInterruptibleChannel[] {
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
};

static jclass interfaces[] { &class_java_nio_channels_Channel, &class_java_nio_channels_InterruptibleChannel, };

static FieldMetadata fields[] {
	{ "closeLock", &class_java_lang_Object, offsetof(java_nio_channels_spi_AbstractInterruptibleChannel, F_closeLock), "Ljava/lang/Object;", 18 },
	{ "closed", &class_boolean, offsetof(java_nio_channels_spi_AbstractInterruptibleChannel, F_closed), "Z", 66 },
	{ "interrupted", &class_java_lang_Thread, offsetof(java_nio_channels_spi_AbstractInterruptibleChannel, F_interrupted), "Ljava/lang/Thread;", 66 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_spi_AbstractInterruptibleChannel, 0, "()V", 4 },
	{ "close", (intptr_t) M_java_nio_channels_spi_AbstractInterruptibleChannel_close, VTABLE_java_nio_channels_spi_AbstractInterruptibleChannel_close, "()V", 17 },
	{ "isOpen", (intptr_t) M_java_nio_channels_spi_AbstractInterruptibleChannel_isOpen_R_boolean, VTABLE_java_nio_channels_spi_AbstractInterruptibleChannel_isOpen_R_boolean, "()Z", 17 },
	{ "begin", (intptr_t) M_java_nio_channels_spi_AbstractInterruptibleChannel_begin, VTABLE_java_nio_channels_spi_AbstractInterruptibleChannel_begin, "()V", 20 },
	{ "end", (intptr_t) M_java_nio_channels_spi_AbstractInterruptibleChannel_end_boolean, VTABLE_java_nio_channels_spi_AbstractInterruptibleChannel_end_boolean, "(Z)V", 20 },
};

Class class_java_nio_channels_spi_AbstractInterruptibleChannel{
		.nativeName = (intptr_t) "java/nio/channels/spi/AbstractInterruptibleChannel",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_channels_spi_AbstractInterruptibleChannel),
		.classVtable = (intptr_t) vtable_java_nio_channels_spi_AbstractInterruptibleChannel,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_spi_AbstractInterruptibleChannel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_spi_AbstractInterruptibleChannel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_spi_AbstractInterruptibleChannel = registerClass(&class_java_nio_channels_spi_AbstractInterruptibleChannel);

}
