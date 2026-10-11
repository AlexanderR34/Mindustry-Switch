#include "mindustry/entities/bullet/FireBulletType.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Fires.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/entities/bullet/FireBulletType.h"

extern "C" {


void mark_mindustry_entities_bullet_FireBulletType(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_bullet_FireBulletType *) object;
	if (self->F_colorFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorFrom)->clazz)->markFunction)((jobject) self->F_colorFrom, mark, depth + 1);
	if (self->F_colorMid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorMid)->clazz)->markFunction)((jobject) self->F_colorMid, mark, depth + 1);
	if (self->F_colorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorTo)->clazz)->markFunction)((jobject) self->F_colorTo, mark, depth + 1);
	if (self->F_trailEffect2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trailEffect2)->clazz)->markFunction)((jobject) self->F_trailEffect2, mark, depth + 1);
}

void clinit_mindustry_entities_bullet_FireBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BulletType(ctx);
}

void init_mindustry_entities_bullet_FireBulletType_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FireBulletType:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_FireBulletType(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(29);
	init_mindustry_entities_bullet_BulletType_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_lightFlame;
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK(sp[0].o))->F_colorFrom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkFlame;
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK(sp[0].o))->F_colorMid = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK(sp[0].o))->F_colorTo = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(3.0f));
	LINE_NUMBER(14);
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_velMin = (jfloat(0.6f));
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_velMax = (jfloat(2.6f));
	LINE_NUMBER(15);
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_fireTrailChance = (jfloat(0.04f));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_ballfire;
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK(sp[0].o))->F_trailEffect2 = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_fireEffectChance = (jfloat(0.1f));
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_fireEffectChance2 = (jfloat(0.1f));
	LINE_NUMBER(20);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierce = (jint(1));
	LINE_NUMBER(21);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesTiles = (jint(0));
	LINE_NUMBER(22);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collides = (jint(0));
	LINE_NUMBER(23);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(0.03f));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_despawnEffect = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[2].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_fireballsmoke;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailEffect = (jref) sp[1].o;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_bullet_FireBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FireBulletType:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_FireBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_mindustry_entities_bullet_BulletType(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_lightFlame;
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK(sp[0].o))->F_colorFrom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkFlame;
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK(sp[0].o))->F_colorMid = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK(sp[0].o))->F_colorTo = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(3.0f));
	LINE_NUMBER(14);
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_velMin = (jfloat(0.6f));
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_velMax = (jfloat(2.6f));
	LINE_NUMBER(15);
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_fireTrailChance = (jfloat(0.04f));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_ballfire;
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK(sp[0].o))->F_trailEffect2 = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_fireEffectChance = (jfloat(0.1f));
	((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_fireEffectChance2 = (jfloat(0.1f));
	LINE_NUMBER(20);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierce = (jint(1));
	LINE_NUMBER(21);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesTiles = (jint(0));
	LINE_NUMBER(22);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collides = (jint(0));
	LINE_NUMBER(23);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(0.03f));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_despawnEffect = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[2].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_fireballsmoke;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailEffect = (jref) sp[1].o;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_FireBulletType_init_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FireBulletType:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_vel;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_velMin), ((jfloat)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_velMax));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_FireBulletType_draw_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FireBulletType:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_colorFrom;
	sp[1].o = (jobject)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_colorMid;
	sp[2].o = (jobject)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_colorTo;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fin_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	LINE_NUMBER(44);
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_radius;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp1, temp2, (temp3 * temp4));
	LINE_NUMBER(45);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_FireBulletType_update_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FireBulletType:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(52);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_fireTrailChance))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile])(ctx, (frame[1].o));
	SM_mindustry_entities_Fires_create_mindustry_world_Tile(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_fireEffectChance))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailEffect;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_4:;
	{
	LINE_NUMBER(60);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_fireEffectChance2))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_entities_bullet_FireBulletType *) NULL_CHECK((frame[0].o)))->F_trailEffect2;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_6:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_FireBulletType[] {
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
	(void *) M_mindustry_entities_bullet_BulletType_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_entities_bullet_BulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_continuousDamage_R_float,
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
	(void *) M_mindustry_entities_bullet_FireBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_FireBulletType_init_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_FireBulletType_update_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet,
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
	{ "colorFrom", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_FireBulletType, F_colorFrom), "Larc/graphics/Color;", 1 },
	{ "colorMid", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_FireBulletType, F_colorMid), "Larc/graphics/Color;", 1 },
	{ "colorTo", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_FireBulletType, F_colorTo), "Larc/graphics/Color;", 1 },
	{ "radius", &class_float, offsetof(mindustry_entities_bullet_FireBulletType, F_radius), "F", 1 },
	{ "velMin", &class_float, offsetof(mindustry_entities_bullet_FireBulletType, F_velMin), "F", 1 },
	{ "velMax", &class_float, offsetof(mindustry_entities_bullet_FireBulletType, F_velMax), "F", 1 },
	{ "fireTrailChance", &class_float, offsetof(mindustry_entities_bullet_FireBulletType, F_fireTrailChance), "F", 1 },
	{ "trailEffect2", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_FireBulletType, F_trailEffect2), "Lmindustry/entities/Effect;", 1 },
	{ "fireEffectChance", &class_float, offsetof(mindustry_entities_bullet_FireBulletType, F_fireEffectChance), "F", 1 },
	{ "fireEffectChance2", &class_float, offsetof(mindustry_entities_bullet_FireBulletType, F_fireEffectChance2), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_FireBulletType_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_FireBulletType, 0, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_FireBulletType_init_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_FireBulletType_init_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_bullet_FireBulletType_draw_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_FireBulletType_draw_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_bullet_FireBulletType_update_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_FireBulletType_update_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
};

Class class_mindustry_entities_bullet_FireBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/FireBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BulletType,
		.size = sizeof(mindustry_entities_bullet_FireBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_FireBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_FireBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_FireBulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_FireBulletType = registerClass(&class_mindustry_entities_bullet_FireBulletType);

}
