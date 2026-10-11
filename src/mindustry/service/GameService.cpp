#include "mindustry/service/GameService.h"
#include "mindustry/game/EventType_SectorLaunchEvent.h"
#include "arc/func/Prov.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_48.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_47.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_49.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/content/TechTree.h"
#include "java/lang/Runnable.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_40.h"
#include "mindustry/game/EventType_SaveLoadEvent.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_42.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_41.h"
#include "mindustry/content/SectorPresets.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_44.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_43.h"
#include "mindustry/game/EventType_ClientChatEvent.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_46.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_45.h"
#include "arc/struct/Seq.h"
#include "mindustry/service/Achievement.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/game/SectorInfo.h"
#include "mindustry/service/GameService_invoke_arc_func_Prov_2.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "arc/func/Boolf.h"
#include "mindustry/service/GameService_invoke_arc_func_Prov_3.h"
#include "arc/Core.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "mindustry/game/EventType_SectorLaunchLoadoutEvent.h"
#include "java/util/Iterator.h"
#include "mindustry/world/blocks/production/AttributeCrafter_AttributeCrafterBuild.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_59.h"
#include "mindustry/service/GameService.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_58.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_19.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_17.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_18.h"
#include "arc/struct/ObjectMap_Values.h"
#include "mindustry/gen/Building.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_51.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_50.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_53.h"
#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_52.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_55.h"
#include "mindustry/content/Planets.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_54.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_57.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_56.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/entities/bullet/MassDriverBolt.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/EventType_UnitCreateEvent.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/game/EventType_UnlockEvent.h"
#include "mindustry/game/EventType_BlockDestroyEvent.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_19.h"
#include "mindustry/world/blocks/defense/Wall_WallBuild.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_18.h"
#include "mindustry/game/EventType_SectorCaptureEvent.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_37.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_36.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_17.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_39.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_16.h"
#include "mindustry/type/Sector.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_38.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/distribution/Conveyor.h"
#include "mindustry/game/EventType_BuildingBulletDestroyEvent.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_20.h"
#include "mindustry/game/EventType_MapPublishEvent.h"
#include "mindustry/game/EventType_LaunchItemEvent.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_33.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/game/EventType_BlockBuildEndEvent.h"
#include "arc/audio/Sound.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_35.h"
#include "mindustry/game/GameStats.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_34.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/game/EventType_WaveEvent.h"
#include "mindustry/net/Host.h"
#include "mindustry/Vars.h"
#include "arc/Events.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_29.h"
#include "mindustry/game/SectorInfo_ExportStat.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_26.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_25.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_28.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_27.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_22.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_21.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_24.h"
#include "mindustry/game/EventType_SchematicCreateEvent.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_23.h"
#include "mindustry/game/EventType_PickupEvent.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_31.h"
#include "arc/util/Timer.h"
#include "mindustry/service/GameService_invoke_java_lang_Runnable_30.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/game/EventType_UnitBulletDestroyEvent.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "arc/math/geom/Position.h"
#include "mindustry/service/SStat.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Liquid.h"
#include "arc/util/Structs.h"
#include "mindustry/type/Item.h"
#include "mindustry/content/Items.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/game/EventType_GeneratorPressureExplodeEvent.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/gen/BlockUnitc.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_24.h"
#include "mindustry/game/EventType_WinEvent.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_25.h"
#include "mindustry/net/Net.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_22.h"
#include "mindustry/world/Block.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_23.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_20.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_21.h"
#include "mindustry/game/EventType_MapMakeEvent.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/util/Timer_Task.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_28.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_29.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_26.h"
#include "arc/Application.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_27.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_62.h"
#include "arc/struct/IntSet.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_61.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_64.h"
#include "java/lang/String.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_63.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_65.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/game/EventType_UnitControlEvent.h"
#include "mindustry/game/EventType_UnitDrownEvent.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/service/GameService_invoke_arc_func_Cons_60.h"
#include "java/lang/Math.h"
#include "mindustry/gen/PowerGraphUpdaterc.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_33.h"
#include "mindustry/game/EventType_ResearchEvent.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_31.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_32.h"
#include "mindustry/service/GameService_invoke_arc_func_Boolf_30.h"
#include "mindustry/game/EventType_PlayerJoin.h"
#include "mindustry/game/EventType_PayloadDropEvent.h"
#include "java/lang/CharSequence.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/world/blocks/production/SolidPump_SolidPumpBuild.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/EventType_TurnEvent.h"
#include "mindustry/type/Category.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/game/Team.h"
#include "mindustry/game/EventType_ClientPreConnectEvent.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_service_GameService(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_service_GameService *) object;
	if (self->F_tmpTiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpTiles)->clazz)->markFunction)((jobject) self->F_tmpTiles, mark, depth + 1);
	if (self->F_blocksBuilt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blocksBuilt)->clazz)->markFunction)((jobject) self->F_blocksBuilt, mark, depth + 1);
	if (self->F_unitsBuilt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitsBuilt)->clazz)->markFunction)((jobject) self->F_unitsBuilt, mark, depth + 1);
	if (self->F_t5s)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_t5s)->clazz)->markFunction)((jobject) self->F_t5s, mark, depth + 1);
	if (self->F_checked)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checked)->clazz)->markFunction)((jobject) self->F_checked, mark, depth + 1);
	if (self->F_allTransportSerpulo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allTransportSerpulo)->clazz)->markFunction)((jobject) self->F_allTransportSerpulo, mark, depth + 1);
	if (self->F_allTransportErekir)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allTransportErekir)->clazz)->markFunction)((jobject) self->F_allTransportErekir, mark, depth + 1);
	if (self->F_allErekirBlocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allErekirBlocks)->clazz)->markFunction)((jobject) self->F_allErekirBlocks, mark, depth + 1);
	if (self->F_allSerpuloBlocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allSerpuloBlocks)->clazz)->markFunction)((jobject) self->F_allSerpuloBlocks, mark, depth + 1);
}

