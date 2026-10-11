#include "mindustry/world/Build.h"
#include "mindustry/game/EventType_BlockBuildBeginEvent.h"
#include "mindustry/world/Build_invoke_arc_func_Boolf_1.h"
#include "arc/Events.h"
#include "mindustry/game/EventType_BuildRotateEvent.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/content/Fx.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/Build_invoke_arc_func_Cons_3.h"
#include "mindustry/world/Build_invoke_arc_func_Cons_2.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/type/Liquid.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/entities/Units.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/game/FogControl.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/world/Edges.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/game/Teams.h"
#include "arc/audio/Sound.h"
#include "mindustry/game/EventType_BlockBuildEndEvent.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/Build.h"

extern "C" {

jobject SF_mindustry_world_Build_tmp;

void mark_mindustry_world_Build(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_Build_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Build_tmp)->clazz)->markFunction)((jobject) SF_mindustry_world_Build_tmp, mark, depth + 1);
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
	auto self = (mindustry_world_Build *) object;
}

void init_mindustry_world_Build(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Build_beginBreak_mindustry_gen_Unit_mindustry_game_Team_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:beginBreak", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(30);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(32);
	frame[5].f = (jfloat(1));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_healthf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_healthf_R_float])(ctx, sp[0].o);
	frame[5].f = temp0;
	}
label_5:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation;
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(42);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[7].o)))->F_instantDeconstruct) == 0) goto label_11;
	}
	{
	LINE_NUMBER(43);
	SM_mindustry_world_blocks_ConstructBlock_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(ctx, (frame[4].o), (frame[7].o), (frame[0].o));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_mindustry_world_blocks_ConstructBlock_get_int_R_mindustry_world_blocks_ConstructBlock(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[7].o)))->F_size));
	frame[8].o = sp[0].o;
	LINE_NUMBER(49);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (jint(1)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	((func_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_dead = (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(56);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, (frame[4].o), (frame[8].o), (frame[1].o), (frame[6].i));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	frame[10].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, sp[0].o));
	LINE_NUMBER(58);
	((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_setDeconstruct_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_setDeconstruct_mindustry_world_Block])(ctx, (frame[10].o), (frame[7].o));
	LINE_NUMBER(59);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[10].o)))->F_prevBuild = (jref) (frame[9].o);
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_maxHealth) * (frame[5].f));
	LINE_NUMBER(62);
	if ((frame[0].o) == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastAccessed = (jref) sp[1].o;
	}
label_25:;
	{
	LINE_NUMBER(66);
	clinit_mindustry_game_EventType$BlockBuildBeginEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockBuildBeginEvent);
	init_mindustry_game_EventType$BlockBuildBeginEvent_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Unit_boolean(ctx, sp[0].o, (frame[4].o), (frame[1].o), (frame[0].o), (jint(1)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Build_beginPlace_mindustry_gen_Unit_mindustry_world_Block_mindustry_game_Team_int_int_int_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4, jint param5, jobject param6) {
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:beginPlace", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i));
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(76);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(79);
	if ((frame[7].o) != nullptr) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[7].o));
	if (sp[0].o != (frame[2].o)) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_block;
	if (sp[0].o != (frame[1].o)) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_quickRotate) == 0) goto label_5;
	}
	{
	LINE_NUMBER(83);
	if ((frame[0].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastAccessed = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	frame[8].i = ((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (frame[5].i), (jint(4)));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	((func_mindustry_gen_Building_updateProximity) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updateProximity])(ctx, sp[0].o);
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	((func_mindustry_gen_Building_noSleep) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_noSleep])(ctx, sp[0].o);
	LINE_NUMBER(88);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rotateBlock;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp1, temp2, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	LINE_NUMBER(89);
	clinit_mindustry_game_EventType$BuildRotateEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildRotateEvent);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	init_mindustry_game_EventType$BuildRotateEvent_mindustry_gen_Building_mindustry_gen_Unit_int(ctx, sp[0].o, sp[1].o, (frame[0].o), (frame[8].i));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(90);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_14;
	}
	{
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockRotate;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (jfloat(1)));
	}
label_14:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[7].o));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_block;
	if (sp[0].o != (frame[1].o)) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_allowDerelictRepair) == 0) goto label_15;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_derelictRepair) == 0) goto label_15;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation = (frame[5].i);
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	((func_mindustry_gen_Building_changeTeam_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_enabled = (jint(1));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	((func_mindustry_gen_Building_powerGraphRemoved) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_powerGraphRemoved])(ctx, sp[0].o);
	}
