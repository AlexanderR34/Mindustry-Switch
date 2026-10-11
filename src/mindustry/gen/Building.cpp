#include "mindustry/gen/Building.h"
#include "java/lang/Integer.h"
#include "mindustry/gen/Building_invoke_arc_func_Prov_2.h"
#include "arc/func/Prov.h"
#include "arc/Input.h"
#include "mindustry/gen/Building_invoke_arc_func_Prov_3.h"
#include "mindustry/logic/Ranged.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "mindustry/gen/Puddle.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/gen/Building_invoke_mindustry_world_modules_LiquidModule_LiquidCalculator_2.h"
#include "mindustry/gen/Building_invoke_mindustry_world_modules_LiquidModule_LiquidCalculator_3.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/content/Fx.h"
#include "java/util/Arrays.h"
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
#include "arc/Graphics_Cursor.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/graphics/BuildingCacheLayer.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/world/blocks/heat/HeatConductor.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Building_invoke_java_lang_Runnable_10.h"
#include "mindustry/gen/Building_invoke_java_lang_Runnable_11.h"
#include "mindustry/gen/Building_invoke_arc_func_Cons_9.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/gen/Building_invoke_arc_func_Cons_8.h"
#include "mindustry/gen/Building_invoke_arc_func_Cons_7.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"
#include "mindustry/ui/Bar.h"
#include "arc/scene/style/TextureRegionDrawable.h"
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
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/game/EventType_BuildTeamChangeEvent.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/type/Sector.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "arc/util/io/Reads.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/gen/Building_invoke_mindustry_world_modules_LiquidModule_LiquidConsumer_1.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "mindustry/game/EventType_BuildingBulletDestroyEvent.h"
#include "mindustry/game/Teams.h"
#include "arc/audio/Sound.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Timerc.h"
#include "mindustry/gen/Buildingc.h"
#include "mindustry/gen/Building_1.h"
#include "mindustry/gen/Building_invoke_java_lang_Runnable_8.h"
#include "mindustry/gen/Building_invoke_java_lang_Runnable_7.h"
#include "mindustry/gen/Building_invoke_java_lang_Runnable_9.h"
#include "arc/Events.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/ai/Pathfinder.h"
#include "mindustry/gen/Building_invoke_java_lang_Runnable_6.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/modules/BlockModule.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__build.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Building_invoke_arc_func_Cons_13.h"
#include "mindustry/gen/Building_invoke_arc_func_Cons_12.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Func.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/Bits.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/Void.h"
#include "mindustry/world/modules/LiquidModule_LiquidCalculator.h"
#include "mindustry/type/Item.h"
#include "arc/struct/Queue.h"
#include "mindustry/entities/Damage.h"
#include "arc/func/Cons2.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/world/modules/LiquidModule_LiquidConsumer.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/gen/Bullet.h"
#include "arc/math/geom/Vec2.h"
#include "arc/struct/EnumSet.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "java/lang/Float.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "mindustry/entities/Puddles.h"
#include "arc/Application.h"
#include "arc/struct/IntSet.h"
#include "mindustry/world/blocks/heat/HeatBlock.h"
#include "java/lang/String.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/type/PayloadSeq.h"
#include "mindustry/gen/Building_invoke_arc_func_Cons_11.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/gen/Building_invoke_arc_func_Cons_10.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/world/Edges.h"
#include "mindustry/gen/Icon.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "java/lang/Enum.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/content/Blocks.h"
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

jobject SF_mindustry_gen_Building_bulletDamageEvent;
jfloat SF_mindustry_gen_Building_hitDuration;
jfloat SF_mindustry_gen_Building_recentDamageTime;
jint SF_mindustry_gen_Building_sleepingEntities;
jobject SF_mindustry_gen_Building_teamChangeEvent;
jobject SF_mindustry_gen_Building_tempBuilds;
jfloat SF_mindustry_gen_Building_timeToSleep;
jobject SF_mindustry_gen_Building_tmpTiles;

void mark_mindustry_gen_Building(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_Building_bulletDamageEvent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Building_bulletDamageEvent)->clazz)->markFunction)((jobject) SF_mindustry_gen_Building_bulletDamageEvent, mark, depth + 1);
		if (SF_mindustry_gen_Building_teamChangeEvent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Building_teamChangeEvent)->clazz)->markFunction)((jobject) SF_mindustry_gen_Building_teamChangeEvent, mark, depth + 1);
		if (SF_mindustry_gen_Building_tempBuilds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Building_tempBuilds)->clazz)->markFunction)((jobject) SF_mindustry_gen_Building_tempBuilds, mark, depth + 1);
		if (SF_mindustry_gen_Building_tmpTiles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Building_tmpTiles)->clazz)->markFunction)((jobject) SF_mindustry_gen_Building_tmpTiles, mark, depth + 1);
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
	auto self = (mindustry_gen_Building *) object;
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_lastAccessed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastAccessed)->clazz)->markFunction)((jobject) self->F_lastAccessed, mark, depth + 1);
	if (self->F_lastDisabler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDisabler)->clazz)->markFunction)((jobject) self->F_lastDisabler, mark, depth + 1);
	if (self->F_liquids)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquids)->clazz)->markFunction)((jobject) self->F_liquids, mark, depth + 1);
	if (self->F_power)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_power)->clazz)->markFunction)((jobject) self->F_power, mark, depth + 1);
	if (self->F_proximity)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_proximity)->clazz)->markFunction)((jobject) self->F_proximity, mark, depth + 1);
	if (self->F_suppressColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suppressColor)->clazz)->markFunction)((jobject) self->F_suppressColor, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
}

void init_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(219);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(139);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(1));
	LINE_NUMBER(141);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_healSuppressionTime = (jfloat(-1.0f));
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(149);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_index__build = (jint(-1));
	LINE_NUMBER(162);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastDamageTime = (jfloat(-300.0f));
	LINE_NUMBER(167);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastHealTime = (jfloat(-1200.0f));
	LINE_NUMBER(172);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth = (jfloat(1));
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(1)), (6), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_proximity = (jref) sp[1].o;
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_suppressColor = (jref) sp[1].o;
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(197);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale = (jfloat(1));
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, (6));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_back_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:back", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(2))));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[1].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(2))));
	sp[0].o = (jobject)((func_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_front_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:front", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[1].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].o = (jobject)((func_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_left_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:left", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(1))));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[1].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(1))));
	sp[0].o = (jobject)((func_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_right_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:right", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(3))));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[1].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(3))));
	sp[0].o = (jobject)((func_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getCommandPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getPayloads", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:findClosestEdge", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(277);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(278);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(279);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(281);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_x);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_y)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(282);
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
	LINE_NUMBER(283);
	frame[3].o = (frame[9].o);
	LINE_NUMBER(284);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_dst2_arc_math_geom_Position_R_float])(ctx, (frame[9].o), (frame[1].o));
	frame[4].f = temp0;
	}
label_8:;
	{
	LINE_NUMBER(280);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getPayload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:takePayload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:closestCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:closestEnemyCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:core", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_timer_R_arc_util_Interval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:timer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_dead_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_dead);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_health_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:health", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_hitTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:hitTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_hitTime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_maxHealth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:maxHealth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return (6);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_team_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:team", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_dead_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dead", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(378);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_dead = (frame[1].i);
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_health_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:health", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(383);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health = (frame[1].f);
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_hitTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:hitTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(388);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[1].f);
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(393);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_maxHealth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:maxHealth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(398);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth = (frame[1].f);
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_setIndex__build_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:setIndex__build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(403);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_index__build = (frame[1].i);
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:team", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(408);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_timer_arc_util_Interval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:timer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(413);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timer = (jref) (frame[1].o);
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(418);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(423);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onRepaired(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onRepaired", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(429);
	((func_mindustry_gen_Building_placed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_placed])(ctx, (frame[0].o));
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_hasFogRadius;
	jint temp0 = (jint)((func_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(431);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(433);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_placed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:placed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(438);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) == 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_connectedPower) == 0) goto label_3;
	}
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_gen_Building_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	SM_mindustry_world_blocks_power_PowerNode_getNodeLinks_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_3:;
	LINE_NUMBER(446);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_playerPlaced_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:playerPlaced", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(451);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(456);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(466);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:create", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(480);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	syncBuildingOuterBlock((frame[0].o), (frame[1].o));
	LINE_NUMBER(481);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[2].o);
	LINE_NUMBER(482);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_health)));
	LINE_NUMBER(483);
	((func_mindustry_gen_Building_maxHealth_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_maxHealth_float])(ctx, (frame[0].o), (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_health))));
	LINE_NUMBER(484);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_timers));
	((func_mindustry_gen_Building_timer_arc_util_Interval) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_timer_arc_util_Interval])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(485);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasItems) == 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_ItemModule);
	init_mindustry_world_modules_ItemModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(486);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasLiquids) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_LiquidModule);
	init_mindustry_world_modules_LiquidModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(487);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasPower) == 0) goto label_8;
	}
	{
	LINE_NUMBER(488);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_modules_PowerModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_PowerModule);
	init_mindustry_world_modules_PowerModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power = (jref) sp[1].o;
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(491);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_initialized = (jint(1));
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getLiquidDestination", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:init", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(502);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	{
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_3;
	}
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_init = (jint(0));
	LINE_NUMBER(507);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(510);
	if (!((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity) {
		clinit_arc_struct_Seq(ctx);
		sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[0].o, (jint(1)), (6), (((jobject) &class_mindustry_gen_Building)));
		((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity = (jref) sp[0].o;
	}
	if (!((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timer) {
		clinit_arc_util_Interval(ctx);
		sp[0].o = gcAlloc(ctx, &class_arc_util_Interval);
		init_arc_util_Interval_int(ctx, sp[0].o, (6));
		((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timer = (jref) sp[0].o;
	}
	syncBuildingOuterBlock((frame[0].o), ((mindustry_gen_Building *) frame[0].o)->F_block);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(511);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[4].i);
	LINE_NUMBER(512);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (frame[1].o);
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[1].o));
	((func_mindustry_gen_Building_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(514);
	if ((frame[3].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(515);
	((func_mindustry_gen_Building_add) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_add])(ctx, (frame[0].o));
	LINE_NUMBER(516);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_10;
	{
	LINE_NUMBER(517);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	((func_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource])(ctx, sp[0].o, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(520);
	((func_mindustry_gen_Building_checkAllowUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_checkAllowUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(521);
	((func_mindustry_gen_Building_created) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_created])(ctx, (frame[0].o));
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:nearby", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(527);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + (frame[1].i);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + (frame[2].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:nearby", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(532);
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
	LINE_NUMBER(533);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + (jint(1));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	sp += 1;
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(534);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + (jint(1))));
	sp += 1;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(535);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) - (jint(1));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	sp += 1;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(536);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) - (jint(1))));
	sp += 1;
	goto label_6;
	}
label_5:;
	LINE_NUMBER(537);
	INST_ACONST_NULL();
label_6:;
	LINE_NUMBER(532);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getCursor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurable) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jobject M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getAmbientSound", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getDisplayIcon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getPowerConnections", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(558);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[1].o));
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
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
	LINE_NUMBER(561);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_conductivePower) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_conductivePower) == 0) goto label_6;
	}
label_7:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean])(ctx, (frame[3].o), (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_6;
	}
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[3].o));
	}
label_6:;
	LINE_NUMBER(564);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(565);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(566);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[2].i));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	LINE_NUMBER(567);
	if ((frame[3].o) == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(565);
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_absorbLasers_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:absorbLasers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_absorbLasers);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:acceptItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[2].o));
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

jbool M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:acceptLiquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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

jbool M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:acceptPayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_allowDeposit_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:allowDeposit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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

jbool M_mindustry_gen_Building_allowUpdate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:allowUpdate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_Block_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_supportsEnv_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_editor_EditorTile)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp4 = jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp5 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y))));
	if (temp5 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:canBeReplaced", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(604);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_canConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:canConsume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(609);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency), (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:canControlSelect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:canDump", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(619);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:canDumpLiquid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_canPickup_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:canPickup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_allowedInPayloads);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_canResupply_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:canResupply", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_allowResupply);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_canUnload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:canUnload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(639);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_unloadable);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_canWithdraw_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:canWithdraw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_cheating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:cheating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(649);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_cheat);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_checkSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:checkSolid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_checkSuppression_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:checkSuppression", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(659);
	jint temp0 = (jint)((func_mindustry_gen_Building_isHealSuppressed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_isHealSuppressed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(660);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.03)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(661);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_regenSuppressParticle;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))) - (jfloat(1))));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))) - (jfloat(1))));
	jfloat temp5 = temp3 + temp4;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_suppressColor;
	((func_mindustry_entities_Effect_at_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color])(ctx, sp[0].o, temp2, temp5, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(665);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:collide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(670);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:collision", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(675);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(676);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_type;
	frame[3].o = sp[0].o;
	LINE_NUMBER(677);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_type;
	jfloat temp0 = (jfloat)((func_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float])(ctx, sp[0].o, (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(678);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[3].o)))->F_pierceArmor) != 0) goto label_6;
	}
	{
	LINE_NUMBER(679);
	jfloat temp0 = frame[4].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_mindustry_entities_Damage_applyArmor_float_float_R_float(ctx, temp0, ((((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_armor) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[3].o)))->F_armorMultiplier)) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[3].o)))->F_blockArmorMultiplier)));
	frame[4].f = temp1;
	}
label_6:;
	{
	LINE_NUMBER(681);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	((func_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].f));
	LINE_NUMBER(682);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_9;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_9;
	{
	LINE_NUMBER(683);
	clinit_mindustry_game_EventType$BuildingBulletDestroyEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildingBulletDestroyEvent);
	init_mindustry_game_EventType$BuildingBulletDestroyEvent_mindustry_gen_Building_mindustry_gen_Bullet(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:conductsTo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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

jbool M_mindustry_gen_Building_configTapped_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:configTapped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_consumeTriggerValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:consumeTriggerValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_damaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damaged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(705);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth) - (jfloat(1,000000e-03f))), 1)) >= 0) goto label_1;
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

jbool M_mindustry_gen_Building_dump_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dump", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(710);
	jint temp0 = (jint)((func_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dump", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(716);
	frame[2].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(717);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(718);
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size);
	LINE_NUMBER(719);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(720);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(721);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[6].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(723);
	frame[8].i = (jint(0));
	}
label_13:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_int_R_boolean])(ctx, sp[0].o, (frame[8].i));
	if (temp0 != 0) goto label_16;
	}
	goto label_17;
label_16:;
	{
	LINE_NUMBER(725);
	frame[9].o = (checkCast(ctx, &class_mindustry_type_Item, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i)))));
	LINE_NUMBER(726);
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[7].o), (frame[0].o), (frame[9].o));
	if (temp0 == 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[7].o), (frame[9].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(727);
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, (frame[7].o), (frame[0].o), (frame[9].o));
	LINE_NUMBER(728);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, (frame[9].o), (jint(1)));
	LINE_NUMBER(729);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_gen_Building_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(730);
	popStackFrame(ctx);
	return (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(723);
	INST_IINC(8, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(733);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_gen_Building_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(721);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	goto label_24;
label_7:;
	{
	LINE_NUMBER(736);
	frame[6].i = (jint(0));
	}
label_25:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_24;
	}
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[6].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(738);
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[7].o), (frame[0].o), (frame[1].o));
	if (temp1 == 0) goto label_28;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[7].o), (frame[1].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(739);
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, (frame[7].o), (frame[0].o), (frame[1].o));
	LINE_NUMBER(740);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(741);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_gen_Building_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return (jint(1));
	}
label_28:;
	{
	LINE_NUMBER(744);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_gen_Building_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(736);
	INST_IINC(6, 1);
	goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(747);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_dumpAccumulate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dumpAccumulate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(752);
	jint temp0 = (jint)((func_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dumpAccumulate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(757);
	frame[2].i = (jint(0));
	LINE_NUMBER(758);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_dumpAccum;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_delta_R_float])(ctx, (frame[0].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_dumpAccum = (temp0 + temp1);
	}
label_2:;
	{
	LINE_NUMBER(759);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_dumpAccum), (jfloat(1)), -1)) < 0) goto label_3;
	}
	{
	LINE_NUMBER(760);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = (temp0 | temp1);
	LINE_NUMBER(761);
	sp[0].o = frame[0].o;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_dumpAccum = (((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_dumpAccum) - (jfloat(1)));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(763);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dumpPayload", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(769);
	frame[2].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(770);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[3].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(772);
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, (frame[4].o), (frame[0].o), (frame[1].o));
	if (temp1 == 0) goto label_7;
	}
	{
	LINE_NUMBER(773);
	((func_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload])(ctx, (frame[4].o), (frame[0].o), (frame[1].o));
	LINE_NUMBER(774);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_gen_Building_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(777);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_gen_Building_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(770);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(779);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:inFogTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(784);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
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
	LINE_NUMBER(785);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(786);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[3].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_sizeOffset);
	LINE_NUMBER(787);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[4].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(788);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	frame[5].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(789);
	jint temp0 = (jint)((func_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(790);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(791);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(792);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, (frame[1].o), (((frame[4].i) + (frame[6].i)) + (frame[3].i)), (((frame[5].i) + (frame[7].i)) + (frame[3].i)));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(791);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(790);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_inMapArea_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:inMapArea", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(802);
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
	jint temp3 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, (jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight) * (8)))), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
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

jbool M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:interactable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(807);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_mindustry_gen_Building_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(812);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_isCommandable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:isCommandable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(817);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_commandable);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:isDiscovered", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(822);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp1 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	if ((floatCompare(temp1, (jfloat(3.0f)), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(823);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(825);
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
	LINE_NUMBER(826);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) > (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(829);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y));
	popStackFrame(ctx);
	return temp1;
	}
