#include "mindustry/net/ArcNetProvider.h"
#include "mindustry/net/ArcNetProvider_2.h"
#include "mindustry/net/ArcNetProvider_ArcConnection.h"
#include "mindustry/net/ArcNetProvider.h"
#include "mindustry/net/ArcNetProvider_3.h"
#include "arc/func/Prov.h"
#include "arc/Events.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "java/util/concurrent/Future.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/nio/Buffer.h"
#include "java/net/InetAddress.h"
#include "java/nio/channels/ClosedSelectorException.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/net/Net_NetProvider.h"
#include "java/lang/Throwable.h"
#include "mindustry/net/ArcNetProvider_invoke_arc_func_Prov_2.h"
#include "arc/func/Boolf.h"
#include "arc/net/Client.h"
#include "java/lang/Thread.h"
#include "mindustry/net/ArcNetProvider_invoke_arc_func_Prov_3.h"
#include "arc/net/Connection.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/net/NetListener.h"
#include "arc/net/Server.h"
#include "arc/util/Time.h"
#include "mindustry/net/ArcNetProvider_invoke_arc_func_Cons_2.h"
#include "arc/util/Nullable.h"
#include "arc/net/Server_ServerConnectFilter.h"
#include "mindustry/net/ArcNetProvider_invoke_arc_func_Cons_3.h"
#include "arc/net/NetSerializer.h"
#include "java/lang/Object.h"
#include "arc/net/dns/ArcDns.h"
#include "arc/net/ServerDiscoveryHandler_ReponseHandler.h"
#include "net/jpountz/lz4/LZ4Factory.h"
#include "net/jpountz/lz4/LZ4Compressor.h"
#include "mindustry/net/ArcNetProvider_1.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_18.h"
#include "mindustry/net/Net.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_17.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_16.h"
#include "arc/net/dns/SRVRecord.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_15.h"
#include "mindustry/net/ArcNetProvider_invoke_arc_func_Boolf_1.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_19.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_10.h"
#include "mindustry/net/ArcNetProvider_invoke_arc_net_ServerDiscoveryHandler_1.h"
#include "java/net/DatagramPacket.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_14.h"
#include "java/lang/Iterable.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_13.h"
#include "arc/Application.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_12.h"
#include "mindustry/net/ArcNetProvider_invoke_java_lang_Runnable_11.h"
#include "arc/func/Cons.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/BufferOverflowException.h"
#include "java/lang/String.h"
#include "java/net/DatagramSocket.h"
#include "arc/net/ArcNet.h"
#include "arc/net/ServerDiscoveryHandler.h"
#include "java/io/IOException.h"
#include "mindustry/net/Administration.h"
#include "arc/util/Log_LogLevel.h"
#include "mindustry/net/NetConnection.h"
#include "mindustry/net/ArcNetProvider_PacketSerializer.h"
#include "java/lang/annotation/Annotation.h"
#include "net/jpountz/lz4/LZ4SafeDecompressor.h"
#include "java/lang/ThreadLocal.h"
#include "mindustry/core/NetClient.h"
#include "java/net/NetworkInterface.h"
#include "mindustry/net/NetworkIO.h"
#include "java/nio/BufferUnderflowException.h"
#include "mindustry/net/Administration_Config.h"
#include "arc/util/Strings.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/util/Threads.h"
#include "arc/net/EndPoint.h"
#include "mindustry/core/NetServer.h"
#include "arc/util/Ratekeeper.h"
#include "mindustry/net/Host.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"

