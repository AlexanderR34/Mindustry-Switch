#include "mindustry/net/NetConnection.h"
#include "mindustry/net/Net.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/net/Administration.h"
#include "java/lang/Throwable.h"
#include "mindustry/net/NetConnection.h"
#include "mindustry/net/Packet.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Log.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "mindustry/net/Packets_StreamChunk.h"
#include "mindustry/net/Packets_KickReason.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Player.h"
#include "mindustry/core/NetServer.h"
#include "arc/util/Ratekeeper.h"
#include "mindustry/net/Packets_StreamBegin.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "mindustry/net/Streamable.h"
#include "java/io/ByteArrayOutputStream.h"

extern "C" {


void mark_mindustry_net_NetConnection(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_NetConnection *) object;
	if (self->F_address)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_address)->clazz)->markFunction)((jobject) self->F_address, mark, depth + 1);
	if (self->F_uuid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uuid)->clazz)->markFunction)((jobject) self->F_uuid, mark, depth + 1);
	if (self->F_usid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_usid)->clazz)->markFunction)((jobject) self->F_usid, mark, depth + 1);
	if (self->F_player)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_player)->clazz)->markFunction)((jobject) self->F_player, mark, depth + 1);
	if (self->F_rejectedRequests)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rejectedRequests)->clazz)->markFunction)((jobject) self->F_rejectedRequests, mark, depth + 1);
	if (self->F_chatRate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chatRate)->clazz)->markFunction)((jobject) self->F_chatRate, mark, depth + 1);
	if (self->F_packetRate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packetRate)->clazz)->markFunction)((jobject) self->F_packetRate, mark, depth + 1);
	if (self->F_localEntities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_localEntities)->clazz)->markFunction)((jobject) self->F_localEntities, mark, depth + 1);
}

void clinit_mindustry_net_NetConnection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_NetConnection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_uuid = (jref) (((jobject) createStringLiteral(ctx, u8"AAAAAAAA"_j)));
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_uuid;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_usid = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_kicked = (jint(0));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_connectTime = temp0;
	LINE_NUMBER(23);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_lastReceivedClientSnapshot = (jint(-1));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_rejectedRequests = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_util_Ratekeeper(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Ratekeeper);
	init_arc_util_Ratekeeper(ctx, sp[1].o);
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_chatRate = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_util_Ratekeeper(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Ratekeeper);
	init_arc_util_Ratekeeper(ctx, sp[1].o);
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_packetRate = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_localEntities = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_address = (jref) (frame[1].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_kick(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:kick", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_kick;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:kick", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[3].o = (jobject)SF_mindustry_net_Packets$KickReason_kick;
	sp += 2;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_banned;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_vote;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	(sp++)->l = jlong(30000ll);
	goto label_3;
label_2:;
	INST_LCONST(0);
label_3:;
	{
	sp -= 3;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long])(ctx, sp[0].o, sp[1].o, sp[2].l);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:kick", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(55);
	((func_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].l));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_kick_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:kick", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	((func_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jlong(30000ll)));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_kick_java_lang_String_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:kick", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(65);
	((func_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].l));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:kick", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(70);
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_kicked) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(72);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Kicking connection @ / @; Reason: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_address;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_uuid;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = sp[1].o;
	sp[3].i = temp2;
	sp += 4;
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_net_Packets$KickReason_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_net_Packets$KickReason_name_R_java_lang_String])(ctx, (frame[2].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))), (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp += 1;
	}
label_3:;
	{
	sp -= 5;
	ARRAY_ACCESS(jobject, sp[1].o, sp[3].i) = sp[4].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(75);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_uuid;
	sp[2].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_address;
	((func_mindustry_net_Administration_handleKicked_java_lang_String_java_lang_String_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_handleKicked_java_lang_String_java_lang_String_long])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].l));
	}
label_5:;
	{
	LINE_NUMBER(78);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(79);
	SM_mindustry_gen_Call_kick_mindustry_net_NetConnection_mindustry_net_Packets$KickReason(ctx, (frame[0].o), (frame[2].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(81);
	SM_mindustry_gen_Call_kick_mindustry_net_NetConnection_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	}
label_9:;
	{
	LINE_NUMBER(84);
	((func_mindustry_net_NetConnection_kickDisconnect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_kickDisconnect])(ctx, (frame[0].o));
	LINE_NUMBER(86);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, sp[0].o);
	LINE_NUMBER(87);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_kicked = (jint(1));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_kickDisconnect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:kickDisconnect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	((func_mindustry_net_NetConnection_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_close])(ctx, (frame[0].o));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_NetConnection_isConnected_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:isConnected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:sendStreamAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(100);
	((func_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:sendStream", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[1].o;
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	sp[2].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[2].o));
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[1].o, sp[2].o);
	((mindustry_net_Streamable *) NULL_CHECK(sp[0].o))->F_stream = (jref) sp[1].o;
	LINE_NUMBER(105);
	((func_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:sendStream", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(111);
	clinit_mindustry_net_Packets$StreamBegin(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$StreamBegin);
	init_mindustry_net_Packets$StreamBegin(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(112);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK((frame[1].o)))->F_stream;
	jint temp0 = (jint)((func_java_io_ByteArrayInputStream_available_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_ByteArrayInputStream_available_R_int])(ctx, sp[1].o);
	((mindustry_net_Packets$StreamBegin *) NULL_CHECK(sp[0].o))->F_total = temp0;
	LINE_NUMBER(113);
	sp[0].o = frame[3].o;
	jint temp1 = (jint)SM_mindustry_net_Net_getPacketId_mindustry_net_Packet_R_byte(ctx, (frame[1].o));
	((mindustry_net_Packets$StreamBegin *) NULL_CHECK(sp[0].o))->F_type = temp1;
	LINE_NUMBER(114);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	LINE_NUMBER(115);
	frame[2].i = ((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[3].o)))->F_id);
	}