label_5:;
	{
	LINE_NUMBER(831);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].i = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2)));
	LINE_NUMBER(832);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y));
	if (temp1 != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x) - (frame[2].i);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) - (frame[2].i)));
	if (temp1 != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x) - (frame[2].i);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) + (frame[2].i)));
	if (temp1 != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x) + (frame[2].i);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) + (frame[2].i)));
	if (temp1 != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x) + (frame[2].i);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) - (frame[2].i)));
	if (temp1 == 0) goto label_9;
	}
label_8:;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_isHealSuppressed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:isHealSuppressed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_suppressable) == 0) goto label_1;
	}
	{
	if ((floatCompare((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_healSuppressionTime), 1)) > 0) goto label_1;
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

jbool M_mindustry_gen_Building_isInsulated_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:isInsulated", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(843);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_insulated);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(848);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, (frame[1].o)))(ctx, (frame[1].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_isPayload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:isPayload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(853);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
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

jbool M_mindustry_gen_Building_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(858);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:isValid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(863);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_dead_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:moveForward", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)((func_mindustry_gen_Building_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_front_R_mindustry_gen_Building])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(869);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[2].o), (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(870);
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, (frame[2].o), (frame[0].o), (frame[1].o));
	LINE_NUMBER(871);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(873);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:movePayload", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].i = ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))) + (jint(1)));
	LINE_NUMBER(879);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[2].i);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[2].i)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(880);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(881);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	((func_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(882);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onConfigureBuildTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(889);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_clearOnDoubleTap) == 0) goto label_1;
	}
	{
	LINE_NUMBER(890);
	if ((frame[0].o) != (frame[1].o)) goto label_3;
	}
	{
	LINE_NUMBER(891);
	((func_mindustry_gen_Building_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(892);
	((func_mindustry_gen_Building_configure_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_configure_java_lang_Object])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(895);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(897);
	if ((frame[0].o) == (frame[1].o)) goto label_7;
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

jbool M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onConfigureTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(902);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)((func_mindustry_gen_Building_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(908);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_payloadCheck_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:payloadCheck", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(913);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_1;
	}
	{
	if (((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(2))) % (jint(4))) != (frame[1].i)) goto label_1;
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

jbool M_mindustry_gen_Building_productionValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:productionValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(918);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(923);
	frame[2].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(924);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(925);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_gen_Building_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(926);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[3].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(927);
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[4].o), (frame[0].o), (frame[1].o));
	if (temp1 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(928);
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, (frame[4].o), (frame[0].o), (frame[1].o));
	LINE_NUMBER(929);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(924);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(932);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(936);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_shouldAmbientSound_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:shouldAmbientSound", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(941);
	jint temp0 = (jint)((func_mindustry_gen_Building_shouldConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_shouldConsume_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:shouldConsume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(946);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:shouldHideConfigure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(951);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:shouldShowConfigure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(956);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_timer_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:timer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(961);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(962);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:wasRecentlyDamaged", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(967);
	if ((floatCompare((((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastDamageTime) + (jfloat(300.0f))), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), -1)) < 0) goto label_1;
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

jbool M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:wasRecentlyHealed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(972);
	if ((floatCompare((((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastHealTime) + (frame[1].f)), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), -1)) < 0) goto label_1;
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

jbyte M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:relativeTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(977);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y)));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(978);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) - (jfloat(1))), 1)) > 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(979);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + (jfloat(1))), -1)) < 0) goto label_4;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(981);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) - (jfloat(1))), 1)) > 0) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(982);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(1))), -1)) < 0) goto label_4;
	}
	INST_ICONST(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(984);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_gen_Building_relativeTo_int_int_R_byte(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:relativeTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(989);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:relativeTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(994);
	jint temp0 = (jint)((func_mindustry_gen_Building_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_relativeTo_int_int_R_byte])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:relativeToEdge", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(999);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_gen_Building_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1004);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:sense", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1009);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_1:;
	{
	LINE_NUMBER(1010);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Liquid)) == 0) goto label_3;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Liquid, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_3:;
	{
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1012);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_UnitType)) == 0) goto label_7;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_7:;
	{
	LINE_NUMBER(1013);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_Block)) == 0) goto label_5;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_get_mindustry_ctype_UnlockableContent_R_int])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_5:;
	{
	LINE_NUMBER(1015);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:sense", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1020);
	clinit_mindustry_gen_Building$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(1021);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_2:;
	{
	LINE_NUMBER(1022);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_3:;
	{
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jdouble temp2 = (jdouble)SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(ctx, temp0, temp1, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b), (jfloat(1)));
	sp[0].d = temp2;
	sp += 1;
	goto label_30;
	}
label_4:;
	{
	LINE_NUMBER(1024);
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_31;
	}
	INST_DCONST(1);
	goto label_30;
label_31:;
	INST_DCONST(0);
	goto label_30;
label_5:;
	{
	LINE_NUMBER(1025);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_32;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_checkSolid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_checkSolid_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(1026);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jdouble temp0 = jdouble(((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_7:;
	{
	LINE_NUMBER(1027);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_8:;
	{
	LINE_NUMBER(1028);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_9:;
	{
	LINE_NUMBER(1029);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_10:;
	{
	LINE_NUMBER(1030);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_11:;
	{
	LINE_NUMBER(1031);
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
	LINE_NUMBER(1032);
	jdouble temp0 = jdouble(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_13:;
	{
	LINE_NUMBER(1033);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_36;
	}
	INST_DCONST(0);
	goto label_30;
label_36:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_14:;
	{
	LINE_NUMBER(1034);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o != nullptr) goto label_37;
	}
	INST_DCONST(0);
	goto label_30;
label_37:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_15:;
	{
	LINE_NUMBER(1035);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o != nullptr) goto label_39;
	}
label_38:;
	INST_DCONST(0);
	goto label_30;
label_39:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	jfloat temp0 = (jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(temp1))->F_buffered) == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1036);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1037);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1038);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1039);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_45;
	}
	INST_DCONST(0);
	goto label_30;
label_45:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerIn_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble((temp0 * (jfloat(60.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_20:;
	{
	LINE_NUMBER(1040);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_46;
	}
	INST_DCONST(0);
	goto label_30;
label_46:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerOut_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerOut_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble((temp0 * (jfloat(60.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_21:;
	{
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_47;
	}
	INST_DCONST(0);
	goto label_30;
label_47:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_22:;
	{
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_48;
	}
	INST_DCONST(0);
	goto label_30;
label_48:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float])(ctx, sp[0].o);
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_30;
	}
label_23:;
	{
	LINE_NUMBER(1043);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_armor));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_24:;
	{
	LINE_NUMBER(1044);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_49;
	}
	INST_DCONST(1);
	goto label_30;
label_49:;
	INST_DCONST(0);
	goto label_30;
label_25:;
	{
	LINE_NUMBER(1045);
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
	LINE_NUMBER(1046);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_53;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_total_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_54;
	}
label_53:;
	INST_ICONST(0);
label_54:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o));
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
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jdouble temp0 = jdouble(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	sp[0].d = temp0;
	sp += 1;
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(1048);
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
	LINE_NUMBER(1049);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_30:;
	LINE_NUMBER(1020);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_ambientVolume_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:ambientVolume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1055);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_calculateHeat_Array1_float_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:calculateHeat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1060);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:calculateHeat", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1065);
	SM_java_util_Arrays_fill_Array1_float_float(ctx, (frame[1].o), (jfloat(0)));
	LINE_NUMBER(1066);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(1067);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
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
	LINE_NUMBER(1069);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_heat_HeatBlock)) == 0) goto label_7;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatBlock, (frame[5].o)));
	LINE_NUMBER(1070);
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
	LINE_NUMBER(1071);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_13;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_14;
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte])(ctx, (frame[0].o), (frame[5].o));
	if (((temp0 + (jint(2))) % (jint(4))) == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_rotation)) goto label_13;
	}
label_14:;
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_7;
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte])(ctx, (frame[0].o), (frame[5].o));
	if (temp0 == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_rotation)) goto label_7;
	}
label_13:;
	{
	LINE_NUMBER(1072);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild)) == 0) goto label_15;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild, (frame[5].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild *) NULL_CHECK((frame[8].o)))->F_cameFrom;
	jint temp0 = (jint)((func_mindustry_gen_Building_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_id_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(1073);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x) - ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y) - ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	frame[9].f = (temp2 / (jfloat(8.0f)));
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp3 = (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jint temp4 = jint(((temp3 + ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2)))) - (frame[9].f)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jint temp5 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp6 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp5, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	jint temp7 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp4, temp6);
	frame[10].i = temp7;
	LINE_NUMBER(1075);
	jfloat temp8 = (jfloat)((func_mindustry_world_blocks_heat_HeatBlock_heat_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_heat_HeatBlock, INDEX_mindustry_world_blocks_heat_HeatBlock_heat_R_float, (frame[6].o)))(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	frame[11].f = ((temp8 / (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) * (jfloat((frame[10].i))));
	LINE_NUMBER(1076);
	if ((frame[7].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(1077);
	frame[11].f = ((frame[11].f) / (jfloat(3.0f)));
	}
label_21:;
	{
	LINE_NUMBER(1079);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte])(ctx, (frame[0].o), (frame[5].o));
	jint temp1 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, temp0, (jint(4)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp1)) + (frame[11].f));
	LINE_NUMBER(1080);
	frame[3].f = ((frame[3].f) + (frame[11].f));
	}
label_17:;
	{
	LINE_NUMBER(1082);
	if ((frame[2].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(1083);
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_id));
	LINE_NUMBER(1084);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild)) == 0) goto label_24;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild, (frame[5].o)));
	LINE_NUMBER(1085);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild *) NULL_CHECK((frame[8].o)))->F_cameFrom;
	((func_arc_struct_IntSet_addAll_arc_struct_IntSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_addAll_arc_struct_IntSet])(ctx, sp[0].o, sp[1].o);
	}
label_24:;
	{
	LINE_NUMBER(1088);
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild)) == 0) goto label_7;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild, (frame[6].o)));
	LINE_NUMBER(1089);
	((func_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild_updateHeat) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild_updateHeat])(ctx, (frame[8].o));
	}
label_7:;
	LINE_NUMBER(1093);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(1094);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_delta_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:delta", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1099);
	popStackFrame(ctx);
	return ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_drawrot_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawrot", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1104);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotateDraw) == 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) * (90)));
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

jfloat M_mindustry_gen_Building_edelta_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:edelta", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1109);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_delta_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_efficiencyScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:efficiencyScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1114);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_fogRadius_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:fogRadius", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_fogRadius)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_getAmbientVolume_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getAmbientVolume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1124);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSoundVolume;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_ambientVolume_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_ambientVolume_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_getDisplayEfficiency_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getDisplayEfficiency", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1129);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_getProgressIncrease_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getProgressIncrease_float_R_float])(ctx, (frame[0].o), (jfloat(1)));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_edelta_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 / temp1);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_getPowerProduction_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getPowerProduction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1134);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_getProgressIncrease_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getProgressIncrease", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1139);
	jfloat temp0 = (jfloat(1)) / (frame[1].f);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_edelta_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1144);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1149);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_handleDamage_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:handleDamage", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1154);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_healthf_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:healthf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1159);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health) / ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_hitSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:hitSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:moveLiquid", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1169);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(1170);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building])(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1171);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	frame[3].f = (temp0 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity));
	LINE_NUMBER(1173);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = temp1 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[4].f = (temp2 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidPressure));
	LINE_NUMBER(1174);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[4].f) - (frame[3].f)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp4 = temp3 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp5 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp4, temp5);
	frame[5].f = temp6;
	LINE_NUMBER(1175);
	jfloat temp7 = frame[5].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jfloat temp8 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp9 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	jfloat temp10 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp7, (temp8 - temp9));
	frame[5].f = temp10;
	LINE_NUMBER(1176);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	if ((floatCompare((frame[3].f), (frame[4].f), 1)) > 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean])(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1177);
	((func_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float])(ctx, (frame[1].o), (frame[0].o), (frame[2].o), (frame[5].f));
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[2].o), (frame[5].f));
	LINE_NUMBER(1179);
	popStackFrame(ctx);
	return (frame[5].f);
	}
label_9:;
	{
	LINE_NUMBER(1180);
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
	LINE_NUMBER(1181);
	frame[6].f = ((((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x)) / (jfloat(2)));
	LINE_NUMBER(1182);
	frame[7].f = ((((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y)) / (jfloat(2)));
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1184);
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK((frame[8].o)))->F_blockReactive) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK((frame[2].o)))->F_blockReactive) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1185);
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
	LINE_NUMBER(1186);
	((func_mindustry_gen_Building_damageContinuous_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damageContinuous_float])(ctx, (frame[0].o), (jfloat(1)));
	LINE_NUMBER(1187);
	((func_mindustry_gen_Building_damageContinuous_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_damageContinuous_float])(ctx, (frame[1].o), (jfloat(1)));
	LINE_NUMBER(1188);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.1)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1189);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_fire;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	goto label_3;
	}
label_20:;
	{
	LINE_NUMBER(1191);
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
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[2].o, (frame[2].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, ((jfloat(0.7f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(1193);
	jint temp2 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.20000000298023224)));
	if (temp2 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1194);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_steam;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	}
label_3:;
	{
	LINE_NUMBER(1200);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:moveLiquidForward", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1205);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1206);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(1207);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1208);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(1209);
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
	LINE_NUMBER(1210);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	frame[4].f = (temp0 / (jfloat(1.5f)));
	LINE_NUMBER(1211);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean_boolean(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[4].f), (jint(1)), (jint(1)));
	LINE_NUMBER(1212);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[2].o), (frame[4].f));
	}
label_5:;
	{
	LINE_NUMBER(1214);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_progress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:progress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1219);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_rotdeg_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:rotdeg", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1224);
	popStackFrame(ctx);
	return (jfloat((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) * (90))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_timeScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:timeScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1229);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_totalProgress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:totalProgress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1234);
	popStackFrame(ctx);
	return (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Building_warmup_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:warmup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1239);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:acceptStack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1244);
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_1;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_2;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1245);
	jint temp0 = (jint)((func_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp0 - temp1), (frame[2].i));
	popStackFrame(ctx);
	return temp2;
	}
label_1:;
	{
	LINE_NUMBER(1247);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_explosionItemCap_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:explosionItemCap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1253);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getMaximumAccepted", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1258);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_moduleBitmask_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:moduleBitmask", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1263);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
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
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_5;
	}
	INST_ICONST(4);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	jint temp0 = (sp[0].i | sp[1].i) | (8);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale), (jfloat(1)), -1)) == 0) goto label_7;
	}
	INST_BIPUSH(16);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	INST_BIPUSH(32);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	INST_IOR();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_pos_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:pos", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1268);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:removeStack", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1273);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1274);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[2].i = temp2;
	LINE_NUMBER(1275);
	((func_mindustry_gen_Building_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(1276);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(1277);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1282);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Building_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1287);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:senseObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1292);
	clinit_mindustry_gen_Building$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(1293);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp += 1;
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1294);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_6;
label_7:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item])(ctx, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(1295);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_configSenseable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_configSenseable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, (frame[0].o));
	sp += 1;
	goto label_6;
	}
label_8:;
	INST_ACONST_NULL();
	goto label_6;
label_4:;
	{
	LINE_NUMBER(1296);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o));
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
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[0].o));
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
	LINE_NUMBER(1297);
	clinit_mindustry_gen_Building(ctx);
	(sp++)->o = SF_mindustry_logic_Senseable_noSensed;
label_6:;
	LINE_NUMBER(1292);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_getDisplayName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getDisplayName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1303);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"block.derelict"_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n\u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[2].o);
	sp += 1;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_emoji;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_emoji;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" \u0001"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_5:;
	POP_N(2); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1308);
	jint temp0 = (jint)((func_mindustry_gen_Building_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_id_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Building#\u0001[\u0001,\u0001]:\u0001"_j.string, 4, boxInteger(ctx, temp0), boxInteger(ctx, temp1), boxInteger(ctx, temp2), sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1313);
	sp[0].o = (jobject)((func_mindustry_gen_Building_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1314);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:floor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1319);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1324);
	sp[0].o = (jobject)((func_mindustry_gen_Building_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1325);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:status", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1330);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1331);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockStatus_logicDisable;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1333);
	jint temp0 = (jint)((func_mindustry_gen_Building_shouldConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_shouldConsume_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(1334);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockStatus_noOutput;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1336);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), 1)) <= 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_productionValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_productionValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1337);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockStatus_noInput;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(1339);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if ((doubleCompare((fmod((((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_tick) / (jdouble(30.0))), (jdouble(1)))), (jdouble(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency))), 1)) >= 0) goto label_7;
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

jobject M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:flowItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1344);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_Building_create_R_mindustry_gen_Building(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	{
	LINE_NUMBER(1348);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_Building);
	init_mindustry_gen_Building(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1352);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1353);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_build;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_index__build = temp0;
	LINE_NUMBER(1356);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1357);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_checkAdd) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_checkAdd])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(1362);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(1364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_addPlan_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:addPlan", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1368);
	((func_mindustry_gen_Building_addPlan_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_addPlan_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(1369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_addPlan_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:addPlan", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1373);
	if ((frame[2].i) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rebuildable) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
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
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1374);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1375);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1376);
	frame[6].o = (frame[0].o);
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_5;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[6].o)));
	LINE_NUMBER(1377);
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
	LINE_NUMBER(1378);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_current;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1379);
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_lastConfig;
	frame[3].o = sp[0].o;
	goto label_5;
	}
label_7:;
	LINE_NUMBER(1381);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(1384);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1385);
	if ((frame[1].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1386);
	frame[6].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	if (temp0 >= ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(1387);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(1388);
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (temp0 != ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x)) goto label_16;
	}
	{
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (temp0 != ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y)) goto label_16;
	}
	{
	LINE_NUMBER(1389);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	LINE_NUMBER(1390);
	goto label_11;
	}
