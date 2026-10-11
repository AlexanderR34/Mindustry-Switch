#include "mindustry/net/ArcNetProvider_ArcConnection_1.h"
#include "arc/net/Connection.h"
#include "mindustry/net/ArcNetProvider_ArcConnection.h"
#include "mindustry/net/Net.h"
#include "arc/net/NetListener.h"
#include "java/io/ByteArrayInputStream.h"
#include "mindustry/net/Packets_StreamChunk.h"
#include "mindustry/net/ArcNetProvider_ArcConnection_1.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "mindustry/net/Packets_StreamBegin.h"
#include "mindustry/net/Streamable.h"
#include "arc/net/TcpIdleSender.h"
#include "arc/net/InputStreamSender.h"
#include "mindustry/net/Packet.h"

extern "C" {


void mark_mindustry_net_ArcNetProvider$ArcConnection$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_net_InputStreamSender(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_net_ArcNetProvider$ArcConnection$1 *) object;
	if (self->F_val$stream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$stream)->clazz)->markFunction)((jobject) self->F_val$stream, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_net_ArcNetProvider$ArcConnection$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_net_InputStreamSender(ctx);
}

void init_mindustry_net_ArcNetProvider$ArcConnection$1_mindustry_net_ArcNetProvider$ArcConnection_java_io_InputStream_int_mindustry_net_Streamable(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$ArcConnection$1:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$ArcConnection$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(430);
	((mindustry_net_ArcNetProvider$ArcConnection$1 *) NULL_CHECK((frame[0].o)))->F_val$stream = (jref) (frame[4].o);
	((mindustry_net_ArcNetProvider$ArcConnection$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_net_InputStreamSender_java_io_InputStream_int(ctx, (frame[0].o), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$ArcConnection$1_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$ArcConnection$1:start", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	clinit_mindustry_net_Packets$StreamBegin(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$StreamBegin);
	init_mindustry_net_Packets$StreamBegin(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(437);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection$1 *) NULL_CHECK((frame[0].o)))->F_val$stream;
	sp[1].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK(sp[1].o))->F_stream;
	jint temp0 = (jint)((func_java_io_ByteArrayInputStream_available_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_ByteArrayInputStream_available_R_int])(ctx, sp[1].o);
	((mindustry_net_Packets$StreamBegin *) NULL_CHECK(sp[0].o))->F_total = temp0;
	LINE_NUMBER(438);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection$1 *) NULL_CHECK((frame[0].o)))->F_val$stream;
	jint temp1 = (jint)SM_mindustry_net_Net_getPacketId_mindustry_net_Packet_R_byte(ctx, sp[1].o);
	((mindustry_net_Packets$StreamBegin *) NULL_CHECK(sp[0].o))->F_type = temp1;
	LINE_NUMBER(439);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK(sp[0].o))->F_connection;
	jint temp2 = (jint)((func_arc_net_Connection_sendTCP_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_sendTCP_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(440);
	((mindustry_net_ArcNetProvider$ArcConnection$1 *) NULL_CHECK((frame[0].o)))->F_id = ((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[1].o)))->F_id);
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_ArcNetProvider$ArcConnection$1_next_Array1_byte_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$ArcConnection$1:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(445);
	clinit_mindustry_net_Packets$StreamChunk(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$StreamChunk);
	init_mindustry_net_Packets$StreamChunk(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(446);
	((mindustry_net_Packets$StreamChunk *) NULL_CHECK((frame[2].o)))->F_id = ((jint)((mindustry_net_ArcNetProvider$ArcConnection$1 *) NULL_CHECK((frame[0].o)))->F_id);
	LINE_NUMBER(447);
	((mindustry_net_Packets$StreamChunk *) NULL_CHECK((frame[2].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_ArcNetProvider$ArcConnection$1[] {
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
	(void *) M_arc_net_NetListener_connected_arc_net_Connection,
	(void *) M_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason,
	(void *) M_arc_net_NetListener_received_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_TcpIdleSender_idle_arc_net_Connection,
	(void *) M_mindustry_net_ArcNetProvider$ArcConnection$1_start,
	(void *) M_arc_net_InputStreamSender_next_R_java_lang_Object,
	(void *) M_mindustry_net_ArcNetProvider$ArcConnection$1_next_Array1_byte_R_java_lang_Object,
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
	{ "connected", "(Larc/net/Connection;)V" },
	{ "disconnected", "(Larc/net/Connection;Larc/net/DcReason;)V" },
	{ "received", "(Larc/net/Connection;Ljava/lang/Object;)V" },
	{ "idle", "(Larc/net/Connection;)V" },
	{ "start", "()V" },
	{ "next", "()Ljava/lang/Object;" },
	{ "next", "([B)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(mindustry_net_ArcNetProvider$ArcConnection$1, F_id), "I", 0 },
	{ "val$stream", &class_mindustry_net_Streamable, offsetof(mindustry_net_ArcNetProvider$ArcConnection$1, F_val$stream), "Lmindustry/net/Streamable;", 4112 },
	{ "this$1", &class_mindustry_net_ArcNetProvider$ArcConnection, offsetof(mindustry_net_ArcNetProvider$ArcConnection$1, F_this$1), "Lmindustry/net/ArcNetProvider$ArcConnection;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_ArcNetProvider$ArcConnection$1_mindustry_net_ArcNetProvider$ArcConnection_java_io_InputStream_int_mindustry_net_Streamable, 0, "(Lmindustry/net/ArcNetProvider$ArcConnection;Ljava/io/InputStream;ILmindustry/net/Streamable;)V", 0 },
	{ "start", (intptr_t) M_mindustry_net_ArcNetProvider$ArcConnection$1_start, VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_start, "()V", 4 },
	{ "next", (intptr_t) M_mindustry_net_ArcNetProvider$ArcConnection$1_next_Array1_byte_R_java_lang_Object, VTABLE_mindustry_net_ArcNetProvider$ArcConnection$1_next_Array1_byte_R_java_lang_Object, "([B)Ljava/lang/Object;", 4 },
};

Class class_mindustry_net_ArcNetProvider$ArcConnection$1{
		.nativeName = (intptr_t) "mindustry/net/ArcNetProvider$ArcConnection$1",
		.parentClass = (intptr_t) &class_arc_net_InputStreamSender,
		.size = sizeof(mindustry_net_ArcNetProvider$ArcConnection$1),
		.classVtable = (intptr_t) vtable_mindustry_net_ArcNetProvider$ArcConnection$1,
		.staticInitializer = (intptr_t) clinit_mindustry_net_ArcNetProvider$ArcConnection$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_ArcNetProvider$ArcConnection$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_net_ArcNetProvider$ArcConnection$1 = registerClass(&class_mindustry_net_ArcNetProvider$ArcConnection$1);

}

