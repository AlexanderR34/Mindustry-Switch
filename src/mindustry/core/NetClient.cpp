#include "mindustry/core/NetClient.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/net/Packets_ConnectPacket.h"
#include "mindustry/net/Packets_AssetRequirementStream.h"
#include "mindustry/core/Version.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "mindustry/mod/Mods.h"
#include "arc/util/serialization/Json.h"
#include "mindustry/core/NetServer_ChatFormatter.h"
#include "arc/struct/Seq.h"
#include "java/util/zip/InflaterInputStream.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "arc/Settings.h"
#include "arc/util/serialization/JsonValue_ValueType.h"
#include "java/lang/Thread.h"
#include "arc/math/Mathf.h"
#include "mindustry/io/TypeIO_ClientBuildPlans.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Log.h"
#include "java/io/DataInputStream.h"
#include "arc/util/Timekeeper.h"
#include "arc/util/Time.h"
#include "mindustry/mod/DataAssetCache.h"
#include "mindustry/gen/Building.h"
#include "mindustry/net/Packets_TextureStream.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/game/Universe.h"
#include "mindustry/ui/dialogs/JoinDialog.h"
#include "mindustry/core/NetClient_invoke_java_lang_Runnable_9.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/System.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "mindustry/game/Rules.h"
#include "mindustry/core/GameState_State.h"
#include "arc/util/CommandHandler.h"
#include "mindustry/ui/dialogs/TraceDialog.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "arc/func/Cons.h"
#include "arc/audio/Audio.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "mindustry/core/Control.h"
#include "mindustry/gen/Syncc.h"
#include "java/io/IOException.h"
#include "mindustry/net/Administration.h"
#include "mindustry/gen/EntityMapping.h"
#include "arc/util/serialization/JsonReader.h"
#include "mindustry/core/NetServer_InvalidCommandHandler.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "java/lang/AutoCloseable.h"
#include "mindustry/core/NetClient_invoke_java_lang_Runnable_17.h"
#include "mindustry/net/Administration_TraceInfo.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/core/Platform.h"
#include "java/io/ByteArrayInputStream.h"
#include "mindustry/core/NetClient_invoke_arc_func_Cons_9.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/core/NetClient_invoke_arc_func_Cons_8.h"
#include "mindustry/core/NetClient_invoke_arc_func_Cons_7.h"
#include "mindustry/core/NetClient_invoke_arc_func_Cons_6.h"
#include "mindustry/net/NetworkIO.h"
#include "arc/util/io/Reads.h"
#include "mindustry/net/Administration_Config.h"
#include "mindustry/net/ValidateException.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/util/Threads.h"
#include "arc/audio/Sound.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/game/EventType_WaveEvent.h"
#include "mindustry/core/NetClient_invoke_java_lang_Runnable_14.h"
#include "mindustry/core/NetClient_invoke_java_lang_Runnable_13.h"
#include "arc/util/Ratekeeper.h"
#include "mindustry/core/NetClient_invoke_java_lang_Runnable_16.h"
#include "mindustry/net/Packets_StreamBegin.h"
#include "mindustry/core/NetClient_invoke_java_lang_Runnable_15.h"
#include "mindustry/core/NetClient_invoke_java_lang_Runnable_10.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/NetClient_invoke_java_lang_Runnable_12.h"
#include "mindustry/core/NetClient_invoke_java_lang_Runnable_11.h"
#include "arc/Events.h"
#include "arc/util/serialization/Base64Coder.h"
#include "mindustry/net/Packets_WorldStream.h"
#include "mindustry/net/Packets_Connect.h"
#include "mindustry/core/NetClient_invoke_arc_func_Prov_4.h"
#include "mindustry/core/NetClient_invoke_arc_func_Prov_5.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/core/NetClient_invoke_arc_func_Prov_6.h"
#include "mindustry/core/NetClient_invoke_arc_func_Prov_7.h"
#include "mindustry/world/modules/BlockModule.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "arc/util/CommandHandler_CommandResponse.h"
#include "java/lang/Throwable.h"
#include "mindustry/gen/Mechc.h"
#include "java/util/Locale.h"
#include "java/lang/Exception.h"
#include "mindustry/core/NetClient_invoke_arc_func_Cons_11.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/core/NetClient_invoke_arc_func_Cons_10.h"
#include "arc/struct/Queue.h"
#include "java/io/DataInput.h"
#include "mindustry/logic/GlobalVars.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/net/Packets_KickReason.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/core/Logic.h"
#include "arc/audio/Music.h"
#include "arc/util/serialization/JsonValue.h"
#include "java/lang/RuntimeException.h"
#include "arc/graphics/Camera.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/gen/Groups.h"
#include "arc/util/CommandHandler_ResponseType.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/util/Timer_Task.h"
#include "arc/struct/IntSeq.h"
#include "arc/Application.h"
#include "java/io/InputStream.h"
#include "java/lang/Short.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_PlayerChatEvent.h"
#include "mindustry/mod/DataManager.h"
#include "mindustry/net/Packets_Disconnect.h"
#include "mindustry/net/NetConnection.h"
#include "java/lang/Math.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/struct/ShortSeq.h"
#include "arc/util/Strings.h"
#include "arc/ApplicationListener.h"
#include "mindustry/gen/Player.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "mindustry/gen/Call.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jlong SF_mindustry_core_NetClient_entitySnapshotTimeout;
jfloat SF_mindustry_core_NetClient_dataTimeout;
jobject SF_mindustry_core_NetClient_playerSyncTime;
jobject SF_mindustry_core_NetClient_planSyncTime;
jobject SF_mindustry_core_NetClient_pingTime;
jobject SF_mindustry_core_NetClient_dataReads;
jobject SF_mindustry_core_NetClient_tmpJsonMap;
jobject SF_mindustry_core_NetClient_plansOut;

void mark_mindustry_core_NetClient(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_core_NetClient_playerSyncTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetClient_playerSyncTime)->clazz)->markFunction)((jobject) SF_mindustry_core_NetClient_playerSyncTime, mark, depth + 1);
		if (SF_mindustry_core_NetClient_planSyncTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetClient_planSyncTime)->clazz)->markFunction)((jobject) SF_mindustry_core_NetClient_planSyncTime, mark, depth + 1);
		if (SF_mindustry_core_NetClient_pingTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetClient_pingTime)->clazz)->markFunction)((jobject) SF_mindustry_core_NetClient_pingTime, mark, depth + 1);
		if (SF_mindustry_core_NetClient_dataReads)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetClient_dataReads)->clazz)->markFunction)((jobject) SF_mindustry_core_NetClient_dataReads, mark, depth + 1);
		if (SF_mindustry_core_NetClient_tmpJsonMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetClient_tmpJsonMap)->clazz)->markFunction)((jobject) SF_mindustry_core_NetClient_tmpJsonMap, mark, depth + 1);
		if (SF_mindustry_core_NetClient_plansOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetClient_plansOut)->clazz)->markFunction)((jobject) SF_mindustry_core_NetClient_plansOut, mark, depth + 1);
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
	auto self = (mindustry_core_NetClient *) object;
	if (self->F_removed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_removed)->clazz)->markFunction)((jobject) self->F_removed, mark, depth + 1);
	if (self->F_byteStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteStream)->clazz)->markFunction)((jobject) self->F_byteStream, mark, depth + 1);
	if (self->F_dataStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dataStream)->clazz)->markFunction)((jobject) self->F_dataStream, mark, depth + 1);
	if (self->F_dataStreamReads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dataStreamReads)->clazz)->markFunction)((jobject) self->F_dataStreamReads, mark, depth + 1);
	if (self->F_customPacketHandlers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customPacketHandlers)->clazz)->markFunction)((jobject) self->F_customPacketHandlers, mark, depth + 1);
	if (self->F_customBinaryPacketHandlers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customBinaryPacketHandlers)->clazz)->markFunction)((jobject) self->F_customBinaryPacketHandlers, mark, depth + 1);
}

void init_mindustry_core_NetClient(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(76);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(0));
	LINE_NUMBER(54);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quiet = (jint(0));
	LINE_NUMBER(56);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quietReset = (jint(0));
	LINE_NUMBER(58);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_timeoutTime = (jfloat(0));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_removed = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_arc_util_io_ReusableByteInStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_ReusableByteInStream);
	init_arc_util_io_ReusableByteInStream(ctx, sp[1].o);
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_byteStream = (jref) sp[1].o;
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_java_io_DataInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	sp[2].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_byteStream;
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_dataStream = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_util_io_Reads(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_Reads);
	sp[2].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_dataStream;
	init_arc_util_io_Reads_java_io_DataInput(ctx, sp[1].o, sp[2].o);
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_dataStreamReads = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_customPacketHandlers = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_customBinaryPacketHandlers = (jref) sp[1].o;
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = ((jobject) &class_mindustry_net_Packets$Connect);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(125);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = ((jobject) &class_mindustry_net_Packets$Disconnect);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(149);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = ((jobject) &class_mindustry_net_Packets$WorldStream);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = ((jobject) &class_mindustry_net_Packets$AssetRequirementStream);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Cons_9);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(168);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = ((jobject) &class_mindustry_net_Packets$TextureStream);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Cons_10);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = ((jobject) &class_mindustry_net_Packets$StreamBegin);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_addPacketHandler_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:addPacketHandler", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_customPacketHandlers;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Prov_4);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[2].o));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_NetClient_getPacketHandlers_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:getPacketHandlers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_customPacketHandlers;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Prov_5);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_addBinaryPacketHandler_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:addBinaryPacketHandler", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_customBinaryPacketHandlers;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Prov_6);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[2].o));
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_NetClient_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:getBinaryPacketHandlers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_customBinaryPacketHandlers;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_arc_func_Prov_7);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_clientBinaryPacketReliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:clientBinaryPacketReliable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(236);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_customBinaryPacketHandlers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(237);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_func_Cons, sp[0].o));
	LINE_NUMBER(239);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(240);
	goto label_4;
	}