label_20:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	((func_mindustry_gen_Building_checkAllowUpdate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_checkAllowUpdate])(ctx, sp[0].o);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	((func_mindustry_gen_Building_updateProximity) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updateProximity])(ctx, sp[0].o);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	((func_mindustry_gen_Building_onRepaired) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onRepaired])(ctx, sp[0].o);
	LINE_NUMBER(106);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tileChanges = (((jint)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tileChanges) + (jint(1)));
	LINE_NUMBER(108);
	if ((frame[0].o) == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastAccessed = (jref) sp[1].o;
	}
label_27:;
	{
	LINE_NUMBER(110);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, (frame[2].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_placeEffect;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[7].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[7].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size))));
	LINE_NUMBER(112);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rotateBlock;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp2, temp3, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	LINE_NUMBER(113);
	SM_mindustry_world_blocks_ConstructBlock_playRepairSound_mindustry_game_Team_mindustry_world_Tile(ctx, (frame[2].o), (frame[7].o));
	}
label_28:;
	{
	LINE_NUMBER(116);
	clinit_mindustry_game_EventType$BlockBuildEndEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockBuildEndEvent);
	sp[1].o = frame[7].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[2].o;
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[4].o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, sp[4].o);
	init_mindustry_game_EventType$BlockBuildEndEvent_mindustry_world_Tile_mindustry_gen_Unit_mindustry_game_Team_boolean_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}
label_15:;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Build_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_Build_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_Build_invoke_arc_func_Cons_2);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(129);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_instantBuild) == 0) goto label_34;
	}
	{
	LINE_NUMBER(130);
	clinit_mindustry_game_EventType$BlockBuildBeginEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockBuildBeginEvent);
	init_mindustry_game_EventType$BlockBuildBeginEvent_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Unit_boolean(ctx, sp[0].o, (frame[7].o), (frame[2].o), (frame[0].o), (jint(0)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(131);
	sp[0].o = frame[1].o;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_block;
	((func_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[0].o));
	LINE_NUMBER(132);
	SM_mindustry_world_blocks_ConstructBlock_constructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object(ctx, (frame[7].o), (frame[1].o), (frame[0].o), (jbyte((frame[5].i))), (frame[2].o), (frame[6].o));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}
label_34:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(137);
	sp[0].o = (jobject)SM_mindustry_world_blocks_ConstructBlock_get_int_R_mindustry_world_blocks_ConstructBlock(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size));
	frame[9].o = sp[0].o;
	LINE_NUMBER(138);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (9));
	frame[10].o = sp[0].o;
	LINE_NUMBER(140);
	((func_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block])(ctx, (frame[1].o), (frame[7].o), (frame[8].o));
	LINE_NUMBER(141);
	clinit_mindustry_world_Build(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Build_tmp;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(143);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Build_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_Build_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_Build_invoke_arc_func_Cons_3);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(149);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, (frame[7].o), (frame[9].o), (frame[2].o), (frame[5].i));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	frame[11].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, sp[0].o));
	LINE_NUMBER(153);
	sp[0].o = frame[11].o;
	sp += 1;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[8].o)))->F_size) != ((jint)((mindustry_world_Block *) NULL_CHECK((frame[9].o)))->F_size)) goto label_47;
	}
	INST_ALOAD(8);
	goto label_48;
label_47:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
label_48:;
	{
	sp -= 2;
	((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_setConstruct_mindustry_world_Block_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_setConstruct_mindustry_world_Block_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(154);
	((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[11].o)))->F_prevBuild = (jref) (frame[10].o);
	LINE_NUMBER(155);
	if ((frame[0].o) == nullptr) goto label_51;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_51;
	}
	{
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[0].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastAccessed = (jref) sp[1].o;
	}
label_51:;
	{
	LINE_NUMBER(157);
	clinit_mindustry_game_EventType$BlockBuildBeginEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockBuildBeginEvent);
	init_mindustry_game_EventType$BlockBuildBeginEvent_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Unit_boolean(ctx, sp[0].o, (frame[7].o), (frame[2].o), (frame[0].o), (jint(0)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(159);
	((func_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit])(ctx, (frame[1].o), (frame[7].o), (frame[8].o), (frame[0].o));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:validPlace", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:validPlace", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5, jbool param6) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:validPlace", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlaceIgnoreUnits_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_world_Build_checkNoUnitOverlap_mindustry_world_Block_int_int_R_boolean(ctx, (frame[0].o), (frame[2].i), (frame[3].i));
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

jbool SM_mindustry_world_Build_checkNoUnitOverlap_mindustry_world_Block_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:checkNoUnitOverlap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(179);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solidifes) == 0) goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)SM_mindustry_entities_Units_anyEntities_float_float_float_float_R_boolean(ctx, (((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)) - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) / (jfloat(2)))), (((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)) - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) / (jfloat(2)))), (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))), (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))));
	if (temp0 != 0) goto label_3;
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

