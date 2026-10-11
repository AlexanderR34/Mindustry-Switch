#include "java/nio/channels/spi/AbstractSelectionKey.h"
#include "java/nio/channels/spi/AbstractSelector.h"
#include "java/lang/Object.h"
#include "java/nio/channels/SelectionKey.h"
#include "java/nio/channels/spi/AbstractSelectionKey.h"
#include "java/nio/channels/Selector.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_nio_channels_spi_AbstractSelectionKey(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_nio_channels_SelectionKey(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_channels_spi_AbstractSelectionKey *) object;
}

void clinit_java_nio_channels_spi_AbstractSelectionKey(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_channels_SelectionKey(ctx);
}

void init_java_nio_channels_spi_AbstractSelectionKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectionKey:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_spi_AbstractSelectionKey(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_nio_channels_SelectionKey(ctx, (frame[0].o));
	LINE_NUMBER(6);
	((java_nio_channels_spi_AbstractSelectionKey *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_nio_channels_spi_AbstractSelectionKey_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectionKey:isValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return ((jint)((java_nio_channels_spi_AbstractSelectionKey *) NULL_CHECK((frame[0].o)))->F_valid);
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelectionKey_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectionKey:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	((java_nio_channels_spi_AbstractSelectionKey *) NULL_CHECK((frame[0].o)))->F_valid = (jint(0));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_spi_AbstractSelectionKey_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/spi/AbstractSelectionKey:cancel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(21);
	if (((jint)((java_nio_channels_spi_AbstractSelectionKey *) NULL_CHECK((frame[0].o)))->F_valid) == 0) goto label_7;
	}
	{
	LINE_NUMBER(22);
	((java_nio_channels_spi_AbstractSelectionKey *) NULL_CHECK((frame[0].o)))->F_valid = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = (jobject)((func_java_nio_channels_spi_AbstractSelectionKey_selector_R_java_nio_channels_Selector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelectionKey_selector_R_java_nio_channels_Selector])(ctx, (frame[0].o));
	((func_java_nio_channels_spi_AbstractSelector_cancel_java_nio_channels_SelectionKey) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_nio_channels_spi_AbstractSelector, sp[0].o)))->vtable)[VTABLE_java_nio_channels_spi_AbstractSelector_cancel_java_nio_channels_SelectionKey])(ctx, (checkCast(ctx, &class_java_nio_channels_spi_AbstractSelector, sp[0].o)), (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(26);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_10:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_spi_AbstractSelectionKey[] {
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
	(void *) M_java_nio_channels_spi_AbstractSelectionKey_isValid_R_boolean,
	(void *) M_java_nio_channels_spi_AbstractSelectionKey_cancel,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_channels_SelectionKey_interestOpsOr_int_R_int,
	(void *) M_java_nio_channels_SelectionKey_interestOpsAnd_int_R_int,
	(void *) nullptr,
	(void *) M_java_nio_channels_SelectionKey_isReadable_R_boolean,
	(void *) M_java_nio_channels_SelectionKey_isWritable_R_boolean,
	(void *) M_java_nio_channels_SelectionKey_isConnectable_R_boolean,
	(void *) M_java_nio_channels_SelectionKey_isAcceptable_R_boolean,
	(void *) M_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object,
	(void *) M_java_nio_channels_SelectionKey_attachment_R_java_lang_Object,
	(void *) M_java_nio_channels_spi_AbstractSelectionKey_invalidate,
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
	{ "channel", "()Ljava/nio/channels/SelectableChannel;" },
	{ "selector", "()Ljava/nio/channels/Selector;" },
	{ "isValid", "()Z" },
	{ "cancel", "()V" },
	{ "interestOps", "()I" },
	{ "interestOps", "(I)Ljava/nio/channels/SelectionKey;" },
	{ "interestOpsOr", "(I)I" },
	{ "interestOpsAnd", "(I)I" },
	{ "readyOps", "()I" },
	{ "isReadable", "()Z" },
	{ "isWritable", "()Z" },
	{ "isConnectable", "()Z" },
	{ "isAcceptable", "()Z" },
	{ "attach", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "attachment", "()Ljava/lang/Object;" },
	{ "invalidate", "()V" },
};

static FieldMetadata fields[] {
	{ "valid", &class_boolean, offsetof(java_nio_channels_spi_AbstractSelectionKey, F_valid), "Z", 66 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_spi_AbstractSelectionKey, 0, "()V", 4 },
	{ "isValid", (intptr_t) M_java_nio_channels_spi_AbstractSelectionKey_isValid_R_boolean, VTABLE_java_nio_channels_spi_AbstractSelectionKey_isValid_R_boolean, "()Z", 17 },
	{ "invalidate", (intptr_t) M_java_nio_channels_spi_AbstractSelectionKey_invalidate, VTABLE_java_nio_channels_spi_AbstractSelectionKey_invalidate, "()V", 0 },
	{ "cancel", (intptr_t) M_java_nio_channels_spi_AbstractSelectionKey_cancel, VTABLE_java_nio_channels_spi_AbstractSelectionKey_cancel, "()V", 17 },
};

Class class_java_nio_channels_spi_AbstractSelectionKey{
		.nativeName = (intptr_t) "java/nio/channels/spi/AbstractSelectionKey",
		.parentClass = (intptr_t) &class_java_nio_channels_SelectionKey,
		.size = sizeof(java_nio_channels_spi_AbstractSelectionKey),
		.classVtable = (intptr_t) vtable_java_nio_channels_spi_AbstractSelectionKey,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_spi_AbstractSelectionKey,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_spi_AbstractSelectionKey,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_spi_AbstractSelectionKey = registerClass(&class_java_nio_channels_spi_AbstractSelectionKey);

}
