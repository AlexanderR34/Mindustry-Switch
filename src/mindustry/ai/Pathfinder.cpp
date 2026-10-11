#include "mindustry/ai/Pathfinder.h"
#include "arc/func/Prov.h"
#include "mindustry/async/AvoidanceProcess.h"
#include "arc/Events.h"
#include "mindustry/gen/PathTile.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ai/Pathfinder.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/Pathfinder_Flowfield.h"
#include "java/util/Arrays.h"
#include "mindustry/ai/Pathfinder_invoke_arc_func_Prov_1.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "java/lang/Throwable.h"
#include "arc/struct/IntQueue.h"
#include "arc/func/Boolf.h"
#include "java/lang/Thread.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/ai/Pathfinder_PathTileStruct.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/ai/Pathfinder_EnemyCoreField.h"
#include "mindustry/ai/Pathfinder_invoke_mindustry_ai_Pathfinder_PathCost_9.h"
#include "mindustry/ai/Pathfinder_invoke_mindustry_ai_Pathfinder_PathCost_7.h"
#include "mindustry/ai/Pathfinder_PositionTarget.h"
#include "mindustry/ai/Pathfinder_invoke_mindustry_ai_Pathfinder_PathCost_8.h"
#include "mindustry/ai/Pathfinder_invoke_mindustry_ai_Pathfinder_PathCost_11.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/ai/Pathfinder_invoke_mindustry_ai_Pathfinder_PathCost_6.h"
#include "mindustry/ai/Pathfinder_invoke_mindustry_ai_Pathfinder_PathCost_10.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "java/lang/System.h"
#include "mindustry/ai/Pathfinder_invoke_arc_func_Boolf_1.h"
#include "mindustry/net/Net.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/world/Block.h"
#include "java/lang/InterruptedException.h"
#include "mindustry/game/Rules.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/ai/Pathfinder_invoke_arc_func_Cons_6.h"
#include "mindustry/ai/Pathfinder_invoke_arc_func_Cons_7.h"
#include "mindustry/ai/Pathfinder_invoke_arc_func_Cons_8.h"
#include "arc/Application.h"
#include "mindustry/ai/Pathfinder_invoke_arc_func_Cons_9.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "mindustry/ai/Pathfinder_invoke_java_lang_Runnable_7.h"
#include "mindustry/ai/Pathfinder_invoke_java_lang_Runnable_6.h"
#include "mindustry/ai/Pathfinder_invoke_java_lang_Runnable_5.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_TilePreChangeEvent.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/util/TaskQueue.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "mindustry/ai/Pathfinder_invoke_java_lang_Runnable_9.h"
#include "mindustry/ai/Pathfinder_invoke_java_lang_Runnable_8.h"
#include "mindustry/ai/Pathfinder_PathCost.h"
#include "mindustry/ai/Pathfinder_invoke_arc_func_Cons_5.h"
#include "mindustry/game/EventType_Trigger.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {

jlong SF_mindustry_ai_Pathfinder_maxUpdate;
jint SF_mindustry_ai_Pathfinder_neverRefresh;
jint SF_mindustry_ai_Pathfinder_updateFPS;
jint SF_mindustry_ai_Pathfinder_updateInterval;
jint SF_mindustry_ai_Pathfinder_wwidth;
jint SF_mindustry_ai_Pathfinder_wheight;
jint SF_mindustry_ai_Pathfinder_impassable;
jint SF_mindustry_ai_Pathfinder_fieldCore;
jint SF_mindustry_ai_Pathfinder_maxFields;
jobject SF_mindustry_ai_Pathfinder_fieldTypes;
jint SF_mindustry_ai_Pathfinder_costGround;
jint SF_mindustry_ai_Pathfinder_costLegs;
jint SF_mindustry_ai_Pathfinder_costNaval;
jint SF_mindustry_ai_Pathfinder_costNeoplasm;
jint SF_mindustry_ai_Pathfinder_costNone;
jint SF_mindustry_ai_Pathfinder_costHover;
jint SF_mindustry_ai_Pathfinder_maxCosts;
jobject SF_mindustry_ai_Pathfinder_costTypes;
jlong SF_mindustry_ai_Pathfinder_refreshIntervalMs;

void mark_mindustry_ai_Pathfinder(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_Pathfinder_fieldTypes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_Pathfinder_fieldTypes)->clazz)->markFunction)((jobject) SF_mindustry_ai_Pathfinder_fieldTypes, mark, depth + 1);
		if (SF_mindustry_ai_Pathfinder_costTypes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_Pathfinder_costTypes)->clazz)->markFunction)((jobject) SF_mindustry_ai_Pathfinder_costTypes, mark, depth + 1);
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
	auto self = (mindustry_ai_Pathfinder *) object;
	if (self->F_tiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tiles)->clazz)->markFunction)((jobject) self->F_tiles, mark, depth + 1);
	if (self->F_cache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cache)->clazz)->markFunction)((jobject) self->F_cache, mark, depth + 1);
	if (self->F_threadList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_threadList)->clazz)->markFunction)((jobject) self->F_threadList, mark, depth + 1);
	if (self->F_mainList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainList)->clazz)->markFunction)((jobject) self->F_mainList, mark, depth + 1);
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
	if (self->F_thread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thread)->clazz)->markFunction)((jobject) self->F_thread, mark, depth + 1);
	if (self->F_tmpArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpArray)->clazz)->markFunction)((jobject) self->F_tmpArray, mark, depth + 1);
}