jbool SM_mindustry_world_Build_validPlaceIgnoreUnits_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5, jbool param6) {
	jtype frame[22];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:validPlaceIgnoreUnits", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(185);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_2;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_2;
	{
	jint temp0 = (jint)((func_mindustry_world_Block_environmentBuildable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_environmentBuildable_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isPlaceable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isPlaceable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(189);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_3;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_3;
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_4;
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(191);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_polygonCoreProtection) == 0) goto label_5;
	}
	{
	LINE_NUMBER(192);
	frame[7].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(193);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(194);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_active;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[10].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_protectCores) != 0) goto label_12;
	}
	LINE_NUMBER(196);
	goto label_9;
label_12:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[10].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(200);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_dst2_float_float_R_float])(ctx, (frame[12].o), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat(((frame[3].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)));
	frame[13].f = temp0;
	LINE_NUMBER(201);
	if ((floatCompare((frame[13].f), (frame[7].f), 1)) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(202);
	frame[8].o = (frame[12].o);
	LINE_NUMBER(203);
	frame[7].f = (frame[13].f);
	}
label_18:;
	LINE_NUMBER(205);
	goto label_14;
label_15:;
	LINE_NUMBER(206);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(207);
	if ((frame[8].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_team;
	if (sp[0].o == (frame[1].o)) goto label_21;
	}
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (jint(0));
	}
label_21:;
	LINE_NUMBER(210);
	goto label_3;
label_5:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jint temp0 = (jint)((func_mindustry_game_Teams_anyEnemyCoresWithinBuildRadius_mindustry_game_Team_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_anyEnemyCoresWithinBuildRadius_mindustry_game_Team_float_float_R_boolean])(ctx, sp[0].o, (frame[1].o), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat(((frame[3].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(217);
	if ((frame[7].o) != nullptr) goto label_25;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_25:;
	{
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean])(ctx, (frame[0].o), (frame[7].o), (frame[1].o), (frame[4].i));
	if (temp0 != 0) goto label_26;
	}
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (jint(0));
	}
label_26:;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(225);
	jint temp0 = (jint)((func_mindustry_world_Block_isOverlay_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isOverlay_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	if (sp[0].o == (frame[0].o)) goto label_31;
	}
	INST_ICONST(1);
	goto label_32;
label_31:;
	INST_ICONST(0);
	goto label_32;
label_30:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	if (sp[0].o == (frame[0].o)) goto label_33;
	}
	INST_ICONST(1);
	goto label_32;
label_33:;
	INST_ICONST(0);
label_32:;
	popStackFrame(ctx);
	INST_IRETURN();
label_28:;
	{
	LINE_NUMBER(229);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreBuildDarkness) != 0) goto label_34;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	if ((floatCompare(temp0, (jfloat(3.0f)), -1)) < 0) goto label_34;
	}
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (jint(0));
	}
label_34:;
	{
	LINE_NUMBER(233);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requiresWater) != 0) goto label_36;
	}
	{
	jint temp0 = (jint)SM_mindustry_world_Build_contactsShallows_int_int_mindustry_world_Block_R_boolean(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y), (frame[0].o));
	if (temp0 != 0) goto label_36;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeableLiquid) != 0) goto label_36;
	}
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (jint(0));
	}
label_36:;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_38;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_38:;
	{
	LINE_NUMBER(240);
	frame[8].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(241);
	frame[9].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(243);
	frame[10].i = (jint(0));
	}
label_41:;
	{
	if ((frame[10].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)) goto label_42;
	}
	{
	LINE_NUMBER(244);
	frame[11].i = (jint(0));
	}
label_44:;
	{
	if ((frame[11].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)) goto label_45;
	}
	{
	LINE_NUMBER(245);
	frame[12].i = (((frame[10].i) + (frame[8].i)) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x));
	frame[13].i = (((frame[11].i) + (frame[9].i)) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y));
	LINE_NUMBER(247);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[12].i), (frame[13].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(249);
	if ((frame[14].o) == nullptr) goto label_50;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) != (jint(2))) goto label_51;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = frame[12].i;
	jint temp1 = frame[13].i;
	LINE_NUMBER(251);
	jfloat temp2 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, temp0, temp1);
	if ((floatCompare(temp2, (jfloat(3.0f)), -1)) >= 0) goto label_50;
	}
