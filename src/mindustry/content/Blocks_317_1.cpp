#include "mindustry/content/Blocks_317_1.h"
#include "mindustry/gen/Sounds.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/Blocks_317_1_1.h"
#include "mindustry/content/Blocks_317_1_3.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Blocks_317_1_2.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/content/Blocks_317.h"
#include "mindustry/content/Blocks_317_1.h"
#include "mindustry/entities/effect/MultiEffect.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_content_Blocks$317$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$317$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$317$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BasicBulletType(ctx);
}

void init_mindustry_content_Blocks$317$1_mindustry_content_Blocks$317(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$317$1:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$317$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5061);
	((mindustry_content_Blocks$317$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_bullet_BasicBulletType(ctx, (frame[0].o));
	LINE_NUMBER(5062);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_effect_MultiEffect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_effect_MultiEffect);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_entities_Effect, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootTitan;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Blocks$317$1$1(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_content_Blocks$317$1$1);
	init_mindustry_content_Blocks$317$1$1_mindustry_content_Blocks$317$1(ctx, sp[3].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	init_mindustry_entities_effect_MultiEffect_Array1_mindustry_entities_Effect(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(5068);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootSmokeTitan;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(5069);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_surge;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) sp[1].o;
	LINE_NUMBER(5071);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_sprite = (jref) (((jobject) createStringLiteral(ctx, u8"large-orb"_j)));
	LINE_NUMBER(5072);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_missileTrail;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailEffect = (jref) sp[1].o;
	LINE_NUMBER(5073);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval = (jfloat(3.0f));
	LINE_NUMBER(5074);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailParam = (jfloat(4.0f));
	LINE_NUMBER(5075);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap = (jint(2));
	LINE_NUMBER(5076);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_buildingDamageMultiplier = (jfloat(0.5f));
	LINE_NUMBER(5077);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnHit = (jint(0));
	LINE_NUMBER(5078);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(5.0f));
	LINE_NUMBER(5079);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(180.0f));
	LINE_NUMBER(5080);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(80.0f));
	LINE_NUMBER(5081);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp2 = jfloat(16.0f);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[1].o))->F_height = temp2;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_width = temp2;
	LINE_NUMBER(5082);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_surge;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_backColor = (jref) sp[1].o;
	LINE_NUMBER(5083);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_frontColor = (jref) sp[1].o;
	LINE_NUMBER(5084);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp5 = jfloat(0);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[1].o))->F_shrinkY = temp5;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_shrinkX = temp5;
	LINE_NUMBER(5085);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_surge;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailColor = (jref) sp[1].o;
	LINE_NUMBER(5086);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength = (12);
	LINE_NUMBER(5087);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailWidth = (jfloat(2.2f));
	LINE_NUMBER(5088);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_content_Blocks$317$1$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$317$1$2);
	init_mindustry_content_Blocks$317$1$2_mindustry_content_Blocks$317$1(ctx, sp[2].o, (frame[0].o));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_hitEffect = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnEffect = (jref) sp[2].o;
	LINE_NUMBER(5096);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionAfflict;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnSound = (jref) sp[1].o;
	LINE_NUMBER(5097);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootAfflict;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(5099);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_content_Blocks$317$1$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$317$1$3);
	init_mindustry_content_Blocks$317$1$3_mindustry_content_Blocks$317$1_float_float(ctx, sp[2].o, (frame[0].o), (jfloat(3.0f)), (jfloat(35.0f)));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_intervalBullet = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_fragBullet = (jref) sp[2].o;
	LINE_NUMBER(5120);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_bulletInterval = (jfloat(3.0f));
	LINE_NUMBER(5121);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalRandomSpread = (jfloat(20.0f));
	LINE_NUMBER(5122);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullets = (jint(2));
	LINE_NUMBER(5123);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalAngle = (jfloat(180.0f));
	LINE_NUMBER(5124);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalSpread = (jfloat(300.0f));
	LINE_NUMBER(5126);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullets = (20);
	LINE_NUMBER(5127);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragVelocityMin = (jfloat(0.5f));
	LINE_NUMBER(5128);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragVelocityMax = (jfloat(1.2f));
	LINE_NUMBER(5129);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragLifeMin = (jfloat(0.5f));
	LINE_NUMBER(5061);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$317$1[] {
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
	{ "this$0", &class_mindustry_content_Blocks$317, offsetof(mindustry_content_Blocks$317$1, F_this$0), "Lmindustry/content/Blocks$317;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$317$1_mindustry_content_Blocks$317, 0, "(Lmindustry/content/Blocks$317;)V", 0 },
};

Class class_mindustry_content_Blocks$317$1{
		.nativeName = (intptr_t) "mindustry/content/Blocks$317$1",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BasicBulletType,
		.size = sizeof(mindustry_content_Blocks$317$1),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$317$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$317$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$317$1,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$317$1 = registerClass(&class_mindustry_content_Blocks$317$1);

}