label_16:;
	{
	LINE_NUMBER(1386);
	INST_IINC(6, 1);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1394);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	clinit_mindustry_game_Teams$BlockPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Teams$BlockPlan);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = jshort(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
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
	sp[0].o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, (frame[0].o));
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
	LINE_NUMBER(1395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_afterDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:afterDestroyed", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1399);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroyBullet;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1400);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroyBullet;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp += 2;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroyBulletSameTeam) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp += 1;
	goto label_4;
	}
label_3:;
	clinit_mindustry_game_Team(ctx);
	(sp++)->o = SF_mindustry_game_Team_derelict;
label_4:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((func_mindustry_gen_Building_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_id_R_int])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_randomSeed_long_float_R_float(ctx, (jlong(temp2)), (jfloat(360.0f)));
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp3);
	}
label_1:;
	LINE_NUMBER(1402);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_afterPickedUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:afterPickedUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1406);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1407);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[1].o);
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph = (jref) sp[1].o;
	LINE_NUMBER(1408);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(1409);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1410);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = (jfloat(0));
	}
label_1:;
	LINE_NUMBER(1413);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1417);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1421);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_applyBoost_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:applyBoost", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1425);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_canOverdrive) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1426);
	if ((floatCompare((frame[1].f), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale) - (jfloat(1,000000e-03f))), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(1427);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScaleDuration), (frame[2].f));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_timeScaleDuration = temp0;
	}
label_2:;
	{
	LINE_NUMBER(1429);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale), (frame[1].f));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_timeScale = temp0;
	LINE_NUMBER(1430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_applyHealSuppression_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:applyHealSuppression", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1434);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((func_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(1435);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:applyHealSuppression", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1439);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_healSuppressionTime), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (frame[1].f)));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_healSuppressionTime = temp0;
	LINE_NUMBER(1440);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_suppressColor = (jref) (frame[2].o);
	LINE_NUMBER(1441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_applySlowdown_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:applySlowdown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1445);
	if ((floatCompare((frame[1].f), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale) + (jfloat(1,000000e-03f))), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(1446);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScaleDuration), (frame[2].f));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_timeScaleDuration = temp0;
	}
label_1:;
	{
	LINE_NUMBER(1448);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale), (frame[1].f));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_timeScale = temp0;
	LINE_NUMBER(1449);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1453);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:buildConfiguration", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1457);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_changeTeam_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:changeTeam", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1461);
	((func_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:changeTeam", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1466);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1467);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_forceTeam;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_forceTeam;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(1468);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1469);
	if ((frame[3].o) != (frame[1].o)) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(1470);
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(1471);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(1472);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(1473);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_8;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_8;
	{
	LINE_NUMBER(1474);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1475);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
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
	LINE_NUMBER(1476);
	if ((frame[7].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
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
	LINE_NUMBER(1477);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, sp[0].o, (frame[7].o));
	}
label_14:;
	LINE_NUMBER(1479);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(1480);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_17;
	}
	{
	LINE_NUMBER(1481);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_items;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1482);
	if ((frame[7].o) == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
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
	LINE_NUMBER(1483);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, sp[0].o, (frame[6].i));
	LINE_NUMBER(1484);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp1 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, temp1);
	LINE_NUMBER(1485);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(1486);
	INST_IINC(6, -1);
	}
label_20:;
	{
	LINE_NUMBER(1480);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(1489);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1490);
	((func_mindustry_gen_Building_updatePowerGraph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_updatePowerGraph])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(1492);
	if ((frame[4].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(1493);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1494);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building_teamChangeEvent;
	sp[0].o = (jobject)((func_mindustry_game_EventType$BuildTeamChangeEvent_set_mindustry_game_Team_mindustry_gen_Building_R_mindustry_game_EventType$BuildTeamChangeEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$BuildTeamChangeEvent_set_mindustry_game_Team_mindustry_gen_Building_R_mindustry_game_EventType$BuildTeamChangeEvent])(ctx, sp[0].o, (frame[3].o), (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1495);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1496);
	((func_mindustry_gen_Building_updateProximity) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_updateProximity])(ctx, (frame[0].o));
	}
label_26:;
	{
	LINE_NUMBER(1498);
	((func_mindustry_gen_Building_checkAllowUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_checkAllowUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(1499);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_checkAllowUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:checkAllowUpdate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1503);
	jint temp0 = (jint)((func_mindustry_gen_Building_allowUpdate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_allowUpdate_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1504);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(0));
	}
label_1:;
	LINE_NUMBER(1506);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_clampHealth(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:clampHealth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1510);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = temp0;
	LINE_NUMBER(1511);
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp1 == 0) goto label_2;
	}
	{
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(1512);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_configure_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:configure", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1516);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lastConfig = (jref) (frame[1].o);
	LINE_NUMBER(1517);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1518);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_configureAny_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:configureAny", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1522);
	SM_mindustry_gen_Call_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(ctx, (jobject(nullptr)), (frame[0].o), (frame[1].o));
	LINE_NUMBER(1523);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:configured", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1527);
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
	LINE_NUMBER(1528);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_Item)) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) &class_mindustry_type_Item);
	INST_ASTORE(3);
label_5:;
	{
	LINE_NUMBER(1529);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_Block)) == 0) goto label_6;
	}
	(sp++)->o = ((jobject) &class_mindustry_world_Block);
	INST_ASTORE(3);
label_6:;
	{
	LINE_NUMBER(1530);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_Liquid)) == 0) goto label_7;
	}
	(sp++)->o = ((jobject) &class_mindustry_type_Liquid);
	INST_ASTORE(3);
label_7:;
	{
	LINE_NUMBER(1531);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_UnitType)) == 0) goto label_8;
	}
	(sp++)->o = ((jobject) &class_mindustry_type_UnitType);
	INST_ASTORE(3);
label_8:;
	{
	LINE_NUMBER(1532);
	if ((frame[1].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1533);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player])(ctx, (frame[1].o));
	((func_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(1535);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurations;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1536);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurations;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	((func_arc_func_Cons2_get_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons2, INDEX_arc_func_Cons2_get_java_lang_Object_java_lang_Object, (checkCast(ctx, &class_arc_func_Cons2, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_func_Cons2, sp[0].o)), (frame[0].o), (frame[2].o));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1537);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Building)) == 0) goto label_13;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[2].o)));
	LINE_NUMBER(1538);
	sp[0].o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1539);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Building)) != 0) goto label_13;
	}
	{
	LINE_NUMBER(1540);
	((func_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	}
label_13:;
	LINE_NUMBER(1543);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_consume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:consume", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1547);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1548);
	((func_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(1547);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1550);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:control", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	frame[8].d = param4;
	{
	LINE_NUMBER(1554);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_enabled;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(1555);
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
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_enabled = sp[1].i;
label_1:;
	LINE_NUMBER(1557);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double(jcontext ctx, jobject self, jobject param0, jobject param1, jdouble param2, jdouble param3, jdouble param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:control", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	{
	LINE_NUMBER(1561);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_config;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_logicConfigurable) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1562);
	((func_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object])(ctx, (frame[0].o), (jobject(nullptr)), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(1564);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_created(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:created", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1568);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1572);
	((func_mindustry_gen_Building_damage_mindustry_game_Team_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float])(ctx, (frame[0].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(1573);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building_bulletDamageEvent;
	sp[0].o = (jobject)((func_mindustry_game_EventType$BuildDamageEvent_set_mindustry_gen_Building_mindustry_gen_Bullet_R_mindustry_game_EventType$BuildDamageEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$BuildDamageEvent_set_mindustry_gen_Building_mindustry_gen_Bullet_R_mindustry_game_EventType$BuildDamageEvent])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1574);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damage_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1578);
	frame[3].f = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(1579);
	((func_mindustry_gen_Building_damage_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damage_float])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(1580);
	if ((frame[2].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1581);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[3].f);
	}
label_3:;
	LINE_NUMBER(1583);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1587);
	jint temp0 = (jint)((func_mindustry_gen_Building_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1588);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = temp0;
	LINE_NUMBER(1589);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastDamageTime = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	jfloat bh = frame[2].f;
	if (std::isnan(bh) || bh <= 0.0001f) bh = 1.0f;
	frame[1].f = (frame[1].f) / bh;
	if (std::isnan(frame[1].f) || std::isinf(frame[1].f) || frame[1].f < 0.0f) frame[1].f = 0.0f;
	}
label_4:;
label_6:;
	{
	LINE_NUMBER(1595);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1596);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_handleDamage_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_handleDamage_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = (temp0 - temp1);
	}
label_7:;
	{
	LINE_NUMBER(1598);
	((func_mindustry_gen_Building_healthChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_healthChanged])(ctx, (frame[0].o));
	LINE_NUMBER(1599);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_10;
	}
	{
	LINE_NUMBER(1600);
	SM_mindustry_gen_Call_buildDestroyed_mindustry_gen_Building(ctx, (frame[0].o));
	}
label_10:;
	LINE_NUMBER(1602);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damage_mindustry_game_Team_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1606);
	((func_mindustry_gen_Building_damage_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damage_float])(ctx, (frame[0].o), (frame[2].f));
	LINE_NUMBER(1607);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damageArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damageArmorMult", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1611);
	((func_mindustry_gen_Building_damageArmorMult_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damageArmorMult_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(1)));
	LINE_NUMBER(1612);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damageArmorMult_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damageArmorMult", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1616);
	((func_mindustry_gen_Building_damage_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damage_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[3].i));
	LINE_NUMBER(1617);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damageContinuous_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damageContinuous", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1621);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_hitTime), (jfloat(-1.0f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	((func_mindustry_gen_Building_damage_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damage_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].i);
	LINE_NUMBER(1622);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damageContinuousArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damageContinuousArmorMult", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1626);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	jfloat temp1 = frame[2].f;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_hitTime), (jfloat(-11.0f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 4;
	((func_mindustry_gen_Building_damageArmorMult_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damageArmorMult_float_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].i);
	LINE_NUMBER(1627);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damageContinuousPierce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damageContinuousPierce", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1631);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_hitTime), (jfloat(-11.0f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	((func_mindustry_gen_Building_damagePierce_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damagePierce_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].i);
	LINE_NUMBER(1632);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damagePierce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damagePierce", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1636);
	((func_mindustry_gen_Building_damagePierce_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damagePierce_float_boolean])(ctx, (frame[0].o), (frame[1].f), (jint(1)));
	LINE_NUMBER(1637);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_damagePierce_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:damagePierce", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1641);
	((func_mindustry_gen_Building_damage_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damage_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].i));
	LINE_NUMBER(1642);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_deselect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:deselect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1646);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_config;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building])(ctx, sp[0].o);
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(1647);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_config;
	((func_mindustry_ui_fragments_BlockConfigFragment_hideConfig) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(1649);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:display", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1653);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_gen_Building_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1657);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1658);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1659);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(1660);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_gen_Building_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1663);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1664);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1665);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_gen_Building_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1666);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_category;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_category;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_liquid;
	if (sp[0].o != sp[1].o) goto label_11;
	}
label_10:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1667);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1668);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[0].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" \u0001"_j.string, 1, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1669);
	sp[0].o = (jobject)((func_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1670);
	if ((frame[4].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1671);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1672);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1673);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_gen_Building_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_arc_func_Cons_11);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1695);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(1697);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1698);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1699);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1700);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_gen_Building_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_arc_func_Cons_12);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1722);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(1725);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastAccessed;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(1726);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1727);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"lastaccessed"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastAccessed;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(260.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_27:;
	{
	LINE_NUMBER(1729);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(-5.0f)));
	}
label_4:;
	LINE_NUMBER(1731);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:displayBars", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1735);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1736);
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[0].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ui_Bar, sp[0].o));
	LINE_NUMBER(1737);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	goto label_1;
label_5:;
	{
	LINE_NUMBER(1738);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(1739);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1740);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1741);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:displayConsumption", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1745);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1746);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1747);
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[5].o)))->F_optional) == 0) goto label_5;
	}
	{
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[5].o)))->F_booster) == 0) goto label_5;
	}
	goto label_6;
label_5:;
	{
	LINE_NUMBER(1748);
	((func_mindustry_world_consumers_Consume_build_mindustry_gen_Building_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_build_mindustry_gen_Building_arc_scene_ui_layout_Table])(ctx, (frame[5].o), (frame[0].o), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(1746);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1750);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1754);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variants) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variantRegions;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1755);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_drawrot_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_drawrot_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1757);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variantRegions;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[1].o);
	jlong temp1 = jlong(temp0);
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_variantRegions;
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp3, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	jint temp5 = (jint)SM_arc_math_Mathf_randomSeed_long_int_int_R_int(ctx, temp1, temp2, temp4);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp5);
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp7 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp8 = (jfloat)((func_mindustry_gen_Building_drawrot_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_drawrot_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp6, temp7, temp8);
	}
label_3:;
	{
	LINE_NUMBER(1759);
	((func_mindustry_gen_Building_drawTeamTop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_drawTeamTop])(ctx, (frame[0].o));
	LINE_NUMBER(1760);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawCached(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawCached", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1764);
	((func_mindustry_gen_Building_draw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_draw])(ctx, (frame[0].o));
	LINE_NUMBER(1765);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawConfigure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawConfigure", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1769);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1770);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(1771);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, temp0, temp1, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1))));
	LINE_NUMBER(1772);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1773);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawCracks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawCracks", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1777);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCracks) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) <= (7)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1778);
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1779);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_cracks;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	jfloat temp1 = jfloat(1);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_healthf_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_healthf_R_float])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint(((temp1 - temp2) * (jfloat(8.0f))))), (jint(0)), (7));
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp3));
	LINE_NUMBER(1780);
	jfloat temp4 = jfloat(0.2f);
	jfloat temp5 = jfloat(0.1f);
	jfloat temp6 = jfloat(1);
	jfloat temp7 = (jfloat)((func_mindustry_gen_Building_healthf_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_healthf_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_colorl_float_float(ctx, temp4, (temp5 + ((temp6 - temp7) * (jfloat(0.6f)))));
	LINE_NUMBER(1781);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[2].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat((((frame[1].i) % (jint(4))) * (90)))));
	LINE_NUMBER(1782);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1783);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawDisabled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawDisabled", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1787);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_scarlet;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1788);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(0.8f)));
	LINE_NUMBER(1789);
	frame[1].f = (jfloat(6.0f));
	LINE_NUMBER(1790);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), (frame[1].f));
	LINE_NUMBER(1791);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1792);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawItemSelection", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1796);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1797);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].f = (temp0 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))));
	LINE_NUMBER(1798);
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[3].f = (temp1 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))));
	LINE_NUMBER(1799);
	jfloat temp2 = jfloat(6.0f);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_fullIcon;
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_ratio_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_ratio_R_float])(ctx, sp[0].o);
	frame[4].f = (temp2 * temp3);
	LINE_NUMBER(1800);
	frame[5].f = (jfloat(6.0f));
	LINE_NUMBER(1801);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_darkGray;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(1802);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[2].f), ((frame[3].f) - (jfloat(1))), (frame[4].f), (frame[5].f));
	LINE_NUMBER(1803);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1804);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[1].o)))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	}
label_1:;
	LINE_NUMBER(1806);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawLight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1810);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightLiquid;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightLiquid;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1811);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawLiquidLight) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_lightColor;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(1812);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_visualLiquid;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
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
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_visualLiquid = temp0;
	LINE_NUMBER(1813);
	((func_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_visualLiquid));
	}
label_4:;
	LINE_NUMBER(1815);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawLiquidLight", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1819);
	if ((floatCompare((frame[2].f), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1820);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_lightColor;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1821);
	frame[4].f = (jfloat(1));
	LINE_NUMBER(1822);
	frame[5].f = (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) * (frame[4].f));
	LINE_NUMBER(1823);
	if ((floatCompare((frame[5].f), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1824);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, (((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) * (jfloat(30.0f))) * (frame[4].f)), (frame[3].o), ((frame[5].f) * (frame[2].f)));
	}
label_1:;
	LINE_NUMBER(1827);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawSelect", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1831);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_world_Block_drawOverlay_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawOverlay_float_float_int])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(1832);
	sp[0].o = (jobject)((func_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus])(ctx, (frame[0].o));
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(1833);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"rules.unitfactoryactivation.objective"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jdouble temp1 = jdouble(0);
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_state;
	sp[4].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[4].o))->F_rules;
	sp[5].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float])(ctx, sp[4].o, sp[5].o);
	jdouble temp3 = jdouble(temp2);
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_state;
	jdouble temp4 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, temp1, (temp3 - ((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[4].o))->F_tick)));
	sp[4].o = (jobject)SM_mindustry_core_UI_formatTime_float_R_java_lang_String(ctx, (jfloat(temp4)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp5 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp6 = (jfloat)((func_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, temp5, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y), (jint(0)));
	}
label_2:;
	LINE_NUMBER(1835);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawStatus", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1839);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_enableDrawStatus) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumers;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1840);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1841);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].f = ((temp0 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2)))) - (((jfloat(8.0f)) * (frame[1].f)) / (jfloat(2))));
	LINE_NUMBER(1842);
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[3].f = ((temp1 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2)))) + (((jfloat(8.0f)) * (frame[1].f)) / (jfloat(2))));
	LINE_NUMBER(1843);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(71.0f)));
	LINE_NUMBER(1844);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha2));
	LINE_NUMBER(1845);
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, (frame[2].f), (frame[3].f), ((jfloat(2.5f)) * (frame[1].f)), (jfloat(45.0f)));
	LINE_NUMBER(1846);
	sp[0].o = (jobject)((func_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_meta_BlockStatus *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha2));
	LINE_NUMBER(1847);
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, (frame[2].f), (frame[3].f), ((jfloat(1.5f)) * (frame[1].f)), (jfloat(45.0f)));
	LINE_NUMBER(1848);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_1:;
	LINE_NUMBER(1850);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawTeam(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawTeam", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1854);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1855);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block-border"_j));
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (temp0 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2)))) + (jfloat(4.0f));
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float(ctx, sp[0].o, temp1, ((temp2 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2)))) + (jfloat(4.0f))));
	LINE_NUMBER(1856);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1857);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_drawTeamTop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:drawTeamTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1861);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1862);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_teamRegion;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(1863);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(1864);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_1:;
	LINE_NUMBER(1866);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_dropped(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dropped", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1870);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dumpLiquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1874);
	((func_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(2)));
	LINE_NUMBER(1875);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dumpLiquid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1879);
	((func_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jint(-1)));
	LINE_NUMBER(1880);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:dumpLiquid", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1884);
	frame[4].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(1885);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(1,000000e-04f)), 1)) > 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1886);
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
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
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
	LINE_NUMBER(1887);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(1888);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_gen_Building_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(1889);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[5].i) + (frame[4].i);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1890);
	if ((frame[3].i) == (jint(-1))) goto label_9;
	}
	{
	jint temp0 = ((frame[3].i) + ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)) % (jint(4));
	jint temp1 = (jint)((func_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte])(ctx, (frame[0].o), (frame[6].o));
	if (temp0 == temp1) goto label_9;
	}
	goto label_10;
