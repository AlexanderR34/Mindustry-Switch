#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/world/Block.h"
#include "arc/Events.h"
#include "mindustry/game/FogControl.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/BlockIndexer.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Building.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/gen/Player.h"
#include "arc/audio/Sound.h"
#include "mindustry/game/EventType_BlockBuildEndEvent.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"

extern "C" {

jobject SF_mindustry_world_blocks_ConstructBlock_consBlocks;
jlong SF_mindustry_world_blocks_ConstructBlock_lastTime;
jint SF_mindustry_world_blocks_ConstructBlock_pitchSeq;
jlong SF_mindustry_world_blocks_ConstructBlock_lastPlayed;

void mark_mindustry_world_blocks_ConstructBlock(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_ConstructBlock_consBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_ConstructBlock_consBlocks)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_ConstructBlock_consBlocks, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_ConstructBlock *) object;
}

void init_mindustry_world_blocks_ConstructBlock_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"build\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	init_mindustry_world_Block_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(42);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(43);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_health = (10);
	LINE_NUMBER(44);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumesTap = (jint(1));
	LINE_NUMBER(45);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solidifes = (jint(1));
	LINE_NUMBER(46);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_generateIcons = (jint(0));
	LINE_NUMBER(47);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_inEditor = (jint(0));
	LINE_NUMBER(48);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_ConstructBlock_consBlocks;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) - (jint(1)))) = (frame[0].o);
	LINE_NUMBER(49);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_sync = (jint(1));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_ConstructBlock_get_int_R_mindustry_world_blocks_ConstructBlock(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(54);
	if ((frame[0].i) <= (16)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No. Don't place ConstructBlocks of size greater than 16"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(55);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_ConstructBlock_consBlocks;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[0].i) - (jint(1)))));
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ConstructBlock_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:deconstructFinish", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(60);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(63);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_breakEffect;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[0].o));
	jfloat temp2 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(65);
	jint temp3 = (jint)SM_mindustry_world_blocks_ConstructBlock_shouldPlay_R_boolean(ctx);
	if (temp3 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_breakSound;
	sp[1].o = frame[0].o;
	sp += 2;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_breakPitchChange) == 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)SM_mindustry_world_blocks_ConstructBlock_calcPitch_boolean_R_float(ctx, (jint(0)));
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_FCONST(1);
label_7:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	INST_POP();
label_3:;
	{
	LINE_NUMBER(67);
	clinit_mindustry_game_EventType$BlockBuildEndEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockBuildEndEvent);
	init_mindustry_game_EventType$BlockBuildEndEvent_mindustry_world_Tile_mindustry_gen_Unit_mindustry_game_Team_boolean_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[2].o), (frame[3].o), (jint(1)), (jobject(nullptr)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(68);
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, (frame[0].o));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ConstructBlock_constructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jbyte param3, jobject param4, jobject param5) {
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:constructFinish", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(73);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_FCONST(1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_healthf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_healthf_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_5;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[9].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[8].o)))->F_prevBuild;
	sp += 1;
	goto label_7;
	}
label_5:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(78);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_environment_OverlayFloor)) == 0) goto label_9;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_OverlayFloor, (frame[1].o)));
	LINE_NUMBER(79);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, (frame[0].o), (frame[8].o));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(80);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_12;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[1].o)));
	LINE_NUMBER(81);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o), (frame[9].o));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_environment_OverlayFloor)) != 0) goto label_11;
	}
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[9].o)))->F_supportsOverlay) != 0) goto label_11;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(86);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[3].i));
	}
label_11:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o != (frame[1].o)) goto label_16;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_health))) * (frame[6].f));
	LINE_NUMBER(92);
	if ((frame[5].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[5].o));
	}
