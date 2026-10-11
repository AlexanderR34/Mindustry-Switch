#include "mindustry/core/NetServer.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/net/Packets_ConnectPacket.h"
#include "mindustry/net/Packets_AssetRequirementStream.h"
#include "arc/graphics/Color.h"
#include "mindustry/game/EventType_PlayerConnect.h"
#include "java/lang/Runnable.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/mod/Mods.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/Colors.h"
#include "mindustry/net/SteamAdmin.h"
#include "arc/func/Floatf.h"
#include "arc/util/Log.h"
#include "arc/util/Timekeeper.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Weaponsc.h"
#include "mindustry/core/NetServer_invoke_mindustry_core_NetServer_InvalidCommandHandler_1.h"
#include "java/lang/Object.h"
#include "mindustry/game/Universe.h"
#include "mindustry/game/EventType_AdminRequestEvent.h"
#include "mindustry/net/Administration_PlayerAction.h"
#include "arc/struct/ObjectMap.h"
#include "arc/util/io/Writes.h"
#include "mindustry/gen/EntitySnapshotCallPacket.h"
#include "mindustry/core/NetServer_invoke_mindustry_core_NetServer_ChatFormatter_1.h"
#include "java/lang/Iterable.h"
#include "mindustry/core/GameState_State.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "arc/func/Cons.h"
#include "java/io/IOException.h"
#include "mindustry/core/Control.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/core/NetServer_InvalidCommandHandler.h"
#include "mindustry/net/Administration_TraceInfo.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/core/NetServer_1.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/core/Platform.h"
#include "mindustry/type/UnitType.h"
#include "java/io/OutputStream.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/Vars.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/core/NetServer_TeamAssigner.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons_10.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons_11.h"
#include "arc/Events.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons_12.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons_13.h"
#include "mindustry/net/Packets_WorldStream.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/core/NetServer_invoke_arc_func_Prov_11.h"
#include "mindustry/core/NetServer_invoke_arc_func_Prov_10.h"
#include "arc/struct/IntSet_IntSetIterator.h"
#include "arc/util/CommandHandler_CommandResponse.h"
#include "mindustry/gen/Mechc.h"
#include "java/lang/Throwable.h"
#include "mindustry/net/Packets_AdminAction.h"
#include "java/lang/Exception.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/game/EventType_PlayerLeave.h"
#include "arc/struct/Queue.h"
#include "arc/func/Cons2.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/net/Packets_KickReason.h"
#include "mindustry/core/Logic.h"
#include "mindustry/core/NetServer_invoke_arc_util_CommandHandler_CommandRunner_10.h"
#include "java/io/ByteArrayOutputStream.h"
#include "mindustry/core/NetServer_invoke_arc_util_CommandHandler_CommandRunner_11.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons_7.h"
#include "mindustry/world/Block.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons_8.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons_9.h"
#include "mindustry/gen/Groups.h"
#include "arc/util/CommandHandler_ResponseType.h"
#include "arc/util/Timer_Task.h"
#include "java/lang/String.h"
#include "mindustry/net/Administration_ActionType.h"
#include "arc/util/CommandHandler_CommandRunner.h"
#include "mindustry/net/NetConnection.h"
#include "java/lang/Math.h"
#include "mindustry/core/NetServer_VoteSession.h"
#include "java/lang/Enum.h"
#include "mindustry/game/EventType_PlayerJoin.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "arc/util/CommandHandler_Command.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "arc/util/io/Streams.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/core/NetServer_invoke_java_lang_Runnable_3.h"
#include "java/lang/Integer.h"
#include "mindustry/core/NetServer_invoke_java_lang_Runnable_5.h"
#include "mindustry/core/NetServer_invoke_java_lang_Runnable_4.h"
#include "java/util/concurrent/Future.h"
#include "mindustry/core/Version.h"
#include "java/io/DataOutput.h"
#include "mindustry/core/NetServer_ChatFormatter.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/mod/data/DataAsset.h"
#include "mindustry/io/TypeIO_ClientBuildPlans.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/core/NetServer_invoke_arc_func_Floatf_1.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/net/Packets_TextureStream.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_13.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_12.h"
#include "arc/Graphics.h"
#include "java/io/DataOutputStream.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_19.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_18.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_17.h"
#include "mindustry/net/Streamable.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_16.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_15.h"
#include "java/lang/System.h"
#include "mindustry/game/EventType_ConnectionEvent.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_14.h"
#include "java/lang/Boolean.h"
#include "java/nio/charset/Charset.h"
#include "mindustry/game/Rules.h"
#include "arc/util/io/FastDeflaterOutputStream.h"
#include "arc/util/CommandHandler.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons2_5.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons2_4.h"
#include "mindustry/core/NetServer_invoke_arc_func_Cons2_3.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/net/Administration.h"
#include "mindustry/mod/Mod.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/core/NetServer_invoke_arc_func_Prov_6.h"
#include "mindustry/core/NetServer_invoke_arc_func_Prov_7.h"
#include "arc/util/io/ReusableByteOutStream.h"
#include "java/lang/AutoCloseable.h"
#include "mindustry/core/NetServer_invoke_arc_func_Prov_8.h"
#include "mindustry/core/NetServer_invoke_arc_func_Prov_9.h"
#include "mindustry/net/Packets_AssetStream.h"
#include "mindustry/gen/HiddenSnapshotCallPacket.h"
#include "mindustry/net/NetworkIO.h"
#include "mindustry/net/Administration_Config.h"
#include "mindustry/game/Teams.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/core/NetServer_invoke_arc_util_CommandHandler_CommandRunner_9.h"
#include "mindustry/core/NetServer_invoke_arc_util_CommandHandler_CommandRunner_6.h"
#include "mindustry/core/World.h"
#include "mindustry/core/NetServer_invoke_arc_util_CommandHandler_CommandRunner_7.h"
#include "mindustry/core/NetServer_invoke_arc_util_CommandHandler_CommandRunner_8.h"
#include "java/nio/FloatBuffer.h"
#include "mindustry/net/Packets_Connect.h"
#include "mindustry/gen/Entityc.h"
#include "arc/math/geom/Position.h"
#include "java/net/BindException.h"
#include "arc/struct/Bits.h"
#include "mindustry/logic/GlobalVars.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/game/EventType_PlayerConnectionConfirmed.h"
#include "mindustry/net/Administration_PlayerInfo.h"
#include "arc/math/Rand.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "java/lang/Float.h"
#include "mindustry/gen/Velc.h"
#include "arc/struct/IntSeq.h"
#include "arc/struct/IntSet.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_23.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_22.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_21.h"
#include "mindustry/core/NetServer_invoke_arc_func_Boolf_20.h"
#include "mindustry/mod/DataManager.h"
#include "mindustry/net/Packets_Disconnect.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/core/NetServer_invoke_mindustry_core_NetServer_TeamAssigner_1.h"
#include "arc/ApplicationListener.h"
#include "mindustry/game/EventType_ConnectPacketEvent.h"
#include "mindustry/gen/Call.h"

extern "C" {

jint SF_mindustry_core_NetServer_maxSnapshotSize;
jobject SF_mindustry_core_NetServer_blockSyncTime;
jobject SF_mindustry_core_NetServer_healthSyncTime;
jobject SF_mindustry_core_NetServer_planPreviewSyncTime;
jobject SF_mindustry_core_NetServer_fbuffer;
jobject SF_mindustry_core_NetServer_dataWrites;
jobject SF_mindustry_core_NetServer_hiddenIds;
jobject SF_mindustry_core_NetServer_healthSeq;
jobject SF_mindustry_core_NetServer_vector;
jobject SF_mindustry_core_NetServer_plansOut;
jfloat SF_mindustry_core_NetServer_correctDist;
jint SF_mindustry_core_NetServer_kickDuration;
jfloat SF_mindustry_core_NetServer_voteDuration;
jint SF_mindustry_core_NetServer_voteCooldown;

void mark_mindustry_core_NetServer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_core_NetServer_blockSyncTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetServer_blockSyncTime)->clazz)->markFunction)((jobject) SF_mindustry_core_NetServer_blockSyncTime, mark, depth + 1);
		if (SF_mindustry_core_NetServer_healthSyncTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetServer_healthSyncTime)->clazz)->markFunction)((jobject) SF_mindustry_core_NetServer_healthSyncTime, mark, depth + 1);
		if (SF_mindustry_core_NetServer_planPreviewSyncTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetServer_planPreviewSyncTime)->clazz)->markFunction)((jobject) SF_mindustry_core_NetServer_planPreviewSyncTime, mark, depth + 1);
		if (SF_mindustry_core_NetServer_fbuffer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetServer_fbuffer)->clazz)->markFunction)((jobject) SF_mindustry_core_NetServer_fbuffer, mark, depth + 1);
		if (SF_mindustry_core_NetServer_dataWrites)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetServer_dataWrites)->clazz)->markFunction)((jobject) SF_mindustry_core_NetServer_dataWrites, mark, depth + 1);
		if (SF_mindustry_core_NetServer_hiddenIds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetServer_hiddenIds)->clazz)->markFunction)((jobject) SF_mindustry_core_NetServer_hiddenIds, mark, depth + 1);
		if (SF_mindustry_core_NetServer_healthSeq)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetServer_healthSeq)->clazz)->markFunction)((jobject) SF_mindustry_core_NetServer_healthSeq, mark, depth + 1);
		if (SF_mindustry_core_NetServer_vector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetServer_vector)->clazz)->markFunction)((jobject) SF_mindustry_core_NetServer_vector, mark, depth + 1);
		if (SF_mindustry_core_NetServer_plansOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_NetServer_plansOut)->clazz)->markFunction)((jobject) SF_mindustry_core_NetServer_plansOut, mark, depth + 1);
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
	auto self = (mindustry_core_NetServer *) object;
	if (self->F_admins)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_admins)->clazz)->markFunction)((jobject) self->F_admins, mark, depth + 1);
	if (self->F_clientCommands)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clientCommands)->clazz)->markFunction)((jobject) self->F_clientCommands, mark, depth + 1);
	if (self->F_assigner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assigner)->clazz)->markFunction)((jobject) self->F_assigner, mark, depth + 1);
	if (self->F_chatFormatter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chatFormatter)->clazz)->markFunction)((jobject) self->F_chatFormatter, mark, depth + 1);
	if (self->F_invalidHandler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_invalidHandler)->clazz)->markFunction)((jobject) self->F_invalidHandler, mark, depth + 1);
	if (self->F_buildHealthChanged)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildHealthChanged)->clazz)->markFunction)((jobject) self->F_buildHealthChanged, mark, depth + 1);
	if (self->F_currentlyKicking)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentlyKicking)->clazz)->markFunction)((jobject) self->F_currentlyKicking, mark, depth + 1);
	if (self->F_writeBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writeBuffer)->clazz)->markFunction)((jobject) self->F_writeBuffer, mark, depth + 1);
	if (self->F_outputBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outputBuffer)->clazz)->markFunction)((jobject) self->F_outputBuffer, mark, depth + 1);
	if (self->F_syncStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_syncStream)->clazz)->markFunction)((jobject) self->F_syncStream, mark, depth + 1);
	if (self->F_dataStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dataStream)->clazz)->markFunction)((jobject) self->F_dataStream, mark, depth + 1);
	if (self->F_dataStreamWrites)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dataStreamWrites)->clazz)->markFunction)((jobject) self->F_dataStreamWrites, mark, depth + 1);
	if (self->F_customPacketHandlers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customPacketHandlers)->clazz)->markFunction)((jobject) self->F_customPacketHandlers, mark, depth + 1);
	if (self->F_customBinaryPacketHandlers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customBinaryPacketHandlers)->clazz)->markFunction)((jobject) self->F_customBinaryPacketHandlers, mark, depth + 1);
	if (self->F_logicClientDataHandlers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_logicClientDataHandlers)->clazz)->markFunction)((jobject) self->F_logicClientDataHandlers, mark, depth + 1);
	if (self->F_playersToSend)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_playersToSend)->clazz)->markFunction)((jobject) self->F_playersToSend, mark, depth + 1);
	if (self->F_tempConnections)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tempConnections)->clazz)->markFunction)((jobject) self->F_tempConnections, mark, depth + 1);
}

