#include "mindustry/entities/bullet/FlakBulletType.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/geom/Rect.h"
#include "arc/util/Time.h"
#include "mindustry/entities/bullet/FlakBulletType_invoke_java_lang_Runnable_1.h"
#include "mindustry/entities/bullet/FlakBulletType.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/ctype/Content.h"
#include "arc/util/Tmp.h"
#include "mindustry/entities/Units.h"
#include "mindustry/entities/bullet/FlakBulletType_invoke_arc_func_Cons_1.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/game/Team.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_entities_bullet_FlakBulletType(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_bullet_FlakBulletType *) object;
}

void clinit_mindustry_entities_bullet_FlakBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BasicBulletType(ctx);
}

void init_mindustry_entities_bullet_FlakBulletType_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FlakBulletType:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_FlakBulletType(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(12);
	init_mindustry_entities_bullet_BasicBulletType_float_float_java_lang_String(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (((jobject) createStringLiteral(ctx, u8"shell"_j))));
	LINE_NUMBER(9);
	((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_explodeRange = (jfloat(30.0f));
	((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_explodeDelay = (jfloat(5.0f));
	((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_flakDelay = (jfloat(0));
	((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_flakInterval = (jfloat(6.0f));
	LINE_NUMBER(13);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamage = (jfloat(15.0f));
	LINE_NUMBER(14);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius = (jfloat(34.0f));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_flakExplosionBig;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(16);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(8.0f));
	LINE_NUMBER(17);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(10.0f));
	LINE_NUMBER(18);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround = (jint(0));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_bullet_FlakBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FlakBulletType:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_FlakBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_mindustry_entities_bullet_FlakBulletType_float_float(ctx, (frame[0].o), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_FlakBulletType_update_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FlakBulletType:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(30);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time), ((jfloat)((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_flakDelay), -1)) < 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_fdata), (jfloat(0)), -1)) < 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_timer_int_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_timer_int_float_R_boolean])(ctx, (frame[1].o), (jint(2)), ((jfloat)((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_flakInterval));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[1].o, (((jfloat)((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_explodeRange) * (jfloat(2))));
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_FlakBulletType_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_entities_bullet_FlakBulletType_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_entities_bullet_FlakBulletType_invoke_arc_func_Cons_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_FlakBulletType_lambda$update$0_mindustry_gen_Bullet_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FlakBulletType:lambda$update$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_fdata), (jfloat(0)), 1)) < 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesAir), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(35);
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[2].o), (frame[1].o), (((jfloat)((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_explodeRange) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) / (jfloat(2)))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(37);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_fdata = (jfloat(-1.0f));
	LINE_NUMBER(38);
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_FlakBulletType *) NULL_CHECK((frame[0].o)))->F_explodeDelay;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_FlakBulletType_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_entities_bullet_FlakBulletType_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_entities_bullet_FlakBulletType_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_3:;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_bullet_FlakBulletType_lambda$update$1_mindustry_gen_Bullet(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/FlakBulletType:lambda$update$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_FlakBulletType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(40);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_fdata), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(41);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_time = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime);
	}
label_1:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_FlakBulletType[] {
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
	{ "explodeRange", &class_float, offsetof(mindustry_entities_bullet_FlakBulletType, F_explodeRange), "F", 1 },
	{ "explodeDelay", &class_float, offsetof(mindustry_entities_bullet_FlakBulletType, F_explodeDelay), "F", 1 },
	{ "flakDelay", &class_float, offsetof(mindustry_entities_bullet_FlakBulletType, F_flakDelay), "F", 1 },
	{ "flakInterval", &class_float, offsetof(mindustry_entities_bullet_FlakBulletType, F_flakInterval), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_FlakBulletType_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_FlakBulletType, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_bullet_FlakBulletType_update_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_FlakBulletType_update_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "lambda$update$0", (intptr_t) M_mindustry_entities_bullet_FlakBulletType_lambda$update$0_mindustry_gen_Bullet_mindustry_gen_Unit, VTABLE_mindustry_entities_bullet_FlakBulletType_lambda$update$0_mindustry_gen_Bullet_mindustry_gen_Unit, "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)V", 4098 },
	{ "lambda$update$1", (intptr_t) SM_mindustry_entities_bullet_FlakBulletType_lambda$update$1_mindustry_gen_Bullet, 0, "(Lmindustry/gen/Bullet;)V", 4106 },
};

Class class_mindustry_entities_bullet_FlakBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/FlakBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BasicBulletType,
		.size = sizeof(mindustry_entities_bullet_FlakBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_FlakBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_FlakBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_FlakBulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 78,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_FlakBulletType = registerClass(&class_mindustry_entities_bullet_FlakBulletType);

}
