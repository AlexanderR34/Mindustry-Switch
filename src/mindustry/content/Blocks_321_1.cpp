#include "mindustry/content/Blocks_321_1.h"
#include "mindustry/content/Blocks_321_1_1.h"
#include "mindustry/content/Blocks_321_1_2.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/Blocks_321_1.h"
#include "mindustry/content/Blocks_321.h"
#include "mindustry/entities/bullet/FlakBulletType.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_content_Blocks$321$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_FlakBulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_Blocks$321$1 *) object;
	if (self->F_val$circleColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$circleColor)->clazz)->markFunction)((jobject) self->F_val$circleColor, mark, depth + 1);
	if (self->F_val$haloColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$haloColor)->clazz)->markFunction)((jobject) self->F_val$haloColor, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$321$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_FlakBulletType(ctx);
}

void init_mindustry_content_Blocks$321$1_mindustry_content_Blocks$321_float_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$321$1:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$321$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(5974);
	((mindustry_content_Blocks$321$1 *) NULL_CHECK((frame[0].o)))->F_val$circleColor = (jref) (frame[4].o);
	((mindustry_content_Blocks$321$1 *) NULL_CHECK((frame[0].o)))->F_val$haloColor = (jref) (frame[5].o);
	((mindustry_content_Blocks$321$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_bullet_FlakBulletType_float_float(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(5975);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_sprite = (jref) (((jobject) createStringLiteral(ctx, u8"missile-large"_j)));
	LINE_NUMBER(5977);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(40.0f));
	LINE_NUMBER(5978);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(12.0f));
	LINE_NUMBER(5979);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(22.0f));
	LINE_NUMBER(5981);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(7.0f));
	LINE_NUMBER(5982);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootSmokeSquareBig;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(5983);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootSmokeDisperse;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(5984);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_ammoMultiplier = (jfloat(1));
	LINE_NUMBER(5985);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$1 *) NULL_CHECK((frame[0].o)))->F_val$circleColor;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[3].o))->F_lightningColor = (jref) sp[4].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[2].o))->F_trailColor = (jref) sp[4].o;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[1].o))->F_backColor = (jref) sp[4].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) sp[4].o;
	LINE_NUMBER(5986);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_frontColor = (jref) sp[1].o;
	LINE_NUMBER(5987);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailWidth = (jfloat(3.0f));
	LINE_NUMBER(5988);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength = (12);
	LINE_NUMBER(5989);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Fx_hitBulletColor;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_despawnEffect = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[2].o;
	LINE_NUMBER(5990);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_buildingDamageMultiplier = (jfloat(0.3f));
	LINE_NUMBER(5992);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_colorSpark;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailEffect = (jref) sp[1].o;
	LINE_NUMBER(5993);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailRotation = (jint(1));
	LINE_NUMBER(5994);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval = (jfloat(3.0f));
	LINE_NUMBER(5996);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingPower = (jfloat(0.17f));
	LINE_NUMBER(5997);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingDelay = (jfloat(19.0f));
	LINE_NUMBER(5998);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingRange = (jfloat(160.0f));
	LINE_NUMBER(6000);
	((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_explodeRange = (jfloat(100.0f));
	LINE_NUMBER(6001);
	((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_explodeDelay = (jfloat(0));
	LINE_NUMBER(6003);
	((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_flakInterval = (jfloat(20.0f));
	LINE_NUMBER(6004);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnShake = (jfloat(3.0f));
	LINE_NUMBER(6006);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks$321$1$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$1$1);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_content_Blocks$321$1 *) NULL_CHECK((frame[0].o)))->F_val$circleColor;
	init_mindustry_content_Blocks$321$1$1_mindustry_content_Blocks$321$1_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_intervalBullet = (jref) sp[1].o;
	LINE_NUMBER(6014);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks$321$1$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$1$2);
	sp[2].o = frame[0].o;
	jfloat temp0 = jfloat(65.0f);
	sp[3].o = (jobject)((mindustry_content_Blocks$321$1 *) NULL_CHECK((frame[0].o)))->F_val$haloColor;
	init_mindustry_content_Blocks$321$1$2_mindustry_content_Blocks$321$1_float_arc_graphics_Color(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_fragBullet = (jref) sp[1].o;
	LINE_NUMBER(6029);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullets = (jint(1));
	LINE_NUMBER(6030);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jfloat temp1 = jfloat(0);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[2].o))->F_intervalRandomSpread = temp1;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_fragRandomSpread = temp1;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_fragSpread = temp1;
	LINE_NUMBER(6031);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_bulletInterval = (jfloat(20.0f));
	LINE_NUMBER(6033);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamage = (jfloat(0));
	LINE_NUMBER(6034);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitSquaresColor;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(6035);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround = (jint(1));
	LINE_NUMBER(5974);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$321$1[] {
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
	(void *) M_mindustry_entities_bullet_FlakBulletType_update_mindustry_gen_Bullet,
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
	(void *) M_mindustry_entities_bullet_FlakBulletType_lambda$update$0_mindustry_gen_Bullet_mindustry_gen_Unit,
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
	{ "lambda$update$0", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)V" },
};

static FieldMetadata fields[] {
	{ "val$circleColor", &class_arc_graphics_Color, offsetof(mindustry_content_Blocks$321$1, F_val$circleColor), "Larc/graphics/Color;", 4112 },
	{ "val$haloColor", &class_arc_graphics_Color, offsetof(mindustry_content_Blocks$321$1, F_val$haloColor), "Larc/graphics/Color;", 4112 },
	{ "this$0", &class_mindustry_content_Blocks$321, offsetof(mindustry_content_Blocks$321$1, F_this$0), "Lmindustry/content/Blocks$321;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$321$1_mindustry_content_Blocks$321_float_float_arc_graphics_Color_arc_graphics_Color, 0, "(Lmindustry/content/Blocks$321;FFLarc/graphics/Color;Larc/graphics/Color;)V", 0 },
};

Class class_mindustry_content_Blocks$321$1{
		.nativeName = (intptr_t) "mindustry/content/Blocks$321$1",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_FlakBulletType,
		.size = sizeof(mindustry_content_Blocks$321$1),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$321$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$321$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$321$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 78,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$321$1 = registerClass(&class_mindustry_content_Blocks$321$1);

}