void init_mindustry_core_NetServer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(138);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Administration(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_Administration);
	init_mindustry_net_Administration(ctx, sp[1].o);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_arc_util_CommandHandler(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_CommandHandler);
	init_arc_util_CommandHandler_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_clientCommands = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_mindustry_core_NetServer$TeamAssigner_1(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_mindustry_core_NetServer$TeamAssigner_1 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_mindustry_core_NetServer$TeamAssigner_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_assigner = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_mindustry_core_NetServer$ChatFormatter_1(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_mindustry_core_NetServer$ChatFormatter_1 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_mindustry_core_NetServer$ChatFormatter_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_chatFormatter = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_mindustry_core_NetServer$InvalidCommandHandler_1(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_mindustry_core_NetServer$InvalidCommandHandler_1 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_mindustry_core_NetServer$InvalidCommandHandler_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_invalidHandler = (jref) sp[1].o;
	LINE_NUMBER(105);
	((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_closing = (jint(0));
	((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_pvpAutoPaused = (jint(1));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_buildHealthChanged = (jref) sp[1].o;
	LINE_NUMBER(110);
	((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking = (jref) (jobject(nullptr));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_arc_util_io_ReusableByteOutStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_ReusableByteOutStream);
	init_arc_util_io_ReusableByteOutStream_int(ctx, sp[1].o, (127));
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_writeBuffer = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_arc_util_io_Writes(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	clinit_java_io_DataOutputStream(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	sp[3].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_writeBuffer;
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[2].o, sp[3].o);
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[1].o, sp[2].o);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_outputBuffer = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	clinit_arc_util_io_ReusableByteOutStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_ReusableByteOutStream);
	init_arc_util_io_ReusableByteOutStream(ctx, sp[1].o);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_syncStream = (jref) sp[1].o;
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	clinit_java_io_DataOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	sp[2].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[1].o, sp[2].o);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_dataStream = (jref) sp[1].o;
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	clinit_arc_util_io_Writes(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	sp[2].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[1].o, sp[2].o);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_dataStreamWrites = (jref) sp[1].o;
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_customPacketHandlers = (jref) sp[1].o;
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_customBinaryPacketHandlers = (jref) sp[1].o;
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_logicClientDataHandlers = (jref) sp[1].o;
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_playersToSend = (jref) sp[1].o;
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_tempConnections = (jref) sp[1].o;
	LINE_NUMBER(140);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = ((jobject) &class_mindustry_net_Packets$Connect);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons2_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(152);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = ((jobject) &class_mindustry_net_Packets$Disconnect);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons2_4(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons2_4 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons2_4);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = ((jobject) &class_mindustry_net_Packets$ConnectPacket);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons2_5(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons2_5 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons2_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(327);
	((func_mindustry_core_NetServer_registerCommands) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_registerCommands])(ctx, (frame[0].o));
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:sendWorldAndAssets", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	jint temp0 = (jint)((func_mindustry_mod_DataManager_hasExternalAssets_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_hasExternalAssets_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_determiningAssets = (jint(1));
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_receivingAssets = (jint(0));
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected = (jint(0));
	LINE_NUMBER(335);
	((func_mindustry_core_NetServer_sendAssetRequirements_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_sendAssetRequirements_mindustry_gen_Player])(ctx, (frame[0].o), (frame[1].o));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(337);
	((func_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player])(ctx, (frame[0].o), (frame[1].o));
	}
label_6:;
	LINE_NUMBER(339);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(343);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_Mods_eachClass_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_eachClass_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_registerCommands(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:registerCommands", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"help"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"[page]"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"Lists all commands."_j));
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_6(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_6 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(373);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"t"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"<message...>"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"Send a message only to your teammates."_j));
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_7(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_7 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(381);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"a"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"<message...>"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"Send a message only to admins."_j));
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_8(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_8 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(392);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(394);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"votekick"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"[player] [reason...]"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"Vote to kick a player with a valid reason."_j));
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_9(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_9 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(463);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"vote"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"<y/n/c>"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"Vote to kick the current player. Admins can cancel the voting with 'c'."_j));
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_10(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_10 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(510);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sync"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Re-synchronize world state."_j));
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_11(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_11 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_util_CommandHandler$CommandRunner_11);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_core_NetServer_votesRequired_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:votesRequired", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(527);
	jint temp0 = jint(2);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	if (temp1 <= (jint(4))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	INST_IADD();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:assignTeam", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_assigner;
	sp[1].o = frame[1].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[0].o = (jobject)((func_mindustry_core_NetServer$TeamAssigner_assign_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_core_NetServer$TeamAssigner, INDEX_mindustry_core_NetServer$TeamAssigner_assign_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:assignTeam", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_assigner;
	sp[0].o = (jobject)((func_mindustry_core_NetServer$TeamAssigner_assign_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_core_NetServer$TeamAssigner, INDEX_mindustry_core_NetServer$TeamAssigner_assign_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_sendAssetRequirements_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:sendAssetRequirements", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(539);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(540);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:sendWorldData", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(548);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(549);
	sp[0].o = frame[1].o;
	clinit_arc_util_io_FastDeflaterOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_FastDeflaterOutputStream);
	init_arc_util_io_FastDeflaterOutputStream_java_io_OutputStream(ctx, sp[1].o, (frame[2].o));
	SM_mindustry_net_NetworkIO_writeWorld_mindustry_gen_Player_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(550);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	clinit_mindustry_net_Packets$WorldStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_Packets$WorldStream);
	init_mindustry_net_Packets$WorldStream(ctx, sp[1].o);
	((func_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(552);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Packed @ of world data to @ (@ / @)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_io_ByteArrayOutputStream_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_size_R_int])(ctx, (frame[2].o));
	sp[2].o = (jobject)SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(ctx, (jlong(temp1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp2 = jint(1);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(2);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	sp[2].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[2].o))->F_address;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(3);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_sendTexture_mindustry_net_NetConnection_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:sendTexture", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(561);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(562);
	SM_mindustry_net_NetworkIO_packTexture_java_io_OutputStream_java_lang_String_Array1_byte(ctx, (frame[4].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(563);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$TextureStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_Packets$TextureStream);
	init_mindustry_net_Packets$TextureStream(ctx, sp[1].o);
	((func_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_sendTexture_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:sendTexture", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(569);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(570);
	SM_mindustry_net_NetworkIO_packTexture_java_io_OutputStream_java_lang_String_Array1_byte(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(571);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[0].o = (jobject)((func_mindustry_net_Net_getConnections_R_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_getConnections_R_java_lang_Iterable])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_net_NetConnection, sp[0].o));
	LINE_NUMBER(572);
	sp[0].o = frame[5].o;
	clinit_mindustry_net_Packets$TextureStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_Packets$TextureStream);
	init_mindustry_net_Packets$TextureStream(ctx, sp[1].o);
	((func_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(573);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(574);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_removeTexture_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:removeTexture", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(580);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_util_io_Streams(ctx);
	sp[3].o = (jobject)SF_arc_util_io_Streams_emptyBytes;
	((func_mindustry_core_NetServer_sendTexture_mindustry_net_NetConnection_java_lang_String_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_sendTexture_mindustry_net_NetConnection_java_lang_String_Array1_byte])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_removeTexture_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:removeTexture", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(586);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_io_Streams(ctx);
	sp[2].o = (jobject)SF_arc_util_io_Streams_emptyBytes;
	((func_mindustry_core_NetServer_sendTexture_java_lang_String_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_sendTexture_java_lang_String_Array1_byte])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_addPacketHandler_java_lang_String_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:addPacketHandler", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_customPacketHandlers;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Prov_6);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[2].o));
	LINE_NUMBER(591);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_NetServer_getPacketHandlers_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:getPacketHandlers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_customPacketHandlers;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Prov_7);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_addBinaryPacketHandler_java_lang_String_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:addBinaryPacketHandler", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_customBinaryPacketHandlers;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Prov_8);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[2].o));
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_NetServer_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:getBinaryPacketHandlers", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_customBinaryPacketHandlers;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Prov_9);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_addLogicDataHandler_java_lang_String_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:addLogicDataHandler", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_logicClientDataHandlers;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Prov_10(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Prov_10 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Prov_10);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[2].o));
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_onDisconnect_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:onDisconnect", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(612);
	((func_mindustry_gen_Player_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_remove])(ctx, (frame[0].o));
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasDisconnected) != 0) goto label_4;
	}
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected) == 0) goto label_6;
	}
	{
	LINE_NUMBER(618);
	clinit_mindustry_game_EventType$PlayerLeave(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerLeave);
	init_mindustry_game_EventType$PlayerLeave_mindustry_gen_Player(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(619);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_showConnectMessages;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001[accent] has disconnected."_j.string, 1, sp[0].o);
	SM_mindustry_gen_Call_sendMessage_java_lang_String(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(620);
	jint temp0 = (jint)((func_mindustry_gen_Player_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_id_R_int])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_playerDisconnect_int(ctx, temp0);
	}
label_6:;
	{
	LINE_NUMBER(623);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"&lb@&fi&lk has disconnected. [&lb@&fi&lk] (@)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (frame[1].o);
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(624);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_showConnectMessages;
	jint temp2 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_4;
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	SM_arc_util_Log_info_java_lang_Object(ctx, sp[0].o);
label_4:;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(629);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_spawnedByCore) == 0) goto label_12;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_dead) != 0) goto label_12;
	}
	{
	LINE_NUMBER(630);
	SM_mindustry_gen_Call_unitDespawn_mindustry_gen_Unit(ctx, (frame[2].o));
	}
label_12:;
	{
	LINE_NUMBER(633);
	((func_mindustry_gen_Player_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_remove])(ctx, (frame[0].o));
	LINE_NUMBER(634);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasDisconnected = (jint(1));
	LINE_NUMBER(635);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_requestDebugStatus_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:requestDebugStatus", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasDisconnected) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected) == 0) goto label_3;
	}
	INST_ICONST(2);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(644);
	jint temp1 = (jint)((func_mindustry_gen_Player_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isAdded_R_boolean])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_6;
	}
	INST_ICONST(4);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(645);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(temp1))->F_hasBegunConnecting) == 0) goto label_9;
	}
	INST_BIPUSH(8);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(647);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	SM_mindustry_gen_Call_debugStatusClient_mindustry_net_NetConnection_int_int(ctx, sp[0].o, temp0, ((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[1].o))->F_lastReceivedClientSnapshot));
	LINE_NUMBER(648);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	SM_mindustry_gen_Call_debugStatusClientUnreliable_mindustry_net_NetConnection_int_int(ctx, sp[0].o, temp1, ((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[1].o))->F_lastReceivedClientSnapshot));
	LINE_NUMBER(649);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_debugStatusClient_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:debugStatusClient", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(653);
	SM_mindustry_core_NetServer_logClientStatus_boolean_int_int(ctx, (jint(1)), (frame[0].i), (frame[1].i));
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_debugStatusClientUnreliable_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:debugStatusClientUnreliable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(658);
	SM_mindustry_core_NetServer_logClientStatus_boolean_int_int(ctx, (jint(0)), (frame[0].i), (frame[1].i));
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_logClientStatus_boolean_int_int(jcontext ctx, jbool param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:logClientStatus", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(662);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"@ Debug status received. disconnected = @, connected = @, added = @, begunConnecting = @ lastClientSnapshot = @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (6));
	jint temp0 = jint(0);
	LINE_NUMBER(663);
	sp[2].o = sp[1].o;
	sp[3].i = temp0;
	sp += 4;
	if ((frame[0].i) == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[RELIABLE]"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[UNRELIABLE]"_j));
label_3:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	jint temp0 = jint(1);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (((frame[1].i) & (jint(1))) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 4;
	LINE_NUMBER(664);
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[3].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[1].o;
	jint temp0 = jint(2);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (((frame[1].i) & (jint(2))) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[3].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[1].o;
	jint temp0 = jint(3);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (((frame[1].i) & (jint(4))) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[3].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[1].o;
	jint temp0 = jint(4);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (((frame[1].i) & (8)) == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 5;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[4].i);
	ARRAY_ACCESS(jobject, sp[1].o, sp[3].i) = sp[2].o;
	jint temp0 = jint(5);
	jint temp1 = frame[2].i;
	LINE_NUMBER(665);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	LINE_NUMBER(662);
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(667);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_serverPacketReliable_mindustry_gen_Player_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:serverPacketReliable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(671);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_customPacketHandlers;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(672);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_customPacketHandlers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)));
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_func_Cons2, sp[0].o));
	LINE_NUMBER(673);
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(674);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(676);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_serverPacketUnreliable_mindustry_gen_Player_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:serverPacketUnreliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(680);
	SM_mindustry_core_NetServer_serverPacketReliable_mindustry_gen_Player_java_lang_String_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_serverBinaryPacketReliable_mindustry_gen_Player_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:serverBinaryPacketReliable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(685);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_customBinaryPacketHandlers;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(686);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_customBinaryPacketHandlers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)));
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_func_Cons2, sp[0].o));
	LINE_NUMBER(687);
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(688);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(690);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_serverBinaryPacketUnreliable_mindustry_gen_Player_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:serverBinaryPacketUnreliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(694);
	SM_mindustry_core_NetServer_serverBinaryPacketReliable_mindustry_gen_Player_java_lang_String_Array1_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_clientLogicDataReliable_mindustry_gen_Player_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:clientLogicDataReliable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(699);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_logicClientDataHandlers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(700);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_func_Cons2, sp[0].o));
	LINE_NUMBER(702);
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(703);
	goto label_4;
	}
label_2:;
	LINE_NUMBER(705);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_clientLogicDataUnreliable_mindustry_gen_Player_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:clientLogicDataUnreliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(709);
	SM_mindustry_core_NetServer_clientLogicDataReliable_mindustry_gen_Player_java_lang_String_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(710);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_invalid_float_R_boolean(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:invalid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(713);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[0].f));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[0].f));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_syncBuilding_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:syncBuilding", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(717);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(718);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(719);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_dataStreamWrites;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[0].o));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(720);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_dataStreamWrites;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(721);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netServer;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[1].o))->F_dataStreamWrites;
	((func_mindustry_gen_Building_writeSync_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_writeSync_arc_util_io_Writes])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(723);
	jint temp1 = jint(1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_syncStream;
	sp[0].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[0].o);
	SM_mindustry_gen_Call_blockSnapshot_short_Array1_byte(ctx, temp1, sp[0].o);
	LINE_NUMBER(724);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(725);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_requestBlockSnapshot_mindustry_gen_Player_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:requestBlockSnapshot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(729);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(730);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(731);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(732);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_dataStreamWrites;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[2].o));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(733);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_dataStreamWrites;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(734);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netServer;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[1].o))->F_dataStreamWrites;
	((func_mindustry_gen_Building_writeSync_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_writeSync_arc_util_io_Writes])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(736);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	jint temp1 = jint(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netServer;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[1].o))->F_syncStream;
	sp[1].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[1].o);
	SM_mindustry_gen_Call_blockSnapshot_mindustry_net_NetConnection_short_Array1_byte(ctx, sp[0].o, temp1, sp[1].o);
	LINE_NUMBER(737);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(739);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_clientPlanSnapshot_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:clientPlanSnapshot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(744);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(745);
	((func_mindustry_gen_Player_handlePreviewPlans_int_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_handlePreviewPlans_int_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(746);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_clientPlanSnapshotReceived_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:clientPlanSnapshotReceived", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(751);
	SM_mindustry_core_NetServer_clientPlanSnapshot_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(752);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_clientSnapshot_mindustry_gen_Player_int_int_boolean_float_float_float_float_float_float_float_float_mindustry_world_Tile_boolean_boolean_boolean_boolean_mindustry_world_Block_int_arc_struct_Queue_float_float_float_float(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jobject param12, jbool param13, jbool param14, jbool param15, jbool param16, jobject param17, jint param18, jobject param19, jfloat param20, jfloat param21, jfloat param22, jfloat param23) {
	jtype frame[41];
	auto stack = &frame[36];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:clientSnapshot", 41 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].f = param11;
	frame[12].o = param12;
	frame[13].i = param13;
	frame[14].i = param14;
	frame[15].i = param15;
	frame[16].i = param16;
	frame[17].o = param17;
	frame[18].i = param18;
	frame[19].o = param19;
	frame[20].f = param20;
	frame[21].f = param21;
	frame[22].f = param22;
	frame[23].f = param23;
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	frame[24].o = sp[0].o;
	LINE_NUMBER(770);
	if ((frame[24].o) == nullptr) goto label_2;
	}
	{
	if ((frame[1].i) >= ((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_lastReceivedClientSnapshot)) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(773);
	jint temp0 = (jint)SM_mindustry_core_NetServer_invalid_float_R_boolean(ctx, (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	INST_FCONST(0);
	INST_FSTORE(4);
label_4:;
	{
	LINE_NUMBER(774);
	jint temp0 = (jint)SM_mindustry_core_NetServer_invalid_float_R_boolean(ctx, (frame[5].f));
	if (temp0 == 0) goto label_5;
	}
	INST_FCONST(0);
	INST_FSTORE(5);
label_5:;
	{
	LINE_NUMBER(775);
	jint temp0 = (jint)SM_mindustry_core_NetServer_invalid_float_R_boolean(ctx, (frame[10].f));
	if (temp0 == 0) goto label_6;
	}
	INST_FCONST(0);
	INST_FSTORE(10);
label_6:;
	{
	LINE_NUMBER(776);
	jint temp0 = (jint)SM_mindustry_core_NetServer_invalid_float_R_boolean(ctx, (frame[11].f));
	if (temp0 == 0) goto label_7;
	}
	INST_FCONST(0);
	INST_FSTORE(11);
label_7:;
	{
	LINE_NUMBER(777);
	jint temp0 = (jint)SM_mindustry_core_NetServer_invalid_float_R_boolean(ctx, (frame[6].f));
	if (temp0 == 0) goto label_8;
	}
	INST_FCONST(0);
	INST_FSTORE(6);
label_8:;
	{
	LINE_NUMBER(778);
	jint temp0 = (jint)SM_mindustry_core_NetServer_invalid_float_R_boolean(ctx, (frame[7].f));
	if (temp0 == 0) goto label_9;
	}
	INST_FCONST(0);
	INST_FSTORE(7);
label_9:;
	{
	LINE_NUMBER(779);
	jint temp0 = (jint)SM_mindustry_core_NetServer_invalid_float_R_boolean(ctx, (frame[8].f));
	if (temp0 == 0) goto label_10;
	}
	INST_FCONST(0);
	INST_FSTORE(8);
label_10:;
	{
	LINE_NUMBER(780);
	jint temp0 = (jint)SM_mindustry_core_NetServer_invalid_float_R_boolean(ctx, (frame[9].f));
	if (temp0 == 0) goto label_11;
	}
	INST_FCONST(0);
	INST_FSTORE(9);
label_11:;
	{
	LINE_NUMBER(782);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	jint temp0 = (jint)((func_mindustry_net_Administration_isStrict_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isStrict_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i == 0) goto label_12;
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[25].i = sp[0].i;
	LINE_NUMBER(784);
	if ((longCompare(((jlong)((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_lastReceivedClientTime), (jlong(0)))) != 0) goto label_15;
	}
	{
	sp[0].o = frame[24].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_lastReceivedClientTime = (temp0 - (jlong(16ll)));
	}
label_15:;
	{
	LINE_NUMBER(786);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_viewX = (frame[20].f);
	LINE_NUMBER(787);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_viewY = (frame[21].f);
	LINE_NUMBER(788);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_viewWidth = (frame[22].f);
	LINE_NUMBER(789);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_viewHeight = (frame[23].f);
	LINE_NUMBER(792);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Mechc)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(793);
	frame[14].i = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(796);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) != 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) != 0) goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(797);
	frame[13].i = (jint(0));
	}
label_22:;
	{
	LINE_NUMBER(800);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseX = (frame[6].f);
	LINE_NUMBER(801);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseY = (frame[7].f);
	LINE_NUMBER(802);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_typing = (frame[15].i);
	LINE_NUMBER(803);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_shooting = (frame[14].i);
	LINE_NUMBER(804);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_boosting = (frame[13].i);
	LINE_NUMBER(805);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedBlock = (jref) (frame[17].o);
	LINE_NUMBER(806);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedRotation = (frame[18].i);
	LINE_NUMBER(808);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[26].o = sp[0].o;
	LINE_NUMBER(810);
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(811);
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, (frame[26].o));
	LINE_NUMBER(812);
	((func_mindustry_gen_Unit_updateBuilding_boolean) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_mindustry_gen_Unit_updateBuilding_boolean])(ctx, (frame[26].o), (frame[16].i));
	LINE_NUMBER(814);
	if ((frame[19].o) == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(815);
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, (frame[19].o));
	frame[27].o = sp[0].o;
	}
label_37:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[27].o)))(ctx, (frame[27].o));
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[27].o)))(ctx, (frame[27].o));
	frame[28].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(816);
	if ((frame[28].o) != nullptr) goto label_39;
	}
	goto label_37;
