#include "mindustry/entities/comp/TankComp.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/logic/Ranged.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/logic/Settable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Shieldc.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/comp/TankComp.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/ElevationMovec.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/core/Control.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/Player.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {


void mark_mindustry_entities_comp_TankComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_TankComp *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_lastDeepFloor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDeepFloor)->clazz)->markFunction)((jobject) self->F_lastDeepFloor, mark, depth + 1);
}

void clinit_mindustry_entities_comp_TankComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_TankComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/TankComp:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_TankComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_lastSlowdown = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_TankComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/TankComp:update", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	if (((jint)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_walked) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_TankComp_deltaLen_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_TankComp_deltaLen_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, (jfloat(1,000000e-02f)), -1)) < 0) goto label_2;
	}
label_1:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_2;
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_entities_comp_TankComp_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_TankComp_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_TankComp *) NULL_CHECK(sp[0].o))->F_treadEffectTime = (((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK(sp[0].o))->F_treadEffectTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(37);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_treadEffectTime), (jfloat(6.0f)), -1)) < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_treadRects;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_treadRects;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(41);
	frame[2].f = ((-(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width) / (jfloat(2))))) / (jfloat(4.0f)));
	LINE_NUMBER(42);
	frame[3].f = ((-(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height) / (jfloat(2))))) / (jfloat(4.0f)));
	LINE_NUMBER(44);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_11;
	}
	{
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(45);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[2].f) * (jfloat((frame[7].i)))), ((frame[3].f) - ((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height) / (jfloat(2))) / (jfloat(4.0f)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_treadEffect;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) + ((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_mindustry_entities_Effect_floorDustAngle_mindustry_entities_Effect_float_float_float(ctx, sp[0].o, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) + ((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_y)), (((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))));
	LINE_NUMBER(44);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(51);
	((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_treadEffectTime = (jfloat(0));
	}
label_5:;
	{
	LINE_NUMBER(54);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_tankMoveSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_tankMoveVolume));
	}
label_2:;
	{
	LINE_NUMBER(57);
	((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (jobject(nullptr));
	LINE_NUMBER(58);
	frame[1].i = (jint(0));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_crushFragile) == 0) goto label_17;
	}
	{
	if (((jint)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_disarmed) != 0) goto label_17;
	}
	{
	LINE_NUMBER(61);
	frame[2].i = (jint(0));
	}
label_19:;
	{
	if ((frame[2].i) >= (8)) goto label_17;
	}
	{
	LINE_NUMBER(62);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(63);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, (((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_x) + (jfloat((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_x) * (8))))), (((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_y) + (jfloat((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_y) * (8))))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(64);
	if ((frame[4].o) == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_crushFragile) == 0) goto label_23;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_Building_damage_mindustry_game_Team_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float])(ctx, sp[0].o, sp[1].o, (jfloat(1,000000e+09f)));
	}
label_23:;
	{
	LINE_NUMBER(61);
	INST_IINC(2, 1);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(((((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(0.75f))) / (jfloat(8.0f))))), (jint(0)));
	frame[2].i = temp0;
	LINE_NUMBER(73);
	frame[3].i = (jint(0));
	frame[4].i = ((((frame[2].i) * (jint(2))) + (jint(1))) * (((frame[2].i) * (jint(2))) + (jint(1))));
	LINE_NUMBER(74);
	frame[5].i = (-(frame[2].i));
	}
label_28:;
	{
	if ((frame[5].i) > (frame[2].i)) goto label_29;
	}
	{
	LINE_NUMBER(75);
	frame[6].i = (-(frame[2].i));
	}
label_31:;
	{
	if ((frame[6].i) > (frame[2].i)) goto label_32;
	}
	{
	LINE_NUMBER(76);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_x) + (jfloat(((frame[5].i) * (8))))), (((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_y) + (jfloat(((frame[6].i) * (8))))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(77);
	if ((frame[7].o) == nullptr) goto label_35;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_36;
	}
label_35:;
	LINE_NUMBER(78);
	INST_IINC(3, 1);
label_36:;
	{
	LINE_NUMBER(81);
	if ((frame[7].o) == nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	((mindustry_entities_comp_TankComp *) NULL_CHECK(sp[0].o))->F_lastDeepFloor = (jref) sp[1].o;
	goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(84);
	frame[1].i = (jint(1));
	}
label_39:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_crushDamage), (jfloat(0)), -1)) <= 0) goto label_40;
	}
	{
	if (((jint)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_disarmed) != 0) goto label_40;
	}
	{
	if (((jint)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_walked) != 0) goto label_41;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_TankComp_deltaLen_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_TankComp_deltaLen_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, (jfloat(1,000000e-02f)), -1)) < 0) goto label_40;
	}
