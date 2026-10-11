#include "arc/net/Server.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/channels/SelectionKey.h"
#include "java/lang/Runnable.h"
#include "java/nio/Buffer.h"
#include "java/util/concurrent/ConcurrentHashMap.h"
#include "java/net/InetAddress.h"
#include "arc/net/ArcNetException.h"
#include "java/net/InetSocketAddress.h"
#include "arc/net/UdpConnection.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "java/lang/Thread.h"
#include "arc/net/Server_DiscoveryReceiver.h"
#include "arc/net/Connection.h"
#include "java/lang/Exception.h"
#include "java/util/Iterator.h"
#include "arc/net/Server.h"
#include "arc/net/NetListener.h"
#include "arc/net/TcpConnection.h"
#include "arc/util/Structs.h"
#include "arc/net/Server_invoke_arc_net_ServerDiscoveryHandler_ReponseHandler_0.h"
#include "arc/net/DcReason.h"
#include "arc/net/FrameworkMessage_RegisterUDP.h"
#include "arc/net/Server_ServerConnectFilter.h"
#include "arc/net/NetSerializer.h"
#include "java/lang/Object.h"
#include "java/net/SocketAddress.h"
#include "arc/net/FrameworkMessage_DiscoverHost.h"
#include "arc/net/Server_invoke_arc_func_Boolf_0.h"
#include "java/nio/channels/DatagramChannel.h"
#include "java/nio/channels/ServerSocketChannel.h"
#include "arc/net/ServerDiscoveryHandler_ReponseHandler.h"
#include "java/nio/channels/CancelledKeyException.h"
#include "java/nio/channels/Selector.h"
#include "java/lang/RuntimeException.h"
#include "arc/net/Server_1.h"
#include "java/lang/System.h"
#include "arc/math/Rand.h"
#include "java/lang/InterruptedException.h"
#include "arc/struct/IntMap.h"
#include "arc/net/FrameworkMessage_RegisterTCP.h"
#include "java/lang/Iterable.h"
#include "java/nio/ByteBuffer.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/nio/channels/SocketChannel.h"
#include "java/nio/channels/Channel.h"
#include "arc/net/ServerDiscoveryHandler.h"
#include "arc/net/ArcNet.h"
#include "java/io/IOException.h"
#include "java/nio/channels/SelectableChannel.h"
#include "java/net/ServerSocket.h"
#include "arc/net/FrameworkMessage_KeepAlive.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/nio/channels/spi/SelectorProvider.h"
#include "java/lang/CharSequence.h"
#include "arc/net/FrameworkMessage.h"
#include "arc/net/EndPoint.h"
#include "arc/net/Server_invoke_arc_net_ServerDiscoveryHandler_0.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_net_Server(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_Server *) object;
	if (self->F_serializer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_serializer)->clazz)->markFunction)((jobject) self->F_serializer, mark, depth + 1);
	if (self->F_selector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selector)->clazz)->markFunction)((jobject) self->F_selector, mark, depth + 1);
	if (self->F_serverChannel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_serverChannel)->clazz)->markFunction)((jobject) self->F_serverChannel, mark, depth + 1);
	if (self->F_udp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_udp)->clazz)->markFunction)((jobject) self->F_udp, mark, depth + 1);
	if (self->F_connections)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connections)->clazz)->markFunction)((jobject) self->F_connections, mark, depth + 1);
	if (self->F_udpAddressToConnection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_udpAddressToConnection)->clazz)->markFunction)((jobject) self->F_udpAddressToConnection, mark, depth + 1);
	if (self->F_pendingConnections)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pendingConnections)->clazz)->markFunction)((jobject) self->F_pendingConnections, mark, depth + 1);
	if (self->F_listeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listeners)->clazz)->markFunction)((jobject) self->F_listeners, mark, depth + 1);
	if (self->F_listenerLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listenerLock)->clazz)->markFunction)((jobject) self->F_listenerLock, mark, depth + 1);
	if (self->F_updateLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateLock)->clazz)->markFunction)((jobject) self->F_updateLock, mark, depth + 1);
	if (self->F_updateThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateThread)->clazz)->markFunction)((jobject) self->F_updateThread, mark, depth + 1);
	if (self->F_multicastGroup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_multicastGroup)->clazz)->markFunction)((jobject) self->F_multicastGroup, mark, depth + 1);
	if (self->F_discoveryReceiver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_discoveryReceiver)->clazz)->markFunction)((jobject) self->F_discoveryReceiver, mark, depth + 1);
	if (self->F_discoveryHandler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_discoveryHandler)->clazz)->markFunction)((jobject) self->F_discoveryHandler, mark, depth + 1);
	if (self->F_connectFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connectFilter)->clazz)->markFunction)((jobject) self->F_connectFilter, mark, depth + 1);
	if (self->F_bulkWriteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bulkWriteBuffer)->clazz)->markFunction)((jobject) self->F_bulkWriteBuffer, mark, depth + 1);
	if (self->F_bulkWriteLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bulkWriteLock)->clazz)->markFunction)((jobject) self->F_bulkWriteLock, mark, depth + 1);
	if (self->F_dispatchListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dispatchListener)->clazz)->markFunction)((jobject) self->F_dispatchListener, mark, depth + 1);
}

