#include "arc/net/Connection.h"
#include "java/lang/StringBuilder.h"
#include "java/net/Socket.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/String.h"
#include "java/nio/channels/SocketChannel.h"
#include "java/nio/Buffer.h"
#include "arc/net/ArcNetException.h"
#include "arc/net/ArcNet.h"
#include "java/io/IOException.h"
#include "java/net/InetSocketAddress.h"
#include "arc/net/UdpConnection.h"
#include "java/net/SocketException.h"
#include "java/lang/Throwable.h"
#include "arc/net/Connection.h"
#include "arc/net/NetListener.h"
#include "arc/net/TcpConnection.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/net/DcReason.h"
#include "arc/net/NetSerializer.h"
#include "java/lang/Object.h"
#include "java/net/SocketAddress.h"
#include "arc/net/EndPoint.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/System.h"
#include "arc/net/FrameworkMessage_Ping.h"

extern "C" {


void mark_arc_net_Connection(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_Connection *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_endPoint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_endPoint)->clazz)->markFunction)((jobject) self->F_endPoint, mark, depth + 1);
	if (self->F_tcp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tcp)->clazz)->markFunction)((jobject) self->F_tcp, mark, depth + 1);
	if (self->F_udp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_udp)->clazz)->markFunction)((jobject) self->F_udp, mark, depth + 1);
	if (self->F_udpRemoteAddress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_udpRemoteAddress)->clazz)->markFunction)((jobject) self->F_udpRemoteAddress, mark, depth + 1);
	if (self->F_listeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listeners)->clazz)->markFunction)((jobject) self->F_listeners, mark, depth + 1);
	if (self->F_listenerLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listenerLock)->clazz)->markFunction)((jobject) self->F_listenerLock, mark, depth + 1);
	if (self->F_lastProtocolError)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastProtocolError)->clazz)->markFunction)((jobject) self->F_lastProtocolError, mark, depth + 1);
	if (self->F_arbitraryData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arbitraryData)->clazz)->markFunction)((jobject) self->F_arbitraryData, mark, depth + 1);
}

void clinit_arc_net_Connection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_Connection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_Connection(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_id = (jint(-1));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_net_NetListener, (jint(0)));
	((arc_net_Connection *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((arc_net_Connection *) NULL_CHECK(sp[0].o))->F_listenerLock = (jref) sp[1].o;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Connection_initialize_arc_net_NetSerializer_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:initialize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_net_TcpConnection(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_net_TcpConnection);
	init_arc_net_TcpConnection_arc_net_NetSerializer_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i));
	((arc_net_Connection *) NULL_CHECK(sp[0].o))->F_tcp = (jref) sp[1].o;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_net_Connection_getID_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:getID", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return ((jint)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jbool M_arc_net_Connection_isConnected_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:isConnected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return ((jint)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_isConnected);
	}

	popStackFrame(ctx);
}

