#include "mindustry/entities/comp/BuildingComp.h"
#include "mindustry/entities/comp/BuildingComp_invoke_mindustry_world_modules_LiquidModule_LiquidCalculator_0.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/entities/comp/BuildingComp_invoke_mindustry_world_modules_LiquidModule_LiquidCalculator_1.h"
#include "arc/Input.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/logic/Settable.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Puddle.h"
#include "mindustry/ai/BlockIndexer.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/content/Fx.h"
#include "java/util/Arrays.h"
#include "mindustry/entities/comp/BuildingComp_invoke_mindustry_world_modules_LiquidModule_LiquidConsumer_0.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "mindustry/editor/EditorTile.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/graphics/Lod.h"
#include "arc/util/Time.h"
#include "arc/Graphics_Cursor.h"
#include "arc/util/Nullable.h"
#include "mindustry/graphics/BuildingCacheLayer.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/blocks/heat/HeatConductor.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/FogControl.h"
#include "java/lang/Iterable.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "mindustry/game/EventType_BlockDestroyEvent.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "mindustry/core/Control.h"
#include "mindustry/audio/AmbientSource.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/game/EventType_BuildTeamChangeEvent.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/type/Sector.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "mindustry/entities/comp/BuildingComp_1.h"
#include "arc/util/io/Reads.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "mindustry/game/EventType_BuildingBulletDestroyEvent.h"
#include "mindustry/game/Teams.h"
#include "arc/audio/Sound.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Timerc.h"
#include "mindustry/gen/Buildingc.h"
#include "arc/Events.h"
#include "mindustry/entities/Sized.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/ai/Pathfinder.h"
#include "mindustry/logic/LAccess.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/logic/Controllable.h"
#include "mindustry/world/modules/BlockModule.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Func.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/Bits.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/entities/comp/BuildingComp_invoke_arc_func_Prov_1.h"
#include "java/lang/Void.h"
#include "mindustry/world/modules/LiquidModule_LiquidCalculator.h"
#include "mindustry/entities/comp/BuildingComp_invoke_arc_func_Prov_0.h"
#include "arc/struct/Queue.h"
#include "mindustry/type/Item.h"
#include "mindustry/entities/Damage.h"
#include "arc/func/Cons2.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/world/modules/LiquidModule_LiquidConsumer.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/comp/BuildingComp_invoke_arc_func_Cons_5.h"
#include "mindustry/entities/comp/BuildingComp_invoke_java_lang_Runnable_3.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "arc/struct/EnumSet.h"
#include "mindustry/entities/comp/BuildingComp_invoke_arc_func_Cons_6.h"
#include "mindustry/entities/comp/BuildingComp_invoke_java_lang_Runnable_4.h"
#include "mindustry/entities/comp/BuildingComp_invoke_java_lang_Runnable_1.h"
#include "mindustry/world/Block.h"
#include "mindustry/entities/comp/BuildingComp_invoke_java_lang_Runnable_2.h"
#include "mindustry/entities/comp/BuildingComp_invoke_arc_func_Cons_1.h"
#include "mindustry/entities/comp/BuildingComp_invoke_java_lang_Runnable_0.h"
#include "mindustry/entities/comp/BuildingComp_invoke_arc_func_Cons_2.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/entities/comp/BuildingComp_invoke_arc_func_Cons_3.h"
#include "mindustry/entities/comp/BuildingComp_invoke_arc_func_Cons_4.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "mindustry/entities/Puddles.h"
#include "arc/Application.h"
#include "mindustry/entities/comp/BuildingComp_invoke_java_lang_Runnable_5.h"
#include "arc/struct/IntSet.h"
#include "mindustry/world/blocks/heat/HeatBlock.h"
#include "java/lang/String.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/entities/comp/BuildingComp_invoke_arc_func_Cons_0.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/type/PayloadSeq.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/world/Edges.h"
#include "mindustry/gen/Icon.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "mindustry/entities/comp/BuildingComp.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/heat/HeatConductor_HeatConductorBuild.h"
#include "mindustry/type/Category.h"
#include "mindustry/game/EventType_BuildDamageEvent.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jfloat SF_mindustry_entities_comp_BuildingComp_timeToSleep;
jfloat SF_mindustry_entities_comp_BuildingComp_recentDamageTime;
jobject SF_mindustry_entities_comp_BuildingComp_tmpTiles;
jobject SF_mindustry_entities_comp_BuildingComp_tempBuilds;
jobject SF_mindustry_entities_comp_BuildingComp_teamChangeEvent;
jobject SF_mindustry_entities_comp_BuildingComp_bulletDamageEvent;
jint SF_mindustry_entities_comp_BuildingComp_sleepingEntities;

void mark_mindustry_entities_comp_BuildingComp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_comp_BuildingComp_tmpTiles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_BuildingComp_tmpTiles)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_BuildingComp_tmpTiles, mark, depth + 1);
		if (SF_mindustry_entities_comp_BuildingComp_tempBuilds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_BuildingComp_tempBuilds)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_BuildingComp_tempBuilds, mark, depth + 1);
		if (SF_mindustry_entities_comp_BuildingComp_teamChangeEvent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_BuildingComp_teamChangeEvent)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_BuildingComp_teamChangeEvent, mark, depth + 1);
		if (SF_mindustry_entities_comp_BuildingComp_bulletDamageEvent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_BuildingComp_bulletDamageEvent)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_BuildingComp_bulletDamageEvent, mark, depth + 1);
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
	auto self = (mindustry_entities_comp_BuildingComp *) object;
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_proximity)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_proximity)->clazz)->markFunction)((jobject) self->F_proximity, mark, depth + 1);
	if (self->F_lastAccessed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastAccessed)->clazz)->markFunction)((jobject) self->F_lastAccessed, mark, depth + 1);
	if (self->F_lastDisabler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDisabler)->clazz)->markFunction)((jobject) self->F_lastDisabler, mark, depth + 1);
	if (self->F_power)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_power)->clazz)->markFunction)((jobject) self->F_power, mark, depth + 1);
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_liquids)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquids)->clazz)->markFunction)((jobject) self->F_liquids, mark, depth + 1);
	if (self->F_suppressColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suppressColor)->clazz)->markFunction)((jobject) self->F_suppressColor, mark, depth + 1);
}

void init_mindustry_entities_comp_BuildingComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BuildingComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(1)), (6), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_proximity = (jref) sp[1].o;
	LINE_NUMBER(79);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(1));
	LINE_NUMBER(95);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_healSuppressionTime = (jfloat(-1.0f));
	LINE_NUMBER(96);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastHealTime = (jfloat(-1200.0f));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_suppressColor = (jref) sp[1].o;
	LINE_NUMBER(99);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastDamageTime = (jfloat(-300.0f));
	LINE_NUMBER(100);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:init", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(113);
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_3;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_init = (jint(0));
	LINE_NUMBER(119);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	}
label_3:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(123);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[4].i);
	LINE_NUMBER(124);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (frame[1].o);
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[1].o));
	((func_mindustry_entities_comp_BuildingComp_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(128);
	if ((frame[3].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(129);
	((func_mindustry_entities_comp_BuildingComp_add) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_add])(ctx, (frame[0].o));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_10;
	{
	LINE_NUMBER(132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	((func_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource])(ctx, sp[0].o, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(136);
	((func_mindustry_entities_comp_BuildingComp_checkAllowUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_checkAllowUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(137);
	((func_mindustry_entities_comp_BuildingComp_created) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_created])(ctx, (frame[0].o));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:create", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(144);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(145);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[2].o);
	LINE_NUMBER(147);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_health)));
	LINE_NUMBER(148);
	((func_mindustry_entities_comp_BuildingComp_maxHealth_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_maxHealth_float])(ctx, (frame[0].o), (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_health))));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_timers));
	((func_mindustry_entities_comp_BuildingComp_timer_arc_util_Interval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_timer_arc_util_Interval])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasItems) == 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_ItemModule);
	init_mindustry_world_modules_ItemModule(ctx, sp[1].o);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(152);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasLiquids) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_LiquidModule);
	init_mindustry_world_modules_LiquidModule(ctx, sp[1].o);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_liquids = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(153);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasPower) == 0) goto label_8;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_modules_PowerModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_PowerModule);
	init_mindustry_world_modules_PowerModule(ctx, sp[1].o);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_power = (jref) sp[1].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	}
label_8:;
	{
	LINE_NUMBER(158);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_initialized = (jint(1));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:add", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_checkAdd) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_checkAdd])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_BuildingComp_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_BuildingComp_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_writeBase_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:writeBase", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_visibleFlags), (jlong(0)))) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(189);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_health));
	LINE_NUMBER(190);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) | (128)));
	LINE_NUMBER(191);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(192);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_7;
	}
	INST_ICONST(4);
	goto label_8;
label_7:;
	INST_ICONST(3);
label_8:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(193);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(195);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_moduleBitmask_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_moduleBitmask_R_int])(ctx, (frame[0].o));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_write_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	}
label_14:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	((func_mindustry_world_modules_PowerModule_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_PowerModule_write_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	}
label_15:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_write_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	}
label_16:;
	{
	LINE_NUMBER(201);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale), (jfloat(1)), -1)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(202);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale));
	LINE_NUMBER(203);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScaleDuration));
	}
label_17:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	}
label_20:;
	{
	LINE_NUMBER(211);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_efficiency));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte((jint((temp0 * (jfloat(255.0f))))))));
	LINE_NUMBER(212);
	sp[0].o = frame[1].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_optionalEfficiency));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte((jint((temp1 * (jfloat(255.0f))))))));
	LINE_NUMBER(215);
	if ((frame[2].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(216);
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, (frame[1].o), ((jlong)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_visibleFlags));
	}
label_24:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_readBase_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:readBase", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_health))));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_health = temp1;
	LINE_NUMBER(223);
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[2].i = temp2;
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, temp3);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(226);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation = ((frame[2].i) & (127));
	LINE_NUMBER(228);
	jint temp4 = (jint)((func_mindustry_entities_comp_BuildingComp_moduleBitmask_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_moduleBitmask_R_int])(ctx, (frame[0].o));
	frame[3].i = temp4;
	LINE_NUMBER(229);
	frame[4].i = (jint(1));
	LINE_NUMBER(230);
	frame[5].i = (jint(0));
	LINE_NUMBER(233);
	if (((frame[2].i) & (128)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(235);
	if ((frame[5].i) < (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[6].i) != (jint(1))) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	sp -= 2;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_enabled = sp[1].i;
label_11:;
	{
	LINE_NUMBER(241);
	if ((frame[5].i) < (jint(2))) goto label_16;
	}
	{
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	}
label_16:;
	{
	LINE_NUMBER(244);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(247);
	if (((frame[3].i) & (jint(1))) == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_modules_ItemModule);
	init_mindustry_world_modules_ItemModule(ctx, sp[0].o);
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[-1].o))->F_items;
label_20:;
	{
	sp -= 1;
	((func_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean])(ctx, sp[0].o, (frame[1].o), (frame[4].i));
	}
label_18:;
	{
	LINE_NUMBER(248);
	if (((frame[3].i) & (jint(2))) == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_22;
	}
	{
	clinit_mindustry_world_modules_PowerModule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_modules_PowerModule);
	init_mindustry_world_modules_PowerModule(ctx, sp[0].o);
	sp += 1;
	goto label_23;
	}
label_22:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[-1].o))->F_power;
label_23:;
	{
	sp -= 1;
	((func_mindustry_world_modules_PowerModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_PowerModule_read_arc_util_io_Reads_boolean])(ctx, sp[0].o, (frame[1].o), (frame[4].i));
	}
label_21:;
	{
	LINE_NUMBER(249);
	if (((frame[3].i) & (jint(4))) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o != nullptr) goto label_25;
	}
	{
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_modules_LiquidModule);
	init_mindustry_world_modules_LiquidModule(ctx, sp[0].o);
	sp += 1;
	goto label_26;
	}
label_25:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[-1].o))->F_liquids;
label_26:;
	{
	sp -= 1;
	((func_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean])(ctx, sp[0].o, (frame[1].o), (frame[4].i));
	}
label_24:;
	{
	LINE_NUMBER(251);
	if (((frame[3].i) & (16)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_timeScale = temp0;
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_timeScaleDuration = temp1;
	}
label_27:;
	{
	LINE_NUMBER(255);
	if (((frame[3].i) & (32)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[1].o, temp0);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_lastDisabler = (jref) sp[1].o;
	}
label_30:;
	{
	LINE_NUMBER(260);
	if ((frame[5].i) > (jint(2))) goto label_32;
	}
	{
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	}
label_32:;
	{
	LINE_NUMBER(263);
	if ((frame[5].i) < (jint(3))) goto label_33;
	}
	{
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat(temp0)) / (jfloat(255.0f));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[1].o))->F_potentialEfficiency = temp1;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_efficiency = temp1;
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_optionalEfficiency = ((jfloat(temp4)) / (jfloat(255.0f)));
	}
label_33:;
	{
	LINE_NUMBER(269);
	if ((frame[5].i) != (jint(4))) goto label_36;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, (frame[1].o));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_visibleFlags = temp0;
	}
label_36:;
	LINE_NUMBER(272);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_BuildingComp_moduleBitmask_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:moduleBitmask", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_3;
	}
	INST_ICONST(2);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_6;
	}
	INST_ICONST(4);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	jint temp0 = (sp[0].i | sp[1].i) | (8);
	LINE_NUMBER(280);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale), (jfloat(1)), -1)) == 0) goto label_9;
	}
	INST_BIPUSH(16);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	INST_BIPUSH(32);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_writeAll_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:writeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	((func_mindustry_entities_comp_BuildingComp_writeBase_arc_util_io_Writes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_writeBase_arc_util_io_Writes])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(286);
	((func_mindustry_entities_comp_BuildingComp_write_arc_util_io_Writes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_write_arc_util_io_Writes])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_readAll_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:readAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(290);
	((func_mindustry_entities_comp_BuildingComp_readBase_arc_util_io_Reads) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_readBase_arc_util_io_Reads])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(291);
	((func_mindustry_entities_comp_BuildingComp_read_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_read_arc_util_io_Reads_byte])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:writeSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(295);
	((func_mindustry_entities_comp_BuildingComp_writeAll_arc_util_io_Writes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_writeAll_arc_util_io_Writes])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_readSync_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:readSync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(299);
	((func_mindustry_entities_comp_BuildingComp_readAll_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_readAll_arc_util_io_Reads_byte])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(305);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_isDiscovered_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:isDiscovered", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp1 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	if ((floatCompare(temp1, (jfloat(3.0f)), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(320);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) != 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) > (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(324);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y));
	popStackFrame(ctx);
	return temp1;
	}
label_5:;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].i = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2)));
	LINE_NUMBER(327);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y));
	if (temp1 != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x) - (frame[2].i);
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) - (frame[2].i);
	LINE_NUMBER(328);
	jint temp2 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	if (temp2 != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x) - (frame[2].i);
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) + (frame[2].i);
	LINE_NUMBER(329);
	jint temp2 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	if (temp2 != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x) + (frame[2].i);
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) + (frame[2].i);
	LINE_NUMBER(330);
	jint temp2 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	if (temp2 != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x) + (frame[2].i);
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) - (frame[2].i);
	LINE_NUMBER(331);
	jint temp2 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	if (temp2 == 0) goto label_13;
	}
label_8:;
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_addPlan_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:addPlan", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(336);
	((func_mindustry_entities_comp_BuildingComp_addPlan_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_addPlan_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_addPlan_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:addPlan", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(340);
	if ((frame[2].i) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rebuildable) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(342);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[4].o = sp[0].o;
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_5;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[6].o)));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_current;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_current;
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	if (((jint)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_wasConstructing) == 0) goto label_7;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_current;
	frame[4].o = sp[0].o;
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_lastConfig;
	frame[3].o = sp[0].o;
	goto label_5;
	}
label_7:;
	LINE_NUMBER(352);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(358);
	if ((frame[1].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(361);
	frame[6].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	if (temp0 >= ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(363);
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_x;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	if (temp0 != ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x)) goto label_16;
	}
	{
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	if (temp0 != ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y)) goto label_16;
	}
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	LINE_NUMBER(365);
	goto label_11;
	}
label_16:;
	{
	LINE_NUMBER(361);
	INST_IINC(6, 1);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	clinit_mindustry_game_Teams$BlockPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Teams$BlockPlan);
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = jshort(((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[2].o = frame[4].o;
	jobject temp3 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].i = temp0;
	sp[4].i = temp1;
	sp[5].i = temp2;
	sp[6].o = temp3;
	sp += 7;
	if ((frame[3].o) != nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_config_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_config_R_java_lang_Object])(ctx, (frame[0].o));
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_ALOAD(3);
label_21:;
	{
	sp -= 8;
	init_mindustry_game_Teams$BlockPlan_int_int_short_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, sp[3].i, sp[4].i, sp[5].i, sp[6].o, sp[7].o);
	((func_arc_struct_Queue_addFirst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addFirst_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:findClosestEdge", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(374);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(375);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(376);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_5;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(378);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_x);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_y)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(379);
	if ((frame[9].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[9].o));
	if (temp0 != 0) goto label_8;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_9;
	{
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[9].o));
	if ((floatCompare(temp0, (frame[4].f), 1)) >= 0) goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(380);
	frame[3].o = (frame[9].o);
	LINE_NUMBER(381);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_dst2_arc_math_geom_Position_R_float])(ctx, (frame[9].o), (frame[1].o));
	frame[4].f = temp0;
	}
label_8:;
	{
	LINE_NUMBER(377);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_configure_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:configure", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lastConfig = (jref) (frame[1].o);
	LINE_NUMBER(391);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_configureAny_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:configureAny", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(396);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_deselect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:deselect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_config;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(402);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_config;
	((func_mindustry_ui_fragments_BlockConfigFragment_hideConfig) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_configTapped_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:configTapped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:calculateHeat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(413);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_arc_struct_IntSet_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_arc_struct_IntSet_R_float])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_arc_struct_IntSet_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:calculateHeat", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(417);
	SM_java_util_Arrays_fill_Array1_float_float(ctx, (frame[1].o), (jfloat(0)));
	LINE_NUMBER(418);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(420);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(423);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_heat_HeatBlock)) == 0) goto label_7;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatBlock, (frame[5].o)));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_world_blocks_heat_HeatConductor)) == 0) goto label_9;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatConductor, (frame[9].o)));
	if (((jint)((mindustry_world_blocks_heat_HeatConductor *) NULL_CHECK((frame[8].o)))->F_splitHeat) == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_11;
label_9:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(428);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_13;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_14;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte])(ctx, (frame[0].o), (frame[5].o));
	if (((temp0 + (jint(2))) % (jint(4))) == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_rotation)) goto label_13;
	}
label_14:;
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_7;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte])(ctx, (frame[0].o), (frame[5].o));
	if (temp0 == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_rotation)) goto label_7;
	}
label_13:;
	{
	LINE_NUMBER(431);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild)) == 0) goto label_15;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild, (frame[5].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild *) NULL_CHECK((frame[8].o)))->F_cameFrom;
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_id_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(433);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x) - ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y) - ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	frame[9].f = (temp2 / (jfloat(8.0f)));
	LINE_NUMBER(435);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp3 = (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jint temp4 = jint(((temp3 + ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2)))) - (frame[9].f)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jint temp5 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp6 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp5, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	jint temp7 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp4, temp6);
	frame[10].i = temp7;
	LINE_NUMBER(438);
	jfloat temp8 = (jfloat)((func_mindustry_world_blocks_heat_HeatBlock_heat_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_heat_HeatBlock, INDEX_mindustry_world_blocks_heat_HeatBlock_heat_R_float, (frame[6].o)))(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	frame[11].f = ((temp8 / (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) * (jfloat((frame[10].i))));
	LINE_NUMBER(439);
	if ((frame[7].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(441);
	frame[11].f = ((frame[11].f) / (jfloat(3.0f)));
	}
label_21:;
	{
	LINE_NUMBER(444);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte])(ctx, (frame[0].o), (frame[5].o));
	jint temp1 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, temp0, (jint(4)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp1)) + (frame[11].f));
	LINE_NUMBER(445);
	frame[3].f = ((frame[3].f) + (frame[11].f));
	}