void clinit_mindustry_service_GameService(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_service_GameService(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_tmpTiles = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_blocksBuilt = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_unitsBuilt = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_t5s = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_checked = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_clientLoaded) == 0) goto label_1;
	}
	{
	LINE_NUMBER(44);
	((func_mindustry_service_GameService_registerEvents) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_registerEvents])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(46);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_service_GameService_enabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:enabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_completeAchievement_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:completeAchievement", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_clearAchievement_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:clearAchievement", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_service_GameService_isAchieved_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:isAchieved", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_mindustry_service_GameService_getStat_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:getStat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_setStat_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:setStat", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_storeStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:storeStats", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:checkAllBlocks", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_17(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_17 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_17);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(80);
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_registerEvents(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:registerEvents", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_18(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_18 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_18);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_Block)));
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_allTransportSerpulo = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_Block, 1), sp[1].o));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_19);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_Block)));
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_allTransportErekir = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_Block, 1), sp[1].o));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_20(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_20 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_20);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_Block)));
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_allSerpuloBlocks = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_Block, 1), sp[1].o));
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_21);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_Block)));
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_allErekirBlocks = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_Block, 1), sp[1].o));
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"units-built"_j));
	sp[3].o = ((jobject) &class_arc_struct_ObjectSet);
	sp[4].o = ((jobject) &class_java_lang_String);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Prov_2);
		sp[5].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_unitsBuilt = (jref) (checkCast(ctx, &class_arc_struct_ObjectSet, sp[1].o));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"blocks-built"_j));
	sp[3].o = ((jobject) &class_arc_struct_ObjectSet);
	sp[4].o = ((jobject) &class_java_lang_String);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Prov_3);
		sp[5].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_blocksBuilt = (jref) (checkCast(ctx, &class_arc_struct_ObjectSet, sp[1].o));
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (6));
	jint temp0 = jint(0);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_omura;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_reign;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_toxopid;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_eclipse;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_oct;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_corvus;
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_ObjectSet_with_Array1_java_lang_Object_R_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_service_GameService *) NULL_CHECK(sp[0].o))->F_t5s = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_allBlocksErekir;
	sp[2].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_allErekirBlocks;
	((func_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_allBlocksSerpulo;
	sp[2].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_allSerpuloBlocks;
	((func_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(100);
	frame[1].f = (jfloat(2));
	LINE_NUMBER(101);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Timer_schedule_java_lang_Runnable_float_float_R_arc_util_Timer$Task(ctx, sp[0].o, (frame[1].f), (frame[1].f));
	LINE_NUMBER(103);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_thorium;
	jint temp6 = (jint)((func_mindustry_type_Item_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp6 == 0) goto label_12;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_obtainThorium;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_12:;
	{
	LINE_NUMBER(104);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_titanium;
	jint temp0 = (jint)((func_mindustry_type_Item_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_obtainTitanium;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_13:;
	{
	LINE_NUMBER(106);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_origin;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(107);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_completeErekir;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(110);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_planetaryTerminal;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(111);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_completeSerpulo;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(114);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(115);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_installMod;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(118);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ok"_j))));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	sp[1].o = (jobject)((func_mindustry_world_Block_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_emoji_R_java_lang_String])(ctx, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_router;
	sp[2].o = (jobject)((func_mindustry_world_Block_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Block_emoji_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(119);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_routerLanguage;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_20:;
	{
	LINE_NUMBER(122);
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_22(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_22 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_22);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(123);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_captureAllSectors;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_22:;
	{
	LINE_NUMBER(126);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_openConsole;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_17);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandAttack;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_18);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_34(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_34 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TurnEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_35);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(180);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandBoost;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_20);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(186);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_newGame;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(192);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BuildingBulletDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(198);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockBuildEndEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockBuildEndEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(287);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TurnEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_39);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorLaunchLoadoutEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_40);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(306);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitCreateEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(319);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SaveLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(342);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitControlEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_43);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(352);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SchematicCreateEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_44);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(356);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_45);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(362);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$MapMakeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_46);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(364);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$MapPublishEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_47);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(366);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnlockEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_48);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(371);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_openWiki;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_openWiki;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_22);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(373);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_importMod;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_installMod;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(375);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_exclusionDeath;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_dieExclusion;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_24);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(377);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitDrownEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_impactPower;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_powerupImpactReactor;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_flameAmmo;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_useFlameAmmo;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_turretCool;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_coolTurret;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_suicideBomb;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_suicideBomb;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_blastGenerator;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_blastGenerator;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_forceProjectorBreak;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_breakForceProjector;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_neoplasmReact;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_neoplasmWater;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(397);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_shockwaveTowerUse;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_shockwaveTowerUse;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(399);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_enablePixelation;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_enablePixelation;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(401);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(407);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$GeneratorPressureExplodeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(413);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_shock;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_shockWetEnemy;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[1].o = (jobject)SF_mindustry_game_EventType$Trigger_blastFreeze;
	clinit_mindustry_service_Achievement(ctx);
	sp[2].o = (jobject)SF_mindustry_service_Achievement_blastFrozenUnit;
	((func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(417);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitBulletDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_51);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(434);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$LaunchItemEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_52);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(440);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$PickupEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_53);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(446);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitCreateEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(452);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorLaunchEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_55);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(456);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$LaunchItemEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_56);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(460);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WaveEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(471);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$PlayerJoin);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_58);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(477);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_27);
		sp[0].o = (jobject) proxy;
	}
	frame[2].o = sp[0].o;
	LINE_NUMBER(488);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResearchEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_59);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(489);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnlockEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_60);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(491);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(493);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WinEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_61);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(499);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientPreConnectEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_62);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(505);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorCaptureEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_63);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(542);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$PayloadDropEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_64(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_64 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_64);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(548);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientChatEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Cons_65(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Cons_65 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Cons_65);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_checkUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:checkUpdate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(556);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(557);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_maxUnitActive;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_23(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_23 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_23);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_service_SStat_max_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_max_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(559);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_24(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_24 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_24);
		sp[1].o = (jobject) proxy;
	}
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp1 < (10)) goto label_4;
	}
	{
	LINE_NUMBER(560);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_active10Polys;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(563);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(564);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_25(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_25 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_25);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(565);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_fillCoreAllCampaign;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	LINE_NUMBER(566);
	goto label_7;
	}
label_9:;
	LINE_NUMBER(568);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(570);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_powerGraph;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_PowerGraphUpdaterc, sp[0].o));
	LINE_NUMBER(571);
	sp[0].o = (jobject)((func_mindustry_gen_PowerGraphUpdaterc_graph_R_mindustry_world_blocks_power_PowerGraph) resolveInterfaceMethod(ctx, &class_mindustry_gen_PowerGraphUpdaterc, INDEX_mindustry_gen_PowerGraphUpdaterc_graph_R_mindustry_world_blocks_power_PowerGraph, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(572);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[3].o)))->F_all;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[3].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Building, sp[0].o))))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerGraph_hasPowerBalanceSamples_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_hasPowerBalanceSamples_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(573);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float])(ctx, (frame[3].o));
	frame[4].f = (temp0 * (jfloat(60.0f)));
	LINE_NUMBER(575);
	if ((floatCompare((frame[4].f), (jfloat(-10000.0f)), 1)) >= 0) goto label_18;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_negative10kPower;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_18:;
	{
	LINE_NUMBER(576);
	if ((floatCompare((frame[4].f), (jfloat(100000.0f)), -1)) <= 0) goto label_19;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_positive100kPower;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_19:;
	{
	LINE_NUMBER(577);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float])(ctx, (frame[3].o));
	if ((floatCompare(temp0, (jfloat(1000000.0f)), -1)) <= 0) goto label_15;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_store1milPower;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_15:;
	LINE_NUMBER(579);
	goto label_12;