void clinit_arc_net_Server(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_Server_int_int_arc_net_NetSerializer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_Server(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(95);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_net_Connection, (jint(0)));
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_connections = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ConcurrentHashMap);
	init_java_util_concurrent_ConcurrentHashMap(ctx, sp[1].o);
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_udpAddressToConnection = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[1].o);
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_pendingConnections = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_net_NetListener, (jint(0)));
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_listenerLock = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_updateLock = (jref) sp[1].o;
	LINE_NUMBER(35);
	((arc_net_Server *) NULL_CHECK((frame[0].o)))->F_multicastPort = (21010);
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_bulkWriteLock = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_net_Server$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_net_Server$1);
	init_arc_net_Server$1_arc_net_Server(ctx, sp[1].o, (frame[0].o));
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_dispatchListener = (jref) sp[1].o;
	LINE_NUMBER(96);
	((arc_net_Server *) NULL_CHECK((frame[0].o)))->F_writeBufferSize = (frame[1].i);
	LINE_NUMBER(97);
	((arc_net_Server *) NULL_CHECK((frame[0].o)))->F_objectBufferSize = (frame[2].i);
	LINE_NUMBER(98);
	((arc_net_Server *) NULL_CHECK((frame[0].o)))->F_serializer = (jref) (frame[3].o);
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, (frame[1].i));
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_bulkWriteBuffer = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_net_Server_invoke_arc_net_ServerDiscoveryHandler_0(ctx);
		auto proxy = (arc_net_Server_invoke_arc_net_ServerDiscoveryHandler_0 *) gcAlloc(ctx, &class_arc_net_Server_invoke_arc_net_ServerDiscoveryHandler_0);
		sp[1].o = (jobject) proxy;
	}
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_discoveryHandler = (jref) sp[1].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_channels_Selector_open_R_java_nio_channels_Selector(ctx);
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_selector = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(108);
	goto label_19;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(106);
	frame[4].o = sp[0].o;
	LINE_NUMBER(107);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error opening the selector."_j))), (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_19:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Server_setMulticast_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server:setMulticast", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(112);
	((arc_net_Server *) NULL_CHECK((frame[0].o)))->F_multicastPort = (frame[2].i);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_net_InetAddress_getByName_java_lang_String_R_java_net_InetAddress(ctx, (frame[1].o));
	((arc_net_Server *) NULL_CHECK(sp[0].o))->F_multicastGroup = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(117);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(115);
	frame[3].o = sp[0].o;
	LINE_NUMBER(116);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[3].o));
	}
label_5:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Server_setDiscoveryHandler_arc_net_ServerDiscoveryHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server:setDiscoveryHandler", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	((arc_net_Server *) NULL_CHECK((frame[0].o)))->F_discoveryHandler = (jref) (frame[1].o);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Server_setConnectFilter_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server:setConnectFilter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	((arc_net_Server *) NULL_CHECK((frame[0].o)))->F_connectFilter = (jref) (frame[1].o);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_net_Server_getConnectFilter_R_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server:getConnectFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_net_Server *) NULL_CHECK((frame[0].o)))->F_connectFilter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_net_Server_bind_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server:bind", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	clinit_java_net_InetSocketAddress(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_InetSocketAddress);
	init_java_net_InetSocketAddress_int(ctx, sp[1].o, (frame[1].i));
	((func_arc_net_Server_bind_java_net_InetSocketAddress_java_net_InetSocketAddress) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Server_bind_java_net_InetSocketAddress_java_net_InetSocketAddress])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Server_bind_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server:bind", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	clinit_java_net_InetSocketAddress(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_InetSocketAddress);
	init_java_net_InetSocketAddress_int(ctx, sp[1].o, (frame[1].i));
	clinit_java_net_InetSocketAddress(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_net_InetSocketAddress);
	init_java_net_InetSocketAddress_int(ctx, sp[2].o, (frame[2].i));
	((func_arc_net_Server_bind_java_net_InetSocketAddress_java_net_InetSocketAddress) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Server_bind_java_net_InetSocketAddress_java_net_InetSocketAddress])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Server_bind_java_net_InetSocketAddress_java_net_InetSocketAddress(jcontext ctx, jobject self, jobject param0, jobject param1) {
}

}
