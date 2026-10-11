#include "arc/net/NetListener_QueuedListener.h"
#include "arc/net/Connection.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/net/NetListener_QueuedListener.h"
#include "arc/net/NetListener.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/net/NetListener_QueuedListener_invoke_java_lang_Runnable_1.h"
#include "arc/net/NetListener_QueuedListener_invoke_java_lang_Runnable_2.h"
#include "arc/net/DcReason.h"
#include "arc/net/NetListener_QueuedListener_invoke_java_lang_Runnable_3.h"
#include "arc/net/NetListener_QueuedListener_invoke_java_lang_Runnable_0.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_net_NetListener$QueuedListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_NetListener$QueuedListener *) object;
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
}

void clinit_arc_net_NetListener$QueuedListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_NetListener$QueuedListener_arc_net_NetListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener$QueuedListener:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_NetListener$QueuedListener(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(55);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(56);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(57);
	((arc_net_NetListener$QueuedListener *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_NetListener$QueuedListener_connected_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener$QueuedListener:connected", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_net_NetListener$QueuedListener_queue_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_NetListener$QueuedListener_queue_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_NetListener$QueuedListener_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener$QueuedListener:disconnected", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_1);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_net_NetListener$QueuedListener_queue_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_NetListener$QueuedListener_queue_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_NetListener$QueuedListener_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener$QueuedListener:received", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_2);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_net_NetListener$QueuedListener_queue_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_NetListener$QueuedListener_queue_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_NetListener$QueuedListener_idle_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener$QueuedListener:idle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_arc_net_NetListener$QueuedListener_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_net_NetListener$QueuedListener_queue_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_NetListener$QueuedListener_queue_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_NetListener$QueuedListener_lambda$idle$0_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener$QueuedListener:lambda$idle$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_net_NetListener$QueuedListener *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_arc_net_NetListener_idle_arc_net_Connection) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_idle_arc_net_Connection, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_NetListener$QueuedListener_lambda$received$0_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener$QueuedListener:lambda$received$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((arc_net_NetListener$QueuedListener *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_arc_net_NetListener_received_arc_net_Connection_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_received_arc_net_Connection_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_NetListener$QueuedListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener$QueuedListener:lambda$disconnected$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_net_NetListener$QueuedListener *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_NetListener$QueuedListener_lambda$connected$0_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetListener$QueuedListener:lambda$connected$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_net_NetListener$QueuedListener *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_arc_net_NetListener_connected_arc_net_Connection) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_connected_arc_net_Connection, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_net_NetListener$QueuedListener[] {
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
	(void *) M_arc_net_NetListener$QueuedListener_connected_arc_net_Connection,
	(void *) M_arc_net_NetListener$QueuedListener_disconnected_arc_net_Connection_arc_net_DcReason,
	(void *) M_arc_net_NetListener$QueuedListener_received_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_NetListener$QueuedListener_idle_arc_net_Connection,
	(void *) nullptr,
	(void *) M_arc_net_NetListener$QueuedListener_lambda$idle$0_arc_net_Connection,
	(void *) M_arc_net_NetListener$QueuedListener_lambda$received$0_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_NetListener$QueuedListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason,
	(void *) M_arc_net_NetListener$QueuedListener_lambda$connected$0_arc_net_Connection,
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
	{ "queue", "(Ljava/lang/Runnable;)V" },
	{ "lambda$idle$0", "(Larc/net/Connection;)V" },
	{ "lambda$received$0", "(Larc/net/Connection;Ljava/lang/Object;)V" },
	{ "lambda$disconnected$0", "(Larc/net/Connection;Larc/net/DcReason;)V" },
	{ "lambda$connected$0", "(Larc/net/Connection;)V" },
};

static jclass interfaces[] { &class_arc_net_NetListener, };

static FieldMetadata fields[] {
	{ "listener", &class_arc_net_NetListener, offsetof(arc_net_NetListener$QueuedListener, F_listener), "Larc/net/NetListener;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_NetListener$QueuedListener_arc_net_NetListener, 0, "(Larc/net/NetListener;)V", 1 },
	{ "connected", (intptr_t) M_arc_net_NetListener$QueuedListener_connected_arc_net_Connection, VTABLE_arc_net_NetListener$QueuedListener_connected_arc_net_Connection, "(Larc/net/Connection;)V", 1 },
	{ "disconnected", (intptr_t) M_arc_net_NetListener$QueuedListener_disconnected_arc_net_Connection_arc_net_DcReason, VTABLE_arc_net_NetListener$QueuedListener_disconnected_arc_net_Connection_arc_net_DcReason, "(Larc/net/Connection;Larc/net/DcReason;)V", 1 },
	{ "received", (intptr_t) M_arc_net_NetListener$QueuedListener_received_arc_net_Connection_java_lang_Object, VTABLE_arc_net_NetListener$QueuedListener_received_arc_net_Connection_java_lang_Object, "(Larc/net/Connection;Ljava/lang/Object;)V", 1 },
	{ "idle", (intptr_t) M_arc_net_NetListener$QueuedListener_idle_arc_net_Connection, VTABLE_arc_net_NetListener$QueuedListener_idle_arc_net_Connection, "(Larc/net/Connection;)V", 1 },
	{ "queue", 0, VTABLE_arc_net_NetListener$QueuedListener_queue_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1028 },
	{ "lambda$idle$0", (intptr_t) M_arc_net_NetListener$QueuedListener_lambda$idle$0_arc_net_Connection, VTABLE_arc_net_NetListener$QueuedListener_lambda$idle$0_arc_net_Connection, "(Larc/net/Connection;)V", 4098 },
	{ "lambda$received$0", (intptr_t) M_arc_net_NetListener$QueuedListener_lambda$received$0_arc_net_Connection_java_lang_Object, VTABLE_arc_net_NetListener$QueuedListener_lambda$received$0_arc_net_Connection_java_lang_Object, "(Larc/net/Connection;Ljava/lang/Object;)V", 4098 },
	{ "lambda$disconnected$0", (intptr_t) M_arc_net_NetListener$QueuedListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason, VTABLE_arc_net_NetListener$QueuedListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason, "(Larc/net/Connection;Larc/net/DcReason;)V", 4098 },
	{ "lambda$connected$0", (intptr_t) M_arc_net_NetListener$QueuedListener_lambda$connected$0_arc_net_Connection, VTABLE_arc_net_NetListener$QueuedListener_lambda$connected$0_arc_net_Connection, "(Larc/net/Connection;)V", 4098 },
};

Class class_arc_net_NetListener$QueuedListener{
		.nativeName = (intptr_t) "arc/net/NetListener$QueuedListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_NetListener$QueuedListener),
		.classVtable = (intptr_t) vtable_arc_net_NetListener$QueuedListener,
		.staticInitializer = (intptr_t) clinit_arc_net_NetListener$QueuedListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_NetListener$QueuedListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_net_NetListener,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_NetListener$QueuedListener = registerClass(&class_arc_net_NetListener$QueuedListener);

}