label_8:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK((frame[1].o)))->F_stream;
	jint temp0 = (jint)((func_java_io_ByteArrayInputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ByteArrayInputStream_available_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(118);
	jint temp0 = 1100;
	sp[0].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK((frame[1].o)))->F_stream;
	jint temp1 = (jint)((func_java_io_ByteArrayInputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ByteArrayInputStream_available_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	sp[0].o = (jobject) createArray(ctx, &class_byte, temp2);
	frame[4].o = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK((frame[1].o)))->F_stream;
	jint temp3 = (jint)((func_java_io_ByteArrayInputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ByteArrayInputStream_read_Array1_byte_R_int])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(121);
	clinit_mindustry_net_Packets$StreamChunk(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$StreamChunk);
	init_mindustry_net_Packets$StreamChunk(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(122);
	((mindustry_net_Packets$StreamChunk *) NULL_CHECK((frame[5].o)))->F_id = (frame[2].i);
	LINE_NUMBER(123);
	((mindustry_net_Packets$StreamChunk *) NULL_CHECK((frame[5].o)))->F_data = (jref) (frame[4].o);
	LINE_NUMBER(124);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[5].o), (jint(1)));
	LINE_NUMBER(125);
	goto label_8;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(128);
	goto label_16;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(126);
	frame[2].o = sp[0].o;
	LINE_NUMBER(127);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_16:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_NetConnection_blacklist(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/NetConnection:blacklist", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_address;
	((func_mindustry_net_Administration_blacklistDos_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_blacklistDos_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_net_NetConnection;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field player
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_net_NetConnection[] {
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
	(void *) M_mindustry_net_NetConnection_kick,
	(void *) M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason,
	(void *) M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long,
	(void *) M_mindustry_net_NetConnection_kick_java_lang_String,
	(void *) M_mindustry_net_NetConnection_kick_java_lang_String_long,
	(void *) M_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long,
	(void *) M_mindustry_net_NetConnection_kickDisconnect,
	(void *) M_mindustry_net_NetConnection_isConnected_R_boolean,
	(void *) M_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream,
	(void *) M_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream,
	(void *) M_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable,
	(void *) M_mindustry_net_NetConnection_blacklist,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "kick", "()V" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;)V" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;J)V" },
	{ "kick", "(Ljava/lang/String;)V" },
	{ "kick", "(Ljava/lang/String;J)V" },
	{ "kick", "(Ljava/lang/String;Lmindustry/net/Packets$KickReason;J)V" },
	{ "kickDisconnect", "()V" },
	{ "isConnected", "()Z" },
	{ "sendStreamAsync", "(Lmindustry/net/Streamable;Ljava/io/ByteArrayOutputStream;)V" },
	{ "sendStream", "(Lmindustry/net/Streamable;Ljava/io/ByteArrayOutputStream;)V" },
	{ "sendStream", "(Lmindustry/net/Streamable;)V" },
	{ "blacklist", "()V" },
	{ "send", "(Ljava/lang/Object;Z)V" },
	{ "close", "()V" },
};

static FieldMetadata fields[] {
	{ "address", &class_java_lang_String, offsetof(mindustry_net_NetConnection, F_address), "Ljava/lang/String;", 17 },
	{ "uuid", &class_java_lang_String, offsetof(mindustry_net_NetConnection, F_uuid), "Ljava/lang/String;", 1 },
	{ "usid", &class_java_lang_String, offsetof(mindustry_net_NetConnection, F_usid), "Ljava/lang/String;", 1 },
	{ "mobile", &class_boolean, offsetof(mindustry_net_NetConnection, F_mobile), "Z", 1 },
	{ "modclient", &class_boolean, offsetof(mindustry_net_NetConnection, F_modclient), "Z", 1 },
	{ "player", &class_mindustry_gen_Player, offsetof(mindustry_net_NetConnection, F_player), "Lmindustry/gen/Player;", 1 },
	{ "kicked", &class_boolean, offsetof(mindustry_net_NetConnection, F_kicked), "Z", 1 },
	{ "connectTime", &class_long, offsetof(mindustry_net_NetConnection, F_connectTime), "J", 1 },
	{ "lastReceivedClientSnapshot", &class_int, offsetof(mindustry_net_NetConnection, F_lastReceivedClientSnapshot), "I", 1 },
	{ "lastReceivedClientTime", &class_long, offsetof(mindustry_net_NetConnection, F_lastReceivedClientTime), "J", 1 },
	{ "rejectedRequests", &class_arc_struct_Seq, offsetof(mindustry_net_NetConnection, F_rejectedRequests), "Larc/struct/Seq;", 1 },
	{ "chatRate", &class_arc_util_Ratekeeper, offsetof(mindustry_net_NetConnection, F_chatRate), "Larc/util/Ratekeeper;", 1 },
	{ "packetRate", &class_arc_util_Ratekeeper, offsetof(mindustry_net_NetConnection, F_packetRate), "Larc/util/Ratekeeper;", 1 },
	{ "localEntities", &class_arc_struct_Seq, offsetof(mindustry_net_NetConnection, F_localEntities), "Larc/struct/Seq;", 1 },
	{ "hasConnected", &class_boolean, offsetof(mindustry_net_NetConnection, F_hasConnected), "Z", 1 },
	{ "hasBegunConnecting", &class_boolean, offsetof(mindustry_net_NetConnection, F_hasBegunConnecting), "Z", 1 },
	{ "determiningAssets", &class_boolean, offsetof(mindustry_net_NetConnection, F_determiningAssets), "Z", 1 },
	{ "receivingAssets", &class_boolean, offsetof(mindustry_net_NetConnection, F_receivingAssets), "Z", 1 },
	{ "hasDisconnected", &class_boolean, offsetof(mindustry_net_NetConnection, F_hasDisconnected), "Z", 1 },
	{ "viewWidth", &class_float, offsetof(mindustry_net_NetConnection, F_viewWidth), "F", 1 },
	{ "viewHeight", &class_float, offsetof(mindustry_net_NetConnection, F_viewHeight), "F", 1 },
	{ "viewX", &class_float, offsetof(mindustry_net_NetConnection, F_viewX), "F", 1 },
	{ "viewY", &class_float, offsetof(mindustry_net_NetConnection, F_viewY), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_NetConnection_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "kick", (intptr_t) M_mindustry_net_NetConnection_kick, VTABLE_mindustry_net_NetConnection_kick, "()V", 1 },
	{ "kick", (intptr_t) M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason, VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason, "(Lmindustry/net/Packets$KickReason;)V", 1 },
	{ "kick", (intptr_t) M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long, VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long, "(Lmindustry/net/Packets$KickReason;J)V", 1 },
	{ "kick", (intptr_t) M_mindustry_net_NetConnection_kick_java_lang_String, VTABLE_mindustry_net_NetConnection_kick_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "kick", (intptr_t) M_mindustry_net_NetConnection_kick_java_lang_String_long, VTABLE_mindustry_net_NetConnection_kick_java_lang_String_long, "(Ljava/lang/String;J)V", 1 },
	{ "kick", (intptr_t) M_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long, VTABLE_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long, "(Ljava/lang/String;Lmindustry/net/Packets$KickReason;J)V", 2 },
	{ "kickDisconnect", (intptr_t) M_mindustry_net_NetConnection_kickDisconnect, VTABLE_mindustry_net_NetConnection_kickDisconnect, "()V", 4 },
	{ "isConnected", (intptr_t) M_mindustry_net_NetConnection_isConnected_R_boolean, VTABLE_mindustry_net_NetConnection_isConnected_R_boolean, "()Z", 1 },
	{ "sendStreamAsync", (intptr_t) M_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream, VTABLE_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream, "(Lmindustry/net/Streamable;Ljava/io/ByteArrayOutputStream;)V", 1 },
	{ "sendStream", (intptr_t) M_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream, VTABLE_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream, "(Lmindustry/net/Streamable;Ljava/io/ByteArrayOutputStream;)V", 1 },
	{ "sendStream", (intptr_t) M_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable, VTABLE_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable, "(Lmindustry/net/Streamable;)V", 1 },
	{ "blacklist", (intptr_t) M_mindustry_net_NetConnection_blacklist, VTABLE_mindustry_net_NetConnection_blacklist, "()V", 1 },
	{ "send", 0, VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean, "(Ljava/lang/Object;Z)V", 1025 },
	{ "close", 0, VTABLE_mindustry_net_NetConnection_close, "()V", 1025 },
};

Class class_mindustry_net_NetConnection{
		.nativeName = (intptr_t) "mindustry/net/NetConnection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_NetConnection),
		.classVtable = (intptr_t) vtable_mindustry_net_NetConnection,
		.staticInitializer = (intptr_t) clinit_mindustry_net_NetConnection,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_net_NetConnection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 23,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_NetConnection = registerClass(&class_mindustry_net_NetConnection);

}