extern "C" {

jint SF_mindustry_net_ArcNetProvider_clientReadBufferSize;
jobject SF_mindustry_net_ArcNetProvider_decompressor;
jobject SF_mindustry_net_ArcNetProvider_compressor;
jobject SF_mindustry_net_ArcNetProvider_writeConnections;

void mark_mindustry_net_ArcNetProvider(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_ArcNetProvider_decompressor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_ArcNetProvider_decompressor)->clazz)->markFunction)((jobject) SF_mindustry_net_ArcNetProvider_decompressor, mark, depth + 1);
		if (SF_mindustry_net_ArcNetProvider_compressor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_ArcNetProvider_compressor)->clazz)->markFunction)((jobject) SF_mindustry_net_ArcNetProvider_compressor, mark, depth + 1);
		if (SF_mindustry_net_ArcNetProvider_writeConnections)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_ArcNetProvider_writeConnections)->clazz)->markFunction)((jobject) SF_mindustry_net_ArcNetProvider_writeConnections, mark, depth + 1);
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
	auto self = (mindustry_net_ArcNetProvider *) object;
	if (self->F_client)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_client)->clazz)->markFunction)((jobject) self->F_client, mark, depth + 1);
	if (self->F_packetSupplier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packetSupplier)->clazz)->markFunction)((jobject) self->F_packetSupplier, mark, depth + 1);
	if (self->F_server)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_server)->clazz)->markFunction)((jobject) self->F_server, mark, depth + 1);
	if (self->F_connections)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connections)->clazz)->markFunction)((jobject) self->F_connections, mark, depth + 1);
	if (self->F_serverThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_serverThread)->clazz)->markFunction)((jobject) self->F_serverThread, mark, depth + 1);
	if (self->F_clientUdpErrorRate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clientUdpErrorRate)->clazz)->markFunction)((jobject) self->F_clientUdpErrorRate, mark, depth + 1);
}