label_19:;
	{
	LINE_NUMBER(96);
	if ((frame[7].o) == nullptr) goto label_21;
	}
	{
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_overwrote_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_overwrote_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	}
label_21:;
	{
	LINE_NUMBER(100);
	if ((frame[2].o) == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[2].o));
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_getControllerName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String])(ctx, (frame[2].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastAccessed = (jref) sp[1].o;
	}
label_23:;
	{
	LINE_NUMBER(105);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_16;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_playerPlaced_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_playerPlaced_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	}
label_16:;
	{
	LINE_NUMBER(113);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, (frame[4].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_placeEffect;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[0].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size))));
	LINE_NUMBER(115);
	jint temp2 = (jint)SM_mindustry_world_blocks_ConstructBlock_shouldPlay_R_boolean(ctx);
	if (temp2 == 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_placeSound;
	sp[1].o = frame[0].o;
	sp += 2;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_placePitchChange) == 0) goto label_30;
	}
	{
	jfloat temp0 = (jfloat)SM_mindustry_world_blocks_ConstructBlock_calcPitch_boolean_R_float(ctx, (jint(1)));
	sp[0].f = temp0;
	sp += 1;
	goto label_31;
	}
label_30:;
	INST_FCONST(1);
label_31:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	INST_POP();
label_27:;
	{
	LINE_NUMBER(118);
	((func_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object])(ctx, (frame[1].o), (frame[0].o), (frame[2].o), (frame[3].i), (frame[5].o));
	LINE_NUMBER(120);
	clinit_mindustry_game_EventType$BlockBuildEndEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BlockBuildEndEvent);
	init_mindustry_game_EventType$BlockBuildEndEvent_mindustry_world_Tile_mindustry_gen_Unit_mindustry_game_Team_boolean_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[2].o), (frame[4].o), (jint(0)), (frame[5].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_ConstructBlock_shouldPlay_R_boolean(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:shouldPlay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	{
	LINE_NUMBER(124);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, (clinit_mindustry_world_blocks_ConstructBlock(ctx), (jlong)SF_mindustry_world_blocks_ConstructBlock_lastPlayed));
	if ((longCompare(temp0, (jlong(32ll)))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(125);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	SF_mindustry_world_blocks_ConstructBlock_lastPlayed = temp0;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_ConstructBlock_calcPitch_boolean_R_float(jcontext ctx, jbool param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:calcPitch", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(133);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, (clinit_mindustry_world_blocks_ConstructBlock(ctx), (jlong)SF_mindustry_world_blocks_ConstructBlock_lastTime));
	if ((longCompare(temp0, (jlong(480ll)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(134);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	SF_mindustry_world_blocks_ConstructBlock_lastTime = temp0;
	LINE_NUMBER(135);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	SF_mindustry_world_blocks_ConstructBlock_pitchSeq = ((clinit_mindustry_world_blocks_ConstructBlock(ctx), (jint)SF_mindustry_world_blocks_ConstructBlock_pitchSeq) + (jint(1)));
	LINE_NUMBER(136);
	if ((clinit_mindustry_world_blocks_ConstructBlock(ctx), (jint)SF_mindustry_world_blocks_ConstructBlock_pitchSeq) <= (30)) goto label_5;
	}
	{
	LINE_NUMBER(137);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	SF_mindustry_world_blocks_ConstructBlock_pitchSeq = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(139);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat((clinit_mindustry_world_blocks_ConstructBlock(ctx), (jint)SF_mindustry_world_blocks_ConstructBlock_pitchSeq))) / (jfloat(30.0f))));
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if ((frame[0].i) == 0) goto label_7;
	}
	(sp++)->f = jfloat(1.9f);
	goto label_8;
label_7:;
	(sp++)->f = jfloat(-0.4f);
label_8:;
	{
	sp -= 3;
	popStackFrame(ctx);
	return (sp[0].f + (sp[1].f * sp[2].f));
	}
label_1:;
	{
	LINE_NUMBER(141);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	SF_mindustry_world_blocks_ConstructBlock_pitchSeq = (jint(0));
	LINE_NUMBER(142);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	SF_mindustry_world_blocks_ConstructBlock_lastTime = temp0;
	LINE_NUMBER(143);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.7f)), (jfloat(1.3f)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ConstructBlock_playRepairSound_mindustry_game_Team_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:playRepairSound", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(148);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	sp->i = (jint)SM_mindustry_world_blocks_ConstructBlock_shouldPlay_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_1;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockRepair;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)SM_mindustry_world_blocks_ConstructBlock_calcPitch_boolean_R_float(ctx, (jint(1)));
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_1:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_ConstructBlock_constructed_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jbyte param3, jobject param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:constructed", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(152);
	SM_mindustry_gen_Call_constructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].o));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_placed) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_placed])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_ConstructBlock_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_ConstructBlock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ConstructBlock:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_blocks_ConstructBlock, (16));
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	SF_mindustry_world_blocks_ConstructBlock_consBlocks = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	SF_mindustry_world_blocks_ConstructBlock_lastTime = (jlong(0));
	LINE_NUMBER(36);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	SF_mindustry_world_blocks_ConstructBlock_pitchSeq = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_ConstructBlock[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_Block_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_Block_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_blocks_ConstructBlock_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_Block_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_Block_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_ConstructBlock$ConstructBuild,
};

