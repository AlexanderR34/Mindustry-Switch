#include "java/nio/channels/SelectionKey.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h"
#include "java/lang/String.h"
#include "java/nio/channels/SelectionKey.h"
#include "java/nio/channels/SelectableChannel.h"
#include "java/nio/channels/Selector.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jint SF_java_nio_channels_SelectionKey_OP_READ;
jint SF_java_nio_channels_SelectionKey_OP_WRITE;
jint SF_java_nio_channels_SelectionKey_OP_CONNECT;
jint SF_java_nio_channels_SelectionKey_OP_ACCEPT;
jobject SF_java_nio_channels_SelectionKey_attachmentUpdater;

void mark_java_nio_channels_SelectionKey(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_nio_channels_SelectionKey_attachmentUpdater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_channels_SelectionKey_attachmentUpdater)->clazz)->markFunction)((jobject) SF_java_nio_channels_SelectionKey_attachmentUpdater, mark, depth + 1);
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
	auto self = (java_nio_channels_SelectionKey *) object;
	if (self->F_attachment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attachment)->clazz)->markFunction)((jobject) self->F_attachment, mark, depth + 1);
}

void init_java_nio_channels_SelectionKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_SelectionKey(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_SelectionKey_interestOpsOr_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:interestOpsOr", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_java_nio_channels_SelectionKey_interestOps_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_interestOps_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_java_nio_channels_SelectionKey_interestOps_int_R_java_nio_channels_SelectionKey) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_interestOps_int_R_java_nio_channels_SelectionKey])(ctx, (frame[0].o), ((frame[3].i) | (frame[1].i)));
	LINE_NUMBER(32);
	jint temp1 = frame[3].i;
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(33);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jint M_java_nio_channels_SelectionKey_interestOpsAnd_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:interestOpsAnd", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(38);
	jint temp0 = (jint)((func_java_nio_channels_SelectionKey_interestOps_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_interestOps_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_java_nio_channels_SelectionKey_interestOps_int_R_java_nio_channels_SelectionKey) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_interestOps_int_R_java_nio_channels_SelectionKey])(ctx, (frame[0].o), ((frame[3].i) & (frame[1].i)));
	LINE_NUMBER(40);
	jint temp1 = frame[3].i;
	monitorExit(ctx, (frame[2].o));
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(41);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_nio_channels_SelectionKey_isReadable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:isReadable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_java_nio_channels_SelectionKey_readyOps_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_readyOps_R_int])(ctx, (frame[0].o));
	if ((temp0 & (jint(1))) == 0) goto label_1;
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

jbool M_java_nio_channels_SelectionKey_isWritable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:isWritable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	jint temp0 = (jint)((func_java_nio_channels_SelectionKey_readyOps_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_readyOps_R_int])(ctx, (frame[0].o));
	if ((temp0 & (jint(4))) == 0) goto label_1;
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

jbool M_java_nio_channels_SelectionKey_isConnectable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:isConnectable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	jint temp0 = (jint)((func_java_nio_channels_SelectionKey_readyOps_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_readyOps_R_int])(ctx, (frame[0].o));
	if ((temp0 & (8)) == 0) goto label_1;
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

jbool M_java_nio_channels_SelectionKey_isAcceptable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:isAcceptable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	jint temp0 = (jint)((func_java_nio_channels_SelectionKey_readyOps_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_SelectionKey_readyOps_R_int])(ctx, (frame[0].o));
	if ((temp0 & (16)) == 0) goto label_1;
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