label_2:;
	LINE_NUMBER(242);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_clientBinaryPacketUnreliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:clientBinaryPacketUnreliable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(246);
	SM_mindustry_core_NetClient_clientBinaryPacketReliable_java_lang_String_Array1_byte(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_clientPacketReliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:clientPacketReliable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(251);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_customPacketHandlers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(252);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_func_Cons, sp[0].o));
	LINE_NUMBER(254);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(255);
	goto label_4;
	}
label_2:;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_clientPacketUnreliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:clientPacketUnreliable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(261);
	SM_mindustry_core_NetClient_clientPacketReliable_java_lang_String_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_playMusic_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:playMusic", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(266);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)SM_mindustry_audio_SoundControl_findMusic_java_lang_String_R_arc_audio_Music(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(270);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	((func_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean])(ctx, sp[0].o, (frame[2].o), (frame[1].i));
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_sound_arc_audio_Sound_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:sound", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(275);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), (jfloat(8.0f)));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	jfloat temp1 = temp0 * ((jfloat)((arc_audio_Audio *) NULL_CHECK(sp[1].o))->F_sfxVolume);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[2].f), (jfloat(0)), (jfloat(20.0f)));
	jint temp3 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int])(ctx, sp[0].o, temp1, temp2, (frame[3].f), (jint(0)), (jint(0)));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_soundAt_arc_audio_Sound_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:soundAt", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(282);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(284);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[4].f), (jfloat(0)), (jfloat(20.0f)));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[3].f), (jfloat(0)), (jfloat(4.0f)));
	jint temp4 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:effect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(289);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(291);
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o));
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:effect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(296);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(298);
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (frame[5].o));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_effectReliable_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:effectReliable", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(303);
	SM_mindustry_core_NetClient_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_sendMessage_java_lang_String_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:sendMessage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(308);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(309);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	((func_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(310);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_uiChat;
	jint temp0 = (jint)((func_arc_audio_Sound_play_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_R_int])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(313);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_4;
	{
	LINE_NUMBER(315);
	((func_mindustry_gen_Player_lastText_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_lastText_java_lang_String])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(316);
	((func_mindustry_gen_Player_textFadeTime_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_textFadeTime_float])(ctx, (frame[2].o), (jfloat(1)));
	LINE_NUMBER(318);
	clinit_mindustry_game_EventType$PlayerChatEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerChatEvent);
	init_mindustry_game_EventType$PlayerChatEvent_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_sendMessage_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:sendMessage", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(325);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(326);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	((func_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(327);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_uiChat;
	jint temp0 = (jint)((func_arc_audio_Sound_play_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_R_int])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(329);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_sendChatMessage_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:sendChatMessage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(336);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_connectTime));
	if ((longCompare(temp0, (jlong(500ll)))) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(339);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_chatRate;
	jlong temp0 = jlong(2000ll);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$Config_chatSpamLimit;
	jint temp1 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)((func_arc_util_Ratekeeper_allow_long_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Ratekeeper_allow_long_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_3;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_kick;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_blacklist) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_blacklist])(ctx, sp[0].o);
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(345);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(347);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= (150)) goto label_8;
	}
	{
	LINE_NUMBER(348);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player has sent a message above the text limit."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(353);
	clinit_mindustry_game_EventType$PlayerChatEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerChatEvent);
	init_mindustry_game_EventType$PlayerChatEvent_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(356);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netServer;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[1].o))->F_clientCommands;
	sp[1].o = (jobject)((func_arc_util_CommandHandler_getPrefix_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_CommandHandler_getPrefix_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_12;
	}
	{
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_logCommands;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(358);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"<&fi@: @&fr>"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"&lk\u0001"_j.string, 1, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"&lw\u0001"_j.string, 1, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(362);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_clientCommands;
	sp[0].o = (jobject)((func_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(363);
	sp[0].o = (jobject)((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[2].o)))->F_type;
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_noCommand;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(364);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[0].o = (jobject)((func_mindustry_net_Administration_filterMessage_mindustry_gen_Player_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_filterMessage_mindustry_gen_Player_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(366);
	if ((frame[1].o) != nullptr) goto label_18;
	}
	LINE_NUMBER(367);
	popStackFrame(ctx);
	INST_RETURN();
label_18:;
	{
	LINE_NUMBER(371);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_20;
	}
	{
	LINE_NUMBER(372);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_chatFormatter;
	sp[0].o = (jobject)((func_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_core_NetServer$ChatFormatter, INDEX_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	SM_mindustry_core_NetClient_sendMessage_java_lang_String_java_lang_String_mindustry_gen_Player(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	}
label_20:;
	{
	LINE_NUMBER(376);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"&fi@: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"&lc\u0001"_j.string, 1, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"&lw\u0001"_j.string, 1, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(380);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_chatFormatter;
	sp[0].o = (jobject)((func_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_core_NetServer$ChatFormatter, INDEX_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	SM_mindustry_gen_Call_sendMessage_java_lang_String_java_lang_String_mindustry_gen_Player(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	goto label_23;
	}
label_15:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[2].o)))->F_type;
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_valid;
	if (sp[0].o == sp[1].o) goto label_23;
	}
	{
	LINE_NUMBER(385);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_invalidHandler;
	sp[0].o = (jobject)((func_mindustry_core_NetServer$InvalidCommandHandler_handle_mindustry_gen_Player_arc_util_CommandHandler$CommandResponse_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_core_NetServer$InvalidCommandHandler, INDEX_mindustry_core_NetServer$InvalidCommandHandler_handle_mindustry_gen_Player_arc_util_CommandHandler$CommandResponse_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(386);
	if ((frame[3].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(387);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	}
label_23:;
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_connect_java_lang_String_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:connect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(395);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"steam:"_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"steamserver:"_j))));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(396);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, sp[0].o);
	LINE_NUMBER(397);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(399);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_join;
	((func_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_connect_java_lang_String_int])(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_ping_mindustry_gen_Player_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:ping", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	SM_mindustry_gen_Call_pingResponse_mindustry_net_NetConnection_long(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_pingResponse_long(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:pingResponse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(409);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, (frame[0].l));
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_ping = temp0;
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_traceInfo_mindustry_gen_Player_mindustry_net_Administration$TraceInfo(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:traceInfo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(414);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(415);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_traces;
	((func_mindustry_ui_dialogs_TraceDialog_show_mindustry_gen_Player_mindustry_net_Administration$TraceInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_TraceDialog_show_mindustry_gen_Player_mindustry_net_Administration$TraceInfo])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(417);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_kick_mindustry_net_Packets$KickReason(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:kick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(421);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, sp[0].o);
	LINE_NUMBER(422);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_serverRestarting;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(425);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_join;
	((func_mindustry_ui_dialogs_JoinDialog_reconnect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_reconnect])(ctx, sp[0].o);
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(429);
	if (((jint)((mindustry_net_Packets$KickReason *) NULL_CHECK((frame[0].o)))->F_quiet) != 0) goto label_6;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((func_mindustry_net_Packets$KickReason_extraText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Packets$KickReason_extraText_R_java_lang_String])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(431);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((func_mindustry_net_Packets$KickReason_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Packets$KickReason_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_net_Packets$KickReason_extraText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Packets$KickReason_extraText_R_java_lang_String])(ctx, (frame[0].o));
	((func_mindustry_core_UI_showText_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(433);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@disconnect"_j));
	sp[2].o = (jobject)((func_mindustry_net_Packets$KickReason_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Packets$KickReason_toString_R_java_lang_String])(ctx, (frame[0].o));
	((func_mindustry_core_UI_showText_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(436);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_kick_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:kick", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(441);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, sp[0].o);
	LINE_NUMBER(442);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(443);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showText_java_lang_String_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@disconnect"_j))), (frame[0].o), (8));
	LINE_NUMBER(444);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_setRules_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:setRules", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(449);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules = (jref) (frame[0].o);
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_setRule_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:setRule", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(456);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_tmpJsonMap;
	((arc_util_serialization_JsonValue *) NULL_CHECK(sp[0].o))->F_child = (jref) (jobject(nullptr));
	LINE_NUMBER(457);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_tmpJsonMap;
	sp[1].o = frame[0].o;
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, sp[2].o, (frame[1].o));
	((func_arc_util_serialization_JsonValue_addChild_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_addChild_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(458);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = frame[0].o;
	clinit_mindustry_core_NetClient(ctx);
	sp[3].o = (jobject)SF_mindustry_core_NetClient_tmpJsonMap;
	((func_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readField_java_lang_Object_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(461);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(459);
	frame[2].o = sp[0].o;
	LINE_NUMBER(460);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to read rule"_j))), (frame[2].o));
	}
label_6:;
	LINE_NUMBER(462);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_setObjectives_mindustry_game_MapObjectives(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:setObjectives", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(467);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives = (jref) (frame[0].o);
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_clearObjectives(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:clearObjectives", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	{
	LINE_NUMBER(472);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives;
	((func_mindustry_game_MapObjectives_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives_clear])(ctx, sp[0].o);
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_completeObjective_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:completeObjective", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(477);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives;
	sp[0].o = (jobject)((func_mindustry_game_MapObjectives_get_int_R_mindustry_game_MapObjectives$MapObjective) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives_get_int_R_mindustry_game_MapObjectives$MapObjective])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(478);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(479);
	((func_mindustry_game_MapObjectives$MapObjective_done) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_done])(ctx, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(481);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_worldDataBegin(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:worldDataBegin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	{
	LINE_NUMBER(485);
	SM_mindustry_gen_Groups_clear(ctx);
	LINE_NUMBER(486);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_removed;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(487);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(488);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_connecting = (jint(1));
	LINE_NUMBER(490);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_setClientLoaded_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_setClientLoaded_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(492);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_show_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@connecting.establish"_j))));
	LINE_NUMBER(494);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_java_lang_Runnable_9);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_setPosition_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(503);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(504);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	LINE_NUMBER(505);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_set_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_setCameraPosition_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:setCameraPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(510);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(511);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	}
label_1:;
	LINE_NUMBER(513);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_playerDisconnect_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:playerDisconnect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(517);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(518);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, (frame[0].i));
	}
label_1:;
	{
	LINE_NUMBER(520);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	((func_mindustry_entities_EntityGroup_removeByID_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeByID_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_readSyncEntity_java_io_DataInputStream_arc_util_io_Reads(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:readSyncEntity", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(524);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(525);
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[0].o));
	frame[3].i = temp1;
	LINE_NUMBER(527);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Syncc, sp[0].o));
	LINE_NUMBER(528);
	frame[5].i = (jint(0));
	frame[6].i = (jint(0));
	LINE_NUMBER(530);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	jint temp0 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp1 = (jint)((func_mindustry_gen_Player_id_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_id_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_6;
	}
	{
	LINE_NUMBER(531);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	frame[4].o = sp[0].o;
	LINE_NUMBER(532);
	frame[5].i = (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(536);
	if ((frame[4].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)SM_mindustry_gen_EntityMapping_map_int_R_arc_func_Prov(ctx, ((frame[3].i) & (255)));
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Syncc, sp[0].o));
	LINE_NUMBER(538);
	((func_mindustry_gen_Entityc_id_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_int, (frame[4].o)))(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(539);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[4].o)))(ctx, (frame[4].o));
	jint temp1 = (jint)((func_mindustry_core_NetClient_isEntityUsed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_isEntityUsed_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_13;
	}
	{
	LINE_NUMBER(540);
	frame[5].i = (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(542);
	frame[6].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(546);
	((func_mindustry_gen_Syncc_readSync_arc_util_io_Reads) resolveInterfaceMethod(ctx, &class_mindustry_gen_Syncc, INDEX_mindustry_gen_Syncc_readSync_arc_util_io_Reads, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(548);
	if ((frame[6].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(550);
	((func_mindustry_gen_Syncc_snapSync) resolveInterfaceMethod(ctx, &class_mindustry_gen_Syncc, INDEX_mindustry_gen_Syncc_snapSync, (frame[4].o)))(ctx, (frame[4].o));
	}
label_16:;
	{
	LINE_NUMBER(553);
	if ((frame[5].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(554);
	((func_mindustry_gen_Entityc_add) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_add, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(555);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[4].o)))(ctx, (frame[4].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_18:;
	LINE_NUMBER(557);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_entitySnapshot_short_Array1_byte(jcontext ctx, jshort param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:entitySnapshot", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(562);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_lastSnapshotTimestamp = temp0;
	LINE_NUMBER(563);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_byteStream;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(564);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_dataStream;
	frame[2].o = sp[0].o;
	LINE_NUMBER(565);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_dataStreamReads;
	frame[3].o = sp[0].o;
	LINE_NUMBER(567);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= (frame[0].i)) goto label_1;
	}
	{
	LINE_NUMBER(568);
	SM_mindustry_core_NetClient_readSyncEntity_java_io_DataInputStream_arc_util_io_Reads(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(567);
	INST_IINC(4, 1);
	goto label_8;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(573);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(570);
	frame[2].o = sp[0].o;
	LINE_NUMBER(572);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Error reading entity snapshot"_j))), (frame[2].o));
	}
label_11:;
	LINE_NUMBER(574);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_hiddenSnapshot_arc_struct_IntSeq(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:hiddenSnapshot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(578);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(580);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Syncc, sp[0].o));
	LINE_NUMBER(581);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(582);
	((func_mindustry_gen_Syncc_handleSyncHidden) resolveInterfaceMethod(ctx, &class_mindustry_gen_Syncc, INDEX_mindustry_gen_Syncc_handleSyncHidden, (frame[3].o)))(ctx, (frame[3].o));
	}
label_6:;
	{
	LINE_NUMBER(578);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(585);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_blockSnapshot_short_Array1_byte(jcontext ctx, jshort param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:blockSnapshot", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(590);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_byteStream;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(591);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_dataStream;
	frame[2].o = sp[0].o;
	LINE_NUMBER(592);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_dataStreamReads;
	frame[3].o = sp[0].o;
	LINE_NUMBER(594);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[0].i)) goto label_1;
	}
	{
	LINE_NUMBER(595);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(596);
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	frame[6].i = temp1;
	LINE_NUMBER(597);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(598);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if (sp[0].o != nullptr) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(599);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Missing entity at @. Skipping block snapshot."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[7].o);
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(600);
	goto label_1;
	}
label_13:;
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id) == (frame[6].i)) goto label_15;
	}
	{
	LINE_NUMBER(603);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Block ID mismatch at @: @ != @. Skipping block snapshot."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[7].o);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[2].o))->F_block;
	sp[2].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[2].o))->F_id));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(2);
	sp[2].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, (frame[6].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(604);
	goto label_1;
	}
label_15:;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_version_R_byte) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Building_version_R_byte])(ctx, sp[2].o);
	((func_mindustry_gen_Building_readSync_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_readSync_arc_util_io_Reads_byte])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(594);
	INST_IINC(4, 1);
	goto label_7;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(610);
	goto label_19;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(608);
	frame[2].o = sp[0].o;
	LINE_NUMBER(609);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	}
label_19:;
	LINE_NUMBER(611);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_stateSnapshot_float_int_int_boolean_boolean_int_byte_long_long_Array1_byte(jcontext ctx, jfloat param0, jint param1, jint param2, jbool param3, jbool param4, jint param5, jbyte param6, jlong param7, jlong param8, jobject param9) {
	jtype frame[20];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:stateSnapshot", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].l = param7;
	frame[9].l = param8;
	frame[11].o = param9;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(616);
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (temp0 <= ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave)) goto label_4;
	}
	{
	LINE_NUMBER(617);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave = (frame[1].i);
	LINE_NUMBER(618);
	clinit_mindustry_game_EventType$WaveEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$WaveEvent);
	init_mindustry_game_EventType$WaveEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(621);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver = (frame[4].i);
	LINE_NUMBER(622);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wavetime = (frame[0].f);
	LINE_NUMBER(623);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave = (frame[1].i);
	LINE_NUMBER(624);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies = (frame[2].i);
	LINE_NUMBER(625);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(626);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp += 1;
	if ((frame[3].i) == 0) goto label_13;
	}
	clinit_mindustry_core_GameState$State(ctx);
	(sp++)->o = SF_mindustry_core_GameState$State_paused;
	goto label_14;
label_13:;
	clinit_mindustry_core_GameState$State(ctx);
	(sp++)->o = SF_mindustry_core_GameState$State_playing;
label_14:;
	POP_N(2); // Pop method args
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
label_11:;
	{
	LINE_NUMBER(628);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_serverTps = ((frame[6].i) & (255));
	LINE_NUMBER(632);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_rand;
	((arc_math_Rand *) NULL_CHECK(sp[0].o))->F_seed0 = (frame[7].l);
	LINE_NUMBER(633);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_rand;
	((arc_math_Rand *) NULL_CHECK(sp[0].o))->F_seed1 = (frame[9].l);
	LINE_NUMBER(635);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	((func_mindustry_game_Universe_updateNetSeconds_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_updateNetSeconds_int])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(637);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_byteStream;
	((func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte])(ctx, sp[0].o, (frame[11].o));
	LINE_NUMBER(638);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_dataStream;
	frame[12].o = sp[0].o;
	LINE_NUMBER(639);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_dataReads;
	((arc_util_io_Reads *) NULL_CHECK(sp[0].o))->F_input = (jref) (frame[12].o);
	LINE_NUMBER(641);
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[12].o));
	frame[13].i = temp0;
	LINE_NUMBER(642);
	frame[14].i = (jint(0));
	}
label_23:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_1;
	}
	{
	LINE_NUMBER(643);
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[12].o));
	frame[15].i = temp0;
	LINE_NUMBER(644);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i))))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i))));
	frame[16].o = sp[0].o;
	LINE_NUMBER(645);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[16].o)))->F_cores;
	jint temp1 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_27;
	}
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[16].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o))))->F_items;
	clinit_mindustry_core_NetClient(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetClient_dataReads;
	((func_mindustry_world_modules_ItemModule_read_arc_util_io_Reads) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_read_arc_util_io_Reads])(ctx, sp[0].o, sp[1].o);
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(648);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_modules_ItemModule);
	init_mindustry_world_modules_ItemModule(ctx, sp[0].o);
	clinit_mindustry_core_NetClient(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetClient_dataReads;
	((func_mindustry_world_modules_ItemModule_read_arc_util_io_Reads) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_read_arc_util_io_Reads])(ctx, sp[0].o, sp[1].o);
	}
