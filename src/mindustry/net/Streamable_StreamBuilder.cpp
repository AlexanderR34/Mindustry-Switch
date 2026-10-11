#include "mindustry/net/Streamable_StreamBuilder.h"
#include "mindustry/net/Net.h"
#include "mindustry/net/Streamable_StreamBuilder.h"
#include "mindustry/net/Streamable_IncrementalStream.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/io/OutputStream.h"
#include "java/lang/Object.h"
#include "java/io/IOException.h"
#include "mindustry/net/Packets_StreamBegin.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/net/Streamable.h"
#include "java/lang/Throwable.h"
#include "java/io/ByteArrayOutputStream.h"
#include "mindustry/net/Packet.h"

extern "C" {


void mark_mindustry_net_Streamable$StreamBuilder(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Streamable$StreamBuilder *) object;
	if (self->F_stream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stream)->clazz)->markFunction)((jobject) self->F_stream, mark, depth + 1);
	if (self->F_incrementalStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_incrementalStream)->clazz)->markFunction)((jobject) self->F_incrementalStream, mark, depth + 1);
}

void clinit_mindustry_net_Streamable$StreamBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_Streamable$StreamBuilder_mindustry_net_Packets$StreamBegin_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$StreamBuilder:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Streamable$StreamBuilder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[1].o);
	((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK(sp[0].o))->F_stream = (jref) sp[1].o;
	LINE_NUMBER(39);
	((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_id = ((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[1].o)))->F_id);
	LINE_NUMBER(40);
	((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_type = ((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[1].o)))->F_type);
	LINE_NUMBER(41);
	((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_total = ((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[1].o)))->F_total);
	LINE_NUMBER(42);
	((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_incremental = (frame[2].i);
	LINE_NUMBER(44);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Streamable$IncrementalStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_Streamable$IncrementalStream);
	init_mindustry_net_Streamable$IncrementalStream(ctx, sp[1].o);
	((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK(sp[0].o))->F_incrementalStream = (jref) sp[1].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(47);
	((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_incrementalStream = (jref) (jobject(nullptr));
	}
label_9:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_net_Streamable$StreamBuilder_progress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$StreamBuilder:progress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return ((jfloat(((jint)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_received))) / (jfloat(((jint)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_total))));
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Streamable$StreamBuilder_add_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$StreamBuilder:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK(sp[0].o))->F_received = (((jint)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK(sp[0].o))->F_received) + (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_incrementalStream;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_incrementalStream;
	((func_mindustry_net_Streamable$IncrementalStream_add_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Streamable$IncrementalStream_add_Array1_byte])(ctx, sp[0].o, (frame[1].o));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_stream;
	((func_java_io_ByteArrayOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ByteArrayOutputStream_write_Array1_byte])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(65);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(63);
	frame[2].o = sp[0].o;
	LINE_NUMBER(64);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_net_Streamable$StreamBuilder_build_R_mindustry_net_Streamable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$StreamBuilder:build", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)SM_mindustry_net_Net_newPacket_byte_R_mindustry_net_Packet(ctx, ((jint)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_type));
	frame[1].o = (checkCast(ctx, &class_mindustry_net_Streamable, sp[0].o));
	LINE_NUMBER(70);
	sp[0].o = frame[1].o;
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	sp[2].o = (jobject)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_stream;
	sp[2].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, sp[2].o);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[1].o, sp[2].o);
	((mindustry_net_Streamable *) NULL_CHECK(sp[0].o))->F_stream = (jref) sp[1].o;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Streamable$StreamBuilder_isDone_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$StreamBuilder:isDone", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	if (((jint)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_received) < ((jint)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_total)) goto label_1;
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

void M_mindustry_net_Streamable$StreamBuilder_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable$StreamBuilder:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_incrementalStream;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[0].o)))->F_incrementalStream;
	((func_mindustry_net_Streamable$IncrementalStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Streamable$IncrementalStream_close])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Streamable$StreamBuilder[] {
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
	(void *) M_mindustry_net_Streamable$StreamBuilder_progress_R_float,
	(void *) M_mindustry_net_Streamable$StreamBuilder_add_Array1_byte,
	(void *) M_mindustry_net_Streamable$StreamBuilder_build_R_mindustry_net_Streamable,
	(void *) M_mindustry_net_Streamable$StreamBuilder_isDone_R_boolean,
	(void *) M_mindustry_net_Streamable$StreamBuilder_close,
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
	{ "progress", "()F" },
	{ "add", "([B)V" },
	{ "build", "()Lmindustry/net/Streamable;" },
	{ "isDone", "()Z" },
	{ "close", "()V" },
};

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(mindustry_net_Streamable$StreamBuilder, F_id), "I", 17 },
	{ "type", &class_byte, offsetof(mindustry_net_Streamable$StreamBuilder, F_type), "B", 17 },
	{ "total", &class_int, offsetof(mindustry_net_Streamable$StreamBuilder, F_total), "I", 17 },
	{ "stream", &class_java_io_ByteArrayOutputStream, offsetof(mindustry_net_Streamable$StreamBuilder, F_stream), "Ljava/io/ByteArrayOutputStream;", 17 },
	{ "incremental", &class_boolean, offsetof(mindustry_net_Streamable$StreamBuilder, F_incremental), "Z", 17 },
	{ "incrementalStream", &class_mindustry_net_Streamable$IncrementalStream, offsetof(mindustry_net_Streamable$StreamBuilder, F_incrementalStream), "Lmindustry/net/Streamable$IncrementalStream;", 17 },
	{ "received", &class_int, offsetof(mindustry_net_Streamable$StreamBuilder, F_received), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Streamable$StreamBuilder_mindustry_net_Packets$StreamBegin_boolean, 0, "(Lmindustry/net/Packets$StreamBegin;Z)V", 1 },
	{ "progress", (intptr_t) M_mindustry_net_Streamable$StreamBuilder_progress_R_float, VTABLE_mindustry_net_Streamable$StreamBuilder_progress_R_float, "()F", 1 },
	{ "add", (intptr_t) M_mindustry_net_Streamable$StreamBuilder_add_Array1_byte, VTABLE_mindustry_net_Streamable$StreamBuilder_add_Array1_byte, "([B)V", 1 },
	{ "build", (intptr_t) M_mindustry_net_Streamable$StreamBuilder_build_R_mindustry_net_Streamable, VTABLE_mindustry_net_Streamable$StreamBuilder_build_R_mindustry_net_Streamable, "()Lmindustry/net/Streamable;", 1 },
	{ "isDone", (intptr_t) M_mindustry_net_Streamable$StreamBuilder_isDone_R_boolean, VTABLE_mindustry_net_Streamable$StreamBuilder_isDone_R_boolean, "()Z", 1 },
	{ "close", (intptr_t) M_mindustry_net_Streamable$StreamBuilder_close, VTABLE_mindustry_net_Streamable$StreamBuilder_close, "()V", 1 },
};

Class class_mindustry_net_Streamable$StreamBuilder{
		.nativeName = (intptr_t) "mindustry/net/Streamable$StreamBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Streamable$StreamBuilder),
		.classVtable = (intptr_t) vtable_mindustry_net_Streamable$StreamBuilder,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Streamable$StreamBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Streamable$StreamBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Streamable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Streamable$StreamBuilder = registerClass(&class_mindustry_net_Streamable$StreamBuilder);

}

