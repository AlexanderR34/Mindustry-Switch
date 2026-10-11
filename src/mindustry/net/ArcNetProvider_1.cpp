#include "mindustry/net/ArcNetProvider_1.h"
#include "arc/net/Connection.h"
#include "mindustry/net/ArcNetProvider.h"
#include "mindustry/net/Net.h"
#include "arc/util/Log.h"
#include "java/lang/CharSequence.h"
#include "arc/net/NetSerializer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/net/ArcNetException.h"
#include "arc/util/Ratekeeper.h"
#include "mindustry/Vars.h"
#include "java/lang/Throwable.h"
#include "arc/net/Client.h"
#include "mindustry/net/ArcNetProvider_1.h"

extern "C" {


void mark_mindustry_net_ArcNetProvider$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_net_Client(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_net_ArcNetProvider$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_net_ArcNetProvider$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_net_Client(ctx);
}

void init_mindustry_net_ArcNetProvider$1_mindustry_net_ArcNetProvider_int_int_arc_net_NetSerializer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$1:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(64);
	((mindustry_net_ArcNetProvider$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_net_Client_int_int_arc_net_NetSerializer(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$1_handleNetException_arc_net_ArcNetException(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$1:handleNetException", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_net_ArcNetException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_ArcNetException_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_net_ArcNetException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_ArcNetException_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UDP deserialization"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_clientUdpErrorRate;
	jint temp0 = (jint)((func_arc_util_Ratekeeper_allow_long_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Ratekeeper_allow_long_int_R_boolean])(ctx, sp[0].o, (jlong(5000ll)), (jint(5)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(69);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"UDP network error"_j))), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(71);
	M_arc_net_Client_handleNetException_arc_net_ArcNetException(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_net_ArcNetProvider$1[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_net_Connection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_Connection_initialize_arc_net_NetSerializer_int_int,
	(void *) M_arc_net_Connection_getID_R_int,
	(void *) M_arc_net_Connection_isConnected_R_boolean,
	(void *) M_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException,
	(void *) M_arc_net_Connection_sendTCP_java_lang_Object_R_int,
	(void *) M_arc_net_Connection_sendTCPBuffer_java_nio_ByteBuffer_R_int,
	(void *) M_arc_net_Connection_sendUDP_java_lang_Object_R_int,
	(void *) M_arc_net_Connection_sendUDPBuffer_java_nio_ByteBuffer_R_int,
	(void *) M_arc_net_Connection_close_arc_net_DcReason,
	(void *) M_arc_net_Connection_updateReturnTripTime,
	(void *) M_arc_net_Connection_getReturnTripTime_R_int,
	(void *) M_arc_net_Connection_setKeepAliveTCP_int,
	(void *) M_arc_net_Connection_setTimeout_int,
	(void *) M_arc_net_Connection_addListener_arc_net_NetListener,
	(void *) M_arc_net_Connection_removeListener_arc_net_NetListener,
	(void *) M_arc_net_Connection_notifyConnected,
	(void *) M_arc_net_Connection_notifyDisconnected_arc_net_DcReason,
	(void *) M_arc_net_Connection_notifyIdle,
	(void *) M_arc_net_Connection_notifyReceived_java_lang_Object,
	(void *) M_arc_net_Connection_getEndPoint_R_arc_net_EndPoint,
	(void *) M_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress,
	(void *) M_arc_net_Connection_getRemoteAddressUDP_R_java_net_InetSocketAddress,
	(void *) M_arc_net_Connection_setName_java_lang_String,
	(void *) M_arc_net_Connection_getTcpWriteBufferSize_R_int,
	(void *) M_arc_net_Connection_isIdle_R_boolean,
	(void *) M_arc_net_Connection_setIdleThreshold_float,
	(void *) M_arc_net_Connection_setConnected_boolean,
	(void *) M_arc_net_Connection_getArbitraryData_R_java_lang_Object,
	(void *) M_arc_net_Connection_setArbitraryData_java_lang_Object,
	(void *) M_arc_net_Client_run,
	(void *) M_arc_net_Client_start,
	(void *) M_arc_net_Client_stop,
	(void *) M_arc_net_Client_close,
	(void *) M_arc_net_Client_update_int,
	(void *) M_arc_net_Client_getUpdateThread_R_java_lang_Thread,
	(void *) M_arc_net_Client_setDiscoveryPacket_arc_func_Prov,
	(void *) M_arc_net_Client_connect_int_java_lang_String_int,
	(void *) M_arc_net_Client_connect_int_java_lang_String_int_int,
	(void *) M_arc_net_Client_connect_int_java_net_InetAddress_int,
	(void *) M_arc_net_Client_connect_int_java_net_InetAddress_int_int,
	(void *) M_arc_net_Client_reconnect,
	(void *) M_arc_net_Client_reconnect_int,
	(void *) M_arc_net_Client_keepAlive,
	(void *) M_mindustry_net_ArcNetProvider$1_handleNetException_arc_net_ArcNetException,
	(void *) M_arc_net_Client_dispose,
	(void *) M_arc_net_Client_setKeepAliveUDP_int,
	(void *) M_arc_net_Client_getSerialization_R_arc_net_NetSerializer,
	(void *) M_arc_net_Client_broadcast_int_java_net_DatagramSocket,
	(void *) M_arc_net_Client_discoverHosts_int_java_lang_String_int_int_arc_func_Cons_java_lang_Runnable,
	(void *) M_arc_net_Client_lambda$discoverHosts$1_java_lang_String_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object,
	(void *) M_arc_net_Client_lambda$discoverHosts$0_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object,
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
	{ "initialize", "(Larc/net/NetSerializer;II)V" },
	{ "getID", "()I" },
	{ "isConnected", "()Z" },
	{ "getLastProtocolError", "()Larc/net/ArcNetException;" },
	{ "sendTCP", "(Ljava/lang/Object;)I" },
	{ "sendTCPBuffer", "(Ljava/nio/ByteBuffer;)I" },
	{ "sendUDP", "(Ljava/lang/Object;)I" },
	{ "sendUDPBuffer", "(Ljava/nio/ByteBuffer;)I" },
	{ "close", "(Larc/net/DcReason;)V" },
	{ "updateReturnTripTime", "()V" },
	{ "getReturnTripTime", "()I" },
	{ "setKeepAliveTCP", "(I)V" },
	{ "setTimeout", "(I)V" },
	{ "addListener", "(Larc/net/NetListener;)V" },
	{ "removeListener", "(Larc/net/NetListener;)V" },
	{ "notifyConnected", "()V" },
	{ "notifyDisconnected", "(Larc/net/DcReason;)V" },
	{ "notifyIdle", "()V" },
	{ "notifyReceived", "(Ljava/lang/Object;)V" },
	{ "getEndPoint", "()Larc/net/EndPoint;" },
	{ "getRemoteAddressTCP", "()Ljava/net/InetSocketAddress;" },
	{ "getRemoteAddressUDP", "()Ljava/net/InetSocketAddress;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "getTcpWriteBufferSize", "()I" },
	{ "isIdle", "()Z" },
	{ "setIdleThreshold", "(F)V" },
	{ "setConnected", "(Z)V" },
	{ "getArbitraryData", "()Ljava/lang/Object;" },
	{ "setArbitraryData", "(Ljava/lang/Object;)V" },
	{ "run", "()V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "close", "()V" },
	{ "update", "(I)V" },
	{ "getUpdateThread", "()Ljava/lang/Thread;" },
	{ "setDiscoveryPacket", "(Larc/func/Prov;)V" },
	{ "connect", "(ILjava/lang/String;I)V" },
	{ "connect", "(ILjava/lang/String;II)V" },
	{ "connect", "(ILjava/net/InetAddress;I)V" },
	{ "connect", "(ILjava/net/InetAddress;II)V" },
	{ "reconnect", "()V" },
	{ "reconnect", "(I)V" },
	{ "keepAlive", "()V" },
	{ "handleNetException", "(Larc/net/ArcNetException;)V" },
	{ "dispose", "()V" },
	{ "setKeepAliveUDP", "(I)V" },
	{ "getSerialization", "()Larc/net/NetSerializer;" },
	{ "broadcast", "(ILjava/net/DatagramSocket;)V" },
	{ "discoverHosts", "(ILjava/lang/String;IILarc/func/Cons;Ljava/lang/Runnable;)V" },
	{ "lambda$discoverHosts$1", "(Ljava/lang/String;IILarc/func/Cons;[ZLjava/lang/Runnable;)Ljava/lang/Object;" },
	{ "lambda$discoverHosts$0", "(IILarc/func/Cons;[ZLjava/lang/Runnable;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_net_ArcNetProvider, offsetof(mindustry_net_ArcNetProvider$1, F_this$0), "Lmindustry/net/ArcNetProvider;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_ArcNetProvider$1_mindustry_net_ArcNetProvider_int_int_arc_net_NetSerializer, 0, "(Lmindustry/net/ArcNetProvider;IILarc/net/NetSerializer;)V", 0 },
	{ "handleNetException", (intptr_t) M_mindustry_net_ArcNetProvider$1_handleNetException_arc_net_ArcNetException, VTABLE_mindustry_net_ArcNetProvider$1_handleNetException_arc_net_ArcNetException, "(Larc/net/ArcNetException;)V", 1 },
};

Class class_mindustry_net_ArcNetProvider$1{
		.nativeName = (intptr_t) "mindustry/net/ArcNetProvider$1",
		.parentClass = (intptr_t) &class_arc_net_Client,
		.size = sizeof(mindustry_net_ArcNetProvider$1),
		.classVtable = (intptr_t) vtable_mindustry_net_ArcNetProvider$1,
		.staticInitializer = (intptr_t) clinit_mindustry_net_ArcNetProvider$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_ArcNetProvider$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_net_ArcNetProvider$1 = registerClass(&class_mindustry_net_ArcNetProvider$1);

}