label_29:;
	{
	LINE_NUMBER(642);
	INST_IINC(14, 1);
	goto label_23;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(654);
	goto label_30;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(652);
	frame[12].o = sp[0].o;
	LINE_NUMBER(653);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[12].o));
	throwException(ctx, sp[0].o);	}
label_30:;
	LINE_NUMBER(655);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(659);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(661);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(662);
	if (((jint)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_connecting) != 0) goto label_4;
	}
	{
	LINE_NUMBER(663);
	((func_mindustry_core_NetClient_sync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetClient_sync])(ctx, (frame[0].o));
	LINE_NUMBER(666);
	if ((longCompare(((jlong)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_lastSnapshotTimestamp), (jlong(0)))) <= 0) goto label_4;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_lastSnapshotTimestamp));
	if ((longCompare(temp0, (jlong(20000ll)))) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(667);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Timed out after not received UDP snapshots."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(668);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quiet = (jint(1));
	LINE_NUMBER(669);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@disconnect.snapshottimeout"_j))));
	LINE_NUMBER(670);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_disconnect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_disconnect])(ctx, sp[0].o);
	LINE_NUMBER(671);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_lastSnapshotTimestamp = (jlong(0));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(674);
	if (((jint)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_connecting) != 0) goto label_12;
	}
	{
	LINE_NUMBER(675);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_disconnect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_disconnect])(ctx, sp[0].o);
	goto label_4;
	}