label_41:;
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_40;
	{
	jint temp0 = frame[5].i;
	LINE_NUMBER(89);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[6].i));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, temp2);
	if (temp3 > ((frame[2].i) - (jint(1)))) goto label_40;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_44;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[1].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[2].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_crushDamage) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[2].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	jfloat temp1 = temp0 * ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_crushDamageMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[3].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float])(ctx, sp[2].o, sp[3].o);
	((func_mindustry_gen_Building_damage_mindustry_game_Team_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float])(ctx, sp[0].o, sp[1].o, ((temp1 * temp2) * (((((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_speedMultiplier) - (jfloat(1))) / (jfloat(5.0f))) + (jfloat(1)))));
	goto label_40;
	}
label_44:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_unitMoveBreakable) == 0) goto label_40;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	sp[2].o = (jobject)((func_mindustry_entities_comp_TankComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_TankComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_world_blocks_ConstructBlock_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[2].o)));
	}
label_40:;
	{
	LINE_NUMBER(75);
	INST_IINC(6, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(74);
	INST_IINC(5, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(101);
	if ((frame[1].i) == 0) goto label_47;
	}
	{
	LINE_NUMBER(102);
	((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (jobject(nullptr));
	}
label_47:;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	sp[1].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_crawlSlowdown;
	jfloat temp2 = (jfloat((frame[3].i))) / (jfloat((frame[4].i)));
	sp[1].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp2 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_crawlSlowdownFrac)));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp0, temp1, temp3);
	((mindustry_entities_comp_TankComp *) NULL_CHECK(sp[0].o))->F_lastSlowdown = temp4;
	LINE_NUMBER(108);
	if (((jint)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_walked) != 0) goto label_50;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_51;
	}
label_50:;
	{
	LINE_NUMBER(109);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_TankComp_deltaLen_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_TankComp_deltaLen_R_float])(ctx, (frame[0].o));
	frame[5].f = temp0;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_TankComp *) NULL_CHECK(sp[0].o))->F_treadTime = (((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK(sp[0].o))->F_treadTime) + (frame[5].f));
	LINE_NUMBER(111);
	((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_walked = (jint(0));
	}
label_51:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_TankComp_floorSpeedMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/TankComp:floorSpeedMultiplier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_mindustry_entities_comp_TankComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_TankComp_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) == 0) goto label_2;
	}