static FieldMetadata fields[] {
	{ "consBlocks", getArrayClass(&class_mindustry_world_blocks_ConstructBlock, 1), (intptr_t) &SF_mindustry_world_blocks_ConstructBlock_consBlocks, "[Lmindustry/world/blocks/ConstructBlock;", 26 },
	{ "lastTime", &class_long, (intptr_t) &SF_mindustry_world_blocks_ConstructBlock_lastTime, "J", 10 },
	{ "pitchSeq", &class_int, (intptr_t) &SF_mindustry_world_blocks_ConstructBlock_pitchSeq, "I", 10 },
	{ "lastPlayed", &class_long, (intptr_t) &SF_mindustry_world_blocks_ConstructBlock_lastPlayed, "J", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_ConstructBlock_int, 0, "(I)V", 1 },
	{ "get", (intptr_t) SM_mindustry_world_blocks_ConstructBlock_get_int_R_mindustry_world_blocks_ConstructBlock, 0, "(I)Lmindustry/world/blocks/ConstructBlock;", 9 },
	{ "deconstructFinish", (intptr_t) SM_mindustry_world_blocks_ConstructBlock_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V", 9 },
	{ "constructFinish", (intptr_t) SM_mindustry_world_blocks_ConstructBlock_constructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;BLmindustry/game/Team;Ljava/lang/Object;)V", 9 },
	{ "shouldPlay", (intptr_t) SM_mindustry_world_blocks_ConstructBlock_shouldPlay_R_boolean, 0, "()Z", 8 },
	{ "calcPitch", (intptr_t) SM_mindustry_world_blocks_ConstructBlock_calcPitch_boolean_R_float, 0, "(Z)F", 8 },
	{ "playRepairSound", (intptr_t) SM_mindustry_world_blocks_ConstructBlock_playRepairSound_mindustry_game_Team_mindustry_world_Tile, 0, "(Lmindustry/game/Team;Lmindustry/world/Tile;)V", 9 },
	{ "constructed", (intptr_t) SM_mindustry_world_blocks_ConstructBlock_constructed_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;BLmindustry/game/Team;Ljava/lang/Object;)V", 9 },
	{ "isHidden", (intptr_t) M_mindustry_world_blocks_ConstructBlock_isHidden_R_boolean, VTABLE_mindustry_world_blocks_ConstructBlock_isHidden_R_boolean, "()Z", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_ConstructBlock, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_ConstructBlock{
		.nativeName = (intptr_t) "mindustry/world/blocks/ConstructBlock",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_ConstructBlock),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_ConstructBlock,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_ConstructBlock,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_ConstructBlock,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 189,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_ConstructBlock = registerClass(&class_mindustry_world_blocks_ConstructBlock);

}