label_17:;
	{
	LINE_NUMBER(449);
	if ((frame[2].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(450);
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_id));
	LINE_NUMBER(451);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild)) == 0) goto label_24;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild, (frame[5].o)));
	LINE_NUMBER(452);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild *) NULL_CHECK((frame[8].o)))->F_cameFrom;
	((func_arc_struct_IntSet_addAll_arc_struct_IntSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_addAll_arc_struct_IntSet])(ctx, sp[0].o, sp[1].o);
	}
label_24:;
	{
	LINE_NUMBER(457);
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild)) == 0) goto label_7;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild, (frame[6].o)));
	LINE_NUMBER(458);
	((func_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild_updateHeat) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild_updateHeat])(ctx, (frame[8].o));
	}
label_7:;
	LINE_NUMBER(462);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_applyBoost_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:applyBoost", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_canOverdrive) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(470);
	if ((floatCompare((frame[1].f), (((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale) - (jfloat(1,000000e-03f))), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScaleDuration), (frame[2].f));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_timeScaleDuration = temp0;
	}
label_2:;
	{
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale), (frame[1].f));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_timeScale = temp0;
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_applySlowdown_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:applySlowdown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(479);
	if ((floatCompare((frame[1].f), (((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale) + (jfloat(1,000000e-03f))), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScaleDuration), (frame[2].f));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_timeScaleDuration = temp0;
	}
label_1:;
	{
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale), (frame[1].f));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_timeScale = temp0;
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_applyHealSuppression_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:applyHealSuppression", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(486);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((func_mindustry_entities_comp_BuildingComp_applyHealSuppression_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_applyHealSuppression_float_arc_graphics_Color])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_applyHealSuppression_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:applyHealSuppression", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(489);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_healSuppressionTime), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (frame[1].f)));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_healSuppressionTime = temp0;
	LINE_NUMBER(490);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_suppressColor = (jref) (frame[2].o);
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_isHealSuppressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:isHealSuppressed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_suppressable) == 0) goto label_1;
	}
	{
	if ((floatCompare((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_healSuppressionTime), 1)) > 0) goto label_1;
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

void M_mindustry_entities_comp_BuildingComp_recentlyHealed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:recentlyHealed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(498);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastHealTime = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_wasRecentlyHealed_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:wasRecentlyHealed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(502);
	if ((floatCompare((((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastHealTime) + (frame[1].f)), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), -1)) < 0) goto label_1;
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

jbool M_mindustry_entities_comp_BuildingComp_wasRecentlyDamaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:wasRecentlyDamaged", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(506);
	if ((floatCompare((((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastDamageTime) + (jfloat(300.0f))), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), -1)) < 0) goto label_1;
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

void M_mindustry_entities_comp_BuildingComp_eachEdge_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:eachEdge", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(511);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(512);
	if ((frame[6].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(513);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	}
label_5:;
	{
	LINE_NUMBER(510);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(516);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:nearby", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(519);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + (frame[1].i);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + (frame[2].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_nearby_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:nearby", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(523);
	switch((frame[1].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(524);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + (jint(1));
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	sp += 1;
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(525);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + (jint(1))));
	sp += 1;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(526);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) - (jint(1));
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	sp += 1;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(527);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) - (jint(1))));
	sp += 1;
	goto label_6;
	}
label_5:;
	LINE_NUMBER(528);
	INST_ACONST_NULL();
label_6:;
	LINE_NUMBER(523);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:relativeTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(533);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_relativeTo_int_int_R_byte])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:relativeTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(537);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y)));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(538);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) - (jfloat(1))), 1)) > 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(539);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + (jfloat(1))), -1)) < 0) goto label_4;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(541);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) - (jfloat(1))), 1)) > 0) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(542);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(1))), -1)) < 0) goto label_4;
	}
	INST_ICONST(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_entities_comp_BuildingComp_relativeToEdge_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:relativeToEdge", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(548);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_world_Tile_R_byte])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_entities_comp_BuildingComp_relativeTo_int_int_R_byte(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:relativeTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_front_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:front", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(558);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[1].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_back_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:back", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(564);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(2))));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[1].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(2))));
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_left_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:left", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(570);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(1))));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[1].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(1))));
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_right_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:right", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(576);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(3))));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[1].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(3))));
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_fogRadius_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:fogRadius", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(581);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_fogRadius)));
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_BuildingComp_pos_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:pos", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_rotdeg_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:rotdeg", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return (jfloat((((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) * (90))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_drawrot_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawrot", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotateDraw) == 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat((((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) * (90)));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_floor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:floor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_interactable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:interactable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(602);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_mindustry_entities_comp_BuildingComp_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_timeScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:timeScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_warmup_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:warmup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_totalProgress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:totalProgress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(620);
	popStackFrame(ctx);
	return (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_progress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:progress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_allowUpdate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:allowUpdate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_Block_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_supportsEnv_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_editor_EditorTile)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableOutsideArea) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp1 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp2 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp3 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp4 = jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp5 = jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(631);
	jint temp6 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5);
	if (temp6 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(629);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_inMapArea_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:inMapArea", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(635);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX) * (8)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp1 = jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY) * (8)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp2 = jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth) * (8)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp3 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, (jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight) * (8)))), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp3 == 0) goto label_2;
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

jobject M_mindustry_entities_comp_BuildingComp_status_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:status", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(639);
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_1;
	}
	{
	LINE_NUMBER(640);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockStatus_logicDisable;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(643);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(644);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockStatus_noOutput;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(647);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), 1)) <= 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_productionValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_productionValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(648);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockStatus_noInput;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(651);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if ((doubleCompare((fmod((((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_tick) / (jdouble(30.0))), (jdouble(1)))), (jdouble(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_efficiency))), 1)) >= 0) goto label_7;
	}
	clinit_mindustry_world_meta_BlockStatus(ctx);
	(sp++)->o = SF_mindustry_world_meta_BlockStatus_active;
	goto label_8;
label_7:;
	clinit_mindustry_world_meta_BlockStatus(ctx);
	(sp++)->o = SF_mindustry_world_meta_BlockStatus_noInput;
label_8:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_sleep(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:sleep", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(656);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_sleepTime = (((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_sleepTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(657);
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_sleeping) != 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_sleepTime), (jfloat(60.0f)), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(658);
	((func_mindustry_entities_comp_BuildingComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(659);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_sleeping = (jint(1));
	LINE_NUMBER(660);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	SF_mindustry_entities_comp_BuildingComp_sleepingEntities = ((clinit_mindustry_entities_comp_BuildingComp(ctx), (jint)SF_mindustry_entities_comp_BuildingComp_sleepingEntities) + (jint(1)));
	}
label_2:;
	LINE_NUMBER(662);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_noSleep(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:noSleep", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(666);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_sleepTime = (jfloat(0));
	LINE_NUMBER(667);
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_sleeping) == 0) goto label_2;
	}
	{
	LINE_NUMBER(668);
	((func_mindustry_entities_comp_BuildingComp_add) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_add])(ctx, (frame[0].o));
	LINE_NUMBER(669);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_sleeping = (jint(0));
	LINE_NUMBER(670);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	SF_mindustry_entities_comp_BuildingComp_sleepingEntities = ((clinit_mindustry_entities_comp_BuildingComp(ctx), (jint)SF_mindustry_entities_comp_BuildingComp_sleepingEntities) - (jint(1)));
	}
label_2:;
	LINE_NUMBER(672);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_entities_comp_BuildingComp_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_canControlSelect_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:canControlSelect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(684);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onControlSelect_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onControlSelect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(690);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onCommand_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onCommand", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(695);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_getCommandPosition_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getCommandPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(699);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:handleUnitPayload", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(703);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(705);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(706);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player])(ctx, (frame[1].o));
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(709);
	((func_mindustry_gen_Unit_remove) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_remove])(ctx, (frame[1].o));
	LINE_NUMBER(712);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(713);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_id = temp0;
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(716);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(719);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload);
	init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(ctx, sp[1].o, (frame[1].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(720);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitDrop;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(721);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_canWithdraw_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:canWithdraw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(724);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_canUnload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:canUnload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(728);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_unloadable);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_canResupply_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:canResupply", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_allowResupply);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_payloadCheck_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:payloadCheck", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_1;
	}
	{
	if (((((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(2))) % (jint(4))) != (frame[1].i)) goto label_1;
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

void M_mindustry_entities_comp_BuildingComp_itemTaken_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:itemTaken", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(742);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_allowDeposit_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:allowDeposit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(745);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysAllowDeposit) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_onlyDepositCore) != 0) goto label_2;
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

void M_mindustry_entities_comp_BuildingComp_dropped(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:dropped", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(751);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_handleString_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:handleString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(756);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_created(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:created", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(758);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:shouldConsume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(762);
	popStackFrame(ctx);
	return ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_enabled);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_productionValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:productionValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_consumeTriggerValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:consumeTriggerValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_getPowerProduction_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getPowerProduction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_BuildingComp_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:acceptStack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_1;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_2;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(781);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp0 - temp1), (frame[2].i));
	popStackFrame(ctx);
	return temp2;
	}
label_1:;
	{
	LINE_NUMBER(783);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_BuildingComp_getMaximumAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getMaximumAccepted", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity);
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_BuildingComp_removeStack_mindustry_type_Item_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:removeStack", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(793);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(794);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[2].i = temp2;
	LINE_NUMBER(795);
	((func_mindustry_entities_comp_BuildingComp_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(796);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:handleStack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(802);
	((func_mindustry_entities_comp_BuildingComp_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(803);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(804);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getStackOffset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(809);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:acceptPayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(812);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:handlePayload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(817);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:movePayload", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(825);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(826);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[2].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[2].i)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(828);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	LINE_NUMBER(830);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(833);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:dumpPayload", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(844);
	frame[2].i = ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(846);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[3].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(849);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	if (temp1 == 0) goto label_7;
	}
	{
	LINE_NUMBER(850);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	LINE_NUMBER(851);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_entities_comp_BuildingComp_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(852);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(855);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_entities_comp_BuildingComp_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(846);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_canBeReplaced_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:canBeReplaced", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(862);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_handleItem_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:handleItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(866);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	LINE_NUMBER(867);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:acceptItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	jint temp1 = (jint)((func_mindustry_entities_comp_BuildingComp_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 >= temp1) goto label_1;
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

jbool M_mindustry_entities_comp_BuildingComp_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:acceptLiquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (frame[2].o));
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

void M_mindustry_entities_comp_BuildingComp_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:handleLiquid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[2].o), (frame[3].f));
	LINE_NUMBER(879);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:dumpLiquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(883);
	((func_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(2)));
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:dumpLiquid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(887);
	((func_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jint(-1)));
	LINE_NUMBER(888);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:dumpLiquid", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(892);
	frame[4].i = ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(894);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(1,000000e-04f)), 1)) > 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(896);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_mindustry_type_Liquid_unlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Liquid_unlock])(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(898);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(899);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_entities_comp_BuildingComp_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(901);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[5].i) + (frame[4].i);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(902);
	if ((frame[3].i) == (jint(-1))) goto label_9;
	}
	{
	jint temp0 = ((frame[3].i) + ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation)) % (jint(4));
	jint temp1 = (jint)((func_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte])(ctx, (frame[0].o), (frame[6].o));
	if (temp0 == temp1) goto label_9;
	}
	goto label_10;
label_9:;
	{
	LINE_NUMBER(904);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(906);
	if ((frame[6].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean])(ctx, (frame[0].o), (frame[6].o), (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	frame[7].f = (temp0 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity));
	LINE_NUMBER(908);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[8].f = (temp1 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity));
	LINE_NUMBER(910);
	if ((floatCompare((frame[7].f), (frame[8].f), 1)) >= 0) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[6].o;
	jfloat temp0 = (frame[8].f) - (frame[7].f);
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_entities_comp_BuildingComp_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid])(ctx, sp[0].o, sp[1].o, ((temp0 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_liquidCapacity)) / (frame[2].f)), (frame[1].o));
	}
label_10:;
	{
	LINE_NUMBER(898);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(913);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:canDumpLiquid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(916);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:transferLiquid", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(920);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[3].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 - temp1), (frame[2].f));
	frame[4].f = temp2;
	LINE_NUMBER(922);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[3].o));
	if (temp3 == 0) goto label_2;
	}
	{
	LINE_NUMBER(923);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[3].o), (frame[4].f));
	LINE_NUMBER(924);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[3].o), (frame[4].f));
	}
label_2:;
	LINE_NUMBER(926);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_moveLiquidForward_boolean_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:moveLiquidForward", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(929);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[3].o = sp[0].o;
	LINE_NUMBER(931);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(933);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(934);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_BuildingComp_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(935);
	if ((frame[1].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) != 0) goto label_5;
	}
	{
	LINE_NUMBER(936);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	frame[4].f = (temp0 / (jfloat(1.5f)));
	LINE_NUMBER(937);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean_boolean(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[4].f), (jint(1)), (jint(1)));
	LINE_NUMBER(938);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[2].o), (frame[4].f));
	}
label_5:;
	{
	LINE_NUMBER(940);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:moveLiquid", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(944);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(946);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[2].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(948);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(949);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	frame[3].f = (temp0 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity));
	LINE_NUMBER(950);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = temp1 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[4].f = (temp2 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidPressure));
	LINE_NUMBER(951);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[4].f) - (frame[3].f)));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp4 = temp3 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp5 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp4, temp5);
	frame[5].f = temp6;
	LINE_NUMBER(952);
	jfloat temp7 = frame[5].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jfloat temp8 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp9 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	jfloat temp10 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp7, (temp8 - temp9));
	frame[5].f = temp10;
	LINE_NUMBER(954);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	if ((floatCompare((frame[3].f), (frame[4].f), 1)) > 0) goto label_9;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(955);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[2].o), (frame[5].f));
	LINE_NUMBER(956);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[2].o), (frame[5].f));
	LINE_NUMBER(957);
	popStackFrame(ctx);
	return (frame[5].f);
	}
label_9:;
	{
	LINE_NUMBER(959);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if ((floatCompare((temp0 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity)), (jfloat(0.1f)), -1)) <= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(0.1f)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(962);
	frame[6].f = ((((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x)) / (jfloat(2)));
	frame[7].f = ((((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y)) / (jfloat(2)));
	LINE_NUMBER(964);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(965);
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK((frame[8].o)))->F_blockReactive) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK((frame[2].o)))->F_blockReactive) == 0) goto label_3;
	}
	{
	LINE_NUMBER(967);
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[8].o)))->F_flammability), (jfloat(0.3f)), -1)) <= 0) goto label_18;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[2].o)))->F_temperature), (jfloat(0.7f)), -1)) > 0) goto label_19;
	}
label_18:;
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[2].o)))->F_flammability), (jfloat(0.3f)), -1)) <= 0) goto label_20;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[8].o)))->F_temperature), (jfloat(0.7f)), -1)) <= 0) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(968);
	((func_mindustry_entities_comp_BuildingComp_damageContinuous_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_damageContinuous_float])(ctx, (frame[0].o), (jfloat(1)));
	LINE_NUMBER(969);
	((func_mindustry_gen_Building_damageContinuous_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_damageContinuous_float])(ctx, (frame[1].o), (jfloat(1)));
	LINE_NUMBER(970);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.1)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(971);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_fire;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	goto label_3;
	}
label_20:;
	{
	LINE_NUMBER(973);
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[2].o)))->F_temperature), (jfloat(0.7f)), -1)) <= 0) goto label_24;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[8].o)))->F_temperature), (jfloat(0.55f)), 1)) < 0) goto label_25;
	}
label_24:;
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[8].o)))->F_temperature), (jfloat(0.7f)), -1)) <= 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[2].o)))->F_temperature), (jfloat(0.55f)), 1)) >= 0) goto label_3;
	}
label_25:;
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[2].o, (frame[2].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, ((jfloat(0.7f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(975);
	jint temp2 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.20000000298023224)));
	if (temp2 == 0) goto label_3;
	}
	{
	LINE_NUMBER(976);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_steam;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	}
label_3:;
	{
	LINE_NUMBER(982);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getLiquidDestination", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(986);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getPayload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(990);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_takePayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:takePayload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(995);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getPayloads", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(999);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_offload_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:offload", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1007);
	((func_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1008);
	frame[2].i = ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(1010);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(1011);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_entities_comp_BuildingComp_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(1012);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[3].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1013);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	if (temp1 == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1014);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	LINE_NUMBER(1015);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(1010);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1019);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_comp_BuildingComp_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	LINE_NUMBER(1020);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_put_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1026);
	frame[2].i = ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(1028);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(1029);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_entities_comp_BuildingComp_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(1030);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[3].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1031);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	if (temp1 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1032);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	LINE_NUMBER(1033);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(1028);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1037);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:produced", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1041);
	((func_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1042);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:produced", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1045);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(1046);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(1048);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_mindustry_type_Item_unlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_unlock])(ctx, sp[0].o);
label_1:;
	LINE_NUMBER(1050);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_dumpAccumulate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:dumpAccumulate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1054);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_dumpAccumulate_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_dumpAccumulate_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_dumpAccumulate_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:dumpAccumulate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1059);
	frame[2].i = (jint(0));
	LINE_NUMBER(1060);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_dumpAccum;
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_BuildingComp_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_delta_R_float])(ctx, (frame[0].o));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_dumpAccum = (temp0 + temp1);
	}
label_2:;
	{
	LINE_NUMBER(1061);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_dumpAccum), (jfloat(1)), -1)) < 0) goto label_3;
	}
	{
	LINE_NUMBER(1062);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_mindustry_entities_comp_BuildingComp_dump_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_dump_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = (temp0 | temp1);
	LINE_NUMBER(1063);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_dumpAccum = (((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_dumpAccum) - (jfloat(1)));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1065);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_dump_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:dump", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1070);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_dump_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_dump_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_dump_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:dump", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1078);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1080);
	frame[2].i = ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(1081);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1082);
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size);
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1085);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1086);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(1087);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[6].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1089);
	frame[8].i = (jint(0));
	}
label_13:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(1090);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_int_R_boolean])(ctx, sp[0].o, (frame[8].i));
	if (temp0 != 0) goto label_16;
	}
	goto label_17;
