#include "mindustry/net/Net.h"
#include "arc/func/Prov.h"
#include "mindustry/net/Streamable_StreamBuilder.h"
#include "mindustry/net/Net_invoke_java_lang_Runnable_5.h"
#include "mindustry/net/Net_invoke_java_lang_Runnable_6.h"
#include "arc/Events.h"
#include "mindustry/net/Net_invoke_java_lang_Runnable_9.h"
#include "java/util/concurrent/Future.h"
#include "mindustry/net/Net_invoke_java_lang_Runnable_7.h"
#include "mindustry/net/Net_invoke_java_lang_Runnable_8.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/net/ArcNetException.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/net/Net_NetProvider.h"
#include "arc/util/OS.h"
#include "java/lang/Throwable.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "arc/net/Server_ServerConnectFilter.h"
#include "mindustry/net/Packets_StreamChunk.h"
#include "mindustry/net/Packets_KickReason.h"
#include "java/lang/Object.h"
#include "arc/util/ArcRuntimeException.h"
#include "mindustry/net/Net_invoke_arc_func_Prov_12.h"
#include "mindustry/net/Net_invoke_arc_func_Prov_13.h"
#include "mindustry/net/Net_invoke_arc_func_Prov_10.h"
#include "mindustry/net/Net_invoke_arc_func_Prov_11.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/net/Streamable.h"
#include "mindustry/net/Net.h"
#include "arc/util/Timer_Task.h"
#include "arc/struct/IntMap.h"
#include "java/lang/Iterable.h"
#include "mindustry/net/Net_invoke_arc_func_Prov_9.h"
#include "arc/Application.h"
#include "mindustry/net/Net_invoke_arc_func_Prov_7.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "mindustry/net/Net_invoke_arc_func_Prov_8.h"
#include "arc/func/Cons.h"
#include "java/io/InputStream.h"
#include "java/nio/BufferOverflowException.h"
#include "java/lang/String.h"
#include "java/nio/channels/ClosedChannelException.h"
#include "java/io/EOFException.h"
#include "java/io/IOException.h"
#include "mindustry/net/Packet.h"
#include "mindustry/net/NetConnection.h"
#include "mindustry/net/Streamable_IncrementalStream.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/core/Platform.h"
#include "arc/struct/IntMap_Entry.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/game/EventType_ClientServerConnectEvent.h"
#include "java/nio/BufferUnderflowException.h"
#include "net/jpountz/lz4/LZ4Exception.h"
#include "mindustry/net/ValidateException.h"
#include "arc/util/Strings.h"
#include "arc/util/Threads.h"
#include "mindustry/gen/Player.h"
#include "mindustry/net/Packets_StreamBegin.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "java/lang/StackTraceElement.h"

extern "C" {

jint SF_mindustry_net_Net_packetIdAssetStream;
jint SF_mindustry_net_Net_packetIdWorldStream;
jint SF_mindustry_net_Net_packetIdTextureStream;
jobject SF_mindustry_net_Net_packetProvs;
jobject SF_mindustry_net_Net_packetClasses;
jobject SF_mindustry_net_Net_packetToId;

void mark_mindustry_net_Net(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_Net_packetProvs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Net_packetProvs)->clazz)->markFunction)((jobject) SF_mindustry_net_Net_packetProvs, mark, depth + 1);
		if (SF_mindustry_net_Net_packetClasses)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Net_packetClasses)->clazz)->markFunction)((jobject) SF_mindustry_net_Net_packetClasses, mark, depth + 1);
		if (SF_mindustry_net_Net_packetToId)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Net_packetToId)->clazz)->markFunction)((jobject) SF_mindustry_net_Net_packetToId, mark, depth + 1);
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
	auto self = (mindustry_net_Net *) object;
	if (self->F_currentStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentStream)->clazz)->markFunction)((jobject) self->F_currentStream, mark, depth + 1);
	if (self->F_packetQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packetQueue)->clazz)->markFunction)((jobject) self->F_packetQueue, mark, depth + 1);
	if (self->F_clientListeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clientListeners)->clazz)->markFunction)((jobject) self->F_clientListeners, mark, depth + 1);
	if (self->F_serverListeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_serverListeners)->clazz)->markFunction)((jobject) self->F_serverListeners, mark, depth + 1);
	if (self->F_streams)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_streams)->clazz)->markFunction)((jobject) self->F_streams, mark, depth + 1);
	if (self->F_pingExecutor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pingExecutor)->clazz)->markFunction)((jobject) self->F_pingExecutor, mark, depth + 1);
	if (self->F_provider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_provider)->clazz)->markFunction)((jobject) self->F_provider, mark, depth + 1);
}

