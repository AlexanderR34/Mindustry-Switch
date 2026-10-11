#include "mindustry/core/Logic.h"
#include "mindustry/core/Logic_invoke_arc_func_Boolf_6.h"
#include "java/lang/Runnable.h"
#include "mindustry/game/EventType_SaveLoadEvent.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/content/Fx.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_39.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_30.h"
#include "java/util/Iterator.h"
#include "mindustry/maps/MapPreviewLoader.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_35.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_36.h"
#include "arc/util/Time.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_37.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_38.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_31.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_32.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_33.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_34.h"
#include "mindustry/gen/Building.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_28.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_29.h"
#include "mindustry/game/Universe.h"
#include "mindustry/core/Logic_invoke_arc_func_Boolf_8.h"
#include "mindustry/core/Logic_invoke_arc_func_Boolf_7.h"
#include "mindustry/ui/dialogs/GameOverDialog.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/core/Logic_invoke_arc_func_Boolf_9.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/game/Rules.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "mindustry/game/FogControl.h"
#include "mindustry/game/EventType_UnitCreateEvent.h"
#include "mindustry/core/GameState_State.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/game/EventType_UnlockEvent.h"
#include "mindustry/game/EventType_BlockDestroyEvent.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/core/Control.h"
#include "mindustry/net/Administration.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/game/EventType_StateChangeEvent.h"
#include "mindustry/game/EventType_SectorCaptureEvent.h"
#include "mindustry/ai/RtsAI.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/game/EventType_GameOverEvent.h"
#include "mindustry/game/CampaignRules.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "mindustry/type/Sector.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/game/Teams.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/game/EventType_BlockBuildEndEvent.h"
#include "mindustry/game/GameStats.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/game/EventType_WaveEvent.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/type/Weather_WeatherEntry.h"
#include "arc/Events.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/game/MapMarkers.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/Saves.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/game/EventType_SectorLoseEvent.h"
#include "mindustry/core/Logic_invoke_java_lang_Runnable_3.h"
#include "mindustry/core/PerfCounter.h"
#include "arc/struct/Queue.h"
#include "mindustry/type/Item.h"
#include "mindustry/game/EventType_CoreChangeEvent.h"
#include "mindustry/logic/GlobalVars.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/core/Logic.h"
#include "mindustry/entities/Units.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/CampaignStats.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_24.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_25.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_26.h"
#include "java/lang/Float.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_27.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_20.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_21.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_22.h"
#include "arc/Application.h"
#include "mindustry/core/Logic_invoke_arc_func_Cons_23.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/game/EventType_PlayEvent.h"
#include "mindustry/mod/DataManager.h"
#include "mindustry/core/Logic_invoke_arc_func_Boolf_10.h"
#include "mindustry/core/Logic_invoke_arc_func_Boolf_11.h"
#include "mindustry/core/Logic_invoke_java_lang_Runnable_4.h"
#include "mindustry/core/Logic_invoke_java_lang_Runnable_5.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Math.h"
#include "mindustry/type/Weather.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/game/EventType_PayloadDropEvent.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "mindustry/game/Difficulty.h"
#include "arc/ApplicationListener.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/gen/WeatherState.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "mindustry/ai/BaseBuilderAI.h"

extern "C" {


void mark_mindustry_core_Logic(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_Logic *) object;
}

void clinit_mindustry_core_Logic(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_core_Logic(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_20);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockBuildEndEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$PayloadDropEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SaveLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_23);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$PlayEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_24);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_25);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnlockEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_26(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_26 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_26);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorCaptureEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_27(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_27 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(168);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$SectorLoseEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_28(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_28 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_28);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(174);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_29(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_29 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_29);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$CoreChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_30);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(187);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockBuildEndEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(202);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(228);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitCreateEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_34(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_34 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(238);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WaveEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(244);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$GameOverEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_Logic_checkCampaignStats_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:checkCampaignStats", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:checkOverlappingPlans", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(258);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(261);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[6].o)))->F_block;
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[6].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[6].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r2;
	sp[1].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[1].o, temp0, temp1, sp[2].o);
	jint temp2 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp2 == 0) goto label_7;
	}
	{
	LINE_NUMBER(262);
	((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[6].o)))->F_removed = (jint(1));
	LINE_NUMBER(263);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[4].o)))(ctx, (frame[4].o));
	}
label_7:;
	LINE_NUMBER(265);
	goto label_3;
label_4:;
	LINE_NUMBER(266);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_play(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:play", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_playing;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(272);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_initialWaveSpacing), (jfloat(0)), 1)) > 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSpacing) * (jfloat(2));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_initialWaveSpacing;
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	if (sp[0].o && ((mindustry_type_Planet *) sp[0].o)->F_campaignRules) {
		sp[0].o = (jobject)((mindustry_type_Planet *) sp[0].o)->F_campaignRules;
		if (sp[0].o && ((mindustry_game_CampaignRules *) sp[0].o)->F_difficulty) {
			sp[0].o = (jobject)((mindustry_game_CampaignRules *) sp[0].o)->F_difficulty;
			jfloat tempDiff = (jfloat)((mindustry_game_Difficulty *) sp[0].o)->F_waveTimeMultiplier;
			if (tempDiff <= 0.0f) tempDiff = 1.0f;
			sp[0].f = tempDiff;
			sp += 1;
			goto label_5;
		}
	}
	INST_FCONST(1);
	goto label_5;
	}
label_4:;
	INST_FCONST(1);
label_5:;
	{
	sp -= 3;
	auto curState = (mindustry_core_GameState *) NULL_CHECK(sp[0].o);
	jfloat initWaveTime = sp[1].f * sp[2].f;
	if (initWaveTime < 600.0f) {
		jfloat defaultSpacing = (curState->F_rules && ((mindustry_game_Rules *) curState->F_rules)->F_waveSpacing > 0.0f) ?
			((mindustry_game_Rules *) curState->F_rules)->F_waveSpacing * 2.0f : 14400.0f;
		initWaveTime = defaultSpacing;
	}
	curState->F_wavetime = initWaveTime;
	printf("[Logic] play initialized wavetime=%.1f\n", (float)curState->F_wavetime);
	fflush(stdout);
	LINE_NUMBER(273);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_game_GameStats(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_GameStats);
	init_mindustry_game_GameStats(ctx, sp[1].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats = (jref) sp[1].o;
	LINE_NUMBER(274);
	clinit_mindustry_game_EventType$PlayEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayEvent);
	init_mindustry_game_EventType$PlayEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(277);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowLaunchLoadout) == 0) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_addStartingItems) == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(278);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_clear])(ctx, sp[0].o);
	LINE_NUMBER(283);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_loadout;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_amount;
	jint temp1 = (jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[3].o)))->F_storageCapacity;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_items;
	sp[3].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	jint temp2 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, sp[3].o);
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (temp1 - temp2));
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp3);
	LINE_NUMBER(286);
	goto label_17;
	}