label_16:;
	{
	LINE_NUMBER(1091);
	frame[9].o = (checkCast(ctx, &class_mindustry_type_Item, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i)))));
	LINE_NUMBER(1093);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[9].o));
	if (temp0 == 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[7].o), (frame[9].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1094);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[9].o));
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, (frame[9].o), (jint(1)));
	LINE_NUMBER(1096);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_entities_comp_BuildingComp_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(1097);
	popStackFrame(ctx);
	return (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(1089);
	INST_IINC(8, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_entities_comp_BuildingComp_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(1086);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	goto label_24;
label_7:;
	{
	LINE_NUMBER(1104);
	frame[6].i = (jint(0));
	}
label_25:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_24;
	}
	{
	LINE_NUMBER(1105);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[6].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1107);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	if (temp1 == 0) goto label_28;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[7].o), (frame[1].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(1108);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(1110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_entities_comp_BuildingComp_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(1111);
	popStackFrame(ctx);
	return (jint(1));
	}
label_28:;
	{
	LINE_NUMBER(1114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_entities_comp_BuildingComp_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(1104);
	INST_IINC(6, 1);
	goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(1118);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_incrementDump_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:incrementDump", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1123);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1124);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_cdump = ((((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_cdump) + (jint(1))) % (frame[1].i));
	}
label_1:;
	LINE_NUMBER(1126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:canDump", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1130);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_moveForward_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:moveForward", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_front_R_mindustry_gen_Building])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1136);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1137);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	LINE_NUMBER(1138);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(1140);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onProximityRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onProximityRemoved", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1145);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1146);
	((func_mindustry_entities_comp_BuildingComp_powerGraphRemoved) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_powerGraphRemoved])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(1148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onProximityAdded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onProximityAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1153);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1154);
	((func_mindustry_entities_comp_BuildingComp_updatePowerGraph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_updatePowerGraph])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(1156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onProximityUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1160);
	((func_mindustry_entities_comp_BuildingComp_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(1161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_updatePowerGraph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:updatePowerGraph", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1164);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_BuildingComp_tempBuilds;
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1165);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1166);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(1168);
	goto label_1;
label_2:;
	LINE_NUMBER(1169);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_powerGraphRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:powerGraphRemoved", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1174);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_blocks_power_PowerGraph_remove_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_remove_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	LINE_NUMBER(1175);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(1176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1177);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_pos_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, temp0);
	}
label_7:;
	{
	LINE_NUMBER(1175);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1181);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(1182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_conductsTo_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:conductsTo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1185);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_insulated) != 0) goto label_1;
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

jobject M_mindustry_entities_comp_BuildingComp_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getPowerConnections", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1189);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[1].o));
	LINE_NUMBER(1190);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
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
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1193);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_conductivePower) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_conductivePower) == 0) goto label_6;
	}
label_7:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	LINE_NUMBER(1196);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_conductsTo_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_conductsTo_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_6;
	}
	{
	LINE_NUMBER(1197);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[3].o));
	}
label_6:;
	LINE_NUMBER(1199);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(1201);
	frame[2].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(1202);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[2].i));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1203);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(1201);
	INST_IINC(2, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1205);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_getProgressIncrease_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getProgressIncrease", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1209);
	jfloat temp0 = (jfloat(1)) / (frame[1].f);
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_BuildingComp_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_edelta_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_getDisplayEfficiency_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getDisplayEfficiency", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1213);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_BuildingComp_getProgressIncrease_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getProgressIncrease_float_R_float])(ctx, (frame[0].o), (jfloat(1)));
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_BuildingComp_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_edelta_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 / temp1);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_shouldAmbientSound_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:shouldAmbientSound", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1218);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawStatus", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1222);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_enableDrawStatus) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumers;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1223);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_3;
	}
	INST_FCONST(1);
	goto label_4;
label_3:;
	(sp++)->f = jfloat(0.64f);
label_4:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(1224);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].f = ((temp0 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2)))) - (((jfloat(8.0f)) * (frame[1].f)) / (jfloat(2))));
	LINE_NUMBER(1225);
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[3].f = ((temp1 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2)))) + (((jfloat(8.0f)) * (frame[1].f)) / (jfloat(2))));
	LINE_NUMBER(1227);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(71.0f)));
	LINE_NUMBER(1228);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha2));
	LINE_NUMBER(1229);
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, (frame[2].f), (frame[3].f), ((jfloat(2.5f)) * (frame[1].f)), (jfloat(45.0f)));
	LINE_NUMBER(1230);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_status_R_mindustry_world_meta_BlockStatus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_status_R_mindustry_world_meta_BlockStatus])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_meta_BlockStatus *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha2));
	LINE_NUMBER(1231);
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, (frame[2].f), (frame[3].f), ((jfloat(1.5f)) * (frame[1].f)), (jfloat(45.0f)));
	LINE_NUMBER(1232);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_1:;
	LINE_NUMBER(1234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawCracks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawCracks", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1237);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCracks) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_damaged_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) <= (7)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1238);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_pos_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1239);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_cracks;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	jfloat temp1 = jfloat(1);
	jfloat temp2 = (jfloat)((func_mindustry_entities_comp_BuildingComp_healthf_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_healthf_R_float])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint(((temp1 - temp2) * (jfloat(8.0f))))), (jint(0)), (7));
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp3));
	LINE_NUMBER(1240);
	jfloat temp4 = jfloat(0.2f);
	jfloat temp5 = jfloat(0.1f);
	jfloat temp6 = jfloat(1);
	jfloat temp7 = (jfloat)((func_mindustry_entities_comp_BuildingComp_healthf_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_healthf_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_colorl_float_float(ctx, temp4, (temp5 + ((temp6 - temp7) * (jfloat(0.6f)))));
	LINE_NUMBER(1242);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[2].o), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y), (jfloat((((frame[1].i) % (jint(4))) * (90)))));
	LINE_NUMBER(1243);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawSelect", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1248);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_world_Block_drawOverlay_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawOverlay_float_float_int])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(1249);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_status_R_mindustry_world_meta_BlockStatus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_status_R_mindustry_world_meta_BlockStatus])(ctx, (frame[0].o));
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(1250);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"rules.unitfactoryactivation.objective"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jdouble temp1 = jdouble(0);
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_state;
	sp[4].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[4].o))->F_rules;
	sp[5].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float])(ctx, sp[4].o, sp[5].o);
	jdouble temp3 = jdouble(temp2);
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_state;
	jdouble temp4 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, temp1, (temp3 - ((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[4].o))->F_tick)));
	sp[4].o = (jobject)SM_mindustry_core_UI_formatTime_float_R_java_lang_String(ctx, (jfloat(temp4)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp5 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp6 = (jfloat)((func_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, temp5, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y), (jint(0)));
	}
label_2:;
	LINE_NUMBER(1252);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawItemSelection_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawItemSelection", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1255);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1256);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].f = (temp0 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))));
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[3].f = (temp1 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))));
	jfloat temp2 = jfloat(6.0f);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_fullIcon;
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_ratio_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_ratio_R_float])(ctx, sp[0].o);
	frame[4].f = (temp2 * temp3);
	frame[5].f = (jfloat(6.0f));
	LINE_NUMBER(1257);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_darkGray;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(1258);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[2].f), ((frame[3].f) - (jfloat(1))), (frame[4].f), (frame[5].f));
	LINE_NUMBER(1259);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1260);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	}
label_1:;
	LINE_NUMBER(1262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawDisabled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawDisabled", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1265);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_scarlet;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1266);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(0.8f)));
	LINE_NUMBER(1268);
	frame[1].f = (jfloat(6.0f));
	LINE_NUMBER(1269);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), (frame[1].f));
	LINE_NUMBER(1271);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1276);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variants) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variantRegions;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1277);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_entities_comp_BuildingComp_drawrot_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_drawrot_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1279);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variantRegions;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[1].o);
	jlong temp1 = jlong(temp0);
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_variantRegions;
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp3, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	jint temp5 = (jint)SM_arc_math_Mathf_randomSeed_long_int_int_R_int(ctx, temp1, temp2, temp4);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp5);
	jfloat temp6 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp7 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp8 = (jfloat)((func_mindustry_entities_comp_BuildingComp_drawrot_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_drawrot_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp6, temp7, temp8);
	}
label_3:;
	{
	LINE_NUMBER(1282);
	((func_mindustry_entities_comp_BuildingComp_drawTeamTop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_drawTeamTop])(ctx, (frame[0].o));
	LINE_NUMBER(1283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawCached(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawCached", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1287);
	((func_mindustry_entities_comp_BuildingComp_draw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_draw])(ctx, (frame[0].o));
	LINE_NUMBER(1288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_recache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:recache", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1291);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_buildingCacheLayer;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(1292);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_payloadDraw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:payloadDraw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1295);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[1].f = temp0;
	LINE_NUMBER(1296);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1297);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildingCacheLayer;
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_graphics_BuildingCacheLayer *) NULL_CHECK(sp[0].o))->F_layer));
	LINE_NUMBER(1298);
	((func_mindustry_entities_comp_BuildingComp_drawCached) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_drawCached])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(1300);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawDynamic) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1301);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[1].f));
	LINE_NUMBER(1302);
	((func_mindustry_entities_comp_BuildingComp_draw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_draw])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(1304);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawTeamTop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawTeamTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1307);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1308);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_teamRegion;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(1309);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(1310);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_1:;
	LINE_NUMBER(1312);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawLight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1315);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightLiquid;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightLiquid;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1316);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawLiquidLight) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_lightColor;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(1318);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_visualLiquid;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[1].o, (frame[1].o));
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(temp1, (jfloat(1,000000e-02f)), -1)) < 0) goto label_6;
	}
	INST_FCONST(1);
	goto label_7;
label_6:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.06f)));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_visualLiquid = temp0;
	LINE_NUMBER(1319);
	((func_mindustry_entities_comp_BuildingComp_drawLiquidLight_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_drawLiquidLight_mindustry_type_Liquid_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_visualLiquid));
	}
label_4:;
	LINE_NUMBER(1321);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawLiquidLight_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawLiquidLight", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1324);
	if ((floatCompare((frame[2].f), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1325);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_lightColor;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1326);
	frame[4].f = (jfloat(1));
	LINE_NUMBER(1327);
	frame[5].f = (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) * (frame[4].f));
	LINE_NUMBER(1328);
	if ((floatCompare((frame[5].f), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1329);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, (((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) * (jfloat(30.0f))) * (frame[4].f)), (frame[3].o), ((frame[5].f) * (frame[2].f)));
	}
label_1:;
	LINE_NUMBER(1332);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawTeam(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawTeam", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1335);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1336);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block-border"_j));
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (temp0 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2)))) + (jfloat(4.0f));
	jfloat temp2 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float(ctx, sp[0].o, temp1, ((temp2 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2)))) + (jfloat(4.0f))));
	LINE_NUMBER(1337);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_checkSuppression_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:checkSuppression", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1342);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_isHealSuppressed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_isHealSuppressed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1343);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.03)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1344);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_regenSuppressParticle;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))) - (jfloat(1))));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))) - (jfloat(1))));
	jfloat temp5 = temp3 + temp4;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_suppressColor;
	((func_mindustry_entities_Effect_at_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color])(ctx, sp[0].o, temp2, temp5, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(1347);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1350);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_playerPlaced_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:playerPlaced", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_placed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:placed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1362);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1364);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) == 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_connectedPower) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1365);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_0(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	SM_mindustry_world_blocks_power_PowerNode_getNodeLinks_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_3:;
	LINE_NUMBER(1371);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onRepaired(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onRepaired", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1376);
	((func_mindustry_entities_comp_BuildingComp_placed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_placed])(ctx, (frame[0].o));
	LINE_NUMBER(1377);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_hasFogRadius;
	jint temp0 = (jint)((func_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1378);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[2].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[2].o)));
	}
label_2:;
	LINE_NUMBER(1380);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_isCommandable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:isCommandable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1383);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_commandable);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_isPayload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:isPayload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1388);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_emptyTile;
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

void M_mindustry_entities_comp_BuildingComp_overwrote_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:overwrote", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1396);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onRemoved", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1399);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_unitOn_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:unitOn", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1403);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_unitOnAny_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:unitOnAny", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1407);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_unitRemoved_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:unitRemoved", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1411);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_puddleOn_mindustry_gen_Puddle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:puddleOn", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1416);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_configured_mindustry_gen_Unit_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:configured", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1421);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	clinit_java_lang_Void(ctx);
	(sp++)->o = SF_java_lang_Void_TYPE;
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_3:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1423);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_Item)) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) &class_mindustry_type_Item);
	INST_ASTORE(3);
label_5:;
	{
	LINE_NUMBER(1424);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_Block)) == 0) goto label_6;
	}
	(sp++)->o = ((jobject) &class_mindustry_world_Block);
	INST_ASTORE(3);
label_6:;
	{
	LINE_NUMBER(1425);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_Liquid)) == 0) goto label_7;
	}
	(sp++)->o = ((jobject) &class_mindustry_type_Liquid);
	INST_ASTORE(3);
label_7:;
	{
	LINE_NUMBER(1426);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_UnitType)) == 0) goto label_8;
	}
	(sp++)->o = ((jobject) &class_mindustry_type_UnitType);
	INST_ASTORE(3);
label_8:;
	{
	LINE_NUMBER(1428);
	if ((frame[1].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1429);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player])(ctx, (frame[1].o));
	((func_mindustry_entities_comp_BuildingComp_updateLastAccess_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_updateLastAccess_mindustry_gen_Player])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(1432);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurations;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1433);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurations;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, (checkCast(ctx, &class_arc_func_Cons2, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_func_Cons2, sp[0].o)), (frame[0].o), (frame[2].o));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1434);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Building)) == 0) goto label_13;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[2].o)));
	LINE_NUMBER(1436);
	sp[0].o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1437);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Building)) != 0) goto label_13;
	}
	{
	LINE_NUMBER(1438);
	((func_mindustry_entities_comp_BuildingComp_configured_mindustry_gen_Unit_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_configured_mindustry_gen_Unit_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	}
label_13:;
	LINE_NUMBER(1441);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_updateLastAccess_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:updateLastAccess", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1444);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, (frame[1].o));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_lastAccessed = (jref) sp[1].o;
	LINE_NUMBER(1445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_tapped(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:tapped", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_afterDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:afterDestroyed", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1454);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroyBullet;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1458);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroyBullet;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp += 2;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroyBulletSameTeam) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp += 1;
	goto label_4;
	}
label_3:;
	clinit_mindustry_game_Team(ctx);
	(sp++)->o = SF_mindustry_game_Team_derelict;
label_4:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((func_mindustry_entities_comp_BuildingComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_id_R_int])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_randomSeed_long_float_R_float(ctx, (jlong(temp2)), (jfloat(360.0f)));
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp3);
	}
label_1:;
	LINE_NUMBER(1460);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_BuildingComp_explosionItemCap_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:explosionItemCap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1464);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_splashLiquid_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:splashLiquid", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1468);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[2].f) / (jfloat(4.0f))), (jfloat(0)), (jfloat(10.0f)));
	frame[3].f = temp0;
	LINE_NUMBER(1470);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	jfloat temp0 = jfloat((frame[4].i));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[2].f) / (jfloat(5.0f))), (jfloat(0)), (jfloat(30.0f)));
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(1471);
	jfloat temp0 = (jfloat((frame[4].i))) / (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_1);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(1470);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1478);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onDeconstructed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onDeconstructed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1483);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_incinerable) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_deconstructDropAllLiquid) == 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1484);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp1 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].f = ((temp0 / (jfloat((temp1 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))))) * (jfloat(2)));
	LINE_NUMBER(1485);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_1);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(1487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onDestroyed", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1491);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].f = ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_baseExplosiveness);
	LINE_NUMBER(1492);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(1493);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(1495);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1496);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(1497);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[5].o));
	jint temp1 = (jint)((func_mindustry_entities_comp_BuildingComp_explosionItemCap_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_explosionItemCap_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[6].i = temp2;
	LINE_NUMBER(1498);
	frame[1].f = ((frame[1].f) + (((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[5].o)))->F_explosiveness) * (jfloat((frame[6].i)))));
	LINE_NUMBER(1499);
	frame[2].f = ((frame[2].f) + (((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[5].o)))->F_flammability) * (jfloat((frame[6].i)))));
	LINE_NUMBER(1500);
	jfloat temp3 = frame[3].f;
	jfloat temp4 = (jfloat)((mindustry_type_Item *) NULL_CHECK((frame[5].o)))->F_charge;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (jfloat((frame[6].i))), (jfloat(1.1f)));
	frame[3].f = (temp3 + ((temp4 * temp5) * (jfloat(150.0f))));
	LINE_NUMBER(1501);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1504);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1505);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_0(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_0);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = (temp0 + temp1);
	LINE_NUMBER(1506);
	jfloat temp2 = frame[1].f;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_1(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_1 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_1);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp3 = (jfloat)((func_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = (temp2 + temp3);
	}
label_12:;
	{
	LINE_NUMBER(1509);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1510);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	jfloat temp1 = (jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	frame[3].f = (temp0 + (temp1 * ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity)));
	}
label_15:;
	{
	LINE_NUMBER(1513);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_17;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions) == 0) goto label_17;
	}
	{
	LINE_NUMBER(1514);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_0(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_modules_LiquidModule_each_mindustry_world_modules_LiquidModule$LiquidConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_each_mindustry_world_modules_LiquidModule$LiquidConsumer])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(1518);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = frame[2].f;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp3 = temp2 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flammabilityScale);
	jfloat temp4 = (frame[1].f) * (jfloat(3.5f));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp5 = temp4 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_explosivenessScale);
	jfloat temp6 = frame[3].f;
	jint temp7 = 8;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp8 = (jfloat((temp7 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) / (jfloat(2));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp9 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroyEffect;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_mindustry_entities_Effect_float(ctx, temp0, temp1, temp3, temp5, temp6, temp8, temp9, sp[0].o, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_baseShake));
	LINE_NUMBER(1520);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_createRubble) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_20;
	}
	{
	LINE_NUMBER(1521);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	SM_mindustry_entities_Effect_rubble_float_float_int(ctx, temp0, temp1, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	}
label_20:;
	{
	LINE_NUMBER(1524);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_22;
	}
	{
	LINE_NUMBER(1525);
	((func_mindustry_entities_comp_BuildingComp_playDestroySound) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_playDestroySound])(ctx, (frame[0].o));
	LINE_NUMBER(1527);
	if ((floatCompare((frame[1].f), (jfloat(40.0f)), -1)) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(1528);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.5)));
	if (temp0 == 0) goto label_27;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_blockExplodeExplosive;
	goto label_28;
label_27:;
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_blockExplodeExplosiveAlt;
label_28:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	goto label_29;
	}
label_25:;
	{
	LINE_NUMBER(1529);
	if ((floatCompare((frame[2].f), (jfloat(5.0f)), -1)) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(1530);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeFlammable;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	}
label_29:;
	{
	LINE_NUMBER(1533);
	if ((floatCompare((frame[3].f), (jfloat(30000.0f)), -1)) <= 0) goto label_31;
	}
	{
	LINE_NUMBER(1534);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeElectricBig;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	goto label_22;
	}
label_31:;
	{
	LINE_NUMBER(1535);
	if ((floatCompare((frame[3].f), (jfloat(2000.0f)), -1)) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(1536);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeElectric;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	}
label_22:;
	LINE_NUMBER(1539);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_playDestroySound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:playDestroySound", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1542);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroySound;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	LINE_NUMBER(1543);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_getDisplayName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getDisplayName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1547);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(1548);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"block.derelict"_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n\u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1549);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[2].o);
	sp += 1;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_emoji;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_emoji;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" \u0001"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_6:;
	POP_N(2); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
label_3:;
	LINE_NUMBER(1547);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_getDisplayIcon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getDisplayIcon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1553);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_flowItems_R_mindustry_world_modules_ItemModule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:flowItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1558);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:display", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1564);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1568);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1570);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1573);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(1574);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1578);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1579);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1580);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1582);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_category;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_category;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_liquid;
	if (sp[0].o != sp[1].o) goto label_11;
	}
label_10:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_displayFlow) == 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1584);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1585);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[0].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" \u0001"_j.string, 1, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1587);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_flowItems_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_flowItems_R_mindustry_world_modules_ItemModule])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1589);
	if ((frame[4].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1590);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1591);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1592);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_5);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1616);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(1619);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1620);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1621);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1622);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_arc_func_Cons_6);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1646);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(1650);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastAccessed;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(1651);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1652);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"lastaccessed"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastAccessed;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(260.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_27:;
	{
	LINE_NUMBER(1655);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(-5.0f)));
	}
label_4:;
	LINE_NUMBER(1657);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_displayConsumption_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:displayConsumption", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1660);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1661);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumers;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1662);
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[5].o)))->F_optional) == 0) goto label_5;
	}
	{
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[5].o)))->F_booster) == 0) goto label_5;
	}
	goto label_6;
