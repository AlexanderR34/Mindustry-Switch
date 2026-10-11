#include "mindustry/entities/bullet/ContinuousBulletType.h"
#include "java/lang/Math.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/bullet/ContinuousBulletType.h"

extern "C" {


void mark_mindustry_entities_bullet_ContinuousBulletType(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_bullet_ContinuousBulletType *) object;
}

void clinit_mindustry_entities_bullet_ContinuousBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BulletType(ctx);
}

void init_mindustry_entities_bullet_ContinuousBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousBulletType:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_ContinuousBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_mindustry_entities_bullet_BulletType(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(220.0f));
	LINE_NUMBER(10);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(0));
	LINE_NUMBER(11);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_damageInterval = (jfloat(5.0f));
	LINE_NUMBER(12);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_largeHit = (jint(0));
	LINE_NUMBER(13);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_continuous = (jint(1));
	LINE_NUMBER(15);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_timescaleDamage = (jint(0));
	LINE_NUMBER(18);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_removeAfterPierce = (jint(0));
	LINE_NUMBER(19);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap = (jint(-1));
	LINE_NUMBER(20);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(0));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnEffect = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(16.0f));
	LINE_NUMBER(24);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_impact = (jint(1));
	LINE_NUMBER(25);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_keepVelocity = (jint(0));
	LINE_NUMBER(26);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collides = (jint(0));
	LINE_NUMBER(27);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierce = (jint(1));
	LINE_NUMBER(28);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hittable = (jint(0));
	LINE_NUMBER(29);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_absorbable = (jint(0));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_ContinuousBulletType_continuousDamage_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousBulletType:continuousDamage", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	if (((jint)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_continuous) != 0) goto label_1;
	}
	(sp++)->f = jfloat(-1.0f);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage) / ((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_damageInterval)) * (jfloat(60.0f)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_ContinuousBulletType_estimateDPS_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousBulletType:estimateDPS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	if (((jint)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_continuous) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)M_mindustry_entities_bullet_BulletType_estimateDPS_R_float(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage) * (jfloat(100.0f))) / ((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_damageInterval)) * (jfloat(3.0f)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_ContinuousBulletType_calculateRange_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousBulletType:calculateRange", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxRange));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ContinuousBulletType_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousBulletType:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	M_mindustry_entities_bullet_BulletType_init(ctx, (frame[0].o));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize), (((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length) * (jfloat(2))));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_drawSize = temp0;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ContinuousBulletType_init_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousBulletType:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(62);
	if (((jint)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_continuous) != 0) goto label_2;
	}
	{
	LINE_NUMBER(63);
	((func_mindustry_entities_bullet_ContinuousBulletType_applyDamage_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_ContinuousBulletType_applyDamage_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ContinuousBulletType_update_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousBulletType:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	if (((jint)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_continuous) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)((func_mindustry_gen_Bullet_timer_int_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_timer_int_float_R_boolean])(ctx, (frame[1].o), (jint(1)), ((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_damageInterval));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(73);
	((func_mindustry_entities_bullet_ContinuousBulletType_applyDamage_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_ContinuousBulletType_applyDamage_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(76);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_shake), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(77);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, ((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_shake), ((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_shake), (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(80);
	((func_mindustry_entities_bullet_ContinuousBulletType_updateBulletInterval_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_ContinuousBulletType_updateBulletInterval_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ContinuousBulletType_applyDamage_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousBulletType:applyDamage", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	frame[2].f = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage);
	LINE_NUMBER(85);
	if (((jint)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_timescaleDamage) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Building)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[4].o)));
	LINE_NUMBER(86);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_damage;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_timeScale_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_timeScale_R_float])(ctx, (frame[3].o));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_damage = (temp0 * temp1);
	}
label_2:;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_entities_bullet_ContinuousBulletType_currentLength_mindustry_gen_Bullet_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_ContinuousBulletType_currentLength_mindustry_gen_Bullet_R_float])(ctx, (frame[0].o), (frame[1].o));
	SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, ((jint)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_largeHit), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserAbsorb), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap));
	LINE_NUMBER(89);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage = (frame[2].f);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_ContinuousBulletType_currentLength_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousBulletType:currentLength", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_ContinuousBulletType[] {
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
	(void *) M_mindustry_entities_bullet_ContinuousBulletType_init,
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
	(void *) M_mindustry_entities_bullet_ContinuousBulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_ContinuousBulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_ContinuousBulletType_continuousDamage_R_float,
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
	(void *) M_mindustry_entities_bullet_ContinuousBulletType_init_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_ContinuousBulletType_update_mindustry_gen_Bullet,
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
	(void *) M_mindustry_entities_bullet_ContinuousBulletType_applyDamage_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_ContinuousBulletType_currentLength_mindustry_gen_Bullet_R_float,
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
	{ "applyDamage", "(Lmindustry/gen/Bullet;)V" },
	{ "currentLength", "(Lmindustry/gen/Bullet;)F" },
};