label_13:;
	LINE_NUMBER(288);
	goto label_11;
label_10:;
	{
	LINE_NUMBER(292);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(294);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_heal) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_heal])(ctx, (frame[4].o));
	LINE_NUMBER(295);
	goto label_23;
	}
label_24:;
	LINE_NUMBER(296);
	goto label_20;
label_21:;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:reset", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	SM_mindustry_gen_Groups_clear(ctx);
	LINE_NUMBER(301);
	SM_arc_util_Time_clear(ctx);
	LINE_NUMBER(302);
	clinit_mindustry_game_EventType$ResetEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ResetEvent);
	init_mindustry_game_EventType$ResetEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(303);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_mindustry_world_Tiles(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_Tiles);
	init_mindustry_world_Tiles_int_int(ctx, sp[1].o, (jint(0)), (jint(0)));
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	LINE_NUMBER(305);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_unload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_unload])(ctx, sp[0].o);
	LINE_NUMBER(306);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getState_R_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getState_R_mindustry_core_GameState$State])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(308);
	clinit_mindustry_core_GameState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_GameState);
	init_mindustry_core_GameState(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_state = sp[0].o;
	LINE_NUMBER(310);
	clinit_mindustry_game_EventType$StateChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$StateChangeEvent);
	sp[1].o = frame[1].o;
	clinit_mindustry_core_GameState$State(ctx);
	sp[2].o = (jobject)SF_mindustry_core_GameState$State_menu;
	init_mindustry_game_EventType$StateChangeEvent_mindustry_core_GameState$State_mindustry_core_GameState$State(ctx, sp[0].o, sp[1].o, sp[2].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(312);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_manualSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_manualSave])(ctx, sp[0].o);
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_skipWave(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:skipWave", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	((func_mindustry_core_Logic_runWave) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_runWave])(ctx, (frame[0].o));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_runWave(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:runWave", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	((func_mindustry_ai_WaveSpawner_spawnEnemies) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_spawnEnemies])(ctx, sp[0].o);
	LINE_NUMBER(321);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave = (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave) + (jint(1)));
	LINE_NUMBER(322);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveSpacing;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[1].o);
	sp[1].f = temp0;
	sp += 2;
	if (temp1 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	if (sp[0].o && ((mindustry_type_Planet *) sp[0].o)->F_campaignRules) {
		sp[0].o = (jobject)((mindustry_type_Planet *) sp[0].o)->F_campaignRules;
		if (sp[0].o && ((mindustry_game_CampaignRules *) sp[0].o)->F_difficulty) {
			sp[0].o = (jobject)((mindustry_game_CampaignRules *) sp[0].o)->F_difficulty;
			jfloat tempDiff = (jfloat)((mindustry_game_Difficulty *) sp[0].o)->F_waveTimeMultiplier;
			if (tempDiff <= 0.0f) tempDiff = 1.0f;
			sp[0].f = tempDiff;
			sp += 1;
			goto label_4;
		}
	}
	INST_FCONST(1);
	goto label_4;
	}
label_3:;
	INST_FCONST(1);
label_4:;
	{
	sp -= 3;
	auto curState = (mindustry_core_GameState *) NULL_CHECK(sp[0].o);
	jfloat nextWaveTime = sp[1].f * sp[2].f;
	if (nextWaveTime < 600.0f) {
		jfloat defaultSpacing = (curState->F_rules && ((mindustry_game_Rules *) curState->F_rules)->F_waveSpacing > 0.0f) ?
			((mindustry_game_Rules *) curState->F_rules)->F_waveSpacing : 7200.0f;
		nextWaveTime = defaultSpacing;
	}
	curState->F_wavetime = nextWaveTime;
	printf("[Logic] runWave complete: Wave=%d, next wavetime=%.1f\n", (int)curState->F_wave, (float)curState->F_wavetime);
	fflush(stdout);
	LINE_NUMBER(324);
	clinit_mindustry_game_EventType$WaveEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$WaveEvent);
	init_mindustry_game_EventType$WaveEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_checkGameState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:checkGameState", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(331);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_playerCores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_playerCores_R_arc_struct_Seq])(ctx, sp[0].o);
	int numPlayerCores = sp[0].o ? ((arc_struct_Seq *) sp[0].o)->F_size : 0;
	if (numPlayerCores != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_3;
	}
	{
	printf("[Logic] checkGameState: TRIGGERING GAME OVER! (playerCores=0, isCampaign=1)\n");
	LINE_NUMBER(332);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver = (jint(1));
	LINE_NUMBER(333);
	clinit_mindustry_game_EventType$GameOverEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$GameOverEvent);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	init_mindustry_game_EventType$GameOverEvent_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(337);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	jint temp0 = (jint)((func_mindustry_ai_WaveSpawner_countSpawns_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_countSpawns_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	if ((temp0 + ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) > 0) goto label_6;
	}
	{
	LINE_NUMBER(339);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(343);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies) != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave) <= 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (temp0 < ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave)) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	jint temp0 = (jint)((func_mindustry_ai_WaveSpawner_isSpawning_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_isSpawning_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
label_8:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) == 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	LINE_NUMBER(344);
	jint temp0 = (jint)((func_mindustry_game_Team_isAlive_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAlive_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(346);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_attackAfterWaves) == 0) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) != 0) goto label_12;
	}
	{
	LINE_NUMBER(348);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode = (jint(1));
	LINE_NUMBER(349);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = (jint(0));
	LINE_NUMBER(350);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	SM_mindustry_gen_Call_setRules_mindustry_game_Rules(ctx, sp[0].o);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(352);
	SM_mindustry_gen_Call_sectorCapture(ctx);
	goto label_10;
	}
label_1:;
	{
	LINE_NUMBER(356);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) != 0) goto label_16;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_playerCores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_playerCores_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_16;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_16;
	}
	{
	LINE_NUMBER(357);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver = (jint(1));
	LINE_NUMBER(358);
	clinit_mindustry_game_EventType$GameOverEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$GameOverEvent);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	init_mindustry_game_EventType$GameOverEvent_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	goto label_10;
	}
label_16:;
	{
	LINE_NUMBER(359);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) == 0) goto label_19;
	}
	{
	LINE_NUMBER(361);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(363);
	if ((frame[1].i) <= (jint(1))) goto label_22;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_23;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_23;
	}
label_22:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_23;
	}
	{
	LINE_NUMBER(365);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(366);
	clinit_mindustry_game_EventType$GameOverEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$GameOverEvent);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[2].o) != nullptr) goto label_26;
	}
	clinit_mindustry_game_Team(ctx);
	(sp++)->o = SF_mindustry_game_Team_derelict;
	goto label_27;