jint SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:registerPacket", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Net(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(61);
	clinit_mindustry_net_Net(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Net_packetProvs;
	frame[1].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(62);
	clinit_mindustry_net_Net(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Net_packetProvs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_net_Packet, sp[0].o));
	LINE_NUMBER(64);
	clinit_mindustry_net_Net(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Net_packetClasses;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	clinit_mindustry_net_Net(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Net_packetToId;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_net_Net_getPacketClassId_java_lang_Class_R_byte(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:getPacketClassId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Net(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(70);
	clinit_mindustry_net_Net(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Net_packetToId;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[0].o), (jint(-1)));
	popStackFrame(ctx);
	return (jbyte(temp0));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_net_Net_getPacketId_mindustry_net_Packet_R_byte(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:getPacketId", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Net(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(74);
	clinit_mindustry_net_Net(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Net_packetToId;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	frame[1].i = temp0;
	LINE_NUMBER(75);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown packet type: \u0001"_j.string, 1, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (jbyte((frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_Net_newPacket_byte_R_mindustry_net_Packet(jcontext ctx, jbyte param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:newPacket", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Net(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(80);
	clinit_mindustry_net_Net(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Net_packetProvs;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[0].i) & (255)));
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (checkCast(ctx, &class_arc_func_Prov, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_func_Prov, sp[0].o)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_net_Packet, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Net_mindustry_net_Net$NetProvider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Net(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Net *) NULL_CHECK(sp[0].o))->F_packetQueue = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_net_Net *) NULL_CHECK(sp[0].o))->F_clientListeners = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_net_Net *) NULL_CHECK(sp[0].o))->F_serverListeners = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[1].o);
	((mindustry_net_Net *) NULL_CHECK(sp[0].o))->F_streams = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	LINE_NUMBER(41);
	sp += 1;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isIos) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)SM_arc_util_Threads_boundedExecutor_java_lang_String_int_R_java_util_concurrent_ExecutorService(ctx, (((jobject) createStringLiteral(ctx, u8"Ping Servers"_j))), (32));
	sp += 1;
	goto label_8;
	}
label_7:;
	LINE_NUMBER(42);
	sp->o = (jobject)SM_arc_util_Threads_unboundedExecutor_R_java_util_concurrent_ExecutorService(ctx);
	sp++;
label_8:;
	{
	sp -= 2;
	((mindustry_net_Net *) NULL_CHECK(sp[0].o))->F_pingExecutor = (jref) sp[1].o;
	LINE_NUMBER(84);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider = (jref) (frame[1].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_handleException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:handleException", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	if ((isInstance(ctx, (frame[1].o), &class_arc_net_ArcNetException)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(89);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_net_Net_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_java_lang_Runnable_5);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(90);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_channels_ClosedChannelException)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(91);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_net_Net_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_java_lang_Runnable_6);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(93);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_net_Net_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_java_lang_Runnable_7);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Net_showError_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:showError", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	LINE_NUMBER(102);
	frame[2].o = (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_java_lang_Throwable_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_getCause_R_java_lang_Throwable])(ctx, (frame[2].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_lang_Throwable_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_getCause_R_java_lang_Throwable])(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_arc_util_Strings_getFinalMessage_java_lang_Throwable_R_java_lang_String(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(109);
	if ((frame[3].o) != nullptr) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_8;
label_7:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_8:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(111);
	frame[6].i = (jint(0));
	LINE_NUMBER(113);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_BufferUnderflowException)) != 0) goto label_12;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_BufferOverflowException)) != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getCause_R_java_lang_Throwable])(ctx, (frame[1].o));
	if ((isInstance(ctx, sp[0].o, &class_java_io_EOFException)) == 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(114);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error.io"_j))));
	frame[4].o = sp[0].o;
	goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"mismatch"_j))));
	if (temp0 != 0) goto label_15;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_net_jpountz_lz4_LZ4Exception)) != 0) goto label_15;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_IndexOutOfBoundsException)) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement])(ctx, (frame[1].o));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))))->vtable)[VTABLE_java_lang_StackTraceElement_getClassName_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"java.nio"_j))));
	if (temp0 == 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(116);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error.mismatch"_j))));
	frame[4].o = sp[0].o;
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"port out of range"_j))));
	if (temp0 != 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"invalid argument"_j))));
	if (temp0 != 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"invalid"_j))));
	if (temp0 == 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"address"_j))));
	if (temp0 != 0) goto label_17;
	}
label_18:;
	{
	sp[0].o = (jobject)SM_arc_util_Strings_neatError_java_lang_Throwable_R_java_lang_String(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"address associated"_j))));
	if (temp0 == 0) goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(118);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error.invalidaddress"_j))));
	frame[4].o = sp[0].o;
	goto label_14;
	}
label_19:;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"connection refused"_j))));
	if (temp0 != 0) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"route to host"_j))));
	if (temp0 != 0) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"unknownhost"_j))));
	if (temp0 == 0) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(120);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error.unreachable"_j))));
	frame[4].o = sp[0].o;
	goto label_14;
	}
label_21:;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"timeout"_j))));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(122);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error.timedout"_j))));
	frame[4].o = sp[0].o;
	goto label_14;
	}
label_22:;
	{
	LINE_NUMBER(123);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"alreadyconnected"_j))));
	if (temp0 != 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"connection is closed"_j))));
	if (temp0 == 0) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(124);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error.alreadyconnected"_j))));
	frame[4].o = sp[0].o;
	goto label_14;
	}
