#include "mindustry/net/ArcNetProvider_3.h"
#include "mindustry/net/ArcNetProvider_3.h"
#include "mindustry/net/ArcNetProvider.h"
#include "mindustry/net/ArcNetProvider_ArcConnection.h"
#include "mindustry/net/Net.h"
#include "mindustry/net/ArcNetProvider_3_invoke_java_lang_Runnable_5.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "mindustry/net/Packets_Connect.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "mindustry/net/ArcNetProvider_3_invoke_java_lang_Runnable_4.h"
#include "mindustry/net/ArcNetProvider_3_invoke_java_lang_Runnable_3.h"
#include "mindustry/net/Administration.h"
#include "java/net/InetSocketAddress.h"
#include "mindustry/net/Packets_Disconnect.h"
#include "java/lang/Throwable.h"
#include "mindustry/net/Packet.h"
#include "mindustry/net/NetConnection.h"
#include "arc/net/Connection.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "arc/net/NetListener.h"
#include "arc/net/Server.h"
#include "arc/util/Time.h"
#include "arc/net/DcReason.h"
#include "java/lang/Enum.h"
#include "java/lang/Object.h"
#include "mindustry/core/NetServer.h"
#include "arc/util/Ratekeeper.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_net_ArcNetProvider$3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_ArcNetProvider$3 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_net_ArcNetProvider$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_ArcNetProvider$3_mindustry_net_ArcNetProvider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	((mindustry_net_ArcNetProvider$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$3_connected_arc_net_Connection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$3:connected", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_net_InetAddress_getHostAddress_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_playerLimitCache) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_server;
	sp[0].o = (jobject)((func_arc_net_Server_getConnections_R_Array1_arc_net_Connection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Server_getConnections_R_Array1_arc_net_Connection])(ctx, sp[0].o);
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 > ((jint)((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_playerLimitCache)) goto label_3;
	}
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	jint temp0 = (jint)((func_mindustry_net_Administration_isDosBlacklisted_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isDosBlacklisted_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(131);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Closing connection @ - IP marked as a potential DOS attack."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[2].o);
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	sp[0].o = frame[1].o;
	clinit_arc_net_DcReason(ctx);
	sp[1].o = (jobject)SF_arc_net_DcReason_closed;
	((func_arc_net_Connection_close_arc_net_DcReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_close_arc_net_DcReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(137);
	clinit_mindustry_net_ArcNetProvider$ArcConnection(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$ArcConnection);
	sp[1].o = (jobject)((mindustry_net_ArcNetProvider$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_ArcNetProvider_java_lang_String_arc_net_Connection(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(139);
	clinit_mindustry_net_Packets$Connect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$Connect);
	init_mindustry_net_Packets$Connect(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(140);
	((mindustry_net_Packets$Connect *) NULL_CHECK((frame[4].o)))->F_addressTCP = (jref) (frame[2].o);
	LINE_NUMBER(142);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"&bReceived connection: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_net_Packets$Connect *) NULL_CHECK((frame[4].o)))->F_addressTCP;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(144);
	((func_arc_net_Connection_setArbitraryData_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_setArbitraryData_java_lang_Object])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_connections;
	jint temp1 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(146);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider$3_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_net_ArcNetProvider$3_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$3_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$3_disconnected_arc_net_Connection_arc_net_DcReason(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$3:disconnected", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_arc_net_Connection_getArbitraryData_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_getArbitraryData_R_java_lang_Object])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_net_ArcNetProvider$ArcConnection)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_net_ArcNetProvider$ArcConnection, (frame[4].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(153);
	clinit_mindustry_net_Packets$Disconnect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$Disconnect);
	init_mindustry_net_Packets$Disconnect(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(154);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_net_DcReason_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_net_DcReason_toString_R_java_lang_String])(ctx, (frame[2].o));
	((mindustry_net_Packets$Disconnect *) NULL_CHECK(sp[0].o))->F_reason = (jref) sp[1].o;
	LINE_NUMBER(156);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider$3_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_net_ArcNetProvider$3_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$3_invoke_java_lang_Runnable_4);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$3_received_arc_net_Connection_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$3:received", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_arc_net_Connection_getArbitraryData_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_net_Connection_getArbitraryData_R_java_lang_Object])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_net_ArcNetProvider$ArcConnection)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_net_ArcNetProvider$ArcConnection, (frame[4].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_packetSpamLimit) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[3].o)))->F_packetRate;
	jlong temp0 = jlong(3000ll);
	sp[1].o = (jobject)((mindustry_net_ArcNetProvider$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_arc_util_Ratekeeper_allow_long_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Ratekeeper_allow_long_int_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[1].o))->F_packetSpamLimit));
	if (temp1 != 0) goto label_4;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Blacklisting IP '@' as potential DOS attack - packet spam."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[3].o)))->F_address;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(168);
	sp[0].o = frame[1].o;
	clinit_arc_net_DcReason(ctx);
	sp[1].o = (jobject)SF_arc_net_DcReason_closed;
	((func_arc_net_Connection_close_arc_net_DcReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_close_arc_net_DcReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(169);
	((func_mindustry_net_ArcNetProvider$ArcConnection_blacklist) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_net_ArcNetProvider$ArcConnection_blacklist])(ctx, (frame[3].o));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(173);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_net_Packet)) == 0) goto label_9;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_net_Packet, (frame[2].o)));
	goto label_11;
	}