label_5:;
	{
	LINE_NUMBER(1663);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_consumers_Consume_build_mindustry_gen_Building_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_Consume_build_mindustry_gen_Building_arc_scene_ui_layout_Table])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(1661);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1665);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_displayBars_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:displayBars", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1668);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_world_Block_listBars_R_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_listBars_R_java_lang_Iterable])(ctx, sp[0].o);
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
	frame[3].o = (checkCast(ctx, &class_arc_func_Func, sp[0].o));
	LINE_NUMBER(1669);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	frame[4].o = (checkCast(ctx, &class_mindustry_ui_Bar, sp[0].o));
	LINE_NUMBER(1670);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	goto label_1;
label_5:;
	{
	LINE_NUMBER(1671);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1672);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1673);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1674);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:buildConfiguration", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1679);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_updateTableAlign_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:updateTableAlign", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1683);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((temp1 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2)))) - (jfloat(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1684);
	sp[0].o = frame[1].o;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp3 = temp2 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft);
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, sp[0].o, temp3, (temp4 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom)), (jint(2)));
	LINE_NUMBER(1685);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_getCursor_R_arc_Graphics$Cursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getCursor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1689);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurable) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	(sp++)->o = SF_arc_Graphics$Cursor$SystemCursor_hand;
	goto label_2;
label_1:;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	(sp++)->o = SF_arc_Graphics$Cursor$SystemCursor_arrow;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onConfigureBuildTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1697);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_clearOnDoubleTap) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1698);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	{
	LINE_NUMBER(1699);
	((func_mindustry_entities_comp_BuildingComp_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(1700);
	((func_mindustry_entities_comp_BuildingComp_configure_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_configure_java_lang_Object])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(1701);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(1703);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1705);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	if (sp[0].o == (frame[1].o)) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_onConfigureTapped_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onConfigureTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1714);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onConfigureClosed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onConfigureClosed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1720);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_shouldShowConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:shouldShowConfigure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1724);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_shouldHideConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:shouldHideConfigure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1729);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_drawConfigure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:drawConfigure", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1733);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1734);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(1735);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, temp0, temp1, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1))));
	LINE_NUMBER(1736);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1737);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_checkSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:checkSolid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1740);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_handleDamage_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:handleDamage", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1744);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_absorbLasers_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:absorbLasers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1748);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_absorbLasers);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_isInsulated_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:isInsulated", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1752);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_insulated);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_collide_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:collide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1756);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_collision_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:collision", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1762);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1763);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_type;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1765);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_type;
	jfloat temp0 = (jfloat)((func_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float])(ctx, sp[0].o, (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(1766);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[3].o)))->F_pierceArmor) != 0) goto label_6;
	}
	{
	LINE_NUMBER(1767);
	jfloat temp0 = frame[4].f;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_mindustry_entities_Damage_applyArmor_float_float_R_float(ctx, temp0, ((((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_armor) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[3].o)))->F_armorMultiplier)) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[3].o)))->F_blockArmorMultiplier)));
	frame[4].f = temp1;
	}
label_6:;
	{
	LINE_NUMBER(1770);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	((func_mindustry_entities_comp_BuildingComp_damage_mindustry_gen_Bullet_mindustry_game_Team_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_damage_mindustry_gen_Bullet_mindustry_game_Team_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].f));
	LINE_NUMBER(1772);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_9;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_9;
	{
	LINE_NUMBER(1773);
	clinit_mindustry_game_EventType$BuildingBulletDestroyEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildingBulletDestroyEvent);
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	init_mindustry_game_EventType$BuildingBulletDestroyEvent_mindustry_gen_Building_mindustry_gen_Bullet(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(1776);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_damage_mindustry_game_Team_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:damage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1781);
	((func_mindustry_entities_comp_BuildingComp_damage_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_damage_float])(ctx, (frame[0].o), (frame[2].f));
	LINE_NUMBER(1782);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_damage_mindustry_gen_Bullet_mindustry_game_Team_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:damage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1786);
	((func_mindustry_entities_comp_BuildingComp_damage_mindustry_game_Team_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_damage_mindustry_game_Team_float])(ctx, (frame[0].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(1787);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp_bulletDamageEvent;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_game_EventType$BuildDamageEvent_set_mindustry_gen_Building_mindustry_gen_Bullet_R_mindustry_game_EventType$BuildDamageEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$BuildDamageEvent_set_mindustry_gen_Building_mindustry_gen_Bullet_R_mindustry_game_EventType$BuildDamageEvent])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1788);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:changeTeam", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1792);
	((func_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1793);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:changeTeam", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1797);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1798);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_forceTeam;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_forceTeam;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(1800);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1802);
	if ((frame[3].o) != (frame[1].o)) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(1804);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_isValid_R_boolean])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(1806);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(1808);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(1810);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_8;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_8;
	{
	LINE_NUMBER(1811);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1812);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1813);
	if ((frame[7].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	if (sp[0].o != (frame[5].o)) goto label_14;
	}
	{
	LINE_NUMBER(1814);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, sp[0].o, (frame[7].o));
	}
label_14:;
	LINE_NUMBER(1816);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(1817);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_17;
	}
	{
	LINE_NUMBER(1818);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_items;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1821);
	if ((frame[7].o) == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	if (sp[0].o != (frame[5].o)) goto label_20;
	}
	{
	LINE_NUMBER(1822);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, sp[0].o, (frame[6].i));
	LINE_NUMBER(1823);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp1 = (jint)((func_mindustry_entities_comp_BuildingComp_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_pos_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, temp1);
	LINE_NUMBER(1825);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(1827);
	INST_IINC(6, -1);
	}
label_20:;
	{
	LINE_NUMBER(1817);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(1830);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	LINE_NUMBER(1832);
	((func_mindustry_entities_comp_BuildingComp_updatePowerGraph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_updatePowerGraph])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(1835);
	if ((frame[4].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(1836);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1837);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp_teamChangeEvent;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_game_EventType$BuildTeamChangeEvent_set_mindustry_game_Team_mindustry_gen_Building_R_mindustry_game_EventType$BuildTeamChangeEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$BuildTeamChangeEvent_set_mindustry_game_Team_mindustry_gen_Building_R_mindustry_game_EventType$BuildTeamChangeEvent])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[2].o)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1838);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1839);
	((func_mindustry_entities_comp_BuildingComp_updateProximity) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_updateProximity])(ctx, (frame[0].o));
	}
label_26:;
	{
	LINE_NUMBER(1842);
	((func_mindustry_entities_comp_BuildingComp_checkAllowUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_checkAllowUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(1843);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_canPickup_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:canPickup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1846);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_allowedInPayloads);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_pickedUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:pickedUp", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1852);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_afterPickedUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:afterPickedUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1856);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1858);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[1].o);
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph = (jref) sp[1].o;
	LINE_NUMBER(1859);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(1860);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1861);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = (jfloat(0));
	}
label_1:;
	LINE_NUMBER(1864);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_removeFromProximity(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:removeFromProximity", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1867);
	((func_mindustry_entities_comp_BuildingComp_onProximityRemoved) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_onProximityRemoved])(ctx, (frame[0].o));
	LINE_NUMBER(1868);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp_tmpTiles;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(1870);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1871);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1872);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1874);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1875);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp_tmpTiles;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	}
label_8:;
	{
	LINE_NUMBER(1871);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1879);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp_tmpTiles;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1880);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_proximity;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (jint(1)));
	LINE_NUMBER(1881);
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, (frame[3].o));
	LINE_NUMBER(1882);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1883);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1884);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_updateProximity(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:updateProximity", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1887);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp_tmpTiles;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(1888);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1890);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1891);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1892);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1894);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	goto label_8;
label_9:;
	{
	LINE_NUMBER(1896);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_proximity;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_Seq_addUnique_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addUnique_java_lang_Object_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	LINE_NUMBER(1898);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp_tmpTiles;
	jint temp1 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	}
label_8:;
	{
	LINE_NUMBER(1891);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1902);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp_tmpTiles;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1903);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(1904);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1906);
	((func_mindustry_entities_comp_BuildingComp_onProximityAdded) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_onProximityAdded])(ctx, (frame[0].o));
	LINE_NUMBER(1907);
	((func_mindustry_entities_comp_BuildingComp_onProximityUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_onProximityUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(1909);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp_tmpTiles;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1910);
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, (frame[3].o));
	LINE_NUMBER(1911);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(1913);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_21;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_entities_comp_BuildingComp_recache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_recache])(ctx, sp[0].o);
label_21:;
	LINE_NUMBER(1914);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_onNearbyBuildAdded_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:onNearbyBuildAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1916);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_consume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:consume", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1919);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumers;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(1920);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	LINE_NUMBER(1919);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1922);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_canConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:canConsume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1925);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency), (jfloat(0)), -1)) <= 0) goto label_1;
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

jfloat M_mindustry_entities_comp_BuildingComp_delta_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:delta", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1930);
	popStackFrame(ctx);
	return ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_edelta_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:edelta", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1935);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_efficiency;
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_BuildingComp_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_delta_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_updateEfficiencyMultiplier(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:updateEfficiencyMultiplier", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1940);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_BuildingComp_efficiencyScale_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_efficiencyScale_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(1941);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_efficiency = (((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_efficiency) * (frame[1].f));
	LINE_NUMBER(1942);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_optionalEfficiency = (((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_optionalEfficiency) * (frame[1].f));
	LINE_NUMBER(1943);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_efficiencyScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:efficiencyScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1947);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_updateConsumption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:updateConsumption", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1952);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasConsumers) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_cheating_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_cheating_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1953);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_productionValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_productionValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	INST_FCONST(1);
	goto label_4;
label_3:;
	INST_FCONST(0);
label_4:;
	{
	sp -= 2;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_potentialEfficiency = sp[1].f;
	LINE_NUMBER(1954);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean])(ctx, (frame[0].o));
	sp += 2;
	if (temp0 == 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency;
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 3;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[1].o))->F_optionalEfficiency = sp[2].f;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_efficiency = sp[2].f;
	LINE_NUMBER(1955);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_shouldConsumePower = (jint(1));
	LINE_NUMBER(1956);
	((func_mindustry_entities_comp_BuildingComp_updateEfficiencyMultiplier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_updateEfficiencyMultiplier])(ctx, (frame[0].o));
	LINE_NUMBER(1957);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(1961);
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_11;
	}
	{
	LINE_NUMBER(1962);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[2].o))->F_optionalEfficiency = temp0;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[1].o))->F_efficiency = temp0;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_potentialEfficiency = temp0;
	LINE_NUMBER(1963);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_shouldConsumePower = (jint(0));
	LINE_NUMBER(1964);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(1967);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_productionValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_productionValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(1969);
	frame[2].f = (jfloat(1));
	LINE_NUMBER(1972);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[1].o))->F_optionalEfficiency = temp0;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_efficiency = temp0;
	LINE_NUMBER(1973);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_shouldConsumePower = (jint(1));
	LINE_NUMBER(1976);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_nonOptionalConsumers;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_21:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_22;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1977);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	frame[7].f = temp0;
	LINE_NUMBER(1979);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_consPower;
	if (sp[0].o == sp[1].o) goto label_25;
	}
	{
	if ((floatCompare((frame[7].f), (jfloat(1,000000e-07f)), 1)) > 0) goto label_25;
	}
	{
	LINE_NUMBER(1980);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_shouldConsumePower = (jint(0));
	}
label_25:;
	{
	LINE_NUMBER(1983);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[2].f), (frame[7].f));
	frame[2].f = temp0;
	LINE_NUMBER(1976);
	INST_IINC(5, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1987);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_optionalConsumers;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_28:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_29;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1988);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_optionalEfficiency;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float])(ctx, sp[1].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[2].o)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_optionalEfficiency = temp2;
	LINE_NUMBER(1987);
	INST_IINC(5, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(1992);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_efficiency = (frame[2].f);
	LINE_NUMBER(1993);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_optionalEfficiency), (frame[2].f));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_optionalEfficiency = temp0;
	LINE_NUMBER(1996);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency = ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_efficiency);
	LINE_NUMBER(1999);
	if ((frame[1].i) != 0) goto label_35;
	}
	{
	LINE_NUMBER(2000);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[1].o))->F_optionalEfficiency = temp0;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_efficiency = temp0;
	}
label_35:;
	{
	LINE_NUMBER(2003);
	((func_mindustry_entities_comp_BuildingComp_updateEfficiencyMultiplier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_updateEfficiencyMultiplier])(ctx, (frame[0].o));
	LINE_NUMBER(2006);
	if ((frame[1].i) == 0) goto label_38;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_38;
	}
	{
	LINE_NUMBER(2007);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_updateConsumers;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_40:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_38;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2008);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_consumers_Consume_update_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_Consume_update_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	LINE_NUMBER(2007);
	INST_IINC(5, 1);
	goto label_40;
	}
label_38:;
	LINE_NUMBER(2011);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_updatePayload_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:updatePayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2014);
	((func_mindustry_entities_comp_BuildingComp_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_update])(ctx, (frame[0].o));
	LINE_NUMBER(2015);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:updateTile", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2019);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_ambientVolume_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:ambientVolume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2023);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_efficiency);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2032);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:isValid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2038);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_dead_R_boolean])(ctx, (frame[0].o));
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

void M_mindustry_entities_comp_BuildingComp_heal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:heal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2044);
	((func_mindustry_entities_comp_BuildingComp_healthChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_healthChanged])(ctx, (frame[0].o));
	LINE_NUMBER(2045);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_heal_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:heal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2050);
	((func_mindustry_entities_comp_BuildingComp_healthChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_healthChanged])(ctx, (frame[0].o));
	LINE_NUMBER(2051);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_hitSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:hitSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2055);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8))));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_kill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:kill", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2061);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_buildDestroyed_mindustry_gen_Building(ctx, (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o)));
	LINE_NUMBER(2062);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:damage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2067);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2069);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = temp0;
	LINE_NUMBER(2070);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_lastDamageTime = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	jfloat bh = frame[2].f;
	if (std::isnan(bh) || bh <= 0.0001f) bh = 1.0f;
	frame[1].f = (frame[1].f) / bh;
	if (std::isnan(frame[1].f) || std::isinf(frame[1].f) || frame[1].f < 0.0f) frame[1].f = 0.0f;
	}
label_4:;
label_6:;
	{
	LINE_NUMBER(2079);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(2080);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_health;
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_BuildingComp_handleDamage_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_handleDamage_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_health = (temp0 - temp1);
	}
label_7:;
	{
	LINE_NUMBER(2083);
	((func_mindustry_entities_comp_BuildingComp_healthChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_healthChanged])(ctx, (frame[0].o));
	LINE_NUMBER(2085);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_10;
	}
	{
	LINE_NUMBER(2086);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_buildDestroyed_mindustry_gen_Building(ctx, (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o)));
	}
label_10:;
	LINE_NUMBER(2088);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_healthChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:healthChanged", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2092);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2093);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	}
label_1:;
	{
	LINE_NUMBER(2096);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	LINE_NUMBER(2097);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_entities_comp_BuildingComp_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:sense", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2101);
	clinit_mindustry_entities_comp_BuildingComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_10;
		case 11: goto label_11;
		case 12: goto label_12;
		case 13: goto label_13;
		case 14: goto label_14;
		case 15: goto label_15;
		case 16: goto label_16;
		case 17: goto label_17;
		case 18: goto label_18;
		case 19: goto label_19;
		case 20: goto label_20;
		case 21: goto label_21;
		case 22: goto label_22;
		case 23: goto label_23;
		case 24: goto label_24;
		case 25: goto label_25;
		case 26: goto label_26;
		case 27: goto label_27;
		case 28: goto label_28;
		case 29: goto label_28;
		case 30: goto label_28;
		case 31: goto label_28;
		default: goto label_29;
	}
	}