jobject M_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:getLastProtocolError", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_lastProtocolError;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_net_Connection_sendTCP_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:sendTCP", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"object cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_net_ArcNetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_tcp;
	jint temp0 = (jint)((func_arc_net_TcpConnection_send_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_TcpConnection_send_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(76);
	frame[2].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_arc_net_DcReason(ctx);
	sp[1].o = (jobject)SF_arc_net_DcReason_error;
	((func_arc_net_Connection_close_arc_net_DcReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_close_arc_net_DcReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	SM_arc_net_ArcNet_handleError_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_net_Connection_sendTCPBuffer_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:sendTCPBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buffer cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_net_ArcNetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_tcp;
	jint temp0 = (jint)((func_arc_net_TcpConnection_sendBuffer_java_nio_ByteBuffer_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_TcpConnection_sendBuffer_java_nio_ByteBuffer_R_int])(ctx, sp[0].o, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(93);
	frame[2].o = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_arc_net_DcReason(ctx);
	sp[1].o = (jobject)SF_arc_net_DcReason_error;
	((func_arc_net_Connection_close_arc_net_DcReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_close_arc_net_DcReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(95);
	SM_arc_net_ArcNet_handleError_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_net_Connection_sendUDP_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:sendUDP", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"object cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udpRemoteAddress;
	frame[2].o = sp[0].o;
	LINE_NUMBER(108);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udp;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udp;
	sp[0].o = (jobject)((arc_net_UdpConnection *) NULL_CHECK(sp[0].o))->F_connectedAddress;
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(110);
	if ((frame[2].o) != nullptr) goto label_0;
	}
	{
	if (((jint)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_isConnected) == 0) goto label_0;
	}
	{
	LINE_NUMBER(111);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Connection is not connected via UDP."_j))));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_net_ArcNetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(114);
	if ((frame[2].o) != nullptr) goto label_11;
	}
	{
	clinit_java_net_SocketException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_SocketException);
	init_java_net_SocketException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Connection is closed."_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udp;
	jint temp0 = (jint)((func_arc_net_UdpConnection_send_java_lang_Object_java_net_SocketAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_UdpConnection_send_java_lang_Object_java_net_SocketAddress_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(117);
	frame[3].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_arc_net_DcReason(ctx);
	sp[1].o = (jobject)SF_arc_net_DcReason_error;
	((func_arc_net_Connection_close_arc_net_DcReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_close_arc_net_DcReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	SM_arc_net_ArcNet_handleError_java_lang_Throwable(ctx, (frame[3].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_arc_net_Connection_sendUDPBuffer_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:sendUDPBuffer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buffer cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udpRemoteAddress;
	frame[2].o = sp[0].o;
	LINE_NUMBER(131);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udp;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udp;
	sp[0].o = (jobject)((arc_net_UdpConnection *) NULL_CHECK(sp[0].o))->F_connectedAddress;
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(133);
	if ((frame[2].o) != nullptr) goto label_0;
	}
	{
	if (((jint)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_isConnected) == 0) goto label_0;
	}
	{
	LINE_NUMBER(134);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Connection is not connected via UDP."_j))));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_net_ArcNetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(137);
	if ((frame[2].o) != nullptr) goto label_11;
	}
	{
	clinit_java_net_SocketException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_SocketException);
	init_java_net_SocketException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Connection is closed."_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udp;
	jint temp0 = (jint)((func_arc_net_UdpConnection_sendBuffer_java_nio_ByteBuffer_java_net_SocketAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_UdpConnection_sendBuffer_java_nio_ByteBuffer_java_net_SocketAddress_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(140);
	frame[3].o = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	clinit_arc_net_DcReason(ctx);
	sp[1].o = (jobject)SF_arc_net_DcReason_error;
	((func_arc_net_Connection_close_arc_net_DcReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_close_arc_net_DcReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	SM_arc_net_ArcNet_handleError_java_lang_Throwable(ctx, (frame[3].o));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_net_Connection_close_arc_net_DcReason(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:close", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	frame[2].i = ((jint)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_isConnected);
	LINE_NUMBER(149);
	((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_isConnected = (jint(0));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_tcp;
	((func_arc_net_TcpConnection_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_TcpConnection_close])(ctx, sp[0].o);
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udp;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udp;
	sp[0].o = (jobject)((arc_net_UdpConnection *) NULL_CHECK(sp[0].o))->F_connectedAddress;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_udp;
	((func_arc_net_UdpConnection_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_UdpConnection_close])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(153);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(154);
	((func_arc_net_Connection_notifyDisconnected_arc_net_DcReason) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_Connection_notifyDisconnected_arc_net_DcReason])(ctx, (frame[0].o), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(156);
	((func_arc_net_Connection_setConnected_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_Connection_setConnected_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Connection_updateReturnTripTime(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:updateReturnTripTime", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	clinit_arc_net_FrameworkMessage$Ping(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_net_FrameworkMessage$Ping);
	init_arc_net_FrameworkMessage$Ping(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(168);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_net_Connection *) NULL_CHECK(sp[1].o))->F_lastPingID;
	((arc_net_Connection *) NULL_CHECK(sp[1].o))->F_lastPingID = (temp0 + (jint(1)));
	((arc_net_FrameworkMessage$Ping *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	jlong temp3 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((arc_net_Connection *) NULL_CHECK(sp[0].o))->F_lastPingSendTime = temp3;
	LINE_NUMBER(170);
	jint temp4 = (jint)((func_arc_net_Connection_sendTCP_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_Connection_sendTCP_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_net_Connection_getReturnTripTime_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:getReturnTripTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return ((jint)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_returnTripTime);
	}

	popStackFrame(ctx);
}

void M_arc_net_Connection_setKeepAliveTCP_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:setKeepAliveTCP", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_tcp;
	((arc_net_TcpConnection *) NULL_CHECK(sp[0].o))->F_keepAliveMillis = (frame[1].i);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Connection_setTimeout_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:setTimeout", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_tcp;
	((arc_net_TcpConnection *) NULL_CHECK(sp[0].o))->F_timeoutMillis = (frame[1].i);
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Connection_addListener_arc_net_NetListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:addListener", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(212);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(213);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listenerLock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_14; }
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listeners;
	frame[3].o = sp[0].o;
	LINE_NUMBER(216);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(217);
	frame[5].i = (jint(0));
	}
label_14:;
	{
	if ((frame[5].i) >= (frame[4].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_15
	}
	{
	LINE_NUMBER(218);
	if ((frame[1].o) != ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(219);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_15; }
	{
	LINE_NUMBER(217);
	INST_IINC(5, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_14
	}
label_15:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)createArray(ctx, &class_arc_net_NetListener, ((frame[4].i) + (jint(1))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(221);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(222);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(223);
	((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listeners = (jref) (frame[5].o);
	LINE_NUMBER(224);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_22;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_22:;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Connection_removeListener_arc_net_NetListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:removeListener", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(228);
	if ((frame[1].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(229);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listenerLock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listeners;
	frame[3].o = sp[0].o;
	LINE_NUMBER(232);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(233);
	if ((frame[4].i) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(234);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_20; }
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)createArray(ctx, &class_arc_net_NetListener, ((frame[4].i) - (jint(1))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(236);
	frame[6].i = (jint(0));
	frame[7].i = (jint(0));
	}
label_20:;
	{
	if ((frame[6].i) >= (frame[4].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_21
	}
	{
	LINE_NUMBER(237);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(238);
	if ((frame[1].o) != (frame[8].o)) goto label_24;
	}
	LINE_NUMBER(239);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_26
label_24:;
	{
	LINE_NUMBER(240);
	if ((frame[7].i) != ((frame[4].i) - (jint(1)))) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(241);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_21; }
	if (bypasses[1]) { bypasses[1] = false; goto label_26; }
	{
	LINE_NUMBER(242);
	sp[0].o = frame[5].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[8].o);
	}
label_26:;
	{
	LINE_NUMBER(236);
	INST_IINC(6, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_6; } // goto label_20
	}
label_21:;
	{
	LINE_NUMBER(244);
	((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listeners = (jref) (frame[5].o);
	LINE_NUMBER(245);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_29;
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_29:;
	LINE_NUMBER(246);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Connection_notifyConnected(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:notifyConnected", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listeners;
	frame[1].o = sp[0].o;
	LINE_NUMBER(250);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(251);
	((func_arc_net_NetListener_connected_arc_net_Connection) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_connected_arc_net_Connection, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(250);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Connection_notifyDisconnected_arc_net_DcReason(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:notifyDisconnected", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listeners;
	frame[2].o = sp[0].o;
	LINE_NUMBER(257);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(258);
	((func_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason, (frame[6].o)))(ctx, (frame[6].o), (frame[0].o), (frame[1].o));
	LINE_NUMBER(257);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(260);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Connection_notifyIdle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:notifyIdle", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listeners;
	frame[1].o = sp[0].o;
	LINE_NUMBER(264);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(265);
	((func_arc_net_NetListener_idle_arc_net_Connection) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_idle_arc_net_Connection, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_arc_net_Connection_isIdle_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_Connection_isIdle_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
	LINE_NUMBER(267);
	goto label_3;
label_6:;
	{
	LINE_NUMBER(264);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(269);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Connection_notifyReceived_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:notifyReceived", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	if ((isInstance(ctx, (frame[1].o), &class_arc_net_FrameworkMessage$Ping)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(273);
	frame[2].o = (checkCast(ctx, &class_arc_net_FrameworkMessage$Ping, (frame[1].o)));
	LINE_NUMBER(274);
	if (((jint)((arc_net_FrameworkMessage$Ping *) NULL_CHECK((frame[2].o)))->F_isReply) == 0) goto label_4;
	}
	{
	LINE_NUMBER(275);
	if (((jint)((arc_net_FrameworkMessage$Ping *) NULL_CHECK((frame[2].o)))->F_id) != (((jint)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_lastPingID) - (jint(1)))) goto label_1;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((arc_net_Connection *) NULL_CHECK(sp[0].o))->F_returnTripTime = (jint((temp0 - ((jlong)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_lastPingSendTime))));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(280);
	((arc_net_FrameworkMessage$Ping *) NULL_CHECK((frame[2].o)))->F_isReply = (jint(1));
	LINE_NUMBER(281);
	jint temp0 = (jint)((func_arc_net_Connection_sendTCP_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_Connection_sendTCP_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_listeners;
	frame[2].o = sp[0].o;
	LINE_NUMBER(286);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_9:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_10;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(287);
	((func_arc_net_NetListener_received_arc_net_Connection_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_received_arc_net_Connection_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[0].o), (frame[1].o));
	LINE_NUMBER(286);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_net_Connection_getEndPoint_R_arc_net_EndPoint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Connection:getEndPoint", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_endPoint;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress(jcontext ctx, jobject self) {
	return nullptr;
}

}