label_39:;
	{
	LINE_NUMBER(817);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_y));
	frame[29].o = sp[0].o;
	LINE_NUMBER(818);
	if ((frame[29].o) == nullptr) goto label_37;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_breaking) != 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_block;
	if (sp[0].o != nullptr) goto label_41;
	}
	goto label_37;
label_41:;
	{
	LINE_NUMBER(820);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_breaking) == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[29].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_42;
	}
	LINE_NUMBER(821);
	goto label_37;
label_42:;
	{
	LINE_NUMBER(822);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_breaking) != 0) goto label_44;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[29].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_44;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[29].o));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[29].o)))->F_build;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[29].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_rotation)) goto label_44;
	}
	LINE_NUMBER(823);
	goto label_37;
label_44:;
	{
	LINE_NUMBER(824);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_rejectedRequests;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_12);
		proxy->F_field0 = (jref) (frame[28].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_46;
	}
	LINE_NUMBER(825);
	goto label_37;
label_46:;
	{
	LINE_NUMBER(826);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	sp += 2;
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_breaking) == 0) goto label_48;
	}
	clinit_mindustry_net_Administration$ActionType(ctx);
	(sp++)->o = SF_mindustry_net_Administration$ActionType_breakBlock;
	goto label_49;
label_48:;
	clinit_mindustry_net_Administration$ActionType(ctx);
	(sp++)->o = SF_mindustry_net_Administration$ActionType_placeBlock;
label_49:;
	{
	sp -= 3;
	sp[3].o = frame[29].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[28].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	if (temp0 != 0) goto label_50;
	}
	{
	LINE_NUMBER(832);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	SM_mindustry_gen_Call_removeQueueBlock_mindustry_net_NetConnection_int_int_boolean(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[28].o)))->F_breaking));
	LINE_NUMBER(833);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_rejectedRequests;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[28].o));
	LINE_NUMBER(834);
	goto label_37;
	}
label_50:;
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Unit_plans_R_arc_struct_Queue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue])(ctx, sp[0].o);
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[28].o));
	LINE_NUMBER(837);
	goto label_37;
	}
label_32:;
	{
	LINE_NUMBER(841);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_rejectedRequests;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(843);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_56;
	}
	{
	LINE_NUMBER(844);
	((func_mindustry_gen_Unit_controlWeapons_boolean_boolean) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_mindustry_gen_Unit_controlWeapons_boolean_boolean])(ctx, (frame[26].o), (frame[14].i), (frame[14].i));
	LINE_NUMBER(845);
	((func_mindustry_gen_Unit_aim_float_float_boolean) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_mindustry_gen_Unit_aim_float_float_boolean])(ctx, (frame[26].o), (frame[6].f), (frame[7].f), (jint(1)));
	LINE_NUMBER(846);
	((mindustry_gen_Unit *) NULL_CHECK((frame[26].o)))->F_mineTile = (jref) (frame[12].o);
	LINE_NUMBER(848);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_lastReceivedClientTime));
	jlong temp1 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, temp0, (jlong(1500ll)));
	frame[27].l = temp1;
	LINE_NUMBER(849);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, (frame[26].o));
	frame[29].f = temp2;
	LINE_NUMBER(851);
	frame[30].f = (((((jfloat((frame[27].l))) / (jfloat(1000.0f))) * (jfloat(60.0f))) * (frame[29].f)) * (jfloat(1.1f)));
	LINE_NUMBER(854);
	if ((frame[3].i) != 0) goto label_64;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[26].o)))->F_id) == (frame[2].i)) goto label_65;
	}
label_64:;
	INST_ICONST(1);
	goto label_66;
label_65:;
	INST_ICONST(0);
label_66:;
	{
	sp -= 1;
	frame[31].i = sp[0].i;
	LINE_NUMBER(855);
	frame[32].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[26].o)))->F_x);
	frame[33].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[26].o)))->F_y);
	LINE_NUMBER(857);
	if ((frame[31].i) != 0) goto label_70;
	}
	{
	LINE_NUMBER(858);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[26].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].f), (frame[11].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[29].f));
	LINE_NUMBER(860);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[26].o));
	LINE_NUMBER(861);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[30].f));
	LINE_NUMBER(863);
	frame[34].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[26].o)))->F_x);
	frame[35].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[26].o)))->F_y);
	LINE_NUMBER(864);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[26].o));
	if (temp0 != 0) goto label_77;
	}
	{
	LINE_NUMBER(865);
	sp[0].o = frame[26].o;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_vector;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_vector;
	((func_mindustry_gen_Unit_move_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_move_float_float])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	goto label_79;
	}
label_77:;
	{
	LINE_NUMBER(867);
	sp[0].o = frame[26].o;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_vector;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_vector;
	((func_mindustry_gen_Unit_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_trns_float_float])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_79:;
	{
	LINE_NUMBER(870);
	frame[32].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[26].o)))->F_x);
	LINE_NUMBER(871);
	frame[33].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[26].o)))->F_y);
	LINE_NUMBER(873);
	if ((frame[25].i) != 0) goto label_82;
	}
	{
	LINE_NUMBER(874);
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, (frame[26].o), (frame[34].f), (frame[35].f));
	LINE_NUMBER(875);
	frame[32].f = (frame[4].f);
	LINE_NUMBER(876);
	frame[33].f = (frame[5].f);
	goto label_70;
	}
label_82:;
	{
	LINE_NUMBER(877);
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (frame[4].f), (frame[5].f), (frame[32].f), (frame[33].f), (jfloat(112.0f)));
	if (temp0 != 0) goto label_70;
	}
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	SM_mindustry_gen_Call_setPosition_mindustry_net_NetConnection_float_float(ctx, sp[0].o, (frame[32].f), (frame[33].f));
	}
label_70:;
	{
	LINE_NUMBER(883);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_fbuffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, (20));
	LINE_NUMBER(884);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_fbuffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(888);
	if ((isInstance(ctx, (frame[26].o), &class_mindustry_gen_Mechc)) == 0) goto label_89;
	}
	{
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_fbuffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[9].f));
	}
label_89:;
	{
	LINE_NUMBER(889);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_fbuffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(890);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_fbuffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[32].f));
	LINE_NUMBER(891);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_fbuffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[33].f));
	LINE_NUMBER(892);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_fbuffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_flip_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_flip_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	LINE_NUMBER(895);
	sp[0].o = frame[26].o;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_fbuffer;
	((func_mindustry_gen_Unit_readSyncManual_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_readSyncManual_java_nio_FloatBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(896);
	goto label_95;
	}
label_56:;
	{
	LINE_NUMBER(897);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x = (frame[4].f);
	LINE_NUMBER(898);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].f);
	}
label_95:;
	{
	LINE_NUMBER(901);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[24].o)))->F_lastReceivedClientSnapshot = (frame[1].i);
	LINE_NUMBER(902);
	sp[0].o = frame[24].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_lastReceivedClientTime = temp0;
	LINE_NUMBER(903);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_adminRequest_mindustry_gen_Player_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:adminRequest", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(907);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(908);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"ACCESS DENIED: Player @ / @ attempted to perform admin action '@' on '@' without proper security access."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	sp[2].o = frame[0].o;
	LINE_NUMBER(909);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	jobject temp2 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].i = temp1;
	sp += 4;
	if (temp2 != nullptr) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_address;
	sp += 1;
	}
label_5:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	jint temp0 = jint(2);
	sp[1].o = (jobject)((func_mindustry_net_Packets$AdminAction_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_net_Packets$AdminAction_name_R_java_lang_String])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(3);
	sp[1].o = sp[0].o;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[1].o) != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_7:;
	{
	sp -= 5;
	ARRAY_ACCESS(jobject, sp[1].o, sp[3].i) = sp[4].o;
	LINE_NUMBER(908);
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(910);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(913);
	if ((frame[1].o) == nullptr) goto label_10;
	}
	{
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_admin) == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_11;
	}
	{
	if ((frame[1].o) == (frame[0].o)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(914);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"@ &fi&lk[&lb@&fi&lk]&fb attempted to perform admin action on nonexistant or admin player."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(915);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(918);
	clinit_mindustry_game_EventType$AdminRequestEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$AdminRequestEvent);
	init_mindustry_game_EventType$AdminRequestEvent_mindustry_gen_Player_mindustry_gen_Player_mindustry_net_Packets$AdminAction(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(920);
	clinit_mindustry_core_NetServer$1(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer$1_$SwitchMap$mindustry$net$Packets$AdminAction;
	jint temp0 = (jint)((func_mindustry_net_Packets$AdminAction_ordinal_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_net_Packets$AdminAction_ordinal_R_int])(ctx, (frame[2].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_14;
		case 2: goto label_15;
		case 3: goto label_16;
		case 4: goto label_17;
		case 5: goto label_18;
		default: goto label_19;
	}
	}
label_14:;
	{
	LINE_NUMBER(924);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_skipWave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_skipWave])(ctx, sp[0].o);
	LINE_NUMBER(925);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"&lc@ &fi&lk[&lb@&fi&lk]&fb has skipped the wave."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(926);
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(928);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[1].o))->F_uuid;
	jint temp0 = (jint)((func_mindustry_net_Administration_banPlayerID_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_banPlayerID_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(929);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[1].o))->F_address;
	jint temp1 = (jint)((func_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(930);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_banned;
	((func_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(931);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"&lc@ &fi&lk[&lb@&fi&lk]&fb has banned @ &fi&lk[&lb@&fi&lk]&fb."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp2 = jint(0);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(1);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(2);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(3);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(932);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(934);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_kick;
	((func_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(935);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"&lc@ &fi&lk[&lb@&fi&lk]&fb has kicked @ &fi&lk[&lb@&fi&lk]&fb."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(936);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(938);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(939);
	clinit_mindustry_net_Administration$TraceInfo(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$TraceInfo);
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[1].o))->F_address;
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	sp[3].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_locale;
	sp[4].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	jint temp0 = (jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[4].o))->F_modclient;
	sp[4].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	jint temp1 = (jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[4].o))->F_mobile;
	jint temp2 = (jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_timesJoined;
	jint temp3 = (jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_timesKicked;
	sp[4].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_ips;
	sp[4].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[4].o, (((jobject) &class_java_lang_String)));
	sp[4].o = checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[4].o);
	sp[5].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_names;
	sp[5].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[5].o, (((jobject) &class_java_lang_String)));
	init_mindustry_net_Administration$TraceInfo_java_lang_String_java_lang_String_java_lang_String_boolean_boolean_int_int_Array1_java_lang_String_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, temp1, temp2, temp3, sp[4].o, (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[5].o)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(940);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(941);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	SM_mindustry_gen_Call_traceInfo_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_net_Administration$TraceInfo(ctx, sp[0].o, (frame[1].o), (frame[5].o));
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(943);
	SM_mindustry_core_NetClient_traceInfo_mindustry_gen_Player_mindustry_net_Administration$TraceInfo(ctx, (frame[1].o), (frame[5].o));
	}
label_32:;
	LINE_NUMBER(945);
	goto label_19;
label_18:;
	{
	LINE_NUMBER(947);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_game_Team)) == 0) goto label_19;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Team, (frame[3].o)));
	LINE_NUMBER(948);
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, (frame[1].o), (frame[4].o));
	}
label_19:;
	LINE_NUMBER(952);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_requestWorld_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:requestWorld", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(956);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasBegunConnecting) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_determiningAssets) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_receivingAssets) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(958);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_receivingAssets = (jint(0));
	LINE_NUMBER(959);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	((func_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(960);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_requestAssets_mindustry_gen_Player_Array1_short(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:requestAssets", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasBegunConnecting) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_determiningAssets) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_receivingAssets) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_determiningAssets = (jint(0));
	LINE_NUMBER(967);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_receivingAssets = (jint(1));
	LINE_NUMBER(969);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_5;
	}
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_receivingAssets = (jint(0));
	LINE_NUMBER(971);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	((func_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player])(ctx, sp[0].o, (frame[0].o));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(973);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(974);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(975);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size));
	frame[4].o = sp[0].o;
	LINE_NUMBER(976);
	frame[5].o = (frame[1].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_12:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_13;
	}
	{
	frame[8].i = ((jint)ARRAY_ACCESS(jshort, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(977);
	if ((frame[8].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_15;
	}
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_15;
	{
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[4].o), (frame[8].i));
	if (temp0 == 0) goto label_16;
	}
	goto label_15;
label_16:;
	{
	LINE_NUMBER(978);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[4].o), (frame[8].i));
	LINE_NUMBER(979);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[8].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[1].o)));
	}
label_15:;
	{
	LINE_NUMBER(976);
	INST_IINC(7, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(983);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_java_lang_Runnable_4);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	LINE_NUMBER(996);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_connectConfirm_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:connectConfirm", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1000);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_kicked) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1002);
	((func_mindustry_gen_Player_add) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_add])(ctx, (frame[0].o));
	LINE_NUMBER(1004);
	clinit_mindustry_game_EventType$PlayerConnectionConfirmed(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerConnectionConfirmed);
	init_mindustry_game_EventType$PlayerConnectionConfirmed_mindustry_gen_Player(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected) == 0) goto label_5;
	}
label_4:;
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected = (jint(1));
	LINE_NUMBER(1010);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_showConnectMessages;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001[accent] has connected."_j.string, 1, sp[0].o);
	SM_mindustry_gen_Call_sendMessage_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1012);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"&lb@&fi&lk has connected. &fi&lk[&lb@&fi&lk]"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_mindustry_gen_Player_plainName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_plainName_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1013);
	SM_arc_util_Log_info_java_lang_Object(ctx, (frame[1].o));
	}
label_7:;
	{
	LINE_NUMBER(1016);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_motd;
	sp[0].o = (jobject)((func_mindustry_net_Administration$Config_string_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_string_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"off"_j))));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(1017);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Administration$Config(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$Config_motd;
	sp[1].o = (jobject)((func_mindustry_net_Administration$Config_string_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration$Config_string_R_java_lang_String])(ctx, sp[1].o);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(1020);
	clinit_mindustry_game_EventType$PlayerJoin(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerJoin);
	init_mindustry_game_EventType$PlayerJoin_mindustry_gen_Player(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_kicked) != 0) goto label_14;
	}
	{
	LINE_NUMBER(1025);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_deathTimer = (jfloat(60.0f));
	LINE_NUMBER(1026);
	((func_mindustry_gen_Player_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_update])(ctx, (frame[0].o));
	}
label_14:;
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_core_NetServer_isWaitingForPlayers_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:isWaitingForPlayers", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1031);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	jint temp0 = (jint)((func_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1032);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1033);
	frame[1].i = (jint(0));
	LINE_NUMBER(1034);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(1035);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_13);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 <= 0) goto label_8;
	}
	LINE_NUMBER(1036);
	INST_IINC(1, 1);
label_8:;
	LINE_NUMBER(1038);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(1039);
	if ((frame[1].i) >= (jint(2))) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1046);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_closing) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1047);
	((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_closing = (jint(1));
	LINE_NUMBER(1048);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_show_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@server.closing"_j))));
	LINE_NUMBER(1049);
	jfloat temp0 = jfloat(5.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(1056);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1057);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) == 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvpAutoPause) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1058);
	jint temp0 = (jint)((func_mindustry_core_NetServer_isWaitingForPlayers_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_isWaitingForPlayers_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	frame[2].i = temp1;
	LINE_NUMBER(1059);
	if ((frame[1].i) == (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(1060);
	if ((frame[1].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1062);
	((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_pvpAutoPaused = (jint(1));
	LINE_NUMBER(1063);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_paused;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	goto label_7;
	}
label_12:;
	{
	LINE_NUMBER(1064);
	if (((jint)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_pvpAutoPaused) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1066);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1067);
	((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_pvpAutoPaused = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(1072);
	((func_mindustry_core_NetServer_sync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_sync])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(1074);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:buildHealthUpdate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_buildHealthChanged;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1080);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_openServer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:openServer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_BindException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1085);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	clinit_mindustry_net_Administration$Config(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$Config_port;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[1].o);
	((func_mindustry_net_Net_host_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_host_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1086);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Opened a server on port @."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$Config_port;
	jint temp2 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp2);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1093);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1087);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1088);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_port;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Unable to host: Port \u0001 already in use! Make sure no other servers are running on the same port in your network."_j.string, 1, boxInteger(ctx, temp0));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1089);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1093);
	goto label_7;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1090);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1091);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	LINE_NUMBER(1092);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(1094);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_kickAll_mindustry_net_Packets$KickReason(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:kickAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1097);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[0].o = (jobject)((func_mindustry_net_Net_getConnections_R_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_getConnections_R_java_lang_Iterable])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_net_NetConnection, sp[0].o));
	LINE_NUMBER(1098);
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(1099);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_writeBlockSnapshots(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:writeBlockSnapshots", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1104);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(1106);
	frame[1].i = (jint(0));
	LINE_NUMBER(1107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(1108);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_synced;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1109);
	frame[1].i = (jshort(((frame[1].i) + (jint(1)))));
	LINE_NUMBER(1111);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[5].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1112);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(1113);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStreamWrites;
	((func_mindustry_gen_Building_writeSync_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_writeSync_arc_util_io_Writes])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1115);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	jint temp1 = (jint)((func_arc_util_io_ReusableByteOutStream_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_size_R_int])(ctx, sp[0].o);
	if (temp1 <= (800)) goto label_13;
	}
	{
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(1117);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	sp[0].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[0].o);
	SM_mindustry_gen_Call_blockSnapshot_short_Array1_byte(ctx, temp0, sp[0].o);
	LINE_NUMBER(1118);
	frame[1].i = (jint(0));
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	}
label_13:;
	LINE_NUMBER(1121);
	goto label_6;
