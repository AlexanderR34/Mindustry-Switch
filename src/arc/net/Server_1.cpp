#include "arc/net/Server_1.h"
#include "arc/net/Connection.h"
#include "java/lang/Object.h"
#include "arc/net/NetListener.h"
#include "arc/net/Server.h"
#include "arc/net/DcReason.h"
#include "arc/net/Server_1.h"

extern "C" {


void mark_arc_net_Server$1(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_Server$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_net_Server$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_Server$1_arc_net_Server(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_Server$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	((arc_net_Server$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_net_Server$1_connected_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server$1:connected", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_net_Server$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_net_Server *) NULL_CHECK(sp[0].o))->F_listeners;
	frame[2].o = sp[0].o;
	LINE_NUMBER(48);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	((func_arc_net_NetListener_connected_arc_net_Connection) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_connected_arc_net_Connection, (frame[6].o)))(ctx, (frame[6].o), (frame[1].o));
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Server$1_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server$1:disconnected", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_net_Server$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_net_Server_removeConnection_arc_net_Connection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Server_removeConnection_arc_net_Connection])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_net_Server$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_net_Server *) NULL_CHECK(sp[0].o))->F_listeners;
	frame[3].o = sp[0].o;
	LINE_NUMBER(55);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	((func_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason, (frame[7].o)))(ctx, (frame[7].o), (frame[1].o), (frame[2].o));
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Server$1_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server$1:received", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_net_Server$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_net_Server *) NULL_CHECK(sp[0].o))->F_listeners;
	frame[3].o = sp[0].o;
	LINE_NUMBER(61);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_3;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	((func_arc_net_NetListener_received_arc_net_Connection_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_received_arc_net_Connection_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o), (frame[1].o), (frame[2].o));
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_net_Server$1_idle_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/Server$1:idle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_net_Server$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_net_Server *) NULL_CHECK(sp[0].o))->F_listeners;
	frame[2].o = sp[0].o;
	LINE_NUMBER(67);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	((func_arc_net_NetListener_idle_arc_net_Connection) resolveInterfaceMethod(ctx, &class_arc_net_NetListener, INDEX_arc_net_NetListener_idle_arc_net_Connection, (frame[6].o)))(ctx, (frame[6].o), (frame[1].o));
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_net_Server$1[] {
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
	(void *) M_arc_net_Server$1_connected_arc_net_Connection,
	(void *) M_arc_net_Server$1_disconnected_arc_net_Connection_arc_net_DcReason,
	(void *) M_arc_net_Server$1_received_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_Server$1_idle_arc_net_Connection,
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

static jclass interfaces[] { &class_arc_net_NetListener, };

static FieldMetadata fields[] {
	{ "this$0", &class_arc_net_Server, offsetof(arc_net_Server$1, F_this$0), "Larc/net/Server;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_Server$1_arc_net_Server, 0, "(Larc/net/Server;)V", 0 },
	{ "connected", (intptr_t) M_arc_net_Server$1_connected_arc_net_Connection, VTABLE_arc_net_Server$1_connected_arc_net_Connection, "(Larc/net/Connection;)V", 1 },
	{ "disconnected", (intptr_t) M_arc_net_Server$1_disconnected_arc_net_Connection_arc_net_DcReason, VTABLE_arc_net_Server$1_disconnected_arc_net_Connection_arc_net_DcReason, "(Larc/net/Connection;Larc/net/DcReason;)V", 1 },
	{ "received", (intptr_t) M_arc_net_Server$1_received_arc_net_Connection_java_lang_Object, VTABLE_arc_net_Server$1_received_arc_net_Connection_java_lang_Object, "(Larc/net/Connection;Ljava/lang/Object;)V", 1 },
	{ "idle", (intptr_t) M_arc_net_Server$1_idle_arc_net_Connection, VTABLE_arc_net_Server$1_idle_arc_net_Connection, "(Larc/net/Connection;)V", 1 },
};

Class class_arc_net_Server$1{
		.nativeName = (intptr_t) "arc/net/Server$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_Server$1),
		.classVtable = (intptr_t) vtable_arc_net_Server$1,
		.staticInitializer = (intptr_t) clinit_arc_net_Server$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_Server$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_net_Server$1 = registerClass(&class_arc_net_Server$1);

}

