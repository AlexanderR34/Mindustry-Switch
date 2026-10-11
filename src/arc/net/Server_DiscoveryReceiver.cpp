#include "arc/net/Server_DiscoveryReceiver.h"
#include "arc/net/Server_DiscoveryReceiver.h"
#include "java/net/MulticastSocket.h"
#include "arc/net/Server.h"
#include "java/net/DatagramPacket.h"
#include "arc/net/Server_DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler_ReponseHandler_0.h"
#include "java/lang/Runnable.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/net/SocketAddress.h"
#include "java/lang/String.h"
#include "arc/util/Threads.h"
#include "java/net/InetAddress.h"
#include "arc/net/ServerDiscoveryHandler_ReponseHandler.h"
#include "arc/net/ArcNet.h"
#include "arc/net/ServerDiscoveryHandler.h"
#include "java/io/IOException.h"
#include "java/net/SocketException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"
#include "arc/net/Server_DiscoveryReceiver_invoke_java_lang_Runnable_0.h"

extern "C" {


void mark_arc_net_Server$DiscoveryReceiver(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_Server$DiscoveryReceiver *) object;
	if (self->F_socket)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_socket)->clazz)->markFunction)((jobject) self->F_socket, mark, depth + 1);
	if (self->F_multicastThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_multicastThread)->clazz)->markFunction)((jobject) self->F_multicastThread, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_net_Server$DiscoveryReceiver(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_Server$DiscoveryReceiver_arc_net_Server_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server$DiscoveryReceiver:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_Server$DiscoveryReceiver(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(734);
	((arc_net_Server$DiscoveryReceiver *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(730);
	((arc_net_Server$DiscoveryReceiver *) NULL_CHECK((frame[0].o)))->F_socket = (jref) (jobject(nullptr));
	LINE_NUMBER(735);
	((arc_net_Server$DiscoveryReceiver *) NULL_CHECK((frame[0].o)))->F_multicastPort = (frame[2].i);
	LINE_NUMBER(736);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Server$DiscoveryReceiver_close(jcontext ctx, jobject self) {
}

}
