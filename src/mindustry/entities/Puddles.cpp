#include "mindustry/entities/Puddles.h"
#include "mindustry/net/Net.h"
#include "mindustry/content/Bullets.h"
#include "mindustry/game/Rules.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/Puddles.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Puddle.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Fires.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_entities_Puddles_maxLiquid;

void mark_mindustry_entities_Puddles(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_Puddles *) object;
}

void clinit_mindustry_entities_Puddles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_Puddles_maxLiquid = jfloat(70.0f);
}

void init_mindustry_entities_Puddles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:deposit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(20);
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (jint(1)));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:deposit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(25);
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean(ctx, (frame[0].o), (frame[0].o), (frame[1].o), (frame[2].f), (jint(1)));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(30);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getPuddle_int_R_mindustry_gen_Puddle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getPuddle_int_R_mindustry_gen_Puddle])(ctx, sp[0].o, temp0);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jbool param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:deposit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(34);
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].i), (jint(0)));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jbool param4, jbool param5) {
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:deposit", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(38);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(40);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	frame[6].f = ((temp0 + temp1) / (jfloat(2)));
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	frame[7].f = ((temp2 + temp3) / (jfloat(2)));
	LINE_NUMBER(42);
	jint temp4 = (jint)((func_mindustry_type_Liquid_willBoil_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Liquid_willBoil_R_boolean])(ctx, (frame[2].o));
	if (temp4 == 0) goto label_4;
	}
	{
	LINE_NUMBER(43);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.1599999964237213)));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[2].o)))->F_vaporEffect;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[2].o)))->F_gasColor;
	((func_mindustry_entities_Effect_at_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	}
label_6:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(49);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_game_Rules_hasEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_hasEnv_int_R_boolean])(ctx, sp[0].o, (jint(2)));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(50);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.10999999940395355)));
	if (temp0 == 0) goto label_10;
	}
	{
	if ((frame[0].o) == (frame[1].o)) goto label_10;
	}
	{
	LINE_NUMBER(51);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_spaceLiquid;
	sp[1].o = jobject(nullptr);
	sp[2].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(50.0f)));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = jfloat(-1.0f);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0)), (jfloat(0.2f)));
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.6f)), (jfloat(1)));
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp4, temp5, temp6, temp7, (frame[2].o));
	}
label_10:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_liquidDrop;
	jint temp0 = (jint)SM_mindustry_entities_Puddles_canStayOn_mindustry_type_Liquid_mindustry_type_Liquid_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	jfloat temp0 = (jfloat)SM_mindustry_entities_Puddles_reactPuddle_mindustry_type_Liquid_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float(ctx, sp[0].o, (frame[2].o), (frame[3].f), (frame[0].o), (frame[6].f), (frame[7].f));
	LINE_NUMBER(59);
	sp[0].o = (jobject)SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(61);
	if ((frame[4].i) == 0) goto label_16;
	}
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_16;
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_lastRipple), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) - (jfloat(40.0f))), 1)) > 0) goto label_16;
	}
	{
	LINE_NUMBER(62);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_ripple;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_liquidDrop;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[1].o))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(63);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_lastRipple = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	}
label_16:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_19;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(71);
	if ((frame[8].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_liquid;
	if (sp[0].o != nullptr) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(72);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)SM_mindustry_gen_Puddle_create_R_mindustry_gen_Puddle(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(75);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[9].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(76);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[9].o)))->F_liquid = (jref) (frame[2].o);
	LINE_NUMBER(77);
	sp[0].o = frame[9].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[3].f), (jfloat(70.0f)));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = temp0;
	LINE_NUMBER(78);
	((func_mindustry_gen_Puddle_set_float_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Puddle_set_float_float])(ctx, (frame[9].o), (frame[6].f), (frame[7].f));
	LINE_NUMBER(79);
	SM_mindustry_entities_Puddles_register_mindustry_gen_Puddle(ctx, (frame[9].o));
	LINE_NUMBER(80);
	((func_mindustry_gen_Puddle_add) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Puddle_add])(ctx, (frame[9].o));
	LINE_NUMBER(81);
	goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_liquid;
	if (sp[0].o != (frame[2].o)) goto label_32;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[8].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_accepting));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_accepting = temp0;
	LINE_NUMBER(85);
	if ((frame[4].i) == 0) goto label_23;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_lastRipple), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) - (jfloat(40.0f))), 1)) > 0) goto label_23;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_amount), (jfloat(35.0f)), -1)) < 0) goto label_23;
	}
	{
	LINE_NUMBER(86);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_ripple;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_liquid;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[1].o))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(87);
	((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_lastRipple = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	goto label_23;
	}
label_32:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_liquid;
	sp[1].o = frame[2].o;
	jfloat temp0 = frame[3].f;
	sp[2].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_tile;
	jfloat temp1 = (jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_x;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (temp1 + temp2) / (jfloat(2));
	jfloat temp4 = (jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_y;
	jfloat temp5 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	jfloat temp6 = (jfloat)SM_mindustry_entities_Puddles_reactPuddle_mindustry_type_Liquid_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, temp3, ((temp4 + temp5) / (jfloat(2))));
	frame[9].f = temp6;
	LINE_NUMBER(92);
	if ((frame[5].i) == 0) goto label_38;
	}
	{
	LINE_NUMBER(93);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat(70.0f)) - ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[8].o)))->F_amount)), (jfloat(0)), (frame[9].f));
	frame[9].f = temp0;
	}
