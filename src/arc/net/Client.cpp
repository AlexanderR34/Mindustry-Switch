#include "arc/net/Client.h"
#include "arc/net/Client_invoke_arc_func_Prov_0.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/channels/SelectionKey.h"
#include "java/util/concurrent/Future.h"
#include "java/util/ArrayList.h"
#include "arc/net/Client_invoke_java_util_concurrent_Callable_0.h"
#include "java/lang/Runnable.h"
#include "arc/net/Client_invoke_java_util_concurrent_Callable_1.h"
#include "java/nio/Buffer.h"
#include "java/net/InetAddress.h"
#include "arc/net/ArcNetException.h"
#include "arc/net/UdpConnection.h"
#include "java/net/InetSocketAddress.h"
#include "java/lang/Throwable.h"
#include "arc/net/Client.h"
#include "java/lang/Thread.h"
#include "arc/net/Connection.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/Iterator.h"
#include "arc/net/TcpConnection.h"
#include "arc/net/DcReason.h"
#include "arc/net/FrameworkMessage_RegisterUDP.h"
#include "java/util/concurrent/Callable.h"
#include "arc/net/NetSerializer.h"
#include "java/lang/Object.h"
#include "java/net/SocketAddress.h"
#include "arc/net/FrameworkMessage_DiscoverHost.h"
#include "java/util/Collections.h"
#include "java/lang/IllegalStateException.h"
#include "java/nio/channels/CancelledKeyException.h"
#include "java/util/Enumeration.h"
#include "java/nio/channels/Selector.h"
#include "java/lang/RuntimeException.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/lang/InterruptedException.h"
#include "java/net/DatagramPacket.h"
#include "arc/net/FrameworkMessage_RegisterTCP.h"
#include "java/nio/ByteBuffer.h"
#include "arc/func/Cons.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/net/DatagramSocket.h"
#include "java/io/IOException.h"
#include "java/net/InterfaceAddress.h"
#include "arc/net/FrameworkMessage_KeepAlive.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/net/NetworkInterface.h"
#include "java/net/SocketTimeoutException.h"
#include "arc/net/FrameworkMessage.h"
#include "arc/util/Threads.h"
#include "arc/net/EndPoint.h"

extern "C" {


void mark_arc_net_Client(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_net_Connection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_net_Client *) object;
	if (self->F_serialization)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_serialization)->clazz)->markFunction)((jobject) self->F_serialization, mark, depth + 1);
	if (self->F_selector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selector)->clazz)->markFunction)((jobject) self->F_selector, mark, depth + 1);
	if (self->F_tcpRegistrationLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tcpRegistrationLock)->clazz)->markFunction)((jobject) self->F_tcpRegistrationLock, mark, depth + 1);
	if (self->F_udpRegistrationLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_udpRegistrationLock)->clazz)->markFunction)((jobject) self->F_udpRegistrationLock, mark, depth + 1);
	if (self->F_updateLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateLock)->clazz)->markFunction)((jobject) self->F_updateLock, mark, depth + 1);
	if (self->F_updateThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateThread)->clazz)->markFunction)((jobject) self->F_updateThread, mark, depth + 1);
	if (self->F_connectHost)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connectHost)->clazz)->markFunction)((jobject) self->F_connectHost, mark, depth + 1);
	if (self->F_discoverExecutor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_discoverExecutor)->clazz)->markFunction)((jobject) self->F_discoverExecutor, mark, depth + 1);
	if (self->F_discoveryPacket)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_discoveryPacket)->clazz)->markFunction)((jobject) self->F_discoveryPacket, mark, depth + 1);
}

void clinit_arc_net_Client(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_net_Connection(ctx);
}

void init_arc_net_Client_int_int_arc_net_NetSerializer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Client:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_Client(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(63);
	init_arc_net_Connection(ctx, (frame[0].o));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((arc_net_Client *) NULL_CHECK(sp[0].o))->F_tcpRegistrationLock = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((arc_net_Client *) NULL_CHECK(sp[0].o))->F_udpRegistrationLock = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((arc_net_Client *) NULL_CHECK(sp[0].o))->F_updateLock = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Threads_unboundedExecutor_java_lang_String_R_java_util_concurrent_ExecutorService(ctx, (((jobject) createStringLiteral(ctx, u8"Server Discovery"_j))));
	((arc_net_Client *) NULL_CHECK(sp[0].o))->F_discoverExecutor = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_net_Client_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_net_Client_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_net_Client_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	((arc_net_Client *) NULL_CHECK(sp[0].o))->F_discoveryPacket = (jref) sp[1].o;
	LINE_NUMBER(64);
	((arc_net_Connection *) NULL_CHECK((frame[0].o)))->F_endPoint = (jref) (frame[0].o);
	LINE_NUMBER(66);
	((arc_net_Client *) NULL_CHECK((frame[0].o)))->F_serialization = (jref) (frame[3].o);
	LINE_NUMBER(68);
	((func_arc_net_Client_initialize_arc_net_NetSerializer_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_Client_initialize_arc_net_NetSerializer_int_int])(ctx, (frame[0].o), (frame[3].o), (frame[1].i), (frame[2].i));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_channels_Selector_open_R_java_nio_channels_Selector(ctx);
	((arc_net_Client *) NULL_CHECK(sp[0].o))->F_selector = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(74);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(72);
	frame[4].o = sp[0].o;
	LINE_NUMBER(73);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error opening selector."_j))), (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Client_setDiscoveryPacket_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Client:setDiscoveryPacket", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	((arc_net_Client *) NULL_CHECK((frame[0].o)))->F_discoveryPacket = (jref) (frame[1].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Client_connect_int_java_lang_String_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Client:connect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_net_InetAddress_getByName_java_lang_String_R_java_net_InetAddress(ctx, (frame[2].o));
	((func_arc_net_Client_connect_int_java_net_InetAddress_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Client_connect_int_java_net_InetAddress_int_int])(ctx, sp[0].o, temp0, sp[1].o, (frame[3].i), (jint(-1)));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Client_connect_int_java_lang_String_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Client:connect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_net_InetAddress_getByName_java_lang_String_R_java_net_InetAddress(ctx, (frame[2].o));
	((func_arc_net_Client_connect_int_java_net_InetAddress_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Client_connect_int_java_net_InetAddress_int_int])(ctx, sp[0].o, temp0, sp[1].o, (frame[3].i), (frame[4].i));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Client_connect_int_java_net_InetAddress_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Client:connect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(102);
	((func_arc_net_Client_connect_int_java_net_InetAddress_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_Client_connect_int_java_net_InetAddress_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (jint(-1)));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Client_connect_int_java_net_InetAddress_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
}

}