label_7:;
	LINE_NUMBER(1122);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(1124);
	if ((frame[1].i) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(1125);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(1126);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	sp[0].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[0].o);
	SM_mindustry_gen_Call_blockSnapshot_short_Array1_byte(ctx, temp0, sp[0].o);
	}
label_18:;
	LINE_NUMBER(1128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_writeStateSnapshot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:writeStateSnapshot", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1131);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getFramesPerSecond_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getFramesPerSecond_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (255));
	frame[1].i = (jbyte(temp1));
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(1133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_14);
		sp[1].o = (jobject) proxy;
	}
	jint temp2 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[2].i = (jbyte(temp2));
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(1136);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_dataWrites;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((arc_util_io_Writes *) NULL_CHECK(sp[0].o))->F_output = (jref) sp[1].o;
	LINE_NUMBER(1139);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_team;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(1142);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o))))->F_items;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_dataWrites;
	((func_mindustry_world_modules_ItemModule_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_write_arc_util_io_Writes])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	LINE_NUMBER(1144);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(1146);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(1148);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jfloat temp0 = (jfloat)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wavetime;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp2 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp3 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp4 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	LINE_NUMBER(1149);
	jint temp5 = (jint)((func_mindustry_game_Universe_seconds_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_seconds_R_int])(ctx, sp[0].o);
	jint temp6 = frame[1].i;
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_rand;
	jlong temp7 = (jlong)((arc_math_Rand *) NULL_CHECK(sp[0].o))->F_seed0;
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_rand;
	jlong temp8 = (jlong)((arc_math_Rand *) NULL_CHECK(sp[0].o))->F_seed1;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	sp[0].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[0].o);
	LINE_NUMBER(1148);
	SM_mindustry_gen_Call_stateSnapshot_float_int_int_boolean_boolean_int_byte_long_long_Array1_byte(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, sp[0].o);
	LINE_NUMBER(1150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_writeEntitySnapshotsAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:writeEntitySnapshotsAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(1156);
	frame[1].i = (jint(0));
	LINE_NUMBER(1158);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Syncc, sp[0].o));
	LINE_NUMBER(1159);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1161);
	INST_IINC(1, 1);
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	jint temp0 = (jint)((func_arc_util_io_ReusableByteOutStream_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (800)) goto label_8;
	}
	{
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(1165);
	jint temp0 = jshort((frame[1].i));
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	sp[0].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[0].o);
	SM_mindustry_gen_Call_entitySnapshot_short_Array1_byte(ctx, temp0, sp[0].o);
	LINE_NUMBER(1166);
	frame[1].i = (jint(0));
	LINE_NUMBER(1167);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(1169);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(1171);
	if ((frame[1].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(1174);
	jint temp0 = jshort((frame[1].i));
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	sp[0].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[0].o);
	SM_mindustry_gen_Call_entitySnapshot_short_Array1_byte(ctx, temp0, sp[0].o);
	}
label_13:;
	LINE_NUMBER(1176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_writeEntitySnapshotsTeam_mindustry_game_Team_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:writeEntitySnapshotsTeam", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1180);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(1182);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_hiddenIds;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(1183);
	frame[3].i = (jint(0));
	LINE_NUMBER(1184);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_tempConnections;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1186);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(1188);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_tempConnections;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[5].o)))->F_con;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1189);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1191);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Syncc, sp[0].o));
	LINE_NUMBER(1192);
	jint temp0 = (jint)((func_mindustry_gen_Syncc_isSyncHidden_mindustry_game_Team_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Syncc, INDEX_mindustry_gen_Syncc_isSyncHidden_mindustry_game_Team_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[1].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(1193);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_hiddenIds;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[5].o)))(ctx, (frame[5].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1194);
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(1197);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1199);
	INST_IINC(3, 1);
	LINE_NUMBER(1201);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	jint temp0 = (jint)((func_arc_util_io_ReusableByteOutStream_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (800)) goto label_17;
	}
	{
	LINE_NUMBER(1202);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(1203);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_tempConnections;
	jint temp0 = jshort((frame[3].i));
	sp[2].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	sp[2].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[2].o);
	((func_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(1204);
	frame[3].i = (jint(0));
	LINE_NUMBER(1205);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	}
label_17:;
	LINE_NUMBER(1207);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(1209);
	if ((frame[3].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(1210);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(1211);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_tempConnections;
	jint temp0 = jshort((frame[3].i));
	sp[2].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	sp[2].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[2].o);
	((func_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_22:;
	{
	LINE_NUMBER(1214);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_hiddenIds;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(1215);
	clinit_mindustry_gen_HiddenSnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_HiddenSnapshotCallPacket);
	init_mindustry_gen_HiddenSnapshotCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1216);
	sp[0].o = frame[4].o;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_hiddenIds;
	((mindustry_gen_HiddenSnapshotCallPacket *) NULL_CHECK(sp[0].o))->F_ids = (jref) sp[1].o;
	LINE_NUMBER(1217);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_tempConnections;
	((func_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	}
label_25:;
	LINE_NUMBER(1219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte(jcontext ctx, jobject self, jobject param0, jshort param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:sendEntitySnapshots", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1222);
	clinit_mindustry_gen_EntitySnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_EntitySnapshotCallPacket);
	init_mindustry_gen_EntitySnapshotCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1223);
	((mindustry_gen_EntitySnapshotCallPacket *) NULL_CHECK((frame[4].o)))->F_amount = (frame[2].i);
	LINE_NUMBER(1224);
	((mindustry_gen_EntitySnapshotCallPacket *) NULL_CHECK((frame[4].o)))->F_data = (jref) (frame[3].o);
	LINE_NUMBER(1225);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean])(ctx, sp[0].o, (frame[4].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(1226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_writeCustomEntitySnapshot_mindustry_gen_Player_java_lang_Iterable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:writeCustomEntitySnapshot", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1230);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(1232);
	frame[3].i = (jint(0));
	LINE_NUMBER(1234);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Syncc, sp[0].o));
	LINE_NUMBER(1235);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1237);
	INST_IINC(3, 1);
	LINE_NUMBER(1239);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	jint temp0 = (jint)((func_arc_util_io_ReusableByteOutStream_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (800)) goto label_8;
	}
	{
	LINE_NUMBER(1240);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(1241);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	jint temp0 = jshort((frame[3].i));
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	sp[1].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[1].o);
	SM_mindustry_gen_Call_entitySnapshot_mindustry_net_NetConnection_short_Array1_byte(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(1242);
	frame[3].i = (jint(0));
	LINE_NUMBER(1243);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(1245);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(1247);
	if ((frame[3].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(1248);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStream;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(1250);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	jint temp0 = jshort((frame[3].i));
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_syncStream;
	sp[1].o = (jobject)((func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte])(ctx, sp[1].o);
	SM_mindustry_gen_Call_entitySnapshot_mindustry_net_NetConnection_short_Array1_byte(ctx, sp[0].o, temp0, sp[1].o);
	}
label_13:;
	LINE_NUMBER(1252);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:writeEntity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1255);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1256);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_mindustry_gen_Entityc_classId_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_classId_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, (temp1 & (255)));
	LINE_NUMBER(1257);
	((func_mindustry_gen_Entityc_beforeWrite) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_beforeWrite, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(1258);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_dataStreamWrites;
	((func_mindustry_gen_Syncc_writeSync_arc_util_io_Writes) resolveInterfaceMethod(ctx, &class_mindustry_gen_Syncc, INDEX_mindustry_gen_Syncc_writeSync_arc_util_io_Writes, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_NetServer_fixName_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:fixName", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1262);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\t"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1263);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"["_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"]"_j))));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1264);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_3:;
	{
	LINE_NUMBER(1267);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(1268);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	if (temp0 != (91)) goto label_7;
	}
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 == (temp1 - (jint(1)))) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	if (temp0 == (91)) goto label_7;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_8;
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[2].i) - (jint(1))));
	if (temp0 == (91)) goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1269);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1270);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1271);
	sp[0].o = (jobject)((func_mindustry_core_NetServer_checkColor_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_checkColor_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1273);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, (frame[3].o), (frame[5].o));
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1267);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1277);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1278);
	frame[3].i = (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(1279);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	clinit_arc_util_Strings(ctx);
	sp[1].o = (jobject)SF_arc_util_Strings_utf8;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (40)) goto label_14;
	}
	{
	LINE_NUMBER(1280);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1282);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_NetServer_checkColor_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:checkColor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1286);
	frame[2].i = (jint(1));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(1287);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	if (temp0 != (93)) goto label_8;
	}
	{
	LINE_NUMBER(1288);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1290);
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_arc_graphics_Colors_get_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_arc_graphics_Colors_get_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_0;
	}
label_11:;
	{
	LINE_NUMBER(1291);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_arc_graphics_Colors_get_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_arc_graphics_Colors_get_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	sp += 1;
	goto label_13;
	}
label_12:;
	{
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_arc_graphics_Colors_get_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1292);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a), (jfloat(1)), 1)) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(1293);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	LINE_NUMBER(1295);
	goto label_8;
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1297);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1298);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a), (jfloat(1)), 1)) >= 0) { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(1299);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_18:;
	LINE_NUMBER(1303);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1301);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1302);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_8:;
	{
	LINE_NUMBER(1286);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1307);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_sync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:sync", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1312);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_snapshotInterval;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(1313);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_15);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons_9);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1319);
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_snapshotSyncTime));
	if ((longCompare(temp1, (jlong((frame[1].i))))) < 0) goto label_6;
	}
	{
	LINE_NUMBER(1320);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_snapshotSyncTime = temp0;
	LINE_NUMBER(1322);
	((func_mindustry_core_NetServer_writeStateSnapshot) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_writeStateSnapshot])(ctx, (frame[0].o));
	LINE_NUMBER(1324);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_10;
	}
	{
	LINE_NUMBER(1326);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_13;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1327);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1328);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_playersToSend;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_players;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_16(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_16 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_16);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1329);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_playersToSend;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(1330);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_playersToSend;
	((func_mindustry_core_NetServer_writeEntitySnapshotsTeam_mindustry_game_Team_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_writeEntitySnapshotsTeam_mindustry_game_Team_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_17:;
	{
	LINE_NUMBER(1326);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	goto label_19;
label_10:;
	{
	LINE_NUMBER(1335);
	((func_mindustry_core_NetServer_writeEntitySnapshotsAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_writeEntitySnapshotsAll])(ctx, (frame[0].o));
	}
label_19:;
	{
	LINE_NUMBER(1339);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(1340);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[3].o)))->F_con;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[3].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[3].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_localEntities;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(1341);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[3].o)))->F_con;
	sp[2].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[2].o))->F_localEntities;
	((func_mindustry_core_NetServer_writeCustomEntitySnapshot_mindustry_gen_Player_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_writeCustomEntitySnapshot_mindustry_gen_Player_java_lang_Iterable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_22:;
	LINE_NUMBER(1343);
	goto label_20;
label_6:;
	{
	LINE_NUMBER(1347);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_24;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blocksync"_j))));
	if (temp0 == 0) goto label_24;
	}
	{
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_blockSyncTime;
	jint temp0 = (jint)((func_arc_util_Timekeeper_poll_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timekeeper_poll_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(1348);
	((func_mindustry_core_NetServer_writeBlockSnapshots) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_writeBlockSnapshots])(ctx, (frame[0].o));
	}
label_24:;
	{
	LINE_NUMBER(1351);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_buildHealthChanged;
	if (((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_26;
	}
	{
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_healthSyncTime;
	jint temp0 = (jint)((func_arc_util_Timekeeper_poll_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timekeeper_poll_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(1352);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_healthSeq;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(1354);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_buildHealthChanged;
	sp[0].o = (jobject)((func_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(1355);
	if (((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[2].o)))->F_hasNext) == 0) goto label_30;
	}
	{
	LINE_NUMBER(1356);
	jint temp0 = (jint)((func_arc_struct_IntSet$IntSetIterator_next_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntSet$IntSetIterator_next_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(1357);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1360);
	if ((frame[4].o) == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(1361);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_healthSeq;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_health));
	((func_arc_struct_IntSeq_add_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_34:;
	{
	LINE_NUMBER(1365);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_healthSeq;
	if ((((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) * (jint(4))) < (800)) goto label_36;
	}
	{
	LINE_NUMBER(1366);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_healthSeq;
	SM_mindustry_gen_Call_buildHealthUpdate_arc_struct_IntSeq(ctx, sp[0].o);
	LINE_NUMBER(1367);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_healthSeq;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	}
label_36:;
	LINE_NUMBER(1369);
	goto label_29;
label_30:;
	{
	LINE_NUMBER(1372);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_healthSeq;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_39;
	}
	{
	LINE_NUMBER(1373);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_healthSeq;
	SM_mindustry_gen_Call_buildHealthUpdate_arc_struct_IntSeq(ctx, sp[0].o);
	}
label_39:;
	{
	LINE_NUMBER(1376);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_buildHealthChanged;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	}
label_26:;
	{
	LINE_NUMBER(1380);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_1;
	}
	{
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_planPreviewSyncTime;
	jint temp0 = (jint)((func_arc_util_Timekeeper_poll_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timekeeper_poll_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1382);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_42;
	}
	{
	LINE_NUMBER(1383);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_previewPlansCurrent;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1384);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_previewPlansCurrent;
	((func_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1385);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_previewPlansCurrent;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (1000));
	}
label_42:;
	{
	LINE_NUMBER(1388);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons_10);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1422);
	goto label_46;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1420);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1421);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_46:;
	LINE_NUMBER(1423);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_clientPlanSnapshotSend_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:clientPlanSnapshotSend", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1428);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(1429);
	if ((frame[4].o) == (frame[0].o)) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[4].o)))->F_con;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[4].o)))->F_con;
	jint temp0 = (jint)((func_mindustry_net_NetConnection_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1430);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[4].o)))->F_con;
	SM_mindustry_gen_Call_clientPlanSnapshotReceived_mindustry_net_NetConnection_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(1432);
	goto label_1;
label_2:;
	LINE_NUMBER(1433);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_lambda$sync$3_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$sync$3", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1389);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastPreviewPlanGroupServer) + (jint(1));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastPreviewPlanGroupServer = temp0;
	frame[1].i = temp0;
	LINE_NUMBER(1390);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_plansOut;
	sp[0].o = (jobject)((func_mindustry_io_TypeIO$ClientBuildPlans_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_TypeIO$ClientBuildPlans_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1392);
	sp[0].o = (jobject)((func_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1394);
	jint temp3 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp3 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1395);
	SM_mindustry_core_NetServer_clientPlanSnapshotSend_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1397);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_items;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_mindustry_entities_units_BuildPlan, 1), sp[0].o));
	LINE_NUMBER(1398);
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	LINE_NUMBER(1402);
	frame[5].i = (75);
	LINE_NUMBER(1404);
	if ((frame[4].i) >= (75)) goto label_10;
	}
	{
	LINE_NUMBER(1405);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_plansOut;
	((func_mindustry_io_TypeIO$ClientBuildPlans_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_TypeIO$ClientBuildPlans_set_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(1406);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_plansOut;
	SM_mindustry_core_NetServer_clientPlanSnapshotSend_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(ctx, sp[0].o, temp0, sp[1].o);
	goto label_6;
	}
label_10:;
	{
	LINE_NUMBER(1408);
	frame[6].i = (jint(0));
	}
label_13:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(1409);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[6].i) + (75)), (frame[4].i));
	frame[7].i = (temp0 - (frame[6].i));
	LINE_NUMBER(1410);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_plansOut;
	sp[0].o = (jobject)((func_mindustry_io_TypeIO$ClientBuildPlans_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_TypeIO$ClientBuildPlans_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(1411);
	sp[0].o = frame[3].o;
	jint temp1 = frame[6].i;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_plansOut;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (jint(0)), (frame[7].i));
	LINE_NUMBER(1412);
	clinit_mindustry_core_NetServer(ctx);
	sp[0].o = (jobject)SF_mindustry_core_NetServer_plansOut;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (frame[7].i);
	LINE_NUMBER(1414);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = (jobject)SF_mindustry_core_NetServer_plansOut;
	SM_mindustry_core_NetServer_clientPlanSnapshotSend_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(ctx, sp[0].o, temp2, sp[1].o);
	LINE_NUMBER(1408);
	INST_IINC(6, 75);
	goto label_13;
	}