label_12:;
	{
	LINE_NUMBER(677);
	sp[0].o = frame[0].o;
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_timeoutTime = (((jfloat)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_timeoutTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(678);
	if ((floatCompare(((jfloat)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_timeoutTime), (jfloat(1800.0f)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(679);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to load data!"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(680);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(681);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quiet = (jint(1));
	LINE_NUMBER(682);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@disconnect.data"_j))));
	LINE_NUMBER(683);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_disconnect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_disconnect])(ctx, sp[0].o);
	LINE_NUMBER(684);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_timeoutTime = (jfloat(0));
	}
label_4:;
	LINE_NUMBER(687);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_resetTimeout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:resetTimeout", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(691);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_timeoutTime = (jfloat(0));
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_NetClient_isConnecting_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:isConnecting", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return ((jint)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_connecting);
	}

	popStackFrame(ctx);
}

jint M_mindustry_core_NetClient_getPing_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:getPing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(699);
	popStackFrame(ctx);
	return (jint(((jlong)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_ping)));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_finishConnecting(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:finishConnecting", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(703);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(704);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(0));
	LINE_NUMBER(705);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_join;
	((func_mindustry_ui_dialogs_JoinDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_JoinDialog_hide])(ctx, sp[0].o);
	LINE_NUMBER(706);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_setClientLoaded_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_setClientLoaded_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(707);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_java_lang_Runnable_10);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(708);
	jfloat temp0 = jfloat(40.0f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	LINE_NUMBER(709);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_loadfrag;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_java_lang_Runnable_12);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(710);
	sp[0].o = frame[0].o;
	jlong temp1 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_lastSnapshotTimestamp = temp1;
	LINE_NUMBER(711);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(714);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_setClientLoaded_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_setClientLoaded_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(715);
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_removed;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(716);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_timeoutTime = (jfloat(0));
	LINE_NUMBER(717);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(1));
	LINE_NUMBER(718);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quietReset = (jint(0));
	LINE_NUMBER(719);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quiet = (jint(0));
	LINE_NUMBER(720);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_lastSent = (jint(0));
	LINE_NUMBER(721);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_lastSnapshotTimestamp = (jlong(0));
	LINE_NUMBER(723);
	SM_mindustry_gen_Groups_clear(ctx);
	LINE_NUMBER(724);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	((func_mindustry_ui_fragments_ChatFragment_clearMessages) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_clearMessages])(ctx, sp[0].o);
	LINE_NUMBER(725);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_beginConnecting(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:beginConnecting", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(728);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(1));
	LINE_NUMBER(729);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_disconnectQuietly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:disconnectQuietly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(733);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quiet = (jint(1));
	LINE_NUMBER(734);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(0));
	LINE_NUMBER(735);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_disconnect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_disconnect])(ctx, sp[0].o);
	LINE_NUMBER(736);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_disconnectNoReset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:disconnectNoReset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(740);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(1);
	((mindustry_core_NetClient *) NULL_CHECK(sp[1].o))->F_quietReset = temp0;
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_quiet = temp0;
	LINE_NUMBER(741);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_disconnect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_disconnect])(ctx, sp[0].o);
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_setQuiet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:setQuiet", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(746);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quiet = (jint(1));
	LINE_NUMBER(747);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_clearRemovedEntity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:clearRemovedEntity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_removed;
	jint temp0 = (jint)((func_arc_struct_IntSet_remove_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_remove_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_addRemovedEntity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:addRemovedEntity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_removed;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(755);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_NetClient_isEntityUsed_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:isEntityUsed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_removed;
	jint temp0 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_sync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[31];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:sync", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(762);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_playerSyncTime;
	jint temp0 = (jint)((func_arc_util_Timekeeper_poll_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timekeeper_poll_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(763);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(764);
	if ((frame[1].i) == 0) goto label_4;
	}
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp++;
label_5:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(765);
	if ((frame[1].i) != 0) goto label_7;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_8;
label_7:;
	INST_ICONST(-1);
	goto label_9;
label_8:;
	INST_ALOAD(2);
	sp[-1].i = ((mindustry_gen_Unit *) NULL_CHECK(sp[-1].o))->F_id;
label_9:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(767);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_lastSent;
	((mindustry_core_NetClient *) NULL_CHECK(sp[0].o))->F_lastSent = (temp0 + (jint(1)));
	jint temp3 = frame[3].i;
	jint temp4 = frame[1].i;
	LINE_NUMBER(771);
	sp[0].i = temp0;
	sp[1].i = temp3;
	sp[2].i = temp4;
	sp += 3;
	if ((frame[1].i) == 0) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].f = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ALOAD(2);
	sp[-1].f = ((mindustry_gen_Unit *) NULL_CHECK(sp[-1].o))->F_x;
label_13:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_14;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].f = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ALOAD(2);
	sp[-1].f = ((mindustry_gen_Unit *) NULL_CHECK(sp[-1].o))->F_y;
label_15:;
	{
	LINE_NUMBER(772);
	if ((frame[1].i) == 0) goto label_16;
	}
	INST_FCONST(0);
	goto label_17;
label_16:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_mindustry_gen_Unit_aimX_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_aimX_R_float])(ctx, sp[0].o);
	sp++;
label_17:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_18;
	INST_FCONST(0);
	goto label_19;
label_18:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_mindustry_gen_Unit_aimY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_aimY_R_float])(ctx, sp[0].o);
	sp++;
label_19:;
	{
	LINE_NUMBER(773);
	if ((frame[2].o) != nullptr) goto label_20;
	}
	INST_FCONST(0);
	goto label_21;
label_20:;
	INST_ALOAD(2);
	sp[-1].f = ((mindustry_gen_Unit *) NULL_CHECK(sp[-1].o))->F_rotation;
label_21:;
	{
	LINE_NUMBER(774);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Mechc)) == 0) goto label_22;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Mechc, (frame[2].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Mechc_baseRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_baseRotation_R_float, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_24;
	}
label_22:;
	INST_FCONST(0);
label_24:;
	{
	LINE_NUMBER(775);
	if ((frame[2].o) != nullptr) goto label_25;
	}
	INST_FCONST(0);
	goto label_26;
label_25:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_vel;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].f = temp0;
	sp += 1;
	}
label_26:;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_27;
	INST_FCONST(0);
	goto label_28;
label_27:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_vel;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].f = temp0;
	sp += 1;
	}
label_28:;
	{
	LINE_NUMBER(776);
	if ((frame[1].i) == 0) goto label_29;
	}
	INST_ACONST_NULL();
	goto label_30;
