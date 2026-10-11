#include "arc/net/NetListener.h"
#include "arc/net/Connection.h"
#include "java/lang/Object.h"
#include "arc/net/NetListener_QueuedListener.h"
#include "arc/net/NetListener.h"
#include "arc/net/NetListener_LagListener.h"
#include "arc/net/NetListener_ThreadedListener.h"
#include "arc/net/DcReason.h"

extern "C" {


void mark_arc_net_NetListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_NetListener *) object;
}

void clinit_arc_net_NetListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_net_NetListener_connected_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener:connected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener:disconnected", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_NetListener_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener:received", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_NetListener_idle_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener:idle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_net_NetListener[] {
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
	(void *) M_arc_net_NetListener_idle_arc_net_Connection,
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
};

static jclass innerClasses[] {
	&class_arc_net_NetListener$LagListener,
	&class_arc_net_NetListener$ThreadedListener,
	&class_arc_net_NetListener$QueuedListener,
};

static MethodMetadata methods[] {
	{ "connected", (intptr_t) M_arc_net_NetListener_connected_arc_net_Connection, INDEX_arc_net_NetListener_connected_arc_net_Connection, "(Larc/net/Connection;)V", 1 },
	{ "disconnected", (intptr_t) M_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason, INDEX_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason, "(Larc/net/Connection;Larc/net/DcReason;)V", 1 },
	{ "received", (intptr_t) M_arc_net_NetListener_received_arc_net_Connection_java_lang_Object, INDEX_arc_net_NetListener_received_arc_net_Connection_java_lang_Object, "(Larc/net/Connection;Ljava/lang/Object;)V", 1 },
	{ "idle", (intptr_t) M_arc_net_NetListener_idle_arc_net_Connection, INDEX_arc_net_NetListener_idle_arc_net_Connection, "(Larc/net/Connection;)V", 1 },
};

Class class_arc_net_NetListener{
		.nativeName = (intptr_t) "arc/net/NetListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_NetListener),
		.classVtable = (intptr_t) vtable_arc_net_NetListener,
		.staticInitializer = (intptr_t) clinit_arc_net_NetListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_NetListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_NetListener = registerClass(&class_arc_net_NetListener);

}
