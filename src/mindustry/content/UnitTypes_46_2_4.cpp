#include "mindustry/content/UnitTypes_46_2_4.h"
#include "mindustry/content/UnitTypes_46_2_4_2.h"
#include "mindustry/content/UnitTypes_46_2_4_1.h"
#include "mindustry/content/UnitTypes_46_2.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "mindustry/type/UnitType.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "mindustry/content/UnitTypes_46_2_4.h"
#include "mindustry/content/UnitTypes_46_2_4_invoke_arc_func_Cons_1.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/entities/effect/MultiEffect.h"

extern "C" {


void mark_mindustry_content_UnitTypes$46$2$4(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_UnitTypes$46$2$4 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$46$2$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BulletType(ctx);
}

void init_mindustry_content_UnitTypes$46$2$4_mindustry_content_UnitTypes$46$2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$46$2$4:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$46$2$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3445);
	((mindustry_content_UnitTypes$46$2$4 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_bullet_BulletType(ctx, (frame[0].o));
	LINE_NUMBER(3446);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_effect_MultiEffect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_effect_MultiEffect);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_entities_Effect, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootBigColor;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	clinit_mindustry_entities_Effect(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_entities_Effect);
	jfloat temp2 = jfloat(9.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$46$2$4_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_content_UnitTypes$46$2$4_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$46$2$4_invoke_arc_func_Cons_1);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_entities_Effect_float_arc_func_Cons(ctx, sp[3].o, temp2, sp[4].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	jint temp3 = jint(2);
	clinit_mindustry_content_UnitTypes$46$2$4$1(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$46$2$4$1);
	init_mindustry_content_UnitTypes$46$2$4$1_mindustry_content_UnitTypes$46$2$4(ctx, sp[3].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	init_mindustry_entities_effect_MultiEffect_Array1_mindustry_entities_Effect(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(3459);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootBigSmoke2;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(3460);
	sp[0].o = (jobject)((mindustry_content_UnitTypes$46$2$4 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shake = (jfloat(2));
	LINE_NUMBER(3461);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(0));
	LINE_NUMBER(3462);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_keepVelocity = (jint(0));
	LINE_NUMBER(3463);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_inaccuracy = (jfloat(2));
	LINE_NUMBER(3465);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes$46$2$4$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$46$2$4$2);
	init_mindustry_content_UnitTypes$46$2$4$2_mindustry_content_UnitTypes$46$2$4_java_lang_String(ctx, sp[1].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"anthicus-missile"_j))));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_spawnUnit = (jref) sp[1].o;
	LINE_NUMBER(3445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_UnitTypes$46$2$4_lambda$new$0_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$46$2$4:lambda$new$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$46$2$4(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3447);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(3448);
	jfloat temp1 = jfloat(0.7f);
	jfloat temp2 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp1 + temp2));
	LINE_NUMBER(3449);
	jfloat temp3 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Lines_square_float_float_float_float(ctx, temp3, temp4, (temp5 * (jfloat(5.0f))), (((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(45.0f))));
	LINE_NUMBER(3451);
	jfloat temp6 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp7 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp8 = jfloat(23.0f);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp9 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp6, temp7, temp8, sp[0].o, (temp9 * (jfloat(0.7f))));
	LINE_NUMBER(3452);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$46$2$4[] {
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
	(void *) M_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet,
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
	{ "this$1", &class_mindustry_content_UnitTypes$46$2, offsetof(mindustry_content_UnitTypes$46$2$4, F_this$1), "Lmindustry/content/UnitTypes$46$2;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$46$2$4_mindustry_content_UnitTypes$46$2, 0, "(Lmindustry/content/UnitTypes$46$2;)V", 0 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_content_UnitTypes$46$2$4_lambda$new$0_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;)V", 4106 },
};

Class class_mindustry_content_UnitTypes$46$2$4{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$46$2$4",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BulletType,
		.size = sizeof(mindustry_content_UnitTypes$46$2$4),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$46$2$4,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$46$2$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$46$2$4,
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
static bool registered_mindustry_content_UnitTypes$46$2$4 = registerClass(&class_mindustry_content_UnitTypes$46$2$4);

}