label_6:;
	LINE_NUMBER(1418);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$sync$2_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$sync$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1328);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_hasConnected) == 0) goto label_1;
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

void SM_mindustry_core_NetServer_lambda$sync$1_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$sync$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1314);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	jint temp0 = (jint)((func_mindustry_net_NetConnection_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1315);
	SM_mindustry_core_NetServer_onDisconnect_mindustry_gen_Player_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"disappeared"_j))));
	}
label_2:;
	LINE_NUMBER(1317);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$sync$0_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$sync$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1313);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool SM_mindustry_core_NetServer_lambda$writeStateSnapshot$0_mindustry_game_Teams$TeamData_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$writeStateSnapshot$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
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

void M_mindustry_core_NetServer_lambda$update$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1050);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_closeServer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_closeServer])(ctx, sp[0].o);
	LINE_NUMBER(1051);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(1052);
	((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_closing = (jint(0));
	LINE_NUMBER(1053);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$isWaitingForPlayers$0_mindustry_game_Teams$TeamData_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$isWaitingForPlayers$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1035);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
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

void SM_mindustry_core_NetServer_lambda$requestAssets$0_arc_struct_Seq_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$requestAssets$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(985);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(986);
	SM_mindustry_net_NetworkIO_writeAssets_java_io_OutputStream_arc_struct_Seq(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(988);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Packed @ of asset data to @ (@ / @)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_io_ByteArrayOutputStream_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_size_R_int])(ctx, (frame[2].o));
	sp[2].o = (jobject)SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(ctx, (jlong(temp1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp2 = jint(1);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(2);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	sp[2].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[2].o))->F_address;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(3);
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(990);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	clinit_mindustry_net_Packets$AssetStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_Packets$AssetStream);
	init_mindustry_net_Packets$AssetStream(ctx, sp[1].o);
	((func_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(993);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(991);
	frame[2].o = sp[0].o;
	LINE_NUMBER(992);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	}
label_7:;
	LINE_NUMBER(994);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_lambda$clientSnapshot$1_mindustry_entities_units_BuildPlan_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$clientSnapshot$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(827);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(828);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[1].o)))->F_rotation = ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(829);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_config;
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	LINE_NUMBER(830);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$clientSnapshot$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$clientSnapshot$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(824);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking)) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x)) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y)) goto label_1;
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

void SM_mindustry_core_NetServer_lambda$sendAssetRequirements$0_arc_struct_Seq_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$sendAssetRequirements$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(541);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(542);
	clinit_arc_util_io_FastDeflaterOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_FastDeflaterOutputStream);
	init_arc_util_io_FastDeflaterOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[2].o));
	SM_mindustry_net_NetworkIO_writeRequiredAssets_java_io_OutputStream_arc_struct_Seq(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	clinit_mindustry_net_Packets$AssetRequirementStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_net_Packets$AssetRequirementStream);
	init_mindustry_net_Packets$AssetRequirementStream(ctx, sp[1].o);
	((func_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_lambda$registerCommands$13_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$13", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(511);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(512);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]Re-synchronizing as the host is pointless."_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[1].o));
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_lastSyncTime));
	if ((longCompare(temp0, (jlong(5000ll)))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(515);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]You may only /sync every 5 seconds."_j))));
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[1].o));
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_lastSyncTime = temp0;
	LINE_NUMBER(520);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	SM_mindustry_gen_Call_worldDataBegin_mindustry_net_NetConnection(ctx, sp[0].o);
	LINE_NUMBER(521);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	((func_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player])(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	LINE_NUMBER(523);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_lambda$registerCommands$12_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$12", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(465);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]Nobody is being voted on."_j))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(467);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_admin) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"c"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(468);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[lightgray]Vote canceled by admin[orange] @[lightgray]."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	SM_mindustry_gen_Call_sendMessage_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(469);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking;
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_task;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(470);
	((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking = (jref) (jobject(nullptr));
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(474);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(475);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]Local players can't vote. Kick the player yourself instead."_j))));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	frame[4].o = sp[0].o;
	frame[5].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[4].o));
	switch(temp0) {
		case 110: goto label_14;
		case 121: goto label_15;
		case 3521: goto label_16;
		case 119527: goto label_17;
		default: goto label_18;
	}
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"y"_j))));
	if (temp0 == 0) goto label_18;
	}
	{
	frame[5].i = (jint(0));
	goto label_18;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"yes"_j))));
	if (temp0 == 0) goto label_18;
	}
	{
	frame[5].i = (jint(1));
	goto label_18;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"n"_j))));
	if (temp0 == 0) goto label_18;
	}
	{
	frame[5].i = (jint(2));
	goto label_18;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"no"_j))));
	if (temp0 == 0) goto label_18;
	}
	INST_ICONST(3);
	INST_ISTORE(5);
label_18:;
	INST_ILOAD(5);
	switch((--sp)->i) {
		case 0: goto label_19;
		case 1: goto label_19;
		case 2: goto label_20;
		case 3: goto label_20;
		default: goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(480);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(481);
	jint temp0 = jint(-1);
	sp[0].i = temp0;
	sp += 1;
	goto label_22;
	}
label_21:;
	LINE_NUMBER(482);
	INST_ICONST(0);
label_22:;
	{
	sp -= 1;
	LINE_NUMBER(479);
	frame[3].i = sp[0].i;
	LINE_NUMBER(486);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking;
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_voted;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(2)));
	if (temp0 == (frame[3].i)) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking;
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_voted;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[2].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[1].o))->F_lastIP;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(2)));
	if (temp0 != (frame[3].i)) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(487);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"[scarlet]You've already voted @. Sit down."_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[1].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking;
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_target;
	if (sp[0].o != (frame[2].o)) goto label_27;
	}
	{
	LINE_NUMBER(492);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]You can't vote on your own trial."_j))));
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return;
	}
label_27:;
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking;
	sp[0].o = (jobject)((mindustry_core_NetServer$VoteSession *) NULL_CHECK(sp[0].o))->F_target;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	if (sp[0].o == sp[1].o) goto label_30;
	}
	{
	LINE_NUMBER(497);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]You can't vote for other teams."_j))));
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return;
	}
label_30:;
	{
	LINE_NUMBER(501);
	if ((frame[3].i) != 0) goto label_33;
	}
	{
	LINE_NUMBER(502);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]Vote either 'y' (yes) or 'n' (no)."_j))));
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return;
	}
label_33:;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking;
	((func_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int])(ctx, sp[0].o, (frame[2].o), (frame[3].i));
	}
label_3:;
	LINE_NUMBER(508);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_lambda$registerCommands$6_arc_struct_ObjectMap_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$6", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(395);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_enableVotekick;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(396);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]Vote-kick is disabled on this server."_j))));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(400);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	if (temp0 >= (jint(3))) goto label_4;
	}
	{
	LINE_NUMBER(401);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]At least 3 players are needed to start a votekick."_j))));
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(405);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(406);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]Just kick them yourself if you're the host."_j))));
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(411);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]A vote is already in progress."_j))));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(415);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_13;
	}
	{
	LINE_NUMBER(416);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"[orange]Players to kick: \n"_j))));
	LINE_NUMBER(419);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_17(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_17 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_17);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(422);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(423);
	goto label_19;
	}
label_13:;
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != (jint(1))) goto label_20;
	}
	{
	LINE_NUMBER(424);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[orange]You need a valid reason to kick the player. Add a reason after the player name."_j))));
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(427);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	if (temp0 <= (jint(1))) goto label_22;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (jint(1)));
	jint temp0 = (jint)SM_arc_util_Strings_canParseInt_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (jint(1)));
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(429);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_18(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_18 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_18);
		proxy->F_field0 = (frame[5].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(430);
	goto label_26;
	}
label_22:;
	{
	LINE_NUMBER(431);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_19);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	}
label_26:;
	{
	LINE_NUMBER(434);
	if ((frame[4].o) == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(435);
	if ((frame[4].o) != (frame[3].o)) goto label_29;
	}
	{
	LINE_NUMBER(436);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]You can't vote to kick yourself."_j))));
	goto label_19;
	}
label_29:;
	{
	LINE_NUMBER(437);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[4].o)))->F_admin) == 0) goto label_31;
	}
	{
	LINE_NUMBER(438);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]Did you really expect to be able to kick an admin?"_j))));
	goto label_19;
	}
label_31:;
	{
	LINE_NUMBER(439);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(440);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]Local players cannot be kicked."_j))));
	goto label_19;
	}
label_33:;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[3].o));
	if (sp[0].o == sp[1].o) goto label_35;
	}
	{
	LINE_NUMBER(442);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]Only players on your team can be kicked."_j))));
	goto label_19;
	}
label_35:;
	{
	LINE_NUMBER(444);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Prov_11(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Prov_11);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = (checkCast(ctx, &class_arc_util_Timekeeper, sp[0].o));
	LINE_NUMBER(446);
	jint temp0 = (jint)((func_arc_util_Timekeeper_get_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_Timekeeper_get_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_38;
	}
	{
	LINE_NUMBER(447);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[scarlet]You must wait \u0001 minutes between votekicks."_j.string, 1, boxInteger(ctx, ((clinit_mindustry_core_NetServer(ctx), (jint)SF_mindustry_core_NetServer_voteCooldown) / (60))));
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return;
	}
label_38:;
	{
	LINE_NUMBER(451);
	clinit_mindustry_core_NetServer$VoteSession(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_NetServer$VoteSession);
	init_mindustry_core_NetServer$VoteSession_mindustry_core_NetServer_mindustry_gen_Player(ctx, sp[0].o, (frame[0].o), (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(452);
	((func_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_core_NetServer$VoteSession_vote_mindustry_gen_Player_int])(ctx, (frame[6].o), (frame[3].o), (jint(1)));
	LINE_NUMBER(453);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[lightgray]Reason:[orange] @[lightgray]."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1))));
	sp[0].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	SM_mindustry_gen_Call_sendMessage_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(454);
	((func_arc_util_Timekeeper_reset) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_Timekeeper_reset])(ctx, (frame[5].o));
	LINE_NUMBER(455);
	((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_currentlyKicking = (jref) (frame[6].o);
	LINE_NUMBER(456);
	goto label_19;
	}
label_27:;
	{
	LINE_NUMBER(458);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[scarlet]No player [orange]'\u0001'[scarlet] found."_j.string, 1, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	LINE_NUMBER(461);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_core_NetServer_lambda$registerCommands$11_R_arc_util_Timekeeper(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$11", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper(ctx, (jfloat((clinit_mindustry_core_NetServer(ctx), (jint)SF_mindustry_core_NetServer_voteCooldown))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$registerCommands$10_Array1_java_lang_String_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$registerCommands$9_int_mindustry_gen_Player_R_boolean(jcontext ctx, jint param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(429);
	jint temp0 = (jint)((func_mindustry_gen_Player_id_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_id_R_int])(ctx, (frame[1].o));
	if (temp0 != (frame[0].i)) goto label_1;
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

void SM_mindustry_core_NetServer_lambda$registerCommands$8_java_lang_StringBuilder_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"[lightgray] "_j))));
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[accent] (#"_j))));
	jint temp0 = (jint)((func_mindustry_gen_Player_id_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_id_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")\n"_j))));
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$registerCommands$7_mindustry_gen_Player_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(419);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_admin) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((frame[1].o) == (frame[0].o)) goto label_1;
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

void M_mindustry_core_NetServer_lambda$registerCommands$4_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$4", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(382);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_admin) != 0) goto label_1;
	}
	{
	LINE_NUMBER(383);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]You must be an admin to use this command."_j))));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(387);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_adminChat;
	sp[0].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_chatFormatter;
	sp[1].o = (jobject)((func_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_core_NetServer$ChatFormatter, INDEX_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String, sp[1].o))(ctx, sp[1].o, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]<A> \u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(388);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_20(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_20 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_20);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons_12);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_lambda$registerCommands$5_java_lang_String_mindustry_gen_Player_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$5", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(388);
	((func_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String])(ctx, (frame[3].o), (frame[0].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_lambda$registerCommands$1_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[0].o = (jobject)((func_mindustry_net_Administration_filterMessage_mindustry_gen_Player_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_filterMessage_mindustry_gen_Player_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(375);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_chatFormatter;
	sp[1].o = (jobject)((func_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_core_NetServer$ChatFormatter, INDEX_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String, sp[1].o))(ctx, sp[1].o, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]<T> \u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(377);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_21);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Cons_13);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	LINE_NUMBER(379);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_lambda$registerCommands$3_java_lang_String_mindustry_gen_Player_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(377);
	((func_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String])(ctx, (frame[3].o), (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$registerCommands$2_mindustry_gen_Player_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
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

void M_mindustry_core_NetServer_lambda$registerCommands$0_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$registerCommands$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(348);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_util_Strings_canParseInt_java_lang_String_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(349);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]'page' must be a number."_j))));
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(352);
	frame[3].i = (6);
	LINE_NUMBER(353);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ICONST(1);
label_6:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	sp[0].o = (jobject)((func_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp0 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat((frame[3].i)))));
	frame[5].i = temp0;
	LINE_NUMBER(356);
	INST_IINC(4, -1);
	LINE_NUMBER(358);
	if ((frame[4].i) >= (frame[5].i)) goto label_10;
	}
	INST_ILOAD(4);
	if ((--sp)->i >= 0) goto label_11;
label_10:;
	{
	LINE_NUMBER(359);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[scarlet]'page' must be a number between[orange] 1[] and[orange] \u0001[scarlet]."_j.string, 1, boxInteger(ctx, (frame[5].i)));
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(363);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(364);
	sp[0].o = frame[6].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"[orange]-- Commands Page[lightgray] @[gray]/[lightgray]@[orange] --\n\n"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((frame[4].i) + (jint(1))));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[5].i));
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	sp[1].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(366);
	frame[7].i = ((frame[3].i) * (frame[4].i));
	}
label_15:;
	{
	jint temp0 = frame[7].i;
	jint temp1 = (frame[3].i) * ((frame[4].i) + (jint(1)));
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	sp[0].o = (jobject)((func_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	if (temp0 >= temp2) goto label_16;
	}
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	sp[0].o = (jobject)((func_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_arc_util_CommandHandler$Command, sp[0].o));
	LINE_NUMBER(368);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"[orange] /"_j))));
	sp[1].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[8].o)))->F_text;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[white] "_j))));
	sp[1].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[8].o)))->F_paramText;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[lightgray] - "_j))));
	sp[1].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[8].o)))->F_description;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(366);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(370);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_lambda$init$0_mindustry_mod_Mod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$init$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(343);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_clientCommands;
	((func_mindustry_mod_Mod_registerClientCommands_arc_util_CommandHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mod_registerClientCommands_arc_util_CommandHandler])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_lambda$new$6_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$new$6", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(159);
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_kicked) == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_address;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steam:"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_address;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"steam:"_j))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"steam:"_j))));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, temp0);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_uuid = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(165);
	clinit_mindustry_game_EventType$ConnectPacketEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ConnectPacketEvent);
	init_mindustry_game_EventType$ConnectPacketEvent_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(167);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_connectTime = temp0;
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_uuid;
	frame[3].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_address;
	jint temp1 = (jint)((func_mindustry_net_Administration_isIPBanned_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isIPBanned_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_address;
	jint temp0 = (jint)((func_mindustry_net_Administration_isSubnetBanned_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isSubnetBanned_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_11;
	}
	{
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_kicked) != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_net_NetConnection_isConnected_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_NetConnection_isConnected_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_12;
	}
label_11:;
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_address;
	sp[2].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_uuid;
	jint temp0 = (jint)((func_mindustry_net_Administration_checkUuidChanges_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_checkUuidChanges_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Banning IP @ due to more than @ ID changes in @ hour(s)."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_address;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$Config_uuidChangeLimit;
	jint temp2 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp2);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp3 = jint(2);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$Config_uuidChangeTimePeriod;
	jint temp4 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp4);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(175);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_banned;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(179);
	if (((jint)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_hasBegunConnecting) == 0) goto label_17;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_idInUse;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}
label_17:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[0].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(186);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_hasBegunConnecting = (jint(1));
	LINE_NUMBER(187);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_mobile = ((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_mobile);
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_uuid;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_usid;
	if (sp[0].o != nullptr) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_idInUse;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	jint temp0 = (jint)((func_mindustry_net_Administration_isIDBanned_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isIDBanned_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 != 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_mindustry_net_Administration_isNameBanned_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isNameBanned_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_banned;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}
label_27:;
	{
	LINE_NUMBER(200);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_address;
	jlong temp1 = (jlong)((func_mindustry_net_Administration_getKickTime_java_lang_String_java_lang_String_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_getKickTime_java_lang_String_java_lang_String_R_long])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if ((longCompare(temp0, temp1)) >= 0) goto label_29;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_recentKick;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}
label_29:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	jint temp0 = (jint)((func_mindustry_net_Administration_getPlayerLimit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_getPlayerLimit_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_32;
	}
	{
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	jint temp1 = (jint)((func_mindustry_net_Administration_getPlayerLimit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_getPlayerLimit_R_int])(ctx, sp[0].o);
	if (temp0 < temp1) goto label_32;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_usid;
	jint temp0 = (jint)((func_mindustry_net_Administration_isAdmin_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isAdmin_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_32;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_playerLimit;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}
label_32:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_mods;
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(211);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_getIncompatibility_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_getIncompatibility_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(213);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_37;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_38;
	}
label_37:;
	{
	LINE_NUMBER(215);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[accent]Incompatible mods![]\n\n"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_40;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"Missing:[lightgray]\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"> "_j))));
	sp[1].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"\n> "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"[]\n"_j))));
	}