label_25:;
	{
	LINE_NUMBER(125);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(126);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error.any"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(127);
	frame[6].i = (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(130);
	if ((frame[6].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(131);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@error.any"_j))), (frame[1].o));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"connectfail"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[4].o, (jint(0))) = (frame[4].o);
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	((func_mindustry_core_UI_showText_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_30:;
	{
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(137);
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(138);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(142);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_setClientLoaded_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:setClientLoaded", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(149);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_clientLoaded = (frame[1].i);
	LINE_NUMBER(151);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(153);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_packetQueue;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_packetQueue;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	((func_mindustry_net_Net_handleClientReceived_mindustry_net_Packet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClientReceived_mindustry_net_Packet])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_net_Packet, sp[1].o)));
	LINE_NUMBER(153);
	INST_IINC(2, 1);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_packetQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_setClientConnected(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:setClientConnected", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active = (jint(1));
	LINE_NUMBER(163);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server = (jint(0));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_connect_java_lang_String_int_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:connect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_streams;
	((func_arc_struct_IntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(171);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_currentStream = (jref) (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(174);
	if (((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_6;
	}
	{
	LINE_NUMBER(175);
	clinit_mindustry_game_EventType$ClientServerConnectEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ClientServerConnectEvent);
	init_mindustry_game_EventType$ClientServerConnectEvent_java_lang_String_int(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_connectClient_java_lang_String_int_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_connectClient_java_lang_String_int_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].o));
	LINE_NUMBER(177);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active = (jint(1));
	LINE_NUMBER(178);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server = (jint(0));
	goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(180);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"alreadyconnected"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(184);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(182);
	frame[4].o = sp[0].o;
	LINE_NUMBER(183);
	((func_mindustry_net_Net_showError_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Net_showError_java_lang_Throwable])(ctx, (frame[0].o), (frame[4].o));
	}
label_11:;
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Net_host_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:host", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_hostServer_int) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_hostServer_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(192);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active = (jint(1));
	LINE_NUMBER(193);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server = (jint(1));
	LINE_NUMBER(195);
	jfloat temp0 = jfloat(60.0f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_net_Net_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_java_lang_Runnable_8);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_closeServer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:closeServer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_mindustry_net_Net_getConnections_R_java_lang_Iterable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Net_getConnections_R_java_lang_Iterable])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_net_NetConnection, sp[0].o));
	LINE_NUMBER(203);
	sp[0].o = frame[2].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_serverClose;
	SM_mindustry_gen_Call_kick_mindustry_net_NetConnection_mindustry_net_Packets$KickReason(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_closeServer) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_closeServer, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(207);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server = (jint(0));
	LINE_NUMBER(208);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active = (jint(0));
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	((func_mindustry_net_Net_closeServer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Net_closeServer])(ctx, (frame[0].o));
	LINE_NUMBER(213);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_disconnectNoReset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_disconnectNoReset])(ctx, sp[0].o);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_disconnect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:disconnect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	if (((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server) != 0) goto label_1;
	}
	{
	LINE_NUMBER(218);
	SM_arc_util_Log_info_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"Disconnecting."_j))));
	}
label_1:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_disconnectClient) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_disconnectClient, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(221);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server = (jint(0));
	LINE_NUMBER(222);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active = (jint(0));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_streams;
	sp[0].o = (jobject)((func_arc_struct_IntMap_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_IntMap$Entry, sp[0].o));
	LINE_NUMBER(224);
	sp[0].o = (jobject)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[2].o)))->F_value;
	((func_mindustry_net_Streamable$StreamBuilder_close) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_net_Streamable$StreamBuilder, sp[0].o)))->vtable)[VTABLE_mindustry_net_Streamable$StreamBuilder_close])(ctx, (checkCast(ctx, &class_mindustry_net_Streamable$StreamBuilder, sp[0].o)));
	LINE_NUMBER(225);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(226);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_currentStream = (jref) (jobject(nullptr));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_discoverServers_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:discoverServers", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_discoverServers_arc_func_Cons_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_discoverServers_arc_func_Cons_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Net_getConnections_R_java_lang_Iterable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:getConnections", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	sp[0].o = (jobject)((func_mindustry_net_Net$NetProvider_getConnections_R_java_lang_Iterable) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_getConnections_R_java_lang_Iterable, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_send_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:send", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(246);
	if (((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server) == 0) goto label_1;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_boolean) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_sendClient_java_lang_Object_boolean) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_sendClient_java_lang_Object_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:send", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:sendExcept", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Net_getCurrentStream_R_mindustry_net_Streamable$StreamBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:getCurrentStream", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_currentStream;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:handleClient", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_clientListeners;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:handleServer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_serverListeners;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_handleClientReceived_mindustry_net_Packet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:handleClientReceived", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)((func_mindustry_net_Packet_allow_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_Packet_allow_boolean_R_boolean])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(286);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(289);
	((func_mindustry_net_Packet_handled) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_Packet_handled])(ctx, (frame[1].o));
	LINE_NUMBER(291);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_net_Packets$StreamBegin)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_net_Packets$StreamBegin, (frame[1].o)));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_streams;
	jint temp0 = (jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[2].o)))->F_id;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Streamable$StreamBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_net_Streamable$StreamBuilder);
	sp[3].o = frame[2].o;
	sp[4].o = (jobject)SM_mindustry_net_Net_newPacket_byte_R_mindustry_net_Packet(ctx, ((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[2].o)))->F_type));
	jint temp1 = (jint)((func_mindustry_net_Streamable_incremental_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_net_Streamable, sp[4].o)))->vtable)[VTABLE_mindustry_net_Streamable_incremental_R_boolean])(ctx, (checkCast(ctx, &class_mindustry_net_Streamable, sp[4].o)));
	init_mindustry_net_Streamable$StreamBuilder_mindustry_net_Packets$StreamBegin_boolean(ctx, sp[2].o, sp[3].o, temp1);
	((mindustry_net_Net *) NULL_CHECK(sp[1].o))->F_currentStream = (jref) sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[2].o);
	LINE_NUMBER(293);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_currentStream;
	sp[1].o = (jobject)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK(sp[1].o))->F_incrementalStream;
	((mindustry_net_Packets$StreamBegin *) NULL_CHECK(sp[0].o))->F_incrementalStream = (jref) sp[1].o;
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_clientListeners;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_net_Packets$StreamBegin)));
	frame[4].o = (checkCast(ctx, &class_arc_func_Cons, sp[0].o));
	LINE_NUMBER(296);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	}