label_9:;
	{
	LINE_NUMBER(1891);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building])(ctx, (frame[6].o), (frame[0].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1892);
	if ((frame[6].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean])(ctx, (frame[0].o), (frame[6].o), (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1893);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	frame[7].f = (temp0 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity));
	LINE_NUMBER(1894);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[8].f = (temp1 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity));
	LINE_NUMBER(1895);
	if ((floatCompare((frame[7].f), (frame[8].f), 1)) >= 0) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[6].o;
	jfloat temp0 = (frame[8].f) - (frame[7].f);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid])(ctx, sp[0].o, sp[1].o, ((temp0 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_liquidCapacity)) / (frame[2].f)), (frame[1].o));
	}
label_10:;
	{
	LINE_NUMBER(1887);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(1898);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_eachEdge_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:eachEdge", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1902);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(1903);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1904);
	if ((frame[6].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1905);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	}
label_5:;
	{
	LINE_NUMBER(1902);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1908);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:getStackOffset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(1912);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:handleItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1916);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	LINE_NUMBER(1917);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:handleLiquid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1921);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[2].o), (frame[3].f));
	LINE_NUMBER(1922);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:handlePayload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(1926);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:handleStack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1930);
	((func_mindustry_gen_Building_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(1931);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(1932);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_handleString_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:handleString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1936);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:handleUnitPayload", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1940);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1941);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1942);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player])(ctx, (frame[1].o));
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(1944);
	((func_mindustry_gen_Unit_remove) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_remove])(ctx, (frame[1].o));
	LINE_NUMBER(1945);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1946);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_id = temp0;
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1948);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_gen_Building_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_java_lang_Runnable_6);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(1950);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload);
	init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(ctx, sp[1].o, (frame[1].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1951);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitDrop;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1952);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_heal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:heal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1957);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_dead = (jint(0));
	LINE_NUMBER(1958);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	LINE_NUMBER(1962);
	((func_mindustry_gen_Building_healthChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_healthChanged])(ctx, (frame[0].o));
	LINE_NUMBER(1964);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_heal_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:heal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1969);
	sp[0].o = frame[0].o;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health) + (frame[1].f));
	LINE_NUMBER(1970);
	((func_mindustry_gen_Building_clampHealth) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_clampHealth])(ctx, (frame[0].o));
	LINE_NUMBER(1974);
	((func_mindustry_gen_Building_healthChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_healthChanged])(ctx, (frame[0].o));
	LINE_NUMBER(1976);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_healFract_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:healFract", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1980);
	((func_mindustry_gen_Building_heal_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_heal_float])(ctx, (frame[0].o), ((frame[1].f) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth)));
	LINE_NUMBER(1981);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_healthChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:healthChanged", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1985);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1986);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	((func_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1988);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	((func_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1989);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:hitbox", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1993);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp2, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	LINE_NUMBER(1994);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_incrementDump_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:incrementDump", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1998);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1999);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_cdump = ((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_cdump) + (jint(1))) % (frame[1].i));
	}
label_1:;
	LINE_NUMBER(2001);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_itemTaken_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:itemTaken", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2005);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_kill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:kill", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2009);
	SM_mindustry_gen_Call_buildDestroyed_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(2010);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_killed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:killed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2015);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_dead = (jint(1));
	LINE_NUMBER(2016);
	clinit_mindustry_game_EventType$BlockDestroyEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockDestroyEvent);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	init_mindustry_game_EventType$BlockDestroyEvent_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(2017);
	((func_mindustry_gen_Building_onDestroyed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_onDestroyed])(ctx, (frame[0].o));
	LINE_NUMBER(2018);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_emptyTile;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(2019);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(2021);
	((func_mindustry_gen_Building_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_remove])(ctx, (frame[0].o));
	LINE_NUMBER(2022);
	((func_mindustry_gen_Building_afterDestroyed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_afterDestroyed])(ctx, (frame[0].o));
	LINE_NUMBER(2027);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_noSleep(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:noSleep", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2031);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_sleepTime = (jfloat(0));
	LINE_NUMBER(2032);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_sleeping) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2033);
	((func_mindustry_gen_Building_add) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_add])(ctx, (frame[0].o));
	LINE_NUMBER(2034);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_sleeping = (jint(0));
	LINE_NUMBER(2035);
	clinit_mindustry_gen_Building(ctx);
	SF_mindustry_gen_Building_sleepingEntities = ((clinit_mindustry_gen_Building(ctx), (jint)SF_mindustry_gen_Building_sleepingEntities) - (jint(1)));
	}
label_2:;
	LINE_NUMBER(2037);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_offload_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:offload", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2041);
	((func_mindustry_gen_Building_produced_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_produced_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(2042);
	frame[2].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_cdump);
	LINE_NUMBER(2043);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(2044);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	((func_mindustry_gen_Building_incrementDump_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_incrementDump_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(2045);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	jint temp0 = (frame[3].i) + (frame[2].i);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(2046);
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[4].o), (frame[0].o), (frame[1].o));
	if (temp1 == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2047);
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, (frame[4].o), (frame[0].o), (frame[1].o));
	LINE_NUMBER(2048);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(2043);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2051);
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, (frame[0].o), (frame[0].o), (frame[1].o));
	LINE_NUMBER(2052);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onCommand", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2056);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onConfigureClosed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onConfigureClosed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2060);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onControlSelect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2064);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onDeconstructed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2068);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_incinerable) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_deconstructDropAllLiquid) == 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2069);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp1 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].f = ((temp0 / (jfloat((temp1 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))))) * (jfloat(2)));
	LINE_NUMBER(2070);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_gen_Building_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_arc_func_Cons_13);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(2072);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onDestroyed", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2076);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].f = ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_baseExplosiveness);
	LINE_NUMBER(2077);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(2078);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(2079);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2080);
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
	LINE_NUMBER(2081);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[5].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_explosionItemCap_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_explosionItemCap_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[6].i = temp2;
	LINE_NUMBER(2082);
	frame[1].f = ((frame[1].f) + (((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[5].o)))->F_explosiveness) * (jfloat((frame[6].i)))));
	LINE_NUMBER(2083);
	frame[2].f = ((frame[2].f) + (((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[5].o)))->F_flammability) * (jfloat((frame[6].i)))));
	LINE_NUMBER(2084);
	jfloat temp3 = frame[3].f;
	jfloat temp4 = (jfloat)((mindustry_type_Item *) NULL_CHECK((frame[5].o)))->F_charge;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (jfloat((frame[6].i))), (jfloat(1.1f)));
	frame[3].f = (temp3 + ((temp4 * temp5) * (jfloat(150.0f))));
	LINE_NUMBER(2085);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(2087);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_12;
	}
	{
	LINE_NUMBER(2088);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_2(ctx);
		auto proxy = (mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_2 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_2);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = (temp0 + temp1);
	LINE_NUMBER(2089);
	jfloat temp2 = frame[1].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_3(ctx);
		auto proxy = (mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_3 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_3);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp3 = (jfloat)((func_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = (temp2 + temp3);
	}
label_12:;
	{
	LINE_NUMBER(2091);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered) == 0) goto label_15;
	}
	{
	LINE_NUMBER(2092);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	jfloat temp1 = (jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	frame[3].f = (temp0 + (temp1 * ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity)));
	}
label_15:;
	{
	LINE_NUMBER(2094);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_17;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions) == 0) goto label_17;
	}
	{
	LINE_NUMBER(2095);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1(ctx);
		auto proxy = (mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_mindustry_world_modules_LiquidModule$LiquidConsumer_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_modules_LiquidModule_each_mindustry_world_modules_LiquidModule$LiquidConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_each_mindustry_world_modules_LiquidModule$LiquidConsumer])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(2097);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = frame[2].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp3 = temp2 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flammabilityScale);
	jfloat temp4 = (frame[1].f) * (jfloat(3.5f));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp5 = temp4 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_explosivenessScale);
	jfloat temp6 = frame[3].f;
	jint temp7 = 8;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp8 = (jfloat((temp7 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) / (jfloat(2));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp9 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroyEffect;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_mindustry_entities_Effect_float(ctx, temp0, temp1, temp3, temp5, temp6, temp8, temp9, sp[0].o, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_baseShake));
	LINE_NUMBER(2098);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_createRubble) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_20;
	}
	{
	LINE_NUMBER(2099);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	SM_mindustry_entities_Effect_rubble_float_float_int(ctx, temp0, temp1, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	}
label_20:;
	{
	LINE_NUMBER(2101);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_22;
	}
	{
	LINE_NUMBER(2102);
	((func_mindustry_gen_Building_playDestroySound) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_playDestroySound])(ctx, (frame[0].o));
	LINE_NUMBER(2103);
	if ((floatCompare((frame[1].f), (jfloat(40.0f)), -1)) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(2104);
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
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	goto label_29;
	}
label_25:;
	{
	LINE_NUMBER(2105);
	if ((floatCompare((frame[2].f), (jfloat(5.0f)), -1)) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(2106);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeFlammable;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	}
label_29:;
	{
	LINE_NUMBER(2108);
	if ((floatCompare((frame[3].f), (jfloat(30000.0f)), -1)) <= 0) goto label_31;
	}
	{
	LINE_NUMBER(2109);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeElectricBig;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	goto label_22;
	}
label_31:;
	{
	LINE_NUMBER(2110);
	if ((floatCompare((frame[3].f), (jfloat(2000.0f)), -1)) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(2111);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeElectric;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	}
label_22:;
	LINE_NUMBER(2114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onNearbyBuildAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onProximityAdded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onProximityAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2122);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2123);
	((func_mindustry_gen_Building_updatePowerGraph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_updatePowerGraph])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(2125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onProximityRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onProximityRemoved", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2129);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2130);
	((func_mindustry_gen_Building_powerGraphRemoved) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_powerGraphRemoved])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(2132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onProximityUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2136);
	((func_mindustry_gen_Building_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(2137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_onRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:onRemoved", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2141);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_overwrote_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:overwrote", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_payloadDraw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:payloadDraw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2149);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[1].f = temp0;
	LINE_NUMBER(2150);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2151);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildingCacheLayer;
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_graphics_BuildingCacheLayer *) NULL_CHECK(sp[0].o))->F_layer));
	LINE_NUMBER(2152);
	((func_mindustry_gen_Building_drawCached) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_drawCached])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(2154);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawDynamic) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2155);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[1].f));
	LINE_NUMBER(2156);
	((func_mindustry_gen_Building_draw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_draw])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(2158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_pickedUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:pickedUp", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_playDestroySound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:playDestroySound", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2166);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroySound;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMin;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroyPitchMax));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_destroySoundVolume));
	LINE_NUMBER(2167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_powerGraphRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:powerGraphRemoved", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2171);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2172);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_remove_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_remove_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2173);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(2174);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2175);
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
	LINE_NUMBER(2176);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, temp0);
	}
label_7:;
	{
	LINE_NUMBER(2173);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2179);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(2180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_produced_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:produced", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2184);
	((func_mindustry_gen_Building_produced_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_produced_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(2185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_produced_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:produced", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2189);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(2190);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(2191);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_mindustry_type_Item_unlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_unlock])(ctx, sp[0].o);
label_1:;
	LINE_NUMBER(2193);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:puddleOn", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2197);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2201);
	((func_mindustry_gen_Building_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(2202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	if (!self || !param0) return;
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:readAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2206);
	tryCatch(frameRef, [&]() {
		((func_mindustry_gen_Building_readBase_arc_util_io_Reads) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_readBase_arc_util_io_Reads])(ctx, (frame[0].o), (frame[1].o));
	}, &class_java_lang_Throwable, [&](jobject) {});
	LINE_NUMBER(2207);
	tryCatch(frameRef, [&]() {
		((func_mindustry_gen_Building_read_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_read_arc_util_io_Reads_byte])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	}, &class_java_lang_Throwable, [&](jobject) {});
	LINE_NUMBER(2208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_readBase_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:readBase", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2212);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat maxH = sp[1].o ? (jfloat(((jint)((mindustry_world_Block *) sp[1].o)->F_health))) : 1000.0f;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, maxH);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = temp1;
	LINE_NUMBER(2213);
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[2].i = temp2;
	LINE_NUMBER(2214);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, temp3);
	if (!sp[1].o) {
		clinit_mindustry_game_Team(ctx);
		sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	}
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(2215);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation = ((frame[2].i) & (127));
	LINE_NUMBER(2216);
	jint temp4 = (jint)((func_mindustry_gen_Building_moduleBitmask_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_moduleBitmask_R_int])(ctx, (frame[0].o));
	frame[3].i = temp4;
	LINE_NUMBER(2217);
	frame[4].i = (jint(1));
	LINE_NUMBER(2218);
	frame[5].i = (jint(0));
	LINE_NUMBER(2219);
	if (((frame[2].i) & (128)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2220);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(2221);
	if ((frame[5].i) < (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(2222);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(2223);
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
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_enabled = sp[1].i;
label_11:;
	{
	LINE_NUMBER(2225);
	if ((frame[5].i) < (jint(2))) goto label_16;
	}
	{
	LINE_NUMBER(2226);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	}
label_16:;
	{
	LINE_NUMBER(2228);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(2230);
	if (((frame[3].i) & (jint(1))) == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
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
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_items;
label_20:;
	{
	sp -= 1;
	((func_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean])(ctx, sp[0].o, (frame[1].o), (frame[4].i));
	}
label_18:;
	{
	LINE_NUMBER(2231);
	if (((frame[3].i) & (jint(2))) == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
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
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_power;
label_23:;
	{
	sp -= 1;
	((func_mindustry_world_modules_PowerModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_PowerModule_read_arc_util_io_Reads_boolean])(ctx, sp[0].o, (frame[1].o), (frame[4].i));
	}
label_21:;
	{
	LINE_NUMBER(2232);
	if (((frame[3].i) & (jint(4))) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
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
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_liquids;
label_26:;
	{
	sp -= 1;
	((func_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean])(ctx, sp[0].o, (frame[1].o), (frame[4].i));
	}
label_24:;
	{
	LINE_NUMBER(2233);
	if (((frame[3].i) & (16)) == 0) goto label_27;
	}
	{
	LINE_NUMBER(2234);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_timeScale = temp0;
	LINE_NUMBER(2235);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_timeScaleDuration = temp1;
	}
label_27:;
	{
	LINE_NUMBER(2237);
	if (((frame[3].i) & (32)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(2238);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[1].o, temp0);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastDisabler = (jref) sp[1].o;
	}
label_30:;
	{
	LINE_NUMBER(2240);
	if ((frame[5].i) > (jint(2))) goto label_32;
	}
	{
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	}
label_32:;
	{
	LINE_NUMBER(2241);
	if ((frame[5].i) < (jint(3))) goto label_33;
	}
	{
	LINE_NUMBER(2242);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat(temp0)) / (jfloat(255.0f));
	((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_potentialEfficiency = temp1;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_efficiency = temp1;
	LINE_NUMBER(2243);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_optionalEfficiency = ((jfloat(temp4)) / (jfloat(255.0f)));
	}
label_33:;
	{
	LINE_NUMBER(2245);
	if ((frame[5].i) != (jint(4))) goto label_36;
	}
	{
	LINE_NUMBER(2246);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_arc_util_io_Reads_l_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_l_R_long])(ctx, (frame[1].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_visibleFlags = temp0;
	}
label_36:;
	LINE_NUMBER(2248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:readSync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2252);
	((func_mindustry_gen_Building_readAll_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_readAll_arc_util_io_Reads_byte])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(2253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_recache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:recache", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2257);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_buildingCacheLayer;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(2258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_recentlyHealed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:recentlyHealed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2262);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastHealTime = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	LINE_NUMBER(2263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2266);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2267);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_build;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_index__build));
	LINE_NUMBER(2268);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_index__build = (jint(-1));
	LINE_NUMBER(2270);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(2271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_removeFromProximity(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:removeFromProximity", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2275);
	((func_mindustry_gen_Building_onProximityRemoved) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_onProximityRemoved])(ctx, (frame[0].o));
	LINE_NUMBER(2276);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building_tmpTiles;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(2277);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2278);
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
	LINE_NUMBER(2279);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2280);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2281);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building_tmpTiles;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	}
label_8:;
	{
	LINE_NUMBER(2278);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2284);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building_tmpTiles;
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
	LINE_NUMBER(2285);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_proximity;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	LINE_NUMBER(2286);
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, (frame[3].o));
	LINE_NUMBER(2287);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(2288);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(2289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2293);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Building_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2298);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(2299);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(2300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:setProp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(2304);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2305);
	frame[6].i = (jint((frame[2].d)));
	LINE_NUMBER(2306);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(2307);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[4].o));
	if (temp0 >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(2308);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[4].o;
	jint temp0 = frame[6].i;
	sp[4].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[4].o, (frame[4].o));
	jint temp2 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[2].o, sp[3].o, (temp0 - temp1), (jobject(nullptr)));
	((func_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc])(ctx, sp[0].o, sp[1].o, temp2, (jobject(nullptr)));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(2309);
	if ((frame[6].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(2310);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[4].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int])(ctx, sp[0].o, sp[1].o, (temp0 - (frame[6].i)));
	}
label_5:;
	LINE_NUMBER(2313);
	goto label_10;
label_1:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Liquid)) == 0) goto label_10;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Liquid, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(2314);
	jfloat temp0 = jfloat((frame[2].d));
	jfloat temp1 = jfloat(0);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity));
	frame[6].f = temp2;
	LINE_NUMBER(2315);
	jfloat temp3 = frame[6].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp4 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[5].o));
	if ((floatCompare(temp3, temp4, 1)) < 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean])(ctx, (frame[0].o), (frame[0].o), (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	if (sp[0].o == (frame[5].o)) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0.1f)), 1)) <= 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(2316);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[5].o), (frame[6].f));
	}