label_40:;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_43;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"Unnecessary mods:[lightgray]\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"> "_j))));
	sp[1].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"\n> "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_43:;
	{
	LINE_NUMBER(224);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[7].o));
	((func_mindustry_net_NetConnection_kick_java_lang_String_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String_long])(ctx, sp[0].o, sp[1].o, (jlong(0)));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}
label_38:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_uuid;
	sp[2].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_usid;
	jint temp0 = (jint)((func_mindustry_net_Administration_isWhitelisted_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isWhitelisted_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_46;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_usid;
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_adminUsid = (jref) sp[1].o;
	LINE_NUMBER(230);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_name;
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_lastName = (jref) sp[1].o;
	LINE_NUMBER(231);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_uuid;
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, sp[0].o);
	LINE_NUMBER(233);
	SM_mindustry_gen_Call_infoMessage_mindustry_net_NetConnection_java_lang_String(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"You are not whitelisted here."_j))));
	LINE_NUMBER(234);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"&lcDo &lywhitelist add @&lc to whitelist the player &lb'@'"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_uuid;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_whitelist;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}
label_46:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_versionType;
	if (sp[0].o == nullptr) goto label_55;
	}
	{
	if (((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_version) == (jint(-1))) goto label_56;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_versionType;
	clinit_mindustry_core_Version(ctx);
	sp[1].o = (jobject)SF_mindustry_core_Version_type;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_57;
	}
label_56:;
	{
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) == (jint(-1))) goto label_57;
	}
	{
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	jint temp0 = (jint)((func_mindustry_net_Administration_allowsCustomClients_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowsCustomClients_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_57;
	}
label_55:;
	{
	LINE_NUMBER(240);
	sp[0].o = frame[1].o;
	clinit_mindustry_core_Version(ctx);
	sp[1].o = (jobject)SF_mindustry_core_Version_type;
	sp[2].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_versionType;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp0 != 0) goto label_58;
	}
	clinit_mindustry_net_Packets$KickReason(ctx);
	(sp++)->o = SF_mindustry_net_Packets$KickReason_typeMismatch;
	goto label_59;
label_58:;
	clinit_mindustry_net_Packets$KickReason(ctx);
	(sp++)->o = SF_mindustry_net_Packets$KickReason_customClient;
label_59:;
	{
	sp -= 2;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}
label_57:;
	{
	LINE_NUMBER(244);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_61;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	jint temp0 = (jint)((func_mindustry_net_Administration_isStrict_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isStrict_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_61;
	}
	INST_ICONST(1);
	goto label_62;
label_61:;
	INST_ICONST(0);
label_62:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(246);
	if ((frame[7].i) == 0) goto label_64;
	}
	{
	LINE_NUMBER(247);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_22(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_22 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_22);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_66;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_nameInUse;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}
label_66:;
	{
	LINE_NUMBER(252);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Boolf_23(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Boolf_23 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Boolf_23);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_69;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_uuid;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_uuid = (jref) sp[1].o;
	LINE_NUMBER(254);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_idInUse;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}
label_69:;
	{
	LINE_NUMBER(258);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	sp[0].o = (jobject)((func_mindustry_net_Net_getConnections_R_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_getConnections_R_java_lang_Iterable])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_73:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_64;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_net_NetConnection, sp[0].o));
	LINE_NUMBER(259);
	if ((frame[9].o) == (frame[1].o)) goto label_75;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[9].o)))->F_uuid;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_75;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_uuid;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_uuid = (jref) sp[1].o;
	LINE_NUMBER(261);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_idInUse;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}
label_75:;
	LINE_NUMBER(264);
	goto label_73;
label_64:;
	{
	LINE_NUMBER(267);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)((func_mindustry_core_NetServer_fixName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_NetServer_fixName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(269);
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 > 0) goto label_80;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_nameEmpty;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}
label_80:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_locale;
	if (sp[0].o != nullptr) goto label_83;
	}
	{
	LINE_NUMBER(275);
	((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_locale = (jref) (((jobject) createStringLiteral(ctx, u8"en"_j)));
	}
label_83:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_address;
	frame[8].o = sp[0].o;
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[1].o = frame[3].o;
	sp[2].o = frame[8].o;
	sp[3].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_name;
	((func_mindustry_net_Administration_updatePlayerJoined_java_lang_String_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_updatePlayerJoined_java_lang_String_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(282);
	if (((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_version) == (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build)) goto label_87;
	}
	{
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) == (jint(-1))) goto label_87;
	}
	{
	if (((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_version) == (jint(-1))) goto label_87;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_version) <= (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build)) goto label_89;
	}
	clinit_mindustry_net_Packets$KickReason(ctx);
	(sp++)->o = SF_mindustry_net_Packets$KickReason_serverOutdated;
	goto label_90;
label_89:;
	clinit_mindustry_net_Packets$KickReason(ctx);
	(sp++)->o = SF_mindustry_net_Packets$KickReason_clientOutdated;
label_90:;
	{
	sp -= 2;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}
label_87:;
	{
	LINE_NUMBER(287);
	if (((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_version) != (jint(-1))) goto label_92;
	}
	{
	LINE_NUMBER(288);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_modclient = (jint(1));
	}
label_92:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)SM_mindustry_gen_Player_create_R_mindustry_gen_Player(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(292);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_usid;
	jint temp0 = (jint)((func_mindustry_net_Administration_isAdmin_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration_isAdmin_java_lang_String_java_lang_String_R_boolean])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	if (temp0 != 0) goto label_95;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_steam;
	if ((--sp)->i == 0) goto label_96;
	{
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_address;
	jint temp0 = (jint)SM_mindustry_net_SteamAdmin_isAdmin_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_96;
	}
label_95:;
	INST_ICONST(1);
	goto label_97;
label_96:;
	INST_ICONST(0);
label_97:;
	{
	sp -= 2;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin = sp[1].i;
	LINE_NUMBER(293);
	((mindustry_gen_Player *) NULL_CHECK((frame[9].o)))->F_con = (jref) (frame[1].o);
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[9].o)))->F_con;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_usid;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_usid = (jref) sp[1].o;
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[9].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_uuid = (jref) (frame[3].o);
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[9].o)))->F_con;
	((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_mobile = ((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_mobile);
	LINE_NUMBER(297);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_name;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(298);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_locale;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_locale = (jref) sp[1].o;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[9].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, ((jint)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_color));
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(302);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[9].o)))->F_admin) != 0) goto label_0;
	}
	{
	if (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_admin) != 0) goto label_0;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[2].o)))->F_usid;
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_adminUsid = (jref) sp[1].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_writeBuffer;
	((func_arc_util_io_ReusableByteOutStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_ReusableByteOutStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(308);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_outputBuffer;
	((func_mindustry_gen_Player_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_write_arc_util_io_Writes])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(313);
	goto label_108;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(309);
	frame[10].o = sp[0].o;
	LINE_NUMBER(310);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_nameEmpty;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(311);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[10].o));
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}
label_108:;
	{
	LINE_NUMBER(315);
	((mindustry_net_NetConnection *) NULL_CHECK((frame[1].o)))->F_player = (jref) (frame[9].o);
	LINE_NUMBER(318);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team])(ctx, (frame[0].o), (frame[9].o));
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(320);
	((func_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player])(ctx, (frame[0].o), (frame[9].o));
	LINE_NUMBER(322);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_updateRPC) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_updateRPC, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(324);
	clinit_mindustry_game_EventType$PlayerConnect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerConnect);
	init_mindustry_game_EventType$PlayerConnect_mindustry_gen_Player(ctx, sp[0].o, (frame[9].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$new$8_mindustry_net_Packets$ConnectPacket_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$new$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_uuid;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_usid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_usid_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_usid;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_core_NetServer_lambda$new$7_mindustry_net_Packets$ConnectPacket_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$new$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_net_Packets$ConnectPacket *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_NetServer_lambda$new$5_mindustry_net_NetConnection_mindustry_net_Packets$Disconnect(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_player;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK((frame[0].o)))->F_player;
	sp[1].o = (jobject)((mindustry_net_Packets$Disconnect *) NULL_CHECK((frame[1].o)))->F_reason;
	SM_mindustry_core_NetServer_onDisconnect_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_NetServer_lambda$new$4_mindustry_net_NetConnection_mindustry_net_Packets$Connect(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$new$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(141);
	clinit_mindustry_game_EventType$ConnectionEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ConnectionEvent);
	init_mindustry_game_EventType$ConnectionEvent_mindustry_net_NetConnection(ctx, sp[0].o, (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[1].o = (jobject)((mindustry_net_Packets$Connect *) NULL_CHECK((frame[2].o)))->F_addressTCP;
	jint temp0 = (jint)((func_mindustry_net_Administration_isIPBanned_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isIPBanned_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK((frame[0].o)))->F_admins;
	sp[1].o = (jobject)((mindustry_net_Packets$Connect *) NULL_CHECK((frame[2].o)))->F_addressTCP;
	jint temp0 = (jint)((func_mindustry_net_Administration_isSubnetBanned_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isSubnetBanned_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(144);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Packets$Connect *) NULL_CHECK((frame[2].o)))->F_addressTCP;
	jint temp0 = (jint)SM_mindustry_net_SteamAdmin_isBanned_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(145);
	((func_mindustry_net_NetConnection_kick_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"You have been banned from Steam lobbies for disruptive and shameful behavior."_j))));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_banned;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_core_NetServer_lambda$new$3_mindustry_gen_Player_arc_util_CommandHandler$CommandResponse_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$new$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[1].o)))->F_type;
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_manyArguments;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[1].o)))->F_command;
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK(sp[0].o))->F_text;
	sp[1].o = (jobject)((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[1].o)))->F_command;
	sp[1].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK(sp[1].o))->F_paramText;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[scarlet]Too many arguments. Usage:[lightgray] \u0001[gray] \u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[1].o)))->F_type;
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_fewArguments;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[1].o)))->F_command;
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK(sp[0].o))->F_text;
	sp[1].o = (jobject)((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[1].o)))->F_command;
	sp[1].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK(sp[1].o))->F_paramText;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[scarlet]Too few arguments. Usage:[lightgray] \u0001[gray] \u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(86);
	frame[2].i = (jint(0));
	LINE_NUMBER(87);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(89);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_clientCommands;
	sp[0].o = (jobject)((func_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_util_CommandHandler$Command, sp[0].o));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[5].o)))->F_text;
	sp[1].o = (jobject)((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[1].o)))->F_runCommand;
	jint temp0 = (jint)SM_arc_util_Strings_levenshtein_java_lang_String_java_lang_String_R_int(ctx, sp[0].o, sp[1].o);
	frame[6].i = temp0;
	LINE_NUMBER(91);
	if ((frame[6].i) >= (jint(3))) goto label_11;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_12;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(92);
	frame[2].i = (frame[6].i);
	LINE_NUMBER(93);
	frame[3].o = (frame[5].o);
	}
label_11:;
	LINE_NUMBER(95);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(97);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[3].o)))->F_text;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[scarlet]Unknown command. Did you mean \"[lightgray]\u0001[]\"?"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[scarlet]Unknown command. Check [lightgray]/help[scarlet]."_j)));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_NetServer_lambda$new$2_mindustry_gen_Player_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$new$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(77);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ALOAD(1);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[coral][[\u0001[coral]]:[white] \u0001"_j.string, 2, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_core_NetServer_lambda$new$0_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(58);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) == 0) goto label_1;
	}
	{
	LINE_NUMBER(60);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_NetServer_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_core_NetServer_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_core_NetServer_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(71);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[-1].o))->F_team;
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(74);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_core_NetServer_lambda$new$1_java_lang_Iterable_mindustry_gen_Player_mindustry_game_Teams$TeamData_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:lambda$new$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(61);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_protectCores) != 0) goto label_3;
	}
label_2:;
	(sp++)->f = jfloat(2,147484e+09f);
	popStackFrame(ctx);
	INST_FRETURN();
label_3:;
	{
	LINE_NUMBER(63);
	frame[3].i = (jint(0));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[5].o));
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	if ((frame[5].o) == (frame[1].o)) goto label_8;
	}
	LINE_NUMBER(66);
	INST_IINC(3, 1);