label_51:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_53;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_53;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = frame[1].o;
	jint temp0 = frame[12].i;
	jint temp1 = frame[13].i;
	LINE_NUMBER(252);
	jint temp2 = (jint)((func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	if (temp2 == 0) goto label_50;
	}
label_53:;
	{
	sp[0].o = frame[14].o;
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_56;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_floating) != 0) goto label_56;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requiresWater) != 0) goto label_56;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeableLiquid) == 0) goto label_50;
	}
label_56:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_derelictRepair) != 0) goto label_57;
	}
	{
	sp[0].o = frame[14].o;
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_57;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_build;
	if (sp[0].o != nullptr) goto label_50;
	}
label_57:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[14].o;
	LINE_NUMBER(255);
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_60;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_build;
	if (sp[0].o == nullptr) goto label_60;
	}
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_build;
	if (temp0 != ((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation)) goto label_60;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_60;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_50;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_50;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[14].o));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_50;
	}
label_60:;
	{
	sp[0].o = frame[14].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(256);
	jint temp0 = (jint)((func_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_50;
	}
	{
	sp[0].o = frame[14].o;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeableOn) != 0) goto label_63;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreBuildDarkness) == 0) goto label_50;
	}
label_63:;
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_64;
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_64;
	{
	sp[0].o = frame[14].o;
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysReplace) == 0) goto label_50;
	}
label_64:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[14].o;
	LINE_NUMBER(260);
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_67;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_build;
	if (sp[0].o == nullptr) goto label_68;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_67;
	}
label_68:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_69;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_69;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[14].o));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_67;
	}
label_69:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_build;
	frame[16].o = sp[0].o;
	if ((isInstance(ctx, (frame[16].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_50;
	}
	{
	frame[15].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[16].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[15].o)))->F_current;
	if (sp[0].o != (frame[0].o)) goto label_50;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_centerX_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_centerX_R_int])(ctx, (frame[14].o));
	if (temp0 != ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x)) goto label_50;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_centerY_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_centerY_R_int])(ctx, (frame[14].o));
	if (temp0 != ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y)) goto label_50;
	}
label_67:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	LINE_NUMBER(262);
	sp[0].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(1,000000e-02f)));
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_world_Tile_centerX_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_centerX_R_int])(ctx, (frame[14].o));
	jint temp3 = (jint)((func_mindustry_world_Tile_centerY_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_centerY_R_int])(ctx, (frame[14].o));
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r2;
	sp[1].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[1].o, temp2, temp3, sp[2].o);
	jint temp4 = (jint)((func_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp4 == 0) goto label_50;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requiresWater) == 0) goto label_72;
	}
	{
	sp[0].o = frame[14].o;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	if (sp[0].o == sp[1].o) goto label_72;
	}
label_50:;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (jint(0));
	}
label_72:;
	{
	LINE_NUMBER(244);
	INST_IINC(11, 1);
	goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(243);
	INST_IINC(10, 1);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(268);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_placeRangeCheck) == 0) goto label_74;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_74;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_74;
	}
	{
	sp[0].o = (jobject)SM_mindustry_world_Build_getEnemyOverlap_mindustry_world_Block_mindustry_game_Team_int_int_R_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	if (sp[0].o == nullptr) goto label_74;
	}
	{
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return (jint(0));
	}