label_9:;
	LINE_NUMBER(298);
	goto label_10;
label_4:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_net_Packets$StreamChunk)) == 0) goto label_11;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_net_Packets$StreamChunk, (frame[1].o)));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_streams;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_net_Packets$StreamChunk *) NULL_CHECK((frame[3].o)))->F_id));
	frame[4].o = (checkCast(ctx, &class_mindustry_net_Streamable$StreamBuilder, sp[0].o));
	LINE_NUMBER(300);
	if ((frame[4].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(301);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Received stream chunk without a StreamBegin beforehand!"_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(303);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_net_Packets$StreamChunk *) NULL_CHECK((frame[3].o)))->F_data;
	((func_mindustry_net_Streamable$StreamBuilder_add_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Streamable$StreamBuilder_add_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(305);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_LoadingFragment_showingProgress_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_showingProgress_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(306);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	jfloat temp0 = (jfloat)((func_mindustry_net_Streamable$StreamBuilder_progress_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_net_Streamable$StreamBuilder_progress_R_float])(ctx, (frame[4].o));
	((func_mindustry_ui_fragments_LoadingFragment_setProgress_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setProgress_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(307);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_snapProgress) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_snapProgress])(ctx, sp[0].o);
	}
label_17:;
	{
	LINE_NUMBER(310);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_resetTimeout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_resetTimeout])(ctx, sp[0].o);
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_mindustry_net_Streamable$StreamBuilder_isDone_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_net_Streamable$StreamBuilder_isDone_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_streams;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[4].o)))->F_id));
	LINE_NUMBER(315);
	if (((jint)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[4].o)))->F_incremental) != 0) goto label_24;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_net_Streamable$StreamBuilder_build_R_mindustry_net_Streamable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_net_Streamable$StreamBuilder_build_R_mindustry_net_Streamable])(ctx, (frame[4].o));
	((func_mindustry_net_Net_handleClientReceived_mindustry_net_Packet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClientReceived_mindustry_net_Packet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(317);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_currentStream = (jref) (jobject(nullptr));
	goto label_21;
	}
label_24:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_net_Streamable$StreamBuilder *) NULL_CHECK((frame[4].o)))->F_incrementalStream;
	((func_mindustry_net_Streamable$IncrementalStream_finish) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Streamable$IncrementalStream_finish])(ctx, sp[0].o);
	}
label_21:;
	LINE_NUMBER(322);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(323);
	jint temp0 = (jint)((func_mindustry_net_Packet_getPriority_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_Packet_getPriority_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(325);
	if (((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_clientLoaded) != 0) goto label_28;
	}
	{
	if ((frame[4].i) != (jint(2))) goto label_29;
	}
label_28:;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_clientListeners;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_clientListeners;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (checkCast(ctx, &class_arc_func_Cons, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_func_Cons, sp[0].o)), (frame[1].o));
	goto label_10;
	}
label_30:;
	{
	LINE_NUMBER(329);
	((func_mindustry_net_Packet_handleClient) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_Packet_handleClient])(ctx, (frame[1].o));
	goto label_10;
	}
label_29:;
	{
	LINE_NUMBER(331);
	if ((frame[4].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_packetQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_10:;
	LINE_NUMBER(335);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:handleServerReceived", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(341);
	jint temp0 = (jint)((func_mindustry_net_Packet_allow_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_net_Packet_allow_boolean_R_boolean])(ctx, (frame[2].o), (jint(1)));
	if (temp0 != 0) goto label_0;
	}
	LINE_NUMBER(342);
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_mindustry_net_ValidateException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(346);
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_hasConnected) != 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_net_Packet_getPriority_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_net_Packet_getPriority_R_int])(ctx, (frame[2].o));
	if (temp0 != (jint(2))) goto label_1;
	}
