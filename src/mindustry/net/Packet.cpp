#include "mindustry/net/Packet.h"
#include "arc/util/io/Reads.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/io/DataInputStream.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "java/io/DataInput.h"
#include "arc/util/io/Writes.h"
#include "mindustry/net/Packet.h"
#include "mindustry/net/NetConnection.h"

extern "C" {

jobject SF_mindustry_net_Packet_NODATA;
jobject SF_mindustry_net_Packet_BAIS;
jobject SF_mindustry_net_Packet_READ;
jint SF_mindustry_net_Packet_priorityLow;
jint SF_mindustry_net_Packet_priorityNormal;
jint SF_mindustry_net_Packet_priorityHigh;

void mark_mindustry_net_Packet(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_Packet_NODATA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packet_NODATA)->clazz)->markFunction)((jobject) SF_mindustry_net_Packet_NODATA, mark, depth + 1);
		if (SF_mindustry_net_Packet_BAIS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packet_BAIS)->clazz)->markFunction)((jobject) SF_mindustry_net_Packet_BAIS, mark, depth + 1);
		if (SF_mindustry_net_Packet_READ)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packet_READ)->clazz)->markFunction)((jobject) SF_mindustry_net_Packet_READ, mark, depth + 1);
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
	auto self = (mindustry_net_Packet *) object;
}

void init_mindustry_net_Packet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Packet_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:read", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Packet_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_net_Packet_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Packet_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(30);
	((func_mindustry_net_Packet_read_arc_util_io_Reads) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Packet_read_arc_util_io_Reads])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Packet_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:handled", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_net_Packet_getPriority_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:getPriority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Packet_handleClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:handleClient", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Packet_handleServer_mindustry_net_NetConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:handleServer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_net_Packet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_net_Packet_priorityLow = jint(0);
	SF_mindustry_net_Packet_priorityNormal = jint(1);
	SF_mindustry_net_Packet_priorityHigh = jint(2);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packet:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packet(ctx);
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(0)));
	clinit_mindustry_net_Packet(ctx);
	SF_mindustry_net_Packet_NODATA = sp[0].o;
	LINE_NUMBER(10);
	clinit_arc_util_io_ReusableByteInStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_ReusableByteInStream);
	init_arc_util_io_ReusableByteInStream(ctx, sp[0].o);
	clinit_mindustry_net_Packet(ctx);
	SF_mindustry_net_Packet_BAIS = sp[0].o;
	LINE_NUMBER(11);
	clinit_arc_util_io_Reads(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Reads);
	clinit_java_io_DataInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_mindustry_net_Packet(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Packet_BAIS;
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_arc_util_io_Reads_java_io_DataInput(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_net_Packet(ctx);
	SF_mindustry_net_Packet_READ = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Packet[] {
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
	(void *) M_mindustry_net_Packet_read_arc_util_io_Reads,
	(void *) M_mindustry_net_Packet_write_arc_util_io_Writes,
	(void *) M_mindustry_net_Packet_allow_boolean_R_boolean,
	(void *) M_mindustry_net_Packet_read_arc_util_io_Reads_int,
	(void *) M_mindustry_net_Packet_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_net_Packet_handleClient,
	(void *) M_mindustry_net_Packet_handleServer_mindustry_net_NetConnection,
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
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "allow", "(Z)Z" },
	{ "read", "(Larc/util/io/Reads;I)V" },
	{ "handled", "()V" },
	{ "getPriority", "()I" },
	{ "handleClient", "()V" },
	{ "handleServer", "(Lmindustry/net/NetConnection;)V" },
};

static FieldMetadata fields[] {
	{ "NODATA", getArrayClass(&class_byte, 1), (intptr_t) &SF_mindustry_net_Packet_NODATA, "[B", 28 },
	{ "BAIS", &class_arc_util_io_ReusableByteInStream, (intptr_t) &SF_mindustry_net_Packet_BAIS, "Larc/util/io/ReusableByteInStream;", 28 },
	{ "READ", &class_arc_util_io_Reads, (intptr_t) &SF_mindustry_net_Packet_READ, "Larc/util/io/Reads;", 28 },
	{ "priorityLow", &class_int, (intptr_t) &SF_mindustry_net_Packet_priorityLow, "I", 25 },
	{ "priorityNormal", &class_int, (intptr_t) &SF_mindustry_net_Packet_priorityNormal, "I", 25 },
	{ "priorityHigh", &class_int, (intptr_t) &SF_mindustry_net_Packet_priorityHigh, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Packet, 0, "()V", 1 },
	{ "read", (intptr_t) M_mindustry_net_Packet_read_arc_util_io_Reads, VTABLE_mindustry_net_Packet_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_net_Packet_write_arc_util_io_Writes, VTABLE_mindustry_net_Packet_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "allow", (intptr_t) M_mindustry_net_Packet_allow_boolean_R_boolean, VTABLE_mindustry_net_Packet_allow_boolean_R_boolean, "(Z)Z", 1 },
	{ "read", (intptr_t) M_mindustry_net_Packet_read_arc_util_io_Reads_int, VTABLE_mindustry_net_Packet_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_net_Packet_handled, VTABLE_mindustry_net_Packet_handled, "()V", 1 },
	{ "getPriority", (intptr_t) M_mindustry_net_Packet_getPriority_R_int, VTABLE_mindustry_net_Packet_getPriority_R_int, "()I", 1 },
	{ "handleClient", (intptr_t) M_mindustry_net_Packet_handleClient, VTABLE_mindustry_net_Packet_handleClient, "()V", 1 },
	{ "handleServer", (intptr_t) M_mindustry_net_Packet_handleServer_mindustry_net_NetConnection, VTABLE_mindustry_net_Packet_handleServer_mindustry_net_NetConnection, "(Lmindustry/net/NetConnection;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_net_Packet, 0, "()V", 8 },
};

Class class_mindustry_net_Packet{
		.nativeName = (intptr_t) "mindustry/net/Packet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Packet),
		.classVtable = (intptr_t) vtable_mindustry_net_Packet,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Packet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Packet,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Packet = registerClass(&class_mindustry_net_Packet);

}