void init_mindustry_ai_Pathfinder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(113);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_threadList = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_mainList = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_arc_util_TaskQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_TaskQueue);
	init_arc_util_TaskQueue(ctx, sp[1].o);
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_tmpArray = (jref) sp[1].o;
	LINE_NUMBER(114);
	((func_mindustry_ai_Pathfinder_clearCache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_clearCache])(ctx, (frame[0].o));
	LINE_NUMBER(116);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TilePreChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(187);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_afterGameUpdate;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_clearCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:clearCache", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createMultiArray(ctx, &class_mindustry_ai_Pathfinder$Flowfield, {(256), (8), (10)});
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_cache = (jref) sp[1].o;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:packTile", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(222);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	frame[4].i = (jint(0));
	frame[5].i = (jint(0));
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[1].o));
	frame[6].i = temp0;
	jint temp1 = (jint)((func_mindustry_world_Tile_isDeep_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_isDeep_R_boolean])(ctx, (frame[1].o));
	frame[7].i = temp1;
	frame[8].i = (frame[7].i);
	LINE_NUMBER(224);
	frame[9].i = (jint(0));
	}
label_8:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_9;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(226);
	if ((frame[10].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(228);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[10].o));
	frame[12].i = temp0;
	LINE_NUMBER(229);
	jint temp1 = (jint)((func_mindustry_world_Tile_isDeep_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_isDeep_R_boolean])(ctx, (frame[10].o));
	frame[13].i = temp1;
	LINE_NUMBER(230);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[11].o)))->F_isLiquid) == 0) goto label_17;
	}
	INST_ILOAD(13);
	if ((--sp)->i == 0) goto label_17;
	INST_ICONST(1);
	INST_ISTORE(2);
label_17:;
	{
	LINE_NUMBER(232);
	if ((frame[12].i) == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[10].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamPassable) != 0) goto label_18;
	}
	INST_ICONST(1);
	INST_ISTORE(3);
label_18:;
	{
	LINE_NUMBER(233);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[11].o)))->F_isLiquid) != 0) goto label_19;
	}
	INST_ICONST(1);
	INST_ISTORE(5);
label_19:;
	{
	LINE_NUMBER(234);
	if ((frame[13].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(235);
	frame[7].i = (jint(0));
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(237);
	frame[8].i = (jint(1));
	}
label_22:;
	{
	LINE_NUMBER(239);
	jint temp0 = (jint)((func_mindustry_world_Tile_legSolid_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_legSolid_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_23;
	}
	INST_ICONST(1);
	INST_ISTORE(4);
label_23:;
	{
	LINE_NUMBER(242);
	if ((frame[6].i) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamPassable) != 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[10].o));
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[10].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | (jint(2097152)));
	}
label_12:;
	{
	LINE_NUMBER(224);
	INST_IINC(9, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(249);
	if ((frame[7].i) == 0) goto label_25;
	}
	{
	LINE_NUMBER(250);
	frame[9].i = (jint(0));
	}
label_27:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_25;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8edge;
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[9].i))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(252);
	if ((frame[10].o) == nullptr) goto label_30;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isDeep_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_isDeep_R_boolean])(ctx, (frame[10].o));
	if (temp0 != 0) goto label_30;
	}
	{
	LINE_NUMBER(253);
	frame[7].i = (jint(0));
	LINE_NUMBER(254);
	goto label_25;
	}
label_30:;
	{
	LINE_NUMBER(250);
	INST_IINC(9, 1);
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)((func_mindustry_world_Tile_getTeamID_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_getTeamID_R_int])(ctx, (frame[1].o));
	frame[9].i = temp0;
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_34;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_34;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_35;
	}
label_34:;
	INST_ICONST(0);
	goto label_36;
label_35:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint((((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health) / (jfloat(40.0f))))), (80));
	sp[0].i = temp0;
	sp += 1;
	}
label_36:;
	{
	LINE_NUMBER(263);
	if ((frame[9].i) != 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture) == 0) goto label_37;
	}
	INST_SIPUSH(255);
	goto label_38;
label_37:;
	INST_ILOAD(9);
label_38:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = frame[1].o;
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(temp1))->F_isLiquid) == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_40;
	}
	INST_ICONST(1);
	goto label_41;
label_40:;
	INST_ICONST(0);
