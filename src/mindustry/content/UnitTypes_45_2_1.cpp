#include "mindustry/content/UnitTypes_45_2_1.h"
#include "mindustry/content/UnitTypes_45_2_1_1.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/content/UnitTypes_45_2_1.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/content/UnitTypes_45_2.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/content/UnitTypes_45_2_1_invoke_arc_func_Cons_1.h"
#include "mindustry/entities/effect/MultiEffect.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_content_UnitTypes$45$2$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_BasicBulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$45$2$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$45$2$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BasicBulletType(ctx);
}

void init_mindustry_content_UnitTypes$45$2$1_mindustry_content_UnitTypes$45$2_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$45$2$1:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$45$2$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(3292);
	((mindustry_content_UnitTypes$45$2$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_bullet_BasicBulletType_float_float(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(3293);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Pal_techBlue;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[2].o))->F_hitColor = (jref) sp[3].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_trailColor = (jref) sp[3].o;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_backColor = (jref) sp[3].o;
	LINE_NUMBER(3294);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_frontColor = (jref) sp[1].o;
	LINE_NUMBER(3295);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(7.5f));
	LINE_NUMBER(3296);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(10.0f));
	LINE_NUMBER(3297);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(40.0f));
	LINE_NUMBER(3298);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailWidth = (jfloat(2));
	LINE_NUMBER(3299);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength = (jint(4));
	LINE_NUMBER(3300);
	sp[0].o = (jobject)((mindustry_content_UnitTypes$45$2$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shake = (jfloat(1));
	LINE_NUMBER(3302);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_missileTrail;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailEffect = (jref) sp[1].o;
	LINE_NUMBER(3303);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailParam = (jfloat(1.8f));
	LINE_NUMBER(3304);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval = (jfloat(6.0f));
	LINE_NUMBER(3306);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius = (jfloat(30.0f));
	LINE_NUMBER(3307);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamage = (jfloat(43.0f));
	LINE_NUMBER(3309);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionCleroi;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnSound = (jref) sp[1].o;
	LINE_NUMBER(3311);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_entities_effect_MultiEffect(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_entities_effect_MultiEffect);
	sp[3].o = (jobject)createArray(ctx, &class_mindustry_entities_Effect, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Fx(ctx);
	sp[4].o = (jobject)SF_mindustry_content_Fx_hitBulletColor;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_UnitTypes$45$2$1$1(ctx);
	sp[4].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$45$2$1$1);
	init_mindustry_content_UnitTypes$45$2$1$1_mindustry_content_UnitTypes$45$2$1(ctx, sp[4].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	init_mindustry_entities_effect_MultiEffect_Array1_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_despawnEffect = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[2].o;
	LINE_NUMBER(3318);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_effect_MultiEffect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_effect_MultiEffect);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_entities_Effect, (jint(2)));
	jint temp2 = jint(0);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootBigColor;
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	jint temp3 = jint(1);
	clinit_mindustry_entities_Effect(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_entities_Effect);
	jfloat temp4 = jfloat(9.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$45$2$1_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_content_UnitTypes$45$2$1_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$45$2$1_invoke_arc_func_Cons_1);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_entities_Effect_float_arc_func_Cons(ctx, sp[3].o, temp4, sp[4].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	init_mindustry_entities_effect_MultiEffect_Array1_mindustry_entities_Effect(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(3325);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootSmokeSquare;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(3326);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_ammoMultiplier = (jfloat(2));
	LINE_NUMBER(3292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_UnitTypes$45$2$1_lambda$new$0_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$45$2$1:lambda$new$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$45$2$1(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3319);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(3320);
	jfloat temp1 = jfloat(0.7f);
	jfloat temp2 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp1 + temp2));
	LINE_NUMBER(3321);
	jfloat temp3 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Lines_square_float_float_float_float(ctx, temp3, temp4, (temp5 * (jfloat(5.0f))), (((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(45.0f))));
	LINE_NUMBER(3323);
	jfloat temp6 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp7 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp8 = jfloat(23.0f);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp9 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp6, temp7, temp8, sp[0].o, (temp9 * (jfloat(0.7f))));
	LINE_NUMBER(3324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$45$2$1[] {
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
	(void *) M_mindustry_entities_bullet_BasicBulletType_load,
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
	(void *) M_mindustry_entities_bullet_BasicBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet,
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
	{ "this$1", &class_mindustry_content_UnitTypes$45$2, offsetof(mindustry_content_UnitTypes$45$2$1, F_this$1), "Lmindustry/content/UnitTypes$45$2;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$45$2$1_mindustry_content_UnitTypes$45$2_float_float, 0, "(Lmindustry/content/UnitTypes$45$2;FF)V", 0 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_content_UnitTypes$45$2$1_lambda$new$0_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;)V", 4106 },
};

Class class_mindustry_content_UnitTypes$45$2$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$45$2$1",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BasicBulletType,
		.size = sizeof(mindustry_content_UnitTypes$45$2$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$45$2$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$45$2$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$45$2$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$45$2$1 = registerClass(&class_mindustry_content_UnitTypes$45$2$1);

}

