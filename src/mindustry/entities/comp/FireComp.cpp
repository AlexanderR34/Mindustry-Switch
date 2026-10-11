#include "mindustry/entities/comp/FireComp.h"
#include "mindustry/content/Bullets.h"
#include "mindustry/entities/comp/FireComp.h"
#include "mindustry/world/meta/Attribute.h"
#include "arc/math/geom/Point2.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/comp/FireComp_invoke_arc_func_Cons_0.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Puddle.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/entities/comp/FireComp_invoke_arc_func_Boolf_0.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/gen/Fire.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/net/Net.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/Float.h"
#include "arc/math/Scaled.h"
#include "mindustry/entities/Puddles.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/core/Control.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/entities/Fires.h"
#include "arc/audio/Sound.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jint SF_mindustry_entities_comp_FireComp_frames;
jint SF_mindustry_entities_comp_FireComp_duration;
jfloat SF_mindustry_entities_comp_FireComp_spreadDelay;
jfloat SF_mindustry_entities_comp_FireComp_fireballDelay;
jfloat SF_mindustry_entities_comp_FireComp_ticksPerFrame;
jfloat SF_mindustry_entities_comp_FireComp_warmupDuration;
jfloat SF_mindustry_entities_comp_FireComp_damageDelay;
jfloat SF_mindustry_entities_comp_FireComp_tileDamage;
jfloat SF_mindustry_entities_comp_FireComp_unitDamage;
jobject SF_mindustry_entities_comp_FireComp_regions;

void mark_mindustry_entities_comp_FireComp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_comp_FireComp_regions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_FireComp_regions)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_FireComp_regions, mark, depth + 1);
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
	auto self = (mindustry_entities_comp_FireComp *) object;
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
}

void init_mindustry_entities_comp_FireComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_FireComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(34);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, temp0);
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_damageTimer = temp1;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	jfloat temp2 = jfloat(22.0f);
	LINE_NUMBER(35);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, temp2);
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_spreadTimer = temp3;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	jfloat temp4 = jfloat(40.0f);
	LINE_NUMBER(35);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, temp4);
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_fireballTimer = temp5;
	LINE_NUMBER(33);
	((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_warmup = (jfloat(0));
	sp[0].o = frame[0].o;
	jint temp6 = 39;
	LINE_NUMBER(37);
	jint temp7 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, temp6);
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_animation = (jfloat(temp7));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_FireComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:update", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_animation = (((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_animation) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(2.25f))));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_warmup = (((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_warmup) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_animation = (fmodf(((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_animation), (jfloat(40.0f))));
	LINE_NUMBER(45);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_4;
	}
	{
	LINE_NUMBER(46);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopFire;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (frame[0].o), (jfloat(0.07f)));
	}
label_4:;
	{
	LINE_NUMBER(50);
	jfloat temp0 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_envAttrs;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_water;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp1 * (jfloat(10.0f))), (jfloat(0)));
	frame[1].f = (temp0 + temp2);
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_time) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * (frame[1].f))), (jfloat(0)), ((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_time = temp3;
	LINE_NUMBER(53);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp4 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp4 == 0) goto label_8;
	}
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(57);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) >= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_lifetime));
	if (temp0 == 0) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(58);
	((func_mindustry_entities_comp_FireComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_FireComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[2].o = sp[0].o;
	LINE_NUMBER(63);
	if ((frame[2].o) == nullptr) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_getFlammability_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getFlammability_R_float])(ctx, sp[0].o);
	frame[4].f = (temp0 + ((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_puddleFlammability));
	LINE_NUMBER(67);
	if ((frame[3].i) != 0) goto label_18;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) > 0) goto label_18;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_time) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * (jfloat(8.0f))));
	}
label_18:;
	{
	LINE_NUMBER(71);
	if ((frame[3].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_lifetime;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[4].f) / (jfloat(8.0f))), (jfloat(0)), (jfloat(0.6f)));
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_lifetime = (temp0 + (temp1 * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	}
label_20:;
	{
	LINE_NUMBER(75);
	if ((floatCompare((frame[4].f), (jfloat(1)), -1)) <= 0) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_spreadTimer;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[4].f) / (jfloat(5.0f))), (jfloat(0.3f)), (jfloat(2)));
	jfloat temp3 = temp0 + (temp1 * temp2);
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_spreadTimer = temp3;
	if ((floatCompare(temp3, (jfloat(22.0f)), -1)) < 0) goto label_22;
	}
	{
	LINE_NUMBER(76);
	((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_spreadTimer = (jfloat(0));
	LINE_NUMBER(77);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (jint(3)));
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x);
	sp[1].o = (jobject)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(79);
	SM_mindustry_entities_Fires_create_mindustry_world_Tile(ctx, (frame[6].o));
	}