label_41:;
	{
	sp -= 4;
	sp[4].o = frame[1].o;
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_mindustry_world_Tile_legSolid_R_boolean) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_Tile_legSolid_R_boolean])(ctx, sp[4].o);
	jint temp1 = frame[2].i;
	jint temp2 = frame[5].i;
	jint temp3 = frame[3].i;
	jint temp4 = frame[4].i;
	sp[4].o = frame[1].o;
	LINE_NUMBER(271);
	jint temp5 = (jint)((func_mindustry_world_Tile_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_Tile_isDeep_R_boolean])(ctx, sp[4].o);
	sp[4].o = frame[1].o;
	LINE_NUMBER(272);
	sp[4].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[4].o);
	jint temp6 = (jint)((func_mindustry_world_blocks_environment_Floor_damages_R_boolean) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_damages_R_boolean])(ctx, sp[4].o);
	jint temp7 = frame[7].i;
	jint temp8 = frame[8].i;
	sp[4].o = frame[1].o;
	LINE_NUMBER(275);
	sp[4].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[4].o);
	jint temp9 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[4].o))->F_teamPassable;
	LINE_NUMBER(261);
	jint temp10 = (jint)SM_mindustry_gen_PathTile_get_int_int_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_R_int(ctx, sp[0].i, sp[1].i, sp[2].i, sp[3].i, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
	popStackFrame(ctx);
	return temp10;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_Pathfinder_get_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + ((frame[2].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)))));
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:start", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	((func_mindustry_ai_Pathfinder_stop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_stop])(ctx, (frame[0].o));
	LINE_NUMBER(286);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	clinit_java_lang_Thread(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Thread);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[1].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Pathfinder"_j))));
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_thread = (jref) sp[1].o;
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	((func_java_lang_Thread_setPriority_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setPriority_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	((func_java_lang_Thread_setDaemon_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setDaemon_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(298);
	((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_thread = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_util_TaskQueue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_clear])(ctx, sp[0].o);
	LINE_NUMBER(301);
	((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_needsRefresh = (jint(0));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:updateTile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(307);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(316);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	((func_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(319);
	((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_needsRefresh = (jint(1));
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:run", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_8:;
	{
	LINE_NUMBER(326);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(329);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPlaying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPlaying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_util_TaskQueue_run) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_run])(ctx, sp[0].o);
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_threadList;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_Pathfinder$Flowfield, sp[0].o));
	LINE_NUMBER(336);
	if (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_dirty) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_frontier;
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_13;
	}
	{
	LINE_NUMBER(337);
	((func_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(338);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_dirty = (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(341);
	((func_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long])(ctx, (frame[0].o), (frame[2].o), (clinit_mindustry_ai_Pathfinder(ctx), (jlong)SF_mindustry_ai_Pathfinder_maxUpdate));
	LINE_NUMBER(342);
	goto label_11;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(346);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(16ll)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(350);
	{ popExceptionFrames(frameRef, 1); goto label_17; }
label_2:;
	LINE_NUMBER(347);
	INST_ASTORE(1);
	popExceptionFrame(frameRef);
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	LINE_NUMBER(353);
	goto label_8;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(351);
	frame[1].o = sp[0].o;
	LINE_NUMBER(352);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[1].o));
	LINE_NUMBER(353);
	goto label_8;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:getField", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_cache;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id))), (frame[2].i))), (frame[3].i))) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(359);
	clinit_mindustry_ai_Pathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Pathfinder_fieldTypes;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (checkCast(ctx, &class_arc_func_Prov, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_func_Prov, sp[0].o)));
	frame[4].o = (checkCast(ctx, &class_mindustry_ai_Pathfinder$Flowfield, sp[0].o));
	LINE_NUMBER(360);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[4].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(361);
	sp[0].o = frame[4].o;
	clinit_mindustry_ai_Pathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_Pathfinder_costTypes;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_cost = (jref) (checkCast(ctx, &class_mindustry_ai_Pathfinder$PathCost, sp[1].o));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[4].o)))->F_targets;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(363);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[4].o)))->F_targets;
	((func_mindustry_ai_Pathfinder$Flowfield_getPositions_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_getPositions_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(365);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_cache;
	ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id))), (frame[2].i))), (frame[3].i)) = (frame[4].o);
	LINE_NUMBER(366);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_6);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_cache;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id))), (frame[2].i))), (frame[3].i)));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:getTargetTile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:getTargetTile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:getTargetTile", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(383);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(387);
	if (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_initialized) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_targets;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_9:;
	{
	LINE_NUMBER(392);
	if (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_refreshRate) <= 0) goto label_10;
	}
	{
	if (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_refreshRate) == (jint(2147483647))) goto label_10;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_lastUpdateTime));
	if ((longCompare(temp0, (jlong(((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_refreshRate))))) <= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_frontier;
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_10;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_lastUpdateTime = temp0;
	LINE_NUMBER(395);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tmpArray;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(396);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tmpArray;
	((func_mindustry_ai_Pathfinder$Flowfield_getPositions_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_getPositions_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(398);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_targets;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(399);
	((func_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions])(ctx, (frame[2].o));
	LINE_NUMBER(402);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_7);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(403);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(407);
	if (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_hasComplete) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_completeWeights;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[-1].o))->F_weights;
label_18:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(408);
	frame[6].i = ((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_resolution);
	LINE_NUMBER(409);
	frame[7].i = ((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_width);
	LINE_NUMBER(410);
	frame[8].i = ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) / (frame[6].i)) + ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) / (frame[6].i)) * (frame[7].i)));
	LINE_NUMBER(411);
	frame[9].i = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[8].i)));
	LINE_NUMBER(413);
	if ((frame[3].i) == 0) goto label_24;
	}
	clinit_arc_math_geom_Geometry(ctx);
	(sp++)->o = SF_arc_math_geom_Geometry_d8;
	goto label_25;
label_24:;
	clinit_arc_math_geom_Geometry(ctx);
	(sp++)->o = SF_arc_math_geom_Geometry_d4;
label_25:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(414);
	if ((frame[4].i) > 0) goto label_27;
	}
	INST_ACONST_NULL();
	goto label_28;
label_27:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_avoidance;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int])(ctx, sp[0].o);
	sp++;
label_28:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(416);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(417);
	frame[13].i = (jint(0));
	LINE_NUMBER(418);
	frame[14].o = (frame[10].o);
	frame[15].i = (((jarray) nullCheck(ctx, (frame[14].o)))->length);
	frame[16].i = (jint(0));
	}
label_32:;
	{
	if ((frame[16].i) >= (frame[15].i)) goto label_33;
	}
	{
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[16].i)));
	LINE_NUMBER(419);
	frame[18].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) + (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_x) * (frame[6].i)));
	frame[19].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) + (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_y) * (frame[6].i)));
	LINE_NUMBER(421);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[18].i), (frame[19].i));
	frame[20].o = sp[0].o;
	LINE_NUMBER(422);
	if ((frame[20].o) != nullptr) goto label_38;
	}
	goto label_39;
label_38:;
	{
	LINE_NUMBER(424);
	frame[21].i = (((frame[18].i) / (frame[6].i)) + (((frame[19].i) / (frame[6].i)) * (frame[7].i)));
	LINE_NUMBER(425);
	if ((frame[11].o) != nullptr) goto label_41;
	}
	INST_ICONST(0);
	goto label_42;
label_41:;
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[11].o), (frame[21].i))) <= ((jint(2147483647)) - (frame[4].i))) goto label_43;
	}
	INST_ICONST(1);
	goto label_42;
label_43:;
	INST_ICONST(0);
label_42:;
	{
	sp -= 1;
	frame[22].i = sp[0].i;
	LINE_NUMBER(426);
	frame[23].i = (((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[21].i))) + (frame[22].i));
	LINE_NUMBER(428);
	if ((frame[23].i) >= (frame[9].i)) goto label_39;
	}
	INST_ILOAD(22);
	if ((--sp)->i != 0) goto label_39;
	INST_ALOAD(12);
	if ((--sp)->o == nullptr) goto label_46;
	{
	if ((frame[23].i) >= (frame[13].i)) goto label_39;
	}