label_1:;
	{
	LINE_NUMBER(2102);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_2:;
	{
	LINE_NUMBER(2103);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_3:;
	{
	LINE_NUMBER(2104);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jdouble temp2 = (jdouble)SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(ctx, temp0, temp1, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b), (jfloat(1)));
	sp[0].d = temp2;
	sp += 1;
	goto label_30;
	}
label_4:;
	{
	LINE_NUMBER(2105);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_31;
	}
	INST_DCONST(1);
	goto label_30;
label_31:;
	INST_DCONST(0);
	goto label_30;
label_5:;
	{
	LINE_NUMBER(2106);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_32;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_checkSolid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_checkSolid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_33;
	}
label_32:;
	INST_DCONST(1);
	goto label_30;
label_33:;
	INST_DCONST(0);
	goto label_30;
label_6:;
	{
	LINE_NUMBER(2107);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	jdouble temp0 = jdouble(((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_7:;
	{
	LINE_NUMBER(2108);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_health));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_8:;
	{
	LINE_NUMBER(2109);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_9:;
	{
	LINE_NUMBER(2110);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_efficiency));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_10:;
	{
	LINE_NUMBER(2111);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_11:;
	{
	LINE_NUMBER(2112);
	frame[3].o = (frame[0].o);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_logic_Ranged)) == 0) goto label_34;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_logic_Ranged, (frame[3].o)));
	jfloat temp0 = (jfloat)((func_mindustry_logic_Ranged_range_R_float) resolveInterfaceMethod(ctx, &class_mindustry_logic_Ranged, INDEX_mindustry_logic_Ranged_range_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jdouble temp1 = jdouble((temp0 / (jfloat(8.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_34:;
	INST_DCONST(0);
	goto label_30;
label_12:;
	{
	LINE_NUMBER(2113);
	jdouble temp0 = jdouble(((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_13:;
	{
	LINE_NUMBER(2114);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_36;
	}
	INST_DCONST(0);
	goto label_30;
label_36:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_14:;
	{
	LINE_NUMBER(2116);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o != nullptr) goto label_37;
	}
	INST_DCONST(0);
	goto label_30;
label_37:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_15:;
	{
	LINE_NUMBER(2117);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o != nullptr) goto label_39;
	}
label_38:;
	INST_DCONST(0);
	goto label_30;
label_39:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	jfloat temp0 = (jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(temp1))->F_buffered) == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity;
	sp[0].f = temp0;
	sp += 1;
	goto label_41;
	}
label_40:;
	INST_FCONST(1);
label_41:;
	{
	sp -= 2;
	jdouble temp0 = jdouble((sp[0].f * sp[1].f));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_16:;
	{
	LINE_NUMBER(2118);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jdouble temp0 = jdouble(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_42:;
	INST_DCONST(0);
	goto label_30;
label_17:;
	{
	LINE_NUMBER(2119);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_43:;
	INST_DCONST(0);
	goto label_30;
label_18:;
	{
	LINE_NUMBER(2120);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_44:;
	INST_DCONST(0);
	goto label_30;
label_19:;
	{
	LINE_NUMBER(2121);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_45;
	}
	INST_DCONST(0);
	goto label_30;
label_45:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerIn_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble((temp0 * (jfloat(60.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_20:;
	{
	LINE_NUMBER(2122);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_46;
	}
	INST_DCONST(0);
	goto label_30;
label_46:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerOut_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerOut_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble((temp0 * (jfloat(60.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_21:;
	{
	LINE_NUMBER(2123);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_47;
	}
	INST_DCONST(0);
	goto label_30;
label_47:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_22:;
	{
	LINE_NUMBER(2124);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_48;
	}
	INST_DCONST(0);
	goto label_30;
label_48:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_23:;
	{
	LINE_NUMBER(2125);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_armor));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_24:;
	{
	LINE_NUMBER(2126);
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_49;
	}
	INST_DCONST(1);
	goto label_30;
label_49:;
	INST_DCONST(0);
	goto label_30;
label_25:;
	{
	LINE_NUMBER(2127);
	frame[3].o = (frame[0].o);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ControlBlock)) == 0) goto label_50;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_ControlBlock, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_ControlBlock_isControlled_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_isControlled_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_50;
	}
	INST_ICONST(2);
	goto label_52;
label_50:;
	INST_ICONST(0);
label_52:;
	INST_I2D();
	goto label_30;
label_26:;
	{
	LINE_NUMBER(2128);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_53;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_total_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_54;
	}
label_53:;
	INST_ICONST(0);
label_54:;
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_55;
	}
	INST_ICONST(1);
	goto label_56;
label_55:;
	INST_ICONST(0);
label_56:;
	{
	sp -= 2;
	jdouble temp0 = jdouble((sp[0].i + sp[1].i));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_27:;
	{
	LINE_NUMBER(2129);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jdouble temp0 = jdouble(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(2130);
	frame[3].o = (frame[0].o);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ControlBlock)) == 0) goto label_57;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_ControlBlock, (frame[3].o)));
	sp[0].o = (jobject)((func_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit, (frame[2].o)))(ctx, (frame[2].o));
	jdouble temp0 = (jdouble)((func_mindustry_gen_Unit_sense_mindustry_logic_LAccess_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_sense_mindustry_logic_LAccess_R_double])(ctx, sp[0].o, (frame[1].o));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_57:;
	INST_DCONST(0);
	goto label_30;
label_29:;
	LINE_NUMBER(2131);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_30:;
	LINE_NUMBER(2101);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:senseObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2137);
	clinit_mindustry_entities_comp_BuildingComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 32: goto label_1;
		case 33: goto label_2;
		case 34: goto label_3;
		case 35: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(2138);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp += 1;
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(2139);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_6;
label_7:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item])(ctx, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(2140);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_configSenseable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_configSenseable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_config_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_config_R_java_lang_Object])(ctx, (frame[0].o));
	sp += 1;
	goto label_6;
	}
label_8:;
	INST_ACONST_NULL();
	goto label_6;
label_4:;
	{
	LINE_NUMBER(2141);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_9;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[3].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp += 1;
	goto label_6;
	}
label_9:;
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_11;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[4].o)));
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp += 1;
	goto label_6;
	}
label_11:;
	INST_ACONST_NULL();
	goto label_6;
label_5:;
	LINE_NUMBER(2142);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	(sp++)->o = SF_mindustry_logic_Senseable_noSensed;
label_6:;
	LINE_NUMBER(2137);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_entities_comp_BuildingComp_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:sense", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2148);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_1:;
	{
	LINE_NUMBER(2149);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Liquid)) == 0) goto label_3;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Liquid, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_3:;
	{
	LINE_NUMBER(2150);
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(2151);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_UnitType)) == 0) goto label_7;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_7:;
	{
	LINE_NUMBER(2152);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_Block)) == 0) goto label_5;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_5:;
	{
	LINE_NUMBER(2154);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_control_mindustry_logic_LAccess_double_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:control", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	frame[8].d = param4;
	{
	LINE_NUMBER(2159);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_enabled;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(2160);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (jfloat((frame[2].d))));
	sp += 1;
	if (temp0 != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	sp -= 2;
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_enabled = sp[1].i;
label_1:;
	LINE_NUMBER(2162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_control_mindustry_logic_LAccess_java_lang_Object_double_double_double(jcontext ctx, jobject self, jobject param0, jobject param1, jdouble param2, jdouble param3, jdouble param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:control", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	{
	LINE_NUMBER(2167);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_config;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_logicConfigurable) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2169);
	((func_mindustry_entities_comp_BuildingComp_configured_mindustry_gen_Unit_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_configured_mindustry_gen_Unit_java_lang_Object])(ctx, (frame[0].o), (jobject(nullptr)), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(2171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:setProp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(2175);
	clinit_mindustry_entities_comp_BuildingComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 6: goto label_1;
		case 7: goto label_2;
		case 15: goto label_3;
		default: goto label_4;
	}
	}
label_2:;
	{
	LINE_NUMBER(2177);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_arc_math_Mathf_clamp_double_double_double_R_double(ctx, (frame[2].d), (jdouble(0)), (jdouble(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_maxHealth))));
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_health = (jfloat(temp0));
	LINE_NUMBER(2178);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_6;
	}
	{
	LINE_NUMBER(2179);
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_buildDestroyed_mindustry_gen_Building(ctx, (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o)));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(2181);
	((func_mindustry_entities_comp_BuildingComp_healthChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_healthChanged])(ctx, (frame[0].o));
	LINE_NUMBER(2183);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(2185);
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (jint((frame[2].d))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2186);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == (frame[4].o)) goto label_10;
	}
	{
	LINE_NUMBER(2187);
	((func_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team])(ctx, (frame[0].o), (frame[4].o));
	}
label_10:;
	LINE_NUMBER(2189);
	goto label_4;
label_3:;
	{
	LINE_NUMBER(2191);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2192);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_power;
	jdouble temp0 = frame[2].d;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_consPower;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (jfloat((temp0 / (jdouble(((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[1].o))->F_capacity)))))));
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = temp1;
	}
label_4:;
	LINE_NUMBER(2196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:setProp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2200);
	clinit_mindustry_entities_comp_BuildingComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BuildingComp$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 6: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(2202);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_game_Team)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Team, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == (frame[3].o)) goto label_2;
	}
	{
	LINE_NUMBER(2203);
	((func_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team])(ctx, (frame[0].o), (frame[3].o));
	}
label_2:;
	LINE_NUMBER(2207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:setProp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(2211);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2212);
	frame[6].i = (jint((frame[2].d)));
	LINE_NUMBER(2213);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(2214);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[4].o));
	if (temp0 >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(2215);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[4].o;
	jint temp0 = frame[6].i;
	sp[4].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[4].o, (frame[4].o));
	jint temp2 = (jint)((func_mindustry_entities_comp_BuildingComp_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[2].o, sp[3].o, (temp0 - temp1), (jobject(nullptr)));
	((func_mindustry_entities_comp_BuildingComp_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc])(ctx, sp[0].o, sp[1].o, temp2, (jobject(nullptr)));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(2216);
	if ((frame[6].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(2217);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[4].o));
	jint temp1 = (jint)((func_mindustry_entities_comp_BuildingComp_removeStack_mindustry_type_Item_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_removeStack_mindustry_type_Item_int_R_int])(ctx, sp[0].o, sp[1].o, (temp0 - (frame[6].i)));
	}
label_5:;
	LINE_NUMBER(2220);
	goto label_10;
label_1:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Liquid)) == 0) goto label_10;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Liquid, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(2221);
	jfloat temp0 = jfloat((frame[2].d));
	jfloat temp1 = jfloat(0);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity));
	frame[6].f = temp2;
	LINE_NUMBER(2223);
	jfloat temp3 = frame[6].f;
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp4 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[5].o));
	if ((floatCompare(temp3, temp4, 1)) < 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	if (sp[0].o == (frame[5].o)) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0.1f)), 1)) <= 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(2224);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[5].o), (frame[6].f));
	}
label_10:;
	LINE_NUMBER(2227);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BuildingComp_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:inFogTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2232);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(2234);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[3].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_sizeOffset);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[4].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[5].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(2236);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_isDiscovered_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_isDiscovered_mindustry_game_Team_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(2238);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(2239);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(2240);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, (frame[1].o), (((frame[4].i) + (frame[6].i)) + (frame[3].i)), (((frame[5].i) + (frame[7].i)) + (frame[3].i)));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(2241);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(2239);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(2238);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2246);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_killed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:killed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2251);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_dead = (jint(1));
	LINE_NUMBER(2252);
	clinit_mindustry_game_EventType$BlockDestroyEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockDestroyEvent);
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	init_mindustry_game_EventType$BlockDestroyEvent_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(2253);
	((func_mindustry_entities_comp_BuildingComp_onDestroyed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_onDestroyed])(ctx, (frame[0].o));
	LINE_NUMBER(2254);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_emptyTile;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(2255);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(2257);
	((func_mindustry_entities_comp_BuildingComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(2258);
	((func_mindustry_entities_comp_BuildingComp_afterDestroyed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_afterDestroyed])(ctx, (frame[0].o));
	LINE_NUMBER(2259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_checkAllowUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:checkAllowUpdate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2262);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_allowUpdate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_allowUpdate_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2263);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(0));
	}
label_1:;
	LINE_NUMBER(2265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2273);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_timeScaleDuration) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_timeScaleDuration = temp0;
	if ((floatCompare(temp0, (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(2274);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_timeScale = (jfloat(1));
	}
label_1:;
	{
	LINE_NUMBER(2277);
	((func_mindustry_entities_comp_BuildingComp_updateConsumption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_updateConsumption])(ctx, (frame[0].o));
	LINE_NUMBER(2279);
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_noUpdateDisabled) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(2280);
	((func_mindustry_entities_comp_BuildingComp_updateTile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_updateTile])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(2282);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_updateFogVisibility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:updateFogVisibility", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2286);
	if (((jint)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_wasVisible) != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2287);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_visibleFlags;
	jlong temp1 = jlong(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK(sp[0].o))->F_visibleFlags = (temp0 | (temp1 << ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id)));
	LINE_NUMBER(2288);
	((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_wasVisible = (jint(1));
	LINE_NUMBER(2289);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)));
	LINE_NUMBER(2290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2291);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_entities_comp_BuildingComp_recache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_recache])(ctx, sp[0].o);
label_1:;
	LINE_NUMBER(2293);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BuildingComp_getAmbientVolume_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getAmbientVolume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2297);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSoundVolume;
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_BuildingComp_ambientVolume_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_ambientVolume_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_getAmbientSound_R_arc_audio_Sound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:getAmbientSound", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2302);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:hitbox", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2307);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)));
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp2, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	LINE_NUMBER(2308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2313);
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_id_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_entities_comp_BuildingComp_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_tileX_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_entities_comp_BuildingComp_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_tileY_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Building#\u0001[\u0001,\u0001]:\u0001"_j.string, 4, boxInteger(ctx, temp0), boxInteger(ctx, temp1), boxInteger(ctx, temp2), sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$6", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1623);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1625);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_2);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(1637);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(1638);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_3);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1646);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_lambda$display$9_arc_struct_Bits_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$9", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1639);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
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
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(1640);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jint temp0 = (jint)((func_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1641);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[1].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id));
	LINE_NUMBER(1642);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(1644);
	goto label_1;
label_2:;
	LINE_NUMBER(1645);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$7", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1626);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(1627);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1628);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(1629);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jint temp0 = (jint)((func_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1630);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(1631);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_arc_func_Prov_0(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_arc_func_Prov_0);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1632);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_6:;
	LINE_NUMBER(1634);
	goto label_3;
label_4:;
	LINE_NUMBER(1635);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_BuildingComp_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1631);
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"..."_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, temp0, (jint(1)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, (frame[2].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_comp_BuildingComp_lambda$display$2_mindustry_world_modules_ItemModule_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BuildingComp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1593);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1595);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_4);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(1607);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(1608);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_java_lang_Runnable_5);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1616);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_comp_BuildingComp_lambda$display$5_mindustry_world_modules_ItemModule_arc_struct_Bits_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$5", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BuildingComp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1609);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
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
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(1610);
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1611);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[1].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id));
	LINE_NUMBER(1612);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(1614);
	goto label_1;
label_2:;
	LINE_NUMBER(1615);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_comp_BuildingComp_lambda$display$3_arc_scene_ui_layout_Table_mindustry_world_modules_ItemModule_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BuildingComp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1596);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(1597);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(1598);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(1599);
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean])(ctx, (frame[1].o), (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1600);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(1601);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BuildingComp_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_entities_comp_BuildingComp_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_entities_comp_BuildingComp_invoke_arc_func_Prov_1);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1602);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(1604);
	goto label_3;
label_4:;
	LINE_NUMBER(1605);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_comp_BuildingComp_lambda$display$4_mindustry_world_modules_ItemModule_mindustry_type_Item_java_lang_String_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BuildingComp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1601);
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_ItemModule_getFlowRate_mindustry_type_Item_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_getFlowRate_mindustry_type_Item_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"..."_j));
	goto label_2;
label_1:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_ItemModule_getFlowRate_mindustry_type_Item_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_getFlowRate_mindustry_type_Item_R_float])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, temp0, (jint(1)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, (frame[2].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_lambda$display$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1575);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(18.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(1577);
	((func_mindustry_entities_comp_BuildingComp_displayBars_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_displayBars_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1578);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_lambda$display$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$display$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1565);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1566);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[3].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((func_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion])(ctx, sp[2].o, sp[3].o);
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(1567);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(190.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(1568);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_comp_BuildingComp_lambda$onDestroyed$1_mindustry_type_Liquid_float_R_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$onDestroyed$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BuildingComp(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(1506);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_explosiveness) * (frame[1].f)) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_comp_BuildingComp_lambda$onDestroyed$0_mindustry_type_Liquid_float_R_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$onDestroyed$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BuildingComp(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(1505);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_flammability) * (frame[1].f)) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_lambda$onDeconstructed$0_float_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$onDeconstructed$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1485);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[1].o);
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_lambda$splashLiquid$0_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$splashLiquid$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1472);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp1 = (jint)SM_arc_math_Mathf_range_int_R_int(ctx, ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)) / (jint(2))));
	jfloat temp2 = temp0 + (jfloat(temp1));
	jfloat temp3 = (jfloat)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_BuildingComp *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp4 = (jint)SM_arc_math_Mathf_range_int_R_int(ctx, ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)) / (jint(2))));
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp2, (temp3 + (jfloat(temp4))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1473);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1474);
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, (frame[3].o), (frame[1].o), (frame[2].f));
	}