label_22:;
	{
	LINE_NUMBER(82);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) <= 0) goto label_27;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_fireballTimer;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[4].f) / (jfloat(10.0f))), (jfloat(0)), (jfloat(0.5f)));
	jfloat temp3 = temp0 + (temp1 * temp2);
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_fireballTimer = temp3;
	if ((floatCompare(temp3, (jfloat(40.0f)), -1)) < 0) goto label_27;
	}
	{
	LINE_NUMBER(83);
	((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_fireballTimer = (jfloat(0));
	LINE_NUMBER(84);
	clinit_mindustry_content_Bullets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Bullets_fireball;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(360.0f)));
	((func_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, (jfloat(-1.0f)), (jfloat(1)), (jfloat(1)));
	}
label_27:;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_damageTimer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_damageTimer = temp0;
	if ((floatCompare(temp0, (jfloat(40.0f)), -1)) < 0) goto label_30;
	}
	{
	LINE_NUMBER(89);
	((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_damageTimer = (jfloat(0));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].o) == nullptr) goto label_34;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Puddle_getFlammability_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Puddle_getFlammability_R_float])(ctx, (frame[5].o));
	jfloat temp1 = temp0 / (jfloat(3.0f));
	sp[0].f = temp1;
	sp += 1;
	goto label_35;
	}
label_34:;
	INST_FCONST(0);
label_35:;
	{
	sp -= 2;
	((mindustry_entities_comp_FireComp *) NULL_CHECK(sp[0].o))->F_puddleFlammability = sp[1].f;
	LINE_NUMBER(93);
	if ((frame[3].i) == 0) goto label_37;
	}
	{
	LINE_NUMBER(94);
	((func_mindustry_gen_Building_damage_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_damage_float])(ctx, (frame[2].o), (jfloat(1.8f)));
	}
label_37:;
	{
	LINE_NUMBER(96);
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	jfloat temp2 = jfloat(8.0f);
	jfloat temp3 = jfloat(3.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_FireComp_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (mindustry_entities_comp_FireComp_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_FireComp_invoke_arc_func_Boolf_0);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_FireComp_invoke_arc_func_Cons_0(ctx);
		auto proxy = (mindustry_entities_comp_FireComp_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_FireComp_invoke_arc_func_Cons_0);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_entities_Damage_damageUnits_mindustry_game_Team_float_float_float_float_arc_func_Boolf_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o, sp[2].o);
	}
label_30:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_FireComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	clinit_mindustry_entities_comp_FireComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_FireComp_regions;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(105);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	if ((frame[1].i) >= (40)) goto label_1;
	}
	{
	LINE_NUMBER(106);
	clinit_mindustry_entities_comp_FireComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_FireComp_regions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"fire\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(105);
	INST_IINC(1, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(110);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_warmup) / (jfloat(20.0f))));
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp0, temp1, temp2, temp3);
	LINE_NUMBER(111);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.0f)));
	LINE_NUMBER(112);
	clinit_mindustry_entities_comp_FireComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_FireComp_regions;
	jint temp4 = jint(((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_animation));
	clinit_mindustry_entities_comp_FireComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_FireComp_regions;
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp4, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp5);
	jfloat temp6 = (jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((jint(((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_y))))), (jfloat(2)));
	jfloat temp8 = temp6 + temp7;
	jfloat temp9 = (jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((jint(((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_x))))), (jfloat(2)));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp8, (temp9 + temp10));
	LINE_NUMBER(113);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(115);
	jfloat temp11 = (jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp12 = (jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp13 = jfloat(50.0f);
	jfloat temp14 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(5.0f)));
	jfloat temp15 = temp13 + temp14;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_lightFlame;
	jfloat temp16 = jfloat(0.6f);
	jfloat temp17 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_warmup) / (jfloat(20.0f))));
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp11, temp12, temp15, sp[0].o, (temp16 * temp17));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_FireComp_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (jfloat(25.0f));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_FireComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_fireRemove;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_animation));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_entities_comp_FireComp *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Fires_remove_mindustry_world_Tile(ctx, sp[0].o);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_FireComp_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:afterRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_mindustry_entities_comp_FireComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_FireComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_entities_Fires_register_mindustry_gen_Fire(ctx, (checkCast(ctx, &class_mindustry_gen_Fire, sp[0].o)));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_FireComp_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:afterSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_mindustry_entities_comp_FireComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_FireComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_entities_Fires_register_mindustry_gen_Fire(ctx, (checkCast(ctx, &class_mindustry_gen_Fire, sp[0].o)));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_comp_FireComp_lambda$update$1_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:lambda$update$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_FireComp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_burning;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, (jfloat(300.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_comp_FireComp_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_FireComp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_burning;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isImmune_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isImmune_mindustry_type_StatusEffect_R_boolean])(ctx, sp[0].o, sp[1].o);
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