label_26:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[-1].o))->F_team;
label_27:;
	{
	sp -= 3;
	init_mindustry_game_EventType$GameOverEvent_mindustry_game_Team(ctx, sp[0].o, sp[2].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(367);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver = (jint(1));
	}
label_23:;
	LINE_NUMBER(369);
	goto label_10;
label_19:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies) != 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave) <= 0) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (temp0 < ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave)) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	jint temp0 = (jint)((func_mindustry_ai_WaveSpawner_isSpawning_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_isSpawning_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(370);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver = (jint(1));
	LINE_NUMBER(371);
	clinit_mindustry_game_EventType$GameOverEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$GameOverEvent);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	init_mindustry_game_EventType$GameOverEvent_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_10:;
	LINE_NUMBER(374);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_updateWeather(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:updateWeather", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_weather;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Boolf_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(379);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_weather;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Weather$WeatherEntry, sp[0].o));
	LINE_NUMBER(381);
	sp[0].o = frame[2].o;
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK(sp[0].o))->F_cooldown = (((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK(sp[0].o))->F_cooldown) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(384);
	if ((floatCompare(((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_cooldown), (jfloat(0)), 1)) < 0) goto label_6;
	}
	{
	if (((jint)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_always) == 0) goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_weather;
	jint temp0 = (jint)((func_mindustry_type_Weather_isActive_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weather_isActive_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(385);
	if (((jint)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_always) == 0) goto label_9;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::infinity());
	goto label_10;
label_9:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_minDuration), ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_maxDuration));
	sp[0].f = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(386);
	sp[0].o = frame[2].o;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_minFrequency), ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_maxFrequency));
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK(sp[0].o))->F_cooldown = (temp0 + temp1);
	LINE_NUMBER(387);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(388);
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_weather;
	jfloat temp2 = (jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[2].o)))->F_intensity;
	jfloat temp3 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_mindustry_gen_Call_createWeather_mindustry_type_Weather_float_float_float_float(ctx, sp[0].o, temp2, temp3, temp4, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_7:;
	LINE_NUMBER(390);
	goto label_2;
label_3:;
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_sectorCapture(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:sectorCapture", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	{
	LINE_NUMBER(396);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = (jint(0));
	LINE_NUMBER(398);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(400);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode = (jint(0));
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(404);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_wasCaptured) != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[0].i = sp[0].i;
	LINE_NUMBER(406);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_wasCaptured = (jint(1));
	LINE_NUMBER(409);
	clinit_mindustry_game_EventType$SectorCaptureEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$SectorCaptureEvent);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	init_mindustry_game_EventType$SectorCaptureEvent_mindustry_type_Sector_boolean(ctx, sp[0].o, sp[1].o, (frame[0].i));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(412);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode = (jint(0));
	LINE_NUMBER(415);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableWorldProcessors = (jint(1));
	LINE_NUMBER(416);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	((func_mindustry_game_MapMarkers_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_clear])(ctx, sp[0].o);
	LINE_NUMBER(418);
	SM_mindustry_gen_Call_clearObjectives(ctx);
	LINE_NUMBER(421);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_14;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(422);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	((func_mindustry_game_Saves_saveSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_saveSector_mindustry_type_Sector])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	LINE_NUMBER(424);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_updateGameOver_mindustry_game_Team(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:updateGameOver", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(428);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver = (jint(1));
	LINE_NUMBER(429);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_2;
	}
	{
	LINE_NUMBER(430);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp += 1;
	if (sp[0].o != (frame[0].o)) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	sp -= 2;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_won = sp[1].i;
label_2:;
	LINE_NUMBER(432);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_gameOver_mindustry_game_Team(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:gameOver", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(436);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_wavesLasted = ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave);
	LINE_NUMBER(437);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp += 1;
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_won = sp[1].i;
	LINE_NUMBER(438);
	jfloat temp0 = jfloat(180.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_core_Logic_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(439);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_setQuiet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_setQuiet])(ctx, sp[0].o);
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_researched_mindustry_ctype_Content(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:researched", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(445);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[0].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(447);
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(448);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_researched;
	jint temp1 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(450);
	if ((frame[2].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(451);
	clinit_mindustry_game_EventType$UnlockEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnlockEvent);
	init_mindustry_game_EventType$UnlockEvent_mindustry_ctype_UnlockableContent(ctx, sp[0].o, (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(453);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(458);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(459);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	((func_mindustry_net_Administration_forceSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_forceSave])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(461);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_manualSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_manualSave])(ctx, sp[0].o);
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_updateEntities(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:updateEntities", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(465);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(467);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_entityUpdate;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(469);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_entityMisc;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(470);
	SM_mindustry_gen_Groups_updatePooling(ctx);
	LINE_NUMBER(471);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	((func_mindustry_entities_EntityGroup_updatePhysics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_updatePhysics])(ctx, sp[0].o);
	LINE_NUMBER(472);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	((func_mindustry_entities_EntityGroup_updatePhysics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_updatePhysics])(ctx, sp[0].o);
	LINE_NUMBER(473);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
	LINE_NUMBER(474);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_effect;
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
	LINE_NUMBER(475);
	if ((frame[1].i) != 0) goto label_9;
	}
	clinit_mindustry_gen_Groups(ctx);
	(sp++)->o = SF_mindustry_gen_Groups_all;
	POP_N(1); // Pop method args
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
label_9:;
	{
	LINE_NUMBER(476);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_entityMisc;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(478);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_unitUpdate;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(479);
	if ((frame[1].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(480);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Boolf_9);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_update_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update_arc_func_Boolf])(ctx, sp[0].o, sp[1].o);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(482);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(484);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_unitUpdate;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(486);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_powerUpdate;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(487);
	if ((frame[1].i) != 0) goto label_17;
	}
	clinit_mindustry_gen_Groups(ctx);
	(sp++)->o = SF_mindustry_gen_Groups_powerGraph;
	POP_N(1); // Pop method args
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
label_17:;
	{
	LINE_NUMBER(488);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_powerUpdate;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(490);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_buildingUpdate;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(491);
	if ((frame[1].i) != 0) goto label_20;
	}
	clinit_mindustry_gen_Groups(ctx);
	(sp++)->o = SF_mindustry_gen_Groups_build;
	POP_N(1); // Pop method args
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
label_20:;
	{
	LINE_NUMBER(492);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_buildingUpdate;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(494);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_bulletUpdate;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(495);
	if ((frame[1].i) != 0) goto label_23;
	}
	clinit_mindustry_gen_Groups(ctx);
	(sp++)->o = SF_mindustry_gen_Groups_bullet;
	POP_N(1); // Pop method args
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
label_23:;
	{
	LINE_NUMBER(496);
	if ((frame[1].i) != 0) goto label_24;
	}
	clinit_mindustry_gen_Groups(ctx);
	(sp++)->o = SF_mindustry_gen_Groups_bullet;
	POP_N(1); // Pop method args
	((func_mindustry_entities_EntityGroup_collide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_collide])(ctx, sp[0].o);
label_24:;
	{
	LINE_NUMBER(497);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_bulletUpdate;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(499);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_entityUpdate;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:update", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(504);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_frame;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(505);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_frame;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(507);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_stateUpdate;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(509);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(510);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	((func_mindustry_game_Universe_updateGlobal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_updateGlobal])(ctx, sp[0].o);
	LINE_NUMBER(512);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_modified_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_modified_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPlaying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPlaying_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(513);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	((func_mindustry_net_Administration_forceSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_forceSave])(ctx, sp[0].o);
	LINE_NUMBER(514);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_forceSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_forceSave])(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(517);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isInvalidMap_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isInvalidMap_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_canGameOver) == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(519);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(520);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(521);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Boolf_10);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies = temp0;
	}
