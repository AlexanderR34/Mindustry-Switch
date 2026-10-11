#include "mindustry/game/EventType.h"
#include "mindustry/game/EventType_SectorLaunchEvent.h"
#include "mindustry/game/EventType_BlockBuildBeginEvent.h"
#include "mindustry/game/EventType_ServerLoadEvent.h"
#include "mindustry/game/EventType_BuildRotateEvent.h"
#include "mindustry/game/EventType_ConfigEvent.h"
#include "mindustry/game/EventType_PlayerConnect.h"
#include "mindustry/game/EventType_DepositEvent.h"
#include "mindustry/game/EventType_SchematicCreateEvent.h"
#include "mindustry/game/EventType_PickupEvent.h"
#include "mindustry/game/EventType_SaveLoadEvent.h"
#include "mindustry/game/EventType_UnitBulletDestroyEvent.h"
#include "mindustry/game/EventType_ClientChatEvent.h"
#include "mindustry/game/EventType_MusicRegisterEvent.h"
#include "mindustry/game/EventType_BulletCreateEvent.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "mindustry/game/EventType_ClientCreateEvent.h"
#include "mindustry/game/EventType_WithdrawEvent.h"
#include "mindustry/game/EventType_SectorLaunchLoadoutEvent.h"
#include "mindustry/game/EventType_PlayerLeave.h"
#include "mindustry/game/EventType_SectorLoseEvent.h"
#include "mindustry/game/EventType_MenuBuilderOptionChooseEvent.h"
#include "mindustry/game/EventType_CoreChangeEvent.h"
#include "mindustry/game/EventType_UnitDamageEvent.h"
#include "mindustry/game/EventType_DataPatchLoadEvent.h"
#include "mindustry/game/EventType_LineConfirmEvent.h"
#include "mindustry/game/EventType_TileFloorChangeEvent.h"
#include "mindustry/game/EventType_BuildingCommandEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_BlockInfoEvent.h"
#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "mindustry/game/EventType_SaveWriteEvent.h"
#include "mindustry/game/EventType_GeneratorPressureExplodeEvent.h"
#include "mindustry/game/EventType_PlayerConnectionConfirmed.h"
#include "mindustry/game/EventType_AdminRequestEvent.h"
#include "mindustry/game/EventType_FileTreeInitEvent.h"
#include "mindustry/game/EventType_RulesLoadEvent.h"
#include "mindustry/game/EventType_DisposeEvent.h"
#include "mindustry/game/EventType_ConnectionEvent.h"
#include "mindustry/game/EventType_WinEvent.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/game/EventType_MapMakeEvent.h"
#include "mindustry/game/EventType_UnitCreateEvent.h"
#include "mindustry/game/EventType_BuildSelectEvent.h"
#include "mindustry/game/EventType_TextInputEvent.h"
#include "mindustry/game/EventType_PlayEvent.h"
#include "mindustry/game/EventType_UnlockEvent.h"
#include "mindustry/game/EventType_PlayerChatEvent.h"
#include "mindustry/game/EventType_PlayerIpUnbanEvent.h"
#include "mindustry/game/EventType_BlockDestroyEvent.h"
#include "mindustry/game/EventType_TilePreChangeEvent.h"
#include "mindustry/game/EventType_UnitDrownEvent.h"
#include "mindustry/game/EventType_TileOverlayChangeEvent.h"
#include "mindustry/game/EventType_UnitControlEvent.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/game/EventType_ModContentLoadEvent.h"
#include "mindustry/game/EventType_MenuOptionChooseEvent.h"
#include "mindustry/game/EventType_HostEvent.h"
#include "mindustry/game/EventType_UnitUnloadEvent.h"
#include "mindustry/game/EventType_UnitSpawnEvent.h"
#include "mindustry/game/EventType_StateChangeEvent.h"
#include "mindustry/game/EventType_PlayerIpBanEvent.h"
#include "mindustry/game/EventType_PlayerUnbanEvent.h"
#include "mindustry/game/EventType_BuildTeamChangeEvent.h"
#include "mindustry/game/EventType_ResearchEvent.h"
#include "mindustry/game/EventType_SectorCaptureEvent.h"
#include "mindustry/game/EventType_SectorInvasionEvent.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "mindustry/game/EventType_GameOverEvent.h"
#include "mindustry/game/EventType_PlayerJoin.h"
#include "mindustry/game/EventType_PayloadDropEvent.h"
#include "mindustry/game/EventType_ClientServerConnectEvent.h"
#include "mindustry/game/EventType_ContentInitEvent.h"
#include "mindustry/game/EventType_BuildingBulletDestroyEvent.h"
#include "mindustry/game/EventType_LoseEvent.h"
#include "mindustry/game/EventType_MapPublishEvent.h"
#include "mindustry/game/EventType_LaunchItemEvent.h"
#include "mindustry/game/EventType_PlayerBanEvent.h"
#include "mindustry/game/EventType_WorldLoadEndEvent.h"
#include "mindustry/game/EventType_AtlasPackEvent.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/game/EventType_BlockBuildEndEvent.h"
#include "mindustry/game/EventType_ConnectPacketEvent.h"
#include "mindustry/game/EventType_UnitChangeEvent.h"
#include "mindustry/game/EventType_TextureStreamEvent.h"
#include "mindustry/game/EventType_WaveEvent.h"
#include "mindustry/game/EventType_TurnEvent.h"
#include "mindustry/game/EventType_BuildDamageEvent.h"
#include "mindustry/game/EventType_TapEvent.h"
#include "mindustry/game/EventType_WorldLoadBeginEvent.h"
#include "mindustry/game/EventType_ResizeEvent.h"
#include "mindustry/game/EventType_ClientPreConnectEvent.h"

