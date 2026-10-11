#include "mindustry/entities/bullet/PointLaserBulletType.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/util/Interval.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/graphics/Trail.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/entities/bullet/PointLaserBulletType.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/game/Team.h"
#include "arc/math/geom/Position.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_entities_bullet_PointLaserBulletType(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_BulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_bullet_PointLaserBulletType *) object;
	if (self->F_sprite)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sprite)->clazz)->markFunction)((jobject) self->F_sprite, mark, depth + 1);
	if (self->F_laser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laser)->clazz)->markFunction)((jobject) self->F_laser, mark, depth + 1);
	if (self->F_laserEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserEnd)->clazz)->markFunction)((jobject) self->F_laserEnd, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_beamEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_beamEffect)->clazz)->markFunction)((jobject) self->F_beamEffect, mark, depth + 1);
}

void clinit_mindustry_entities_bullet_PointLaserBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BulletType(ctx);
}

void init_mindustry_entities_bullet_PointLaserBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/PointLaserBulletType:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_PointLaserBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_mindustry_entities_bullet_BulletType(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_sprite = (jref) (((jobject) createStringLiteral(ctx, u8"point-laser"_j)));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_colorTrail;
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK(sp[0].o))->F_beamEffect = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_beamEffectInterval = (jfloat(3.0f));
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_beamEffectSize = (jfloat(3.5f));
	LINE_NUMBER(25);
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscScl = (jfloat(2));
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscMag = (jfloat(0.3f));
	LINE_NUMBER(26);
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_damageInterval = (jfloat(5.0f));
	LINE_NUMBER(28);
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(0));
	LINE_NUMBER(31);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_removeAfterPierce = (jint(0));
	LINE_NUMBER(32);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(0));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnEffect = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(20.0f));
	LINE_NUMBER(35);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_impact = (jint(1));
	LINE_NUMBER(36);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_keepVelocity = (jint(0));
	LINE_NUMBER(37);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collides = (jint(0));
	LINE_NUMBER(38);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierce = (jint(1));
	LINE_NUMBER(39);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hittable = (jint(0));
	LINE_NUMBER(40);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_absorbable = (jint(0));
	LINE_NUMBER(41);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_optimalLifeFract = (jfloat(0.5f));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_smokeEffect = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[2].o;
	LINE_NUMBER(45);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize = (jfloat(1000.0f));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_PointLaserBulletType_continuousDamage_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/PointLaserBulletType:continuousDamage", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage) / ((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_damageInterval)) * (jfloat(60.0f)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_PointLaserBulletType_estimateDPS_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/PointLaserBulletType:estimateDPS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage) * (jfloat(100.0f))) / ((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_damageInterval)) * (jfloat(3.0f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_PointLaserBulletType_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/PointLaserBulletType:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	M_mindustry_entities_bullet_BulletType_load(ctx, (frame[0].o));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_sprite;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK(sp[0].o))->F_laser = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_sprite;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-end"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK(sp[0].o))->F_laserEnd = (jref) sp[1].o;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_PointLaserBulletType_draw_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/PointLaserBulletType:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	M_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_laser;
	sp[1].o = (jobject)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_laserEnd;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX;
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Bullet_fslope_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fslope_R_float])(ctx, (frame[1].o));
	jfloat temp5 = (jfloat(1)) - ((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscMag);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscScl), ((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscMag));
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (temp4 * (temp5 + temp6)));
	LINE_NUMBER(73);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_PointLaserBulletType_update_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/PointLaserBulletType:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	((func_mindustry_entities_bullet_PointLaserBulletType_updateTrail_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_PointLaserBulletType_updateTrail_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(79);
	((func_mindustry_entities_bullet_PointLaserBulletType_updateTrailEffects_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_PointLaserBulletType_updateTrailEffects_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(80);
	((func_mindustry_entities_bullet_PointLaserBulletType_updateBulletInterval_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_PointLaserBulletType_updateBulletInterval_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(0)), ((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_damageInterval));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	sp[2].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitEffect;
	SM_mindustry_entities_Damage_collidePoint_mindustry_gen_Bullet_mindustry_game_Team_mindustry_entities_Effect_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY));
	}
label_4:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), ((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_beamEffectInterval));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_beamEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_beamEffectSize;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Bullet_fslope_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fslope_R_float])(ctx, (frame[1].o));
	jfloat temp4 = temp2 * temp3;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp4, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(90);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_shake), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(91);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, ((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_shake), ((jfloat)((mindustry_entities_bullet_PointLaserBulletType *) NULL_CHECK((frame[0].o)))->F_shake), (frame[1].o));
	}