label_8:;
	LINE_NUMBER(68);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(69);
	jfloat temp0 = jfloat((frame[3].i));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(-0.1f)), (jfloat(0.1f)));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_core_NetServer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_core_NetServer_maxSnapshotSize = jint(800);
	SF_mindustry_core_NetServer_correctDist = jfloat(112.0f);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/NetServer:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_NetServer(ctx);
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper(ctx, (jfloat(6.0f)));
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_blockSyncTime = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper(ctx, (jfloat(0.5f)));
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_healthSyncTime = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper(ctx, (jfloat(0.5f)));
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_planPreviewSyncTime = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)SM_java_nio_FloatBuffer_allocate_int_R_java_nio_FloatBuffer(ctx, (20));
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_fbuffer = sp[0].o;
	LINE_NUMBER(47);
	clinit_arc_util_io_Writes(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[0].o, (jobject(nullptr)));
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_dataWrites = sp[0].o;
	LINE_NUMBER(48);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_hiddenIds = sp[0].o;
	LINE_NUMBER(49);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[0].o, (201));
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_healthSeq = sp[0].o;
	LINE_NUMBER(50);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_vector = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_io_TypeIO$ClientBuildPlans(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_TypeIO$ClientBuildPlans);
	init_mindustry_io_TypeIO$ClientBuildPlans(ctx, sp[0].o);
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_plansOut = sp[0].o;
	LINE_NUMBER(112);
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_kickDuration = (3600);
	LINE_NUMBER(114);
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_voteDuration = (jfloat(30.0f));
	LINE_NUMBER(116);
	clinit_mindustry_core_NetServer(ctx);
	SF_mindustry_core_NetServer_voteCooldown = (300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_NetServer;
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

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field currentlyKicking
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_core_NetServer[] {
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
	(void *) M_mindustry_core_NetServer_init,
	(void *) M_arc_ApplicationListener_resize_int_int,
	(void *) M_mindustry_core_NetServer_update,
	(void *) M_arc_ApplicationListener_pause,
	(void *) M_arc_ApplicationListener_resume,
	(void *) M_arc_ApplicationListener_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationListener_fileDropped_arc_files_Fi,
	(void *) M_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player,
	(void *) M_mindustry_core_NetServer_registerCommands,
	(void *) M_mindustry_core_NetServer_votesRequired_R_int,
	(void *) M_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team,
	(void *) M_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team,
	(void *) M_mindustry_core_NetServer_sendAssetRequirements_mindustry_gen_Player,
	(void *) M_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player,
	(void *) M_mindustry_core_NetServer_sendTexture_mindustry_net_NetConnection_java_lang_String_Array1_byte,
	(void *) M_mindustry_core_NetServer_sendTexture_java_lang_String_Array1_byte,
	(void *) M_mindustry_core_NetServer_removeTexture_mindustry_net_NetConnection_java_lang_String,
	(void *) M_mindustry_core_NetServer_removeTexture_java_lang_String,
	(void *) M_mindustry_core_NetServer_addPacketHandler_java_lang_String_arc_func_Cons2,
	(void *) M_mindustry_core_NetServer_getPacketHandlers_java_lang_String_R_arc_struct_Seq,
	(void *) M_mindustry_core_NetServer_addBinaryPacketHandler_java_lang_String_arc_func_Cons2,
	(void *) M_mindustry_core_NetServer_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq,
	(void *) M_mindustry_core_NetServer_addLogicDataHandler_java_lang_String_arc_func_Cons2,
	(void *) M_mindustry_core_NetServer_isWaitingForPlayers_R_boolean,
	(void *) M_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building,
	(void *) M_mindustry_core_NetServer_openServer,
	(void *) M_mindustry_core_NetServer_kickAll_mindustry_net_Packets$KickReason,
	(void *) M_mindustry_core_NetServer_writeBlockSnapshots,
	(void *) M_mindustry_core_NetServer_writeStateSnapshot,
	(void *) M_mindustry_core_NetServer_writeEntitySnapshotsAll,
	(void *) M_mindustry_core_NetServer_writeEntitySnapshotsTeam_mindustry_game_Team_arc_struct_Seq,
	(void *) M_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte,
	(void *) M_mindustry_core_NetServer_writeCustomEntitySnapshot_mindustry_gen_Player_java_lang_Iterable,
	(void *) M_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream,
	(void *) M_mindustry_core_NetServer_fixName_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_core_NetServer_checkColor_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_core_NetServer_sync,
	(void *) M_mindustry_core_NetServer_lambda$update$0,
	(void *) M_mindustry_core_NetServer_lambda$registerCommands$12_Array1_java_lang_String_mindustry_gen_Player,
	(void *) M_mindustry_core_NetServer_lambda$registerCommands$6_arc_struct_ObjectMap_Array1_java_lang_String_mindustry_gen_Player,
	(void *) M_mindustry_core_NetServer_lambda$registerCommands$4_Array1_java_lang_String_mindustry_gen_Player,
	(void *) M_mindustry_core_NetServer_lambda$registerCommands$1_Array1_java_lang_String_mindustry_gen_Player,
	(void *) M_mindustry_core_NetServer_lambda$registerCommands$0_Array1_java_lang_String_mindustry_gen_Player,
	(void *) M_mindustry_core_NetServer_lambda$init$0_mindustry_mod_Mod,
	(void *) M_mindustry_core_NetServer_lambda$new$6_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket,
	(void *) M_mindustry_core_NetServer_lambda$new$4_mindustry_net_NetConnection_mindustry_net_Packets$Connect,
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
	{ "sendWorldAndAssets", "(Lmindustry/gen/Player;)V" },
	{ "registerCommands", "()V" },
	{ "votesRequired", "()I" },
	{ "assignTeam", "(Lmindustry/gen/Player;)Lmindustry/game/Team;" },
	{ "assignTeam", "(Lmindustry/gen/Player;Ljava/lang/Iterable;)Lmindustry/game/Team;" },
	{ "sendAssetRequirements", "(Lmindustry/gen/Player;)V" },
	{ "sendWorldData", "(Lmindustry/gen/Player;)V" },
	{ "sendTexture", "(Lmindustry/net/NetConnection;Ljava/lang/String;[B)V" },
	{ "sendTexture", "(Ljava/lang/String;[B)V" },
	{ "removeTexture", "(Lmindustry/net/NetConnection;Ljava/lang/String;)V" },
	{ "removeTexture", "(Ljava/lang/String;)V" },
	{ "addPacketHandler", "(Ljava/lang/String;Larc/func/Cons2;)V" },
	{ "getPacketHandlers", "(Ljava/lang/String;)Larc/struct/Seq;" },
	{ "addBinaryPacketHandler", "(Ljava/lang/String;Larc/func/Cons2;)V" },
	{ "getBinaryPacketHandlers", "(Ljava/lang/String;)Larc/struct/Seq;" },
	{ "addLogicDataHandler", "(Ljava/lang/String;Larc/func/Cons2;)V" },
	{ "isWaitingForPlayers", "()Z" },
	{ "buildHealthUpdate", "(Lmindustry/gen/Building;)V" },
	{ "openServer", "()V" },
	{ "kickAll", "(Lmindustry/net/Packets$KickReason;)V" },
	{ "writeBlockSnapshots", "()V" },
	{ "writeStateSnapshot", "()V" },
	{ "writeEntitySnapshotsAll", "()V" },
	{ "writeEntitySnapshotsTeam", "(Lmindustry/game/Team;Larc/struct/Seq;)V" },
	{ "sendEntitySnapshots", "(Larc/struct/Seq;S[B)V" },
	{ "writeCustomEntitySnapshot", "(Lmindustry/gen/Player;Ljava/lang/Iterable;)V" },
	{ "writeEntity", "(Lmindustry/gen/Syncc;Ljava/io/DataOutputStream;)V" },
	{ "fixName", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "checkColor", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "sync", "()V" },
	{ "lambda$update$0", "()V" },
	{ "lambda$registerCommands$12", "([Ljava/lang/String;Lmindustry/gen/Player;)V" },
	{ "lambda$registerCommands$6", "(Larc/struct/ObjectMap;[Ljava/lang/String;Lmindustry/gen/Player;)V" },
	{ "lambda$registerCommands$4", "([Ljava/lang/String;Lmindustry/gen/Player;)V" },
	{ "lambda$registerCommands$1", "([Ljava/lang/String;Lmindustry/gen/Player;)V" },
	{ "lambda$registerCommands$0", "([Ljava/lang/String;Lmindustry/gen/Player;)V" },
	{ "lambda$init$0", "(Lmindustry/mod/Mod;)V" },
	{ "lambda$new$6", "(Lmindustry/net/NetConnection;Lmindustry/net/Packets$ConnectPacket;)V" },
	{ "lambda$new$4", "(Lmindustry/net/NetConnection;Lmindustry/net/Packets$Connect;)V" },
};

static jclass interfaces[] { &class_arc_ApplicationListener, };

static jclass innerClasses[] {
	&class_mindustry_core_NetServer$TeamAssigner,
	&class_mindustry_core_NetServer$ChatFormatter,
	&class_mindustry_core_NetServer$InvalidCommandHandler,
	&class_mindustry_core_NetServer$VoteSession,
};

static FieldMetadata fields[] {
	{ "maxSnapshotSize", &class_int, (intptr_t) &SF_mindustry_core_NetServer_maxSnapshotSize, "I", 26 },
	{ "blockSyncTime", &class_arc_util_Timekeeper, (intptr_t) &SF_mindustry_core_NetServer_blockSyncTime, "Larc/util/Timekeeper;", 26 },
	{ "healthSyncTime", &class_arc_util_Timekeeper, (intptr_t) &SF_mindustry_core_NetServer_healthSyncTime, "Larc/util/Timekeeper;", 26 },
	{ "planPreviewSyncTime", &class_arc_util_Timekeeper, (intptr_t) &SF_mindustry_core_NetServer_planPreviewSyncTime, "Larc/util/Timekeeper;", 26 },
	{ "fbuffer", &class_java_nio_FloatBuffer, (intptr_t) &SF_mindustry_core_NetServer_fbuffer, "Ljava/nio/FloatBuffer;", 26 },
	{ "dataWrites", &class_arc_util_io_Writes, (intptr_t) &SF_mindustry_core_NetServer_dataWrites, "Larc/util/io/Writes;", 26 },
	{ "hiddenIds", &class_arc_struct_IntSeq, (intptr_t) &SF_mindustry_core_NetServer_hiddenIds, "Larc/struct/IntSeq;", 26 },
	{ "healthSeq", &class_arc_struct_IntSeq, (intptr_t) &SF_mindustry_core_NetServer_healthSeq, "Larc/struct/IntSeq;", 26 },
	{ "vector", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_core_NetServer_vector, "Larc/math/geom/Vec2;", 26 },
	{ "plansOut", &class_mindustry_io_TypeIO$ClientBuildPlans, (intptr_t) &SF_mindustry_core_NetServer_plansOut, "Lmindustry/io/TypeIO$ClientBuildPlans;", 26 },
	{ "correctDist", &class_float, (intptr_t) &SF_mindustry_core_NetServer_correctDist, "F", 26 },
	{ "admins", &class_mindustry_net_Administration, offsetof(mindustry_core_NetServer, F_admins), "Lmindustry/net/Administration;", 1 },
	{ "clientCommands", &class_arc_util_CommandHandler, offsetof(mindustry_core_NetServer, F_clientCommands), "Larc/util/CommandHandler;", 1 },
	{ "assigner", &class_mindustry_core_NetServer$TeamAssigner, offsetof(mindustry_core_NetServer, F_assigner), "Lmindustry/core/NetServer$TeamAssigner;", 1 },
	{ "chatFormatter", &class_mindustry_core_NetServer$ChatFormatter, offsetof(mindustry_core_NetServer, F_chatFormatter), "Lmindustry/core/NetServer$ChatFormatter;", 1 },
	{ "invalidHandler", &class_mindustry_core_NetServer$InvalidCommandHandler, offsetof(mindustry_core_NetServer, F_invalidHandler), "Lmindustry/core/NetServer$InvalidCommandHandler;", 1 },
	{ "closing", &class_boolean, offsetof(mindustry_core_NetServer, F_closing), "Z", 2 },
	{ "pvpAutoPaused", &class_boolean, offsetof(mindustry_core_NetServer, F_pvpAutoPaused), "Z", 2 },
	{ "buildHealthChanged", &class_arc_struct_IntSet, offsetof(mindustry_core_NetServer, F_buildHealthChanged), "Larc/struct/IntSet;", 2 },
	{ "currentlyKicking", &class_mindustry_core_NetServer$VoteSession, offsetof(mindustry_core_NetServer, F_currentlyKicking), "Lmindustry/core/NetServer$VoteSession;", 1 },
	{ "kickDuration", &class_int, (intptr_t) &SF_mindustry_core_NetServer_kickDuration, "I", 9 },
	{ "voteDuration", &class_float, (intptr_t) &SF_mindustry_core_NetServer_voteDuration, "F", 9 },
	{ "voteCooldown", &class_int, (intptr_t) &SF_mindustry_core_NetServer_voteCooldown, "I", 9 },
	{ "writeBuffer", &class_arc_util_io_ReusableByteOutStream, offsetof(mindustry_core_NetServer, F_writeBuffer), "Larc/util/io/ReusableByteOutStream;", 2 },
	{ "outputBuffer", &class_arc_util_io_Writes, offsetof(mindustry_core_NetServer, F_outputBuffer), "Larc/util/io/Writes;", 2 },
	{ "syncStream", &class_arc_util_io_ReusableByteOutStream, offsetof(mindustry_core_NetServer, F_syncStream), "Larc/util/io/ReusableByteOutStream;", 2 },
	{ "dataStream", &class_java_io_DataOutputStream, offsetof(mindustry_core_NetServer, F_dataStream), "Ljava/io/DataOutputStream;", 2 },
	{ "dataStreamWrites", &class_arc_util_io_Writes, offsetof(mindustry_core_NetServer, F_dataStreamWrites), "Larc/util/io/Writes;", 2 },
	{ "customPacketHandlers", &class_arc_struct_ObjectMap, offsetof(mindustry_core_NetServer, F_customPacketHandlers), "Larc/struct/ObjectMap;", 2 },
	{ "customBinaryPacketHandlers", &class_arc_struct_ObjectMap, offsetof(mindustry_core_NetServer, F_customBinaryPacketHandlers), "Larc/struct/ObjectMap;", 2 },
	{ "logicClientDataHandlers", &class_arc_struct_ObjectMap, offsetof(mindustry_core_NetServer, F_logicClientDataHandlers), "Larc/struct/ObjectMap;", 2 },
	{ "playersToSend", &class_arc_struct_Seq, offsetof(mindustry_core_NetServer, F_playersToSend), "Larc/struct/Seq;", 2 },
	{ "tempConnections", &class_arc_struct_Seq, offsetof(mindustry_core_NetServer, F_tempConnections), "Larc/struct/Seq;", 2 },
	{ "snapshotSyncTime", &class_long, offsetof(mindustry_core_NetServer, F_snapshotSyncTime), "J", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_NetServer, 0, "()V", 1 },
	{ "sendWorldAndAssets", (intptr_t) M_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player, VTABLE_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "init", (intptr_t) M_mindustry_core_NetServer_init, VTABLE_mindustry_core_NetServer_init, "()V", 1 },
	{ "registerCommands", (intptr_t) M_mindustry_core_NetServer_registerCommands, VTABLE_mindustry_core_NetServer_registerCommands, "()V", 2 },
	{ "votesRequired", (intptr_t) M_mindustry_core_NetServer_votesRequired_R_int, VTABLE_mindustry_core_NetServer_votesRequired_R_int, "()I", 1 },
	{ "assignTeam", (intptr_t) M_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team, VTABLE_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team, "(Lmindustry/gen/Player;)Lmindustry/game/Team;", 1 },
	{ "assignTeam", (intptr_t) M_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team, VTABLE_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team, "(Lmindustry/gen/Player;Ljava/lang/Iterable;)Lmindustry/game/Team;", 1 },
	{ "sendAssetRequirements", (intptr_t) M_mindustry_core_NetServer_sendAssetRequirements_mindustry_gen_Player, VTABLE_mindustry_core_NetServer_sendAssetRequirements_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "sendWorldData", (intptr_t) M_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player, VTABLE_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "sendTexture", (intptr_t) M_mindustry_core_NetServer_sendTexture_mindustry_net_NetConnection_java_lang_String_Array1_byte, VTABLE_mindustry_core_NetServer_sendTexture_mindustry_net_NetConnection_java_lang_String_Array1_byte, "(Lmindustry/net/NetConnection;Ljava/lang/String;[B)V", 1 },
	{ "sendTexture", (intptr_t) M_mindustry_core_NetServer_sendTexture_java_lang_String_Array1_byte, VTABLE_mindustry_core_NetServer_sendTexture_java_lang_String_Array1_byte, "(Ljava/lang/String;[B)V", 1 },
	{ "removeTexture", (intptr_t) M_mindustry_core_NetServer_removeTexture_mindustry_net_NetConnection_java_lang_String, VTABLE_mindustry_core_NetServer_removeTexture_mindustry_net_NetConnection_java_lang_String, "(Lmindustry/net/NetConnection;Ljava/lang/String;)V", 1 },
	{ "removeTexture", (intptr_t) M_mindustry_core_NetServer_removeTexture_java_lang_String, VTABLE_mindustry_core_NetServer_removeTexture_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "addPacketHandler", (intptr_t) M_mindustry_core_NetServer_addPacketHandler_java_lang_String_arc_func_Cons2, VTABLE_mindustry_core_NetServer_addPacketHandler_java_lang_String_arc_func_Cons2, "(Ljava/lang/String;Larc/func/Cons2;)V", 1 },
	{ "getPacketHandlers", (intptr_t) M_mindustry_core_NetServer_getPacketHandlers_java_lang_String_R_arc_struct_Seq, VTABLE_mindustry_core_NetServer_getPacketHandlers_java_lang_String_R_arc_struct_Seq, "(Ljava/lang/String;)Larc/struct/Seq;", 1 },
	{ "addBinaryPacketHandler", (intptr_t) M_mindustry_core_NetServer_addBinaryPacketHandler_java_lang_String_arc_func_Cons2, VTABLE_mindustry_core_NetServer_addBinaryPacketHandler_java_lang_String_arc_func_Cons2, "(Ljava/lang/String;Larc/func/Cons2;)V", 1 },
	{ "getBinaryPacketHandlers", (intptr_t) M_mindustry_core_NetServer_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq, VTABLE_mindustry_core_NetServer_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq, "(Ljava/lang/String;)Larc/struct/Seq;", 1 },
	{ "addLogicDataHandler", (intptr_t) M_mindustry_core_NetServer_addLogicDataHandler_java_lang_String_arc_func_Cons2, VTABLE_mindustry_core_NetServer_addLogicDataHandler_java_lang_String_arc_func_Cons2, "(Ljava/lang/String;Larc/func/Cons2;)V", 1 },
	{ "onDisconnect", (intptr_t) SM_mindustry_core_NetServer_onDisconnect_mindustry_gen_Player_java_lang_String, 0, "(Lmindustry/gen/Player;Ljava/lang/String;)V", 9 },
	{ "requestDebugStatus", (intptr_t) SM_mindustry_core_NetServer_requestDebugStatus_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 9 },
	{ "debugStatusClient", (intptr_t) SM_mindustry_core_NetServer_debugStatusClient_int_int, 0, "(II)V", 9 },
	{ "debugStatusClientUnreliable", (intptr_t) SM_mindustry_core_NetServer_debugStatusClientUnreliable_int_int, 0, "(II)V", 9 },
	{ "logClientStatus", (intptr_t) SM_mindustry_core_NetServer_logClientStatus_boolean_int_int, 0, "(ZII)V", 8 },
	{ "serverPacketReliable", (intptr_t) SM_mindustry_core_NetServer_serverPacketReliable_mindustry_gen_Player_java_lang_String_java_lang_String, 0, "(Lmindustry/gen/Player;Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "serverPacketUnreliable", (intptr_t) SM_mindustry_core_NetServer_serverPacketUnreliable_mindustry_gen_Player_java_lang_String_java_lang_String, 0, "(Lmindustry/gen/Player;Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "serverBinaryPacketReliable", (intptr_t) SM_mindustry_core_NetServer_serverBinaryPacketReliable_mindustry_gen_Player_java_lang_String_Array1_byte, 0, "(Lmindustry/gen/Player;Ljava/lang/String;[B)V", 9 },
	{ "serverBinaryPacketUnreliable", (intptr_t) SM_mindustry_core_NetServer_serverBinaryPacketUnreliable_mindustry_gen_Player_java_lang_String_Array1_byte, 0, "(Lmindustry/gen/Player;Ljava/lang/String;[B)V", 9 },
	{ "clientLogicDataReliable", (intptr_t) SM_mindustry_core_NetServer_clientLogicDataReliable_mindustry_gen_Player_java_lang_String_java_lang_Object, 0, "(Lmindustry/gen/Player;Ljava/lang/String;Ljava/lang/Object;)V", 9 },
	{ "clientLogicDataUnreliable", (intptr_t) SM_mindustry_core_NetServer_clientLogicDataUnreliable_mindustry_gen_Player_java_lang_String_java_lang_Object, 0, "(Lmindustry/gen/Player;Ljava/lang/String;Ljava/lang/Object;)V", 9 },
	{ "invalid", (intptr_t) SM_mindustry_core_NetServer_invalid_float_R_boolean, 0, "(F)Z", 10 },
	{ "syncBuilding", (intptr_t) SM_mindustry_core_NetServer_syncBuilding_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 9 },
	{ "requestBlockSnapshot", (intptr_t) SM_mindustry_core_NetServer_requestBlockSnapshot_mindustry_gen_Player_int, 0, "(Lmindustry/gen/Player;I)V", 9 },
	{ "clientPlanSnapshot", (intptr_t) SM_mindustry_core_NetServer_clientPlanSnapshot_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans, 0, "(Lmindustry/gen/Player;ILmindustry/io/TypeIO$ClientBuildPlans;)V", 9 },
	{ "clientPlanSnapshotReceived", (intptr_t) SM_mindustry_core_NetServer_clientPlanSnapshotReceived_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans, 0, "(Lmindustry/gen/Player;ILmindustry/io/TypeIO$ClientBuildPlans;)V", 9 },
	{ "clientSnapshot", (intptr_t) SM_mindustry_core_NetServer_clientSnapshot_mindustry_gen_Player_int_int_boolean_float_float_float_float_float_float_float_float_mindustry_world_Tile_boolean_boolean_boolean_boolean_mindustry_world_Block_int_arc_struct_Queue_float_float_float_float, 0, "(Lmindustry/gen/Player;IIZFFFFFFFFLmindustry/world/Tile;ZZZZLmindustry/world/Block;ILarc/struct/Queue;FFFF)V", 9 },
	{ "adminRequest", (intptr_t) SM_mindustry_core_NetServer_adminRequest_mindustry_gen_Player_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Player;Lmindustry/net/Packets$AdminAction;Ljava/lang/Object;)V", 9 },
	{ "requestWorld", (intptr_t) SM_mindustry_core_NetServer_requestWorld_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 9 },
	{ "requestAssets", (intptr_t) SM_mindustry_core_NetServer_requestAssets_mindustry_gen_Player_Array1_short, 0, "(Lmindustry/gen/Player;[S)V", 9 },
	{ "connectConfirm", (intptr_t) SM_mindustry_core_NetServer_connectConfirm_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 9 },
	{ "isWaitingForPlayers", (intptr_t) M_mindustry_core_NetServer_isWaitingForPlayers_R_boolean, VTABLE_mindustry_core_NetServer_isWaitingForPlayers_R_boolean, "()Z", 1 },
	{ "update", (intptr_t) M_mindustry_core_NetServer_update, VTABLE_mindustry_core_NetServer_update, "()V", 1 },
	{ "buildHealthUpdate", (intptr_t) M_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building, VTABLE_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "openServer", (intptr_t) M_mindustry_core_NetServer_openServer, VTABLE_mindustry_core_NetServer_openServer, "()V", 1 },
	{ "kickAll", (intptr_t) M_mindustry_core_NetServer_kickAll_mindustry_net_Packets$KickReason, VTABLE_mindustry_core_NetServer_kickAll_mindustry_net_Packets$KickReason, "(Lmindustry/net/Packets$KickReason;)V", 1 },
	{ "writeBlockSnapshots", (intptr_t) M_mindustry_core_NetServer_writeBlockSnapshots, VTABLE_mindustry_core_NetServer_writeBlockSnapshots, "()V", 1 },
	{ "writeStateSnapshot", (intptr_t) M_mindustry_core_NetServer_writeStateSnapshot, VTABLE_mindustry_core_NetServer_writeStateSnapshot, "()V", 1 },
	{ "writeEntitySnapshotsAll", (intptr_t) M_mindustry_core_NetServer_writeEntitySnapshotsAll, VTABLE_mindustry_core_NetServer_writeEntitySnapshotsAll, "()V", 1 },
	{ "writeEntitySnapshotsTeam", (intptr_t) M_mindustry_core_NetServer_writeEntitySnapshotsTeam_mindustry_game_Team_arc_struct_Seq, VTABLE_mindustry_core_NetServer_writeEntitySnapshotsTeam_mindustry_game_Team_arc_struct_Seq, "(Lmindustry/game/Team;Larc/struct/Seq;)V", 1 },
	{ "sendEntitySnapshots", (intptr_t) M_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte, VTABLE_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte, "(Larc/struct/Seq;S[B)V", 4 },
	{ "writeCustomEntitySnapshot", (intptr_t) M_mindustry_core_NetServer_writeCustomEntitySnapshot_mindustry_gen_Player_java_lang_Iterable, VTABLE_mindustry_core_NetServer_writeCustomEntitySnapshot_mindustry_gen_Player_java_lang_Iterable, "(Lmindustry/gen/Player;Ljava/lang/Iterable;)V", 1 },
	{ "writeEntity", (intptr_t) M_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream, VTABLE_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream, "(Lmindustry/gen/Syncc;Ljava/io/DataOutputStream;)V", 4 },
	{ "fixName", (intptr_t) M_mindustry_core_NetServer_fixName_java_lang_String_R_java_lang_String, VTABLE_mindustry_core_NetServer_fixName_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "checkColor", (intptr_t) M_mindustry_core_NetServer_checkColor_java_lang_String_R_java_lang_String, VTABLE_mindustry_core_NetServer_checkColor_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "sync", (intptr_t) M_mindustry_core_NetServer_sync, VTABLE_mindustry_core_NetServer_sync, "()V", 0 },
	{ "clientPlanSnapshotSend", (intptr_t) SM_mindustry_core_NetServer_clientPlanSnapshotSend_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans, 0, "(Lmindustry/gen/Player;ILmindustry/io/TypeIO$ClientBuildPlans;)V", 8 },
	{ "lambda$sync$3", (intptr_t) SM_mindustry_core_NetServer_lambda$sync$3_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$sync$2", (intptr_t) SM_mindustry_core_NetServer_lambda$sync$2_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$sync$1", (intptr_t) SM_mindustry_core_NetServer_lambda$sync$1_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$sync$0", (intptr_t) SM_mindustry_core_NetServer_lambda$sync$0_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$writeStateSnapshot$0", (intptr_t) SM_mindustry_core_NetServer_lambda$writeStateSnapshot$0_mindustry_game_Teams$TeamData_R_boolean, 0, "(Lmindustry/game/Teams$TeamData;)Z", 4106 },
	{ "lambda$update$0", (intptr_t) M_mindustry_core_NetServer_lambda$update$0, VTABLE_mindustry_core_NetServer_lambda$update$0, "()V", 4098 },
	{ "lambda$isWaitingForPlayers$0", (intptr_t) SM_mindustry_core_NetServer_lambda$isWaitingForPlayers$0_mindustry_game_Teams$TeamData_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/game/Teams$TeamData;Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$requestAssets$0", (intptr_t) SM_mindustry_core_NetServer_lambda$requestAssets$0_arc_struct_Seq_mindustry_gen_Player, 0, "(Larc/struct/Seq;Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$clientSnapshot$1", (intptr_t) SM_mindustry_core_NetServer_lambda$clientSnapshot$1_mindustry_entities_units_BuildPlan_mindustry_net_Administration$PlayerAction, 0, "(Lmindustry/entities/units/BuildPlan;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$clientSnapshot$0", (intptr_t) SM_mindustry_core_NetServer_lambda$clientSnapshot$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$sendAssetRequirements$0", (intptr_t) SM_mindustry_core_NetServer_lambda$sendAssetRequirements$0_arc_struct_Seq_mindustry_gen_Player, 0, "(Larc/struct/Seq;Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$registerCommands$13", (intptr_t) SM_mindustry_core_NetServer_lambda$registerCommands$13_Array1_java_lang_String_mindustry_gen_Player, 0, "([Ljava/lang/String;Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$registerCommands$12", (intptr_t) M_mindustry_core_NetServer_lambda$registerCommands$12_Array1_java_lang_String_mindustry_gen_Player, VTABLE_mindustry_core_NetServer_lambda$registerCommands$12_Array1_java_lang_String_mindustry_gen_Player, "([Ljava/lang/String;Lmindustry/gen/Player;)V", 4098 },
	{ "lambda$registerCommands$6", (intptr_t) M_mindustry_core_NetServer_lambda$registerCommands$6_arc_struct_ObjectMap_Array1_java_lang_String_mindustry_gen_Player, VTABLE_mindustry_core_NetServer_lambda$registerCommands$6_arc_struct_ObjectMap_Array1_java_lang_String_mindustry_gen_Player, "(Larc/struct/ObjectMap;[Ljava/lang/String;Lmindustry/gen/Player;)V", 4098 },
	{ "lambda$registerCommands$11", (intptr_t) SM_mindustry_core_NetServer_lambda$registerCommands$11_R_arc_util_Timekeeper, 0, "()Larc/util/Timekeeper;", 4106 },
	{ "lambda$registerCommands$10", (intptr_t) SM_mindustry_core_NetServer_lambda$registerCommands$10_Array1_java_lang_String_mindustry_gen_Player_R_boolean, 0, "([Ljava/lang/String;Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$registerCommands$9", (intptr_t) SM_mindustry_core_NetServer_lambda$registerCommands$9_int_mindustry_gen_Player_R_boolean, 0, "(ILmindustry/gen/Player;)Z", 4106 },
	{ "lambda$registerCommands$8", (intptr_t) SM_mindustry_core_NetServer_lambda$registerCommands$8_java_lang_StringBuilder_mindustry_gen_Player, 0, "(Ljava/lang/StringBuilder;Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$registerCommands$7", (intptr_t) SM_mindustry_core_NetServer_lambda$registerCommands$7_mindustry_gen_Player_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$registerCommands$4", (intptr_t) M_mindustry_core_NetServer_lambda$registerCommands$4_Array1_java_lang_String_mindustry_gen_Player, VTABLE_mindustry_core_NetServer_lambda$registerCommands$4_Array1_java_lang_String_mindustry_gen_Player, "([Ljava/lang/String;Lmindustry/gen/Player;)V", 4098 },
	{ "lambda$registerCommands$5", (intptr_t) SM_mindustry_core_NetServer_lambda$registerCommands$5_java_lang_String_mindustry_gen_Player_Array1_java_lang_String_mindustry_gen_Player, 0, "(Ljava/lang/String;Lmindustry/gen/Player;[Ljava/lang/String;Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$registerCommands$1", (intptr_t) M_mindustry_core_NetServer_lambda$registerCommands$1_Array1_java_lang_String_mindustry_gen_Player, VTABLE_mindustry_core_NetServer_lambda$registerCommands$1_Array1_java_lang_String_mindustry_gen_Player, "([Ljava/lang/String;Lmindustry/gen/Player;)V", 4098 },
	{ "lambda$registerCommands$3", (intptr_t) SM_mindustry_core_NetServer_lambda$registerCommands$3_java_lang_String_mindustry_gen_Player_java_lang_String_mindustry_gen_Player, 0, "(Ljava/lang/String;Lmindustry/gen/Player;Ljava/lang/String;Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$registerCommands$2", (intptr_t) SM_mindustry_core_NetServer_lambda$registerCommands$2_mindustry_gen_Player_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$registerCommands$0", (intptr_t) M_mindustry_core_NetServer_lambda$registerCommands$0_Array1_java_lang_String_mindustry_gen_Player, VTABLE_mindustry_core_NetServer_lambda$registerCommands$0_Array1_java_lang_String_mindustry_gen_Player, "([Ljava/lang/String;Lmindustry/gen/Player;)V", 4098 },
	{ "lambda$init$0", (intptr_t) M_mindustry_core_NetServer_lambda$init$0_mindustry_mod_Mod, VTABLE_mindustry_core_NetServer_lambda$init$0_mindustry_mod_Mod, "(Lmindustry/mod/Mod;)V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_core_NetServer_lambda$new$6_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket, VTABLE_mindustry_core_NetServer_lambda$new$6_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket, "(Lmindustry/net/NetConnection;Lmindustry/net/Packets$ConnectPacket;)V", 4098 },
	{ "lambda$new$8", (intptr_t) SM_mindustry_core_NetServer_lambda$new$8_mindustry_net_Packets$ConnectPacket_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/net/Packets$ConnectPacket;Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$new$7", (intptr_t) SM_mindustry_core_NetServer_lambda$new$7_mindustry_net_Packets$ConnectPacket_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/net/Packets$ConnectPacket;Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$new$5", (intptr_t) SM_mindustry_core_NetServer_lambda$new$5_mindustry_net_NetConnection_mindustry_net_Packets$Disconnect, 0, "(Lmindustry/net/NetConnection;Lmindustry/net/Packets$Disconnect;)V", 4106 },
	{ "lambda$new$4", (intptr_t) M_mindustry_core_NetServer_lambda$new$4_mindustry_net_NetConnection_mindustry_net_Packets$Connect, VTABLE_mindustry_core_NetServer_lambda$new$4_mindustry_net_NetConnection_mindustry_net_Packets$Connect, "(Lmindustry/net/NetConnection;Lmindustry/net/Packets$Connect;)V", 4098 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_core_NetServer_lambda$new$3_mindustry_gen_Player_arc_util_CommandHandler$CommandResponse_R_java_lang_String, 0, "(Lmindustry/gen/Player;Larc/util/CommandHandler$CommandResponse;)Ljava/lang/String;", 4106 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_core_NetServer_lambda$new$2_mindustry_gen_Player_java_lang_String_R_java_lang_String, 0, "(Lmindustry/gen/Player;Ljava/lang/String;)Ljava/lang/String;", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_core_NetServer_lambda$new$0_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team, 0, "(Lmindustry/gen/Player;Ljava/lang/Iterable;)Lmindustry/game/Team;", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_core_NetServer_lambda$new$1_java_lang_Iterable_mindustry_gen_Player_mindustry_game_Teams$TeamData_R_float, 0, "(Ljava/lang/Iterable;Lmindustry/gen/Player;Lmindustry/game/Teams$TeamData;)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_core_NetServer, 0, "()V", 8 },
};

Class class_mindustry_core_NetServer{
		.nativeName = (intptr_t) "mindustry/core/NetServer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_NetServer),
		.classVtable = (intptr_t) vtable_mindustry_core_NetServer,
		.staticInitializer = (intptr_t) clinit_mindustry_core_NetServer,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_NetServer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 34,
		.nativeFields = (intptr_t) fields,
		.methodCount = 91,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 58,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_NetServer = registerClass(&class_mindustry_core_NetServer);

}
