#include "mindustry/gen/ConnectConfirmCallPacket.h"
#include "arc/util/io/Reads.h"
#include "mindustry/gen/ConnectConfirmCallPacket.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Player.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"
#include "mindustry/net/NetConnection.h"

extern "C" {


void mark_mindustry_gen_ConnectConfirmCallPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_ConnectConfirmCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
}

void clinit_mindustry_gen_ConnectConfirmCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_ConnectConfirmCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ConnectConfirmCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_ConnectConfirmCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_ConnectConfirmCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_ConnectConfirmCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_ConnectConfirmCallPacket_getPriority_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ConnectConfirmCallPacket:getPriority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return (jint(2));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ConnectConfirmCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ConnectConfirmCallPacket:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_ConnectConfirmCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ConnectConfirmCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_ConnectConfirmCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ConnectConfirmCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ConnectConfirmCallPacket:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	clinit_mindustry_gen_ConnectConfirmCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_ConnectConfirmCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_ConnectConfirmCallPacket_handleServer_mindustry_net_NetConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ConnectConfirmCallPacket:handleServer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_player;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_kicked) == 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_player;
	frame[2].o = sp[0].o;
	LINE_NUMBER(37);
	SM_mindustry_core_NetServer_connectConfirm_mindustry_gen_Player(ctx, (frame[2].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_ConnectConfirmCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ConnectConfirmCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_ConnectConfirmCallPacket[] {
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
	(void *) M_mindustry_gen_ConnectConfirmCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_ConnectConfirmCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_ConnectConfirmCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_ConnectConfirmCallPacket_handled,
	(void *) M_mindustry_gen_ConnectConfirmCallPacket_getPriority_R_int,
	(void *) M_mindustry_net_Packet_handleClient,
	(void *) M_mindustry_gen_ConnectConfirmCallPacket_handleServer_mindustry_net_NetConnection,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_ConnectConfirmCallPacket, F_DATA), "[B", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_ConnectConfirmCallPacket, 0, "()V", 1 },
	{ "getPriority", (intptr_t) M_mindustry_gen_ConnectConfirmCallPacket_getPriority_R_int, VTABLE_mindustry_gen_ConnectConfirmCallPacket_getPriority_R_int, "()I", 1 },
	{ "write", (intptr_t) M_mindustry_gen_ConnectConfirmCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_ConnectConfirmCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_ConnectConfirmCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_ConnectConfirmCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_ConnectConfirmCallPacket_handled, VTABLE_mindustry_gen_ConnectConfirmCallPacket_handled, "()V", 1 },
	{ "handleServer", (intptr_t) M_mindustry_gen_ConnectConfirmCallPacket_handleServer_mindustry_net_NetConnection, VTABLE_mindustry_gen_ConnectConfirmCallPacket_handleServer_mindustry_net_NetConnection, "(Lmindustry/net/NetConnection;)V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_ConnectConfirmCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_ConnectConfirmCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_ConnectConfirmCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/ConnectConfirmCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_ConnectConfirmCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_ConnectConfirmCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_ConnectConfirmCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_ConnectConfirmCallPacket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_ConnectConfirmCallPacket = registerClass(&class_mindustry_gen_ConnectConfirmCallPacket);

}
