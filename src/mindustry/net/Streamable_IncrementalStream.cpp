#include "mindustry/net/Streamable_IncrementalStream.h"
#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "java/lang/Math.h"
#include "mindustry/net/Streamable_IncrementalStream.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/nio/channels/ClosedChannelException.h"
#include "java/io/IOException.h"
#include "mindustry/net/Streamable.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_mindustry_net_Streamable$IncrementalStream_closedSignal;

void mark_mindustry_net_Streamable$IncrementalStream(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_Streamable$IncrementalStream_closedSignal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Streamable$IncrementalStream_closedSignal)->clazz)->markFunction)((jobject) SF_mindustry_net_Streamable$IncrementalStream_closedSignal, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_InputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_net_Streamable$IncrementalStream *) object;
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
	if (self->F_currentBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentBuffer)->clazz)->markFunction)((jobject) self->F_currentBuffer, mark, depth + 1);
	if (self->F_singleByte)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_singleByte)->clazz)->markFunction)((jobject) self->F_singleByte, mark, depth + 1);
}

void init_mindustry_net_Streamable$IncrementalStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$IncrementalStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Streamable$IncrementalStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(86);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_LinkedBlockingQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue);
	init_java_util_concurrent_LinkedBlockingQueue(ctx, sp[1].o);
	((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	LINE_NUMBER(92);
	((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentBuffer = (jref) (jobject(nullptr));
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK(sp[0].o))->F_singleByte = (jref) sp[1].o;
	LINE_NUMBER(93);
	((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentOffset = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Streamable$IncrementalStream_add_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$IncrementalStream:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	if (((jint)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_isClosed) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_isFinished) != 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$IncrementalStream:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(104);
	if ((frame[2].i) < 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_8;
	{
	if ((frame[3].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i))) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(105);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(106);
	if ((frame[3].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(111);
	if (((jint)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_isClosed) == 0) goto label_12;
	}
	{
	clinit_java_nio_channels_ClosedChannelException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_ClosedChannelException);
	init_java_nio_channels_ClosedChannelException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentBuffer;
	if (sp[0].o == nullptr) goto label_0;
	}
	{
	jint temp0 = (jint)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentOffset;
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentBuffer;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[1].o = (jobject)((func_java_util_concurrent_LinkedBlockingQueue_take_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_take_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK(sp[0].o))->F_currentBuffer = (jref) (checkCast(ctx, getArrayClass(&class_byte, 1), sp[1].o));
	LINE_NUMBER(116);
	((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentOffset = (jint(0));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentBuffer;
	clinit_mindustry_net_Streamable$IncrementalStream(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Streamable$IncrementalStream_closedSignal;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_queue;
	clinit_mindustry_net_Streamable$IncrementalStream(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Streamable$IncrementalStream_closedSignal;
	jint temp0 = (jint)((func_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(122);
	if (((jint)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_isFinished) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(-1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	{
	LINE_NUMBER(123);
	clinit_java_nio_channels_ClosedChannelException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_ClosedChannelException);
	init_java_nio_channels_ClosedChannelException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(127);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(125);
	frame[4].o = sp[0].o;
	LINE_NUMBER(126);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentBuffer;
	frame[4].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentOffset));
	LINE_NUMBER(131);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentBuffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_currentOffset), (frame[1].o), (frame[2].i), (frame[5].i));
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK(sp[0].o))->F_currentOffset = (((jint)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK(sp[0].o))->F_currentOffset) + (frame[5].i));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint M_mindustry_net_Streamable$IncrementalStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$IncrementalStream:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_singleByte;
	jint temp0 = (jint)((func_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(1)));
	frame[1].i = temp0;
	LINE_NUMBER(142);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_singleByte;
	jint temp0 = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255);
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Streamable$IncrementalStream_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$IncrementalStream:finish", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_isFinished = (jint(1));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_queue;
	clinit_mindustry_net_Streamable$IncrementalStream(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Streamable$IncrementalStream_closedSignal;
	jint temp0 = (jint)((func_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Streamable$IncrementalStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$IncrementalStream:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_isClosed = (jint(1));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_java_util_concurrent_LinkedBlockingQueue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_clear])(ctx, sp[0].o);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_net_Streamable$IncrementalStream *) NULL_CHECK((frame[0].o)))->F_queue;
	clinit_mindustry_net_Streamable$IncrementalStream(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Streamable$IncrementalStream_closedSignal;
	jint temp0 = (jint)((func_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_net_Streamable$IncrementalStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_InputStream(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$IncrementalStream:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Streamable$IncrementalStream(ctx);
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(0)));
	clinit_mindustry_net_Streamable$IncrementalStream(ctx);
	SF_mindustry_net_Streamable$IncrementalStream_closedSignal = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Streamable$IncrementalStream[] {
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
	(void *) M_mindustry_net_Streamable$IncrementalStream_close,
	(void *) M_java_io_InputStream_available_R_int,
	(void *) M_java_io_InputStream_mark_int,
	(void *) M_java_io_InputStream_markSupported_R_boolean,
	(void *) M_mindustry_net_Streamable$IncrementalStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_InputStream_reset,
	(void *) M_java_io_InputStream_skip_long_R_long,
	(void *) M_mindustry_net_Streamable$IncrementalStream_add_Array1_byte,
	(void *) M_mindustry_net_Streamable$IncrementalStream_finish,
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
	{ "available", "()I" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([B)I" },
	{ "read", "([BII)I" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
	{ "add", "([B)V" },
	{ "finish", "()V" },
};

static FieldMetadata fields[] {
	{ "closedSignal", getArrayClass(&class_byte, 1), (intptr_t) &SF_mindustry_net_Streamable$IncrementalStream_closedSignal, "[B", 26 },
	{ "queue", &class_java_util_concurrent_LinkedBlockingQueue, offsetof(mindustry_net_Streamable$IncrementalStream, F_queue), "Ljava/util/concurrent/LinkedBlockingQueue;", 18 },
	{ "isClosed", &class_boolean, offsetof(mindustry_net_Streamable$IncrementalStream, F_isClosed), "Z", 66 },
	{ "isFinished", &class_boolean, offsetof(mindustry_net_Streamable$IncrementalStream, F_isFinished), "Z", 66 },
	{ "currentBuffer", getArrayClass(&class_byte, 1), offsetof(mindustry_net_Streamable$IncrementalStream, F_currentBuffer), "[B", 2 },
	{ "singleByte", getArrayClass(&class_byte, 1), offsetof(mindustry_net_Streamable$IncrementalStream, F_singleByte), "[B", 2 },
	{ "currentOffset", &class_int, offsetof(mindustry_net_Streamable$IncrementalStream, F_currentOffset), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Streamable$IncrementalStream, 0, "()V", 0 },
	{ "add", (intptr_t) M_mindustry_net_Streamable$IncrementalStream_add_Array1_byte, VTABLE_mindustry_net_Streamable$IncrementalStream_add_Array1_byte, "([B)V", 0 },
	{ "read", (intptr_t) M_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_int_int_R_int, VTABLE_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "read", (intptr_t) M_mindustry_net_Streamable$IncrementalStream_read_R_int, VTABLE_mindustry_net_Streamable$IncrementalStream_read_R_int, "()I", 1 },
	{ "finish", (intptr_t) M_mindustry_net_Streamable$IncrementalStream_finish, VTABLE_mindustry_net_Streamable$IncrementalStream_finish, "()V", 1 },
	{ "close", (intptr_t) M_mindustry_net_Streamable$IncrementalStream_close, VTABLE_mindustry_net_Streamable$IncrementalStream_close, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_net_Streamable$IncrementalStream, 0, "()V", 8 },
};

Class class_mindustry_net_Streamable$IncrementalStream{
		.nativeName = (intptr_t) "mindustry/net/Streamable$IncrementalStream",
		.parentClass = (intptr_t) &class_java_io_InputStream,
		.size = sizeof(mindustry_net_Streamable$IncrementalStream),
		.classVtable = (intptr_t) vtable_mindustry_net_Streamable$IncrementalStream,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Streamable$IncrementalStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Streamable$IncrementalStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Streamable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Streamable$IncrementalStream = registerClass(&class_mindustry_net_Streamable$IncrementalStream);

}

