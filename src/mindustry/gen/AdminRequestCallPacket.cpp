#include "mindustry/gen/AdminRequestCallPacket.h"
#include "arc/util/io/Reads.h"
#include "mindustry/net/Packets_AdminAction.h"
#include "java/lang/Object.h"
#include "mindustry/gen/AdminRequestCallPacket.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/net/Packet.h"
#include "arc/util/io/Writes.h"
#include "mindustry/net/NetConnection.h"

extern "C" {


void mark_mindustry_gen_AdminRequestCallPacket(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_AdminRequestCallPacket *) object;
	if (self->F_DATA)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_DATA)->clazz)->markFunction)((jobject) self->F_DATA, mark, depth + 1);
	if (self->F_other)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_other)->clazz)->markFunction)((jobject) self->F_other, mark, depth + 1);
	if (self->F_action)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_action)->clazz)->markFunction)((jobject) self->F_action, mark, depth + 1);
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
}

void clinit_mindustry_gen_AdminRequestCallPacket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_gen_AdminRequestCallPacket(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/AdminRequestCallPacket:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_AdminRequestCallPacket(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_AdminRequestCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_NODATA;
	((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_AdminRequestCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/AdminRequestCallPacket:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[0].o)))->F_other;
	SM_mindustry_io_TypeIO_writeEntity_arc_util_io_Writes_mindustry_gen_Entityc(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(23);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[0].o)))->F_action;
	SM_mindustry_io_TypeIO_writeAction_arc_util_io_Writes_mindustry_net_Packets$AdminAction(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(24);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[0].o)))->F_params;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_AdminRequestCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/AdminRequestCallPacket:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_b_int_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_int_R_Array1_byte])(ctx, (frame[1].o), (frame[2].i));
	((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK(sp[0].o))->F_DATA = (jref) sp[1].o;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_AdminRequestCallPacket_handled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/AdminRequestCallPacket:handled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	clinit_mindustry_gen_AdminRequestCallPacket(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packet_BAIS;
	sp[1].o = (jobject)((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[0].o)))->F_DATA;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_AdminRequestCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readEntity_arc_util_io_Reads_R_mindustry_gen_Entityc(ctx, sp[1].o);
	((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK(sp[0].o))->F_other = (jref) (checkCast(ctx, &class_mindustry_gen_Player, sp[1].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_AdminRequestCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAction_arc_util_io_Reads_R_mindustry_net_Packets$AdminAction(ctx, sp[1].o);
	((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK(sp[0].o))->F_action = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_AdminRequestCallPacket(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packet_READ;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readObjectSafe_arc_util_io_Reads_R_java_lang_Object(ctx, sp[1].o);
	((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK(sp[0].o))->F_params = (jref) sp[1].o;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_AdminRequestCallPacket_handleServer_mindustry_net_NetConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/AdminRequestCallPacket:handleServer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_player;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_kicked) == 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_player;
	frame[2].o = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[0].o)))->F_other;
	sp[2].o = (jobject)((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[0].o)))->F_action;
	sp[3].o = (jobject)((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[0].o)))->F_params;
	SM_mindustry_core_NetServer_adminRequest_mindustry_gen_Player_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_AdminRequestCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/AdminRequestCallPacket:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_AdminRequestCallPacket[] {
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
	(void *) M_mindustry_gen_AdminRequestCallPacket_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_AdminRequestCallPacket_allow_boolean_R_boolean,
	(void *) M_mindustry_gen_AdminRequestCallPacket_read_arc_util_io_Reads_int,
	(void *) M_mindustry_gen_AdminRequestCallPacket_handled,
	(void *) M_mindustry_net_Packet_getPriority_R_int,
	(void *) M_mindustry_net_Packet_handleClient,
	(void *) M_mindustry_gen_AdminRequestCallPacket_handleServer_mindustry_net_NetConnection,
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
	{ "DATA", getArrayClass(&class_byte, 1), offsetof(mindustry_gen_AdminRequestCallPacket, F_DATA), "[B", 2 },
	{ "other", &class_mindustry_gen_Player, offsetof(mindustry_gen_AdminRequestCallPacket, F_other), "Lmindustry/gen/Player;", 1 },
	{ "action", &class_mindustry_net_Packets$AdminAction, offsetof(mindustry_gen_AdminRequestCallPacket, F_action), "Lmindustry/net/Packets$AdminAction;", 1 },
	{ "params", &class_java_lang_Object, offsetof(mindustry_gen_AdminRequestCallPacket, F_params), "Ljava/lang/Object;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_AdminRequestCallPacket, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_AdminRequestCallPacket_write_arc_util_io_Writes, VTABLE_mindustry_gen_AdminRequestCallPacket_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_AdminRequestCallPacket_read_arc_util_io_Reads_int, VTABLE_mindustry_gen_AdminRequestCallPacket_read_arc_util_io_Reads_int, "(Larc/util/io/Reads;I)V", 1 },
	{ "handled", (intptr_t) M_mindustry_gen_AdminRequestCallPacket_handled, VTABLE_mindustry_gen_AdminRequestCallPacket_handled, "()V", 1 },
	{ "handleServer", (intptr_t) M_mindustry_gen_AdminRequestCallPacket_handleServer_mindustry_net_NetConnection, VTABLE_mindustry_gen_AdminRequestCallPacket_handleServer_mindustry_net_NetConnection, "(Lmindustry/net/NetConnection;)V", 1 },
	{ "allow", (intptr_t) M_mindustry_gen_AdminRequestCallPacket_allow_boolean_R_boolean, VTABLE_mindustry_gen_AdminRequestCallPacket_allow_boolean_R_boolean, "(Z)Z", 1 },
};

Class class_mindustry_gen_AdminRequestCallPacket{
		.nativeName = (intptr_t) "mindustry/gen/AdminRequestCallPacket",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_gen_AdminRequestCallPacket),
		.classVtable = (intptr_t) vtable_mindustry_gen_AdminRequestCallPacket,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_AdminRequestCallPacket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_AdminRequestCallPacket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_AdminRequestCallPacket = registerClass(&class_mindustry_gen_AdminRequestCallPacket);

}
