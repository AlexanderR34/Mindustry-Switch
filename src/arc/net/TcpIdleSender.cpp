#include "arc/net/TcpIdleSender.h"
#include "arc/net/Connection.h"
#include "java/lang/Object.h"
#include "arc/net/NetListener.h"
#include "arc/net/TcpIdleSender.h"

extern "C" {


void mark_arc_net_TcpIdleSender(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_TcpIdleSender *) object;
}

void clinit_arc_net_TcpIdleSender(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_TcpIdleSender(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/TcpIdleSender:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_TcpIdleSender(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_TcpIdleSender_idle_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/TcpIdleSender:idle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(9);
	if (((jint)((arc_net_TcpIdleSender *) NULL_CHECK((frame[0].o)))->F_started) != 0) goto label_1;
	}
	{
	LINE_NUMBER(10);
	((arc_net_TcpIdleSender *) NULL_CHECK((frame[0].o)))->F_started = (jint(1));
	LINE_NUMBER(11);
	((func_arc_net_TcpIdleSender_start) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_TcpIdleSender_start])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)((func_arc_net_TcpIdleSender_next_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_TcpIdleSender_next_R_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(15);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(16);
	((func_arc_net_Connection_removeListener_arc_net_NetListener) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_removeListener_arc_net_NetListener])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(17);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(19);
	jint temp0 = (jint)((func_arc_net_Connection_sendTCP_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_sendTCP_java_lang_Object_R_int])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(21);
	jint temp1 = (jint)((func_arc_net_Connection_isIdle_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_isIdle_R_boolean])(ctx, (frame[1].o));
	if (temp1 != 0) goto label_1;
	}
label_8:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_TcpIdleSender_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/TcpIdleSender:start", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_net_TcpIdleSender[] {
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
	(void *) M_arc_net_TcpIdleSender_idle_arc_net_Connection,
	(void *) M_arc_net_TcpIdleSender_start,
	(void *) nullptr,
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
	{ "start", "()V" },
	{ "next", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_arc_net_NetListener, };

static FieldMetadata fields[] {
	{ "started", &class_boolean, offsetof(arc_net_TcpIdleSender, F_started), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_TcpIdleSender, 0, "()V", 1 },
	{ "idle", (intptr_t) M_arc_net_TcpIdleSender_idle_arc_net_Connection, VTABLE_arc_net_TcpIdleSender_idle_arc_net_Connection, "(Larc/net/Connection;)V", 1 },
	{ "start", (intptr_t) M_arc_net_TcpIdleSender_start, VTABLE_arc_net_TcpIdleSender_start, "()V", 4 },
	{ "next", 0, VTABLE_arc_net_TcpIdleSender_next_R_java_lang_Object, "()Ljava/lang/Object;", 1028 },
};

Class class_arc_net_TcpIdleSender{
		.nativeName = (intptr_t) "arc/net/TcpIdleSender",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_TcpIdleSender),
		.classVtable = (intptr_t) vtable_arc_net_TcpIdleSender,
		.staticInitializer = (intptr_t) clinit_arc_net_TcpIdleSender,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_TcpIdleSender,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_TcpIdleSender = registerClass(&class_arc_net_TcpIdleSender);

}