label_29:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((mindustry_gen_Unit *) NULL_CHECK(sp[-1].o))->F_mineTile;
label_30:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_boosting;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp1 = (jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	LINE_NUMBER(777);
	jint temp2 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	jint temp3 = (jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_isBuilding;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_selectedBlock;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jint temp4 = (jint)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_selectedRotation;
	LINE_NUMBER(778);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jint temp5 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[1].o);
	jobject temp6 = sp[0].o;
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp[3].i = temp3;
	sp[4].o = temp6;
	sp[5].i = temp4;
	sp += 6;
	if (temp5 == 0) goto label_33;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_33;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_plans;
	sp += 1;
	goto label_34;
	}
label_33:;
	INST_ACONST_NULL();
label_34:;
	{
	sp -= 19;
	clinit_arc_Core(ctx);
	sp[19].o = (jobject)SF_arc_Core_camera;
	sp[19].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[19].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[19].o))->F_x;
	clinit_arc_Core(ctx);
	sp[19].o = (jobject)SF_arc_Core_camera;
	sp[19].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[19].o))->F_position;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[19].o))->F_y;
	clinit_arc_Core(ctx);
	sp[19].o = (jobject)SF_arc_Core_camera;
	jfloat temp2 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[19].o))->F_width;
	clinit_arc_Core(ctx);
	sp[19].o = (jobject)SF_arc_Core_camera;
	jfloat temp3 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[19].o))->F_height;
	LINE_NUMBER(767);
	SM_mindustry_gen_Call_clientSnapshot_int_int_boolean_float_float_float_float_float_float_float_float_mindustry_world_Tile_boolean_boolean_boolean_boolean_mindustry_world_Block_int_arc_struct_Queue_float_float_float_float(ctx, sp[0].i, sp[1].i, sp[2].i, sp[3].f, sp[4].f, sp[5].f, sp[6].f, sp[7].f, sp[8].f, sp[9].f, sp[10].f, sp[11].o, sp[12].i, sp[13].i, sp[14].i, sp[15].i, sp[16].o, sp[17].i, sp[18].o, temp0, temp1, temp2, temp3);
	}
label_1:;
	{
	LINE_NUMBER(784);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_pingTime;
	jint temp0 = (jint)((func_arc_util_Timekeeper_poll_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timekeeper_poll_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(785);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	SM_mindustry_gen_Call_ping_long(ctx, temp0);
	}
label_36:;
	{
	LINE_NUMBER(788);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_planSyncTime;
	jint temp0 = (jint)((func_arc_util_Timekeeper_poll_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timekeeper_poll_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(789);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = ((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastPreviewPlanGroup) + (jint(1));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastPreviewPlanGroup = temp0;
	frame[1].i = temp0;
	LINE_NUMBER(791);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_plansOut;
	sp[0].o = (jobject)((func_mindustry_io_TypeIO$ClientBuildPlans_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_TypeIO$ClientBuildPlans_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(792);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	clinit_mindustry_core_NetClient(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetClient_plansOut;
	((func_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(793);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_plansOut;
	((func_mindustry_io_TypeIO$ClientBuildPlans_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_TypeIO$ClientBuildPlans_truncate_int])(ctx, sp[0].o, (1000));
	LINE_NUMBER(795);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_plansOut;
	jint temp3 = (jint)((func_mindustry_io_TypeIO$ClientBuildPlans_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_TypeIO$ClientBuildPlans_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp3 == 0) goto label_44;
	}
	{
	LINE_NUMBER(796);
	SM_mindustry_gen_Call_clientPlanSnapshot_int_mindustry_io_TypeIO$ClientBuildPlans(ctx, (frame[1].i), (jobject(nullptr)));
	goto label_38;
	}
label_44:;
	{
	LINE_NUMBER(798);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_plansOut;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_entities_units_BuildPlan, 1), sp[0].o));
	LINE_NUMBER(799);
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_plansOut;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(803);
	frame[4].i = (75);
	LINE_NUMBER(805);
	if ((frame[3].i) >= (75)) goto label_49;
	}
	{
	LINE_NUMBER(806);
	jint temp0 = frame[1].i;
	clinit_mindustry_core_NetClient(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetClient_plansOut;
	SM_mindustry_gen_Call_clientPlanSnapshot_int_mindustry_io_TypeIO$ClientBuildPlans(ctx, temp0, sp[0].o);
	goto label_38;
	}
label_49:;
	{
	LINE_NUMBER(808);
	frame[5].i = (jint(0));
	}
label_51:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_38;
	}
	{
	LINE_NUMBER(809);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[5].i) + (75)), (frame[3].i));
	frame[6].i = (temp0 - (frame[5].i));
	LINE_NUMBER(810);
	clinit_mindustry_io_TypeIO$ClientBuildPlans(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_TypeIO$ClientBuildPlans);
	init_mindustry_io_TypeIO$ClientBuildPlans_int(ctx, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(811);
	sp[0].o = frame[2].o;
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (jint(0)), (frame[6].i));
	LINE_NUMBER(812);
	((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size = (frame[6].i);
	LINE_NUMBER(814);
	SM_mindustry_gen_Call_clientPlanSnapshot_int_mindustry_io_TypeIO$ClientBuildPlans(ctx, (frame[1].i), (frame[7].o));
	LINE_NUMBER(808);
	INST_IINC(5, 75);
	goto label_51;
	}
label_38:;
	LINE_NUMBER(819);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_NetClient_getUsid_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:getUsid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(823);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(824);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (jint(1))));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(827);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"usid-\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(828);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"usid-\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(830);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (8));
	frame[2].o = sp[0].o;
	LINE_NUMBER(831);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	((func_arc_math_Rand_nextBytes_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextBytes_Array1_byte])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(832);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_R_Array1_char(ctx, (frame[2].o));
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(833);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"usid-\u0001"_j.string, 1, (frame[1].o));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(834);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_lambda$worldDataBegin$0(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$worldDataBegin$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	{
	LINE_NUMBER(495);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(497);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, sp[0].o);
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_lambda$new$6_mindustry_net_Packets$StreamBegin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$new$6", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(188);
	if (((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[1].o)))->F_type) != (clinit_mindustry_net_Net(ctx), (jint)SF_mindustry_net_Net_packetIdWorldStream)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	if (((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[1].o)))->F_type) != (clinit_mindustry_net_Net(ctx), (jint)SF_mindustry_net_Net_packetIdAssetStream)) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(190);
	if ((frame[2].i) != 0) goto label_7;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_8;
label_7:;
	{
	LINE_NUMBER(191);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_showProgressBar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_showProgressBar])(ctx, sp[0].o);
	LINE_NUMBER(192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_setProgress_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setProgress_float])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(193);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_snapProgress) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_snapProgress])(ctx, sp[0].o);
	LINE_NUMBER(194);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp += 2;
	if ((frame[2].i) == 0) goto label_12;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"receiving.world"_j));
	goto label_13;
label_12:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"receiving.assets"_j));
label_13:;
	{
	sp -= 3;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(ctx, (jlong(((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[1].o)))->F_total))));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(197);
	if ((frame[3].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(199);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_java_lang_Runnable_13);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Threads_daemon_java_lang_Runnable_R_java_lang_Thread(ctx, sp[0].o);
	}
label_14:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_lambda$new$7_mindustry_net_Packets$StreamBegin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$new$7", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(200);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Receiving asset data: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(ctx, (jlong(((jint)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[1].o)))->F_total))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_net_Packets$StreamBegin *) NULL_CHECK((frame[1].o)))->F_incrementalStream;
	SM_mindustry_net_NetworkIO_loadAssets_java_io_InputStream(ctx, sp[0].o);
	LINE_NUMBER(206);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_java_lang_Runnable_14);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(212);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(207);
	frame[2].o = sp[0].o;
	LINE_NUMBER(208);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_java_lang_Runnable_15);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_lambda$new$8_java_lang_Exception(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$new$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(209);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@receiving.assets.fail"_j))), (frame[1].o));
	LINE_NUMBER(210);
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, (frame[0].o));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_lambda$new$5_mindustry_net_Packets$TextureStream(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$new$5", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(169);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	sp[1].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK((frame[0].o)))->F_stream;
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(171);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(172);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(173);
	((func_java_io_DataInputStream_readFully_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(174);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	LINE_NUMBER(176);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) != 0) goto label_17;
	}
	{
	LINE_NUMBER(177);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_removeTexture_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_removeTexture_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	goto label_1;
	}
label_17:;
	{
	LINE_NUMBER(179);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_addTexture_java_lang_String_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_addTexture_java_lang_String_Array1_byte])(ctx, sp[0].o, (frame[2].o), (frame[4].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(182);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[1].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(169);
	INST_ASTORE(2);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_19;
label_6:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[3].o));
	}
label_19:;
	INST_ALOAD(2);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(184);
	goto label_21;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(182);
	frame[1].o = sp[0].o;
	LINE_NUMBER(183);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to read server texture stream"_j))), (frame[1].o));
	}
