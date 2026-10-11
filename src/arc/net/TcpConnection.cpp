#include "arc/net/TcpConnection.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/channels/SelectionKey.h"
#include "arc/net/TcpConnection.h"
#include "java/nio/channels/spi/SelectorProvider.h"
#include "java/net/Socket.h"
#include "java/nio/ByteBuffer.h"
#include "arc/net/NetSerializer.h"
#include "java/lang/Object.h"
#include "java/net/SocketAddress.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/nio/channels/SocketChannel.h"
#include "arc/net/ArcNetException.h"
#include "java/io/IOException.h"
#include "java/nio/channels/SelectableChannel.h"
#include "java/nio/channels/Selector.h"
#include "java/net/SocketException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_net_TcpConnection(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_TcpConnection *) object;
	if (self->F_socketChannel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_socketChannel)->clazz)->markFunction)((jobject) self->F_socketChannel, mark, depth + 1);
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

void clinit_arc_net_TcpConnection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_TcpConnection_arc_net_NetSerializer_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/TcpConnection:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_TcpConnection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((arc_net_TcpConnection *) NULL_CHECK((frame[0].o)))->F_keepAliveMillis = (8000);
	LINE_NUMBER(18);
	((arc_net_TcpConnection *) NULL_CHECK((frame[0].o)))->F_timeoutMillis = (12000);
	LINE_NUMBER(19);
	((arc_net_TcpConnection *) NULL_CHECK((frame[0].o)))->F_idleThreshold = (jfloat(0.1f));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((arc_net_TcpConnection *) NULL_CHECK(sp[0].o))->F_writeLock = (jref) sp[1].o;
	LINE_NUMBER(28);
	((arc_net_TcpConnection *) NULL_CHECK((frame[0].o)))->F_serialization = (jref) (frame[1].o);
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer(ctx, (frame[2].i));
	((arc_net_TcpConnection *) NULL_CHECK(sp[0].o))->F_writeBuffer = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer(ctx, (frame[3].i));
	((arc_net_TcpConnection *) NULL_CHECK(sp[0].o))->F_readBuffer = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_net_TcpConnection *) NULL_CHECK((frame[0].o)))->F_readBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_net_TcpConnection_accept_java_nio_channels_Selector_java_nio_channels_SocketChannel_R_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject param0, jobject param1) {
	return nullptr;
}

}
