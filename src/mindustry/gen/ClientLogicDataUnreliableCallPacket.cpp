#include "mindustry/gen/ClientLogicDataUnreliableCallPacket.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/ClientLogicDataUnreliableCallPacket.h"
#include "mindustry/gen/Player.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"
#include "mindustry/net/NetConnection.h"

extern "C" {


void mark_mindustry_gen_ClientLogicDataUnreliableCallPacket(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_net_Packet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_gen_ClientLogicDataUnreliableCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_channel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_channel)->clazz)->markFunction)((jobject) self->F_channel, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_gen_ClientLogicDataUnreliableCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_ClientLogicDataUnreliableCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientLogicDataUnreliableCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_ClientLogicDataUnreliableCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientLogicDataUnreliableCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ClientLogicDataUnreliableCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientLogicDataUnreliableCallPacket:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK((frame[0].o)))->F_channel;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(21);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK((frame[0].o)))->F_value;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ClientLogicDataUnreliableCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientLogicDataUnreliableCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ClientLogicDataUnreliableCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientLogicDataUnreliableCallPacket:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	clinit_mindustry_gen_ClientLogicDataUnreliableCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientLogicDataUnreliableCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, sp[1].o);
	((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK(sp[0].o))->F_channel = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ClientLogicDataUnreliableCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readObjectSafe_arc_util_io_Reads_R_java_lang_Object(ctx, sp[1].o);
	((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ClientLogicDataUnreliableCallPacket_handleServer_mindustry_net_NetConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientLogicDataUnreliableCallPacket:handleServer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_player;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_kicked) == 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_player;
	frame[2].o = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK((frame[0].o)))->F_channel;
	sp[2].o = (jobject)((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK((frame[0].o)))->F_value;
	SM_mindustry_core_NetServer_clientLogicDataUnreliable_mindustry_gen_Player_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_ClientLogicDataUnreliableCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ClientLogicDataUnreliableCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_ClientLogicDataUnreliableCallPacket[] {
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
	(void *) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_net_Packet_handleClient,
	(void *) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_handleServer_mindustry_net_NetConnection,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_ClientLogicDataUnreliableCallPacket, F_DATA), "[B", 2 },
	{ "channel", &class_java_lang_String, offsetof(mindustry_gen_ClientLogicDataUnreliableCallPacket, F_channel), "Ljava/lang/String;", 1 },
	{ "value", &class_java_lang_Object, offsetof(mindustry_gen_ClientLogicDataUnreliableCallPacket, F_value), "Ljava/lang/Object;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_ClientLogicDataUnreliableCallPacket, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_ClientLogicDataUnreliableCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_ClientLogicDataUnreliableCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_handled, VTABLE_mindustry_gen_ClientLogicDataUnreliableCallPacket_handled, "()V", 1 },
	{ "handleServer", (intptr_t) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_handleServer_mindustry_net_NetConnection, VTABLE_mindustry_gen_ClientLogicDataUnreliableCallPacket_handleServer_mindustry_net_NetConnection, "(Lmindustry/net/NetConnection;)V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_ClientLogicDataUnreliableCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_ClientLogicDataUnreliableCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_ClientLogicDataUnreliableCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/ClientLogicDataUnreliableCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_ClientLogicDataUnreliableCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_ClientLogicDataUnreliableCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_ClientLogicDataUnreliableCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_ClientLogicDataUnreliableCallPacket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_ClientLogicDataUnreliableCallPacket = registerClass(&class_mindustry_gen_ClientLogicDataUnreliableCallPacket);

}