label_46:;
	{
	jint temp0 = (jint)((func_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean])(ctx, (frame[2].o), (frame[21].i));
	if (temp0 == 0) goto label_39;
	}
	{
	if (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_x) == 0) goto label_47;
	}
	{
	if (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_y) == 0) goto label_47;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_x)) / (frame[6].i)) + ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) / (frame[6].i)) * (frame[7].i));
	LINE_NUMBER(429);
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_39;
	}
	{
	jint temp0 = (jint)((func_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean])(ctx, (frame[2].o), ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) / (frame[6].i)) + (((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_y)) / (frame[6].i)) * (frame[7].i))));
	if (temp0 == 0) goto label_39;
	}
label_47:;
	{
	LINE_NUMBER(430);
	frame[12].o = (frame[20].o);
	LINE_NUMBER(431);
	frame[13].i = (frame[23].i);
	}
label_39:;
	{
	LINE_NUMBER(418);
	INST_IINC(16, 1);
	goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(435);
	if ((frame[12].o) == nullptr) goto label_50;
	}
	{
	if ((frame[13].i) == (jint(-1))) goto label_50;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_cost;
	clinit_mindustry_ai_Pathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_Pathfinder_costTypes;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_items;
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_ai_Pathfinder$PathCost, 1), sp[1].o)), (jint(0))))) goto label_51;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_dangerous_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_dangerous_R_boolean])(ctx, (frame[12].o));
	if (temp0 == 0) goto label_51;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_dangerous_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_dangerous_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_51;
	}
label_50:;
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_51:;
	{
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return (frame[12].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:updateTargets", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(444);
	sp[0].o = frame[1].o;
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_search = (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_search) + (jint(1)));
	LINE_NUMBER(447);
	if (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_search) < (32767)) goto label_8;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_searches;
	SM_java_util_Arrays_fill_Array1_short_short(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(449);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_search = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_targets;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(454);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_targets;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_12;
	}
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_targets;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(457);
	jint temp1 = frame[4].i;
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	if (temp1 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	goto label_16;
label_15:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = (jint(0));
	LINE_NUMBER(460);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_searches;
	ARRAY_ACCESS(jshort, sp[0].o, (frame[4].i)) = (jshort(((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_search)));
	LINE_NUMBER(461);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_frontier;
	((func_arc_struct_IntQueue_addFirst_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_addFirst_int])(ctx, sp[0].o, (frame[4].i));
	}
label_16:;
	{
	LINE_NUMBER(454);
	INST_IINC(3, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(463);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_19;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_19:;
	LINE_NUMBER(464);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:preloadPath", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(467);
	((func_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions])(ctx, (frame[1].o));
	LINE_NUMBER(468);
	((func_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(469);
	((func_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long])(ctx, (frame[0].o), (frame[1].o), (jlong(-1ll)));
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:registerPath", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(478);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_lastUpdateTime = temp0;
	LINE_NUMBER(479);
	((func_mindustry_ai_Pathfinder$Flowfield_setup) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_setup])(ctx, (frame[1].o));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_threadList;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(484);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_8);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(487);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(-1)));
	LINE_NUMBER(490);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_targets;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_targets;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(492);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(493);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_frontier;
	((func_arc_struct_IntQueue_addFirst_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_addFirst_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(490);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(495);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:updateFrontier", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_frontier;
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(500);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[5].l = temp0;
	LINE_NUMBER(502);
	frame[7].i = (jint(0));
	LINE_NUMBER(503);
	frame[8].i = ((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_width);
	frame[9].i = ((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_height);
	}
label_7:;
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_frontier;
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_frontier;
	jint temp0 = (jint)((func_arc_struct_IntQueue_removeLast_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_removeLast_R_int])(ctx, sp[0].o);
	frame[10].i = temp0;
	LINE_NUMBER(507);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	if (sp[0].o != nullptr) goto label_11;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	frame[11].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[10].i)));
	LINE_NUMBER(511);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_frontier;
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) < ((frame[8].i) * (frame[9].i))) goto label_13;
	}
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_frontier;
	((func_arc_struct_IntQueue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_clear])(ctx, sp[0].o);
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(516);
	if ((frame[11].i) == (jint(-1))) goto label_16;
	}
	{
	LINE_NUMBER(517);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[12].o = sp[0].o;
	frame[13].i = (((jarray) nullCheck(ctx, (frame[12].o)))->length);
	frame[14].i = (jint(0));
	}
label_18:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_16;
	}
	{
	frame[15].o = ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (frame[14].i)));
	LINE_NUMBER(519);
	frame[16].i = (((frame[10].i) % (frame[8].i)) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[15].o)))->F_x));
	frame[17].i = (((frame[10].i) / (frame[8].i)) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[15].o)))->F_y));
	LINE_NUMBER(521);
	if ((frame[16].i) < 0) goto label_22;
	}
	INST_ILOAD(17);
	if ((--sp)->i < 0) goto label_22;
	{
	if ((frame[16].i) >= (frame[8].i)) goto label_22;
	}
	{
	if ((frame[17].i) < (frame[9].i)) goto label_23;
	}
	goto label_22;
label_23:;
	{
	LINE_NUMBER(523);
	frame[18].i = ((frame[16].i) + ((frame[17].i) * (frame[8].i)));
	LINE_NUMBER(524);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((func_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int])(ctx, sp[0].o, sp[1].o, (frame[18].i));
	frame[19].i = temp0;
	LINE_NUMBER(526);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[18].i))) > ((frame[11].i) + (frame[19].i))) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_searches;
	if (((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[18].i))) >= ((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_search)) goto label_22;
	}
label_26:;
	{
	if ((frame[19].i) == (jint(-1))) goto label_22;
	}
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_frontier;
	((func_arc_struct_IntQueue_addFirst_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_addFirst_int])(ctx, sp[0].o, (frame[18].i));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	ARRAY_ACCESS(jint, sp[0].o, (frame[18].i)) = ((frame[11].i) + (frame[19].i));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_searches;
	ARRAY_ACCESS(jshort, sp[0].o, (frame[18].i)) = (jshort(((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_search)));
	}
