#include "arc/net/NetListener_LagListener.h"
#include "java/lang/Math.h"
#include "arc/net/NetListener.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/ScheduledExecutorService.h"
#include "java/util/concurrent/Executors.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "arc/net/NetListener_QueuedListener.h"
#include "java/util/LinkedList.h"
#include "java/util/concurrent/ScheduledFuture.h"
#include "arc/net/NetListener_LagListener.h"
#include "arc/net/NetListener_LagListener_invoke_java_lang_Runnable_0.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_net_NetListener$LagListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_NetListener$LagListener *) object;
	if (self->F_threadPool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_threadPool)->clazz)->markFunction)((jobject) self->F_threadPool, mark, depth + 1);
	if (self->F_runnables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runnables)->clazz)->markFunction)((jobject) self->F_runnables, mark, depth + 1);
}

void clinit_arc_net_NetListener$LagListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_net_NetListener$QueuedListener(ctx);
}

void init_arc_net_NetListener$LagListener_int_int_arc_net_NetListener(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
}

}