void init_mindustry_net_ArcNetProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_net_ArcNetProvider_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_packetSupplier = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList);
	init_java_util_concurrent_CopyOnWriteArrayList(ctx, sp[1].o);
	((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_connections = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_util_Ratekeeper(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Ratekeeper);
	init_arc_util_Ratekeeper(ctx, sp[1].o);
	((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_clientUdpErrorRate = (jref) sp[1].o;
	LINE_NUMBER(47);
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_net_ArcNetProvider_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider_invoke_arc_func_Cons_2);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_net_ArcNet(ctx);
	SF_arc_net_ArcNet_errorHandler = sp[0].o;
	LINE_NUMBER(59);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_ArcNetProvider$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$1);
	sp[2].o = frame[0].o;
	jint temp0 = 16384;
	jint temp1 = 25000;
	clinit_mindustry_net_ArcNetProvider$PacketSerializer(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$PacketSerializer);
	init_mindustry_net_ArcNetProvider$PacketSerializer(ctx, sp[3].o);
	init_mindustry_net_ArcNetProvider$1_mindustry_net_ArcNetProvider_int_int_arc_net_NetSerializer(ctx, sp[1].o, sp[2].o, temp0, temp1, sp[3].o);
	((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_client = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_client;
	sp[1].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_packetSupplier;
	((func_arc_net_Client_setDiscoveryPacket_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Client_setDiscoveryPacket_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_client;
	clinit_mindustry_net_ArcNetProvider$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$2);
	init_mindustry_net_ArcNetProvider$2_mindustry_net_ArcNetProvider(ctx, sp[1].o, (frame[0].o));
	((func_arc_net_Client_addListener_arc_net_NetListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Client_addListener_arc_net_NetListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	clinit_arc_net_Server(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_net_Server);
	jint temp2 = jint(41000);
	jint temp3 = 16384;
	clinit_mindustry_net_ArcNetProvider$PacketSerializer(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$PacketSerializer);
	init_mindustry_net_ArcNetProvider$PacketSerializer(ctx, sp[2].o);
	init_arc_net_Server_int_int_arc_net_NetSerializer(ctx, sp[1].o, temp2, temp3, sp[2].o);
	((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_server = (jref) sp[1].o;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_server;
	((func_arc_net_Server_setMulticast_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Server_setMulticast_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"227.2.7.7"_j))), (20151));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_server;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider_invoke_arc_net_ServerDiscoveryHandler_1(ctx);
		auto proxy = (mindustry_net_ArcNetProvider_invoke_arc_net_ServerDiscoveryHandler_1 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider_invoke_arc_net_ServerDiscoveryHandler_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_net_Server_setDiscoveryHandler_arc_net_ServerDiscoveryHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Server_setDiscoveryHandler_arc_net_ServerDiscoveryHandler])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_server;
	clinit_mindustry_net_ArcNetProvider$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$3);
	init_mindustry_net_ArcNetProvider$3_mindustry_net_ArcNetProvider(ctx, sp[1].o, (frame[0].o));
	((func_arc_net_Server_addListener_arc_net_NetListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Server_addListener_arc_net_NetListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider:setConnectFilter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_server;
	((func_arc_net_Server_setConnectFilter_arc_net_Server$ServerConnectFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Server_setConnectFilter_arc_net_Server$ServerConnectFilter])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_ArcNetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider:getConnectFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_server;
	sp[0].o = (jobject)((func_arc_net_Server_getConnectFilter_R_arc_net_Server$ServerConnectFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Server_getConnectFilter_R_arc_net_Server$ServerConnectFilter])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_ArcNetProvider_isLocal_java_net_InetAddress_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider:isLocal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_java_net_InetAddress_isAnyLocalAddress_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_isAnyLocalAddress_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_net_InetAddress_isLoopbackAddress_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_isLoopbackAddress_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_0;
	}
label_5:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)SM_java_net_NetworkInterface_getByInetAddress_java_net_InetAddress_R_java_net_NetworkInterface(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_6;
	}
	INST_ICONST(1);
	goto label_1;
label_6:;
	INST_ICONST(0);
label_1:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(209);
	frame[1].o = sp[0].o;
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider_connectClient_java_lang_String_int_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider:connectClient", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_clientUdpErrorRate;
	((func_arc_util_Ratekeeper_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Ratekeeper_reset])(ctx, sp[0].o);
	LINE_NUMBER(218);
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_11);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Threads_daemon_java_lang_Runnable_R_java_lang_Thread(ctx, sp[0].o);
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider_disconnectClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider:disconnectClient", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_clientUdpErrorRate;
	((func_arc_util_Ratekeeper_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Ratekeeper_reset])(ctx, sp[0].o);
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_client;
	((func_arc_net_Client_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Client_close])(ctx, sp[0].o);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider_sendClient_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider:sendClient", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_nio_BufferOverflowException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_nio_BufferUnderflowException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(250);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_client;
	jint temp0 = (jint)((func_arc_net_Client_sendTCP_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Client_sendTCP_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK((frame[0].o)))->F_client;
	jint temp0 = (jint)((func_arc_net_Client_sendUDP_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Client_sendUDP_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(258);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(256);
	frame[3].o = sp[0].o;
	LINE_NUMBER(257);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_showError_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_showError_java_lang_Throwable])(ctx, sp[0].o, (frame[3].o));
	}
label_7:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider:pingHost", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_mindustry_net_ArcNetProvider_pingHostImpl_java_lang_String_int_R_mindustry_net_Host) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ArcNetProvider_pingHostImpl_java_lang_String_int_R_mindustry_net_Host])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(265);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_12);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(278);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(266);
	frame[5].o = sp[0].o;
	LINE_NUMBER(267);
	if ((frame[2].i) != (6567)) goto label_11;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"_mindustry._tcp.\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)SM_arc_net_dns_ArcDns_getSrvRecords_java_lang_String_R_arc_struct_Seq(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_net_dns_SRVRecord, sp[0].o));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[7].o)))->F_target;
	sp[0].o = (jobject)((func_mindustry_net_ArcNetProvider_pingHostImpl_java_lang_String_int_R_mindustry_net_Host) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_ArcNetProvider_pingHostImpl_java_lang_String_int_R_mindustry_net_Host])(ctx, sp[0].o, sp[1].o, ((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[7].o)))->F_port));
	frame[8].o = sp[0].o;
	LINE_NUMBER(271);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_13);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(272);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(273);
	frame[8].o = sp[0].o;
	LINE_NUMBER(275);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(277);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider_invoke_java_lang_Runnable_14);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	LINE_NUMBER(279);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_net_ArcNetProvider_pingHostImpl_java_lang_String_int_R_mindustry_net_Host(jcontext ctx, jobject self, jobject param0, jint param1) {
	return nullptr;
}

}