label_22:;
	{
	LINE_NUMBER(517);
	INST_IINC(14, 1);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(535);
	if ((longCompare((frame[2].l), (jlong(0)))) < 0) goto label_30;
	}
	{
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	if (temp0 < (200)) goto label_30;
	}
	{
	LINE_NUMBER(536);
	frame[7].i = (jint(0));
	LINE_NUMBER(537);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceNanos_long_R_long(ctx, (frame[5].l));
	if ((longCompare(temp0, (frame[2].l))) < 0) goto label_30;
	}
	LINE_NUMBER(538);
	popStackFrame(ctx);
	INST_RETURN();
label_30:;
	LINE_NUMBER(541);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(544);
	if ((frame[4].i) == 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_frontier;
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_34;
	}
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_completeWeights;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_weights;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(546);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_hasComplete = (jint(1));
	}
label_34:;
	LINE_NUMBER(548);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$registerPath$0_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$registerPath$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_mainList;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$getTargetTile$0_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$getTargetTile$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(402);
	((func_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$getField$0_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$getField$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	((func_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$updateTile$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$updateTile$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(310);
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(311);
	jint temp1 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	if (temp1 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int])(ctx, (frame[0].o), (frame[1].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	}
label_2:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$new$5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$new$5", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	if (((jint)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_needsRefresh) != 0) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(190);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(191);
	if ((longCompare(((frame[1].l) - ((jlong)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_lastRefreshTime)), (jlong(100ll)))) >= 0) goto label_9;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(193);
	((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_lastRefreshTime = (frame[1].l);
	LINE_NUMBER(194);
	((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_needsRefresh = (jint(0));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_mainList;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ai_Pathfinder$Flowfield, sp[0].o));
	LINE_NUMBER(199);
	if ((frame[4].o) == nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[4].o)))->F_targets;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(202);
	((func_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions])(ctx, (frame[4].o));
	LINE_NUMBER(203);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_15;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_15:;
	LINE_NUMBER(205);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_java_lang_Runnable_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$new$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$new$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_threadList;
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
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_Pathfinder$Flowfield, sp[0].o));
	LINE_NUMBER(210);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[2].o)))->F_dirty = (jint(1));
	LINE_NUMBER(211);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$new$4_mindustry_game_EventType$TilePreChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$new$4", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(163);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_3;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile])(ctx, (frame[2].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(165);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(168);
	frame[5].i = (jint(0));
	LINE_NUMBER(169);
	frame[6].i = (jint(0));
	}
label_12:;
	{
	if ((frame[6].i) >= (jint(4))) goto label_13;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile])(ctx, (frame[4].o), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(171);
	if ((frame[7].o) == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(172);
	frame[5].i = (jint(1));
	LINE_NUMBER(173);
	goto label_13;
	}
label_16:;
	{
	LINE_NUMBER(169);
	INST_IINC(6, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[4].o));
	frame[6].i = temp0;
	LINE_NUMBER(178);
	if ((frame[5].i) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[6].i)) goto label_8;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = frame[6].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (jint(-2097153)));
	}
label_8:;
	{
	LINE_NUMBER(163);
	INST_IINC(3, 1);
	goto label_5;
	}
label_3:;
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$new$3_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$new$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$new$2_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$new$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	((func_mindustry_ai_Pathfinder_stop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_stop])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$new$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	((func_mindustry_ai_Pathfinder_stop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_stop])(ctx, (frame[0].o));
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, (temp0 * temp1));
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_ai_Pathfinder(ctx);
	SF_mindustry_ai_Pathfinder_wwidth = temp2;
	LINE_NUMBER(122);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	clinit_mindustry_ai_Pathfinder(ctx);
	SF_mindustry_ai_Pathfinder_wheight = temp3;
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_threadList = (jref) sp[1].o;
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_Pathfinder *) NULL_CHECK(sp[0].o))->F_mainList = (jref) sp[1].o;
	LINE_NUMBER(125);
	((func_mindustry_ai_Pathfinder_clearCache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_clearCache])(ctx, (frame[0].o));
	LINE_NUMBER(127);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(128);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int])(ctx, (frame[0].o), (frame[3].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(127);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	jint temp0 = (jint)((func_mindustry_game_Team_needsFlowField_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_needsFlowField_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[2].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_waveTeam;
	sp[1].o = (jobject)((func_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield])(ctx, sp[1].o, sp[2].o, (jint(0)), (jint(0)));
	((func_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	SM_arc_util_Log_debug_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"Preloading ground enemy flowfield."_j))));
	LINE_NUMBER(138);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[2].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_waveTeam;
	sp[1].o = (jobject)((func_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield])(ctx, sp[1].o, sp[2].o, (jint(2)), (jint(0)));
	((func_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(140);
	SM_arc_util_Log_debug_java_lang_Object(ctx, (((jobject) createStringLiteral(ctx, u8"Preloading naval enemy flowfield."_j))));
	}
label_13:;
	{
	LINE_NUMBER(145);
	((func_mindustry_ai_Pathfinder_start) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_Pathfinder_start])(ctx, (frame[0].o));
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_Pathfinder_lambda$new$1_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ai_Pathfinder_lambda$static$5_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$static$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != (frame[0].i)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_teamPassable_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(-1);
	goto label_4;
label_3:;
	{
	LINE_NUMBER(90);
	jint temp0 = jint(1);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_health_int_R_int(ctx, (frame[1].i));
	jint temp2 = temp0 + (temp1 * (jint(5)));
	LINE_NUMBER(91);
	jint temp3 = (jint)SM_mindustry_gen_PathTile_nearSolid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp2;
	sp += 1;
	if (temp3 == 0) goto label_6;
	}
	INST_ICONST(2);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	INST_IADD();
label_4:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_ai_Pathfinder_lambda$static$4_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$static$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ai_Pathfinder_lambda$static$3_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$static$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_deep_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(81);
	jint temp0 = jint(1);
	jint temp1 = frame[1].i;
	LINE_NUMBER(80);
	jint temp2 = (jint)SM_mindustry_gen_PathTile_health_int_R_int(ctx, temp1);
	jint temp3 = temp0 + (temp2 * (jint(3)));
	LINE_NUMBER(81);
	jint temp4 = (jint)SM_mindustry_gen_PathTile_nearSolid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp3;
	sp += 1;
	if (temp4 == 0) goto label_6;
	}
	INST_ICONST(2);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(82);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_nearLiquid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_9;
	}
	INST_ICONST(2);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	INST_IADD();
label_3:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_ai_Pathfinder_lambda$static$2_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$static$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_liquid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 == (frame[0].i)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_SIPUSH(7000);
	goto label_3;
label_2:;
	{
	jint temp0 = jint(1);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_health_int_R_int(ctx, (frame[1].i));
	jint temp2 = temp0 + (temp1 * (jint(5)));
	sp[0].i = temp2;
	sp += 1;
	}
label_3:;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_nearGround_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_nearSolid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_BIPUSH(14);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(74);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_deep_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_8;
	}
	INST_ICONST(0);
	goto label_9;