label_8:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_PointLaserBulletType_updateTrailEffects_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/PointLaserBulletType:updateTrailEffects", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailChance), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailChance))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailRotation) == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_angleTo_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_angleTo_float_float_R_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY));
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailParam;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_fslope_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fslope_R_float])(ctx, (frame[1].o));
	jfloat temp2 = temp0 * temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_5:;
	{
	sp -= 4;
	sp[4].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	}
label_1:;
	{
	LINE_NUMBER(103);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)((func_mindustry_gen_Bullet_timer_int_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_timer_int_float_R_boolean])(ctx, (frame[1].o), (jint(0)), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailRotation) == 0) goto label_9;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_angleTo_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_angleTo_float_float_R_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY));
	sp[0].f = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailParam;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_fslope_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fslope_R_float])(ctx, (frame[1].o));
	jfloat temp2 = temp0 * temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_10:;
	{
	sp -= 4;
	sp[4].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	}
label_6:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_PointLaserBulletType_updateTrail_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/PointLaserBulletType:updateTrail", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_Trail(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_Trail);
	init_mindustry_graphics_Trail_int(ctx, sp[1].o, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_trail = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_length = ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_fslope_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fslope_R_float])(ctx, (frame[1].o));
	jfloat temp3 = jfloat(1);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp[4].f = temp3;
	sp += 5;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinMag), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinScl), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinMag));
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 6;
	((func_mindustry_graphics_Trail_update_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_update_float_float_float])(ctx, sp[0].o, sp[1].f, sp[2].f, (sp[3].f * (sp[4].f - sp[5].f)));
	}
label_1:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_PointLaserBulletType_updateBulletInterval_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/PointLaserBulletType:updateBulletInterval", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullet;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalDelay), -1)) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(2)), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_bulletInterval));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(124);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(125);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullets)) goto label_1;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullet;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalRandomSpread));
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, temp0, temp1, (((temp2 + temp3) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalAngle)) + (((jfloat((frame[3].i))) - (((jfloat(((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullets))) - (jfloat(1))) / (jfloat(2)))) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalSpread))));
	LINE_NUMBER(125);
	INST_IINC(3, 1);
	goto label_4;
	}