label_14:;
	{
	LINE_NUMBER(524);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(525);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_beforeGameUpdate;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(527);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jfloat temp0 = (jfloat)((func_arc_Graphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getDeltaTime_R_float])(ctx, sp[0].o);
	frame[2].f = temp0;
	LINE_NUMBER(528);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jdouble temp1 = (jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_tick;
	jint temp2 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[2].f));
	sp[1].d = temp1;
	sp += 2;
	if (temp2 != 0) goto label_20;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[2].f));
	if (temp0 == 0) goto label_21;
	}
label_20:;
	INST_DCONST(0);
	goto label_22;
label_21:;
	{
	jdouble temp0 = jdouble(((frame[2].f) * (jfloat(60.0f))));
	sp[0].d = temp0;
	sp += 1;
	}
label_22:;
	{
	sp -= 3;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_tick = (sp[1].d + sp[2].d);
	LINE_NUMBER(529);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_updateId = (((jlong)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_updateId) + (jlong(1)));
	LINE_NUMBER(530);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	((func_mindustry_game_Teams_updateTeamStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_updateTeamStats])(ctx, sp[0].o);
	LINE_NUMBER(531);
	SM_mindustry_maps_MapPreviewLoader_checkPreviews(ctx);
	LINE_NUMBER(533);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_27;
	}
	{
	LINE_NUMBER(534);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	((func_mindustry_game_FogControl_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_update])(ctx, sp[0].o);
	}
label_27:;
	{
	LINE_NUMBER(537);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(538);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o && ((mindustry_core_GameState *) sp[0].o)->F_rules) {
		auto rulesObj = (mindustry_game_Rules *) ((mindustry_core_GameState *) sp[0].o)->F_rules;
		if (rulesObj->F_sector && ((mindustry_type_Sector *) rulesObj->F_sector)->F_info) {
			auto infoObj = (jobject) ((mindustry_type_Sector *) rulesObj->F_sector)->F_info;
			((func_mindustry_game_SectorInfo_update) ((void **) nullCheck(ctx, infoObj)->vtable)[VTABLE_mindustry_game_SectorInfo_update])(ctx, infoObj);
		}
	}
	}
label_29:;
	{
	LINE_NUMBER(541);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(542);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	((func_mindustry_game_Universe_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_update])(ctx, sp[0].o);
	}
label_31:;
	{
	LINE_NUMBER(544);
	SM_arc_util_Time_update(ctx);
	LINE_NUMBER(546);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logicVars;
	((func_mindustry_logic_GlobalVars_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_update])(ctx, sp[0].o);
	LINE_NUMBER(549);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(550);
	((func_mindustry_core_Logic_updateWeather) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_updateWeather])(ctx, (frame[0].o));
	LINE_NUMBER(552);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(554);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[5].o)))->F_fillItems) == 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(556);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_37);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_41:;
	{
	LINE_NUMBER(563);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[5].o)))->F_buildAi) == 0) goto label_44;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_44;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_buildAi;
	if (sp[0].o != nullptr) goto label_46;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ai_BaseBuilderAI);
	init_mindustry_ai_BaseBuilderAI_mindustry_game_Teams$TeamData(ctx, sp[1].o, (frame[4].o));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildAi = (jref) sp[1].o;
	}
label_46:;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_buildAi;
	((func_mindustry_ai_BaseBuilderAI_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BaseBuilderAI_update])(ctx, sp[0].o);
	}
label_44:;
	{
	LINE_NUMBER(568);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[5].o)))->F_rtsAi) == 0) goto label_47;
	}
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_rtsAi;
	if (sp[0].o != nullptr) goto label_49;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_ai_RtsAI(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ai_RtsAI);
	init_mindustry_ai_RtsAI_mindustry_game_Teams$TeamData(ctx, sp[1].o, (frame[4].o));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_rtsAi = (jref) sp[1].o;
	}
label_49:;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_rtsAi;
	((func_mindustry_ai_RtsAI_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_RtsAI_update])(ctx, sp[0].o);
	}
label_47:;
	{
	LINE_NUMBER(574);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[5].o)))->F_prebuildAi) == 0) goto label_50;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_50;
	}
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_52:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_50;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(576);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[1].o))))->F_unitType;
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(577);
	if ((frame[8].o) == nullptr) goto label_55;
	}
	{
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Boolf_11);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_56;
	}
label_55:;
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o))))->F_unitType;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[4].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(579);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int])(ctx, (frame[7].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = (jdouble(temp0));
	LINE_NUMBER(580);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[9].o));
	LINE_NUMBER(581);
	SM_mindustry_entities_Units_notifyUnitSpawn_mindustry_gen_Unit(ctx, (frame[9].o));
	LINE_NUMBER(582);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[9].o));
	}
label_56:;
	LINE_NUMBER(584);
	goto label_52;
label_50:;
	LINE_NUMBER(586);
	goto label_38;
label_35:;
	{
	LINE_NUMBER(589);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_61;
	}
	{
	LINE_NUMBER(590);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o && ((mindustry_core_GameState *) sp[0].o)->F_rules) {
		auto rulesObj = (mindustry_game_Rules *) ((mindustry_core_GameState *) sp[0].o)->F_rules;
		if (rulesObj->F_objectives) {
			((func_mindustry_game_MapObjectives_update) ((void **) nullCheck(ctx, (jobject) rulesObj->F_objectives)->vtable)[VTABLE_mindustry_game_MapObjectives_update])(ctx, (jobject) rulesObj->F_objectives);
		}
	}
	}