label_2:;
	LINE_NUMBER(1476);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BuildingComp_lambda$placed$0_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$placed$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1366);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_pos_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1367);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_entities_comp_BuildingComp_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BuildingComp_pos_R_int])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_gen_Building_configureAny_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configureAny_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(1369);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_comp_BuildingComp_lambda$handleUnitPayload$0_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:lambda$handleUnitPayload$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BuildingComp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(716);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_id = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_comp_BuildingComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_comp_BuildingComp_timeToSleep = jfloat(60.0f);
	SF_mindustry_entities_comp_BuildingComp_recentDamageTime = jfloat(300.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BuildingComp:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BuildingComp(ctx);
	{
	LINE_NUMBER(57);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	SF_mindustry_entities_comp_BuildingComp_tmpTiles = sp[0].o;
	LINE_NUMBER(58);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	SF_mindustry_entities_comp_BuildingComp_tempBuilds = sp[0].o;
	LINE_NUMBER(59);
	clinit_mindustry_game_EventType$BuildTeamChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildTeamChangeEvent);
	init_mindustry_game_EventType$BuildTeamChangeEvent(ctx, sp[0].o);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	SF_mindustry_entities_comp_BuildingComp_teamChangeEvent = sp[0].o;
	LINE_NUMBER(60);
	clinit_mindustry_game_EventType$BuildDamageEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildDamageEvent);
	init_mindustry_game_EventType$BuildDamageEvent(ctx, sp[0].o);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	SF_mindustry_entities_comp_BuildingComp_bulletDamageEvent = sp[0].o;
	LINE_NUMBER(61);
	clinit_mindustry_entities_comp_BuildingComp(ctx);
	SF_mindustry_entities_comp_BuildingComp_sleepingEntities = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_BuildingComp;
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

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastDisabler
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field power
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[24]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field items
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[25]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field liquids
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[26]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method findClosestEdge
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Method front
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[39]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method back
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[40]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method left
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[41]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method right
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[42]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Method getCommandPosition
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[62]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getPayload
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[99]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method takePayload
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[100]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getPayloads
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[101]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[122]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[123]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[124]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[125]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[126]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[127]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[128]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[129]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[130]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[131]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[132]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[133]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[134]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[135]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[136]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[137]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[138]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[139]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[140]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[141]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[142]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[143]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[144]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[145]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[146]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[147]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[148]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[149]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[150]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[151]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[152]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[153]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[154]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[155]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[156]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[157]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[158]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[159]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[160]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[161]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[162]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[163]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[164]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[165]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[166]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[167]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[168]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[169]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[170]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[171]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[172]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[173]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[174]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[175]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[176]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[177]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[178]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[179]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[180]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[181]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[182]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[183]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[184]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[185]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[186]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[187]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[188]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[189]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[190]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[191]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[192]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[193]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[194]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[195]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[196]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[197]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method config
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[198]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[199]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[200]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[201]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[202]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[203]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[204]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[205]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[206]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[207]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[208]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[209]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[210]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[211]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[212]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[213]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[214]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[215]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[216]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[217]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[218]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[219]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[220]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[221]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[222]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[223]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[224]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[225]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[226]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[227]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[228]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[229]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[230]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[231]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[232]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[233]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[234]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[235]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[236]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[237]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[238]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[239]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_comp_BuildingComp[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_entities_comp_BuildingComp_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_add,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_update,
	(void *) M_mindustry_entities_comp_BuildingComp_write_arc_util_io_Writes,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_tileX_R_int,
	(void *) M_mindustry_entities_comp_BuildingComp_tileY_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_inFogTo_mindustry_game_Team_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_heal_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_isValid_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_damage_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_heal,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_kill,
	(void *) M_mindustry_entities_comp_BuildingComp_killed,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_entities_comp_BuildingComp_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_getAmbientVolume_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_entities_comp_BuildingComp_hitSize_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BuildingComp_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_entities_comp_BuildingComp_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_entities_comp_BuildingComp_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_entities_comp_BuildingComp_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_entities_comp_BuildingComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_entities_comp_BuildingComp_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_entities_comp_BuildingComp_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_entities_comp_BuildingComp_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_comp_BuildingComp_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_entities_comp_BuildingComp_readBase_arc_util_io_Reads,
	(void *) M_mindustry_entities_comp_BuildingComp_moduleBitmask_R_int,
	(void *) M_mindustry_entities_comp_BuildingComp_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_entities_comp_BuildingComp_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_entities_comp_BuildingComp_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_entities_comp_BuildingComp_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_entities_comp_BuildingComp_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_entities_comp_BuildingComp_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_addPlan_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_addPlan_boolean_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_entities_comp_BuildingComp_configure_java_lang_Object,
	(void *) M_mindustry_entities_comp_BuildingComp_configureAny_java_lang_Object,
	(void *) M_mindustry_entities_comp_BuildingComp_deselect,
	(void *) M_mindustry_entities_comp_BuildingComp_configTapped_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_applyBoost_float_float,
	(void *) M_mindustry_entities_comp_BuildingComp_applySlowdown_float_float,
	(void *) M_mindustry_entities_comp_BuildingComp_applyHealSuppression_float,
	(void *) M_mindustry_entities_comp_BuildingComp_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_entities_comp_BuildingComp_isHealSuppressed_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_recentlyHealed,
	(void *) M_mindustry_entities_comp_BuildingComp_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_eachEdge_arc_func_Cons,
	(void *) M_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_entities_comp_BuildingComp_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_entities_comp_BuildingComp_relativeTo_int_int_R_byte,
	(void *) M_mindustry_entities_comp_BuildingComp_front_R_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_back_R_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_left_R_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_right_R_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_fogRadius_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_pos_R_int,
	(void *) M_mindustry_entities_comp_BuildingComp_rotdeg_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_drawrot_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_entities_comp_BuildingComp_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_timeScale_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_warmup_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_totalProgress_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_progress_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_allowUpdate_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_inMapArea_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_entities_comp_BuildingComp_sleep,
	(void *) M_mindustry_entities_comp_BuildingComp_noSleep,
	(void *) M_mindustry_entities_comp_BuildingComp_version_R_byte,
	(void *) M_mindustry_entities_comp_BuildingComp_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_entities_comp_BuildingComp_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_BuildingComp_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_BuildingComp_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_entities_comp_BuildingComp_canWithdraw_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_canUnload_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_canResupply_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_payloadCheck_int_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_entities_comp_BuildingComp_allowDeposit_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_dropped,
	(void *) M_mindustry_entities_comp_BuildingComp_handleString_java_lang_Object,
	(void *) M_mindustry_entities_comp_BuildingComp_created,
	(void *) M_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_productionValid_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_getPowerProduction_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_entities_comp_BuildingComp_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_entities_comp_BuildingComp_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_entities_comp_BuildingComp_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_comp_BuildingComp_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_BuildingComp_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_entities_comp_BuildingComp_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_entities_comp_BuildingComp_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_entities_comp_BuildingComp_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_entities_comp_BuildingComp_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_entities_comp_BuildingComp_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_entities_comp_BuildingComp_offload_mindustry_type_Item,
	(void *) M_mindustry_entities_comp_BuildingComp_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item,
	(void *) M_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item_int,
	(void *) M_mindustry_entities_comp_BuildingComp_dumpAccumulate_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_dump_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_incrementDump_int,
	(void *) M_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_onProximityRemoved,
	(void *) M_mindustry_entities_comp_BuildingComp_onProximityAdded,
	(void *) M_mindustry_entities_comp_BuildingComp_onProximityUpdate,
	(void *) M_mindustry_entities_comp_BuildingComp_updatePowerGraph,
	(void *) M_mindustry_entities_comp_BuildingComp_powerGraphRemoved,
	(void *) M_mindustry_entities_comp_BuildingComp_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_entities_comp_BuildingComp_getProgressIncrease_float_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_getDisplayEfficiency_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_drawStatus,
	(void *) M_mindustry_entities_comp_BuildingComp_drawCracks,
	(void *) M_mindustry_entities_comp_BuildingComp_drawSelect,
	(void *) M_mindustry_entities_comp_BuildingComp_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_entities_comp_BuildingComp_drawDisabled,
	(void *) M_mindustry_entities_comp_BuildingComp_draw,
	(void *) M_mindustry_entities_comp_BuildingComp_drawCached,
	(void *) M_mindustry_entities_comp_BuildingComp_recache,
	(void *) M_mindustry_entities_comp_BuildingComp_payloadDraw,
	(void *) M_mindustry_entities_comp_BuildingComp_drawTeamTop,
	(void *) M_mindustry_entities_comp_BuildingComp_drawLight,
	(void *) M_mindustry_entities_comp_BuildingComp_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_entities_comp_BuildingComp_drawTeam,
	(void *) M_mindustry_entities_comp_BuildingComp_checkSuppression_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_playerPlaced_java_lang_Object,
	(void *) M_mindustry_entities_comp_BuildingComp_placed,
	(void *) M_mindustry_entities_comp_BuildingComp_onRepaired,
	(void *) M_mindustry_entities_comp_BuildingComp_isCommandable_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_isPayload_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_overwrote_arc_struct_Seq,
	(void *) M_mindustry_entities_comp_BuildingComp_onRemoved,
	(void *) M_mindustry_entities_comp_BuildingComp_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_entities_comp_BuildingComp_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_entities_comp_BuildingComp_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_entities_comp_BuildingComp_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_entities_comp_BuildingComp_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_entities_comp_BuildingComp_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_entities_comp_BuildingComp_tapped,
	(void *) M_mindustry_entities_comp_BuildingComp_afterDestroyed,
	(void *) M_mindustry_entities_comp_BuildingComp_explosionItemCap_R_int,
	(void *) M_mindustry_entities_comp_BuildingComp_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_entities_comp_BuildingComp_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_entities_comp_BuildingComp_onDestroyed,
	(void *) M_mindustry_entities_comp_BuildingComp_playDestroySound,
	(void *) M_mindustry_entities_comp_BuildingComp_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_entities_comp_BuildingComp_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_entities_comp_BuildingComp_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_entities_comp_BuildingComp_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_comp_BuildingComp_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_comp_BuildingComp_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_comp_BuildingComp_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_comp_BuildingComp_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_entities_comp_BuildingComp_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_onConfigureClosed,
	(void *) M_mindustry_entities_comp_BuildingComp_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_drawConfigure,
	(void *) M_mindustry_entities_comp_BuildingComp_checkSolid_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_handleDamage_float_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_absorbLasers_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_isInsulated_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_damage_mindustry_game_Team_float,
	(void *) M_mindustry_entities_comp_BuildingComp_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_canPickup_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_pickedUp,
	(void *) M_mindustry_entities_comp_BuildingComp_afterPickedUp,
	(void *) M_mindustry_entities_comp_BuildingComp_removeFromProximity,
	(void *) M_mindustry_entities_comp_BuildingComp_updateProximity,
	(void *) M_mindustry_entities_comp_BuildingComp_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_consume,
	(void *) M_mindustry_entities_comp_BuildingComp_canConsume_R_boolean,
	(void *) M_mindustry_entities_comp_BuildingComp_delta_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_edelta_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_updateEfficiencyMultiplier,
	(void *) M_mindustry_entities_comp_BuildingComp_efficiencyScale_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_updateConsumption,
	(void *) M_mindustry_entities_comp_BuildingComp_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_entities_comp_BuildingComp_updateTile,
	(void *) M_mindustry_entities_comp_BuildingComp_ambientVolume_R_float,
	(void *) M_mindustry_entities_comp_BuildingComp_config_R_java_lang_Object,
	(void *) M_mindustry_entities_comp_BuildingComp_healthChanged,
	(void *) M_mindustry_entities_comp_BuildingComp_checkAllowUpdate,
	(void *) M_mindustry_entities_comp_BuildingComp_updateFogVisibility,
	(void *) M_mindustry_entities_comp_BuildingComp_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_comp_BuildingComp_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_entities_comp_BuildingComp_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_entities_comp_BuildingComp_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_entities_comp_BuildingComp_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_comp_BuildingComp_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_comp_BuildingComp_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_entities_comp_BuildingComp_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_entities_comp_BuildingComp_lambda$placed$0_mindustry_gen_Building,
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
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "isValid", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "moduleBitmask", "()I" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "deselect", "()V" },
	{ "configTapped", "()Z" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "applyBoost", "(FF)V" },
	{ "applySlowdown", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "isHealSuppressed", "()Z" },
	{ "recentlyHealed", "()V" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "relativeTo", "(II)B" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "fogRadius", "()F" },
	{ "pos", "()I" },
	{ "rotdeg", "()F" },
	{ "drawrot", "()F" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "timeScale", "()F" },
	{ "warmup", "()F" },
	{ "totalProgress", "()F" },
	{ "progress", "()F" },
	{ "allowUpdate", "()Z" },
	{ "inMapArea", "()Z" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "sleep", "()V" },
	{ "noSleep", "()V" },
	{ "version", "()B" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "canWithdraw", "()Z" },
	{ "canUnload", "()Z" },
	{ "canResupply", "()Z" },
	{ "payloadCheck", "(I)Z" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "allowDeposit", "()Z" },
	{ "dropped", "()V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "created", "()V" },
	{ "shouldConsume", "()Z" },
	{ "productionValid", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "getPowerProduction", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "incrementDump", "(I)V" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "updatePowerGraph", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "getProgressIncrease", "(F)F" },
	{ "getDisplayEfficiency", "()F" },
	{ "drawStatus", "()V" },
	{ "drawCracks", "()V" },
	{ "drawSelect", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawDisabled", "()V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "recache", "()V" },
	{ "payloadDraw", "()V" },
	{ "drawTeamTop", "()V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawTeam", "()V" },
	{ "checkSuppression", "()Z" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "placed", "()V" },
	{ "onRepaired", "()V" },
	{ "isCommandable", "()Z" },
	{ "isPayload", "()Z" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "onRemoved", "()V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "tapped", "()V" },
	{ "afterDestroyed", "()V" },
	{ "explosionItemCap", "()I" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "playDestroySound", "()V" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "onConfigureClosed", "()V" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "drawConfigure", "()V" },
	{ "checkSolid", "()Z" },
	{ "handleDamage", "(F)F" },
	{ "absorbLasers", "()Z" },
	{ "isInsulated", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "canPickup", "()Z" },
	{ "pickedUp", "()V" },
	{ "afterPickedUp", "()V" },
	{ "removeFromProximity", "()V" },
	{ "updateProximity", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "consume", "()V" },
	{ "canConsume", "()Z" },
	{ "delta", "()F" },
	{ "edelta", "()F" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "efficiencyScale", "()F" },
	{ "updateConsumption", "()V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updateTile", "()V" },
	{ "ambientVolume", "()F" },
	{ "config", "()Ljava/lang/Object;" },
	{ "healthChanged", "()V" },
	{ "checkAllowUpdate", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Healthc, &class_mindustry_gen_Buildingc, &class_mindustry_gen_Timerc, &class_arc_math_geom_QuadTree$QuadTreeObject, &class_mindustry_ui_Displayable, &class_mindustry_entities_Sized, &class_mindustry_logic_Senseable, &class_mindustry_logic_Controllable, &class_mindustry_logic_Settable, &class_mindustry_audio_AmbientSource, };

static FieldMetadata fields[] {
	{ "timeToSleep", &class_float, (intptr_t) &SF_mindustry_entities_comp_BuildingComp_timeToSleep, "F", 24 },
	{ "recentDamageTime", &class_float, (intptr_t) &SF_mindustry_entities_comp_BuildingComp_recentDamageTime, "F", 24 },
	{ "tmpTiles", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_entities_comp_BuildingComp_tmpTiles, "Larc/struct/ObjectSet;", 24 },
	{ "tempBuilds", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_entities_comp_BuildingComp_tempBuilds, "Larc/struct/Seq;", 24 },
	{ "teamChangeEvent", &class_mindustry_game_EventType$BuildTeamChangeEvent, (intptr_t) &SF_mindustry_entities_comp_BuildingComp_teamChangeEvent, "Lmindustry/game/EventType$BuildTeamChangeEvent;", 24 },
	{ "bulletDamageEvent", &class_mindustry_game_EventType$BuildDamageEvent, (intptr_t) &SF_mindustry_entities_comp_BuildingComp_bulletDamageEvent, "Lmindustry/game/EventType$BuildDamageEvent;", 24 },
	{ "sleepingEntities", &class_int, (intptr_t) &SF_mindustry_entities_comp_BuildingComp_sleepingEntities, "I", 8 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_y), "F", 0 },
	{ "health", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_health), "F", 0 },
	{ "maxHealth", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_maxHealth), "F", 0 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_entities_comp_BuildingComp, F_team), "Lmindustry/game/Team;", 0 },
	{ "dead", &class_boolean, offsetof(mindustry_entities_comp_BuildingComp, F_dead), "Z", 0 },
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_entities_comp_BuildingComp, F_tile), "Lmindustry/world/Tile;", 128 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_entities_comp_BuildingComp, F_block), "Lmindustry/world/Block;", 128 },
	{ "proximity", &class_arc_struct_Seq, offsetof(mindustry_entities_comp_BuildingComp, F_proximity), "Larc/struct/Seq;", 128 },
	{ "cdump", &class_int, offsetof(mindustry_entities_comp_BuildingComp, F_cdump), "I", 128 },
	{ "rotation", &class_int, offsetof(mindustry_entities_comp_BuildingComp, F_rotation), "I", 128 },
	{ "lastAccessed", &class_java_lang_String, offsetof(mindustry_entities_comp_BuildingComp, F_lastAccessed), "Ljava/lang/String;", 128 },
	{ "visualLiquid", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_visualLiquid), "F", 128 },
	{ "visibleFlags", &class_long, offsetof(mindustry_entities_comp_BuildingComp, F_visibleFlags), "J", 128 },
	{ "wasVisible", &class_boolean, offsetof(mindustry_entities_comp_BuildingComp, F_wasVisible), "Z", 128 },
	{ "enabled", &class_boolean, offsetof(mindustry_entities_comp_BuildingComp, F_enabled), "Z", 128 },
	{ "lastDisabler", &class_mindustry_gen_Building, offsetof(mindustry_entities_comp_BuildingComp, F_lastDisabler), "Lmindustry/gen/Building;", 128 },
	{ "power", &class_mindustry_world_modules_PowerModule, offsetof(mindustry_entities_comp_BuildingComp, F_power), "Lmindustry/world/modules/PowerModule;", 0 },
	{ "items", &class_mindustry_world_modules_ItemModule, offsetof(mindustry_entities_comp_BuildingComp, F_items), "Lmindustry/world/modules/ItemModule;", 0 },
	{ "liquids", &class_mindustry_world_modules_LiquidModule, offsetof(mindustry_entities_comp_BuildingComp, F_liquids), "Lmindustry/world/modules/LiquidModule;", 0 },
	{ "efficiency", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_efficiency), "F", 128 },
	{ "optionalEfficiency", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_optionalEfficiency), "F", 128 },
	{ "potentialEfficiency", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_potentialEfficiency), "F", 128 },
	{ "shouldConsumePower", &class_boolean, offsetof(mindustry_entities_comp_BuildingComp, F_shouldConsumePower), "Z", 128 },
	{ "healSuppressionTime", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_healSuppressionTime), "F", 128 },
	{ "lastHealTime", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_lastHealTime), "F", 128 },
	{ "suppressColor", &class_arc_graphics_Color, offsetof(mindustry_entities_comp_BuildingComp, F_suppressColor), "Larc/graphics/Color;", 128 },
	{ "lastDamageTime", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_lastDamageTime), "F", 130 },
	{ "timeScale", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_timeScale), "F", 130 },
	{ "timeScaleDuration", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_timeScaleDuration), "F", 130 },
	{ "dumpAccum", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_dumpAccum), "F", 130 },
	{ "sleeping", &class_boolean, offsetof(mindustry_entities_comp_BuildingComp, F_sleeping), "Z", 130 },
	{ "sleepTime", &class_float, offsetof(mindustry_entities_comp_BuildingComp, F_sleepTime), "F", 130 },
	{ "initialized", &class_boolean, offsetof(mindustry_entities_comp_BuildingComp, F_initialized), "Z", 130 },
	{ "wasDamaged", &class_boolean, offsetof(mindustry_entities_comp_BuildingComp, F_wasDamaged), "Z", 128 },
	{ "indexerBuildIndex", &class_short, offsetof(mindustry_entities_comp_BuildingComp, F_indexerBuildIndex), "S", 128 },
	{ "indexerBuildTypeIndex", &class_short, offsetof(mindustry_entities_comp_BuildingComp, F_indexerBuildTypeIndex), "S", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_BuildingComp, 0, "()V", 0 },
	{ "init", (intptr_t) M_mindustry_entities_comp_BuildingComp_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building, "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_comp_BuildingComp_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building, "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;", 1 },
	{ "add", (intptr_t) M_mindustry_entities_comp_BuildingComp_add, VTABLE_mindustry_entities_comp_BuildingComp_add, "()V", 1 },
	{ "tileX", (intptr_t) M_mindustry_entities_comp_BuildingComp_tileX_R_int, VTABLE_mindustry_entities_comp_BuildingComp_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_entities_comp_BuildingComp_tileY_R_int, VTABLE_mindustry_entities_comp_BuildingComp_tileY_R_int, "()I", 1 },
	{ "writeBase", (intptr_t) M_mindustry_entities_comp_BuildingComp_writeBase_arc_util_io_Writes, VTABLE_mindustry_entities_comp_BuildingComp_writeBase_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 17 },
	{ "readBase", (intptr_t) M_mindustry_entities_comp_BuildingComp_readBase_arc_util_io_Reads, VTABLE_mindustry_entities_comp_BuildingComp_readBase_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 17 },
	{ "moduleBitmask", (intptr_t) M_mindustry_entities_comp_BuildingComp_moduleBitmask_R_int, VTABLE_mindustry_entities_comp_BuildingComp_moduleBitmask_R_int, "()I", 1 },
	{ "writeAll", (intptr_t) M_mindustry_entities_comp_BuildingComp_writeAll_arc_util_io_Writes, VTABLE_mindustry_entities_comp_BuildingComp_writeAll_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "readAll", (intptr_t) M_mindustry_entities_comp_BuildingComp_readAll_arc_util_io_Reads_byte, VTABLE_mindustry_entities_comp_BuildingComp_readAll_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "writeSync", (intptr_t) M_mindustry_entities_comp_BuildingComp_writeSync_arc_util_io_Writes, VTABLE_mindustry_entities_comp_BuildingComp_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "readSync", (intptr_t) M_mindustry_entities_comp_BuildingComp_readSync_arc_util_io_Reads_byte, VTABLE_mindustry_entities_comp_BuildingComp_readSync_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "write", (intptr_t) M_mindustry_entities_comp_BuildingComp_write_arc_util_io_Writes, VTABLE_mindustry_entities_comp_BuildingComp_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_entities_comp_BuildingComp_read_arc_util_io_Reads_byte, VTABLE_mindustry_entities_comp_BuildingComp_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "isDiscovered", (intptr_t) M_mindustry_entities_comp_BuildingComp_isDiscovered_mindustry_game_Team_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_isDiscovered_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "addPlan", (intptr_t) M_mindustry_entities_comp_BuildingComp_addPlan_boolean, VTABLE_mindustry_entities_comp_BuildingComp_addPlan_boolean, "(Z)V", 1 },
	{ "addPlan", (intptr_t) M_mindustry_entities_comp_BuildingComp_addPlan_boolean_boolean, VTABLE_mindustry_entities_comp_BuildingComp_addPlan_boolean_boolean, "(ZZ)V", 1 },
	{ "findClosestEdge", (intptr_t) M_mindustry_entities_comp_BuildingComp_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile, VTABLE_mindustry_entities_comp_BuildingComp_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile, "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;", 1 },
	{ "configure", (intptr_t) M_mindustry_entities_comp_BuildingComp_configure_java_lang_Object, VTABLE_mindustry_entities_comp_BuildingComp_configure_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "configureAny", (intptr_t) M_mindustry_entities_comp_BuildingComp_configureAny_java_lang_Object, VTABLE_mindustry_entities_comp_BuildingComp_configureAny_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "deselect", (intptr_t) M_mindustry_entities_comp_BuildingComp_deselect, VTABLE_mindustry_entities_comp_BuildingComp_deselect, "()V", 1 },
	{ "configTapped", (intptr_t) M_mindustry_entities_comp_BuildingComp_configTapped_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_configTapped_R_boolean, "()Z", 1 },
	{ "calculateHeat", (intptr_t) M_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_R_float, VTABLE_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_R_float, "([F)F", 1 },
	{ "calculateHeat", (intptr_t) M_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_arc_struct_IntSet_R_float, VTABLE_mindustry_entities_comp_BuildingComp_calculateHeat_Array1_float_arc_struct_IntSet_R_float, "([FLarc/struct/IntSet;)F", 1 },
	{ "applyBoost", (intptr_t) M_mindustry_entities_comp_BuildingComp_applyBoost_float_float, VTABLE_mindustry_entities_comp_BuildingComp_applyBoost_float_float, "(FF)V", 1 },
	{ "applySlowdown", (intptr_t) M_mindustry_entities_comp_BuildingComp_applySlowdown_float_float, VTABLE_mindustry_entities_comp_BuildingComp_applySlowdown_float_float, "(FF)V", 1 },
	{ "applyHealSuppression", (intptr_t) M_mindustry_entities_comp_BuildingComp_applyHealSuppression_float, VTABLE_mindustry_entities_comp_BuildingComp_applyHealSuppression_float, "(F)V", 1 },
	{ "applyHealSuppression", (intptr_t) M_mindustry_entities_comp_BuildingComp_applyHealSuppression_float_arc_graphics_Color, VTABLE_mindustry_entities_comp_BuildingComp_applyHealSuppression_float_arc_graphics_Color, "(FLarc/graphics/Color;)V", 1 },
	{ "isHealSuppressed", (intptr_t) M_mindustry_entities_comp_BuildingComp_isHealSuppressed_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_isHealSuppressed_R_boolean, "()Z", 1 },
	{ "recentlyHealed", (intptr_t) M_mindustry_entities_comp_BuildingComp_recentlyHealed, VTABLE_mindustry_entities_comp_BuildingComp_recentlyHealed, "()V", 1 },
	{ "wasRecentlyHealed", (intptr_t) M_mindustry_entities_comp_BuildingComp_wasRecentlyHealed_float_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_wasRecentlyHealed_float_R_boolean, "(F)Z", 1 },
	{ "wasRecentlyDamaged", (intptr_t) M_mindustry_entities_comp_BuildingComp_wasRecentlyDamaged_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_wasRecentlyDamaged_R_boolean, "()Z", 1 },
	{ "eachEdge", (intptr_t) M_mindustry_entities_comp_BuildingComp_eachEdge_arc_func_Cons, VTABLE_mindustry_entities_comp_BuildingComp_eachEdge_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "nearby", (intptr_t) M_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_nearby_int_int_R_mindustry_gen_Building, "(II)Lmindustry/gen/Building;", 1 },
	{ "nearby", (intptr_t) M_mindustry_entities_comp_BuildingComp_nearby_int_R_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_nearby_int_R_mindustry_gen_Building, "(I)Lmindustry/gen/Building;", 1 },
	{ "relativeTo", (intptr_t) M_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_world_Tile_R_byte, VTABLE_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_world_Tile_R_byte, "(Lmindustry/world/Tile;)B", 1 },
	{ "relativeTo", (intptr_t) M_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte, VTABLE_mindustry_entities_comp_BuildingComp_relativeTo_mindustry_gen_Building_R_byte, "(Lmindustry/gen/Building;)B", 1 },
	{ "relativeToEdge", (intptr_t) M_mindustry_entities_comp_BuildingComp_relativeToEdge_mindustry_world_Tile_R_byte, VTABLE_mindustry_entities_comp_BuildingComp_relativeToEdge_mindustry_world_Tile_R_byte, "(Lmindustry/world/Tile;)B", 1 },
	{ "relativeTo", (intptr_t) M_mindustry_entities_comp_BuildingComp_relativeTo_int_int_R_byte, VTABLE_mindustry_entities_comp_BuildingComp_relativeTo_int_int_R_byte, "(II)B", 1 },
	{ "front", (intptr_t) M_mindustry_entities_comp_BuildingComp_front_R_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_front_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "back", (intptr_t) M_mindustry_entities_comp_BuildingComp_back_R_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_back_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "left", (intptr_t) M_mindustry_entities_comp_BuildingComp_left_R_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_left_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "right", (intptr_t) M_mindustry_entities_comp_BuildingComp_right_R_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_right_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "fogRadius", (intptr_t) M_mindustry_entities_comp_BuildingComp_fogRadius_R_float, VTABLE_mindustry_entities_comp_BuildingComp_fogRadius_R_float, "()F", 1 },
	{ "pos", (intptr_t) M_mindustry_entities_comp_BuildingComp_pos_R_int, VTABLE_mindustry_entities_comp_BuildingComp_pos_R_int, "()I", 1 },
	{ "rotdeg", (intptr_t) M_mindustry_entities_comp_BuildingComp_rotdeg_R_float, VTABLE_mindustry_entities_comp_BuildingComp_rotdeg_R_float, "()F", 1 },
	{ "drawrot", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawrot_R_float, VTABLE_mindustry_entities_comp_BuildingComp_drawrot_R_float, "()F", 1 },
	{ "floor", (intptr_t) M_mindustry_entities_comp_BuildingComp_floor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_entities_comp_BuildingComp_floor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "interactable", (intptr_t) M_mindustry_entities_comp_BuildingComp_interactable_mindustry_game_Team_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_interactable_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "timeScale", (intptr_t) M_mindustry_entities_comp_BuildingComp_timeScale_R_float, VTABLE_mindustry_entities_comp_BuildingComp_timeScale_R_float, "()F", 1 },
	{ "warmup", (intptr_t) M_mindustry_entities_comp_BuildingComp_warmup_R_float, VTABLE_mindustry_entities_comp_BuildingComp_warmup_R_float, "()F", 1 },
	{ "totalProgress", (intptr_t) M_mindustry_entities_comp_BuildingComp_totalProgress_R_float, VTABLE_mindustry_entities_comp_BuildingComp_totalProgress_R_float, "()F", 1 },
	{ "progress", (intptr_t) M_mindustry_entities_comp_BuildingComp_progress_R_float, VTABLE_mindustry_entities_comp_BuildingComp_progress_R_float, "()F", 1 },
	{ "allowUpdate", (intptr_t) M_mindustry_entities_comp_BuildingComp_allowUpdate_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_allowUpdate_R_boolean, "()Z", 1 },
	{ "inMapArea", (intptr_t) M_mindustry_entities_comp_BuildingComp_inMapArea_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_inMapArea_R_boolean, "()Z", 1 },
	{ "status", (intptr_t) M_mindustry_entities_comp_BuildingComp_status_R_mindustry_world_meta_BlockStatus, VTABLE_mindustry_entities_comp_BuildingComp_status_R_mindustry_world_meta_BlockStatus, "()Lmindustry/world/meta/BlockStatus;", 1 },
	{ "sleep", (intptr_t) M_mindustry_entities_comp_BuildingComp_sleep, VTABLE_mindustry_entities_comp_BuildingComp_sleep, "()V", 1 },
	{ "noSleep", (intptr_t) M_mindustry_entities_comp_BuildingComp_noSleep, VTABLE_mindustry_entities_comp_BuildingComp_noSleep, "()V", 1 },
	{ "version", (intptr_t) M_mindustry_entities_comp_BuildingComp_version_R_byte, VTABLE_mindustry_entities_comp_BuildingComp_version_R_byte, "()B", 1 },
	{ "canControlSelect", (intptr_t) M_mindustry_entities_comp_BuildingComp_canControlSelect_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_canControlSelect_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "onControlSelect", (intptr_t) M_mindustry_entities_comp_BuildingComp_onControlSelect_mindustry_gen_Unit, VTABLE_mindustry_entities_comp_BuildingComp_onControlSelect_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "onCommand", (intptr_t) M_mindustry_entities_comp_BuildingComp_onCommand_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_BuildingComp_onCommand_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "getCommandPosition", (intptr_t) M_mindustry_entities_comp_BuildingComp_getCommandPosition_R_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_BuildingComp_getCommandPosition_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "handleUnitPayload", (intptr_t) M_mindustry_entities_comp_BuildingComp_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons, VTABLE_mindustry_entities_comp_BuildingComp_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons, "(Lmindustry/gen/Unit;Larc/func/Cons;)V", 1 },
	{ "canWithdraw", (intptr_t) M_mindustry_entities_comp_BuildingComp_canWithdraw_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_canWithdraw_R_boolean, "()Z", 1 },
	{ "canUnload", (intptr_t) M_mindustry_entities_comp_BuildingComp_canUnload_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_canUnload_R_boolean, "()Z", 1 },
	{ "canResupply", (intptr_t) M_mindustry_entities_comp_BuildingComp_canResupply_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_canResupply_R_boolean, "()Z", 1 },
	{ "payloadCheck", (intptr_t) M_mindustry_entities_comp_BuildingComp_payloadCheck_int_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_payloadCheck_int_R_boolean, "(I)Z", 1 },
	{ "itemTaken", (intptr_t) M_mindustry_entities_comp_BuildingComp_itemTaken_mindustry_type_Item, VTABLE_mindustry_entities_comp_BuildingComp_itemTaken_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "allowDeposit", (intptr_t) M_mindustry_entities_comp_BuildingComp_allowDeposit_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_allowDeposit_R_boolean, "()Z", 1 },
	{ "dropped", (intptr_t) M_mindustry_entities_comp_BuildingComp_dropped, VTABLE_mindustry_entities_comp_BuildingComp_dropped, "()V", 1 },
	{ "handleString", (intptr_t) M_mindustry_entities_comp_BuildingComp_handleString_java_lang_Object, VTABLE_mindustry_entities_comp_BuildingComp_handleString_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "created", (intptr_t) M_mindustry_entities_comp_BuildingComp_created, VTABLE_mindustry_entities_comp_BuildingComp_created, "()V", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_shouldConsume_R_boolean, "()Z", 1 },
	{ "productionValid", (intptr_t) M_mindustry_entities_comp_BuildingComp_productionValid_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_productionValid_R_boolean, "()Z", 1 },
	{ "consumeTriggerValid", (intptr_t) M_mindustry_entities_comp_BuildingComp_consumeTriggerValid_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_consumeTriggerValid_R_boolean, "()Z", 1 },
	{ "getPowerProduction", (intptr_t) M_mindustry_entities_comp_BuildingComp_getPowerProduction_R_float, VTABLE_mindustry_entities_comp_BuildingComp_getPowerProduction_R_float, "()F", 1 },
	{ "acceptStack", (intptr_t) M_mindustry_entities_comp_BuildingComp_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, VTABLE_mindustry_entities_comp_BuildingComp_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I", 1 },
	{ "getMaximumAccepted", (intptr_t) M_mindustry_entities_comp_BuildingComp_getMaximumAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_entities_comp_BuildingComp_getMaximumAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "removeStack", (intptr_t) M_mindustry_entities_comp_BuildingComp_removeStack_mindustry_type_Item_int_R_int, VTABLE_mindustry_entities_comp_BuildingComp_removeStack_mindustry_type_Item_int_R_int, "(Lmindustry/type/Item;I)I", 1 },
	{ "handleStack", (intptr_t) M_mindustry_entities_comp_BuildingComp_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, VTABLE_mindustry_entities_comp_BuildingComp_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V", 1 },
	{ "getStackOffset", (intptr_t) M_mindustry_entities_comp_BuildingComp_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_BuildingComp_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2, "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V", 1 },
	{ "acceptPayload", (intptr_t) M_mindustry_entities_comp_BuildingComp_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "handlePayload", (intptr_t) M_mindustry_entities_comp_BuildingComp_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_entities_comp_BuildingComp_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V", 1 },
	{ "movePayload", (intptr_t) M_mindustry_entities_comp_BuildingComp_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "dumpPayload", (intptr_t) M_mindustry_entities_comp_BuildingComp_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "canBeReplaced", (intptr_t) M_mindustry_entities_comp_BuildingComp_canBeReplaced_mindustry_world_Block_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_canBeReplaced_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 1 },
	{ "handleItem", (intptr_t) M_mindustry_entities_comp_BuildingComp_handleItem_mindustry_gen_Building_mindustry_type_Item, VTABLE_mindustry_entities_comp_BuildingComp_handleItem_mindustry_gen_Building_mindustry_type_Item, "(Lmindustry/gen/Building;Lmindustry/type/Item;)V", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_entities_comp_BuildingComp_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "acceptLiquid", (intptr_t) M_mindustry_entities_comp_BuildingComp_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z", 1 },
	{ "handleLiquid", (intptr_t) M_mindustry_entities_comp_BuildingComp_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float, VTABLE_mindustry_entities_comp_BuildingComp_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V", 1 },
	{ "dumpLiquid", (intptr_t) M_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid, VTABLE_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid, "(Lmindustry/type/Liquid;)V", 1 },
	{ "dumpLiquid", (intptr_t) M_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float, VTABLE_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "dumpLiquid", (intptr_t) M_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float_int, VTABLE_mindustry_entities_comp_BuildingComp_dumpLiquid_mindustry_type_Liquid_float_int, "(Lmindustry/type/Liquid;FI)V", 1 },
	{ "canDumpLiquid", (intptr_t) M_mindustry_entities_comp_BuildingComp_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z", 1 },
	{ "transferLiquid", (intptr_t) M_mindustry_entities_comp_BuildingComp_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid, VTABLE_mindustry_entities_comp_BuildingComp_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid, "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V", 1 },
	{ "moveLiquidForward", (intptr_t) M_mindustry_entities_comp_BuildingComp_moveLiquidForward_boolean_mindustry_type_Liquid_R_float, VTABLE_mindustry_entities_comp_BuildingComp_moveLiquidForward_boolean_mindustry_type_Liquid_R_float, "(ZLmindustry/type/Liquid;)F", 1 },
	{ "moveLiquid", (intptr_t) M_mindustry_entities_comp_BuildingComp_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float, VTABLE_mindustry_entities_comp_BuildingComp_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F", 1 },
	{ "getLiquidDestination", (intptr_t) M_mindustry_entities_comp_BuildingComp_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;", 1 },
	{ "getPayload", (intptr_t) M_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_entities_comp_BuildingComp_getPayload_R_mindustry_world_blocks_payloads_Payload, "()Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "takePayload", (intptr_t) M_mindustry_entities_comp_BuildingComp_takePayload_R_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_entities_comp_BuildingComp_takePayload_R_mindustry_world_blocks_payloads_Payload, "()Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "getPayloads", (intptr_t) M_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq, VTABLE_mindustry_entities_comp_BuildingComp_getPayloads_R_mindustry_type_PayloadSeq, "()Lmindustry/type/PayloadSeq;", 1 },
	{ "offload", (intptr_t) M_mindustry_entities_comp_BuildingComp_offload_mindustry_type_Item, VTABLE_mindustry_entities_comp_BuildingComp_offload_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "put", (intptr_t) M_mindustry_entities_comp_BuildingComp_put_mindustry_type_Item_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_put_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "produced", (intptr_t) M_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item, VTABLE_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "produced", (intptr_t) M_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item_int, VTABLE_mindustry_entities_comp_BuildingComp_produced_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "dumpAccumulate", (intptr_t) M_mindustry_entities_comp_BuildingComp_dumpAccumulate_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_dumpAccumulate_R_boolean, "()Z", 1 },
	{ "dumpAccumulate", (intptr_t) M_mindustry_entities_comp_BuildingComp_dumpAccumulate_mindustry_type_Item_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_dumpAccumulate_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "dump", (intptr_t) M_mindustry_entities_comp_BuildingComp_dump_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_dump_R_boolean, "()Z", 1 },
	{ "dump", (intptr_t) M_mindustry_entities_comp_BuildingComp_dump_mindustry_type_Item_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_dump_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "incrementDump", (intptr_t) M_mindustry_entities_comp_BuildingComp_incrementDump_int, VTABLE_mindustry_entities_comp_BuildingComp_incrementDump_int, "(I)V", 1 },
	{ "canDump", (intptr_t) M_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "moveForward", (intptr_t) M_mindustry_entities_comp_BuildingComp_moveForward_mindustry_type_Item_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_moveForward_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "onProximityRemoved", (intptr_t) M_mindustry_entities_comp_BuildingComp_onProximityRemoved, VTABLE_mindustry_entities_comp_BuildingComp_onProximityRemoved, "()V", 1 },
	{ "onProximityAdded", (intptr_t) M_mindustry_entities_comp_BuildingComp_onProximityAdded, VTABLE_mindustry_entities_comp_BuildingComp_onProximityAdded, "()V", 1 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_entities_comp_BuildingComp_onProximityUpdate, VTABLE_mindustry_entities_comp_BuildingComp_onProximityUpdate, "()V", 1 },
	{ "updatePowerGraph", (intptr_t) M_mindustry_entities_comp_BuildingComp_updatePowerGraph, VTABLE_mindustry_entities_comp_BuildingComp_updatePowerGraph, "()V", 1 },
	{ "powerGraphRemoved", (intptr_t) M_mindustry_entities_comp_BuildingComp_powerGraphRemoved, VTABLE_mindustry_entities_comp_BuildingComp_powerGraphRemoved, "()V", 1 },
	{ "conductsTo", (intptr_t) M_mindustry_entities_comp_BuildingComp_conductsTo_mindustry_gen_Building_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_conductsTo_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "getPowerConnections", (intptr_t) M_mindustry_entities_comp_BuildingComp_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq, VTABLE_mindustry_entities_comp_BuildingComp_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "getProgressIncrease", (intptr_t) M_mindustry_entities_comp_BuildingComp_getProgressIncrease_float_R_float, VTABLE_mindustry_entities_comp_BuildingComp_getProgressIncrease_float_R_float, "(F)F", 1 },
	{ "getDisplayEfficiency", (intptr_t) M_mindustry_entities_comp_BuildingComp_getDisplayEfficiency_R_float, VTABLE_mindustry_entities_comp_BuildingComp_getDisplayEfficiency_R_float, "()F", 1 },
	{ "shouldAmbientSound", (intptr_t) M_mindustry_entities_comp_BuildingComp_shouldAmbientSound_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_shouldAmbientSound_R_boolean, "()Z", 1 },
	{ "drawStatus", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawStatus, VTABLE_mindustry_entities_comp_BuildingComp_drawStatus, "()V", 1 },
	{ "drawCracks", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawCracks, VTABLE_mindustry_entities_comp_BuildingComp_drawCracks, "()V", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawSelect, VTABLE_mindustry_entities_comp_BuildingComp_drawSelect, "()V", 1 },
	{ "drawItemSelection", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawItemSelection_mindustry_ctype_UnlockableContent, VTABLE_mindustry_entities_comp_BuildingComp_drawItemSelection_mindustry_ctype_UnlockableContent, "(Lmindustry/ctype/UnlockableContent;)V", 1 },
	{ "drawDisabled", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawDisabled, VTABLE_mindustry_entities_comp_BuildingComp_drawDisabled, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_BuildingComp_draw, VTABLE_mindustry_entities_comp_BuildingComp_draw, "()V", 1 },
	{ "drawCached", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawCached, VTABLE_mindustry_entities_comp_BuildingComp_drawCached, "()V", 1 },
	{ "recache", (intptr_t) M_mindustry_entities_comp_BuildingComp_recache, VTABLE_mindustry_entities_comp_BuildingComp_recache, "()V", 1 },
	{ "payloadDraw", (intptr_t) M_mindustry_entities_comp_BuildingComp_payloadDraw, VTABLE_mindustry_entities_comp_BuildingComp_payloadDraw, "()V", 1 },
	{ "drawTeamTop", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawTeamTop, VTABLE_mindustry_entities_comp_BuildingComp_drawTeamTop, "()V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawLight, VTABLE_mindustry_entities_comp_BuildingComp_drawLight, "()V", 1 },
	{ "drawLiquidLight", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawLiquidLight_mindustry_type_Liquid_float, VTABLE_mindustry_entities_comp_BuildingComp_drawLiquidLight_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "drawTeam", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawTeam, VTABLE_mindustry_entities_comp_BuildingComp_drawTeam, "()V", 1 },
	{ "checkSuppression", (intptr_t) M_mindustry_entities_comp_BuildingComp_checkSuppression_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_checkSuppression_R_boolean, "()Z", 1 },
	{ "playerPlaced", (intptr_t) M_mindustry_entities_comp_BuildingComp_playerPlaced_java_lang_Object, VTABLE_mindustry_entities_comp_BuildingComp_playerPlaced_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "placed", (intptr_t) M_mindustry_entities_comp_BuildingComp_placed, VTABLE_mindustry_entities_comp_BuildingComp_placed, "()V", 1 },
	{ "onRepaired", (intptr_t) M_mindustry_entities_comp_BuildingComp_onRepaired, VTABLE_mindustry_entities_comp_BuildingComp_onRepaired, "()V", 1 },
	{ "isCommandable", (intptr_t) M_mindustry_entities_comp_BuildingComp_isCommandable_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_isCommandable_R_boolean, "()Z", 1 },
	{ "isPayload", (intptr_t) M_mindustry_entities_comp_BuildingComp_isPayload_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_isPayload_R_boolean, "()Z", 1 },
	{ "overwrote", (intptr_t) M_mindustry_entities_comp_BuildingComp_overwrote_arc_struct_Seq, VTABLE_mindustry_entities_comp_BuildingComp_overwrote_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "onRemoved", (intptr_t) M_mindustry_entities_comp_BuildingComp_onRemoved, VTABLE_mindustry_entities_comp_BuildingComp_onRemoved, "()V", 1 },
	{ "unitOn", (intptr_t) M_mindustry_entities_comp_BuildingComp_unitOn_mindustry_gen_Unit, VTABLE_mindustry_entities_comp_BuildingComp_unitOn_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "unitOnAny", (intptr_t) M_mindustry_entities_comp_BuildingComp_unitOnAny_mindustry_gen_Unit, VTABLE_mindustry_entities_comp_BuildingComp_unitOnAny_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "unitRemoved", (intptr_t) M_mindustry_entities_comp_BuildingComp_unitRemoved_mindustry_gen_Unit, VTABLE_mindustry_entities_comp_BuildingComp_unitRemoved_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "puddleOn", (intptr_t) M_mindustry_entities_comp_BuildingComp_puddleOn_mindustry_gen_Puddle, VTABLE_mindustry_entities_comp_BuildingComp_puddleOn_mindustry_gen_Puddle, "(Lmindustry/gen/Puddle;)V", 1 },
	{ "configured", (intptr_t) M_mindustry_entities_comp_BuildingComp_configured_mindustry_gen_Unit_java_lang_Object, VTABLE_mindustry_entities_comp_BuildingComp_configured_mindustry_gen_Unit_java_lang_Object, "(Lmindustry/gen/Unit;Ljava/lang/Object;)V", 1 },
	{ "updateLastAccess", (intptr_t) M_mindustry_entities_comp_BuildingComp_updateLastAccess_mindustry_gen_Player, VTABLE_mindustry_entities_comp_BuildingComp_updateLastAccess_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "tapped", (intptr_t) M_mindustry_entities_comp_BuildingComp_tapped, VTABLE_mindustry_entities_comp_BuildingComp_tapped, "()V", 1 },
	{ "afterDestroyed", (intptr_t) M_mindustry_entities_comp_BuildingComp_afterDestroyed, VTABLE_mindustry_entities_comp_BuildingComp_afterDestroyed, "()V", 1 },
	{ "explosionItemCap", (intptr_t) M_mindustry_entities_comp_BuildingComp_explosionItemCap_R_int, VTABLE_mindustry_entities_comp_BuildingComp_explosionItemCap_R_int, "()I", 1 },
	{ "splashLiquid", (intptr_t) M_mindustry_entities_comp_BuildingComp_splashLiquid_mindustry_type_Liquid_float, VTABLE_mindustry_entities_comp_BuildingComp_splashLiquid_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "onDeconstructed", (intptr_t) M_mindustry_entities_comp_BuildingComp_onDeconstructed_mindustry_gen_Unit, VTABLE_mindustry_entities_comp_BuildingComp_onDeconstructed_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "onDestroyed", (intptr_t) M_mindustry_entities_comp_BuildingComp_onDestroyed, VTABLE_mindustry_entities_comp_BuildingComp_onDestroyed, "()V", 1 },
	{ "playDestroySound", (intptr_t) M_mindustry_entities_comp_BuildingComp_playDestroySound, VTABLE_mindustry_entities_comp_BuildingComp_playDestroySound, "()V", 1 },
	{ "getDisplayName", (intptr_t) M_mindustry_entities_comp_BuildingComp_getDisplayName_R_java_lang_String, VTABLE_mindustry_entities_comp_BuildingComp_getDisplayName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getDisplayIcon", (intptr_t) M_mindustry_entities_comp_BuildingComp_getDisplayIcon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_entities_comp_BuildingComp_getDisplayIcon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "flowItems", (intptr_t) M_mindustry_entities_comp_BuildingComp_flowItems_R_mindustry_world_modules_ItemModule, VTABLE_mindustry_entities_comp_BuildingComp_flowItems_R_mindustry_world_modules_ItemModule, "()Lmindustry/world/modules/ItemModule;", 1 },
	{ "display", (intptr_t) M_mindustry_entities_comp_BuildingComp_display_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_comp_BuildingComp_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "displayConsumption", (intptr_t) M_mindustry_entities_comp_BuildingComp_displayConsumption_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_comp_BuildingComp_displayConsumption_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "displayBars", (intptr_t) M_mindustry_entities_comp_BuildingComp_displayBars_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_comp_BuildingComp_displayBars_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_entities_comp_BuildingComp_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_comp_BuildingComp_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "updateTableAlign", (intptr_t) M_mindustry_entities_comp_BuildingComp_updateTableAlign_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_comp_BuildingComp_updateTableAlign_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "getCursor", (intptr_t) M_mindustry_entities_comp_BuildingComp_getCursor_R_arc_Graphics$Cursor, VTABLE_mindustry_entities_comp_BuildingComp_getCursor_R_arc_Graphics$Cursor, "()Larc/Graphics$Cursor;", 1 },
	{ "onConfigureBuildTapped", (intptr_t) M_mindustry_entities_comp_BuildingComp_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "onConfigureTapped", (intptr_t) M_mindustry_entities_comp_BuildingComp_onConfigureTapped_float_float_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_onConfigureTapped_float_float_R_boolean, "(FF)Z", 1 },
	{ "onConfigureClosed", (intptr_t) M_mindustry_entities_comp_BuildingComp_onConfigureClosed, VTABLE_mindustry_entities_comp_BuildingComp_onConfigureClosed, "()V", 1 },
	{ "shouldShowConfigure", (intptr_t) M_mindustry_entities_comp_BuildingComp_shouldShowConfigure_mindustry_gen_Player_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_shouldShowConfigure_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 1 },
	{ "shouldHideConfigure", (intptr_t) M_mindustry_entities_comp_BuildingComp_shouldHideConfigure_mindustry_gen_Player_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_shouldHideConfigure_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 1 },
	{ "drawConfigure", (intptr_t) M_mindustry_entities_comp_BuildingComp_drawConfigure, VTABLE_mindustry_entities_comp_BuildingComp_drawConfigure, "()V", 1 },
	{ "checkSolid", (intptr_t) M_mindustry_entities_comp_BuildingComp_checkSolid_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_checkSolid_R_boolean, "()Z", 1 },
	{ "handleDamage", (intptr_t) M_mindustry_entities_comp_BuildingComp_handleDamage_float_R_float, VTABLE_mindustry_entities_comp_BuildingComp_handleDamage_float_R_float, "(F)F", 1 },
	{ "absorbLasers", (intptr_t) M_mindustry_entities_comp_BuildingComp_absorbLasers_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_absorbLasers_R_boolean, "()Z", 1 },
	{ "isInsulated", (intptr_t) M_mindustry_entities_comp_BuildingComp_isInsulated_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_isInsulated_R_boolean, "()Z", 1 },
	{ "collide", (intptr_t) M_mindustry_entities_comp_BuildingComp_collide_mindustry_gen_Bullet_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_collide_mindustry_gen_Bullet_R_boolean, "(Lmindustry/gen/Bullet;)Z", 1 },
	{ "collision", (intptr_t) M_mindustry_entities_comp_BuildingComp_collision_mindustry_gen_Bullet_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_collision_mindustry_gen_Bullet_R_boolean, "(Lmindustry/gen/Bullet;)Z", 1 },
	{ "damage", (intptr_t) M_mindustry_entities_comp_BuildingComp_damage_mindustry_game_Team_float, VTABLE_mindustry_entities_comp_BuildingComp_damage_mindustry_game_Team_float, "(Lmindustry/game/Team;F)V", 1 },
	{ "damage", (intptr_t) M_mindustry_entities_comp_BuildingComp_damage_mindustry_gen_Bullet_mindustry_game_Team_float, VTABLE_mindustry_entities_comp_BuildingComp_damage_mindustry_gen_Bullet_mindustry_game_Team_float, "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V", 1 },
	{ "changeTeam", (intptr_t) M_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team, VTABLE_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "changeTeam", (intptr_t) M_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team_boolean, VTABLE_mindustry_entities_comp_BuildingComp_changeTeam_mindustry_game_Team_boolean, "(Lmindustry/game/Team;Z)V", 1 },
	{ "canPickup", (intptr_t) M_mindustry_entities_comp_BuildingComp_canPickup_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_canPickup_R_boolean, "()Z", 1 },
	{ "pickedUp", (intptr_t) M_mindustry_entities_comp_BuildingComp_pickedUp, VTABLE_mindustry_entities_comp_BuildingComp_pickedUp, "()V", 1 },
	{ "afterPickedUp", (intptr_t) M_mindustry_entities_comp_BuildingComp_afterPickedUp, VTABLE_mindustry_entities_comp_BuildingComp_afterPickedUp, "()V", 1 },
	{ "removeFromProximity", (intptr_t) M_mindustry_entities_comp_BuildingComp_removeFromProximity, VTABLE_mindustry_entities_comp_BuildingComp_removeFromProximity, "()V", 1 },
	{ "updateProximity", (intptr_t) M_mindustry_entities_comp_BuildingComp_updateProximity, VTABLE_mindustry_entities_comp_BuildingComp_updateProximity, "()V", 1 },
	{ "onNearbyBuildAdded", (intptr_t) M_mindustry_entities_comp_BuildingComp_onNearbyBuildAdded_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_onNearbyBuildAdded_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "consume", (intptr_t) M_mindustry_entities_comp_BuildingComp_consume, VTABLE_mindustry_entities_comp_BuildingComp_consume, "()V", 1 },
	{ "canConsume", (intptr_t) M_mindustry_entities_comp_BuildingComp_canConsume_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_canConsume_R_boolean, "()Z", 1 },
	{ "delta", (intptr_t) M_mindustry_entities_comp_BuildingComp_delta_R_float, VTABLE_mindustry_entities_comp_BuildingComp_delta_R_float, "()F", 1 },
	{ "edelta", (intptr_t) M_mindustry_entities_comp_BuildingComp_edelta_R_float, VTABLE_mindustry_entities_comp_BuildingComp_edelta_R_float, "()F", 1 },
	{ "updateEfficiencyMultiplier", (intptr_t) M_mindustry_entities_comp_BuildingComp_updateEfficiencyMultiplier, VTABLE_mindustry_entities_comp_BuildingComp_updateEfficiencyMultiplier, "()V", 1 },
	{ "efficiencyScale", (intptr_t) M_mindustry_entities_comp_BuildingComp_efficiencyScale_R_float, VTABLE_mindustry_entities_comp_BuildingComp_efficiencyScale_R_float, "()F", 1 },
	{ "updateConsumption", (intptr_t) M_mindustry_entities_comp_BuildingComp_updateConsumption, VTABLE_mindustry_entities_comp_BuildingComp_updateConsumption, "()V", 1 },
	{ "updatePayload", (intptr_t) M_mindustry_entities_comp_BuildingComp_updatePayload_mindustry_gen_Unit_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_updatePayload_mindustry_gen_Unit_mindustry_gen_Building, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_entities_comp_BuildingComp_updateTile, VTABLE_mindustry_entities_comp_BuildingComp_updateTile, "()V", 1 },
	{ "ambientVolume", (intptr_t) M_mindustry_entities_comp_BuildingComp_ambientVolume_R_float, VTABLE_mindustry_entities_comp_BuildingComp_ambientVolume_R_float, "()F", 1 },
	{ "config", (intptr_t) M_mindustry_entities_comp_BuildingComp_config_R_java_lang_Object, VTABLE_mindustry_entities_comp_BuildingComp_config_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isValid", (intptr_t) M_mindustry_entities_comp_BuildingComp_isValid_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_isValid_R_boolean, "()Z", 1 },
	{ "heal", (intptr_t) M_mindustry_entities_comp_BuildingComp_heal, VTABLE_mindustry_entities_comp_BuildingComp_heal, "()V", 1 },
	{ "heal", (intptr_t) M_mindustry_entities_comp_BuildingComp_heal_float, VTABLE_mindustry_entities_comp_BuildingComp_heal_float, "(F)V", 1 },
	{ "hitSize", (intptr_t) M_mindustry_entities_comp_BuildingComp_hitSize_R_float, VTABLE_mindustry_entities_comp_BuildingComp_hitSize_R_float, "()F", 1 },
	{ "kill", (intptr_t) M_mindustry_entities_comp_BuildingComp_kill, VTABLE_mindustry_entities_comp_BuildingComp_kill, "()V", 1 },
	{ "damage", (intptr_t) M_mindustry_entities_comp_BuildingComp_damage_float, VTABLE_mindustry_entities_comp_BuildingComp_damage_float, "(F)V", 1 },
	{ "healthChanged", (intptr_t) M_mindustry_entities_comp_BuildingComp_healthChanged, VTABLE_mindustry_entities_comp_BuildingComp_healthChanged, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_entities_comp_BuildingComp_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_entities_comp_BuildingComp_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_entities_comp_BuildingComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_entities_comp_BuildingComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "sense", (intptr_t) M_mindustry_entities_comp_BuildingComp_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_entities_comp_BuildingComp_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "control", (intptr_t) M_mindustry_entities_comp_BuildingComp_control_mindustry_logic_LAccess_double_double_double_double, VTABLE_mindustry_entities_comp_BuildingComp_control_mindustry_logic_LAccess_double_double_double_double, "(Lmindustry/logic/LAccess;DDDD)V", 1 },
	{ "control", (intptr_t) M_mindustry_entities_comp_BuildingComp_control_mindustry_logic_LAccess_java_lang_Object_double_double_double, VTABLE_mindustry_entities_comp_BuildingComp_control_mindustry_logic_LAccess_java_lang_Object_double_double_double, "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_entities_comp_BuildingComp_setProp_mindustry_logic_LAccess_double, VTABLE_mindustry_entities_comp_BuildingComp_setProp_mindustry_logic_LAccess_double, "(Lmindustry/logic/LAccess;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_entities_comp_BuildingComp_setProp_mindustry_logic_LAccess_java_lang_Object, VTABLE_mindustry_entities_comp_BuildingComp_setProp_mindustry_logic_LAccess_java_lang_Object, "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_entities_comp_BuildingComp_setProp_mindustry_ctype_UnlockableContent_double, VTABLE_mindustry_entities_comp_BuildingComp_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1 },
	{ "inFogTo", (intptr_t) M_mindustry_entities_comp_BuildingComp_inFogTo_mindustry_game_Team_R_boolean, VTABLE_mindustry_entities_comp_BuildingComp_inFogTo_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "killed", (intptr_t) M_mindustry_entities_comp_BuildingComp_killed, VTABLE_mindustry_entities_comp_BuildingComp_killed, "()V", 1 },
	{ "checkAllowUpdate", (intptr_t) M_mindustry_entities_comp_BuildingComp_checkAllowUpdate, VTABLE_mindustry_entities_comp_BuildingComp_checkAllowUpdate, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_BuildingComp_update, VTABLE_mindustry_entities_comp_BuildingComp_update, "()V", 1 },
	{ "updateFogVisibility", (intptr_t) M_mindustry_entities_comp_BuildingComp_updateFogVisibility, VTABLE_mindustry_entities_comp_BuildingComp_updateFogVisibility, "()V", 1 },
	{ "getAmbientVolume", (intptr_t) M_mindustry_entities_comp_BuildingComp_getAmbientVolume_R_float, VTABLE_mindustry_entities_comp_BuildingComp_getAmbientVolume_R_float, "()F", 1 },
	{ "getAmbientSound", (intptr_t) M_mindustry_entities_comp_BuildingComp_getAmbientSound_R_arc_audio_Sound, VTABLE_mindustry_entities_comp_BuildingComp_getAmbientSound_R_arc_audio_Sound, "()Larc/audio/Sound;", 1 },
	{ "hitbox", (intptr_t) M_mindustry_entities_comp_BuildingComp_hitbox_arc_math_geom_Rect, VTABLE_mindustry_entities_comp_BuildingComp_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "toString", (intptr_t) M_mindustry_entities_comp_BuildingComp_toString_R_java_lang_String, VTABLE_mindustry_entities_comp_BuildingComp_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$display$6", (intptr_t) M_mindustry_entities_comp_BuildingComp_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_comp_BuildingComp_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$display$9", (intptr_t) M_mindustry_entities_comp_BuildingComp_lambda$display$9_arc_struct_Bits_java_lang_Runnable, VTABLE_mindustry_entities_comp_BuildingComp_lambda$display$9_arc_struct_Bits_java_lang_Runnable, "(Larc/struct/Bits;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$display$7", (intptr_t) M_mindustry_entities_comp_BuildingComp_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_entities_comp_BuildingComp_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 4098 },
	{ "lambda$display$8", (intptr_t) M_mindustry_entities_comp_BuildingComp_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence, VTABLE_mindustry_entities_comp_BuildingComp_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence, "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$display$2", (intptr_t) SM_mindustry_entities_comp_BuildingComp_lambda$display$2_mindustry_world_modules_ItemModule_java_lang_String_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/modules/ItemModule;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$display$5", (intptr_t) SM_mindustry_entities_comp_BuildingComp_lambda$display$5_mindustry_world_modules_ItemModule_arc_struct_Bits_java_lang_Runnable, 0, "(Lmindustry/world/modules/ItemModule;Larc/struct/Bits;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$display$3", (intptr_t) SM_mindustry_entities_comp_BuildingComp_lambda$display$3_arc_scene_ui_layout_Table_mindustry_world_modules_ItemModule_java_lang_String, 0, "(Larc/scene/ui/layout/Table;Lmindustry/world/modules/ItemModule;Ljava/lang/String;)V", 4106 },
	{ "lambda$display$4", (intptr_t) SM_mindustry_entities_comp_BuildingComp_lambda$display$4_mindustry_world_modules_ItemModule_mindustry_type_Item_java_lang_String_R_java_lang_CharSequence, 0, "(Lmindustry/world/modules/ItemModule;Lmindustry/type/Item;Ljava/lang/String;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$display$1", (intptr_t) M_mindustry_entities_comp_BuildingComp_lambda$display$1_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_comp_BuildingComp_lambda$display$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$display$0", (intptr_t) M_mindustry_entities_comp_BuildingComp_lambda$display$0_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_comp_BuildingComp_lambda$display$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$onDestroyed$1", (intptr_t) SM_mindustry_entities_comp_BuildingComp_lambda$onDestroyed$1_mindustry_type_Liquid_float_R_float, 0, "(Lmindustry/type/Liquid;F)F", 4106 },
	{ "lambda$onDestroyed$0", (intptr_t) SM_mindustry_entities_comp_BuildingComp_lambda$onDestroyed$0_mindustry_type_Liquid_float_R_float, 0, "(Lmindustry/type/Liquid;F)F", 4106 },
	{ "lambda$onDeconstructed$0", (intptr_t) M_mindustry_entities_comp_BuildingComp_lambda$onDeconstructed$0_float_mindustry_world_Tile, VTABLE_mindustry_entities_comp_BuildingComp_lambda$onDeconstructed$0_float_mindustry_world_Tile, "(FLmindustry/world/Tile;)V", 4098 },
	{ "lambda$splashLiquid$0", (intptr_t) M_mindustry_entities_comp_BuildingComp_lambda$splashLiquid$0_mindustry_type_Liquid_float, VTABLE_mindustry_entities_comp_BuildingComp_lambda$splashLiquid$0_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 4098 },
	{ "lambda$placed$0", (intptr_t) M_mindustry_entities_comp_BuildingComp_lambda$placed$0_mindustry_gen_Building, VTABLE_mindustry_entities_comp_BuildingComp_lambda$placed$0_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$handleUnitPayload$0", (intptr_t) SM_mindustry_entities_comp_BuildingComp_lambda$handleUnitPayload$0_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_comp_BuildingComp, 0, "()V", 8 },
};

Class class_mindustry_entities_comp_BuildingComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/BuildingComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_BuildingComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_BuildingComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_BuildingComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_BuildingComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 12,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 44,
		.nativeFields = (intptr_t) fields,
		.methodCount = 241,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 309,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_BuildingComp = registerClass(&class_mindustry_entities_comp_BuildingComp);

}