void clinit_mindustry_entities_comp_FireComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_comp_FireComp_frames = jint(40);
	SF_mindustry_entities_comp_FireComp_duration = jint(90);
	SF_mindustry_entities_comp_FireComp_spreadDelay = jfloat(22.0f);
	SF_mindustry_entities_comp_FireComp_fireballDelay = jfloat(40.0f);
	SF_mindustry_entities_comp_FireComp_ticksPerFrame = jfloat(2.25f);
	SF_mindustry_entities_comp_FireComp_warmupDuration = jfloat(20.0f);
	SF_mindustry_entities_comp_FireComp_damageDelay = jfloat(40.0f);
	SF_mindustry_entities_comp_FireComp_tileDamage = jfloat(1.8f);
	SF_mindustry_entities_comp_FireComp_unitDamage = jfloat(3.0f);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/FireComp:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_FireComp(ctx);
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (40));
	clinit_mindustry_entities_comp_FireComp(ctx);
	SF_mindustry_entities_comp_FireComp_regions = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_FireComp[] {
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
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_FireComp_afterRead,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_FireComp_remove,
	(void *) M_mindustry_entities_comp_FireComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_FireComp_afterSync,
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
	(void *) M_mindustry_entities_comp_FireComp_clipSize_R_float,
	(void *) M_mindustry_entities_comp_FireComp_draw,
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
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
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
	{ "lifetime", "()F" },
	{ "time", "()F" },
	{ "lifetime", "(F)V" },
	{ "time", "(F)V" },
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
	{ "clipSize", "()F" },
	{ "draw", "()V" },
};

static jclass interfaces[] { &class_mindustry_gen_Timedc, &class_mindustry_gen_Posc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Drawc, };

static FieldMetadata fields[] {
	{ "frames", &class_int, (intptr_t) &SF_mindustry_entities_comp_FireComp_frames, "I", 25 },
	{ "duration", &class_int, (intptr_t) &SF_mindustry_entities_comp_FireComp_duration, "I", 25 },
	{ "spreadDelay", &class_float, (intptr_t) &SF_mindustry_entities_comp_FireComp_spreadDelay, "F", 26 },
	{ "fireballDelay", &class_float, (intptr_t) &SF_mindustry_entities_comp_FireComp_fireballDelay, "F", 26 },
	{ "ticksPerFrame", &class_float, (intptr_t) &SF_mindustry_entities_comp_FireComp_ticksPerFrame, "F", 26 },
	{ "warmupDuration", &class_float, (intptr_t) &SF_mindustry_entities_comp_FireComp_warmupDuration, "F", 26 },
	{ "damageDelay", &class_float, (intptr_t) &SF_mindustry_entities_comp_FireComp_damageDelay, "F", 26 },
	{ "tileDamage", &class_float, (intptr_t) &SF_mindustry_entities_comp_FireComp_tileDamage, "F", 26 },
	{ "unitDamage", &class_float, (intptr_t) &SF_mindustry_entities_comp_FireComp_unitDamage, "F", 26 },
	{ "regions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), (intptr_t) &SF_mindustry_entities_comp_FireComp_regions, "[Larc/graphics/g2d/TextureRegion;", 25 },
	{ "time", &class_float, offsetof(mindustry_entities_comp_FireComp, F_time), "F", 0 },
	{ "lifetime", &class_float, offsetof(mindustry_entities_comp_FireComp, F_lifetime), "F", 0 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_FireComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_FireComp, F_y), "F", 0 },
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_entities_comp_FireComp, F_tile), "Lmindustry/world/Tile;", 0 },
	{ "puddleFlammability", &class_float, offsetof(mindustry_entities_comp_FireComp, F_puddleFlammability), "F", 130 },
	{ "damageTimer", &class_float, offsetof(mindustry_entities_comp_FireComp, F_damageTimer), "F", 130 },
	{ "spreadTimer", &class_float, offsetof(mindustry_entities_comp_FireComp, F_spreadTimer), "F", 130 },
	{ "fireballTimer", &class_float, offsetof(mindustry_entities_comp_FireComp, F_fireballTimer), "F", 130 },
	{ "warmup", &class_float, offsetof(mindustry_entities_comp_FireComp, F_warmup), "F", 130 },
	{ "animation", &class_float, offsetof(mindustry_entities_comp_FireComp, F_animation), "F", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_FireComp, 0, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_FireComp_update, VTABLE_mindustry_entities_comp_FireComp_update, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_FireComp_draw, VTABLE_mindustry_entities_comp_FireComp_draw, "()V", 1 },
	{ "clipSize", (intptr_t) M_mindustry_entities_comp_FireComp_clipSize_R_float, VTABLE_mindustry_entities_comp_FireComp_clipSize_R_float, "()F", 1 },
	{ "remove", (intptr_t) M_mindustry_entities_comp_FireComp_remove, VTABLE_mindustry_entities_comp_FireComp_remove, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_entities_comp_FireComp_afterRead, VTABLE_mindustry_entities_comp_FireComp_afterRead, "()V", 1 },
	{ "afterSync", (intptr_t) M_mindustry_entities_comp_FireComp_afterSync, VTABLE_mindustry_entities_comp_FireComp_afterSync, "()V", 1 },
	{ "lambda$update$1", (intptr_t) SM_mindustry_entities_comp_FireComp_lambda$update$1_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$update$0", (intptr_t) SM_mindustry_entities_comp_FireComp_lambda$update$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_comp_FireComp, 0, "()V", 8 },
};

Class class_mindustry_entities_comp_FireComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/FireComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_FireComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_FireComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_FireComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_FireComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 83,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_FireComp = registerClass(&class_mindustry_entities_comp_FireComp);

}