label_21:;
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetClient_lambda$new$4_mindustry_net_Packets$AssetRequirementStream(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$new$4", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(157);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[1].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK((frame[0].o)))->F_stream;
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_net_NetworkIO_readRequiredAssets_java_io_InputStream_R_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(158);
	clinit_arc_struct_ShortSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ShortSeq);
	init_arc_struct_ShortSeq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(159);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCache;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	jint temp0 = (jint)((func_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(161);
	((func_arc_struct_ShortSeq_add_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_short])(ctx, (frame[2].o), (jshort((frame[3].i))));
	}
label_6:;
	{
	LINE_NUMBER(159);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(164);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Requesting @ asset(s) from the server."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[2].o)))->F_size));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_toArray_R_Array1_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ShortSeq_toArray_R_Array1_short])(ctx, (frame[2].o));
	SM_mindustry_gen_Call_requestAssets_Array1_short(ctx, sp[0].o);
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_lambda$new$3_mindustry_net_Packets$WorldStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$new$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(150);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Received world data: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK((frame[1].o)))->F_stream;
	jint temp1 = (jint)((func_java_io_ByteArrayInputStream_available_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_ByteArrayInputStream_available_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(ctx, (jlong(temp1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	sp[1].o = (jobject)((mindustry_net_Streamable *) NULL_CHECK((frame[1].o)))->F_stream;
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	SM_mindustry_net_NetworkIO_loadWorld_java_io_InputStream(ctx, sp[0].o);
	LINE_NUMBER(153);
	((func_mindustry_core_NetClient_finishConnecting) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetClient_finishConnecting])(ctx, (frame[0].o));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_lambda$new$2_mindustry_net_Packets$Disconnect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$new$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	if (((jint)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quietReset) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(128);
	((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(0));
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(130);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_updateRPC) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_updateRPC, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(131);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"name"_j))));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_color;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"color-0"_j))));
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, temp0);
	LINE_NUMBER(134);
	if (((jint)((mindustry_core_NetClient *) NULL_CHECK((frame[0].o)))->F_quiet) == 0) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(136);
	jfloat temp0 = jfloat(3.0f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_java_lang_Runnable_16);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_net_Packets$Disconnect *) NULL_CHECK((frame[1].o)))->F_reason;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(139);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_net_Packets$Disconnect *) NULL_CHECK((frame[1].o)))->F_reason;
	frame[2].o = sp[1].o;
	frame[3].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[2].o));
	sp += 1;
	switch(temp0) {
		case -1357520532: goto label_13;
		case -1313911455: goto label_14;
		default: goto label_15;
	}
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"closed"_j))));
	if (temp0 == 0) goto label_15;
	}
	{
	frame[3].i = (jint(0));
	goto label_15;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"timeout"_j))));
	if (temp0 == 0) goto label_15;
	}
	INST_ICONST(1);
	INST_ISTORE(3);
label_15:;
	INST_ILOAD(3);
	switch((--sp)->i) {
		case 0: goto label_16;
		case 1: goto label_17;
		default: goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(140);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"@disconnect.closed"_j));
	sp += 1;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(141);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"@disconnect.timeout"_j));
	sp += 1;
	goto label_19;
	}
label_18:;
	LINE_NUMBER(142);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@disconnect.error"_j));
label_19:;
	{
	sp -= 2;
	LINE_NUMBER(139);
	((func_mindustry_core_UI_showSmall_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showSmall_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"@disconnect.closed"_j))));
	goto label_20;
	}
label_9:;
	{
	LINE_NUMBER(145);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@disconnect"_j))));
	}