label_8:;
	INST_ICONST(1);
label_9:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(75);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_damages_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_11;
	}
	INST_BIPUSH(35);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ai_Pathfinder_lambda$static$1_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$static$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_legSolid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	LINE_NUMBER(67);
	jint temp0 = jint(1);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_deep_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_3;
	}
	INST_SIPUSH(6000);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(68);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_6;
	}
	INST_ICONST(5);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	INST_IADD();
label_2:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_ai_Pathfinder_lambda$static$0_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:lambda$static$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(57);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_allDeep_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != (frame[0].i)) goto label_2;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_teamPassable_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != 0) goto label_4;
	}
label_3:;
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_4;
	}
label_1:;
	INST_ICONST(-1);
	goto label_5;
label_4:;
	{
	LINE_NUMBER(61);
	jint temp0 = jint(1);
	jint temp1 = frame[1].i;
	LINE_NUMBER(58);
	jint temp2 = (jint)SM_mindustry_gen_PathTile_health_int_R_int(ctx, temp1);
	jint temp3 = temp0 + (temp2 * (jint(5)));
	LINE_NUMBER(59);
	jint temp4 = (jint)SM_mindustry_gen_PathTile_nearSolid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp3;
	sp += 1;
	if (temp4 == 0) goto label_8;
	}
	INST_ICONST(2);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(60);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_nearLiquid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_11;
	}
	INST_BIPUSH(6);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(61);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_deep_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_14;
	}
	INST_SIPUSH(6000);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(62);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_damages_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_17;
	}
	INST_BIPUSH(30);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	INST_IADD();