label_9:;
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(175);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_ArcNetProvider$3_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_net_ArcNetProvider$3_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$3_invoke_java_lang_Runnable_5);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_ArcNetProvider$3_lambda$received$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packet(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$3:lambda$received$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$3(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(177);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(188);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(178);
	frame[2].o = sp[0].o;
	LINE_NUMBER(179);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(181);
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_lastErrorTime));
	if ((longCompare(temp1, (jlong(2000ll)))) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	clinit_arc_net_DcReason(ctx);
	sp[1].o = (jobject)SF_arc_net_DcReason_error;
	((func_arc_net_Connection_close_arc_net_DcReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_close_arc_net_DcReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_address;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_uuid;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Closing connection due to error: \u0001 / \u0001"_j.string, 2, sp[0].o, sp[1].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(185);
	((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_lastErrorTime = (frame[3].l);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_address;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_uuid;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Error reading packet from connection: \u0001 / \u0001"_j.string, 2, sp[0].o, sp[1].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$3_lambda$disconnected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Disconnect(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$3:lambda$disconnected$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(157);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_connections;
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_ArcNetProvider$3_lambda$connected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Connect(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$3:lambda$connected$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$3(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_ArcNetProvider$3[] {
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
	(void *) M_mindustry_net_ArcNetProvider$3_connected_arc_net_Connection,
	(void *) M_mindustry_net_ArcNetProvider$3_disconnected_arc_net_Connection_arc_net_DcReason,
	(void *) M_mindustry_net_ArcNetProvider$3_received_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_NetListener_idle_arc_net_Connection,
	(void *) M_mindustry_net_ArcNetProvider$3_lambda$disconnected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Disconnect,
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
	{ "lambda$disconnected$0", "(Lmindustry/net/ArcNetProvider$ArcConnection;Lmindustry/net/Packets$Disconnect;)V" },
};

static jclass interfaces[] { &class_arc_net_NetListener, };

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_net_ArcNetProvider, offsetof(mindustry_net_ArcNetProvider$3, F_this$0), "Lmindustry/net/ArcNetProvider;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_ArcNetProvider$3_mindustry_net_ArcNetProvider, 0, "(Lmindustry/net/ArcNetProvider;)V", 0 },
	{ "connected", (intptr_t) M_mindustry_net_ArcNetProvider$3_connected_arc_net_Connection, VTABLE_mindustry_net_ArcNetProvider$3_connected_arc_net_Connection, "(Larc/net/Connection;)V", 1 },
	{ "disconnected", (intptr_t) M_mindustry_net_ArcNetProvider$3_disconnected_arc_net_Connection_arc_net_DcReason, VTABLE_mindustry_net_ArcNetProvider$3_disconnected_arc_net_Connection_arc_net_DcReason, "(Larc/net/Connection;Larc/net/DcReason;)V", 1 },
	{ "received", (intptr_t) M_mindustry_net_ArcNetProvider$3_received_arc_net_Connection_java_lang_Object, VTABLE_mindustry_net_ArcNetProvider$3_received_arc_net_Connection_java_lang_Object, "(Larc/net/Connection;Ljava/lang/Object;)V", 1 },
	{ "lambda$received$0", (intptr_t) SM_mindustry_net_ArcNetProvider$3_lambda$received$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packet, 0, "(Lmindustry/net/ArcNetProvider$ArcConnection;Lmindustry/net/Packet;)V", 4106 },
	{ "lambda$disconnected$0", (intptr_t) M_mindustry_net_ArcNetProvider$3_lambda$disconnected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Disconnect, VTABLE_mindustry_net_ArcNetProvider$3_lambda$disconnected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Disconnect, "(Lmindustry/net/ArcNetProvider$ArcConnection;Lmindustry/net/Packets$Disconnect;)V", 4098 },
	{ "lambda$connected$0", (intptr_t) SM_mindustry_net_ArcNetProvider$3_lambda$connected$0_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_Packets$Connect, 0, "(Lmindustry/net/ArcNetProvider$ArcConnection;Lmindustry/net/Packets$Connect;)V", 4106 },
};

Class class_mindustry_net_ArcNetProvider$3{
		.nativeName = (intptr_t) "mindustry/net/ArcNetProvider$3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_ArcNetProvider$3),
		.classVtable = (intptr_t) vtable_mindustry_net_ArcNetProvider$3,
		.staticInitializer = (intptr_t) clinit_mindustry_net_ArcNetProvider$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_ArcNetProvider$3,
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
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_net_ArcNetProvider$3 = registerClass(&class_mindustry_net_ArcNetProvider$3);

}