label_61:;
	{
	LINE_NUMBER(593);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_63;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTimer) == 0) goto label_63;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_63;
	}
	{
	LINE_NUMBER(594);
	jint temp0 = (jint)((func_mindustry_core_Logic_isWaitingWave_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_isWaitingWave_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_63;
	}
	{
	LINE_NUMBER(595);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wavetime) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (jfloat(0)));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wavetime = temp0;
	}
label_63:;
	{
	LINE_NUMBER(599);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_66;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if ((floatCompare(((jfloat)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wavetime), (jfloat(0)), 1)) > 0) goto label_66;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_66;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTimer) == 0) goto label_66;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_66;
	}
	{
	jint tempWait = (jint)((func_mindustry_core_Logic_isWaitingWave_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_isWaitingWave_R_boolean])(ctx, (frame[0].o));
	if (tempWait != 0) goto label_66;
	}
	{
	LINE_NUMBER(600);
	((func_mindustry_core_Logic_runWave) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_runWave])(ctx, (frame[0].o));
	}
label_66:;
	{
	LINE_NUMBER(604);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_envAttrs;
	((func_mindustry_world_blocks_Attributes_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_clear])(ctx, sp[0].o);
	LINE_NUMBER(605);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_envAttrs;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_attributes;
	((func_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(606);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_weather;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_38);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(608);
	((func_mindustry_core_Logic_updateEntities) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_updateEntities])(ctx, (frame[0].o));
	LINE_NUMBER(610);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_afterGameUpdate;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(613);
	if ((frame[1].i) == 0) goto label_72;
	}
	{
	LINE_NUMBER(614);
	((func_mindustry_core_Logic_checkGameState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkGameState])(ctx, (frame[0].o));
	goto label_72;
	}
label_12:;
	{
	LINE_NUMBER(616);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	jint temp0 = (jint)((func_mindustry_core_NetServer_isWaitingForPlayers_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_isWaitingForPlayers_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_72;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_72;
	{
	LINE_NUMBER(617);
	((func_mindustry_core_Logic_checkGameState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkGameState])(ctx, (frame[0].o));
	}
label_72:;
	{
	LINE_NUMBER(620);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_stateUpdate;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_entityUpdate;
	jlong temp0 = (jlong)((func_mindustry_core_PerfCounter_latestValueNs_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_PerfCounter_latestValueNs_R_long])(ctx, sp[1].o);
	((func_mindustry_core_PerfCounter_end_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_Logic_isWaitingWave_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:isWaitingWave", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(625);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waitEnemies) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (temp0 < ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave)) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave) <= 0) goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$update$3_mindustry_gen_WeatherState(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$update$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(606);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_envAttrs;
	sp[1].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	sp[1].o = (jobject)((mindustry_type_Weather *) NULL_CHECK(sp[1].o))->F_attrs;
	((func_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_Logic_lambda$update$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$update$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(577);
	jdouble temp0 = (jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_flag;
	jint temp1 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int])(ctx, (frame[0].o));
	if ((doubleCompare(temp0, (jdouble(temp1)), -1)) != 0) goto label_1;
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

void SM_mindustry_core_Logic_lambda$update$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$update$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(557);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Item_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Item_isHidden_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(558);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[1].o));
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_1:;
	LINE_NUMBER(560);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_core_Logic_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isEnemy_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isEnemy_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
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

jbool SM_mindustry_core_Logic_lambda$updateEntities$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$updateEntities$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(480);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) == 0) goto label_2;
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

void SM_mindustry_core_Logic_lambda$gameOver$0_mindustry_game_Team(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$gameOver$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(438);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_restart;
	((func_mindustry_ui_dialogs_GameOverDialog_show_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_GameOverDialog_show_mindustry_game_Team])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_Logic_lambda$updateWeather$0_mindustry_type_Weather$WeatherEntry_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$updateWeather$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_weather;
	if (sp[0].o != nullptr) goto label_1;
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

jbool SM_mindustry_core_Logic_lambda$checkGameState$1_mindustry_game_Teams$TeamData_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$checkGameState$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(365);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_isAlive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_isAlive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_1;
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

jbool SM_mindustry_core_Logic_lambda$checkGameState$0_mindustry_game_Teams$TeamData_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$checkGameState$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(361);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_isAlive_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_isAlive_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_1;
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

void M_mindustry_core_Logic_lambda$new$19_mindustry_game_EventType$GameOverEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$19", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_mindustry_core_Logic_checkCampaignStats_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(246);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_sectorsLost = (((jint)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_sectorsLost) + (jint(1)));
	}
label_1:;
	LINE_NUMBER(248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_lambda$new$18_mindustry_game_EventType$WaveEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$18", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(239);
	jint temp0 = (jint)((func_mindustry_core_Logic_checkCampaignStats_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(240);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_wavesLasted = (((jint)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_wavesLasted) + (jint(1)));
	}
label_1:;
	LINE_NUMBER(242);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_lambda$new$17_mindustry_game_EventType$UnitCreateEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$17", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitCreateEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(230);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_unitsCreated = (((jint)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_unitsCreated) + (jint(1)));
	LINE_NUMBER(232);
	jint temp0 = (jint)((func_mindustry_core_Logic_checkCampaignStats_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(233);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_unitsProduced;
	sp[1].o = (jobject)((mindustry_game_EventType$UnitCreateEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_lambda$new$16_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$16", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(220);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_enemyUnitsDestroyed = (((jint)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_enemyUnitsDestroyed) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(223);
	jint temp0 = (jint)((func_mindustry_core_Logic_checkCampaignStats_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_enemyUnitsDestroyed;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_unitsDestroyed;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_lambda$new$15_mindustry_game_EventType$BlockDestroyEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$15", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockDestroyEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(204);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_buildingsDestroyed = (((jint)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_buildingsDestroyed) + (jint(1)));
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_mindustry_core_Logic_checkCampaignStats_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(207);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_buildingsDestroyed;
	sp[1].o = (jobject)((mindustry_game_EventType$BlockDestroyEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(210);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	sp[0].o = (jobject)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_destroyedBlockCount;
	sp[1].o = (jobject)((mindustry_game_EventType$BlockDestroyEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(212);
	jint temp1 = (jint)((func_mindustry_core_Logic_checkCampaignStats_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean])(ctx, (frame[0].o));
	if (temp1 == 0) goto label_4;
	}
	{
	LINE_NUMBER(213);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_enemyBuildingsDestroyed;
	sp[1].o = (jobject)((mindustry_game_EventType$BlockDestroyEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(216);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_lambda$new$14_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$14", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(190);
	if (((jint)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_3;
	}
	{
	LINE_NUMBER(191);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_buildingsDeconstructed = (((jint)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_buildingsDeconstructed) + (jint(1)));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(193);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_buildingsBuilt = (((jint)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_buildingsBuilt) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_mindustry_core_Logic_checkCampaignStats_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(197);
	if (((jint)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_buildingsDeconstructed;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_buildingsBuilt;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(200);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$12_mindustry_game_EventType$CoreChangeEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$12", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(181);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_core_Logic_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$13_mindustry_game_EventType$CoreChangeEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$13", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(182);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cleanupDeadTeams) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$CoreChangeEvent *) NULL_CHECK((frame[0].o)))->F_core;
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_isAdded_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_isAdded_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$CoreChangeEvent *) NULL_CHECK((frame[0].o)))->F_core;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$CoreChangeEvent *) NULL_CHECK((frame[0].o)))->F_core;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_game_EventType$CoreChangeEvent *) NULL_CHECK((frame[0].o)))->F_core;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	((func_mindustry_game_Teams$TeamData_destroyToDerelict) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_destroyToDerelict])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$10_mindustry_game_EventType$BlockDestroyEvent(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockDestroyEvent *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreDestroyClear) == 0) goto label_2;
	}
	{
	LINE_NUMBER(176);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_core_Logic_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$11_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((func_mindustry_game_Teams$TeamData_timeDestroy_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_timeDestroy_float_float_float])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_enemyCoreBuildRadius));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$9_mindustry_game_EventType$SectorLoseEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(169);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorLoseEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorLoseEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	sp[1].o = (jobject)((mindustry_game_EventType$SectorLoseEvent *) NULL_CHECK((frame[0].o)))->F_sector;
	((func_mindustry_maps_generators_PlanetGenerator_onSectorLost_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_onSectorLost_mindustry_type_Sector])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_lambda$new$7_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$7", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(136);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	((func_mindustry_game_Teams$TeamData_destroyToDerelict) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_destroyToDerelict])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectorCaptureReplacements;
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(140);
	frame[2].i = (jint(0));
	LINE_NUMBER(142);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_blocks_environment_Floor, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	frame[3].o = sp[0].o;
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectorCaptureReplacements;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(144);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_Block, sp[1].o)));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, sp[1].o))))->F_id;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_value;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_world_Block, sp[1].o)))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (checkCast(ctx, &class_mindustry_world_Block, sp[1].o)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(146);
	frame[2].i = (jint(1));
	}