label_74:;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Build_getEnemyOverlap_mindustry_world_Block_mindustry_game_Team_int_int_R_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:getEnemyOverlap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(276);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat((((frame[2].i) * (8)) + ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)));
	jfloat temp1 = jfloat((((frame[3].i) * (8)) + ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)));
	jfloat temp2 = ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeOverlapRange) + (jfloat(4.0f));
	{ /* InvokeDynamic */
		clinit_mindustry_world_Build_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_Build_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_Build_invoke_arc_func_Boolf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Build_contactsGround_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:contactsGround", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(280);
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_size));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(282);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[0].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(283);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(281);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	goto label_8;
label_1:;
	{
	LINE_NUMBER(286);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_9:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_8;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(287);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[0].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(288);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_12;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(286);
	INST_IINC(5, 1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Build_contactsShallows_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:contactsShallows", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(295);
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(297);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[0].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(298);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(296);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(302);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[0].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(303);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(301);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	goto label_13;
label_1:;
	{
	LINE_NUMBER(306);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_14:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_15;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(307);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[0].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(308);
	if ((frame[7].o) == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_18;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(306);
	INST_IINC(5, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(310);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(311);
	if ((frame[3].o) == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:validBreak", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(318);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(319);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_breakable_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_breakable_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEnvironmentDeconstruct) == 0) goto label_2;
	}
label_3:;
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean])(ctx, (frame[3].o), (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Build_lambda$getEnemyOverlap$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:lambda$getEnemyOverlap$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_checkPlacement);
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Build_lambda$beginPlace$1_mindustry_game_Team_arc_struct_Seq_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:lambda$beginPlace$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	clinit_mindustry_world_Build(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Build_tmp;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_id));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Build_lambda$beginPlace$0_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:lambda$beginPlace$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysReplace) == 0) goto label_1;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_breakEffect;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size));
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_mapColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(124);
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_Build(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Build:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Build(ctx);
	{
	LINE_NUMBER(22);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_world_Build(ctx);
	SF_mindustry_world_Build_tmp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_Build;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getEnemyOverlap
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_Build[] {
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

static FieldMetadata fields[] {
	{ "tmp", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_world_Build_tmp, "Larc/struct/IntSet;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_Build, 0, "()V", 1 },
	{ "beginBreak", (intptr_t) SM_mindustry_world_Build_beginBreak_mindustry_gen_Unit_mindustry_game_Team_int_int, 0, "(Lmindustry/gen/Unit;Lmindustry/game/Team;II)V", 9 },
	{ "beginPlace", (intptr_t) SM_mindustry_world_Build_beginPlace_mindustry_gen_Unit_mindustry_world_Block_mindustry_game_Team_int_int_int_java_lang_Object, 0, "(Lmindustry/gen/Unit;Lmindustry/world/Block;Lmindustry/game/Team;IIILjava/lang/Object;)V", 9 },
	{ "validPlace", (intptr_t) SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/game/Team;III)Z", 9 },
	{ "validPlace", (intptr_t) SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/game/Team;IIIZ)Z", 9 },
	{ "validPlace", (intptr_t) SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/game/Team;IIIZZ)Z", 9 },
	{ "checkNoUnitOverlap", (intptr_t) SM_mindustry_world_Build_checkNoUnitOverlap_mindustry_world_Block_int_int_R_boolean, 0, "(Lmindustry/world/Block;II)Z", 9 },
	{ "validPlaceIgnoreUnits", (intptr_t) SM_mindustry_world_Build_validPlaceIgnoreUnits_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/game/Team;IIIZZ)Z", 9 },
	{ "getEnemyOverlap", (intptr_t) SM_mindustry_world_Build_getEnemyOverlap_mindustry_world_Block_mindustry_game_Team_int_int_R_mindustry_gen_Building, 0, "(Lmindustry/world/Block;Lmindustry/game/Team;II)Lmindustry/gen/Building;", 9 },
	{ "contactsGround", (intptr_t) SM_mindustry_world_Build_contactsGround_int_int_mindustry_world_Block_R_boolean, 0, "(IILmindustry/world/Block;)Z", 9 },
	{ "contactsShallows", (intptr_t) SM_mindustry_world_Build_contactsShallows_int_int_mindustry_world_Block_R_boolean, 0, "(IILmindustry/world/Block;)Z", 9 },
	{ "validBreak", (intptr_t) SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean, 0, "(Lmindustry/game/Team;II)Z", 9 },
	{ "lambda$getEnemyOverlap$0", (intptr_t) SM_mindustry_world_Build_lambda$getEnemyOverlap$0_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$beginPlace$1", (intptr_t) SM_mindustry_world_Build_lambda$beginPlace$1_mindustry_game_Team_arc_struct_Seq_mindustry_world_Tile, 0, "(Lmindustry/game/Team;Larc/struct/Seq;Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$beginPlace$0", (intptr_t) SM_mindustry_world_Build_lambda$beginPlace$0_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_Build, 0, "()V", 8 },
};

Class class_mindustry_world_Build{
		.nativeName = (intptr_t) "mindustry/world/Build",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_Build),
		.classVtable = (intptr_t) vtable_mindustry_world_Build,
		.staticInitializer = (intptr_t) clinit_mindustry_world_Build,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_Build,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_Build = registerClass(&class_mindustry_world_Build);

}