label_1:;
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_entities_comp_TankComp_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_TankComp_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(120);
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_speedMultiplier));
	sp[0].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, temp0, (jdouble(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_floorMultiplier))));
	popStackFrame(ctx);
	return (((jfloat(temp1)) * ((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)) * ((jfloat)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_lastSlowdown));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_TankComp_drownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/TankComp:drownFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_mindustry_entities_comp_TankComp_canDrown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_TankComp_canDrown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_TankComp_moveAt_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/TankComp:moveAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean])(ctx, (frame[1].o), (jfloat(1,000000e-03f)));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(133);
	((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_walked = (jint(1));
	}
label_1:;
	LINE_NUMBER(135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_TankComp_approach_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/TankComp:approach", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean])(ctx, (frame[1].o), (jfloat(1,000000e-03f)));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(141);
	((mindustry_entities_comp_TankComp *) NULL_CHECK((frame[0].o)))->F_walked = (jint(1));
	}
label_1:;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_TankComp;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method drownFloor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_comp_TankComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_TankComp_update,
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
	(void *) nullptr,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_TankComp_floorSpeedMultiplier_R_float,
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
	(void *) M_mindustry_entities_comp_TankComp_drownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_TankComp_approach_arc_math_geom_Vec2,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_TankComp_moveAt_arc_math_geom_Vec2_float,
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
	(void *) nullptr,
	(void *) nullptr,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "hitSize", "()F" },
	{ "collides", "(Lmindustry/gen/Hitboxc;)Z" },
	{ "deltaAngle", "()F" },
	{ "deltaLen", "()F" },
	{ "deltaX", "()F" },
	{ "deltaY", "()F" },
	{ "lastX", "()F" },
	{ "lastY", "()F" },
	{ "collision", "(Lmindustry/gen/Hitboxc;FF)V" },
	{ "deltaX", "(F)V" },
	{ "deltaY", "(F)V" },
	{ "getCollisions", "(Larc/func/Cons;)V" },
	{ "hitSize", "(F)V" },
	{ "hitboxTile", "(Larc/math/geom/Rect;)V" },
	{ "lastX", "(F)V" },
	{ "lastY", "(F)V" },
	{ "updateLastPosition", "()V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "applyDynamicStatus", "()Lmindustry/entities/units/StatusEntry;" },
	{ "apply", "(Lmindustry/type/StatusEffect;F)V" },
	{ "apply", "(Lmindustry/type/StatusEffect;)V" },
	{ "unapply", "(Lmindustry/type/StatusEffect;)V" },
	{ "statusDamageMultiplier", "(F)V" },
	{ "statusReloadMultiplier", "(F)V" },
	{ "statusArmor", "(F)V" },
	{ "statusBuildSpeed", "(F)V" },
	{ "statusDrag", "(F)V" },
	{ "statusMaxHealth", "(F)V" },
	{ "statusSpeed", "(F)V" },
	{ "statusColor", "()Larc/graphics/Color;" },
	{ "statusBits", "()Larc/struct/Bits;" },
	{ "disarmed", "()Z" },
	{ "hasEffect", "(Lmindustry/type/StatusEffect;)Z" },
	{ "isBoss", "()Z" },
	{ "isGrounded", "()Z" },
	{ "isImmune", "(Lmindustry/type/StatusEffect;)Z" },
	{ "armorOverride", "()F" },
	{ "buildSpeedMultiplier", "()F" },
	{ "damageMultiplier", "()F" },
	{ "dragMultiplier", "()F" },
	{ "getDuration", "(Lmindustry/type/StatusEffect;)F" },
	{ "healthMultiplier", "()F" },
	{ "reloadMultiplier", "()F" },
	{ "speedMultiplier", "()F" },
	{ "armorOverride", "(F)V" },
	{ "buildSpeedMultiplier", "(F)V" },
	{ "clearStatuses", "()V" },
	{ "damageMultiplier", "(F)V" },
	{ "disarmed", "(Z)V" },
	{ "dragMultiplier", "(F)V" },
	{ "draw", "()V" },
	{ "healthMultiplier", "(F)V" },
	{ "reloadMultiplier", "(F)V" },
	{ "setDuration", "(Lmindustry/type/StatusEffect;F)V" },
	{ "speedMultiplier", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "buildPlan", "()Lmindustry/entities/units/BuildPlan;" },
	{ "shouldSkip", "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Building;)Z" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "clearBuilding", "()V" },
	{ "isBuilding", "()Z" },
	{ "plans", "()Larc/struct/Queue;" },
	{ "activelyBuilding", "()Z" },
	{ "canBuild", "()Z" },
	{ "updateBuilding", "()Z" },
	{ "buildAlpha", "()F" },
	{ "buildAlpha", "(F)V" },
	{ "drawBuilding", "()V" },
	{ "drawBuildingBeam", "(FF)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "drawPlanTop", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "plans", "(Larc/struct/Queue;)V" },
	{ "removeBuild", "(IIZ)V" },
	{ "updateBuildLogic", "()V" },
	{ "updateBuilding", "(Z)V" },
	{ "validatePlans", "()V" },
	{ "clipSize", "()F" },
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
	{ "acceptsItem", "(Lmindustry/type/Item;)Z" },
	{ "hasItem", "()Z" },
	{ "itemTime", "()F" },
	{ "itemCapacity", "()I" },
	{ "maxAccepted", "(Lmindustry/type/Item;)I" },
	{ "item", "()Lmindustry/type/Item;" },
	{ "stack", "()Lmindustry/type/ItemStack;" },
	{ "addItem", "(Lmindustry/type/Item;)V" },
	{ "addItem", "(Lmindustry/type/Item;I)V" },
	{ "clearItem", "()V" },
	{ "itemTime", "(F)V" },
	{ "stack", "(Lmindustry/type/ItemStack;)V" },
	{ "mineTile", "()Lmindustry/world/Tile;" },
	{ "canMine", "()Z" },
	{ "canMine", "(Lmindustry/type/Item;)Z" },
	{ "mining", "()Z" },
	{ "offloadImmediately", "()Z" },
	{ "validMine", "(Lmindustry/world/Tile;)Z" },
	{ "validMine", "(Lmindustry/world/Tile;Z)Z" },
	{ "mineTimer", "()F" },
	{ "getMineResult", "(Lmindustry/world/Tile;)Lmindustry/type/Item;" },
	{ "mineTile", "(Lmindustry/world/Tile;)V" },
	{ "mineTimer", "(F)V" },
	{ "solidity", "()Lmindustry/entities/EntityCollisions$SolidPred;" },
	{ "canPassOn", "()Z" },
	{ "canPass", "(II)Z" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "ignoreSolids", "()Z" },
	{ "moving", "()Z" },
	{ "drag", "()F" },
	{ "drag", "(F)V" },
	{ "move", "(Larc/math/geom/Vec2;)V" },
	{ "move", "(FF)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(FF)V" },
	{ "hasPhysicsRef", "()Z" },
	{ "mass", "()F" },
	{ "hasPhysicsRef", "(Z)V" },
	{ "impulse", "(Larc/math/geom/Vec2;)V" },
	{ "impulse", "(FF)V" },
	{ "impulseNet", "(Larc/math/geom/Vec2;)V" },
	{ "shield", "()F" },
	{ "shield", "(F)V" },
	{ "shieldAlpha", "()F" },
	{ "shieldAlpha", "(F)V" },
	{ "armor", "()F" },
	{ "armor", "(F)V" },
	{ "rawDamage", "(F)V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "aim", "(FF)V" },
	{ "aim", "(FFZ)V" },
	{ "mounts", "()[Lmindustry/entities/units/WeaponMount;" },
	{ "mounts", "([Lmindustry/entities/units/WeaponMount;)V" },
	{ "canShoot", "()Z" },
	{ "isRotate", "()Z" },
	{ "isShooting", "()Z" },
	{ "aimX", "()F" },
	{ "aimY", "()F" },
	{ "aim", "(Larc/math/geom/Position;)V" },
	{ "aimX", "(F)V" },
	{ "aimY", "(F)V" },
	{ "controlWeapons", "(ZZ)V" },
	{ "controlWeapons", "(Z)V" },
	{ "isShooting", "(Z)V" },
	{ "setWeaponRotation", "(F)V" },
	{ "setupWeapons", "(Lmindustry/type/UnitType;)V" },
	{ "range", "()F" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "physicSize", "()F" },
	{ "getControllerName", "()Ljava/lang/String;" },
	{ "speed", "()F" },
	{ "collisionLayer", "()I" },
	{ "prefRotation", "()F" },
	{ "allowCommand", "()Z" },
	{ "isCommandable", "()Z" },
	{ "canLand", "()Z" },
	{ "destroy", "()V" },
	{ "unloaded", "()V" },
	{ "movePref", "(Larc/math/geom/Vec2;)V" },
	{ "hasTarget", "()Z" },
	{ "hasTarget", "(Z)V" },
	{ "trail", "()Lmindustry/graphics/Trail;" },
	{ "dockedType", "()Lmindustry/type/UnitType;" },
	{ "lastDrownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "getPlayer", "()Lmindustry/gen/Player;" },
	{ "canDrown", "()Z" },
	{ "canTarget", "(Lmindustry/gen/Teamc;)Z" },
	{ "checkTarget", "(ZZ)Z" },
	{ "hasWeapons", "()Z" },
	{ "hittable", "()Z" },
	{ "inRange", "(Larc/math/geom/Position;)Z" },
	{ "isAI", "()Z" },
	{ "isEnemy", "()Z" },
	{ "isFlying", "()Z" },
	{ "isMissile", "()Z" },
	{ "isPathImpassable", "(II)Z" },
	{ "isPlayer", "()Z" },
	{ "killable", "()Z" },
	{ "playerControllable", "()Z" },
	{ "shouldUpdateController", "()Z" },
	{ "spawnedByCore", "()Z" },
	{ "targetable", "(Lmindustry/game/Team;)Z" },
	{ "flag", "()D" },
	{ "ammof", "()F" },
	{ "bounds", "()F" },
	{ "drownTime", "()F" },
	{ "elevation", "()F" },
	{ "floorSpeedMultiplier", "()F" },
	{ "healTime", "()F" },
	{ "shadowAlpha", "()F" },
	{ "splashTimer", "()F" },
	{ "cap", "()I" },
	{ "count", "()I" },
	{ "lastFogPos", "()I" },
	{ "lastCommanded", "()Ljava/lang/String;" },
	{ "command", "()Lmindustry/ai/types/CommandAI;" },
	{ "abilities", "()[Lmindustry/entities/abilities/Ability;" },
	{ "controller", "()Lmindustry/entities/units/UnitController;" },
	{ "type", "()Lmindustry/type/UnitType;" },
	{ "drownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "abilities", "([Lmindustry/entities/abilities/Ability;)V" },
	{ "aimLook", "(Larc/math/geom/Position;)V" },
	{ "aimLook", "(FF)V" },
	{ "approach", "(Larc/math/geom/Vec2;)V" },
	{ "controller", "(Lmindustry/entities/units/UnitController;)V" },
	{ "dockedType", "(Lmindustry/type/UnitType;)V" },
	{ "drownTime", "(F)V" },
	{ "elevation", "(F)V" },
	{ "flag", "(D)V" },
	{ "healTime", "(F)V" },
	{ "landed", "()V" },
	{ "lastCommanded", "(Ljava/lang/String;)V" },
	{ "lastDrownFloor", "(Lmindustry/world/blocks/environment/Floor;)V" },
	{ "lastFogPos", "(I)V" },
	{ "lookAt", "(Larc/math/geom/Position;)V" },
	{ "lookAt", "(F)V" },
	{ "lookAt", "(FF)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;F)V" },
	{ "resetController", "()V" },
	{ "rotateMove", "(Larc/math/geom/Vec2;)V" },
	{ "set", "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V" },
	{ "setType", "(Lmindustry/type/UnitType;)V" },
	{ "shadowAlpha", "(F)V" },
	{ "spawnedByCore", "(Z)V" },
	{ "splashTimer", "(F)V" },
	{ "trail", "(Lmindustry/graphics/Trail;)V" },
	{ "type", "(Lmindustry/type/UnitType;)V" },
	{ "updateBoosting", "(Z)V" },
	{ "updateBoosting", "(ZZ)V" },
	{ "updateDrowning", "()V" },
	{ "wobble", "()V" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Unitc, &class_mindustry_gen_ElevationMovec, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_TankComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_TankComp, F_y), "F", 0 },
	{ "hitSize", &class_float, offsetof(mindustry_entities_comp_TankComp, F_hitSize), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_TankComp, F_rotation), "F", 0 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_entities_comp_TankComp, F_speedMultiplier), "F", 0 },
	{ "disarmed", &class_boolean, offsetof(mindustry_entities_comp_TankComp, F_disarmed), "Z", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_TankComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_entities_comp_TankComp, F_team), "Lmindustry/game/Team;", 0 },
	{ "treadEffectTime", &class_float, offsetof(mindustry_entities_comp_TankComp, F_treadEffectTime), "F", 130 },
	{ "lastSlowdown", &class_float, offsetof(mindustry_entities_comp_TankComp, F_lastSlowdown), "F", 130 },
	{ "treadTime", &class_float, offsetof(mindustry_entities_comp_TankComp, F_treadTime), "F", 128 },
	{ "walked", &class_boolean, offsetof(mindustry_entities_comp_TankComp, F_walked), "Z", 128 },
	{ "lastDeepFloor", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_entities_comp_TankComp, F_lastDeepFloor), "Lmindustry/world/blocks/environment/Floor;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_TankComp, 0, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_TankComp_update, VTABLE_mindustry_entities_comp_TankComp_update, "()V", 1 },
	{ "floorSpeedMultiplier", (intptr_t) M_mindustry_entities_comp_TankComp_floorSpeedMultiplier_R_float, VTABLE_mindustry_entities_comp_TankComp_floorSpeedMultiplier_R_float, "()F", 1 },
	{ "drownFloor", (intptr_t) M_mindustry_entities_comp_TankComp_drownFloor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_entities_comp_TankComp_drownFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "moveAt", (intptr_t) M_mindustry_entities_comp_TankComp_moveAt_arc_math_geom_Vec2_float, VTABLE_mindustry_entities_comp_TankComp_moveAt_arc_math_geom_Vec2_float, "(Larc/math/geom/Vec2;F)V", 1 },
	{ "approach", (intptr_t) M_mindustry_entities_comp_TankComp_approach_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_TankComp_approach_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
};

Class class_mindustry_entities_comp_TankComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/TankComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_TankComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_TankComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_TankComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_TankComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 339,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_TankComp = registerClass(&class_mindustry_entities_comp_TankComp);

}