label_10:;
	LINE_NUMBER(148);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(149);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(150);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_core_Logic_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_core_Logic_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_core_Logic_invoke_arc_func_Cons_39);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tiles_eachTile_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_eachTile_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(159);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	sp[1].o = (jobject)((mindustry_game_EventType$SectorCaptureEvent *) NULL_CHECK((frame[1].o)))->F_sector;
	((func_mindustry_maps_generators_PlanetGenerator_onSectorCaptured_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_onSectorCaptured_mindustry_type_Sector])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_mindustry_core_Logic_checkCampaignStats_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(164);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_sectorsCaptured = (((jint)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_sectorsCaptured) + (jint(1)));
	}
label_16:;
	LINE_NUMBER(166);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$8_Array1_mindustry_world_blocks_environment_Floor_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id)));
	LINE_NUMBER(152);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(153);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o), (frame[2].o));
	}
label_2:;
	LINE_NUMBER(155);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$6_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_game_EventType$UnlockEvent *) NULL_CHECK((frame[0].o)))->F_content;
	SM_mindustry_gen_Call_researched_mindustry_ctype_Content(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$5_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(104);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(106);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreIncinerates = (jint(1));
	LINE_NUMBER(107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources = (jint(0));
	LINE_NUMBER(108);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditRules = (jint(0));
	LINE_NUMBER(109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditWorldProcessors = (jint(0));
	LINE_NUMBER(110);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_worldProcessorPlayerLink = (jint(0));
	LINE_NUMBER(112);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_enemyInfiniteItems) == 0) goto label_8;
	}
	{
	LINE_NUMBER(113);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources = (jint(1));
	LINE_NUMBER(114);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_fillItems = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(116);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (temp0 * ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_enemyBuildSpeedMultiplier));
	LINE_NUMBER(118);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	if ((floatCompare(((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_enemyFactoryActivationDelay), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if ((floatCompare(((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitFactoryActivationDelay), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(119);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitFactoryActivationDelay = ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_enemyFactoryActivationDelay);
	}
label_1:;
	{
	LINE_NUMBER(124);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_manualSave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_manualSave])(ctx, sp[0].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$4_mindustry_game_EventType$PlayEvent(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_weather;
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_shuffle_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_shuffle_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(93);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Weather$WeatherEntry, sp[0].o));
	LINE_NUMBER(95);
	sp[0].o = frame[4].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[4].o)))->F_maxFrequency));
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK(sp[0].o))->F_cooldown = (temp0 + temp1);
	LINE_NUMBER(96);
	frame[2].f = ((frame[2].f) + ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[4].o)))->F_cooldown));
	LINE_NUMBER(97);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(99);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_tick = (jdouble(0));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$3_mindustry_game_EventType$SaveLoadEvent(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(71);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(72);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreIncinerates = (jint(1));
	LINE_NUMBER(73);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_canGameOver = (jint(1));
	LINE_NUMBER(74);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditRules = (jint(0));
	LINE_NUMBER(77);
	if (((jint)((mindustry_game_EventType$SaveLoadEvent *) NULL_CHECK((frame[0].o)))->F_isMap) != 0) goto label_1;
	}
	{
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	frame[1].o = sp[0].o;
	LINE_NUMBER(79);
	((func_mindustry_game_SectorInfo_write) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_SectorInfo_write])(ctx, (frame[1].o));
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((func_mindustry_type_Planet_applyRules_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_applyRules_mindustry_game_Rules])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[1].o)))->F_hasCore = (jint(1));
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_lambda$new$2_mindustry_game_EventType$PayloadDropEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_game_EventType$PayloadDropEvent *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$PayloadDropEvent *) NULL_CHECK((frame[1].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_team;
	sp[2].o = (jobject)((mindustry_game_EventType$PayloadDropEvent *) NULL_CHECK((frame[1].o)))->F_build;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[2].o))->F_tile;
	((func_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_Logic_lambda$new$1_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	if (((jint)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_team;
	sp[2].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(58);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	sp[0].o = (jobject)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_placedBlockCount;
	sp[1].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_Logic_lambda$new$0_mindustry_game_EventType$BlockDestroyEvent(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Logic:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Logic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(43);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ghostBlocks) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockDestroyEvent *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[1].o = sp[0].o;
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rebuildable) != 0) goto label_4;
	}
label_3:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	((func_mindustry_gen_Building_addPlan_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_addPlan_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_core_Logic[] {
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
	(void *) M_mindustry_core_Logic_update,
	(void *) M_arc_ApplicationListener_pause,
	(void *) M_arc_ApplicationListener_resume,
	(void *) M_mindustry_core_Logic_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationListener_fileDropped_arc_files_Fi,
	(void *) M_mindustry_core_Logic_checkCampaignStats_R_boolean,
	(void *) M_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile,
	(void *) M_mindustry_core_Logic_play,
	(void *) M_mindustry_core_Logic_reset,
	(void *) M_mindustry_core_Logic_skipWave,
	(void *) M_mindustry_core_Logic_runWave,
	(void *) M_mindustry_core_Logic_checkGameState,
	(void *) M_mindustry_core_Logic_updateWeather,
	(void *) M_mindustry_core_Logic_updateEntities,
	(void *) M_mindustry_core_Logic_isWaitingWave_R_boolean,
	(void *) M_mindustry_core_Logic_lambda$new$19_mindustry_game_EventType$GameOverEvent,
	(void *) M_mindustry_core_Logic_lambda$new$18_mindustry_game_EventType$WaveEvent,
	(void *) M_mindustry_core_Logic_lambda$new$17_mindustry_game_EventType$UnitCreateEvent,
	(void *) M_mindustry_core_Logic_lambda$new$16_mindustry_game_EventType$UnitDestroyEvent,
	(void *) M_mindustry_core_Logic_lambda$new$15_mindustry_game_EventType$BlockDestroyEvent,
	(void *) M_mindustry_core_Logic_lambda$new$14_mindustry_game_EventType$BlockBuildEndEvent,
	(void *) M_mindustry_core_Logic_lambda$new$7_mindustry_game_EventType$SectorCaptureEvent,
	(void *) M_mindustry_core_Logic_lambda$new$2_mindustry_game_EventType$PayloadDropEvent,
	(void *) M_mindustry_core_Logic_lambda$new$1_mindustry_game_EventType$BlockBuildEndEvent,
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
	{ "checkCampaignStats", "()Z" },
	{ "checkOverlappingPlans", "(Lmindustry/game/Team;Lmindustry/world/Tile;)V" },
	{ "play", "()V" },
	{ "reset", "()V" },
	{ "skipWave", "()V" },
	{ "runWave", "()V" },
	{ "checkGameState", "()V" },
	{ "updateWeather", "()V" },
	{ "updateEntities", "()V" },
	{ "isWaitingWave", "()Z" },
	{ "lambda$new$19", "(Lmindustry/game/EventType$GameOverEvent;)V" },
	{ "lambda$new$18", "(Lmindustry/game/EventType$WaveEvent;)V" },
	{ "lambda$new$17", "(Lmindustry/game/EventType$UnitCreateEvent;)V" },
	{ "lambda$new$16", "(Lmindustry/game/EventType$UnitDestroyEvent;)V" },
	{ "lambda$new$15", "(Lmindustry/game/EventType$BlockDestroyEvent;)V" },
	{ "lambda$new$14", "(Lmindustry/game/EventType$BlockBuildEndEvent;)V" },
	{ "lambda$new$7", "(Lmindustry/game/EventType$SectorCaptureEvent;)V" },
	{ "lambda$new$2", "(Lmindustry/game/EventType$PayloadDropEvent;)V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$BlockBuildEndEvent;)V" },
};

static jclass interfaces[] { &class_arc_ApplicationListener, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_Logic, 0, "()V", 1 },
	{ "checkCampaignStats", (intptr_t) M_mindustry_core_Logic_checkCampaignStats_R_boolean, VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean, "()Z", 2 },
	{ "checkOverlappingPlans", (intptr_t) M_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile, VTABLE_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile, "(Lmindustry/game/Team;Lmindustry/world/Tile;)V", 2 },
	{ "play", (intptr_t) M_mindustry_core_Logic_play, VTABLE_mindustry_core_Logic_play, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_core_Logic_reset, VTABLE_mindustry_core_Logic_reset, "()V", 1 },
	{ "skipWave", (intptr_t) M_mindustry_core_Logic_skipWave, VTABLE_mindustry_core_Logic_skipWave, "()V", 1 },
	{ "runWave", (intptr_t) M_mindustry_core_Logic_runWave, VTABLE_mindustry_core_Logic_runWave, "()V", 1 },
	{ "checkGameState", (intptr_t) M_mindustry_core_Logic_checkGameState, VTABLE_mindustry_core_Logic_checkGameState, "()V", 2 },
	{ "updateWeather", (intptr_t) M_mindustry_core_Logic_updateWeather, VTABLE_mindustry_core_Logic_updateWeather, "()V", 4 },
	{ "sectorCapture", (intptr_t) SM_mindustry_core_Logic_sectorCapture, 0, "()V", 9 },
	{ "updateGameOver", (intptr_t) SM_mindustry_core_Logic_updateGameOver_mindustry_game_Team, 0, "(Lmindustry/game/Team;)V", 9 },
	{ "gameOver", (intptr_t) SM_mindustry_core_Logic_gameOver_mindustry_game_Team, 0, "(Lmindustry/game/Team;)V", 9 },
	{ "researched", (intptr_t) SM_mindustry_core_Logic_researched_mindustry_ctype_Content, 0, "(Lmindustry/ctype/Content;)V", 9 },
	{ "dispose", (intptr_t) M_mindustry_core_Logic_dispose, VTABLE_mindustry_core_Logic_dispose, "()V", 1 },
	{ "updateEntities", (intptr_t) M_mindustry_core_Logic_updateEntities, VTABLE_mindustry_core_Logic_updateEntities, "()V", 4 },
	{ "update", (intptr_t) M_mindustry_core_Logic_update, VTABLE_mindustry_core_Logic_update, "()V", 1 },
	{ "isWaitingWave", (intptr_t) M_mindustry_core_Logic_isWaitingWave_R_boolean, VTABLE_mindustry_core_Logic_isWaitingWave_R_boolean, "()Z", 1 },
	{ "lambda$update$3", (intptr_t) SM_mindustry_core_Logic_lambda$update$3_mindustry_gen_WeatherState, 0, "(Lmindustry/gen/WeatherState;)V", 4106 },
	{ "lambda$update$2", (intptr_t) SM_mindustry_core_Logic_lambda$update$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$update$1", (intptr_t) SM_mindustry_core_Logic_lambda$update$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Item, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/type/Item;)V", 4106 },
	{ "lambda$update$0", (intptr_t) SM_mindustry_core_Logic_lambda$update$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$updateEntities$0", (intptr_t) SM_mindustry_core_Logic_lambda$updateEntities$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$gameOver$0", (intptr_t) SM_mindustry_core_Logic_lambda$gameOver$0_mindustry_game_Team, 0, "(Lmindustry/game/Team;)V", 4106 },
	{ "lambda$updateWeather$0", (intptr_t) SM_mindustry_core_Logic_lambda$updateWeather$0_mindustry_type_Weather$WeatherEntry_R_boolean, 0, "(Lmindustry/type/Weather$WeatherEntry;)Z", 4106 },
	{ "lambda$checkGameState$1", (intptr_t) SM_mindustry_core_Logic_lambda$checkGameState$1_mindustry_game_Teams$TeamData_R_boolean, 0, "(Lmindustry/game/Teams$TeamData;)Z", 4106 },
	{ "lambda$checkGameState$0", (intptr_t) SM_mindustry_core_Logic_lambda$checkGameState$0_mindustry_game_Teams$TeamData_R_boolean, 0, "(Lmindustry/game/Teams$TeamData;)Z", 4106 },
	{ "lambda$new$19", (intptr_t) M_mindustry_core_Logic_lambda$new$19_mindustry_game_EventType$GameOverEvent, VTABLE_mindustry_core_Logic_lambda$new$19_mindustry_game_EventType$GameOverEvent, "(Lmindustry/game/EventType$GameOverEvent;)V", 4098 },
	{ "lambda$new$18", (intptr_t) M_mindustry_core_Logic_lambda$new$18_mindustry_game_EventType$WaveEvent, VTABLE_mindustry_core_Logic_lambda$new$18_mindustry_game_EventType$WaveEvent, "(Lmindustry/game/EventType$WaveEvent;)V", 4098 },
	{ "lambda$new$17", (intptr_t) M_mindustry_core_Logic_lambda$new$17_mindustry_game_EventType$UnitCreateEvent, VTABLE_mindustry_core_Logic_lambda$new$17_mindustry_game_EventType$UnitCreateEvent, "(Lmindustry/game/EventType$UnitCreateEvent;)V", 4098 },
	{ "lambda$new$16", (intptr_t) M_mindustry_core_Logic_lambda$new$16_mindustry_game_EventType$UnitDestroyEvent, VTABLE_mindustry_core_Logic_lambda$new$16_mindustry_game_EventType$UnitDestroyEvent, "(Lmindustry/game/EventType$UnitDestroyEvent;)V", 4098 },
	{ "lambda$new$15", (intptr_t) M_mindustry_core_Logic_lambda$new$15_mindustry_game_EventType$BlockDestroyEvent, VTABLE_mindustry_core_Logic_lambda$new$15_mindustry_game_EventType$BlockDestroyEvent, "(Lmindustry/game/EventType$BlockDestroyEvent;)V", 4098 },
	{ "lambda$new$14", (intptr_t) M_mindustry_core_Logic_lambda$new$14_mindustry_game_EventType$BlockBuildEndEvent, VTABLE_mindustry_core_Logic_lambda$new$14_mindustry_game_EventType$BlockBuildEndEvent, "(Lmindustry/game/EventType$BlockBuildEndEvent;)V", 4098 },
	{ "lambda$new$12", (intptr_t) SM_mindustry_core_Logic_lambda$new$12_mindustry_game_EventType$CoreChangeEvent, 0, "(Lmindustry/game/EventType$CoreChangeEvent;)V", 4106 },
	{ "lambda$new$13", (intptr_t) SM_mindustry_core_Logic_lambda$new$13_mindustry_game_EventType$CoreChangeEvent, 0, "(Lmindustry/game/EventType$CoreChangeEvent;)V", 4106 },
	{ "lambda$new$10", (intptr_t) SM_mindustry_core_Logic_lambda$new$10_mindustry_game_EventType$BlockDestroyEvent, 0, "(Lmindustry/game/EventType$BlockDestroyEvent;)V", 4106 },
	{ "lambda$new$11", (intptr_t) SM_mindustry_core_Logic_lambda$new$11_mindustry_world_blocks_storage_CoreBlock$CoreBuild, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)V", 4106 },
	{ "lambda$new$9", (intptr_t) SM_mindustry_core_Logic_lambda$new$9_mindustry_game_EventType$SectorLoseEvent, 0, "(Lmindustry/game/EventType$SectorLoseEvent;)V", 4106 },
	{ "lambda$new$7", (intptr_t) M_mindustry_core_Logic_lambda$new$7_mindustry_game_EventType$SectorCaptureEvent, VTABLE_mindustry_core_Logic_lambda$new$7_mindustry_game_EventType$SectorCaptureEvent, "(Lmindustry/game/EventType$SectorCaptureEvent;)V", 4098 },
	{ "lambda$new$8", (intptr_t) SM_mindustry_core_Logic_lambda$new$8_Array1_mindustry_world_blocks_environment_Floor_mindustry_world_Tile, 0, "([Lmindustry/world/blocks/environment/Floor;Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$new$6", (intptr_t) SM_mindustry_core_Logic_lambda$new$6_mindustry_game_EventType$UnlockEvent, 0, "(Lmindustry/game/EventType$UnlockEvent;)V", 4106 },
	{ "lambda$new$5", (intptr_t) SM_mindustry_core_Logic_lambda$new$5_mindustry_game_EventType$WorldLoadEvent, 0, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4106 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_core_Logic_lambda$new$4_mindustry_game_EventType$PlayEvent, 0, "(Lmindustry/game/EventType$PlayEvent;)V", 4106 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_core_Logic_lambda$new$3_mindustry_game_EventType$SaveLoadEvent, 0, "(Lmindustry/game/EventType$SaveLoadEvent;)V", 4106 },
	{ "lambda$new$2", (intptr_t) M_mindustry_core_Logic_lambda$new$2_mindustry_game_EventType$PayloadDropEvent, VTABLE_mindustry_core_Logic_lambda$new$2_mindustry_game_EventType$PayloadDropEvent, "(Lmindustry/game/EventType$PayloadDropEvent;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_core_Logic_lambda$new$1_mindustry_game_EventType$BlockBuildEndEvent, VTABLE_mindustry_core_Logic_lambda$new$1_mindustry_game_EventType$BlockBuildEndEvent, "(Lmindustry/game/EventType$BlockBuildEndEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_core_Logic_lambda$new$0_mindustry_game_EventType$BlockDestroyEvent, 0, "(Lmindustry/game/EventType$BlockDestroyEvent;)V", 4106 },
};

Class class_mindustry_core_Logic{
		.nativeName = (intptr_t) "mindustry/core/Logic",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_Logic),
		.classVtable = (intptr_t) vtable_mindustry_core_Logic,
		.staticInitializer = (intptr_t) clinit_mindustry_core_Logic,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_Logic,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 46,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_Logic = registerClass(&class_mindustry_core_Logic);

}
