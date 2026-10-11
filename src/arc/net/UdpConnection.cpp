#include "arc/net/UdpConnection.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/channels/SelectionKey.h"
#include "java/nio/channels/spi/SelectorProvider.h"
#include "java/nio/ByteBuffer.h"
#include "arc/net/NetSerializer.h"
#include "java/lang/Object.h"
#include "java/net/SocketAddress.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/nio/channels/DatagramChannel.h"
#include "java/net/DatagramSocket.h"
#include "arc/net/ArcNetException.h"
#include "java/io/IOException.h"
#include "java/nio/channels/Selector.h"
#include "java/nio/channels/SelectableChannel.h"
#include "arc/net/UdpConnection.h"
#include "java/net/InetSocketAddress.h"
#include "java/net/SocketException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_net_UdpConnection(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_UdpConnection *) object;
	if (self->F_connectedAddress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connectedAddress)->clazz)->markFunction)((jobject) self->F_connectedAddress, mark, depth + 1);
	if (self->F_datagramChannel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_datagramChannel)->clazz)->markFunction)((jobject) self->F_datagramChannel, mark, depth + 1);
	if (self->F_readBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_readBuffer)->clazz)->markFunction)((jobject) self->F_readBuffer, mark, depth + 1);
	if (self->F_writeBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writeBuffer)->clazz)->markFunction)((jobject) self->F_writeBuffer, mark, depth + 1);
	if (self->F_serialization)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_serialization)->clazz)->markFunction)((jobject) self->F_serialization, mark, depth + 1);
	if (self->F_selectionKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectionKey)->clazz)->markFunction)((jobject) self->F_selectionKey, mark, depth + 1);
	if (self->F_writeLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writeLock)->clazz)->markFunction)((jobject) self->F_writeLock, mark, depth + 1);
}

void clinit_arc_net_UdpConnection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_UdpConnection_arc_net_NetSerializer_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/UdpConnection:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_UdpConnection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((arc_net_UdpConnection *) NULL_CHECK((frame[0].o)))->F_keepAliveMillis = (19000);
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((arc_net_UdpConnection *) NULL_CHECK(sp[0].o))->F_writeLock = (jref) sp[1].o;
	LINE_NUMBER(24);
	((arc_net_UdpConnection *) NULL_CHECK((frame[0].o)))->F_serialization = (jref) (frame[1].o);
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer(ctx, (frame[2].i));
	((arc_net_UdpConnection *) NULL_CHECK(sp[0].o))->F_readBuffer = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, (frame[2].i));
	((arc_net_UdpConnection *) NULL_CHECK(sp[0].o))->F_writeBuffer = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_UdpConnection_bind_java_nio_channels_Selector_java_net_InetSocketAddress(jcontext ctx, jobject self, jobject param0, jobject param1) {
}

}