label_1:;
	LINE_NUMBER(581);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_save(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:save", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(584);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"units-built"_j));
	sp[2].o = ((jobject) &class_java_lang_String);
	sp[3].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_unitsBuilt;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(585);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"blocks-built"_j));
	sp[2].o = ((jobject) &class_java_lang_String);
	sp[3].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_blocksBuilt;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:trigger", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(589);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_28);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_service_GameService_campaign_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:campaign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(597);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$trigger$0_mindustry_service_Achievement(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$trigger$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(590);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(591);
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(593);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_service_GameService_lambda$checkUpdate$2_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$checkUpdate$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(564);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_1;
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

jbool SM_mindustry_service_GameService_lambda$checkUpdate$1_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$checkUpdate$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_poly;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
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

jbool SM_mindustry_service_GameService_lambda$checkUpdate$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$checkUpdate$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
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

void SM_mindustry_service_GameService_lambda$registerEvents$53_mindustry_game_EventType$ClientChatEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$53", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((mindustry_game_EventType$ClientChatEvent *) NULL_CHECK((frame[0].o)))->F_message;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\uf6aa"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(550);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_useAnimdustryEmoji;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(552);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$51_mindustry_game_EventType$PayloadDropEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$51", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(543);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$PayloadDropEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$PayloadDropEvent *) NULL_CHECK((frame[1].o)))->F_carrier;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_26(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_26 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_26);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(544);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_dropUnitsCoreZone;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(546);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_service_GameService_lambda$registerEvents$52_mindustry_game_EventType$PayloadDropEvent_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$52", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(543);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_EventType$PayloadDropEvent *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_enemyCoreBuildRadius));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$49_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$49", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(507);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave) > (jint(5))) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) == 0) goto label_3;
	}
	{
	LINE_NUMBER(508);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_defeatAttack5Waves;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(511);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	if (((jint)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_buildingsDestroyed) != 0) goto label_2;
	}
	{
	LINE_NUMBER(512);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_captureNoBlocksBroken;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(516);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) == 0) goto label_6;
	}
	{
	LINE_NUMBER(517);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_attacksWon;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(521);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_captureBackground;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_27(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_27 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_27);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(525);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_captureAllSectors;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_erekir;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_isLastSector) == 0) goto label_12;
	}
	{
	LINE_NUMBER(529);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_completeErekir;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_isLastSector) == 0) goto label_14;
	}
	{
	LINE_NUMBER(533);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_completeSerpulo;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(538);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_sectorsControlled;
	sp[1].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_28(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_28 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_28);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_service_SStat_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_set_int])(ctx, sp[0].o, temp0);
	}
label_16:;
	LINE_NUMBER(540);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_service_GameService_lambda$registerEvents$50_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$50", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(524);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[0].o));
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

