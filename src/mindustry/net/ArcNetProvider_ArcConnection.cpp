#include "mindustry/net/ArcNetProvider_ArcConnection.h"
#include "arc/net/Connection.h"
#include "mindustry/net/ArcNetProvider.h"
#include "mindustry/net/ArcNetProvider_ArcConnection.h"
#include "java/lang/Exception.h"
#include "arc/util/Log.h"
#include "arc/net/NetListener.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "arc/net/DcReason.h"
#include "mindustry/net/ArcNetProvider_ArcConnection_1.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/net/Administration.h"
#include "java/net/InetSocketAddress.h"
#include "mindustry/Vars.h"
#include "mindustry/net/Streamable.h"
#include "java/lang/Throwable.h"
#include "mindustry/net/NetConnection.h"

extern "C" {


void mark_mindustry_net_ArcNetProvider$ArcConnection(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_net_NetConnection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_net_ArcNetProvider$ArcConnection *) object;
	if (self->F_connection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connection)->clazz)->markFunction)((jobject) self->F_connection, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_net_ArcNetProvider$ArcConnection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_NetConnection(ctx);
}

void init_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_ArcNetProvider_java_lang_String_arc_net_Connection(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$ArcConnection:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ArcNetProvider$ArcConnection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(406);
	((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(407);
	init_mindustry_net_NetConnection_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(408);
	((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection = (jref) (frame[3].o);
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_ArcNetProvider$ArcConnection_isConnected_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$ArcConnection:isConnected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	jint temp0 = (jint)((func_arc_net_Connection_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_isConnected_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$ArcConnection_blacklist(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$ArcConnection:blacklist", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(419);
	M_mindustry_net_NetConnection_blacklist(ctx, (frame[0].o));
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	sp[0].o = (jobject)((func_arc_net_Connection_getRemoteAddressUDP_R_java_net_InetSocketAddress) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_getRemoteAddressUDP_R_java_net_InetSocketAddress])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(422);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(423);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = (jobject)((func_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_net_InetAddress_getHostAddress_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String])(ctx, sp[1].o);
	((func_mindustry_net_Administration_blacklistDos_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_blacklistDos_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(425);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$ArcConnection_sendStream_mindustry_net_Streamable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$ArcConnection:sendStream", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	clinit_mindustry_net_ArcNetProvider$ArcConnection$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_ArcNetProvider$ArcConnection$1);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK((frame[1].o)))->F_stream;
	init_mindustry_net_ArcNetProvider$ArcConnection$1_mindustry_net_ArcNetProvider$ArcConnection_java_io_InputStream_int_mindustry_net_Streamable(ctx, sp[1].o, sp[2].o, sp[3].o, (1024), (frame[1].o));
	((func_arc_net_Connection_addListener_arc_net_NetListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_addListener_arc_net_NetListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$ArcConnection_send_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$ArcConnection:send", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	jint temp0 = (jint)((func_arc_net_Connection_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(457);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	jint temp0 = (jint)((func_arc_net_Connection_sendTCP_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_sendTCP_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	jint temp0 = (jint)((func_arc_net_Connection_sendUDP_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_sendUDP_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(470);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(463);
	frame[3].o = sp[0].o;
	LINE_NUMBER(464);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Error sending packet. Disconnecting invalid client!"_j))), (frame[3].o));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	clinit_arc_net_DcReason(ctx);
	sp[1].o = (jobject)SF_arc_net_DcReason_error;
	((func_arc_net_Connection_close_arc_net_DcReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_close_arc_net_DcReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(467);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	sp[0].o = (jobject)((func_arc_net_Connection_getArbitraryData_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_getArbitraryData_R_java_lang_Object])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_net_ArcNetProvider$ArcConnection)) == 0) goto label_7;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_net_ArcNetProvider$ArcConnection, (frame[5].o)));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider *) NULL_CHECK(sp[0].o))->F_connections;
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	}
label_7:;
	LINE_NUMBER(471);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_ArcNetProvider$ArcConnection_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ArcNetProvider$ArcConnection:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	jint temp0 = (jint)((func_arc_net_Connection_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_net_ArcNetProvider$ArcConnection *) NULL_CHECK((frame[0].o)))->F_connection;
	clinit_arc_net_DcReason(ctx);
	sp[1].o = (jobject)SF_arc_net_DcReason_closed;
	((func_arc_net_Connection_close_arc_net_DcReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_Connection_close_arc_net_DcReason])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(476);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_net_ArcNetProvider$ArcConnection[] {
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
	(void *) M_mindustry_net_NetConnection_kick,
	(void *) M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason,
	(void *) M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long,
	(void *) M_mindustry_net_NetConnection_kick_java_lang_String,
	(void *) M_mindustry_net_NetConnection_kick_java_lang_String_long,
	(void *) M_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long,
	(void *) M_mindustry_net_NetConnection_kickDisconnect,
	(void *) M_mindustry_net_ArcNetProvider$ArcConnection_isConnected_R_boolean,
	(void *) M_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream,
	(void *) M_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream,
	(void *) M_mindustry_net_ArcNetProvider$ArcConnection_sendStream_mindustry_net_Streamable,
	(void *) M_mindustry_net_ArcNetProvider$ArcConnection_blacklist,
	(void *) M_mindustry_net_ArcNetProvider$ArcConnection_send_java_lang_Object_boolean,
	(void *) M_mindustry_net_ArcNetProvider$ArcConnection_close,
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
	{ "kick", "()V" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;)V" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;J)V" },
	{ "kick", "(Ljava/lang/String;)V" },
	{ "kick", "(Ljava/lang/String;J)V" },
	{ "kick", "(Ljava/lang/String;Lmindustry/net/Packets$KickReason;J)V" },
	{ "kickDisconnect", "()V" },
	{ "isConnected", "()Z" },
	{ "sendStreamAsync", "(Lmindustry/net/Streamable;Ljava/io/ByteArrayOutputStream;)V" },
	{ "sendStream", "(Lmindustry/net/Streamable;Ljava/io/ByteArrayOutputStream;)V" },
	{ "sendStream", "(Lmindustry/net/Streamable;)V" },
	{ "blacklist", "()V" },
	{ "send", "(Ljava/lang/Object;Z)V" },
	{ "close", "()V" },
};

static FieldMetadata fields[] {
	{ "connection", &class_arc_net_Connection, offsetof(mindustry_net_ArcNetProvider$ArcConnection, F_connection), "Larc/net/Connection;", 17 },
	{ "lastErrorTime", &class_long, offsetof(mindustry_net_ArcNetProvider$ArcConnection, F_lastErrorTime), "J", 0 },
	{ "this$0", &class_mindustry_net_ArcNetProvider, offsetof(mindustry_net_ArcNetProvider$ArcConnection, F_this$0), "Lmindustry/net/ArcNetProvider;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_ArcNetProvider_java_lang_String_arc_net_Connection, 0, "(Lmindustry/net/ArcNetProvider;Ljava/lang/String;Larc/net/Connection;)V", 1 },
	{ "isConnected", (intptr_t) M_mindustry_net_ArcNetProvider$ArcConnection_isConnected_R_boolean, VTABLE_mindustry_net_ArcNetProvider$ArcConnection_isConnected_R_boolean, "()Z", 1 },
	{ "blacklist", (intptr_t) M_mindustry_net_ArcNetProvider$ArcConnection_blacklist, VTABLE_mindustry_net_ArcNetProvider$ArcConnection_blacklist, "()V", 1 },
	{ "sendStream", (intptr_t) M_mindustry_net_ArcNetProvider$ArcConnection_sendStream_mindustry_net_Streamable, VTABLE_mindustry_net_ArcNetProvider$ArcConnection_sendStream_mindustry_net_Streamable, "(Lmindustry/net/Streamable;)V", 1 },
	{ "send", (intptr_t) M_mindustry_net_ArcNetProvider$ArcConnection_send_java_lang_Object_boolean, VTABLE_mindustry_net_ArcNetProvider$ArcConnection_send_java_lang_Object_boolean, "(Ljava/lang/Object;Z)V", 1 },
	{ "close", (intptr_t) M_mindustry_net_ArcNetProvider$ArcConnection_close, VTABLE_mindustry_net_ArcNetProvider$ArcConnection_close, "()V", 1 },
};

Class class_mindustry_net_ArcNetProvider$ArcConnection{
		.nativeName = (intptr_t) "mindustry/net/ArcNetProvider$ArcConnection",
		.parentClass = (intptr_t) &class_mindustry_net_NetConnection,
		.size = sizeof(mindustry_net_ArcNetProvider$ArcConnection),
		.classVtable = (intptr_t) vtable_mindustry_net_ArcNetProvider$ArcConnection,
		.staticInitializer = (intptr_t) clinit_mindustry_net_ArcNetProvider$ArcConnection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_ArcNetProvider$ArcConnection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_ArcNetProvider,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_ArcNetProvider$ArcConnection = registerClass(&class_mindustry_net_ArcNetProvider$ArcConnection);

}