label_5:;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_ai_Pathfinder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ai_Pathfinder_neverRefresh = jint(2147483647);
	SF_mindustry_ai_Pathfinder_updateFPS = jint(60);
	SF_mindustry_ai_Pathfinder_updateInterval = jint(16);
	SF_mindustry_ai_Pathfinder_impassable = jint(-1);
	SF_mindustry_ai_Pathfinder_fieldCore = jint(0);
	SF_mindustry_ai_Pathfinder_maxFields = jint(10);
	SF_mindustry_ai_Pathfinder_costGround = jint(0);
	SF_mindustry_ai_Pathfinder_costLegs = jint(1);
	SF_mindustry_ai_Pathfinder_costNaval = jint(2);
	SF_mindustry_ai_Pathfinder_costNeoplasm = jint(3);
	SF_mindustry_ai_Pathfinder_costNone = jint(4);
	SF_mindustry_ai_Pathfinder_costHover = jint(5);
	SF_mindustry_ai_Pathfinder_maxCosts = jint(8);
	SF_mindustry_ai_Pathfinder_refreshIntervalMs = jlong(100ll);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder(ctx);
	{
	LINE_NUMBER(26);
	jlong temp0 = (jlong)SM_arc_util_Time_millisToNanos_long_R_long(ctx, (jlong(8ll)));
	clinit_mindustry_ai_Pathfinder(ctx);
	SF_mindustry_ai_Pathfinder_maxUpdate = temp0;
	LINE_NUMBER(40);
	sp[0].o = (jobject)createArray(ctx, &class_arc_func_Prov, (jint(1)));
	jint temp1 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_Pathfinder(ctx);
	SF_mindustry_ai_Pathfinder_fieldTypes = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ai_Pathfinder$PathCost, (6));
	jint temp2 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_6(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_6 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_6);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_7(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_7 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_7);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_8(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_8 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_8);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_9(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_9 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_9);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_10(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_10 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_10);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_11(ctx);
		auto proxy = (mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_11 *) gcAlloc(ctx, &class_mindustry_ai_Pathfinder_invoke_mindustry_ai_Pathfinder$PathCost_11);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_Pathfinder(ctx);
	SF_mindustry_ai_Pathfinder_costTypes = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_Pathfinder;
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

	{ // Field thread
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getTargetTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getTargetTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getTargetTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_ai_Pathfinder[] {
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
	(void *) M_mindustry_ai_Pathfinder_run,
	(void *) M_mindustry_ai_Pathfinder_clearCache,
	(void *) M_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int,
	(void *) M_mindustry_ai_Pathfinder_get_int_int_R_int,
	(void *) M_mindustry_ai_Pathfinder_start,
	(void *) M_mindustry_ai_Pathfinder_stop,
	(void *) M_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield,
	(void *) M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield,
	(void *) M_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield,
	(void *) M_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield,
	(void *) M_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long,
	(void *) M_mindustry_ai_Pathfinder_lambda$registerPath$0_mindustry_ai_Pathfinder$Flowfield,
	(void *) M_mindustry_ai_Pathfinder_lambda$getTargetTile$0_mindustry_ai_Pathfinder$Flowfield,
	(void *) M_mindustry_ai_Pathfinder_lambda$getField$0_mindustry_ai_Pathfinder$Flowfield,
	(void *) M_mindustry_ai_Pathfinder_lambda$updateTile$0_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder_lambda$new$5,
	(void *) M_mindustry_ai_Pathfinder_lambda$new$6,
	(void *) M_mindustry_ai_Pathfinder_lambda$new$4_mindustry_game_EventType$TilePreChangeEvent,
	(void *) M_mindustry_ai_Pathfinder_lambda$new$3_mindustry_game_EventType$TileChangeEvent,
	(void *) M_mindustry_ai_Pathfinder_lambda$new$2_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_ai_Pathfinder_lambda$new$0_mindustry_game_EventType$WorldLoadEvent,
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
	{ "run", "()V" },
	{ "clearCache", "()V" },
	{ "packTile", "(Lmindustry/world/Tile;)I" },
	{ "get", "(II)I" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "updateTile", "(Lmindustry/world/Tile;)V" },
	{ "getField", "(Lmindustry/game/Team;II)Lmindustry/ai/Pathfinder$Flowfield;" },
	{ "getTargetTile", "(Lmindustry/world/Tile;Lmindustry/ai/Pathfinder$Flowfield;)Lmindustry/world/Tile;" },
	{ "getTargetTile", "(Lmindustry/world/Tile;Lmindustry/ai/Pathfinder$Flowfield;Z)Lmindustry/world/Tile;" },
	{ "getTargetTile", "(Lmindustry/world/Tile;Lmindustry/ai/Pathfinder$Flowfield;ZI)Lmindustry/world/Tile;" },
	{ "updateTargets", "(Lmindustry/ai/Pathfinder$Flowfield;)V" },
	{ "preloadPath", "(Lmindustry/ai/Pathfinder$Flowfield;)V" },
	{ "registerPath", "(Lmindustry/ai/Pathfinder$Flowfield;)V" },
	{ "updateFrontier", "(Lmindustry/ai/Pathfinder$Flowfield;J)V" },
	{ "lambda$registerPath$0", "(Lmindustry/ai/Pathfinder$Flowfield;)V" },
	{ "lambda$getTargetTile$0", "(Lmindustry/ai/Pathfinder$Flowfield;)V" },
	{ "lambda$getField$0", "(Lmindustry/ai/Pathfinder$Flowfield;)V" },
	{ "lambda$updateTile$0", "(Lmindustry/world/Tile;)V" },
	{ "lambda$new$5", "()V" },
	{ "lambda$new$6", "()V" },
	{ "lambda$new$4", "(Lmindustry/game/EventType$TilePreChangeEvent;)V" },
	{ "lambda$new$3", "(Lmindustry/game/EventType$TileChangeEvent;)V" },
	{ "lambda$new$2", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static jclass innerClasses[] {
	&class_mindustry_ai_Pathfinder$Flowfield,
	&class_mindustry_ai_Pathfinder$PathCost,
	&class_mindustry_ai_Pathfinder$PathTileStruct,
	&class_mindustry_ai_Pathfinder$PositionTarget,
	&class_mindustry_ai_Pathfinder$EnemyCoreField,
};

static FieldMetadata fields[] {
	{ "maxUpdate", &class_long, (intptr_t) &SF_mindustry_ai_Pathfinder_maxUpdate, "J", 26 },
	{ "neverRefresh", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_neverRefresh, "I", 26 },
	{ "updateFPS", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_updateFPS, "I", 26 },
	{ "updateInterval", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_updateInterval, "I", 26 },
	{ "wwidth", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_wwidth, "I", 8 },
	{ "wheight", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_wheight, "I", 8 },
	{ "impassable", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_impassable, "I", 24 },
	{ "fieldCore", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_fieldCore, "I", 25 },
	{ "maxFields", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_maxFields, "I", 25 },
	{ "fieldTypes", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_Pathfinder_fieldTypes, "Larc/struct/Seq;", 25 },
	{ "costGround", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_costGround, "I", 25 },
	{ "costLegs", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_costLegs, "I", 25 },
	{ "costNaval", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_costNaval, "I", 25 },
	{ "costNeoplasm", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_costNeoplasm, "I", 25 },
	{ "costNone", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_costNone, "I", 25 },
	{ "costHover", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_costHover, "I", 25 },
	{ "maxCosts", &class_int, (intptr_t) &SF_mindustry_ai_Pathfinder_maxCosts, "I", 25 },
	{ "costTypes", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_Pathfinder_costTypes, "Larc/struct/Seq;", 25 },
	{ "tiles", getArrayClass(&class_int, 1), offsetof(mindustry_ai_Pathfinder, F_tiles), "[I", 0 },
	{ "cache", getArrayClass(&class_mindustry_ai_Pathfinder$Flowfield, 3), offsetof(mindustry_ai_Pathfinder, F_cache), "[[[Lmindustry/ai/Pathfinder$Flowfield;", 0 },
	{ "threadList", &class_arc_struct_Seq, offsetof(mindustry_ai_Pathfinder, F_threadList), "Larc/struct/Seq;", 0 },
	{ "mainList", &class_arc_struct_Seq, offsetof(mindustry_ai_Pathfinder, F_mainList), "Larc/struct/Seq;", 0 },
	{ "queue", &class_arc_util_TaskQueue, offsetof(mindustry_ai_Pathfinder, F_queue), "Larc/util/TaskQueue;", 0 },
	{ "thread", &class_java_lang_Thread, offsetof(mindustry_ai_Pathfinder, F_thread), "Ljava/lang/Thread;", 0 },
	{ "tmpArray", &class_arc_struct_IntSeq, offsetof(mindustry_ai_Pathfinder, F_tmpArray), "Larc/struct/IntSeq;", 0 },
	{ "needsRefresh", &class_boolean, offsetof(mindustry_ai_Pathfinder, F_needsRefresh), "Z", 0 },
	{ "lastRefreshTime", &class_long, offsetof(mindustry_ai_Pathfinder, F_lastRefreshTime), "J", 2 },
	{ "refreshIntervalMs", &class_long, (intptr_t) &SF_mindustry_ai_Pathfinder_refreshIntervalMs, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_Pathfinder, 0, "()V", 1 },
	{ "clearCache", (intptr_t) M_mindustry_ai_Pathfinder_clearCache, VTABLE_mindustry_ai_Pathfinder_clearCache, "()V", 2 },
	{ "packTile", (intptr_t) M_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int, VTABLE_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int, "(Lmindustry/world/Tile;)I", 1 },
	{ "get", (intptr_t) M_mindustry_ai_Pathfinder_get_int_int_R_int, VTABLE_mindustry_ai_Pathfinder_get_int_int_R_int, "(II)I", 1 },
	{ "start", (intptr_t) M_mindustry_ai_Pathfinder_start, VTABLE_mindustry_ai_Pathfinder_start, "()V", 2 },
	{ "stop", (intptr_t) M_mindustry_ai_Pathfinder_stop, VTABLE_mindustry_ai_Pathfinder_stop, "()V", 2 },
	{ "updateTile", (intptr_t) M_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile, VTABLE_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "run", (intptr_t) M_mindustry_ai_Pathfinder_run, VTABLE_mindustry_ai_Pathfinder_run, "()V", 1 },
	{ "getField", (intptr_t) M_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield, VTABLE_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield, "(Lmindustry/game/Team;II)Lmindustry/ai/Pathfinder$Flowfield;", 1 },
	{ "getTargetTile", (intptr_t) M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_R_mindustry_world_Tile, VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_R_mindustry_world_Tile, "(Lmindustry/world/Tile;Lmindustry/ai/Pathfinder$Flowfield;)Lmindustry/world/Tile;", 1 },
	{ "getTargetTile", (intptr_t) M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile, VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile, "(Lmindustry/world/Tile;Lmindustry/ai/Pathfinder$Flowfield;Z)Lmindustry/world/Tile;", 1 },
	{ "getTargetTile", (intptr_t) M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile, VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile, "(Lmindustry/world/Tile;Lmindustry/ai/Pathfinder$Flowfield;ZI)Lmindustry/world/Tile;", 1 },
	{ "updateTargets", (intptr_t) M_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield, VTABLE_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield, "(Lmindustry/ai/Pathfinder$Flowfield;)V", 2 },
	{ "preloadPath", (intptr_t) M_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield, VTABLE_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield, "(Lmindustry/ai/Pathfinder$Flowfield;)V", 2 },
	{ "registerPath", (intptr_t) M_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield, VTABLE_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield, "(Lmindustry/ai/Pathfinder$Flowfield;)V", 2 },
	{ "updateFrontier", (intptr_t) M_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long, VTABLE_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long, "(Lmindustry/ai/Pathfinder$Flowfield;J)V", 2 },
	{ "lambda$registerPath$0", (intptr_t) M_mindustry_ai_Pathfinder_lambda$registerPath$0_mindustry_ai_Pathfinder$Flowfield, VTABLE_mindustry_ai_Pathfinder_lambda$registerPath$0_mindustry_ai_Pathfinder$Flowfield, "(Lmindustry/ai/Pathfinder$Flowfield;)V", 4098 },
	{ "lambda$getTargetTile$0", (intptr_t) M_mindustry_ai_Pathfinder_lambda$getTargetTile$0_mindustry_ai_Pathfinder$Flowfield, VTABLE_mindustry_ai_Pathfinder_lambda$getTargetTile$0_mindustry_ai_Pathfinder$Flowfield, "(Lmindustry/ai/Pathfinder$Flowfield;)V", 4098 },
	{ "lambda$getField$0", (intptr_t) M_mindustry_ai_Pathfinder_lambda$getField$0_mindustry_ai_Pathfinder$Flowfield, VTABLE_mindustry_ai_Pathfinder_lambda$getField$0_mindustry_ai_Pathfinder$Flowfield, "(Lmindustry/ai/Pathfinder$Flowfield;)V", 4098 },
	{ "lambda$updateTile$0", (intptr_t) M_mindustry_ai_Pathfinder_lambda$updateTile$0_mindustry_world_Tile, VTABLE_mindustry_ai_Pathfinder_lambda$updateTile$0_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_ai_Pathfinder_lambda$new$5, VTABLE_mindustry_ai_Pathfinder_lambda$new$5, "()V", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_ai_Pathfinder_lambda$new$6, VTABLE_mindustry_ai_Pathfinder_lambda$new$6, "()V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_ai_Pathfinder_lambda$new$4_mindustry_game_EventType$TilePreChangeEvent, VTABLE_mindustry_ai_Pathfinder_lambda$new$4_mindustry_game_EventType$TilePreChangeEvent, "(Lmindustry/game/EventType$TilePreChangeEvent;)V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ai_Pathfinder_lambda$new$3_mindustry_game_EventType$TileChangeEvent, VTABLE_mindustry_ai_Pathfinder_lambda$new$3_mindustry_game_EventType$TileChangeEvent, "(Lmindustry/game/EventType$TileChangeEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ai_Pathfinder_lambda$new$2_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_ai_Pathfinder_lambda$new$2_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ai_Pathfinder_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_ai_Pathfinder_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_ai_Pathfinder_lambda$new$1_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_ai_Pathfinder_lambda$static$5_int_int_R_int, 0, "(II)I", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_ai_Pathfinder_lambda$static$4_int_int_R_int, 0, "(II)I", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_ai_Pathfinder_lambda$static$3_int_int_R_int, 0, "(II)I", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_ai_Pathfinder_lambda$static$2_int_int_R_int, 0, "(II)I", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_ai_Pathfinder_lambda$static$1_int_int_R_int, 0, "(II)I", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_ai_Pathfinder_lambda$static$0_int_int_R_int, 0, "(II)I", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_Pathfinder, 0, "()V", 8 },
};

Class class_mindustry_ai_Pathfinder{
		.nativeName = (intptr_t) "mindustry/ai/Pathfinder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_Pathfinder),
		.classVtable = (intptr_t) vtable_mindustry_ai_Pathfinder,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_Pathfinder,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_Pathfinder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_Pathfinder = registerClass(&class_mindustry_ai_Pathfinder);

}