void SM_mindustry_service_GameService_lambda$registerEvents$48_mindustry_game_EventType$ClientPreConnectEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$48", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((mindustry_game_EventType$ClientPreConnectEvent *) NULL_CHECK((frame[0].o)))->F_host;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$ClientPreConnectEvent *) NULL_CHECK((frame[0].o)))->F_host;
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK(sp[0].o))->F_address;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steam:"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$ClientPreConnectEvent *) NULL_CHECK((frame[0].o)))->F_host;
	sp[0].o = (jobject)((mindustry_net_Host *) NULL_CHECK(sp[0].o))->F_address;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"192."_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(501);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_joinCommunityServer;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(503);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$47_mindustry_game_EventType$WinEvent(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$47", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(494);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) == 0) goto label_1;
	}
	{
	LINE_NUMBER(495);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_pvpsWon;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(497);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$46_java_lang_Runnable_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$46", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(489);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$45_java_lang_Runnable_mindustry_game_EventType$ResearchEvent(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$45", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(488);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$43(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$43", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	{
	LINE_NUMBER(478);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_router;
	jint temp0 = (jint)((func_mindustry_world_Block_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_researchRouter;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(480);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_all;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_29(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_29 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_29);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(481);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_researchAll;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(484);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_microProcessor;
	jint temp0 = (jint)((func_mindustry_world_Block_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_researchLogic;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_4:;
	LINE_NUMBER(485);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_service_GameService_lambda$registerEvents$44_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$44", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_locked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_locked_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$42_mindustry_game_EventType$PlayerJoin(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$42", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(472);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(473);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_maxPlayersServer;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[1].o);
	((func_mindustry_service_SStat_max_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_max_int])(ctx, sp[0].o, temp0);
	}
label_1:;
	LINE_NUMBER(475);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$41_mindustry_game_EventType$WaveEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$41", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(461);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(462);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_maxWavesSurvived;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((func_mindustry_service_SStat_max_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_max_int])(ctx, sp[0].o, ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave));
	LINE_NUMBER(465);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	if (((jint)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_buildingsBuilt) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave) < (10)) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	if (((jint)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_id) == (263)) goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(466);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_survive10WavesNoBlocks;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(469);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$40_mindustry_game_EventType$LaunchItemEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$40", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(457);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_itemsLaunched;
	sp[1].o = (jobject)((mindustry_game_EventType$LaunchItemEvent *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_mindustry_service_SStat_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add_int])(ctx, sp[0].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount));
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$39_mindustry_game_EventType$SectorLaunchEvent(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$39", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(453);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_timesLaunched;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$38_mindustry_game_EventType$UnitCreateEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$38", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(447);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitCreateEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(448);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_unitsBuilt;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$37_mindustry_game_EventType$PickupEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$37", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((mindustry_game_EventType$PickupEvent *) NULL_CHECK((frame[1].o)))->F_carrier;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$PickupEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_t5s;
	sp[1].o = (jobject)((mindustry_game_EventType$PickupEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(442);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_pickupT5;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(444);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$36_mindustry_game_EventType$LaunchItemEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$36", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(435);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(436);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_launchItemPad;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$35_mindustry_game_EventType$UnitBulletDestroyEvent(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$35", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(418);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	if ((--sp)->o == nullptr) goto label_1;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_EventType$UnitBulletDestroyEvent *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitBulletDestroyEvent *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_owner;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_defense_Wall$WallBuild)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(421);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_killEnemyPhaseWall;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitBulletDestroyEvent *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_eclipse;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitBulletDestroyEvent *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_owner;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild)) == 0) goto label_5;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_duo;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(425);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_killEclipseDuo;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitBulletDestroyEvent *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_type;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_entities_bullet_MassDriverBolt)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(429);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_killMassDriver;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(432);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$34_mindustry_game_EventType$GeneratorPressureExplodeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$34", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(408);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$GeneratorPressureExplodeEvent *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_neoplasiaReactor;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(409);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_neoplasiaExplosion;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(411);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$33(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$33", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(403);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_reactorsOverheated;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(405);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$32_mindustry_game_EventType$UnitDrownEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$32", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDrownEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(379);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_drown;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(381);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$31_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$31", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_game_EventType$UnlockEvent *) NULL_CHECK((frame[0].o)))->F_content;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_thorium;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_obtainThorium;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_game_EventType$UnlockEvent *) NULL_CHECK((frame[0].o)))->F_content;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_titanium;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_obtainTitanium;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(369);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$30_mindustry_game_EventType$MapPublishEvent(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$30", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(364);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_mapsPublished;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$29_mindustry_game_EventType$MapMakeEvent(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$29", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(362);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_mapsMade;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$28_mindustry_game_EventType$BlockDestroyEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$28", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(357);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockDestroyEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(358);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_blocksDestroyed;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$27_mindustry_game_EventType$SchematicCreateEvent(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$27", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(353);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_schematicsCreated;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$26_mindustry_game_EventType$UnitControlEvent(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$26", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitControlEvent *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_BlockUnitc)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_BlockUnitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(344);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_becomeRouter;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitControlEvent *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_BlockUnitc)) == 0) goto label_6;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_BlockUnitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building, (frame[1].o)))(ctx, (frame[1].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(348);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_controlTurret;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(350);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$22_mindustry_game_EventType$SaveLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$22", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(319);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$23(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$23", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(319);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$24(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$24", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(321);
	frame[1].i = (jint(0));
	LINE_NUMBER(322);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(323);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(324);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_t5s;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(326);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_buildT5;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_unitsBuilt;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[3].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(330);
	frame[1].i = (jint(1));
	}
label_8:;
	LINE_NUMBER(333);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(335);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(336);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_unitTypesBuilt;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_30(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_30 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_service_SStat_max_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_max_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(337);
	((func_mindustry_service_GameService_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_save])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(340);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_service_GameService_lambda$registerEvents$25_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$25", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_unitsBuilt;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_UnitType_isHidden_R_boolean])(ctx, (frame[1].o));
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

void M_mindustry_service_GameService_lambda$registerEvents$20_mindustry_game_EventType$UnitCreateEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$20", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitCreateEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_unitsBuilt;
	sp[1].o = (jobject)((mindustry_game_EventType$UnitCreateEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(309);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_unitTypesBuilt;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_31(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_31 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_service_SStat_max_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_max_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(310);
	((func_mindustry_service_GameService_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_save])(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_t5s;
	sp[1].o = (jobject)((mindustry_game_EventType$UnitCreateEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(314);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_buildT5;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(317);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_service_GameService_lambda$registerEvents$21_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$21", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_unitsBuilt;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_UnitType_isHidden_R_boolean])(ctx, (frame[1].o));
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

void SM_mindustry_service_GameService_lambda$registerEvents$19_mindustry_game_EventType$SectorLaunchLoadoutEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$19", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorLaunchLoadoutEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	sp[1].o = (jobject)((mindustry_game_EventType$SectorLaunchLoadoutEvent *) NULL_CHECK((frame[0].o)))->F_loadout;
	jint temp0 = (jint)((func_mindustry_game_Schematics_isDefaultLoadout_mindustry_game_Schematic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_isDefaultLoadout_mindustry_game_Schematic_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(302);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_launchCoreSchematic;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(304);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$18_mindustry_game_EventType$TurnEvent(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$18", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(288);
	frame[1].i = (jint(0));
	LINE_NUMBER(289);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[3].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(292);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((func_mindustry_type_Sector_items_R_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_items_R_mindustry_type_ItemSeq])(ctx, (frame[5].o));
	frame[1].i = (temp0 + ((jint)((mindustry_type_ItemSeq *) NULL_CHECK(sp[0].o))->F_total));
	}
label_8:;
	LINE_NUMBER(294);
	goto label_5;
label_6:;
	LINE_NUMBER(295);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(297);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_totalCampaignItems;
	((func_mindustry_service_SStat_max_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_max_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$15_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$15", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_1;
	}
	{
	LINE_NUMBER(206);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_blocksBuilt;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_proximity;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_32(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_32 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_32);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(209);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_chainRouters;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_groundFactory;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(213);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_buildGroundFactory;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_production_AttributeCrafter$AttributeCrafterBuild)) == 0) goto label_9;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_production_AttributeCrafter$AttributeCrafterBuild, (frame[4].o)));
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_AttributeCrafter$AttributeCrafterBuild *) NULL_CHECK((frame[2].o)))->F_attrsum), (jfloat(0)), -1)) > 0) goto label_11;
	}
label_9:;
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_production_SolidPump$SolidPumpBuild)) == 0) goto label_13;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_production_SolidPump$SolidPumpBuild, (frame[4].o)));
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_SolidPump$SolidPumpBuild *) NULL_CHECK((frame[3].o)))->F_boost), (jfloat(0)), -1)) <= 0) goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(217);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_boostBuildingFloor;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(220);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_allTransportOneMap;
	jint temp0 = (jint)((func_mindustry_service_Achievement_isAchieved_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_isAchieved_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(221);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_erekir;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_allTransportErekir;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_service_GameService *) NULL_CHECK(sp[-1].o))->F_allTransportSerpulo;
label_18:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(222);
	frame[3].i = (jint(1));
	LINE_NUMBER(223);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_23:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_24;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(224);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int])(ctx, sp[0].o, (frame[7].o));
	if (temp0 != 0) goto label_26;
	}
	{
	LINE_NUMBER(225);
	frame[3].i = (jint(0));
	LINE_NUMBER(226);
	goto label_24;
	}
label_26:;
	{
	LINE_NUMBER(223);
	INST_IINC(6, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(229);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(230);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_allTransportOneMap;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_mendProjector;
	if (sp[0].o != sp[1].o) goto label_30;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_buildMendProjector;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_30:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_overdriveProjector;
	if (sp[0].o != sp[1].o) goto label_31;
	}
	clinit_mindustry_service_Achievement(ctx);
	(sp++)->o = SF_mindustry_service_Achievement_buildOverdriveProjector;
	POP_N(1); // Pop method args
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
label_31:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_waterExtractor;
	if (sp[0].o != sp[1].o) goto label_32;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_tmpTiles;
	sp[0].o = (jobject)((func_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_arc_func_Boolf_33(ctx);
		auto proxy = (mindustry_service_GameService_invoke_arc_func_Boolf_33 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_arc_func_Boolf_33);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(239);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_buildWexWater;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_32:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_blocksBuilt;
	sp[1].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(244);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_erekir;
	if (sp[0].o != sp[1].o) goto label_37;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_allBlocksErekir;
	sp[2].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_allErekirBlocks;
	((func_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_allBlocksSerpulo;
	sp[2].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_allSerpuloBlocks;
	((func_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_39:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_blocksBuilt;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"meltdown"_j))));
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_blocksBuilt;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spectre"_j))));
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_blocksBuilt;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"foreshadow"_j))));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(251);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_buildMeltdownSpectre;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_40:;
	{
	LINE_NUMBER(254);
	((func_mindustry_service_GameService_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_save])(ctx, (frame[0].o));
	}