jobject M_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:attach", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	clinit_java_nio_channels_SelectionKey(ctx);
	sp[0].o = (jobject)SF_java_nio_channels_SelectionKey_attachmentUpdater;
	sp[0].o = (jobject)((func_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_channels_SelectionKey_attachment_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:attachment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((java_nio_channels_SelectionKey *) NULL_CHECK((frame[0].o)))->F_attachment;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_nio_channels_SelectionKey(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_nio_channels_SelectionKey_OP_READ = jint(1);
	SF_java_nio_channels_SelectionKey_OP_WRITE = jint(4);
	SF_java_nio_channels_SelectionKey_OP_CONNECT = jint(8);
	SF_java_nio_channels_SelectionKey_OP_ACCEPT = jint(16);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/SelectionKey:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_SelectionKey(ctx);
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)SM_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_newUpdater_java_lang_Class_java_lang_Class_java_lang_String_R_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(ctx, (((jobject) &class_java_nio_channels_SelectionKey)), (((jobject) &class_java_lang_Object)), (((jobject) createStringLiteral(ctx, u8"attachment"_j))));
	clinit_java_nio_channels_SelectionKey(ctx);
	SF_java_nio_channels_SelectionKey_attachmentUpdater = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_SelectionKey[] {
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
	(void *) M_java_nio_channels_SelectionKey_interestOpsOr_int_R_int,
	(void *) M_java_nio_channels_SelectionKey_interestOpsAnd_int_R_int,
	(void *) nullptr,
	(void *) M_java_nio_channels_SelectionKey_isReadable_R_boolean,
	(void *) M_java_nio_channels_SelectionKey_isWritable_R_boolean,
	(void *) M_java_nio_channels_SelectionKey_isConnectable_R_boolean,
	(void *) M_java_nio_channels_SelectionKey_isAcceptable_R_boolean,
	(void *) M_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object,
	(void *) M_java_nio_channels_SelectionKey_attachment_R_java_lang_Object,
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
};

static FieldMetadata fields[] {
	{ "OP_READ", &class_int, (intptr_t) &SF_java_nio_channels_SelectionKey_OP_READ, "I", 25 },
	{ "OP_WRITE", &class_int, (intptr_t) &SF_java_nio_channels_SelectionKey_OP_WRITE, "I", 25 },
	{ "OP_CONNECT", &class_int, (intptr_t) &SF_java_nio_channels_SelectionKey_OP_CONNECT, "I", 25 },
	{ "OP_ACCEPT", &class_int, (intptr_t) &SF_java_nio_channels_SelectionKey_OP_ACCEPT, "I", 25 },
	{ "attachment", &class_java_lang_Object, offsetof(java_nio_channels_SelectionKey, F_attachment), "Ljava/lang/Object;", 66 },
	{ "attachmentUpdater", &class_java_util_concurrent_atomic_AtomicReferenceFieldUpdater, (intptr_t) &SF_java_nio_channels_SelectionKey_attachmentUpdater, "Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_SelectionKey, 0, "()V", 4 },
	{ "channel", 0, VTABLE_java_nio_channels_SelectionKey_channel_R_java_nio_channels_SelectableChannel, "()Ljava/nio/channels/SelectableChannel;", 1025 },
	{ "selector", 0, VTABLE_java_nio_channels_SelectionKey_selector_R_java_nio_channels_Selector, "()Ljava/nio/channels/Selector;", 1025 },
	{ "isValid", 0, VTABLE_java_nio_channels_SelectionKey_isValid_R_boolean, "()Z", 1025 },
	{ "cancel", 0, VTABLE_java_nio_channels_SelectionKey_cancel, "()V", 1025 },
	{ "interestOps", 0, VTABLE_java_nio_channels_SelectionKey_interestOps_R_int, "()I", 1025 },
	{ "interestOps", 0, VTABLE_java_nio_channels_SelectionKey_interestOps_int_R_java_nio_channels_SelectionKey, "(I)Ljava/nio/channels/SelectionKey;", 1025 },
	{ "interestOpsOr", (intptr_t) M_java_nio_channels_SelectionKey_interestOpsOr_int_R_int, VTABLE_java_nio_channels_SelectionKey_interestOpsOr_int_R_int, "(I)I", 1 },
	{ "interestOpsAnd", (intptr_t) M_java_nio_channels_SelectionKey_interestOpsAnd_int_R_int, VTABLE_java_nio_channels_SelectionKey_interestOpsAnd_int_R_int, "(I)I", 1 },
	{ "readyOps", 0, VTABLE_java_nio_channels_SelectionKey_readyOps_R_int, "()I", 1025 },
	{ "isReadable", (intptr_t) M_java_nio_channels_SelectionKey_isReadable_R_boolean, VTABLE_java_nio_channels_SelectionKey_isReadable_R_boolean, "()Z", 17 },
	{ "isWritable", (intptr_t) M_java_nio_channels_SelectionKey_isWritable_R_boolean, VTABLE_java_nio_channels_SelectionKey_isWritable_R_boolean, "()Z", 17 },
	{ "isConnectable", (intptr_t) M_java_nio_channels_SelectionKey_isConnectable_R_boolean, VTABLE_java_nio_channels_SelectionKey_isConnectable_R_boolean, "()Z", 17 },
	{ "isAcceptable", (intptr_t) M_java_nio_channels_SelectionKey_isAcceptable_R_boolean, VTABLE_java_nio_channels_SelectionKey_isAcceptable_R_boolean, "()Z", 17 },
	{ "attach", (intptr_t) M_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object, VTABLE_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 17 },
	{ "attachment", (intptr_t) M_java_nio_channels_SelectionKey_attachment_R_java_lang_Object, VTABLE_java_nio_channels_SelectionKey_attachment_R_java_lang_Object, "()Ljava/lang/Object;", 17 },
	{ "<clinit>", (intptr_t) clinit_java_nio_channels_SelectionKey, 0, "()V", 8 },
};

Class class_java_nio_channels_SelectionKey{
		.nativeName = (intptr_t) "java/nio/channels/SelectionKey",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_channels_SelectionKey),
		.classVtable = (intptr_t) vtable_java_nio_channels_SelectionKey,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_SelectionKey,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_SelectionKey,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_SelectionKey = registerClass(&class_java_nio_channels_SelectionKey);

}
