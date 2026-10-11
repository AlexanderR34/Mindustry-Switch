#include "mindustry/entities/bullet/ShrapnelBulletType.h"
#include "mindustry/entities/bullet/ShrapnelBulletType.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Damage.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/ctype/Content.h"
#include "arc/util/Tmp.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_entities_bullet_ShrapnelBulletType(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_bullet_ShrapnelBulletType *) object;
	if (self->F_fromColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fromColor)->clazz)->markFunction)((jobject) self->F_fromColor, mark, depth + 1);
	if (self->F_toColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_toColor)->clazz)->markFunction)((jobject) self->F_toColor, mark, depth + 1);
}

void clinit_mindustry_entities_bullet_ShrapnelBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BulletType(ctx);
}

void init_mindustry_entities_bullet_ShrapnelBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ShrapnelBulletType:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_ShrapnelBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_mindustry_entities_bullet_BulletType(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(100.0f));
	LINE_NUMBER(14);
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(20.0f));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK(sp[0].o))->F_fromColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_lancerLaser;
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK(sp[0].o))->F_toColor = (jref) sp[1].o;
	LINE_NUMBER(16);
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_hitLarge = (jint(0));
	LINE_NUMBER(18);
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrations = (7);
	LINE_NUMBER(19);
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationLenScl = (jfloat(10.0f));
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationWidth = (jfloat(4.0f));
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationSpacing = (jfloat(8.0f));
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationSpaceOffset = (jfloat(80.0f));
	((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationFadeOffset = (jfloat(0.5f));
	LINE_NUMBER(22);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(0));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitLancer;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Fx_lightningShoot;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_smokeEffect = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[2].o;
	LINE_NUMBER(25);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(10.0f));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnEffect = (jref) sp[1].o;
	LINE_NUMBER(27);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_keepVelocity = (jint(0));
	LINE_NUMBER(28);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collides = (jint(0));
	LINE_NUMBER(29);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierce = (jint(1));
	LINE_NUMBER(30);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hittable = (jint(0));
	LINE_NUMBER(31);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_absorbable = (jint(0));
	LINE_NUMBER(32);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.6f));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ShrapnelBulletType_init_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ShrapnelBulletType:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(39);
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_collideLaser_mindustry_gen_Bullet_float_boolean_boolean_int_R_float(ctx, (frame[1].o), ((jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_length), ((jint)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_hitLarge), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserAbsorb), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ShrapnelBulletType_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ShrapnelBulletType:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	M_mindustry_entities_bullet_BulletType_init(ctx, (frame[0].o));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize), (((jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_length) * (jfloat(2))));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_drawSize = temp0;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_ShrapnelBulletType_calculateRange_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ShrapnelBulletType:calculateRange", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_length), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxRange));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ShrapnelBulletType_draw_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ShrapnelBulletType:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	frame[2].f = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_fdata);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	frame[3].f = temp0;
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_fromColor;
	sp[1].o = (jobject)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_toColor;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fin_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(59);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (jint((((jfloat(((jint)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrations))) * (frame[2].f)) / ((jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_length))))) goto label_5;
	}
	{
	LINE_NUMBER(60);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f), ((jfloat((frame[4].i))) * ((jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationSpacing)));
	LINE_NUMBER(61);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 - ((jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationFadeOffset)));
	frame[5].f = (temp1 * (((jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationSpaceOffset) - ((jfloat((frame[4].i))) * ((jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationLenScl))));
	LINE_NUMBER(62);
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp4 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	jfloat temp6 = (jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationWidth;
	jfloat temp7 = frame[5].f;
	jfloat temp8 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp3, temp5, temp6, temp7, (temp8 + (jfloat(90.0f))));
	LINE_NUMBER(63);
	jfloat temp9 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp10 = temp9 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp11 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp12 = temp11 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	jfloat temp13 = (jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_serrationWidth;
	jfloat temp14 = frame[5].f;
	jfloat temp15 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp10, temp12, temp13, temp14, (temp15 - (jfloat(90.0f))));
	LINE_NUMBER(59);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(65);
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_width;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	jfloat temp4 = temp2 * temp3;
	jfloat temp5 = (frame[2].f) + (jfloat(4.0f));
	jfloat temp6 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp0, temp1, temp4, temp5, temp6);
	LINE_NUMBER(66);
	jfloat temp7 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp8 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp9 = (jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_width;
	jfloat temp10 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	jfloat temp11 = temp9 * temp10;
	jfloat temp12 = jfloat(10.0f);
	jfloat temp13 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp7, temp8, temp11, temp12, (temp13 + (jfloat(180.0f))));
	LINE_NUMBER(67);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(69);
	jfloat temp14 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp15 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp16 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp17 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[3].f), (frame[2].f));
	jfloat temp18 = temp16 + temp17;
	jfloat temp19 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp20 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[3].f), (frame[2].f));
	jfloat temp21 = temp19 + temp20;
	jfloat temp22 = ((jfloat)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_width) * (jfloat(2.5f));
	jfloat temp23 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	jfloat temp24 = temp22 * temp23;
	sp[0].o = (jobject)((mindustry_entities_bullet_ShrapnelBulletType *) NULL_CHECK((frame[0].o)))->F_toColor;
	SM_mindustry_graphics_Drawf_light_float_float_float_float_float_arc_graphics_Color_float(ctx, temp14, temp15, temp18, temp21, temp24, sp[0].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_ShrapnelBulletType[] {
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
	(void *) M_mindustry_entities_bullet_ShrapnelBulletType_init,
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
	(void *) M_mindustry_entities_bullet_ShrapnelBulletType_calculateRange_R_float,
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
	(void *) M_mindustry_entities_bullet_ShrapnelBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_ShrapnelBulletType_init_mindustry_gen_Bullet,
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
	{ "length", &class_float, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_length), "F", 1 },
	{ "width", &class_float, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_width), "F", 1 },
	{ "fromColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_fromColor), "Larc/graphics/Color;", 1 },
	{ "toColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_toColor), "Larc/graphics/Color;", 1 },
	{ "hitLarge", &class_boolean, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_hitLarge), "Z", 1 },
	{ "serrations", &class_int, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_serrations), "I", 1 },
	{ "serrationLenScl", &class_float, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_serrationLenScl), "F", 1 },
	{ "serrationWidth", &class_float, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_serrationWidth), "F", 1 },
	{ "serrationSpacing", &class_float, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_serrationSpacing), "F", 1 },
	{ "serrationSpaceOffset", &class_float, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_serrationSpaceOffset), "F", 1 },
	{ "serrationFadeOffset", &class_float, offsetof(mindustry_entities_bullet_ShrapnelBulletType, F_serrationFadeOffset), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_ShrapnelBulletType, 0, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_ShrapnelBulletType_init_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_ShrapnelBulletType_init_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_ShrapnelBulletType_init, VTABLE_mindustry_entities_bullet_ShrapnelBulletType_init, "()V", 1 },
	{ "calculateRange", (intptr_t) M_mindustry_entities_bullet_ShrapnelBulletType_calculateRange_R_float, VTABLE_mindustry_entities_bullet_ShrapnelBulletType_calculateRange_R_float, "()F", 4 },
	{ "draw", (intptr_t) M_mindustry_entities_bullet_ShrapnelBulletType_draw_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_ShrapnelBulletType_draw_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
};

Class class_mindustry_entities_bullet_ShrapnelBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/ShrapnelBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BulletType,
		.size = sizeof(mindustry_entities_bullet_ShrapnelBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_ShrapnelBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_ShrapnelBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_ShrapnelBulletType,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_ShrapnelBulletType = registerClass(&class_mindustry_entities_bullet_ShrapnelBulletType);

}