label_1:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_PointLaserBulletType[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_Content_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_entities_bullet_BulletType_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_entities_bullet_BulletType_afterPatch,
	(void *) M_mindustry_entities_bullet_PointLaserBulletType_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_entities_bullet_PointLaserBulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_PointLaserBulletType_continuousDamage_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_heals_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float,
	(void *) M_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_PointLaserBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_PointLaserBulletType_update_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_PointLaserBulletType_updateBulletInterval_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_PointLaserBulletType_updateTrailEffects_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_PointLaserBulletType_updateTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float,
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
	{ "copy", "()Lmindustry/entities/bullet/BulletType;" },
	{ "estimateDPS", "()F" },
	{ "calculateRange", "()F" },
	{ "continuousDamage", "()F" },
	{ "heals", "()Z" },
	{ "testCollision", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "hitTile", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;FFFZ)V" },
	{ "hitEntity", "(Lmindustry/gen/Bullet;Lmindustry/gen/Hitboxc;F)V" },
	{ "handlePierce", "(Lmindustry/gen/Bullet;FFF)V" },
	{ "damageMultiplier", "(Lmindustry/gen/Bullet;)F" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FF)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FFZ)V" },
	{ "createIncend", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createPuddles", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createSplashDamage", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createFrags", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createUnits", "(Lmindustry/gen/Bullet;FF)V" },
	{ "despawned", "(Lmindustry/gen/Bullet;)V" },
	{ "removed", "(Lmindustry/gen/Bullet;)V" },
	{ "buildingDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "shieldDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "draw", "(Lmindustry/gen/Bullet;)V" },
	{ "drawTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "drawParts", "(Lmindustry/gen/Bullet;)V" },
	{ "drawLight", "(Lmindustry/gen/Bullet;)V" },
	{ "init", "(Lmindustry/gen/Bullet;)V" },
	{ "update", "(Lmindustry/gen/Bullet;)V" },
	{ "updateBulletInterval", "(Lmindustry/gen/Bullet;)V" },
	{ "updateHoming", "(Lmindustry/gen/Bullet;)V" },
	{ "updateWeaving", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrailEffects", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "create", "(Lmindustry/gen/Teamc;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFLmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FFLmindustry/gen/Teamc;)Lmindustry/gen/Bullet;" },
	{ "createNet", "(Lmindustry/game/Team;FFFFFF)V" },
	{ "lambda$updateHoming$3", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$2", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$updateHoming$1", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$0", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$createSplashDamage$0", "(Lmindustry/gen/Building;)V" },
	{ "lambda$hit$0", "(Lmindustry/gen/Bullet;FF)V" },
};

static FieldMetadata fields[] {
	{ "sprite", &class_java_lang_String, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_sprite), "Ljava/lang/String;", 1 },
	{ "laser", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_laser), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserEnd", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_laserEnd), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_color), "Larc/graphics/Color;", 1 },
	{ "beamEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_beamEffect), "Lmindustry/entities/Effect;", 1 },
	{ "beamEffectInterval", &class_float, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_beamEffectInterval), "F", 1 },
	{ "beamEffectSize", &class_float, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_beamEffectSize), "F", 1 },
	{ "oscScl", &class_float, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_oscScl), "F", 1 },
	{ "oscMag", &class_float, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_oscMag), "F", 1 },
	{ "damageInterval", &class_float, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_damageInterval), "F", 1 },
	{ "shake", &class_float, offsetof(mindustry_entities_bullet_PointLaserBulletType, F_shake), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_PointLaserBulletType, 0, "()V", 1 },
	{ "continuousDamage", (intptr_t) M_mindustry_entities_bullet_PointLaserBulletType_continuousDamage_R_float, VTABLE_mindustry_entities_bullet_PointLaserBulletType_continuousDamage_R_float, "()F", 1 },
	{ "estimateDPS", (intptr_t) M_mindustry_entities_bullet_PointLaserBulletType_estimateDPS_R_float, VTABLE_mindustry_entities_bullet_PointLaserBulletType_estimateDPS_R_float, "()F", 1 },
	{ "load", (intptr_t) M_mindustry_entities_bullet_PointLaserBulletType_load, VTABLE_mindustry_entities_bullet_PointLaserBulletType_load, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_bullet_PointLaserBulletType_draw_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_PointLaserBulletType_draw_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_bullet_PointLaserBulletType_update_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_PointLaserBulletType_update_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "updateTrailEffects", (intptr_t) M_mindustry_entities_bullet_PointLaserBulletType_updateTrailEffects_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_PointLaserBulletType_updateTrailEffects_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "updateTrail", (intptr_t) M_mindustry_entities_bullet_PointLaserBulletType_updateTrail_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_PointLaserBulletType_updateTrail_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "updateBulletInterval", (intptr_t) M_mindustry_entities_bullet_PointLaserBulletType_updateBulletInterval_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_PointLaserBulletType_updateBulletInterval_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
};

Class class_mindustry_entities_bullet_PointLaserBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/PointLaserBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BulletType,
		.size = sizeof(mindustry_entities_bullet_PointLaserBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_PointLaserBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_PointLaserBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_PointLaserBulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_PointLaserBulletType = registerClass(&class_mindustry_entities_bullet_PointLaserBulletType);

}