label_35:;
	{
	LINE_NUMBER(257);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_circleConveyor;
	jint temp0 = (jint)((func_mindustry_service_Achievement_isAchieved_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_isAchieved_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_Conveyor)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_checked;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	frame[2].o = sp[0].o;
	LINE_NUMBER(261);
	frame[3].i = (jint(0));
	}
label_45:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_46;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_checked;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o != nullptr) goto label_49;
	}
	goto label_1;
label_49:;
	{
	LINE_NUMBER(264);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_rotation));
	frame[4].o = sp[0].o;
	LINE_NUMBER(265);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_Conveyor)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(266);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(261);
	INST_IINC(3, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(272);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_checked;
	if (((jint)((arc_struct_IntSet *) NULL_CHECK(sp[0].o))->F_size) != (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(273);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_circleConveyor;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_54;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isLocal_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_54;
	}
	{
	if (((jint)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_54;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_breakSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_rockBreak;
	if (sp[0].o != sp[1].o) goto label_54;
	}
	{
	LINE_NUMBER(282);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_bouldersDeconstructed;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	}
label_54:;
	LINE_NUMBER(285);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_service_GameService_lambda$registerEvents$17_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$17", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
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

jbool SM_mindustry_service_GameService_lambda$registerEvents$16_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$16", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
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

void M_mindustry_service_GameService_lambda$registerEvents$14_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$14", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	clinit_mindustry_content_SectorPresets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_SectorPresets_groundZero;
	sp[1].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[1].o))->F_sector;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreNucleus;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(200);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_nucleusGroundZero;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(202);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$13_mindustry_game_EventType$BuildingBulletDestroyEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$13", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BuildingBulletDestroyEvent *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_scatter;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BuildingBulletDestroyEvent *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BuildingBulletDestroyEvent *) NULL_CHECK((frame[1].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_owner;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Unit)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_flare;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(194);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_destroyScatterFlare;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$11(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$11", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_service_GameService_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_service_GameService_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_service_GameService_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$12(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$12", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 < (10000)) goto label_1;
	}
	{
	LINE_NUMBER(188);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_drop10kitems;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(190);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$10(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$10", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(182);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_boostUnit;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$9(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$9", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_hoverUnitLiquid;
	jint temp0 = (jint)((func_mindustry_service_Achievement_isAchieved_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_isAchieved_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[0].o);
	if ((longCompare((temp0 % (jlong(20ll))), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(164);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_elude;
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(165);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_7;
	}
	{
	LINE_NUMBER(168);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_hoverUnitLiquid;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	LINE_NUMBER(169);
	goto label_1;
	}
label_7:;
	LINE_NUMBER(171);
	goto label_5;
label_1:;
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation), (jfloat(0.25f)), -1)) < 0) goto label_10;
	}
	{
	LINE_NUMBER(176);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_boostUnit;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_10:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$8_mindustry_game_EventType$TurnEvent(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$8", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(147);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(148);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[3].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_production;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o));
	LINE_NUMBER(152);
	if ((floatCompare(((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[7].o)))->F_mean), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	frame[1].f = ((frame[1].f) + (((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[7].o)))->F_mean) * (jfloat(60.0f))));
	}
label_12:;
	LINE_NUMBER(153);
	goto label_10;
label_8:;
	LINE_NUMBER(155);
	goto label_5;
label_6:;
	LINE_NUMBER(156);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(158);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_maxProduction;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[1].f));
	((func_mindustry_service_SStat_max_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_max_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$7_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(137);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_unitsDestroyed;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isBoss_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isBoss_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(140);
	clinit_mindustry_service_SStat(ctx);
	sp[0].o = (jobject)SF_mindustry_service_SStat_bossesDefeated;
	((func_mindustry_service_SStat_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_add])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_GameService_lambda$registerEvents$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_mindustry_service_GameService_campaign_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_campaign_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(130);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_issueAttackCommand;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_service_GameService_lambda$registerEvents$5(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	{
	LINE_NUMBER(126);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_openConsole;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_service_GameService_lambda$registerEvents$4_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, (frame[0].o));
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

jbool SM_mindustry_service_GameService_lambda$registerEvents$3_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_erekir;
	jint temp0 = (jint)((func_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVanilla_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isVanilla_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_storage_CoreBlock)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_shown;
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

jbool SM_mindustry_service_GameService_lambda$registerEvents$2_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	jint temp0 = (jint)((func_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVanilla_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isVanilla_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_storage_CoreBlock)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_shown;
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

jbool SM_mindustry_service_GameService_lambda$registerEvents$1_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_category;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_erekir;
	jint temp0 = (jint)((func_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVanilla_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isVanilla_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_shown;
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

jbool SM_mindustry_service_GameService_lambda$registerEvents$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$registerEvents$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_GameService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_category;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	jint temp0 = (jint)((func_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVanilla_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isVanilla_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_shown;
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

jbool M_mindustry_service_GameService_lambda$checkAllBlocks$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$checkAllBlocks$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_service_GameService *) NULL_CHECK((frame[0].o)))->F_blocksBuilt;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
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

void M_mindustry_service_GameService_lambda$init$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/GameService:lambda$init$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	((func_mindustry_service_GameService_registerEvents) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_GameService_registerEvents])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_service_GameService[] {
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
	(void *) M_mindustry_service_GameService_init,
	(void *) M_mindustry_service_GameService_enabled_R_boolean,
	(void *) M_mindustry_service_GameService_completeAchievement_java_lang_String,
	(void *) M_mindustry_service_GameService_clearAchievement_java_lang_String,
	(void *) M_mindustry_service_GameService_isAchieved_java_lang_String_R_boolean,
	(void *) M_mindustry_service_GameService_getStat_java_lang_String_int_R_int,
	(void *) M_mindustry_service_GameService_setStat_java_lang_String_int,
	(void *) M_mindustry_service_GameService_storeStats,
	(void *) M_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block,
	(void *) M_mindustry_service_GameService_registerEvents,
	(void *) M_mindustry_service_GameService_checkUpdate,
	(void *) M_mindustry_service_GameService_save,
	(void *) M_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement,
	(void *) M_mindustry_service_GameService_campaign_R_boolean,
	(void *) M_mindustry_service_GameService_lambda$trigger$0_mindustry_service_Achievement,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$51_mindustry_game_EventType$PayloadDropEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$41_mindustry_game_EventType$WaveEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$38_mindustry_game_EventType$UnitCreateEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$37_mindustry_game_EventType$PickupEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$36_mindustry_game_EventType$LaunchItemEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$34_mindustry_game_EventType$GeneratorPressureExplodeEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$33,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$32_mindustry_game_EventType$UnitDrownEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$28_mindustry_game_EventType$BlockDestroyEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$22_mindustry_game_EventType$SaveLoadEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$23,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$24,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$25_mindustry_type_UnitType_R_boolean,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$20_mindustry_game_EventType$UnitCreateEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$21_mindustry_type_UnitType_R_boolean,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$15_mindustry_game_EventType$BlockBuildEndEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$14_mindustry_game_EventType$BlockBuildEndEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$13_mindustry_game_EventType$BuildingBulletDestroyEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$11,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$12,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$10,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$9,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$7_mindustry_game_EventType$UnitDestroyEvent,
	(void *) M_mindustry_service_GameService_lambda$registerEvents$6,
	(void *) M_mindustry_service_GameService_lambda$checkAllBlocks$0_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_service_GameService_lambda$init$0_mindustry_game_EventType$ClientLoadEvent,
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
	{ "enabled", "()Z" },
	{ "completeAchievement", "(Ljava/lang/String;)V" },
	{ "clearAchievement", "(Ljava/lang/String;)V" },
	{ "isAchieved", "(Ljava/lang/String;)Z" },
	{ "getStat", "(Ljava/lang/String;I)I" },
	{ "setStat", "(Ljava/lang/String;I)V" },
	{ "storeStats", "()V" },
	{ "checkAllBlocks", "(Lmindustry/service/Achievement;[Lmindustry/world/Block;)V" },
	{ "registerEvents", "()V" },
	{ "checkUpdate", "()V" },
	{ "save", "()V" },
	{ "trigger", "(Lmindustry/game/EventType$Trigger;Lmindustry/service/Achievement;)V" },
	{ "campaign", "()Z" },
	{ "lambda$trigger$0", "(Lmindustry/service/Achievement;)V" },
	{ "lambda$registerEvents$51", "(Lmindustry/game/EventType$PayloadDropEvent;)V" },
	{ "lambda$registerEvents$41", "(Lmindustry/game/EventType$WaveEvent;)V" },
	{ "lambda$registerEvents$38", "(Lmindustry/game/EventType$UnitCreateEvent;)V" },
	{ "lambda$registerEvents$37", "(Lmindustry/game/EventType$PickupEvent;)V" },
	{ "lambda$registerEvents$36", "(Lmindustry/game/EventType$LaunchItemEvent;)V" },
	{ "lambda$registerEvents$34", "(Lmindustry/game/EventType$GeneratorPressureExplodeEvent;)V" },
	{ "lambda$registerEvents$33", "()V" },
	{ "lambda$registerEvents$32", "(Lmindustry/game/EventType$UnitDrownEvent;)V" },
	{ "lambda$registerEvents$28", "(Lmindustry/game/EventType$BlockDestroyEvent;)V" },
	{ "lambda$registerEvents$22", "(Lmindustry/game/EventType$SaveLoadEvent;)V" },
	{ "lambda$registerEvents$23", "()V" },
	{ "lambda$registerEvents$24", "()V" },
	{ "lambda$registerEvents$25", "(Lmindustry/type/UnitType;)Z" },
	{ "lambda$registerEvents$20", "(Lmindustry/game/EventType$UnitCreateEvent;)V" },
	{ "lambda$registerEvents$21", "(Lmindustry/type/UnitType;)Z" },
	{ "lambda$registerEvents$15", "(Lmindustry/game/EventType$BlockBuildEndEvent;)V" },
	{ "lambda$registerEvents$14", "(Lmindustry/game/EventType$BlockBuildEndEvent;)V" },
	{ "lambda$registerEvents$13", "(Lmindustry/game/EventType$BuildingBulletDestroyEvent;)V" },
	{ "lambda$registerEvents$11", "()V" },
	{ "lambda$registerEvents$12", "()V" },
	{ "lambda$registerEvents$10", "()V" },
	{ "lambda$registerEvents$9", "()V" },
	{ "lambda$registerEvents$7", "(Lmindustry/game/EventType$UnitDestroyEvent;)V" },
	{ "lambda$registerEvents$6", "()V" },
	{ "lambda$checkAllBlocks$0", "(Lmindustry/world/Block;)Z" },
	{ "lambda$init$0", "(Lmindustry/game/EventType$ClientLoadEvent;)V" },
};

static FieldMetadata fields[] {
	{ "tmpTiles", &class_arc_struct_Seq, offsetof(mindustry_service_GameService, F_tmpTiles), "Larc/struct/Seq;", 2 },
	{ "blocksBuilt", &class_arc_struct_ObjectSet, offsetof(mindustry_service_GameService, F_blocksBuilt), "Larc/struct/ObjectSet;", 2 },
	{ "unitsBuilt", &class_arc_struct_ObjectSet, offsetof(mindustry_service_GameService, F_unitsBuilt), "Larc/struct/ObjectSet;", 2 },
	{ "t5s", &class_arc_struct_ObjectSet, offsetof(mindustry_service_GameService, F_t5s), "Larc/struct/ObjectSet;", 2 },
	{ "checked", &class_arc_struct_IntSet, offsetof(mindustry_service_GameService, F_checked), "Larc/struct/IntSet;", 2 },
	{ "allTransportSerpulo", getArrayClass(&class_mindustry_world_Block, 1), offsetof(mindustry_service_GameService, F_allTransportSerpulo), "[Lmindustry/world/Block;", 2 },
	{ "allTransportErekir", getArrayClass(&class_mindustry_world_Block, 1), offsetof(mindustry_service_GameService, F_allTransportErekir), "[Lmindustry/world/Block;", 2 },
	{ "allErekirBlocks", getArrayClass(&class_mindustry_world_Block, 1), offsetof(mindustry_service_GameService, F_allErekirBlocks), "[Lmindustry/world/Block;", 2 },
	{ "allSerpuloBlocks", getArrayClass(&class_mindustry_world_Block, 1), offsetof(mindustry_service_GameService, F_allSerpuloBlocks), "[Lmindustry/world/Block;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_service_GameService, 0, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_service_GameService_init, VTABLE_mindustry_service_GameService_init, "()V", 1 },
	{ "enabled", (intptr_t) M_mindustry_service_GameService_enabled_R_boolean, VTABLE_mindustry_service_GameService_enabled_R_boolean, "()Z", 1 },
	{ "completeAchievement", (intptr_t) M_mindustry_service_GameService_completeAchievement_java_lang_String, VTABLE_mindustry_service_GameService_completeAchievement_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "clearAchievement", (intptr_t) M_mindustry_service_GameService_clearAchievement_java_lang_String, VTABLE_mindustry_service_GameService_clearAchievement_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "isAchieved", (intptr_t) M_mindustry_service_GameService_isAchieved_java_lang_String_R_boolean, VTABLE_mindustry_service_GameService_isAchieved_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getStat", (intptr_t) M_mindustry_service_GameService_getStat_java_lang_String_int_R_int, VTABLE_mindustry_service_GameService_getStat_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "setStat", (intptr_t) M_mindustry_service_GameService_setStat_java_lang_String_int, VTABLE_mindustry_service_GameService_setStat_java_lang_String_int, "(Ljava/lang/String;I)V", 1 },
	{ "storeStats", (intptr_t) M_mindustry_service_GameService_storeStats, VTABLE_mindustry_service_GameService_storeStats, "()V", 1 },
	{ "checkAllBlocks", (intptr_t) M_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block, VTABLE_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block, "(Lmindustry/service/Achievement;[Lmindustry/world/Block;)V", 2 },
	{ "registerEvents", (intptr_t) M_mindustry_service_GameService_registerEvents, VTABLE_mindustry_service_GameService_registerEvents, "()V", 2 },
	{ "checkUpdate", (intptr_t) M_mindustry_service_GameService_checkUpdate, VTABLE_mindustry_service_GameService_checkUpdate, "()V", 2 },
	{ "save", (intptr_t) M_mindustry_service_GameService_save, VTABLE_mindustry_service_GameService_save, "()V", 2 },
	{ "trigger", (intptr_t) M_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement, VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement, "(Lmindustry/game/EventType$Trigger;Lmindustry/service/Achievement;)V", 2 },
	{ "campaign", (intptr_t) M_mindustry_service_GameService_campaign_R_boolean, VTABLE_mindustry_service_GameService_campaign_R_boolean, "()Z", 2 },
	{ "lambda$trigger$0", (intptr_t) M_mindustry_service_GameService_lambda$trigger$0_mindustry_service_Achievement, VTABLE_mindustry_service_GameService_lambda$trigger$0_mindustry_service_Achievement, "(Lmindustry/service/Achievement;)V", 4098 },
	{ "lambda$checkUpdate$2", (intptr_t) SM_mindustry_service_GameService_lambda$checkUpdate$2_mindustry_gen_Building_mindustry_type_Item_R_boolean, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 4106 },
	{ "lambda$checkUpdate$1", (intptr_t) SM_mindustry_service_GameService_lambda$checkUpdate$1_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$checkUpdate$0", (intptr_t) SM_mindustry_service_GameService_lambda$checkUpdate$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$registerEvents$53", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$53_mindustry_game_EventType$ClientChatEvent, 0, "(Lmindustry/game/EventType$ClientChatEvent;)V", 4106 },
	{ "lambda$registerEvents$51", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$51_mindustry_game_EventType$PayloadDropEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$51_mindustry_game_EventType$PayloadDropEvent, "(Lmindustry/game/EventType$PayloadDropEvent;)V", 4098 },
	{ "lambda$registerEvents$52", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$52_mindustry_game_EventType$PayloadDropEvent_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean, 0, "(Lmindustry/game/EventType$PayloadDropEvent;Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)Z", 4106 },
	{ "lambda$registerEvents$49", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$49_mindustry_game_EventType$SectorCaptureEvent, 0, "(Lmindustry/game/EventType$SectorCaptureEvent;)V", 4106 },
	{ "lambda$registerEvents$50", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$50_mindustry_type_Sector_R_boolean, 0, "(Lmindustry/type/Sector;)Z", 4106 },
	{ "lambda$registerEvents$48", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$48_mindustry_game_EventType$ClientPreConnectEvent, 0, "(Lmindustry/game/EventType$ClientPreConnectEvent;)V", 4106 },
	{ "lambda$registerEvents$47", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$47_mindustry_game_EventType$WinEvent, 0, "(Lmindustry/game/EventType$WinEvent;)V", 4106 },
	{ "lambda$registerEvents$46", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$46_java_lang_Runnable_mindustry_game_EventType$UnlockEvent, 0, "(Ljava/lang/Runnable;Lmindustry/game/EventType$UnlockEvent;)V", 4106 },
	{ "lambda$registerEvents$45", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$45_java_lang_Runnable_mindustry_game_EventType$ResearchEvent, 0, "(Ljava/lang/Runnable;Lmindustry/game/EventType$ResearchEvent;)V", 4106 },
	{ "lambda$registerEvents$43", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$43, 0, "()V", 4106 },
	{ "lambda$registerEvents$44", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$44_mindustry_content_TechTree$TechNode_R_boolean, 0, "(Lmindustry/content/TechTree$TechNode;)Z", 4106 },
	{ "lambda$registerEvents$42", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$42_mindustry_game_EventType$PlayerJoin, 0, "(Lmindustry/game/EventType$PlayerJoin;)V", 4106 },
	{ "lambda$registerEvents$41", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$41_mindustry_game_EventType$WaveEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$41_mindustry_game_EventType$WaveEvent, "(Lmindustry/game/EventType$WaveEvent;)V", 4098 },
	{ "lambda$registerEvents$40", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$40_mindustry_game_EventType$LaunchItemEvent, 0, "(Lmindustry/game/EventType$LaunchItemEvent;)V", 4106 },
	{ "lambda$registerEvents$39", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$39_mindustry_game_EventType$SectorLaunchEvent, 0, "(Lmindustry/game/EventType$SectorLaunchEvent;)V", 4106 },
	{ "lambda$registerEvents$38", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$38_mindustry_game_EventType$UnitCreateEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$38_mindustry_game_EventType$UnitCreateEvent, "(Lmindustry/game/EventType$UnitCreateEvent;)V", 4098 },
	{ "lambda$registerEvents$37", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$37_mindustry_game_EventType$PickupEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$37_mindustry_game_EventType$PickupEvent, "(Lmindustry/game/EventType$PickupEvent;)V", 4098 },
	{ "lambda$registerEvents$36", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$36_mindustry_game_EventType$LaunchItemEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$36_mindustry_game_EventType$LaunchItemEvent, "(Lmindustry/game/EventType$LaunchItemEvent;)V", 4098 },
	{ "lambda$registerEvents$35", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$35_mindustry_game_EventType$UnitBulletDestroyEvent, 0, "(Lmindustry/game/EventType$UnitBulletDestroyEvent;)V", 4106 },
	{ "lambda$registerEvents$34", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$34_mindustry_game_EventType$GeneratorPressureExplodeEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$34_mindustry_game_EventType$GeneratorPressureExplodeEvent, "(Lmindustry/game/EventType$GeneratorPressureExplodeEvent;)V", 4098 },
	{ "lambda$registerEvents$33", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$33, VTABLE_mindustry_service_GameService_lambda$registerEvents$33, "()V", 4098 },
	{ "lambda$registerEvents$32", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$32_mindustry_game_EventType$UnitDrownEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$32_mindustry_game_EventType$UnitDrownEvent, "(Lmindustry/game/EventType$UnitDrownEvent;)V", 4098 },
	{ "lambda$registerEvents$31", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$31_mindustry_game_EventType$UnlockEvent, 0, "(Lmindustry/game/EventType$UnlockEvent;)V", 4106 },
	{ "lambda$registerEvents$30", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$30_mindustry_game_EventType$MapPublishEvent, 0, "(Lmindustry/game/EventType$MapPublishEvent;)V", 4106 },
	{ "lambda$registerEvents$29", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$29_mindustry_game_EventType$MapMakeEvent, 0, "(Lmindustry/game/EventType$MapMakeEvent;)V", 4106 },
	{ "lambda$registerEvents$28", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$28_mindustry_game_EventType$BlockDestroyEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$28_mindustry_game_EventType$BlockDestroyEvent, "(Lmindustry/game/EventType$BlockDestroyEvent;)V", 4098 },
	{ "lambda$registerEvents$27", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$27_mindustry_game_EventType$SchematicCreateEvent, 0, "(Lmindustry/game/EventType$SchematicCreateEvent;)V", 4106 },
	{ "lambda$registerEvents$26", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$26_mindustry_game_EventType$UnitControlEvent, 0, "(Lmindustry/game/EventType$UnitControlEvent;)V", 4106 },
	{ "lambda$registerEvents$22", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$22_mindustry_game_EventType$SaveLoadEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$22_mindustry_game_EventType$SaveLoadEvent, "(Lmindustry/game/EventType$SaveLoadEvent;)V", 4098 },
	{ "lambda$registerEvents$23", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$23, VTABLE_mindustry_service_GameService_lambda$registerEvents$23, "()V", 4098 },
	{ "lambda$registerEvents$24", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$24, VTABLE_mindustry_service_GameService_lambda$registerEvents$24, "()V", 4098 },
	{ "lambda$registerEvents$25", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$25_mindustry_type_UnitType_R_boolean, VTABLE_mindustry_service_GameService_lambda$registerEvents$25_mindustry_type_UnitType_R_boolean, "(Lmindustry/type/UnitType;)Z", 4098 },
	{ "lambda$registerEvents$20", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$20_mindustry_game_EventType$UnitCreateEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$20_mindustry_game_EventType$UnitCreateEvent, "(Lmindustry/game/EventType$UnitCreateEvent;)V", 4098 },
	{ "lambda$registerEvents$21", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$21_mindustry_type_UnitType_R_boolean, VTABLE_mindustry_service_GameService_lambda$registerEvents$21_mindustry_type_UnitType_R_boolean, "(Lmindustry/type/UnitType;)Z", 4098 },
	{ "lambda$registerEvents$19", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$19_mindustry_game_EventType$SectorLaunchLoadoutEvent, 0, "(Lmindustry/game/EventType$SectorLaunchLoadoutEvent;)V", 4106 },
	{ "lambda$registerEvents$18", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$18_mindustry_game_EventType$TurnEvent, 0, "(Lmindustry/game/EventType$TurnEvent;)V", 4106 },
	{ "lambda$registerEvents$15", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$15_mindustry_game_EventType$BlockBuildEndEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$15_mindustry_game_EventType$BlockBuildEndEvent, "(Lmindustry/game/EventType$BlockBuildEndEvent;)V", 4098 },
	{ "lambda$registerEvents$17", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$17_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$registerEvents$16", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$16_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$registerEvents$14", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$14_mindustry_game_EventType$BlockBuildEndEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$14_mindustry_game_EventType$BlockBuildEndEvent, "(Lmindustry/game/EventType$BlockBuildEndEvent;)V", 4098 },
	{ "lambda$registerEvents$13", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$13_mindustry_game_EventType$BuildingBulletDestroyEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$13_mindustry_game_EventType$BuildingBulletDestroyEvent, "(Lmindustry/game/EventType$BuildingBulletDestroyEvent;)V", 4098 },
	{ "lambda$registerEvents$11", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$11, VTABLE_mindustry_service_GameService_lambda$registerEvents$11, "()V", 4098 },
	{ "lambda$registerEvents$12", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$12, VTABLE_mindustry_service_GameService_lambda$registerEvents$12, "()V", 4098 },
	{ "lambda$registerEvents$10", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$10, VTABLE_mindustry_service_GameService_lambda$registerEvents$10, "()V", 4098 },
	{ "lambda$registerEvents$9", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$9, VTABLE_mindustry_service_GameService_lambda$registerEvents$9, "()V", 4098 },
	{ "lambda$registerEvents$8", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$8_mindustry_game_EventType$TurnEvent, 0, "(Lmindustry/game/EventType$TurnEvent;)V", 4106 },
	{ "lambda$registerEvents$7", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$7_mindustry_game_EventType$UnitDestroyEvent, VTABLE_mindustry_service_GameService_lambda$registerEvents$7_mindustry_game_EventType$UnitDestroyEvent, "(Lmindustry/game/EventType$UnitDestroyEvent;)V", 4098 },
	{ "lambda$registerEvents$6", (intptr_t) M_mindustry_service_GameService_lambda$registerEvents$6, VTABLE_mindustry_service_GameService_lambda$registerEvents$6, "()V", 4098 },
	{ "lambda$registerEvents$5", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$5, 0, "()V", 4106 },
	{ "lambda$registerEvents$4", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$4_mindustry_type_Sector_R_boolean, 0, "(Lmindustry/type/Sector;)Z", 4106 },
	{ "lambda$registerEvents$3", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$3_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$registerEvents$2", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$2_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$registerEvents$1", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$1_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$registerEvents$0", (intptr_t) SM_mindustry_service_GameService_lambda$registerEvents$0_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$checkAllBlocks$0", (intptr_t) M_mindustry_service_GameService_lambda$checkAllBlocks$0_mindustry_world_Block_R_boolean, VTABLE_mindustry_service_GameService_lambda$checkAllBlocks$0_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 4098 },
	{ "lambda$init$0", (intptr_t) M_mindustry_service_GameService_lambda$init$0_mindustry_game_EventType$ClientLoadEvent, VTABLE_mindustry_service_GameService_lambda$init$0_mindustry_game_EventType$ClientLoadEvent, "(Lmindustry/game/EventType$ClientLoadEvent;)V", 4098 },
};

Class class_mindustry_service_GameService{
		.nativeName = (intptr_t) "mindustry/service/GameService",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_service_GameService),
		.classVtable = (intptr_t) vtable_mindustry_service_GameService,
		.staticInitializer = (intptr_t) clinit_mindustry_service_GameService,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_service_GameService,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 75,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_service_GameService = registerClass(&class_mindustry_service_GameService);

}