label_38:;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[8].o;
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = (((jfloat)((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount) + (frame[9].f));
	}
label_23:;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Puddles_hasLiquid_mindustry_world_Tile_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:hasLiquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(101);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(103);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[2].o)))->F_liquid;
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[2].o)))->F_amount), (jfloat(0.5f)), -1)) < 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Puddles_remove_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(107);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[0].o));
	((func_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle])(ctx, sp[0].o, temp0, (jobject(nullptr)));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Puddles_register_mindustry_gen_Puddle(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:register", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(113);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[1].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, sp[1].o);
	((func_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle])(ctx, sp[0].o, temp0, (frame[0].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_Puddles_reactPuddle_mindustry_type_Liquid_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3, jfloat param4, jfloat param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:reactPuddle", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(118);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(120);
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_flammability), (jfloat(0.3f)), -1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_temperature), (jfloat(0.7f)), -1)) > 0) goto label_3;
	}
label_2:;
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_flammability), (jfloat(0.3f)), -1)) <= 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_temperature), (jfloat(0.7f)), -1)) <= 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(122);
	SM_mindustry_entities_Fires_create_mindustry_world_Tile(ctx, (frame[3].o));
	LINE_NUMBER(123);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, ((jdouble(6,000000e-03)) * (jdouble((frame[2].f)))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(124);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_fireball;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(360.0f)));
	((func_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, (jfloat(-1.0f)), (jfloat(1)), (jfloat(1)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(126);
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_temperature), (jfloat(0.7f)), -1)) <= 0) goto label_8;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_temperature), (jfloat(0.55f)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat(0.5f)) * (frame[2].f)))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(128);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_steam;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	}
label_10:;
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return ((jfloat(-0.1f)) * (frame[2].f));
	}
label_8:;
	{
	LINE_NUMBER(131);
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_temperature), (jfloat(0.7f)), -1)) <= 0) goto label_6;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_temperature), (jfloat(0.55f)), 1)) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat(0.8f)) * (frame[2].f)))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(133);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_steam;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	}
label_13:;
	{
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return ((jfloat(-0.7f)) * (frame[2].f));
	}
label_6:;
	{
	LINE_NUMBER(137);
	jfloat temp0 = (jfloat)((func_mindustry_type_Liquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Liquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].o), (frame[4].f), (frame[5].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Puddles_canStayOn_mindustry_type_Liquid_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Puddles:canStayOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Puddles(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_canStayOn;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_Puddles;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_Puddles[] {
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
	{ "maxLiquid", &class_float, (intptr_t) &SF_mindustry_entities_Puddles_maxLiquid, "F", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Puddles, 0, "()V", 1 },
	{ "deposit", (intptr_t) SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;Lmindustry/type/Liquid;F)V", 9 },
	{ "deposit", (intptr_t) SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float, 0, "(Lmindustry/world/Tile;Lmindustry/type/Liquid;F)V", 9 },
	{ "get", (intptr_t) SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle, 0, "(Lmindustry/world/Tile;)Lmindustry/gen/Puddle;", 9 },
	{ "deposit", (intptr_t) SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;Lmindustry/type/Liquid;FZ)V", 9 },
	{ "deposit", (intptr_t) SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;Lmindustry/type/Liquid;FZZ)V", 9 },
	{ "hasLiquid", (intptr_t) SM_mindustry_entities_Puddles_hasLiquid_mindustry_world_Tile_mindustry_type_Liquid_R_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/type/Liquid;)Z", 9 },
	{ "remove", (intptr_t) SM_mindustry_entities_Puddles_remove_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 9 },
	{ "register", (intptr_t) SM_mindustry_entities_Puddles_register_mindustry_gen_Puddle, 0, "(Lmindustry/gen/Puddle;)V", 9 },
	{ "reactPuddle", (intptr_t) SM_mindustry_entities_Puddles_reactPuddle_mindustry_type_Liquid_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float, 0, "(Lmindustry/type/Liquid;Lmindustry/type/Liquid;FLmindustry/world/Tile;FF)F", 10 },
	{ "canStayOn", (intptr_t) SM_mindustry_entities_Puddles_canStayOn_mindustry_type_Liquid_mindustry_type_Liquid_R_boolean, 0, "(Lmindustry/type/Liquid;Lmindustry/type/Liquid;)Z", 10 },
};

Class class_mindustry_entities_Puddles{
		.nativeName = (intptr_t) "mindustry/entities/Puddles",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Puddles),
		.classVtable = (intptr_t) vtable_mindustry_entities_Puddles,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Puddles,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_Puddles,
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
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Puddles = registerClass(&class_mindustry_entities_Puddles);

}