label_8:;
	{
	LINE_NUMBER(347);
	((func_mindustry_net_Packet_handled) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_net_Packet_handled])(ctx, (frame[2].o));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_serverListeners;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_serverListeners;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, (checkCast(ctx, &class_arc_func_Cons2, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_func_Cons2, sp[0].o)), (frame[1].o), (frame[2].o));
	goto label_1;
	}
label_10:;
	{
	LINE_NUMBER(353);
	((func_mindustry_net_Packet_handleServer_mindustry_net_NetConnection) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_net_Packet_handleServer_mindustry_net_NetConnection])(ctx, (frame[2].o), (frame[1].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(367);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(356);
	frame[3].o = sp[0].o;
	LINE_NUMBER(358);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Validation failed for '@': @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_net_ValidateException *) NULL_CHECK((frame[3].o)))->F_player;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_mindustry_net_ValidateException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_net_ValidateException_getMessage_R_java_lang_String])(ctx, (frame[3].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(367);
	goto label_12;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(359);
	frame[3].o = sp[0].o;
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_java_lang_RuntimeException_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_RuntimeException_getCause_R_java_lang_Throwable])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_net_ValidateException)) == 0) goto label_16;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_net_ValidateException, (frame[5].o)));
	LINE_NUMBER(362);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Validation failed for '@': @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_net_ValidateException *) NULL_CHECK((frame[4].o)))->F_player;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_mindustry_net_ValidateException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_net_ValidateException_getMessage_R_java_lang_String])(ctx, (frame[4].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	goto label_12;
	}
label_16:;
	{
	LINE_NUMBER(365);
	throwException(ctx, (frame[3].o));	}
label_12:;
	LINE_NUMBER(368);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Net_setConnectFilter_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:setConnectFilter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Net_getConnectFilter_R_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:getConnectFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	sp[0].o = (jobject)((func_mindustry_net_Net$NetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:pingHost", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_pingExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_net_Net_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_java_lang_Runnable_9);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Net_active_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:active", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return ((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Net_server_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:server", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(398);
	if (((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_net_Net_client_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:client", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	if (((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Net_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_dispose) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(410);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_server = (jint(0));
	LINE_NUMBER(411);
	((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_active = (jint(0));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_lambda$pingHost$0_java_lang_String_int_arc_func_Cons_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:lambda$pingHost$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((mindustry_net_Net *) NULL_CHECK((frame[0].o)))->F_provider;
	((func_mindustry_net_Net$NetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons) resolveInterfaceMethod(ctx, &class_mindustry_net_Net$NetProvider, INDEX_mindustry_net_Net$NetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_lambda$handleException$2_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:lambda$handleException$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	((func_mindustry_net_Net_showError_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Net_showError_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_lambda$handleException$1_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:lambda$handleException$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	clinit_java_io_IOException(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String_java_lang_Throwable(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"alreadyconnected"_j))), (frame[1].o));
	((func_mindustry_net_Net_showError_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_showError_java_lang_Throwable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Net_lambda$handleException$0_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:lambda$handleException$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_java_io_IOException(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String_java_lang_Throwable(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"mismatch"_j))), (frame[1].o));
	((func_mindustry_net_Net_showError_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_showError_java_lang_Throwable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_net_Net(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Net:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Net(ctx);
	{
	LINE_NUMBER(27);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_net_Net(ctx);
	SF_mindustry_net_Net_packetProvs = sp[0].o;
	LINE_NUMBER(28);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_net_Net(ctx);
	SF_mindustry_net_Net_packetClasses = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[0].o);
	clinit_mindustry_net_Net(ctx);
	SF_mindustry_net_Net_packetToId = sp[0].o;
	LINE_NUMBER(47);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_net_Net_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_arc_func_Prov_7);
		sp[0].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(48);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_net_Net_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_arc_func_Prov_8);
		sp[0].o = (jobject) proxy;
	}
	jint temp1 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(49);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_net_Net_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_arc_func_Prov_9);
		sp[0].o = (jobject) proxy;
	}
	jint temp2 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	clinit_mindustry_net_Net(ctx);
	SF_mindustry_net_Net_packetIdWorldStream = temp2;
	LINE_NUMBER(50);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_arc_func_Prov_10(ctx);
		auto proxy = (mindustry_net_Net_invoke_arc_func_Prov_10 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_arc_func_Prov_10);
		sp[0].o = (jobject) proxy;
	}
	jint temp3 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(51);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_arc_func_Prov_11(ctx);
		auto proxy = (mindustry_net_Net_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_arc_func_Prov_11);
		sp[0].o = (jobject) proxy;
	}
	jint temp4 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(52);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_arc_func_Prov_12(ctx);
		auto proxy = (mindustry_net_Net_invoke_arc_func_Prov_12 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_arc_func_Prov_12);
		sp[0].o = (jobject) proxy;
	}
	jint temp5 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	clinit_mindustry_net_Net(ctx);
	SF_mindustry_net_Net_packetIdAssetStream = temp5;
	LINE_NUMBER(53);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Net_invoke_arc_func_Prov_13(ctx);
		auto proxy = (mindustry_net_Net_invoke_arc_func_Prov_13 *) gcAlloc(ctx, &class_mindustry_net_Net_invoke_arc_func_Prov_13);
		sp[0].o = (jobject) proxy;
	}
	jint temp6 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	clinit_mindustry_net_Net(ctx);
	SF_mindustry_net_Net_packetIdTextureStream = temp6;
	LINE_NUMBER(56);
	SM_mindustry_gen_Call_registerPackets(ctx);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_net_Net;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field currentStream
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getCurrentStream
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[18]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getConnectFilter
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[24]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_net_Net[] {
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
	(void *) M_mindustry_net_Net_handleException_java_lang_Throwable,
	(void *) M_mindustry_net_Net_showError_java_lang_Throwable,
	(void *) M_mindustry_net_Net_setClientLoaded_boolean,
	(void *) M_mindustry_net_Net_setClientConnected,
	(void *) M_mindustry_net_Net_connect_java_lang_String_int_java_lang_Runnable,
	(void *) M_mindustry_net_Net_host_int,
	(void *) M_mindustry_net_Net_closeServer,
	(void *) M_mindustry_net_Net_reset,
	(void *) M_mindustry_net_Net_disconnect,
	(void *) M_mindustry_net_Net_discoverServers_arc_func_Cons_java_lang_Runnable,
	(void *) M_mindustry_net_Net_getConnections_R_java_lang_Iterable,
	(void *) M_mindustry_net_Net_send_java_lang_Object_boolean,
	(void *) M_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean,
	(void *) M_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean,
	(void *) M_mindustry_net_Net_getCurrentStream_R_mindustry_net_Streamable$StreamBuilder,
	(void *) M_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons,
	(void *) M_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_net_Net_handleClientReceived_mindustry_net_Packet,
	(void *) M_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet,
	(void *) M_mindustry_net_Net_setConnectFilter_arc_net_Server$ServerConnectFilter,
	(void *) M_mindustry_net_Net_getConnectFilter_R_arc_net_Server$ServerConnectFilter,
	(void *) M_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons,
	(void *) M_mindustry_net_Net_active_R_boolean,
	(void *) M_mindustry_net_Net_server_R_boolean,
	(void *) M_mindustry_net_Net_client_R_boolean,
	(void *) M_mindustry_net_Net_dispose,
	(void *) M_mindustry_net_Net_lambda$pingHost$0_java_lang_String_int_arc_func_Cons_arc_func_Cons,
	(void *) M_mindustry_net_Net_lambda$handleException$2_java_lang_Throwable,
	(void *) M_mindustry_net_Net_lambda$handleException$1_java_lang_Throwable,
	(void *) M_mindustry_net_Net_lambda$handleException$0_java_lang_Throwable,
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
	{ "handleException", "(Ljava/lang/Throwable;)V" },
	{ "showError", "(Ljava/lang/Throwable;)V" },
	{ "setClientLoaded", "(Z)V" },
	{ "setClientConnected", "()V" },
	{ "connect", "(Ljava/lang/String;ILjava/lang/Runnable;)V" },
	{ "host", "(I)V" },
	{ "closeServer", "()V" },
	{ "reset", "()V" },
	{ "disconnect", "()V" },
	{ "discoverServers", "(Larc/func/Cons;Ljava/lang/Runnable;)V" },
	{ "getConnections", "()Ljava/lang/Iterable;" },
	{ "send", "(Ljava/lang/Object;Z)V" },
	{ "send", "(Ljava/lang/Object;Ljava/lang/Iterable;Z)V" },
	{ "sendExcept", "(Lmindustry/net/NetConnection;Ljava/lang/Object;Z)V" },
	{ "getCurrentStream", "()Lmindustry/net/Streamable$StreamBuilder;" },
	{ "handleClient", "(Ljava/lang/Class;Larc/func/Cons;)V" },
	{ "handleServer", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "handleClientReceived", "(Lmindustry/net/Packet;)V" },
	{ "handleServerReceived", "(Lmindustry/net/NetConnection;Lmindustry/net/Packet;)V" },
	{ "setConnectFilter", "(Larc/net/Server$ServerConnectFilter;)V" },
	{ "getConnectFilter", "()Larc/net/Server$ServerConnectFilter;" },
	{ "pingHost", "(Ljava/lang/String;ILarc/func/Cons;Larc/func/Cons;)V" },
	{ "active", "()Z" },
	{ "server", "()Z" },
	{ "client", "()Z" },
	{ "dispose", "()V" },
	{ "lambda$pingHost$0", "(Ljava/lang/String;ILarc/func/Cons;Larc/func/Cons;)V" },
	{ "lambda$handleException$2", "(Ljava/lang/Throwable;)V" },
	{ "lambda$handleException$1", "(Ljava/lang/Throwable;)V" },
	{ "lambda$handleException$0", "(Ljava/lang/Throwable;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_net_Net$NetProvider,
};

static FieldMetadata fields[] {
	{ "packetIdAssetStream", &class_int, (intptr_t) &SF_mindustry_net_Net_packetIdAssetStream, "I", 25 },
	{ "packetIdWorldStream", &class_int, (intptr_t) &SF_mindustry_net_Net_packetIdWorldStream, "I", 25 },
	{ "packetIdTextureStream", &class_int, (intptr_t) &SF_mindustry_net_Net_packetIdTextureStream, "I", 25 },
	{ "packetProvs", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_net_Net_packetProvs, "Larc/struct/Seq;", 10 },
	{ "packetClasses", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_net_Net_packetClasses, "Larc/struct/Seq;", 10 },
	{ "packetToId", &class_arc_struct_ObjectIntMap, (intptr_t) &SF_mindustry_net_Net_packetToId, "Larc/struct/ObjectIntMap;", 10 },
	{ "server", &class_boolean, offsetof(mindustry_net_Net, F_server), "Z", 2 },
	{ "active", &class_boolean, offsetof(mindustry_net_Net, F_active), "Z", 2 },
	{ "clientLoaded", &class_boolean, offsetof(mindustry_net_Net, F_clientLoaded), "Z", 2 },
	{ "currentStream", &class_mindustry_net_Streamable$StreamBuilder, offsetof(mindustry_net_Net, F_currentStream), "Lmindustry/net/Streamable$StreamBuilder;", 2 },
	{ "packetQueue", &class_arc_struct_Seq, offsetof(mindustry_net_Net, F_packetQueue), "Larc/struct/Seq;", 18 },
	{ "clientListeners", &class_arc_struct_ObjectMap, offsetof(mindustry_net_Net, F_clientListeners), "Larc/struct/ObjectMap;", 18 },
	{ "serverListeners", &class_arc_struct_ObjectMap, offsetof(mindustry_net_Net, F_serverListeners), "Larc/struct/ObjectMap;", 18 },
	{ "streams", &class_arc_struct_IntMap, offsetof(mindustry_net_Net, F_streams), "Larc/struct/IntMap;", 18 },
	{ "pingExecutor", &class_java_util_concurrent_ExecutorService, offsetof(mindustry_net_Net, F_pingExecutor), "Ljava/util/concurrent/ExecutorService;", 18 },
	{ "provider", &class_mindustry_net_Net$NetProvider, offsetof(mindustry_net_Net, F_provider), "Lmindustry/net/Net$NetProvider;", 18 },
};

static MethodMetadata methods[] {
	{ "registerPacket", (intptr_t) SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int, 0, "(Larc/func/Prov;)I", 9 },
	{ "getPacketClassId", (intptr_t) SM_mindustry_net_Net_getPacketClassId_java_lang_Class_R_byte, 0, "(Ljava/lang/Class;)B", 9 },
	{ "getPacketId", (intptr_t) SM_mindustry_net_Net_getPacketId_mindustry_net_Packet_R_byte, 0, "(Lmindustry/net/Packet;)B", 9 },
	{ "newPacket", (intptr_t) SM_mindustry_net_Net_newPacket_byte_R_mindustry_net_Packet, 0, "(B)Lmindustry/net/Packet;", 9 },
	{ "<init>", (intptr_t) init_mindustry_net_Net_mindustry_net_Net$NetProvider, 0, "(Lmindustry/net/Net$NetProvider;)V", 1 },
	{ "handleException", (intptr_t) M_mindustry_net_Net_handleException_java_lang_Throwable, VTABLE_mindustry_net_Net_handleException_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 1 },
	{ "showError", (intptr_t) M_mindustry_net_Net_showError_java_lang_Throwable, VTABLE_mindustry_net_Net_showError_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 1 },
	{ "setClientLoaded", (intptr_t) M_mindustry_net_Net_setClientLoaded_boolean, VTABLE_mindustry_net_Net_setClientLoaded_boolean, "(Z)V", 1 },
	{ "setClientConnected", (intptr_t) M_mindustry_net_Net_setClientConnected, VTABLE_mindustry_net_Net_setClientConnected, "()V", 1 },
	{ "connect", (intptr_t) M_mindustry_net_Net_connect_java_lang_String_int_java_lang_Runnable, VTABLE_mindustry_net_Net_connect_java_lang_String_int_java_lang_Runnable, "(Ljava/lang/String;ILjava/lang/Runnable;)V", 1 },
	{ "host", (intptr_t) M_mindustry_net_Net_host_int, VTABLE_mindustry_net_Net_host_int, "(I)V", 1 },
	{ "closeServer", (intptr_t) M_mindustry_net_Net_closeServer, VTABLE_mindustry_net_Net_closeServer, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_net_Net_reset, VTABLE_mindustry_net_Net_reset, "()V", 1 },
	{ "disconnect", (intptr_t) M_mindustry_net_Net_disconnect, VTABLE_mindustry_net_Net_disconnect, "()V", 1 },
	{ "discoverServers", (intptr_t) M_mindustry_net_Net_discoverServers_arc_func_Cons_java_lang_Runnable, VTABLE_mindustry_net_Net_discoverServers_arc_func_Cons_java_lang_Runnable, "(Larc/func/Cons;Ljava/lang/Runnable;)V", 1 },
	{ "getConnections", (intptr_t) M_mindustry_net_Net_getConnections_R_java_lang_Iterable, VTABLE_mindustry_net_Net_getConnections_R_java_lang_Iterable, "()Ljava/lang/Iterable;", 1 },
	{ "send", (intptr_t) M_mindustry_net_Net_send_java_lang_Object_boolean, VTABLE_mindustry_net_Net_send_java_lang_Object_boolean, "(Ljava/lang/Object;Z)V", 1 },
	{ "send", (intptr_t) M_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean, VTABLE_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean, "(Ljava/lang/Object;Ljava/lang/Iterable;Z)V", 1 },
	{ "sendExcept", (intptr_t) M_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean, VTABLE_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean, "(Lmindustry/net/NetConnection;Ljava/lang/Object;Z)V", 1 },
	{ "getCurrentStream", (intptr_t) M_mindustry_net_Net_getCurrentStream_R_mindustry_net_Streamable$StreamBuilder, VTABLE_mindustry_net_Net_getCurrentStream_R_mindustry_net_Streamable$StreamBuilder, "()Lmindustry/net/Streamable$StreamBuilder;", 1 },
	{ "handleClient", (intptr_t) M_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons, VTABLE_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons, "(Ljava/lang/Class;Larc/func/Cons;)V", 1 },
	{ "handleServer", (intptr_t) M_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2, VTABLE_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2, "(Ljava/lang/Class;Larc/func/Cons2;)V", 1 },
	{ "handleClientReceived", (intptr_t) M_mindustry_net_Net_handleClientReceived_mindustry_net_Packet, VTABLE_mindustry_net_Net_handleClientReceived_mindustry_net_Packet, "(Lmindustry/net/Packet;)V", 1 },
	{ "handleServerReceived", (intptr_t) M_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet, VTABLE_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet, "(Lmindustry/net/NetConnection;Lmindustry/net/Packet;)V", 1 },
	{ "setConnectFilter", (intptr_t) M_mindustry_net_Net_setConnectFilter_arc_net_Server$ServerConnectFilter, VTABLE_mindustry_net_Net_setConnectFilter_arc_net_Server$ServerConnectFilter, "(Larc/net/Server$ServerConnectFilter;)V", 1 },
	{ "getConnectFilter", (intptr_t) M_mindustry_net_Net_getConnectFilter_R_arc_net_Server$ServerConnectFilter, VTABLE_mindustry_net_Net_getConnectFilter_R_arc_net_Server$ServerConnectFilter, "()Larc/net/Server$ServerConnectFilter;", 1 },
	{ "pingHost", (intptr_t) M_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons, VTABLE_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons, "(Ljava/lang/String;ILarc/func/Cons;Larc/func/Cons;)V", 1 },
	{ "active", (intptr_t) M_mindustry_net_Net_active_R_boolean, VTABLE_mindustry_net_Net_active_R_boolean, "()Z", 1 },
	{ "server", (intptr_t) M_mindustry_net_Net_server_R_boolean, VTABLE_mindustry_net_Net_server_R_boolean, "()Z", 1 },
	{ "client", (intptr_t) M_mindustry_net_Net_client_R_boolean, VTABLE_mindustry_net_Net_client_R_boolean, "()Z", 1 },
	{ "dispose", (intptr_t) M_mindustry_net_Net_dispose, VTABLE_mindustry_net_Net_dispose, "()V", 1 },
	{ "lambda$pingHost$0", (intptr_t) M_mindustry_net_Net_lambda$pingHost$0_java_lang_String_int_arc_func_Cons_arc_func_Cons, VTABLE_mindustry_net_Net_lambda$pingHost$0_java_lang_String_int_arc_func_Cons_arc_func_Cons, "(Ljava/lang/String;ILarc/func/Cons;Larc/func/Cons;)V", 4098 },
	{ "lambda$handleException$2", (intptr_t) M_mindustry_net_Net_lambda$handleException$2_java_lang_Throwable, VTABLE_mindustry_net_Net_lambda$handleException$2_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 4098 },
	{ "lambda$handleException$1", (intptr_t) M_mindustry_net_Net_lambda$handleException$1_java_lang_Throwable, VTABLE_mindustry_net_Net_lambda$handleException$1_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 4098 },
	{ "lambda$handleException$0", (intptr_t) M_mindustry_net_Net_lambda$handleException$0_java_lang_Throwable, VTABLE_mindustry_net_Net_lambda$handleException$0_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_net_Net, 0, "()V", 8 },
};

Class class_mindustry_net_Net{
		.nativeName = (intptr_t) "mindustry/net/Net",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Net),
		.classVtable = (intptr_t) vtable_mindustry_net_Net,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Net,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_net_Net,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Net = registerClass(&class_mindustry_net_Net);

}
