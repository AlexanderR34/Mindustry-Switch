#include "mindustry/net/ArcNetProvider_2.h"
#include "mindustry/net/ArcNetProvider_2.h"
#include "arc/net/Connection.h"
#include "mindustry/net/ArcNetProvider.h"
#include "mindustry/net/Net.h"
#include "arc/Core.h"
#include "arc/net/NetListener.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/net/ArcNetProvider_2_invoke_java_lang_Runnable_5.h"
#include "mindustry/net/ArcNetProvider_2_invoke_java_lang_Runnable_4.h"
#include "mindustry/net/ArcNetProvider_2_invoke_java_lang_Runnable_3.h"
#include "arc/net/DcReason.h"
#include "java/lang/Enum.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "mindustry/net/Packets_Connect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "arc/net/ArcNetException.h"
#include "java/net/InetSocketAddress.h"
#include "mindustry/Vars.h"
#include "mindustry/net/Packets_Disconnect.h"
#include "java/lang/Throwable.h"
#include "mindustry/net/Packet.h"

extern "C" {


void mark_mindustry_net_ArcNetProvider$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_ArcNetProvider$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_net_ArcNetProvider$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_ArcNetProvider$2_mindustry_net_ArcNetProvider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	((mindustry_net_ArcNetProvider$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$2_connected_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$2:connected", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	clinit_mindustry_net_Packets$Connect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$Connect);
	init_mindustry_net_Packets$Connect(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_net_InetAddress_getHostAddress_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_net_Packets$Connect *) NULL_CHECK(sp[0].o))->F_addressTCP = (jref) sp[1].o;
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_net_InetSocketAddress_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_InetSocketAddress_toString_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_net_Packets$Connect *) NULL_CHECK(sp[0].o))->F_addressTCP = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(83);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider$2_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_net_ArcNetProvider$2_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$2_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$2_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$2:disconnected", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(89);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_setQuiet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_setQuiet])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(92);
	clinit_mindustry_net_Packets$Disconnect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$Disconnect);
	init_mindustry_net_Packets$Disconnect(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_net_DcReason_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_net_DcReason_toString_R_java_lang_String])(ctx, (frame[2].o));
	((mindustry_net_Packets$Disconnect *) NULL_CHECK(sp[0].o))->F_reason = (jref) sp[1].o;
	LINE_NUMBER(94);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider$2_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_net_ArcNetProvider$2_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$2_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$2_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$2:received", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(99);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_net_Packet)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_net_Packet, (frame[2].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(101);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider$2_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_net_ArcNetProvider$2_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$2_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_ArcNetProvider$2_lambda$received$0_mindustry_net_Packet(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$2:lambda$received$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$2(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(103);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_handleClientReceived_mindustry_net_Packet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClientReceived_mindustry_net_Packet])(ctx, sp[0].o, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(106);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(104);
	frame[1].o = sp[0].o;
	LINE_NUMBER(105);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_handleException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleException_java_lang_Throwable])(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_ArcNetProvider$2_lambda$disconnected$0_mindustry_net_Packets$Disconnect(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$2:lambda$disconnected$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(94);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_handleClientReceived_mindustry_net_Packet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClientReceived_mindustry_net_Packet])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_ArcNetProvider$2_lambda$connected$0_mindustry_net_Packets$Connect(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$2:lambda$connected$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(83);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_handleClientReceived_mindustry_net_Packet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClientReceived_mindustry_net_Packet])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_ArcNetProvider$2[] {
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
	(void *) M_mindustry_net_ArcNetProvider$2_connected_arc_net_Connection,
	(void *) M_mindustry_net_ArcNetProvider$2_disconnected_arc_net_Connection_arc_net_DcReason,
	(void *) M_mindustry_net_ArcNetProvider$2_received_arc_net_Connection_java_lang_Object,
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

static jclass interfaces[] { &class_arc_net_NetListener, };

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_net_ArcNetProvider, offsetof(mindustry_net_ArcNetProvider$2, F_this$0), "Lmindustry/net/ArcNetProvider;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_ArcNetProvider$2_mindustry_net_ArcNetProvider, 0, "(Lmindustry/net/ArcNetProvider;)V", 0 },
	{ "connected", (intptr_t) M_mindustry_net_ArcNetProvider$2_connected_arc_net_Connection, VTABLE_mindustry_net_ArcNetProvider$2_connected_arc_net_Connection, "(Larc/net/Connection;)V", 1 },
	{ "disconnected", (intptr_t) M_mindustry_net_ArcNetProvider$2_disconnected_arc_net_Connection_arc_net_DcReason, VTABLE_mindustry_net_ArcNetProvider$2_disconnected_arc_net_Connection_arc_net_DcReason, "(Larc/net/Connection;Larc/net/DcReason;)V", 1 },
	{ "received", (intptr_t) M_mindustry_net_ArcNetProvider$2_received_arc_net_Connection_java_lang_Object, VTABLE_mindustry_net_ArcNetProvider$2_received_arc_net_Connection_java_lang_Object, "(Larc/net/Connection;Ljava/lang/Object;)V", 1 },
	{ "lambda$received$0", (intptr_t) SM_mindustry_net_ArcNetProvider$2_lambda$received$0_mindustry_net_Packet, 0, "(Lmindustry/net/Packet;)V", 4106 },
	{ "lambda$disconnected$0", (intptr_t) SM_mindustry_net_ArcNetProvider$2_lambda$disconnected$0_mindustry_net_Packets$Disconnect, 0, "(Lmindustry/net/Packets$Disconnect;)V", 4106 },
	{ "lambda$connected$0", (intptr_t) SM_mindustry_net_ArcNetProvider$2_lambda$connected$0_mindustry_net_Packets$Connect, 0, "(Lmindustry/net/Packets$Connect;)V", 4106 },
};

Class class_mindustry_net_ArcNetProvider$2{
		.nativeName = (intptr_t) "mindustry/net/ArcNetProvider$2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_ArcNetProvider$2),
		.classVtable = (intptr_t) vtable_mindustry_net_ArcNetProvider$2,
		.staticInitializer = (intptr_t) clinit_mindustry_net_ArcNetProvider$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_ArcNetProvider$2,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_net_ArcNetProvider$2 = registerClass(&class_mindustry_net_ArcNetProvider$2);

}