label_10:;
	LINE_NUMBER(2319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:setProp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(2323);
	clinit_mindustry_gen_Building$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(2325);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_arc_math_Mathf_clamp_double_double_double_R_double(ctx, (frame[2].d), (jdouble(0)), (jdouble(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_maxHealth))));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = (jfloat(temp0));
	LINE_NUMBER(2326);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_6;
	}
	{
	LINE_NUMBER(2327);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_4;
	}
	{
	SM_mindustry_gen_Call_buildDestroyed_mindustry_gen_Building(ctx, (frame[0].o));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(2329);
	((func_mindustry_gen_Building_healthChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_healthChanged])(ctx, (frame[0].o));
	LINE_NUMBER(2331);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(2333);
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (jint((frame[2].d))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2334);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == (frame[4].o)) goto label_10;
	}
	{
	LINE_NUMBER(2335);
	((func_mindustry_gen_Building_changeTeam_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team])(ctx, (frame[0].o), (frame[4].o));
	}
label_10:;
	LINE_NUMBER(2337);
	goto label_4;
label_3:;
	{
	LINE_NUMBER(2339);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2340);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	jdouble temp0 = frame[2].d;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_consPower;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (jfloat((temp0 / (jdouble(((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[1].o))->F_capacity)))))));
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = temp1;
	}
label_4:;
	LINE_NUMBER(2344);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:setProp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2348);
	clinit_mindustry_gen_Building$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 6: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(2350);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_game_Team)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Team, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == (frame[3].o)) goto label_2;
	}
	{
	LINE_NUMBER(2351);
	((func_mindustry_gen_Building_changeTeam_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team])(ctx, (frame[0].o), (frame[3].o));
	}
label_2:;
	LINE_NUMBER(2355);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_sleep(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:sleep", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2359);
	sp[0].o = frame[0].o;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_sleepTime = (((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_sleepTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(2360);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_sleeping) != 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_sleepTime), (jfloat(60.0f)), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(2361);
	((func_mindustry_gen_Building_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_remove])(ctx, (frame[0].o));
	LINE_NUMBER(2362);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_sleeping = (jint(1));
	LINE_NUMBER(2363);
	clinit_mindustry_gen_Building(ctx);
	SF_mindustry_gen_Building_sleepingEntities = ((clinit_mindustry_gen_Building(ctx), (jint)SF_mindustry_gen_Building_sleepingEntities) + (jint(1)));
	}
label_2:;
	LINE_NUMBER(2365);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:splashLiquid", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2369);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[2].f) / (jfloat(4.0f))), (jfloat(0)), (jfloat(10.0f)));
	frame[3].f = temp0;
	LINE_NUMBER(2370);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	jfloat temp0 = jfloat((frame[4].i));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[2].f) / (jfloat(5.0f))), (jfloat(0)), (jfloat(30.0f)));
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(2371);
	jfloat temp0 = (jfloat((frame[4].i))) / (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_gen_Building_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_java_lang_Runnable_7);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(2370);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(2378);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_tapped(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:tapped", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2382);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:transferLiquid", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2386);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[3].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 - temp1), (frame[2].f));
	frame[4].f = temp2;
	LINE_NUMBER(2387);
	jint temp3 = (jint)((func_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean])(ctx, (frame[1].o), (frame[0].o), (frame[3].o));
	if (temp3 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2388);
	((func_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float])(ctx, (frame[1].o), (frame[0].o), (frame[3].o), (frame[4].f));
	LINE_NUMBER(2389);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[3].o), (frame[4].f));
	}
label_2:;
	LINE_NUMBER(2391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2395);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Building_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2400);
	((func_mindustry_gen_Building_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(2401);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_unitOn_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:unitOn", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2405);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:unitOnAny", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2409);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:unitRemoved", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2413);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2417);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_timeScaleDuration) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_timeScaleDuration = temp0;
	if ((floatCompare(temp0, (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(2418);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale = (jfloat(1));
	}
label_1:;
	{
	LINE_NUMBER(2420);
	((func_mindustry_gen_Building_updateConsumption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_updateConsumption])(ctx, (frame[0].o));
	LINE_NUMBER(2421);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_noUpdateDisabled) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(2422);
	((func_mindustry_gen_Building_updateTile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_updateTile])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(2424);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_updateConsumption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:updateConsumption", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2428);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasConsumers) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_cheating_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_cheating_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2429);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_productionValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_productionValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	INST_FCONST(1);
	goto label_4;
label_3:;
	INST_FCONST(0);
label_4:;
	{
	sp -= 2;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_potentialEfficiency = sp[1].f;
	LINE_NUMBER(2430);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_shouldConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_shouldConsume_R_boolean])(ctx, (frame[0].o));
	sp += 2;
	if (temp0 == 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency;
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 3;
	((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_optionalEfficiency = sp[2].f;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_efficiency = sp[2].f;
	LINE_NUMBER(2431);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_shouldConsumePower = (jint(1));
	LINE_NUMBER(2432);
	((func_mindustry_gen_Building_updateEfficiencyMultiplier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_updateEfficiencyMultiplier])(ctx, (frame[0].o));
	LINE_NUMBER(2433);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(2435);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_11;
	}
	{
	LINE_NUMBER(2436);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_gen_Building *) NULL_CHECK(sp[2].o))->F_optionalEfficiency = temp0;
	((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_efficiency = temp0;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_potentialEfficiency = temp0;
	LINE_NUMBER(2437);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_shouldConsumePower = (jint(0));
	LINE_NUMBER(2438);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(2440);
	jint temp0 = (jint)((func_mindustry_gen_Building_shouldConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_shouldConsume_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_productionValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_productionValid_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(2441);
	frame[2].f = (jfloat(1));
	LINE_NUMBER(2442);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_optionalEfficiency = temp0;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_efficiency = temp0;
	LINE_NUMBER(2443);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_shouldConsumePower = (jint(1));
	LINE_NUMBER(2444);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(2445);
	jfloat temp0 = (jfloat)((func_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float])(ctx, (frame[6].o), (frame[0].o));
	frame[7].f = temp0;
	LINE_NUMBER(2446);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_consPower;
	if (sp[0].o == sp[1].o) goto label_25;
	}
	{
	if ((floatCompare((frame[7].f), (jfloat(1,000000e-07f)), 1)) > 0) goto label_25;
	}
	{
	LINE_NUMBER(2447);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_shouldConsumePower = (jint(0));
	}
label_25:;
	{
	LINE_NUMBER(2449);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[2].f), (frame[7].f));
	frame[2].f = temp0;
	LINE_NUMBER(2444);
	INST_IINC(5, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(2451);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(2452);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_optionalEfficiency;
	jfloat temp1 = (jfloat)((func_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float])(ctx, (frame[6].o), (frame[0].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_optionalEfficiency = temp2;
	LINE_NUMBER(2451);
	INST_IINC(5, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(2454);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency = (frame[2].f);
	LINE_NUMBER(2455);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_optionalEfficiency), (frame[2].f));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_optionalEfficiency = temp0;
	LINE_NUMBER(2456);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency);
	LINE_NUMBER(2457);
	if ((frame[1].i) != 0) goto label_35;
	}
	{
	LINE_NUMBER(2458);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_optionalEfficiency = temp0;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_efficiency = temp0;
	}
label_35:;
	{
	LINE_NUMBER(2460);
	((func_mindustry_gen_Building_updateEfficiencyMultiplier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_updateEfficiencyMultiplier])(ctx, (frame[0].o));
	LINE_NUMBER(2461);
	if ((frame[1].i) == 0) goto label_38;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_38;
	}
	{
	LINE_NUMBER(2462);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
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
	LINE_NUMBER(2463);
	((func_mindustry_world_consumers_Consume_update_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_update_mindustry_gen_Building])(ctx, (frame[6].o), (frame[0].o));
	LINE_NUMBER(2462);
	INST_IINC(5, 1);
	goto label_40;
	}
label_38:;
	LINE_NUMBER(2466);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_updateEfficiencyMultiplier(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:updateEfficiencyMultiplier", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2470);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_efficiencyScale_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_efficiencyScale_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(2471);
	sp[0].o = frame[0].o;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_efficiency = (((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_efficiency) * (frame[1].f));
	LINE_NUMBER(2472);
	sp[0].o = frame[0].o;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_optionalEfficiency = (((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_optionalEfficiency) * (frame[1].f));
	LINE_NUMBER(2473);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_updateFogVisibility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:updateFogVisibility", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2477);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_wasVisible) != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2478);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_visibleFlags;
	jlong temp1 = jlong(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_visibleFlags = (temp0 | (temp1 << ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id)));
	LINE_NUMBER(2479);
	((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_wasVisible = (jint(1));
	LINE_NUMBER(2480);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2481);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2482);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_gen_Building_recache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_recache])(ctx, sp[0].o);
label_1:;
	LINE_NUMBER(2484);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:updateLastAccess", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2488);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, (frame[1].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastAccessed = (jref) sp[1].o;
	LINE_NUMBER(2489);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:updatePayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2493);
	((func_mindustry_gen_Building_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_update])(ctx, (frame[0].o));
	LINE_NUMBER(2494);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_updatePowerGraph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:updatePowerGraph", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2498);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Building(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Building_tempBuilds;
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
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
	LINE_NUMBER(2499);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2500);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(2502);
	goto label_1;
label_2:;
	LINE_NUMBER(2503);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_updateProximity(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:updateProximity", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	syncBuildingOuterBlock((frame[0].o), ((mindustry_gen_Building *) frame[0].o)->F_block);
	{
	LINE_NUMBER(2507);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building_tmpTiles;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(2508);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(2509);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2510);
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
	LINE_NUMBER(2511);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2512);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	goto label_8;
label_9:;
	{
	LINE_NUMBER(2513);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_proximity;
	jint temp0 = (jint)((func_arc_struct_Seq_addUnique_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addUnique_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2514);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building_tmpTiles;
	jint temp1 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	}
label_8:;
	{
	LINE_NUMBER(2510);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2516);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building_tmpTiles;
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
	LINE_NUMBER(2517);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(2518);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(2519);
	((func_mindustry_gen_Building_onProximityAdded) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_onProximityAdded])(ctx, (frame[0].o));
	LINE_NUMBER(2520);
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(2521);
	clinit_mindustry_gen_Building(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Building_tmpTiles;
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
	if (frame[3].o) {
		syncBuildingOuterBlock((frame[3].o), ((mindustry_gen_Building *) frame[3].o)->F_block);
	}
	LINE_NUMBER(2522);
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, (frame[3].o));
	LINE_NUMBER(2523);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(2524);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_drawCached) == 0) goto label_21;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_gen_Building_recache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_recache])(ctx, sp[0].o);
label_21:;
	LINE_NUMBER(2525);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:updateTableAlign", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2529);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((temp1 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2)))) - (jfloat(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2530);
	sp[0].o = frame[1].o;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp3 = temp2 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft);
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, sp[0].o, temp3, (temp4 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom)), (jint(2)));
	LINE_NUMBER(2531);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:updateTile", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2535);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_writeAll_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	if (!self || !param0) return;
	auto b = (mindustry_gen_Building *) self;
	if (!b->F_team) {
		clinit_mindustry_game_Team(ctx);
		b->F_team = (jref) SF_mindustry_game_Team_sharded;
	}

	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:writeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2539);
	tryCatch(frameRef, [&]() {
		((func_mindustry_gen_Building_writeBase_arc_util_io_Writes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_writeBase_arc_util_io_Writes])(ctx, (frame[0].o), (frame[1].o));
	}, &class_java_lang_Throwable, [&](jobject) {});
	LINE_NUMBER(2540);
	tryCatch(frameRef, [&]() {
		((func_mindustry_gen_Building_write_arc_util_io_Writes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_write_arc_util_io_Writes])(ctx, (frame[0].o), (frame[1].o));
	}, &class_java_lang_Throwable, [&](jobject) {});
	LINE_NUMBER(2541);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_writeBase_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:writeBase", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	auto selfBuild = (mindustry_gen_Building *) self;
	if (!selfBuild->F_team) {
		clinit_mindustry_game_Team(ctx);
		selfBuild->F_team = (jref) SF_mindustry_game_Team_sharded;
	}
	{
	LINE_NUMBER(2545);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = sp[0].o ? (jobject)((mindustry_core_GameState *) sp[0].o)->F_rules : nullptr;
	if (!sp[0].o || ((jint)((mindustry_game_Rules *) sp[0].o)->F_fog) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_visibleFlags), (jlong(0)))) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(2546);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_health));
	LINE_NUMBER(2547);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) | (128)));
	LINE_NUMBER(2548);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint teamId = sp[1].o ? ((jint)((mindustry_game_Team *) sp[1].o)->F_id) : 1;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, teamId);
	LINE_NUMBER(2549);
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
	LINE_NUMBER(2550);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(2551);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_moduleBitmask_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_moduleBitmask_R_int])(ctx, (frame[0].o));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(2552);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_write_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	}
label_14:;
	{
	LINE_NUMBER(2553);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	((func_mindustry_world_modules_PowerModule_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_PowerModule_write_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	}
label_15:;
	{
	LINE_NUMBER(2554);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_write_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_write_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	}
label_16:;
	{
	LINE_NUMBER(2555);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale), (jfloat(1)), -1)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(2556);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale));
	LINE_NUMBER(2557);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScaleDuration));
	}
label_17:;
	{
	LINE_NUMBER(2559);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(2560);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_lastDisabler;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, sp[1].o);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	}
label_20:;
	{
	LINE_NUMBER(2562);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte((jint((temp0 * (jfloat(255.0f))))))));
	LINE_NUMBER(2563);
	sp[0].o = frame[1].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_optionalEfficiency));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte((jint((temp1 * (jfloat(255.0f))))))));
	LINE_NUMBER(2564);
	if ((frame[2].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(2565);
	((func_arc_util_io_Writes_l_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_l_long])(ctx, (frame[1].o), ((jlong)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_visibleFlags));
	}
label_24:;
	LINE_NUMBER(2567);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:writeSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2571);
	((func_mindustry_gen_Building_writeAll_arc_util_io_Writes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_writeAll_arc_util_io_Writes])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$splashLiquid$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2372);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp1 = (jint)SM_arc_math_Mathf_range_int_R_int(ctx, ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)) / (jint(2))));
	jfloat temp2 = temp0 + (jfloat(temp1));
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp4 = (jint)SM_arc_math_Mathf_range_int_R_int(ctx, ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)) / (jint(2))));
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp2, (temp3 + (jfloat(temp4))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2373);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2374);
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, (frame[3].o), (frame[1].o), (frame[2].f));
	}
label_2:;
	LINE_NUMBER(2376);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_gen_Building_lambda$onDestroyed$1_mindustry_type_Liquid_float_R_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$onDestroyed$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(2089);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_explosiveness) * (frame[1].f)) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_gen_Building_lambda$onDestroyed$0_mindustry_type_Liquid_float_R_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$onDestroyed$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(2088);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_flammability) * (frame[1].f)) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$onDeconstructed$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2070);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[1].o);
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Building_lambda$handleUnitPayload$0_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$handleUnitPayload$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1948);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_id = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$6", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1701);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1702);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_gen_Building_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_java_lang_Runnable_8);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(1713);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(1714);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_gen_Building_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_java_lang_Runnable_9);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1722);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$9", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1715);
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
	LINE_NUMBER(1716);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jint temp0 = (jint)((func_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1717);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[1].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id));
	LINE_NUMBER(1718);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(1720);
	goto label_1;
label_2:;
	LINE_NUMBER(1721);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$7", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1703);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(1704);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1705);
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
	LINE_NUMBER(1706);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jint temp0 = (jint)((func_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean])(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1707);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(1708);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_gen_Building_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_arc_func_Prov_2);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1709);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_6:;
	LINE_NUMBER(1711);
	goto label_3;
label_4:;
	LINE_NUMBER(1712);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1708);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"..."_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
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

void SM_mindustry_gen_Building_lambda$display$2_mindustry_world_modules_ItemModule_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1674);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1675);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_gen_Building_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_java_lang_Runnable_10);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(1686);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(1687);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_gen_Building_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_java_lang_Runnable_11);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1695);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Building_lambda$display$5_mindustry_world_modules_ItemModule_arc_struct_Bits_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$5", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1688);
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
	LINE_NUMBER(1689);
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1690);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[1].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id));
	LINE_NUMBER(1691);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(1693);
	goto label_1;
label_2:;
	LINE_NUMBER(1694);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Building_lambda$display$3_arc_scene_ui_layout_Table_mindustry_world_modules_ItemModule_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1676);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(1677);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	LINE_NUMBER(1678);
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
	LINE_NUMBER(1679);
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean])(ctx, (frame[1].o), (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1680);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[4].o)))->F_uiIcon;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(1681);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Building_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_gen_Building_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_gen_Building_invoke_arc_func_Prov_3);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1682);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(1684);
	goto label_3;
label_4:;
	LINE_NUMBER(1685);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_Building_lambda$display$4_mindustry_world_modules_ItemModule_mindustry_type_Item_java_lang_String_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1681);
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