label_20:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_lambda$new$0_mindustry_net_Packets$Connect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$new$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Connecting to server: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_net_Packets$Connect *) NULL_CHECK((frame[1].o)))->F_addressTCP;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin = (jint(0));
	LINE_NUMBER(83);
	((func_mindustry_core_NetClient_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetClient_reset])(ctx, (frame[0].o));
	LINE_NUMBER(86);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp1 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_4;
	}
	{
	LINE_NUMBER(87);
	SM_arc_util_Log_info_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"Connection canceled."_j))));
	LINE_NUMBER(88);
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, (frame[0].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(92);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(93);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_show_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@connecting.establish"_j))));
	LINE_NUMBER(95);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetClient_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_core_NetClient_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_core_NetClient_invoke_java_lang_Runnable_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"locale"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(101);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"default"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[0].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(105);
	clinit_mindustry_net_Packets$ConnectPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$ConnectPacket);
	init_mindustry_net_Packets$ConnectPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(106);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_name;
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(107);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[3].o)))->F_locale = (jref) (frame[2].o);
	LINE_NUMBER(108);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mods;
	sp[1].o = (jobject)((func_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq])(ctx, sp[1].o);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_mods = (jref) sp[1].o;
	LINE_NUMBER(109);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[3].o)))->F_mobile = (clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile);
	LINE_NUMBER(110);
	sp[0].o = frame[3].o;
	clinit_mindustry_core_Version(ctx);
	sp[1].o = (jobject)SF_mindustry_core_Version_type;
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_versionType = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_color;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[1].o);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_color = temp0;
	LINE_NUMBER(112);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_net_Packets$Connect *) NULL_CHECK((frame[1].o)))->F_addressTCP;
	sp[1].o = (jobject)((func_mindustry_core_NetClient_getUsid_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_NetClient_getUsid_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_usid = (jref) sp[1].o;
	LINE_NUMBER(113);
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_platform;
	sp[1].o = (jobject)((func_mindustry_core_Platform_getUUID_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_getUUID_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_uuid = (jref) sp[1].o;
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[3].o)))->F_uuid;
	if (sp[0].o != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(116);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@invalidid"_j))));
	LINE_NUMBER(117);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(118);
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, (frame[0].o));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}
label_23:;
	{
	LINE_NUMBER(122);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetClient_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(97);
	((func_mindustry_core_NetClient_disconnectQuietly) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetClient_disconnectQuietly])(ctx, (frame[0].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_core_NetClient(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_core_NetClient_entitySnapshotTimeout = jlong(20000ll);
	SF_mindustry_core_NetClient_dataTimeout = jfloat(1800.0f);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetClient:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetClient(ctx);
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_arc_util_Timekeeper_ofMillis_long_R_arc_util_Timekeeper(ctx, (jlong(66ll)));
	clinit_mindustry_core_NetClient(ctx);
	SF_mindustry_core_NetClient_playerSyncTime = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper(ctx, (jfloat(0.5f)));
	clinit_mindustry_core_NetClient(ctx);
	SF_mindustry_core_NetClient_planSyncTime = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper(ctx, (jfloat(1)));
	clinit_mindustry_core_NetClient(ctx);
	SF_mindustry_core_NetClient_pingTime = sp[0].o;
	LINE_NUMBER(46);
	clinit_arc_util_io_Reads(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Reads);
	init_arc_util_io_Reads_java_io_DataInput(ctx, sp[0].o, (jobject(nullptr)));
	clinit_mindustry_core_NetClient(ctx);
	SF_mindustry_core_NetClient_dataReads = sp[0].o;
	LINE_NUMBER(47);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_object;
	init_arc_util_serialization_JsonValue_arc_util_serialization_JsonValue$ValueType(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_core_NetClient(ctx);
	SF_mindustry_core_NetClient_tmpJsonMap = sp[0].o;
	LINE_NUMBER(74);
	clinit_mindustry_io_TypeIO$ClientBuildPlans(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_TypeIO$ClientBuildPlans);
	init_mindustry_io_TypeIO$ClientBuildPlans(ctx, sp[0].o);
	clinit_mindustry_core_NetClient(ctx);
	SF_mindustry_core_NetClient_plansOut = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_core_NetClient[] {
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
	(void *) M_arc_ApplicationListener_init,
	(void *) M_arc_ApplicationListener_resize_int_int,
	(void *) M_mindustry_core_NetClient_update,
	(void *) M_arc_ApplicationListener_pause,
	(void *) M_arc_ApplicationListener_resume,
	(void *) M_arc_ApplicationListener_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationListener_fileDropped_arc_files_Fi,
	(void *) M_mindustry_core_NetClient_addPacketHandler_java_lang_String_arc_func_Cons,
	(void *) M_mindustry_core_NetClient_getPacketHandlers_java_lang_String_R_arc_struct_Seq,
	(void *) M_mindustry_core_NetClient_addBinaryPacketHandler_java_lang_String_arc_func_Cons,
	(void *) M_mindustry_core_NetClient_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq,
	(void *) M_mindustry_core_NetClient_resetTimeout,
	(void *) M_mindustry_core_NetClient_isConnecting_R_boolean,
	(void *) M_mindustry_core_NetClient_getPing_R_int,
	(void *) M_mindustry_core_NetClient_finishConnecting,
	(void *) M_mindustry_core_NetClient_reset,
	(void *) M_mindustry_core_NetClient_beginConnecting,
	(void *) M_mindustry_core_NetClient_disconnectQuietly,
	(void *) M_mindustry_core_NetClient_disconnectNoReset,
	(void *) M_mindustry_core_NetClient_setQuiet,
	(void *) M_mindustry_core_NetClient_clearRemovedEntity_int,
	(void *) M_mindustry_core_NetClient_addRemovedEntity_int,
	(void *) M_mindustry_core_NetClient_isEntityUsed_int_R_boolean,
	(void *) M_mindustry_core_NetClient_sync,
	(void *) M_mindustry_core_NetClient_getUsid_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_core_NetClient_lambda$new$6_mindustry_net_Packets$StreamBegin,
	(void *) M_mindustry_core_NetClient_lambda$new$7_mindustry_net_Packets$StreamBegin,
	(void *) M_mindustry_core_NetClient_lambda$new$8_java_lang_Exception,
	(void *) M_mindustry_core_NetClient_lambda$new$3_mindustry_net_Packets$WorldStream,
	(void *) M_mindustry_core_NetClient_lambda$new$2_mindustry_net_Packets$Disconnect,
	(void *) M_mindustry_core_NetClient_lambda$new$0_mindustry_net_Packets$Connect,
	(void *) M_mindustry_core_NetClient_lambda$new$1,
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
	{ "init", "()V" },
	{ "resize", "(II)V" },
	{ "update", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "exit", "()V" },
	{ "fileDropped", "(Larc/files/Fi;)V" },
	{ "addPacketHandler", "(Ljava/lang/String;Larc/func/Cons;)V" },
	{ "getPacketHandlers", "(Ljava/lang/String;)Larc/struct/Seq;" },
	{ "addBinaryPacketHandler", "(Ljava/lang/String;Larc/func/Cons;)V" },
	{ "getBinaryPacketHandlers", "(Ljava/lang/String;)Larc/struct/Seq;" },
	{ "resetTimeout", "()V" },
	{ "isConnecting", "()Z" },
	{ "getPing", "()I" },
	{ "finishConnecting", "()V" },
	{ "reset", "()V" },
	{ "beginConnecting", "()V" },
	{ "disconnectQuietly", "()V" },
	{ "disconnectNoReset", "()V" },
	{ "setQuiet", "()V" },
	{ "clearRemovedEntity", "(I)V" },
	{ "addRemovedEntity", "(I)V" },
	{ "isEntityUsed", "(I)Z" },
	{ "sync", "()V" },
	{ "getUsid", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "lambda$new$6", "(Lmindustry/net/Packets$StreamBegin;)V" },
	{ "lambda$new$7", "(Lmindustry/net/Packets$StreamBegin;)V" },
	{ "lambda$new$8", "(Ljava/lang/Exception;)V" },
	{ "lambda$new$3", "(Lmindustry/net/Packets$WorldStream;)V" },
	{ "lambda$new$2", "(Lmindustry/net/Packets$Disconnect;)V" },
	{ "lambda$new$0", "(Lmindustry/net/Packets$Connect;)V" },
	{ "lambda$new$1", "()V" },
};

static jclass interfaces[] { &class_arc_ApplicationListener, };

static FieldMetadata fields[] {
	{ "entitySnapshotTimeout", &class_long, (intptr_t) &SF_mindustry_core_NetClient_entitySnapshotTimeout, "J", 26 },
	{ "dataTimeout", &class_float, (intptr_t) &SF_mindustry_core_NetClient_dataTimeout, "F", 26 },
	{ "playerSyncTime", &class_arc_util_Timekeeper, (intptr_t) &SF_mindustry_core_NetClient_playerSyncTime, "Larc/util/Timekeeper;", 26 },
	{ "planSyncTime", &class_arc_util_Timekeeper, (intptr_t) &SF_mindustry_core_NetClient_planSyncTime, "Larc/util/Timekeeper;", 26 },
	{ "pingTime", &class_arc_util_Timekeeper, (intptr_t) &SF_mindustry_core_NetClient_pingTime, "Larc/util/Timekeeper;", 26 },
	{ "dataReads", &class_arc_util_io_Reads, (intptr_t) &SF_mindustry_core_NetClient_dataReads, "Larc/util/io/Reads;", 26 },
	{ "tmpJsonMap", &class_arc_util_serialization_JsonValue, (intptr_t) &SF_mindustry_core_NetClient_tmpJsonMap, "Larc/util/serialization/JsonValue;", 26 },
	{ "ping", &class_long, offsetof(mindustry_core_NetClient, F_ping), "J", 2 },
	{ "connecting", &class_boolean, offsetof(mindustry_core_NetClient, F_connecting), "Z", 2 },
	{ "quiet", &class_boolean, offsetof(mindustry_core_NetClient, F_quiet), "Z", 2 },
	{ "quietReset", &class_boolean, offsetof(mindustry_core_NetClient, F_quietReset), "Z", 2 },
	{ "timeoutTime", &class_float, offsetof(mindustry_core_NetClient, F_timeoutTime), "F", 2 },
	{ "lastSnapshotTimestamp", &class_long, offsetof(mindustry_core_NetClient, F_lastSnapshotTimestamp), "J", 2 },
	{ "lastSent", &class_int, offsetof(mindustry_core_NetClient, F_lastSent), "I", 2 },
	{ "removed", &class_arc_struct_IntSet, offsetof(mindustry_core_NetClient, F_removed), "Larc/struct/IntSet;", 2 },
	{ "byteStream", &class_arc_util_io_ReusableByteInStream, offsetof(mindustry_core_NetClient, F_byteStream), "Larc/util/io/ReusableByteInStream;", 2 },
	{ "dataStream", &class_java_io_DataInputStream, offsetof(mindustry_core_NetClient, F_dataStream), "Ljava/io/DataInputStream;", 2 },
	{ "dataStreamReads", &class_arc_util_io_Reads, offsetof(mindustry_core_NetClient, F_dataStreamReads), "Larc/util/io/Reads;", 2 },
	{ "customPacketHandlers", &class_arc_struct_ObjectMap, offsetof(mindustry_core_NetClient, F_customPacketHandlers), "Larc/struct/ObjectMap;", 2 },
	{ "customBinaryPacketHandlers", &class_arc_struct_ObjectMap, offsetof(mindustry_core_NetClient, F_customBinaryPacketHandlers), "Larc/struct/ObjectMap;", 2 },
	{ "plansOut", &class_mindustry_io_TypeIO$ClientBuildPlans, (intptr_t) &SF_mindustry_core_NetClient_plansOut, "Lmindustry/io/TypeIO$ClientBuildPlans;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_NetClient, 0, "()V", 1 },
	{ "addPacketHandler", (intptr_t) M_mindustry_core_NetClient_addPacketHandler_java_lang_String_arc_func_Cons, VTABLE_mindustry_core_NetClient_addPacketHandler_java_lang_String_arc_func_Cons, "(Ljava/lang/String;Larc/func/Cons;)V", 1 },
	{ "getPacketHandlers", (intptr_t) M_mindustry_core_NetClient_getPacketHandlers_java_lang_String_R_arc_struct_Seq, VTABLE_mindustry_core_NetClient_getPacketHandlers_java_lang_String_R_arc_struct_Seq, "(Ljava/lang/String;)Larc/struct/Seq;", 1 },
	{ "addBinaryPacketHandler", (intptr_t) M_mindustry_core_NetClient_addBinaryPacketHandler_java_lang_String_arc_func_Cons, VTABLE_mindustry_core_NetClient_addBinaryPacketHandler_java_lang_String_arc_func_Cons, "(Ljava/lang/String;Larc/func/Cons;)V", 1 },
	{ "getBinaryPacketHandlers", (intptr_t) M_mindustry_core_NetClient_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq, VTABLE_mindustry_core_NetClient_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq, "(Ljava/lang/String;)Larc/struct/Seq;", 1 },
	{ "clientBinaryPacketReliable", (intptr_t) SM_mindustry_core_NetClient_clientBinaryPacketReliable_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 9 },
	{ "clientBinaryPacketUnreliable", (intptr_t) SM_mindustry_core_NetClient_clientBinaryPacketUnreliable_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 9 },
	{ "clientPacketReliable", (intptr_t) SM_mindustry_core_NetClient_clientPacketReliable_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "clientPacketUnreliable", (intptr_t) SM_mindustry_core_NetClient_clientPacketUnreliable_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "playMusic", (intptr_t) SM_mindustry_core_NetClient_playMusic_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 9 },
	{ "sound", (intptr_t) SM_mindustry_core_NetClient_sound_arc_audio_Sound_float_float_float, 0, "(Larc/audio/Sound;FFF)V", 9 },
	{ "soundAt", (intptr_t) SM_mindustry_core_NetClient_soundAt_arc_audio_Sound_float_float_float_float, 0, "(Larc/audio/Sound;FFFF)V", 9 },
	{ "effect", (intptr_t) SM_mindustry_core_NetClient_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color, 0, "(Lmindustry/entities/Effect;FFFLarc/graphics/Color;)V", 9 },
	{ "effect", (intptr_t) SM_mindustry_core_NetClient_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object, 0, "(Lmindustry/entities/Effect;FFFLarc/graphics/Color;Ljava/lang/Object;)V", 9 },
	{ "effectReliable", (intptr_t) SM_mindustry_core_NetClient_effectReliable_mindustry_entities_Effect_float_float_float_arc_graphics_Color, 0, "(Lmindustry/entities/Effect;FFFLarc/graphics/Color;)V", 9 },
	{ "sendMessage", (intptr_t) SM_mindustry_core_NetClient_sendMessage_java_lang_String_java_lang_String_mindustry_gen_Player, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/gen/Player;)V", 9 },
	{ "sendMessage", (intptr_t) SM_mindustry_core_NetClient_sendMessage_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "sendChatMessage", (intptr_t) SM_mindustry_core_NetClient_sendChatMessage_mindustry_gen_Player_java_lang_String, 0, "(Lmindustry/gen/Player;Ljava/lang/String;)V", 9 },
	{ "connect", (intptr_t) SM_mindustry_core_NetClient_connect_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 9 },
	{ "ping", (intptr_t) SM_mindustry_core_NetClient_ping_mindustry_gen_Player_long, 0, "(Lmindustry/gen/Player;J)V", 9 },
	{ "pingResponse", (intptr_t) SM_mindustry_core_NetClient_pingResponse_long, 0, "(J)V", 9 },
	{ "traceInfo", (intptr_t) SM_mindustry_core_NetClient_traceInfo_mindustry_gen_Player_mindustry_net_Administration$TraceInfo, 0, "(Lmindustry/gen/Player;Lmindustry/net/Administration$TraceInfo;)V", 9 },
	{ "kick", (intptr_t) SM_mindustry_core_NetClient_kick_mindustry_net_Packets$KickReason, 0, "(Lmindustry/net/Packets$KickReason;)V", 9 },
	{ "kick", (intptr_t) SM_mindustry_core_NetClient_kick_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "setRules", (intptr_t) SM_mindustry_core_NetClient_setRules_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 9 },
	{ "setRule", (intptr_t) SM_mindustry_core_NetClient_setRule_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "setObjectives", (intptr_t) SM_mindustry_core_NetClient_setObjectives_mindustry_game_MapObjectives, 0, "(Lmindustry/game/MapObjectives;)V", 9 },
	{ "clearObjectives", (intptr_t) SM_mindustry_core_NetClient_clearObjectives, 0, "()V", 9 },
	{ "completeObjective", (intptr_t) SM_mindustry_core_NetClient_completeObjective_int, 0, "(I)V", 9 },
	{ "worldDataBegin", (intptr_t) SM_mindustry_core_NetClient_worldDataBegin, 0, "()V", 9 },
	{ "setPosition", (intptr_t) SM_mindustry_core_NetClient_setPosition_float_float, 0, "(FF)V", 9 },
	{ "setCameraPosition", (intptr_t) SM_mindustry_core_NetClient_setCameraPosition_float_float, 0, "(FF)V", 9 },
	{ "playerDisconnect", (intptr_t) SM_mindustry_core_NetClient_playerDisconnect_int, 0, "(I)V", 9 },
	{ "readSyncEntity", (intptr_t) SM_mindustry_core_NetClient_readSyncEntity_java_io_DataInputStream_arc_util_io_Reads, 0, "(Ljava/io/DataInputStream;Larc/util/io/Reads;)V", 9 },
	{ "entitySnapshot", (intptr_t) SM_mindustry_core_NetClient_entitySnapshot_short_Array1_byte, 0, "(S[B)V", 9 },
	{ "hiddenSnapshot", (intptr_t) SM_mindustry_core_NetClient_hiddenSnapshot_arc_struct_IntSeq, 0, "(Larc/struct/IntSeq;)V", 9 },
	{ "blockSnapshot", (intptr_t) SM_mindustry_core_NetClient_blockSnapshot_short_Array1_byte, 0, "(S[B)V", 9 },
	{ "stateSnapshot", (intptr_t) SM_mindustry_core_NetClient_stateSnapshot_float_int_int_boolean_boolean_int_byte_long_long_Array1_byte, 0, "(FIIZZIBJJ[B)V", 9 },
	{ "update", (intptr_t) M_mindustry_core_NetClient_update, VTABLE_mindustry_core_NetClient_update, "()V", 1 },
	{ "resetTimeout", (intptr_t) M_mindustry_core_NetClient_resetTimeout, VTABLE_mindustry_core_NetClient_resetTimeout, "()V", 1 },
	{ "isConnecting", (intptr_t) M_mindustry_core_NetClient_isConnecting_R_boolean, VTABLE_mindustry_core_NetClient_isConnecting_R_boolean, "()Z", 1 },
	{ "getPing", (intptr_t) M_mindustry_core_NetClient_getPing_R_int, VTABLE_mindustry_core_NetClient_getPing_R_int, "()I", 1 },
	{ "finishConnecting", (intptr_t) M_mindustry_core_NetClient_finishConnecting, VTABLE_mindustry_core_NetClient_finishConnecting, "()V", 2 },
	{ "reset", (intptr_t) M_mindustry_core_NetClient_reset, VTABLE_mindustry_core_NetClient_reset, "()V", 2 },
	{ "beginConnecting", (intptr_t) M_mindustry_core_NetClient_beginConnecting, VTABLE_mindustry_core_NetClient_beginConnecting, "()V", 1 },
	{ "disconnectQuietly", (intptr_t) M_mindustry_core_NetClient_disconnectQuietly, VTABLE_mindustry_core_NetClient_disconnectQuietly, "()V", 1 },
	{ "disconnectNoReset", (intptr_t) M_mindustry_core_NetClient_disconnectNoReset, VTABLE_mindustry_core_NetClient_disconnectNoReset, "()V", 1 },
	{ "setQuiet", (intptr_t) M_mindustry_core_NetClient_setQuiet, VTABLE_mindustry_core_NetClient_setQuiet, "()V", 1 },
	{ "clearRemovedEntity", (intptr_t) M_mindustry_core_NetClient_clearRemovedEntity_int, VTABLE_mindustry_core_NetClient_clearRemovedEntity_int, "(I)V", 1 },
	{ "addRemovedEntity", (intptr_t) M_mindustry_core_NetClient_addRemovedEntity_int, VTABLE_mindustry_core_NetClient_addRemovedEntity_int, "(I)V", 1 },
	{ "isEntityUsed", (intptr_t) M_mindustry_core_NetClient_isEntityUsed_int_R_boolean, VTABLE_mindustry_core_NetClient_isEntityUsed_int_R_boolean, "(I)Z", 1 },
	{ "sync", (intptr_t) M_mindustry_core_NetClient_sync, VTABLE_mindustry_core_NetClient_sync, "()V", 0 },
	{ "getUsid", (intptr_t) M_mindustry_core_NetClient_getUsid_java_lang_String_R_java_lang_String, VTABLE_mindustry_core_NetClient_getUsid_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 0 },
	{ "lambda$worldDataBegin$0", (intptr_t) SM_mindustry_core_NetClient_lambda$worldDataBegin$0, 0, "()V", 4106 },
	{ "lambda$new$6", (intptr_t) M_mindustry_core_NetClient_lambda$new$6_mindustry_net_Packets$StreamBegin, VTABLE_mindustry_core_NetClient_lambda$new$6_mindustry_net_Packets$StreamBegin, "(Lmindustry/net/Packets$StreamBegin;)V", 4098 },
	{ "lambda$new$7", (intptr_t) M_mindustry_core_NetClient_lambda$new$7_mindustry_net_Packets$StreamBegin, VTABLE_mindustry_core_NetClient_lambda$new$7_mindustry_net_Packets$StreamBegin, "(Lmindustry/net/Packets$StreamBegin;)V", 4098 },
	{ "lambda$new$8", (intptr_t) M_mindustry_core_NetClient_lambda$new$8_java_lang_Exception, VTABLE_mindustry_core_NetClient_lambda$new$8_java_lang_Exception, "(Ljava/lang/Exception;)V", 4098 },
	{ "lambda$new$5", (intptr_t) SM_mindustry_core_NetClient_lambda$new$5_mindustry_net_Packets$TextureStream, 0, "(Lmindustry/net/Packets$TextureStream;)V", 4106 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_core_NetClient_lambda$new$4_mindustry_net_Packets$AssetRequirementStream, 0, "(Lmindustry/net/Packets$AssetRequirementStream;)V", 4106 },
	{ "lambda$new$3", (intptr_t) M_mindustry_core_NetClient_lambda$new$3_mindustry_net_Packets$WorldStream, VTABLE_mindustry_core_NetClient_lambda$new$3_mindustry_net_Packets$WorldStream, "(Lmindustry/net/Packets$WorldStream;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_core_NetClient_lambda$new$2_mindustry_net_Packets$Disconnect, VTABLE_mindustry_core_NetClient_lambda$new$2_mindustry_net_Packets$Disconnect, "(Lmindustry/net/Packets$Disconnect;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_core_NetClient_lambda$new$0_mindustry_net_Packets$Connect, VTABLE_mindustry_core_NetClient_lambda$new$0_mindustry_net_Packets$Connect, "(Lmindustry/net/Packets$Connect;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_core_NetClient_lambda$new$1, VTABLE_mindustry_core_NetClient_lambda$new$1, "()V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_core_NetClient, 0, "()V", 8 },
};

Class class_mindustry_core_NetClient{
		.nativeName = (intptr_t) "mindustry/core/NetClient",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_NetClient),
		.classVtable = (intptr_t) vtable_mindustry_core_NetClient,
		.staticInitializer = (intptr_t) clinit_mindustry_core_NetClient,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_NetClient,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 64,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_NetClient = registerClass(&class_mindustry_core_NetClient);

}