extern "C" {


void mark_mindustry_game_EventType(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType *) object;
}

void clinit_mindustry_game_EventType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType[] {
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
};

static jclass innerClasses[] {
	&class_mindustry_game_EventType$AdminRequestEvent,
	&class_mindustry_game_EventType$PlayerIpUnbanEvent,
	&class_mindustry_game_EventType$PlayerIpBanEvent,
	&class_mindustry_game_EventType$PlayerUnbanEvent,
	&class_mindustry_game_EventType$PlayerBanEvent,
	&class_mindustry_game_EventType$PlayerLeave,
	&class_mindustry_game_EventType$PlayerConnect,
	&class_mindustry_game_EventType$PlayerJoin,
	&class_mindustry_game_EventType$PlayerConnectionConfirmed,
	&class_mindustry_game_EventType$ConnectPacketEvent,
	&class_mindustry_game_EventType$ConnectionEvent,
	&class_mindustry_game_EventType$UnitChangeEvent,
	&class_mindustry_game_EventType$UnitUnloadEvent,
	&class_mindustry_game_EventType$UnitSpawnEvent,
	&class_mindustry_game_EventType$UnitCreateEvent,
	&class_mindustry_game_EventType$UnitDrownEvent,
	&class_mindustry_game_EventType$UnitDamageEvent,
	&class_mindustry_game_EventType$UnitBulletDestroyEvent,
	&class_mindustry_game_EventType$UnitDestroyEvent,
	&class_mindustry_game_EventType$BuildingBulletDestroyEvent,
	&class_mindustry_game_EventType$GeneratorPressureExplodeEvent,
	&class_mindustry_game_EventType$BlockDestroyEvent,
	&class_mindustry_game_EventType$BuildSelectEvent,
	&class_mindustry_game_EventType$BuildRotateEvent,
	&class_mindustry_game_EventType$BlockBuildEndEvent,
	&class_mindustry_game_EventType$BlockBuildBeginEvent,
	&class_mindustry_game_EventType$RulesLoadEvent,
	&class_mindustry_game_EventType$ResearchEvent,
	&class_mindustry_game_EventType$UnlockEvent,
	&class_mindustry_game_EventType$StateChangeEvent,
	&class_mindustry_game_EventType$CoreChangeEvent,
	&class_mindustry_game_EventType$BuildTeamChangeEvent,
	&class_mindustry_game_EventType$TileOverlayChangeEvent,
	&class_mindustry_game_EventType$TileFloorChangeEvent,
	&class_mindustry_game_EventType$TileChangeEvent,
	&class_mindustry_game_EventType$TilePreChangeEvent,
	&class_mindustry_game_EventType$BulletCreateEvent,
	&class_mindustry_game_EventType$BuildDamageEvent,
	&class_mindustry_game_EventType$GameOverEvent,
	&class_mindustry_game_EventType$BuildingCommandEvent,
	&class_mindustry_game_EventType$UnitControlEvent,
	&class_mindustry_game_EventType$PayloadDropEvent,
	&class_mindustry_game_EventType$PickupEvent,
	&class_mindustry_game_EventType$TapEvent,
	&class_mindustry_game_EventType$ConfigEvent,
	&class_mindustry_game_EventType$DepositEvent,
	&class_mindustry_game_EventType$WithdrawEvent,
	&class_mindustry_game_EventType$SectorCaptureEvent,
	&class_mindustry_game_EventType$ClientChatEvent,
	&class_mindustry_game_EventType$PlayerChatEvent,
	&class_mindustry_game_EventType$TextInputEvent,
	&class_mindustry_game_EventType$MenuBuilderOptionChooseEvent,
	&class_mindustry_game_EventType$MenuOptionChooseEvent,
	&class_mindustry_game_EventType$ClientServerConnectEvent,
	&class_mindustry_game_EventType$ClientPreConnectEvent,
	&class_mindustry_game_EventType$SchematicCreateEvent,
	&class_mindustry_game_EventType$SectorLaunchLoadoutEvent,
	&class_mindustry_game_EventType$SectorLaunchEvent,
	&class_mindustry_game_EventType$LaunchItemEvent,
	&class_mindustry_game_EventType$SectorInvasionEvent,
	&class_mindustry_game_EventType$SectorLoseEvent,
	&class_mindustry_game_EventType$SaveLoadEvent,
	&class_mindustry_game_EventType$TextureStreamEvent,
	&class_mindustry_game_EventType$DataPatchLoadEvent,
	&class_mindustry_game_EventType$WorldLoadEndEvent,
	&class_mindustry_game_EventType$WorldLoadBeginEvent,
	&class_mindustry_game_EventType$WorldLoadEvent,
	&class_mindustry_game_EventType$FileTreeInitEvent,
	&class_mindustry_game_EventType$MusicRegisterEvent,
	&class_mindustry_game_EventType$ClientLoadEvent,
	&class_mindustry_game_EventType$ModContentLoadEvent,
	&class_mindustry_game_EventType$AtlasPackEvent,
	&class_mindustry_game_EventType$ContentInitEvent,
	&class_mindustry_game_EventType$BlockInfoEvent,
	&class_mindustry_game_EventType$LineConfirmEvent,
	&class_mindustry_game_EventType$TurnEvent,
	&class_mindustry_game_EventType$WaveEvent,
	&class_mindustry_game_EventType$HostEvent,
	&class_mindustry_game_EventType$ResetEvent,
	&class_mindustry_game_EventType$PlayEvent,
	&class_mindustry_game_EventType$DisposeEvent,
	&class_mindustry_game_EventType$ServerLoadEvent,
	&class_mindustry_game_EventType$ClientCreateEvent,
	&class_mindustry_game_EventType$SaveWriteEvent,
	&class_mindustry_game_EventType$MapPublishEvent,
	&class_mindustry_game_EventType$MapMakeEvent,
	&class_mindustry_game_EventType$ResizeEvent,
	&class_mindustry_game_EventType$LoseEvent,
	&class_mindustry_game_EventType$WinEvent,
	&class_mindustry_game_EventType$Trigger,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType, 0, "()V", 1 },
};

Class class_mindustry_game_EventType{
		.nativeName = (intptr_t) "mindustry/game/EventType",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 90,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType = registerClass(&class_mindustry_game_EventType);

}