void M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1661);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(18.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(1662);
	((func_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1663);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$display$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1654);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(1655);
	sp[0].o = frame[1].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((func_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion])(ctx, sp[2].o, sp[3].o);
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(1656);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(190.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(1657);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:lambda$placed$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_1;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_gen_Building_configureAny_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configureAny_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(444);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_gen_Building(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_Building_hitDuration = jfloat(9.0f);
	SF_mindustry_gen_Building_recentDamageTime = jfloat(300.0f);
	SF_mindustry_gen_Building_timeToSleep = jfloat(60.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Building:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Building(ctx);
	{
	LINE_NUMBER(111);
	clinit_mindustry_game_EventType$BuildDamageEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildDamageEvent);
	init_mindustry_game_EventType$BuildDamageEvent(ctx, sp[0].o);
	clinit_mindustry_gen_Building(ctx);
	SF_mindustry_gen_Building_bulletDamageEvent = sp[0].o;
	LINE_NUMBER(117);
	clinit_mindustry_gen_Building(ctx);
	SF_mindustry_gen_Building_sleepingEntities = (jint(0));
	LINE_NUMBER(119);
	clinit_mindustry_game_EventType$BuildTeamChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildTeamChangeEvent);
	init_mindustry_game_EventType$BuildTeamChangeEvent(ctx, sp[0].o);
	clinit_mindustry_gen_Building(ctx);
	SF_mindustry_gen_Building_teamChangeEvent = sp[0].o;
	LINE_NUMBER(121);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_gen_Building(ctx);
	SF_mindustry_gen_Building_tempBuilds = sp[0].o;
	LINE_NUMBER(125);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_gen_Building(ctx);
	SF_mindustry_gen_Building_tmpTiles = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Building;
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

	{ // Field items
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastDisabler
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[26]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field liquids
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field power
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[32]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method back
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method buildOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method front
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method left
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method right
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getCommandPosition
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method config
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getPayloads
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method findClosestEdge
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tileOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getPayload
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method takePayload
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestEnemyCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[198]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[240]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[241]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[242]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[243]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[244]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[245]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[246]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[247]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[248]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[249]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[250]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[251]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[252]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[253]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[254]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[255]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[256]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[257]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[258]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[259]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[260]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[261]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[262]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[263]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[264]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[265]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[266]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[267]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[268]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[269]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[270]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[271]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[272]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[273]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[274]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[275]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[276]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[277]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[278]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[279]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[280]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[281]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[282]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[283]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[284]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[285]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[286]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[287]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[288]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[289]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[290]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[291]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[292]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[293]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[294]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[295]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[296]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[297]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[298]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[299]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_gen_Building[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Building_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Building_getX_R_float,
	(void *) M_mindustry_gen_Building_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_isValid_R_boolean,
	(void *) M_mindustry_gen_Building_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_gen_Building_getAmbientVolume_R_float,
	(void *) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_gen_Building_hitSize_R_float,
	(void *) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Building_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_isAdded_R_boolean,
	(void *) M_mindustry_gen_Building_isLocal_R_boolean,
	(void *) M_mindustry_gen_Building_isRemote_R_boolean,
	(void *) M_mindustry_gen_Building_serialize_R_boolean,
	(void *) M_mindustry_gen_Building_classId_R_int,
	(void *) M_mindustry_gen_Building_id_R_int,
	(void *) M_mindustry_gen_Building_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_gen_Building_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onSolid_R_boolean,
	(void *) M_mindustry_gen_Building_x_R_float,
	(void *) M_mindustry_gen_Building_y_R_float,
	(void *) M_mindustry_gen_Building_tileX_R_int,
	(void *) M_mindustry_gen_Building_tileY_R_int,
	(void *) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_set_float_float,
	(void *) M_mindustry_gen_Building_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_trns_float_float,
	(void *) M_mindustry_gen_Building_x_float,
	(void *) M_mindustry_gen_Building_y_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_Building_damagePierce_float,
	(void *) M_mindustry_gen_Building_damagePierce_float_boolean,
	(void *) M_mindustry_gen_Building_healFract_float,
	(void *) M_mindustry_gen_Building_heal_float,
	(void *) M_mindustry_gen_Building_damaged_R_boolean,
	(void *) M_mindustry_gen_Building_dead_R_boolean,
	(void *) M_mindustry_gen_Building_health_R_float,
	(void *) M_mindustry_gen_Building_healthf_R_float,
	(void *) M_mindustry_gen_Building_hitTime_R_float,
	(void *) M_mindustry_gen_Building_maxHealth_R_float,
	(void *) M_mindustry_gen_Building_clampHealth,
	(void *) M_mindustry_gen_Building_damage_float,
	(void *) M_mindustry_gen_Building_damage_float_boolean,
	(void *) M_mindustry_gen_Building_damageContinuous_float,
	(void *) M_mindustry_gen_Building_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Building_dead_boolean,
	(void *) M_mindustry_gen_Building_heal,
	(void *) M_mindustry_gen_Building_health_float,
	(void *) M_mindustry_gen_Building_hitTime_float,
	(void *) M_mindustry_gen_Building_kill,
	(void *) M_mindustry_gen_Building_killed,
	(void *) M_mindustry_gen_Building_maxHealth_float,
	(void *) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_cheating_R_boolean,
	(void *) M_mindustry_gen_Building_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Building_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Building_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_configTapped_R_boolean,
	(void *) M_mindustry_gen_Building_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_gen_Building_dump_R_boolean,
	(void *) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_inMapArea_R_boolean,
	(void *) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isCommandable_R_boolean,
	(void *) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isHealSuppressed_R_boolean,
	(void *) M_mindustry_gen_Building_isInsulated_R_boolean,
	(void *) M_mindustry_gen_Building_isPayload_R_boolean,
	(void *) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_gen_Building_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
	(void *) M_mindustry_gen_Building_playDestroySound,
	(void *) M_mindustry_gen_Building_powerGraphRemoved,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item_int,
	(void *) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_readBase_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_recache,
	(void *) M_mindustry_gen_Building_recentlyHealed,
	(void *) M_mindustry_gen_Building_removeFromProximity,
	(void *) M_mindustry_gen_Building_sleep,
	(void *) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_tapped,
	(void *) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_updateConsumption,
	(void *) M_mindustry_gen_Building_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_updateTile,
	(void *) M_mindustry_gen_Building_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
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
	{ "isValid", "()Z" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
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
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
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
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
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
	{ "setIndex__build", "(I)V" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "config", "()Ljava/lang/Object;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "onRepaired", "()V" },
	{ "placed", "()V" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "absorbLasers", "()Z" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "allowDeposit", "()Z" },
	{ "allowUpdate", "()Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "canConsume", "()Z" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "canPickup", "()Z" },
	{ "canResupply", "()Z" },
	{ "canUnload", "()Z" },
	{ "canWithdraw", "()Z" },
	{ "checkSolid", "()Z" },
	{ "checkSuppression", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "configTapped", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "inMapArea", "()Z" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "isCommandable", "()Z" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "isHealSuppressed", "()Z" },
	{ "isInsulated", "()Z" },
	{ "isPayload", "()Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "payloadCheck", "(I)Z" },
	{ "productionValid", "()Z" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "shouldConsume", "()Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeTo", "(II)B" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "version", "()B" },
	{ "ambientVolume", "()F" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "delta", "()F" },
	{ "drawrot", "()F" },
	{ "edelta", "()F" },
	{ "efficiencyScale", "()F" },
	{ "fogRadius", "()F" },
	{ "getDisplayEfficiency", "()F" },
	{ "getPowerProduction", "()F" },
	{ "getProgressIncrease", "(F)F" },
	{ "handleDamage", "(F)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "progress", "()F" },
	{ "rotdeg", "()F" },
	{ "timeScale", "()F" },
	{ "totalProgress", "()F" },
	{ "warmup", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "explosionItemCap", "()I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "moduleBitmask", "()I" },
	{ "pos", "()I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "afterDestroyed", "()V" },
	{ "afterPickedUp", "()V" },
	{ "applyBoost", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "applySlowdown", "(FF)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "checkAllowUpdate", "()V" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "consume", "()V" },
	{ "created", "()V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "deselect", "()V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "drawConfigure", "()V" },
	{ "drawCracks", "()V" },
	{ "drawDisabled", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawSelect", "()V" },
	{ "drawStatus", "()V" },
	{ "drawTeam", "()V" },
	{ "drawTeamTop", "()V" },
	{ "dropped", "()V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "healthChanged", "()V" },
	{ "incrementDump", "(I)V" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "noSleep", "()V" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "onConfigureClosed", "()V" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "onRemoved", "()V" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "payloadDraw", "()V" },
	{ "pickedUp", "()V" },
	{ "playDestroySound", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "recache", "()V" },
	{ "recentlyHealed", "()V" },
	{ "removeFromProximity", "()V" },
	{ "sleep", "()V" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "tapped", "()V" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "updateConsumption", "()V" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updatePowerGraph", "()V" },
	{ "updateProximity", "()V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTile", "()V" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Buildingc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Healthc, &class_mindustry_gen_IndexableEntity__build, &class_mindustry_gen_Posc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Timerc, };

static FieldMetadata fields[] {
	{ "bulletDamageEvent", &class_mindustry_game_EventType$BuildDamageEvent, (intptr_t) &SF_mindustry_gen_Building_bulletDamageEvent, "Lmindustry/game/EventType$BuildDamageEvent;", 25 },
	{ "hitDuration", &class_float, (intptr_t) &SF_mindustry_gen_Building_hitDuration, "F", 25 },
	{ "recentDamageTime", &class_float, (intptr_t) &SF_mindustry_gen_Building_recentDamageTime, "F", 25 },
	{ "sleepingEntities", &class_int, (intptr_t) &SF_mindustry_gen_Building_sleepingEntities, "I", 9 },
	{ "teamChangeEvent", &class_mindustry_game_EventType$BuildTeamChangeEvent, (intptr_t) &SF_mindustry_gen_Building_teamChangeEvent, "Lmindustry/game/EventType$BuildTeamChangeEvent;", 25 },
	{ "tempBuilds", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_gen_Building_tempBuilds, "Larc/struct/Seq;", 25 },
	{ "timeToSleep", &class_float, (intptr_t) &SF_mindustry_gen_Building_timeToSleep, "F", 25 },
	{ "tmpTiles", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_gen_Building_tmpTiles, "Larc/struct/ObjectSet;", 25 },
	{ "added", &class_boolean, offsetof(mindustry_gen_Building, F_added), "Z", 132 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_gen_Building, F_block), "Lmindustry/world/Block;", 129 },
	{ "cdump", &class_int, offsetof(mindustry_gen_Building, F_cdump), "I", 129 },
	{ "dead", &class_boolean, offsetof(mindustry_gen_Building, F_dead), "Z", 129 },
	{ "dumpAccum", &class_float, offsetof(mindustry_gen_Building, F_dumpAccum), "F", 132 },
	{ "efficiency", &class_float, offsetof(mindustry_gen_Building, F_efficiency), "F", 129 },
	{ "enabled", &class_boolean, offsetof(mindustry_gen_Building, F_enabled), "Z", 129 },
	{ "healSuppressionTime", &class_float, offsetof(mindustry_gen_Building, F_healSuppressionTime), "F", 129 },
	{ "health", &class_float, offsetof(mindustry_gen_Building, F_health), "F", 1 },
	{ "hitTime", &class_float, offsetof(mindustry_gen_Building, F_hitTime), "F", 129 },
	{ "id", &class_int, offsetof(mindustry_gen_Building, F_id), "I", 129 },
	{ "index__build", &class_int, offsetof(mindustry_gen_Building, F_index__build), "I", 132 },
	{ "indexerBuildIndex", &class_short, offsetof(mindustry_gen_Building, F_indexerBuildIndex), "S", 129 },
	{ "indexerBuildTypeIndex", &class_short, offsetof(mindustry_gen_Building, F_indexerBuildTypeIndex), "S", 129 },
	{ "initialized", &class_boolean, offsetof(mindustry_gen_Building, F_initialized), "Z", 132 },
	{ "items", &class_mindustry_world_modules_ItemModule, offsetof(mindustry_gen_Building, F_items), "Lmindustry/world/modules/ItemModule;", 1 },
	{ "lastAccessed", &class_java_lang_String, offsetof(mindustry_gen_Building, F_lastAccessed), "Ljava/lang/String;", 129 },
	{ "lastDamageTime", &class_float, offsetof(mindustry_gen_Building, F_lastDamageTime), "F", 132 },
	{ "lastDisabler", &class_mindustry_gen_Building, offsetof(mindustry_gen_Building, F_lastDisabler), "Lmindustry/gen/Building;", 129 },
	{ "lastHealTime", &class_float, offsetof(mindustry_gen_Building, F_lastHealTime), "F", 129 },
	{ "liquids", &class_mindustry_world_modules_LiquidModule, offsetof(mindustry_gen_Building, F_liquids), "Lmindustry/world/modules/LiquidModule;", 1 },
	{ "maxHealth", &class_float, offsetof(mindustry_gen_Building, F_maxHealth), "F", 129 },
	{ "optionalEfficiency", &class_float, offsetof(mindustry_gen_Building, F_optionalEfficiency), "F", 129 },
	{ "potentialEfficiency", &class_float, offsetof(mindustry_gen_Building, F_potentialEfficiency), "F", 129 },
	{ "power", &class_mindustry_world_modules_PowerModule, offsetof(mindustry_gen_Building, F_power), "Lmindustry/world/modules/PowerModule;", 1 },
	{ "proximity", &class_arc_struct_Seq, offsetof(mindustry_gen_Building, F_proximity), "Larc/struct/Seq;", 129 },
	{ "rotation", &class_int, offsetof(mindustry_gen_Building, F_rotation), "I", 129 },
	{ "shouldConsumePower", &class_boolean, offsetof(mindustry_gen_Building, F_shouldConsumePower), "Z", 129 },
	{ "sleepTime", &class_float, offsetof(mindustry_gen_Building, F_sleepTime), "F", 132 },
	{ "sleeping", &class_boolean, offsetof(mindustry_gen_Building, F_sleeping), "Z", 132 },
	{ "suppressColor", &class_arc_graphics_Color, offsetof(mindustry_gen_Building, F_suppressColor), "Larc/graphics/Color;", 129 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_gen_Building, F_team), "Lmindustry/game/Team;", 1 },
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_gen_Building, F_tile), "Lmindustry/world/Tile;", 129 },
	{ "timeScale", &class_float, offsetof(mindustry_gen_Building, F_timeScale), "F", 132 },
	{ "timeScaleDuration", &class_float, offsetof(mindustry_gen_Building, F_timeScaleDuration), "F", 132 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_gen_Building, F_timer), "Larc/util/Interval;", 129 },
	{ "visibleFlags", &class_long, offsetof(mindustry_gen_Building, F_visibleFlags), "J", 129 },
	{ "visualLiquid", &class_float, offsetof(mindustry_gen_Building, F_visualLiquid), "F", 129 },
	{ "wasDamaged", &class_boolean, offsetof(mindustry_gen_Building, F_wasDamaged), "Z", 129 },
	{ "wasVisible", &class_boolean, offsetof(mindustry_gen_Building, F_wasVisible), "Z", 129 },
	{ "x", &class_float, offsetof(mindustry_gen_Building, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_Building, F_y), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Building, 0, "()V", 4 },
	{ "back", (intptr_t) M_mindustry_gen_Building_back_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_back_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "buildOn", (intptr_t) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "front", (intptr_t) M_mindustry_gen_Building_front_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_front_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "left", (intptr_t) M_mindustry_gen_Building_left_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_left_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "right", (intptr_t) M_mindustry_gen_Building_right_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_right_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "getCommandPosition", (intptr_t) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2, VTABLE_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "config", (intptr_t) M_mindustry_gen_Building_config_R_java_lang_Object, VTABLE_mindustry_gen_Building_config_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getPayloads", (intptr_t) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq, VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq, "()Lmindustry/type/PayloadSeq;", 1 },
	{ "findClosestEdge", (intptr_t) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile, VTABLE_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile, "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_Building_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "getPayload", (intptr_t) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload, "()Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "takePayload", (intptr_t) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload, "()Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "closestCore", (intptr_t) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "closestEnemyCore", (intptr_t) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "core", (intptr_t) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "timer", (intptr_t) M_mindustry_gen_Building_timer_R_arc_util_Interval, VTABLE_mindustry_gen_Building_timer_R_arc_util_Interval, "()Larc/util/Interval;", 1 },
	{ "dead", (intptr_t) M_mindustry_gen_Building_dead_R_boolean, VTABLE_mindustry_gen_Building_dead_R_boolean, "()Z", 1 },
	{ "health", (intptr_t) M_mindustry_gen_Building_health_R_float, VTABLE_mindustry_gen_Building_health_R_float, "()F", 1 },
	{ "hitTime", (intptr_t) M_mindustry_gen_Building_hitTime_R_float, VTABLE_mindustry_gen_Building_hitTime_R_float, "()F", 1 },
	{ "maxHealth", (intptr_t) M_mindustry_gen_Building_maxHealth_R_float, VTABLE_mindustry_gen_Building_maxHealth_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Building_x_R_float, VTABLE_mindustry_gen_Building_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Building_y_R_float, VTABLE_mindustry_gen_Building_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_Building_classId_R_int, VTABLE_mindustry_gen_Building_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Building_id_R_int, VTABLE_mindustry_gen_Building_id_R_int, "()I", 1 },
	{ "team", (intptr_t) M_mindustry_gen_Building_team_R_mindustry_game_Team, VTABLE_mindustry_gen_Building_team_R_mindustry_game_Team, "()Lmindustry/game/Team;", 1 },
	{ "dead", (intptr_t) M_mindustry_gen_Building_dead_boolean, VTABLE_mindustry_gen_Building_dead_boolean, "(Z)V", 1 },
	{ "health", (intptr_t) M_mindustry_gen_Building_health_float, VTABLE_mindustry_gen_Building_health_float, "(F)V", 1 },
	{ "hitTime", (intptr_t) M_mindustry_gen_Building_hitTime_float, VTABLE_mindustry_gen_Building_hitTime_float, "(F)V", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Building_id_int, VTABLE_mindustry_gen_Building_id_int, "(I)V", 1 },
	{ "maxHealth", (intptr_t) M_mindustry_gen_Building_maxHealth_float, VTABLE_mindustry_gen_Building_maxHealth_float, "(F)V", 1 },
	{ "setIndex__build", (intptr_t) M_mindustry_gen_Building_setIndex__build_int, VTABLE_mindustry_gen_Building_setIndex__build_int, "(I)V", 1 },
	{ "team", (intptr_t) M_mindustry_gen_Building_team_mindustry_game_Team, VTABLE_mindustry_gen_Building_team_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "timer", (intptr_t) M_mindustry_gen_Building_timer_arc_util_Interval, VTABLE_mindustry_gen_Building_timer_arc_util_Interval, "(Larc/util/Interval;)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Building_x_float, VTABLE_mindustry_gen_Building_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Building_y_float, VTABLE_mindustry_gen_Building_y_float, "(F)V", 1 },
	{ "onRepaired", (intptr_t) M_mindustry_gen_Building_onRepaired, VTABLE_mindustry_gen_Building_onRepaired, "()V", 1 },
	{ "placed", (intptr_t) M_mindustry_gen_Building_placed, VTABLE_mindustry_gen_Building_placed, "()V", 1 },
	{ "playerPlaced", (intptr_t) M_mindustry_gen_Building_playerPlaced_java_lang_Object, VTABLE_mindustry_gen_Building_playerPlaced_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_Building_read_arc_util_io_Reads_byte, VTABLE_mindustry_gen_Building_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_Building_write_arc_util_io_Writes, VTABLE_mindustry_gen_Building_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_Building_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_Building_as_R_java_lang_Object, VTABLE_mindustry_gen_Building_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "create", (intptr_t) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building, "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;", 1 },
	{ "getLiquidDestination", (intptr_t) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;", 1 },
	{ "init", (intptr_t) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building, "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;", 1 },
	{ "nearby", (intptr_t) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building, "(II)Lmindustry/gen/Building;", 1 },
	{ "nearby", (intptr_t) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building, VTABLE_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building, "(I)Lmindustry/gen/Building;", 1 },
	{ "getCursor", (intptr_t) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor, VTABLE_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor, "()Larc/Graphics$Cursor;", 1 },
	{ "getAmbientSound", (intptr_t) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound, VTABLE_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound, "()Larc/audio/Sound;", 1 },
	{ "getDisplayIcon", (intptr_t) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getPowerConnections", (intptr_t) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq, VTABLE_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "absorbLasers", (intptr_t) M_mindustry_gen_Building_absorbLasers_R_boolean, VTABLE_mindustry_gen_Building_absorbLasers_R_boolean, "()Z", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "acceptLiquid", (intptr_t) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z", 1 },
	{ "acceptPayload", (intptr_t) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "allowDeposit", (intptr_t) M_mindustry_gen_Building_allowDeposit_R_boolean, VTABLE_mindustry_gen_Building_allowDeposit_R_boolean, "()Z", 1 },
	{ "allowUpdate", (intptr_t) M_mindustry_gen_Building_allowUpdate_R_boolean, VTABLE_mindustry_gen_Building_allowUpdate_R_boolean, "()Z", 1 },
	{ "canBeReplaced", (intptr_t) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean, VTABLE_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 1 },
	{ "canConsume", (intptr_t) M_mindustry_gen_Building_canConsume_R_boolean, VTABLE_mindustry_gen_Building_canConsume_R_boolean, "()Z", 1 },
	{ "canControlSelect", (intptr_t) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "canDump", (intptr_t) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "canDumpLiquid", (intptr_t) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z", 1 },
	{ "canPickup", (intptr_t) M_mindustry_gen_Building_canPickup_R_boolean, VTABLE_mindustry_gen_Building_canPickup_R_boolean, "()Z", 1 },
	{ "canResupply", (intptr_t) M_mindustry_gen_Building_canResupply_R_boolean, VTABLE_mindustry_gen_Building_canResupply_R_boolean, "()Z", 1 },
	{ "canUnload", (intptr_t) M_mindustry_gen_Building_canUnload_R_boolean, VTABLE_mindustry_gen_Building_canUnload_R_boolean, "()Z", 1 },
	{ "canWithdraw", (intptr_t) M_mindustry_gen_Building_canWithdraw_R_boolean, VTABLE_mindustry_gen_Building_canWithdraw_R_boolean, "()Z", 1 },
	{ "cheating", (intptr_t) M_mindustry_gen_Building_cheating_R_boolean, VTABLE_mindustry_gen_Building_cheating_R_boolean, "()Z", 1 },
	{ "checkSolid", (intptr_t) M_mindustry_gen_Building_checkSolid_R_boolean, VTABLE_mindustry_gen_Building_checkSolid_R_boolean, "()Z", 1 },
	{ "checkSuppression", (intptr_t) M_mindustry_gen_Building_checkSuppression_R_boolean, VTABLE_mindustry_gen_Building_checkSuppression_R_boolean, "()Z", 1 },
	{ "collide", (intptr_t) M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean, VTABLE_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean, "(Lmindustry/gen/Bullet;)Z", 1 },
	{ "collision", (intptr_t) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean, VTABLE_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean, "(Lmindustry/gen/Bullet;)Z", 1 },
	{ "conductsTo", (intptr_t) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean, VTABLE_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "configTapped", (intptr_t) M_mindustry_gen_Building_configTapped_R_boolean, VTABLE_mindustry_gen_Building_configTapped_R_boolean, "()Z", 1 },
	{ "consumeTriggerValid", (intptr_t) M_mindustry_gen_Building_consumeTriggerValid_R_boolean, VTABLE_mindustry_gen_Building_consumeTriggerValid_R_boolean, "()Z", 1 },
	{ "damaged", (intptr_t) M_mindustry_gen_Building_damaged_R_boolean, VTABLE_mindustry_gen_Building_damaged_R_boolean, "()Z", 1 },
	{ "dump", (intptr_t) M_mindustry_gen_Building_dump_R_boolean, VTABLE_mindustry_gen_Building_dump_R_boolean, "()Z", 1 },
	{ "dump", (intptr_t) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "dumpAccumulate", (intptr_t) M_mindustry_gen_Building_dumpAccumulate_R_boolean, VTABLE_mindustry_gen_Building_dumpAccumulate_R_boolean, "()Z", 1 },
	{ "dumpAccumulate", (intptr_t) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "dumpPayload", (intptr_t) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "inFogTo", (intptr_t) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "inMapArea", (intptr_t) M_mindustry_gen_Building_inMapArea_R_boolean, VTABLE_mindustry_gen_Building_inMapArea_R_boolean, "()Z", 1 },
	{ "interactable", (intptr_t) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_Building_isAdded_R_boolean, VTABLE_mindustry_gen_Building_isAdded_R_boolean, "()Z", 1 },
	{ "isCommandable", (intptr_t) M_mindustry_gen_Building_isCommandable_R_boolean, VTABLE_mindustry_gen_Building_isCommandable_R_boolean, "()Z", 1 },
	{ "isDiscovered", (intptr_t) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "isHealSuppressed", (intptr_t) M_mindustry_gen_Building_isHealSuppressed_R_boolean, VTABLE_mindustry_gen_Building_isHealSuppressed_R_boolean, "()Z", 1 },
	{ "isInsulated", (intptr_t) M_mindustry_gen_Building_isInsulated_R_boolean, VTABLE_mindustry_gen_Building_isInsulated_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_Building_isLocal_R_boolean, VTABLE_mindustry_gen_Building_isLocal_R_boolean, "()Z", 1 },
	{ "isPayload", (intptr_t) M_mindustry_gen_Building_isPayload_R_boolean, VTABLE_mindustry_gen_Building_isPayload_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_Building_isRemote_R_boolean, VTABLE_mindustry_gen_Building_isRemote_R_boolean, "()Z", 1 },
	{ "isValid", (intptr_t) M_mindustry_gen_Building_isValid_R_boolean, VTABLE_mindustry_gen_Building_isValid_R_boolean, "()Z", 1 },
	{ "moveForward", (intptr_t) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "movePayload", (intptr_t) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "onConfigureBuildTapped", (intptr_t) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "onConfigureTapped", (intptr_t) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean, VTABLE_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean, "(FF)Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_Building_onSolid_R_boolean, VTABLE_mindustry_gen_Building_onSolid_R_boolean, "()Z", 1 },
	{ "payloadCheck", (intptr_t) M_mindustry_gen_Building_payloadCheck_int_R_boolean, VTABLE_mindustry_gen_Building_payloadCheck_int_R_boolean, "(I)Z", 1 },
	{ "productionValid", (intptr_t) M_mindustry_gen_Building_productionValid_R_boolean, VTABLE_mindustry_gen_Building_productionValid_R_boolean, "()Z", 1 },
	{ "put", (intptr_t) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_Building_put_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_Building_serialize_R_boolean, VTABLE_mindustry_gen_Building_serialize_R_boolean, "()Z", 1 },
	{ "shouldAmbientSound", (intptr_t) M_mindustry_gen_Building_shouldAmbientSound_R_boolean, VTABLE_mindustry_gen_Building_shouldAmbientSound_R_boolean, "()Z", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_gen_Building_shouldConsume_R_boolean, VTABLE_mindustry_gen_Building_shouldConsume_R_boolean, "()Z", 1 },
	{ "shouldHideConfigure", (intptr_t) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean, VTABLE_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 1 },
	{ "shouldShowConfigure", (intptr_t) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean, VTABLE_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 1 },
	{ "timer", (intptr_t) M_mindustry_gen_Building_timer_int_float_R_boolean, VTABLE_mindustry_gen_Building_timer_int_float_R_boolean, "(IF)Z", 1 },
	{ "wasRecentlyDamaged", (intptr_t) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean, VTABLE_mindustry_gen_Building_wasRecentlyDamaged_R_boolean, "()Z", 1 },
	{ "wasRecentlyHealed", (intptr_t) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean, VTABLE_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean, "(F)Z", 1 },
	{ "relativeTo", (intptr_t) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte, VTABLE_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte, "(Lmindustry/gen/Building;)B", 1 },
	{ "relativeTo", (intptr_t) M_mindustry_gen_Building_relativeTo_int_int_R_byte, VTABLE_mindustry_gen_Building_relativeTo_int_int_R_byte, "(II)B", 1 },
	{ "relativeTo", (intptr_t) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte, VTABLE_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte, "(Lmindustry/world/Tile;)B", 1 },
	{ "relativeToEdge", (intptr_t) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte, VTABLE_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte, "(Lmindustry/world/Tile;)B", 1 },
	{ "version", (intptr_t) M_mindustry_gen_Building_version_R_byte, VTABLE_mindustry_gen_Building_version_R_byte, "()B", 1 },
	{ "sense", (intptr_t) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "sense", (intptr_t) M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "ambientVolume", (intptr_t) M_mindustry_gen_Building_ambientVolume_R_float, VTABLE_mindustry_gen_Building_ambientVolume_R_float, "()F", 1 },
	{ "calculateHeat", (intptr_t) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float, VTABLE_mindustry_gen_Building_calculateHeat_Array1_float_R_float, "([F)F", 1 },
	{ "calculateHeat", (intptr_t) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float, VTABLE_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float, "([FLarc/struct/IntSet;)F", 1 },
	{ "delta", (intptr_t) M_mindustry_gen_Building_delta_R_float, VTABLE_mindustry_gen_Building_delta_R_float, "()F", 1 },
	{ "drawrot", (intptr_t) M_mindustry_gen_Building_drawrot_R_float, VTABLE_mindustry_gen_Building_drawrot_R_float, "()F", 1 },
	{ "edelta", (intptr_t) M_mindustry_gen_Building_edelta_R_float, VTABLE_mindustry_gen_Building_edelta_R_float, "()F", 1 },
	{ "efficiencyScale", (intptr_t) M_mindustry_gen_Building_efficiencyScale_R_float, VTABLE_mindustry_gen_Building_efficiencyScale_R_float, "()F", 1 },
	{ "fogRadius", (intptr_t) M_mindustry_gen_Building_fogRadius_R_float, VTABLE_mindustry_gen_Building_fogRadius_R_float, "()F", 1 },
	{ "getAmbientVolume", (intptr_t) M_mindustry_gen_Building_getAmbientVolume_R_float, VTABLE_mindustry_gen_Building_getAmbientVolume_R_float, "()F", 1 },
	{ "getDisplayEfficiency", (intptr_t) M_mindustry_gen_Building_getDisplayEfficiency_R_float, VTABLE_mindustry_gen_Building_getDisplayEfficiency_R_float, "()F", 1 },
	{ "getPowerProduction", (intptr_t) M_mindustry_gen_Building_getPowerProduction_R_float, VTABLE_mindustry_gen_Building_getPowerProduction_R_float, "()F", 1 },
	{ "getProgressIncrease", (intptr_t) M_mindustry_gen_Building_getProgressIncrease_float_R_float, VTABLE_mindustry_gen_Building_getProgressIncrease_float_R_float, "(F)F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_Building_getX_R_float, VTABLE_mindustry_gen_Building_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_Building_getY_R_float, VTABLE_mindustry_gen_Building_getY_R_float, "()F", 1 },
	{ "handleDamage", (intptr_t) M_mindustry_gen_Building_handleDamage_float_R_float, VTABLE_mindustry_gen_Building_handleDamage_float_R_float, "(F)F", 1 },
	{ "healthf", (intptr_t) M_mindustry_gen_Building_healthf_R_float, VTABLE_mindustry_gen_Building_healthf_R_float, "()F", 1 },
	{ "hitSize", (intptr_t) M_mindustry_gen_Building_hitSize_R_float, VTABLE_mindustry_gen_Building_hitSize_R_float, "()F", 1 },
	{ "moveLiquid", (intptr_t) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float, VTABLE_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F", 1 },
	{ "moveLiquidForward", (intptr_t) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float, VTABLE_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float, "(ZLmindustry/type/Liquid;)F", 1 },
	{ "progress", (intptr_t) M_mindustry_gen_Building_progress_R_float, VTABLE_mindustry_gen_Building_progress_R_float, "()F", 1 },
	{ "rotdeg", (intptr_t) M_mindustry_gen_Building_rotdeg_R_float, VTABLE_mindustry_gen_Building_rotdeg_R_float, "()F", 1 },
	{ "timeScale", (intptr_t) M_mindustry_gen_Building_timeScale_R_float, VTABLE_mindustry_gen_Building_timeScale_R_float, "()F", 1 },
	{ "totalProgress", (intptr_t) M_mindustry_gen_Building_totalProgress_R_float, VTABLE_mindustry_gen_Building_totalProgress_R_float, "()F", 1 },
	{ "warmup", (intptr_t) M_mindustry_gen_Building_warmup_R_float, VTABLE_mindustry_gen_Building_warmup_R_float, "()F", 1 },
	{ "acceptStack", (intptr_t) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I", 1 },
	{ "explosionItemCap", (intptr_t) M_mindustry_gen_Building_explosionItemCap_R_int, VTABLE_mindustry_gen_Building_explosionItemCap_R_int, "()I", 1 },
	{ "getMaximumAccepted", (intptr_t) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "moduleBitmask", (intptr_t) M_mindustry_gen_Building_moduleBitmask_R_int, VTABLE_mindustry_gen_Building_moduleBitmask_R_int, "()I", 1 },
	{ "pos", (intptr_t) M_mindustry_gen_Building_pos_R_int, VTABLE_mindustry_gen_Building_pos_R_int, "()I", 1 },
	{ "removeStack", (intptr_t) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int, VTABLE_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int, "(Lmindustry/type/Item;I)I", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_Building_tileX_R_int, VTABLE_mindustry_gen_Building_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_Building_tileY_R_int, VTABLE_mindustry_gen_Building_tileY_R_int, "()I", 1 },
	{ "senseObject", (intptr_t) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "getDisplayName", (intptr_t) M_mindustry_gen_Building_getDisplayName_R_java_lang_String, VTABLE_mindustry_gen_Building_getDisplayName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_Building_toString_R_java_lang_String, VTABLE_mindustry_gen_Building_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_Building_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floor", (intptr_t) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "status", (intptr_t) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus, VTABLE_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus, "()Lmindustry/world/meta/BlockStatus;", 1 },
	{ "flowItems", (intptr_t) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule, VTABLE_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule, "()Lmindustry/world/modules/ItemModule;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_Building_create_R_mindustry_gen_Building, 0, "()Lmindustry/gen/Building;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_Building_add, VTABLE_mindustry_gen_Building_add, "()V", 1 },
	{ "addPlan", (intptr_t) M_mindustry_gen_Building_addPlan_boolean, VTABLE_mindustry_gen_Building_addPlan_boolean, "(Z)V", 1 },
	{ "addPlan", (intptr_t) M_mindustry_gen_Building_addPlan_boolean_boolean, VTABLE_mindustry_gen_Building_addPlan_boolean_boolean, "(ZZ)V", 1 },
	{ "afterDestroyed", (intptr_t) M_mindustry_gen_Building_afterDestroyed, VTABLE_mindustry_gen_Building_afterDestroyed, "()V", 1 },
	{ "afterPickedUp", (intptr_t) M_mindustry_gen_Building_afterPickedUp, VTABLE_mindustry_gen_Building_afterPickedUp, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_Building_afterRead, VTABLE_mindustry_gen_Building_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_Building_afterReadAll, VTABLE_mindustry_gen_Building_afterReadAll, "()V", 1 },
	{ "applyBoost", (intptr_t) M_mindustry_gen_Building_applyBoost_float_float, VTABLE_mindustry_gen_Building_applyBoost_float_float, "(FF)V", 1 },
	{ "applyHealSuppression", (intptr_t) M_mindustry_gen_Building_applyHealSuppression_float, VTABLE_mindustry_gen_Building_applyHealSuppression_float, "(F)V", 1 },
	{ "applyHealSuppression", (intptr_t) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color, VTABLE_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color, "(FLarc/graphics/Color;)V", 1 },
	{ "applySlowdown", (intptr_t) M_mindustry_gen_Building_applySlowdown_float_float, VTABLE_mindustry_gen_Building_applySlowdown_float_float, "(FF)V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_Building_beforeWrite, VTABLE_mindustry_gen_Building_beforeWrite, "()V", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "changeTeam", (intptr_t) M_mindustry_gen_Building_changeTeam_mindustry_game_Team, VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "changeTeam", (intptr_t) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean, VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean, "(Lmindustry/game/Team;Z)V", 1 },
	{ "checkAllowUpdate", (intptr_t) M_mindustry_gen_Building_checkAllowUpdate, VTABLE_mindustry_gen_Building_checkAllowUpdate, "()V", 1 },
	{ "clampHealth", (intptr_t) M_mindustry_gen_Building_clampHealth, VTABLE_mindustry_gen_Building_clampHealth, "()V", 1 },
	{ "configure", (intptr_t) M_mindustry_gen_Building_configure_java_lang_Object, VTABLE_mindustry_gen_Building_configure_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "configureAny", (intptr_t) M_mindustry_gen_Building_configureAny_java_lang_Object, VTABLE_mindustry_gen_Building_configureAny_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "configured", (intptr_t) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object, VTABLE_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object, "(Lmindustry/gen/Unit;Ljava/lang/Object;)V", 1 },
	{ "consume", (intptr_t) M_mindustry_gen_Building_consume, VTABLE_mindustry_gen_Building_consume, "()V", 1 },
	{ "control", (intptr_t) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double, VTABLE_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double, "(Lmindustry/logic/LAccess;DDDD)V", 1 },
	{ "control", (intptr_t) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double, VTABLE_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double, "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V", 1 },
	{ "created", (intptr_t) M_mindustry_gen_Building_created, VTABLE_mindustry_gen_Building_created, "()V", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float, VTABLE_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float, "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_Building_damage_float_boolean, VTABLE_mindustry_gen_Building_damage_float_boolean, "(FZ)V", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_Building_damage_float, VTABLE_mindustry_gen_Building_damage_float, "(F)V", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_Building_damage_mindustry_game_Team_float, VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float, "(Lmindustry/game/Team;F)V", 1 },
	{ "damageArmorMult", (intptr_t) M_mindustry_gen_Building_damageArmorMult_float_float, VTABLE_mindustry_gen_Building_damageArmorMult_float_float, "(FF)V", 1 },
	{ "damageArmorMult", (intptr_t) M_mindustry_gen_Building_damageArmorMult_float_float_boolean, VTABLE_mindustry_gen_Building_damageArmorMult_float_float_boolean, "(FFZ)V", 1 },
	{ "damageContinuous", (intptr_t) M_mindustry_gen_Building_damageContinuous_float, VTABLE_mindustry_gen_Building_damageContinuous_float, "(F)V", 1 },
	{ "damageContinuousArmorMult", (intptr_t) M_mindustry_gen_Building_damageContinuousArmorMult_float_float, VTABLE_mindustry_gen_Building_damageContinuousArmorMult_float_float, "(FF)V", 1 },
	{ "damageContinuousPierce", (intptr_t) M_mindustry_gen_Building_damageContinuousPierce_float, VTABLE_mindustry_gen_Building_damageContinuousPierce_float, "(F)V", 1 },
	{ "damagePierce", (intptr_t) M_mindustry_gen_Building_damagePierce_float, VTABLE_mindustry_gen_Building_damagePierce_float, "(F)V", 1 },
	{ "damagePierce", (intptr_t) M_mindustry_gen_Building_damagePierce_float_boolean, VTABLE_mindustry_gen_Building_damagePierce_float_boolean, "(FZ)V", 1 },
	{ "deselect", (intptr_t) M_mindustry_gen_Building_deselect, VTABLE_mindustry_gen_Building_deselect, "()V", 1 },
	{ "display", (intptr_t) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_Building_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "displayBars", (intptr_t) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "displayConsumption", (intptr_t) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_Building_draw, VTABLE_mindustry_gen_Building_draw, "()V", 1 },
	{ "drawCached", (intptr_t) M_mindustry_gen_Building_drawCached, VTABLE_mindustry_gen_Building_drawCached, "()V", 1 },
	{ "drawConfigure", (intptr_t) M_mindustry_gen_Building_drawConfigure, VTABLE_mindustry_gen_Building_drawConfigure, "()V", 1 },
	{ "drawCracks", (intptr_t) M_mindustry_gen_Building_drawCracks, VTABLE_mindustry_gen_Building_drawCracks, "()V", 1 },
	{ "drawDisabled", (intptr_t) M_mindustry_gen_Building_drawDisabled, VTABLE_mindustry_gen_Building_drawDisabled, "()V", 1 },
	{ "drawItemSelection", (intptr_t) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent, VTABLE_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent, "(Lmindustry/ctype/UnlockableContent;)V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_gen_Building_drawLight, VTABLE_mindustry_gen_Building_drawLight, "()V", 1 },
	{ "drawLiquidLight", (intptr_t) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float, VTABLE_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_gen_Building_drawSelect, VTABLE_mindustry_gen_Building_drawSelect, "()V", 1 },
	{ "drawStatus", (intptr_t) M_mindustry_gen_Building_drawStatus, VTABLE_mindustry_gen_Building_drawStatus, "()V", 1 },
	{ "drawTeam", (intptr_t) M_mindustry_gen_Building_drawTeam, VTABLE_mindustry_gen_Building_drawTeam, "()V", 1 },
	{ "drawTeamTop", (intptr_t) M_mindustry_gen_Building_drawTeamTop, VTABLE_mindustry_gen_Building_drawTeamTop, "()V", 1 },
	{ "dropped", (intptr_t) M_mindustry_gen_Building_dropped, VTABLE_mindustry_gen_Building_dropped, "()V", 1 },
	{ "dumpLiquid", (intptr_t) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid, VTABLE_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid, "(Lmindustry/type/Liquid;)V", 1 },
	{ "dumpLiquid", (intptr_t) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float, VTABLE_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "dumpLiquid", (intptr_t) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int, VTABLE_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int, "(Lmindustry/type/Liquid;FI)V", 1 },
	{ "eachEdge", (intptr_t) M_mindustry_gen_Building_eachEdge_arc_func_Cons, VTABLE_mindustry_gen_Building_eachEdge_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "getStackOffset", (intptr_t) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2, VTABLE_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2, "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V", 1 },
	{ "handleItem", (intptr_t) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item, VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item, "(Lmindustry/gen/Building;Lmindustry/type/Item;)V", 1 },
	{ "handleLiquid", (intptr_t) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float, VTABLE_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V", 1 },
	{ "handlePayload", (intptr_t) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V", 1 },
	{ "handleStack", (intptr_t) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, VTABLE_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V", 1 },
	{ "handleString", (intptr_t) M_mindustry_gen_Building_handleString_java_lang_Object, VTABLE_mindustry_gen_Building_handleString_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "handleUnitPayload", (intptr_t) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons, VTABLE_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons, "(Lmindustry/gen/Unit;Larc/func/Cons;)V", 1 },
	{ "heal", (intptr_t) M_mindustry_gen_Building_heal, VTABLE_mindustry_gen_Building_heal, "()V", 1 },
	{ "heal", (intptr_t) M_mindustry_gen_Building_heal_float, VTABLE_mindustry_gen_Building_heal_float, "(F)V", 1 },
	{ "healFract", (intptr_t) M_mindustry_gen_Building_healFract_float, VTABLE_mindustry_gen_Building_healFract_float, "(F)V", 1 },
	{ "healthChanged", (intptr_t) M_mindustry_gen_Building_healthChanged, VTABLE_mindustry_gen_Building_healthChanged, "()V", 1 },
	{ "hitbox", (intptr_t) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect, VTABLE_mindustry_gen_Building_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "incrementDump", (intptr_t) M_mindustry_gen_Building_incrementDump_int, VTABLE_mindustry_gen_Building_incrementDump_int, "(I)V", 1 },
	{ "itemTaken", (intptr_t) M_mindustry_gen_Building_itemTaken_mindustry_type_Item, VTABLE_mindustry_gen_Building_itemTaken_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "kill", (intptr_t) M_mindustry_gen_Building_kill, VTABLE_mindustry_gen_Building_kill, "()V", 1 },
	{ "killed", (intptr_t) M_mindustry_gen_Building_killed, VTABLE_mindustry_gen_Building_killed, "()V", 1 },
	{ "noSleep", (intptr_t) M_mindustry_gen_Building_noSleep, VTABLE_mindustry_gen_Building_noSleep, "()V", 1 },
	{ "offload", (intptr_t) M_mindustry_gen_Building_offload_mindustry_type_Item, VTABLE_mindustry_gen_Building_offload_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "onCommand", (intptr_t) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2, VTABLE_mindustry_gen_Building_onCommand_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "onConfigureClosed", (intptr_t) M_mindustry_gen_Building_onConfigureClosed, VTABLE_mindustry_gen_Building_onConfigureClosed, "()V", 1 },
	{ "onControlSelect", (intptr_t) M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit, VTABLE_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "onDeconstructed", (intptr_t) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit, VTABLE_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "onDestroyed", (intptr_t) M_mindustry_gen_Building_onDestroyed, VTABLE_mindustry_gen_Building_onDestroyed, "()V", 1 },
	{ "onNearbyBuildAdded", (intptr_t) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building, VTABLE_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "onProximityAdded", (intptr_t) M_mindustry_gen_Building_onProximityAdded, VTABLE_mindustry_gen_Building_onProximityAdded, "()V", 1 },
	{ "onProximityRemoved", (intptr_t) M_mindustry_gen_Building_onProximityRemoved, VTABLE_mindustry_gen_Building_onProximityRemoved, "()V", 1 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_gen_Building_onProximityUpdate, VTABLE_mindustry_gen_Building_onProximityUpdate, "()V", 1 },
	{ "onRemoved", (intptr_t) M_mindustry_gen_Building_onRemoved, VTABLE_mindustry_gen_Building_onRemoved, "()V", 1 },
	{ "overwrote", (intptr_t) M_mindustry_gen_Building_overwrote_arc_struct_Seq, VTABLE_mindustry_gen_Building_overwrote_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "payloadDraw", (intptr_t) M_mindustry_gen_Building_payloadDraw, VTABLE_mindustry_gen_Building_payloadDraw, "()V", 1 },
	{ "pickedUp", (intptr_t) M_mindustry_gen_Building_pickedUp, VTABLE_mindustry_gen_Building_pickedUp, "()V", 1 },
	{ "playDestroySound", (intptr_t) M_mindustry_gen_Building_playDestroySound, VTABLE_mindustry_gen_Building_playDestroySound, "()V", 1 },
	{ "powerGraphRemoved", (intptr_t) M_mindustry_gen_Building_powerGraphRemoved, VTABLE_mindustry_gen_Building_powerGraphRemoved, "()V", 1 },
	{ "produced", (intptr_t) M_mindustry_gen_Building_produced_mindustry_type_Item, VTABLE_mindustry_gen_Building_produced_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "produced", (intptr_t) M_mindustry_gen_Building_produced_mindustry_type_Item_int, VTABLE_mindustry_gen_Building_produced_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "puddleOn", (intptr_t) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle, VTABLE_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle, "(Lmindustry/gen/Puddle;)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_Building_read_arc_util_io_Reads, VTABLE_mindustry_gen_Building_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "readAll", (intptr_t) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte, VTABLE_mindustry_gen_Building_readAll_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "readBase", (intptr_t) M_mindustry_gen_Building_readBase_arc_util_io_Reads, VTABLE_mindustry_gen_Building_readBase_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "readSync", (intptr_t) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte, VTABLE_mindustry_gen_Building_readSync_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "recache", (intptr_t) M_mindustry_gen_Building_recache, VTABLE_mindustry_gen_Building_recache, "()V", 1 },
	{ "recentlyHealed", (intptr_t) M_mindustry_gen_Building_recentlyHealed, VTABLE_mindustry_gen_Building_recentlyHealed, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_Building_remove, VTABLE_mindustry_gen_Building_remove, "()V", 1 },
	{ "removeFromProximity", (intptr_t) M_mindustry_gen_Building_removeFromProximity, VTABLE_mindustry_gen_Building_removeFromProximity, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Building_set_arc_math_geom_Position, VTABLE_mindustry_gen_Building_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Building_set_float_float, VTABLE_mindustry_gen_Building_set_float_float, "(FF)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double, VTABLE_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double, VTABLE_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double, "(Lmindustry/logic/LAccess;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object, VTABLE_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object, "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V", 1 },
	{ "sleep", (intptr_t) M_mindustry_gen_Building_sleep, VTABLE_mindustry_gen_Building_sleep, "()V", 1 },
	{ "splashLiquid", (intptr_t) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float, VTABLE_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "tapped", (intptr_t) M_mindustry_gen_Building_tapped, VTABLE_mindustry_gen_Building_tapped, "()V", 1 },
	{ "transferLiquid", (intptr_t) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid, VTABLE_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid, "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Building_trns_arc_math_geom_Position, VTABLE_mindustry_gen_Building_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Building_trns_float_float, VTABLE_mindustry_gen_Building_trns_float_float, "(FF)V", 1 },
	{ "unitOn", (intptr_t) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit, VTABLE_mindustry_gen_Building_unitOn_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "unitOnAny", (intptr_t) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit, VTABLE_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "unitRemoved", (intptr_t) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit, VTABLE_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_Building_update, VTABLE_mindustry_gen_Building_update, "()V", 1 },
	{ "updateConsumption", (intptr_t) M_mindustry_gen_Building_updateConsumption, VTABLE_mindustry_gen_Building_updateConsumption, "()V", 1 },
	{ "updateEfficiencyMultiplier", (intptr_t) M_mindustry_gen_Building_updateEfficiencyMultiplier, VTABLE_mindustry_gen_Building_updateEfficiencyMultiplier, "()V", 1 },
	{ "updateFogVisibility", (intptr_t) M_mindustry_gen_Building_updateFogVisibility, VTABLE_mindustry_gen_Building_updateFogVisibility, "()V", 1 },
	{ "updateLastAccess", (intptr_t) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player, VTABLE_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "updatePayload", (intptr_t) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building, VTABLE_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 1 },
	{ "updatePowerGraph", (intptr_t) M_mindustry_gen_Building_updatePowerGraph, VTABLE_mindustry_gen_Building_updatePowerGraph, "()V", 1 },
	{ "updateProximity", (intptr_t) M_mindustry_gen_Building_updateProximity, VTABLE_mindustry_gen_Building_updateProximity, "()V", 1 },
	{ "updateTableAlign", (intptr_t) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_gen_Building_updateTile, VTABLE_mindustry_gen_Building_updateTile, "()V", 1 },
	{ "writeAll", (intptr_t) M_mindustry_gen_Building_writeAll_arc_util_io_Writes, VTABLE_mindustry_gen_Building_writeAll_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeBase", (intptr_t) M_mindustry_gen_Building_writeBase_arc_util_io_Writes, VTABLE_mindustry_gen_Building_writeBase_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeSync", (intptr_t) M_mindustry_gen_Building_writeSync_arc_util_io_Writes, VTABLE_mindustry_gen_Building_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "lambda$splashLiquid$0", (intptr_t) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float, VTABLE_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 4098 },
	{ "lambda$onDestroyed$1", (intptr_t) SM_mindustry_gen_Building_lambda$onDestroyed$1_mindustry_type_Liquid_float_R_float, 0, "(Lmindustry/type/Liquid;F)F", 4106 },
	{ "lambda$onDestroyed$0", (intptr_t) SM_mindustry_gen_Building_lambda$onDestroyed$0_mindustry_type_Liquid_float_R_float, 0, "(Lmindustry/type/Liquid;F)F", 4106 },
	{ "lambda$onDeconstructed$0", (intptr_t) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile, VTABLE_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile, "(FLmindustry/world/Tile;)V", 4098 },
	{ "lambda$handleUnitPayload$0", (intptr_t) SM_mindustry_gen_Building_lambda$handleUnitPayload$0_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$display$6", (intptr_t) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$display$9", (intptr_t) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable, VTABLE_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable, "(Larc/struct/Bits;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$display$7", (intptr_t) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 4098 },
	{ "lambda$display$8", (intptr_t) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence, VTABLE_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence, "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$display$2", (intptr_t) SM_mindustry_gen_Building_lambda$display$2_mindustry_world_modules_ItemModule_java_lang_String_arc_scene_ui_layout_Table, 0, "(Lmindustry/world/modules/ItemModule;Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$display$5", (intptr_t) SM_mindustry_gen_Building_lambda$display$5_mindustry_world_modules_ItemModule_arc_struct_Bits_java_lang_Runnable, 0, "(Lmindustry/world/modules/ItemModule;Larc/struct/Bits;Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$display$3", (intptr_t) SM_mindustry_gen_Building_lambda$display$3_arc_scene_ui_layout_Table_mindustry_world_modules_ItemModule_java_lang_String, 0, "(Larc/scene/ui/layout/Table;Lmindustry/world/modules/ItemModule;Ljava/lang/String;)V", 4106 },
	{ "lambda$display$4", (intptr_t) SM_mindustry_gen_Building_lambda$display$4_mindustry_world_modules_ItemModule_mindustry_type_Item_java_lang_String_R_java_lang_CharSequence, 0, "(Lmindustry/world/modules/ItemModule;Lmindustry/type/Item;Ljava/lang/String;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$display$1", (intptr_t) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$display$0", (intptr_t) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$placed$0", (intptr_t) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building, VTABLE_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_gen_Building, 0, "()V", 8 },
};

Class class_mindustry_gen_Building{
		.nativeName = (intptr_t) "mindustry/gen/Building",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Building),
		.classVtable = (intptr_t) vtable_mindustry_gen_Building,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Building,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Building,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 7,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 50,
		.nativeFields = (intptr_t) fields,
		.methodCount = 301,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 310,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Building = registerClass(&class_mindustry_gen_Building);

}
