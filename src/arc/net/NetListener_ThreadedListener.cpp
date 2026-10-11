#include "arc/net/NetListener_ThreadedListener.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/net/NetListener_QueuedListener.h"
#include "arc/net/NetListener.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/net/NetListener_ThreadedListener.h"
#include "java/util/concurrent/Executors.h"
#include "java/util/concurrent/Executor.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_net_NetListener$ThreadedListener(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_net_NetListener$QueuedListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_net_NetListener$ThreadedListener *) object;
	if (self->F_threadPool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_threadPool)->clazz)->markFunction)((jobject) self->F_threadPool, mark, depth + 1);
}

void clinit_arc_net_NetListener$ThreadedListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_net_NetListener$QueuedListener(ctx);
}

void init_arc_net_NetListener$ThreadedListener_arc_net_NetListener(jcontext ctx, jobject self, jobject param0) {
}

}