static FieldMetadata fields[] {
	{ "length", &class_float, offsetof(mindustry_entities_bullet_ContinuousBulletType, F_length), "F", 1 },
	{ "shake", &class_float, offsetof(mindustry_entities_bullet_ContinuousBulletType, F_shake), "F", 1 },
	{ "damageInterval", &class_float, offsetof(mindustry_entities_bullet_ContinuousBulletType, F_damageInterval), "F", 1 },
	{ "largeHit", &class_boolean, offsetof(mindustry_entities_bullet_ContinuousBulletType, F_largeHit), "Z", 1 },
	{ "continuous", &class_boolean, offsetof(mindustry_entities_bullet_ContinuousBulletType, F_continuous), "Z", 1 },
	{ "timescaleDamage", &class_boolean, offsetof(mindustry_entities_bullet_ContinuousBulletType, F_timescaleDamage), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_ContinuousBulletType, 0, "()V", 1 },
	{ "continuousDamage", (intptr_t) M_mindustry_entities_bullet_ContinuousBulletType_continuousDamage_R_float, VTABLE_mindustry_entities_bullet_ContinuousBulletType_continuousDamage_R_float, "()F", 1 },
	{ "estimateDPS", (intptr_t) M_mindustry_entities_bullet_ContinuousBulletType_estimateDPS_R_float, VTABLE_mindustry_entities_bullet_ContinuousBulletType_estimateDPS_R_float, "()F", 1 },
	{ "calculateRange", (intptr_t) M_mindustry_entities_bullet_ContinuousBulletType_calculateRange_R_float, VTABLE_mindustry_entities_bullet_ContinuousBulletType_calculateRange_R_float, "()F", 4 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_ContinuousBulletType_init, VTABLE_mindustry_entities_bullet_ContinuousBulletType_init, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_ContinuousBulletType_init_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_ContinuousBulletType_init_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_bullet_ContinuousBulletType_update_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_ContinuousBulletType_update_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "applyDamage", (intptr_t) M_mindustry_entities_bullet_ContinuousBulletType_applyDamage_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_ContinuousBulletType_applyDamage_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "currentLength", (intptr_t) M_mindustry_entities_bullet_ContinuousBulletType_currentLength_mindustry_gen_Bullet_R_float, VTABLE_mindustry_entities_bullet_ContinuousBulletType_currentLength_mindustry_gen_Bullet_R_float, "(Lmindustry/gen/Bullet;)F", 1 },
};

Class class_mindustry_entities_bullet_ContinuousBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/ContinuousBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BulletType,
		.size = sizeof(mindustry_entities_bullet_ContinuousBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_ContinuousBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_ContinuousBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_ContinuousBulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 79,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_ContinuousBulletType = registerClass(&class_mindustry_entities_bullet_ContinuousBulletType);

}
