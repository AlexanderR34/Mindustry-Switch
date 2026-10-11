#include "mindustry/entities/bullet/LaserBulletType.h"
#include "mindustry/entities/bullet/LaserBulletType_invoke_java_lang_Runnable_1.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/entities/bullet/LaserBulletType.h"
#include "arc/math/Angles.h"
#include "arc/graphics/g2d/Lines.h"
#include "java/lang/Float.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "arc/util/Tmp.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "mindustry/entities/Lightning.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_entities_bullet_LaserBulletType(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_bullet_LaserBulletType *) object;
	if (self->F_colors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colors)->clazz)->markFunction)((jobject) self->F_colors, mark, depth + 1);
	if (self->F_laserEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserEffect)->clazz)->markFunction)((jobject) self->F_laserEffect, mark, depth + 1);
}

void clinit_mindustry_entities_bullet_LaserBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BulletType(ctx);
}

void init_mindustry_entities_bullet_LaserBulletType_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/LaserBulletType:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_LaserBulletType(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(23);
	init_mindustry_entities_bullet_BulletType(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_lancerLaser;
	sp[2].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color])(ctx, sp[2].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(0.4f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_lancerLaser;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_lancerLaserShootSmoke;
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK(sp[0].o))->F_laserEffect = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(160.0f));
	LINE_NUMBER(16);
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(15.0f));
	LINE_NUMBER(17);
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_lengthFalloff = (jfloat(0.5f));
	LINE_NUMBER(18);
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_sideLength = (jfloat(29.0f));
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_sideWidth = (jfloat(0.7f));
	LINE_NUMBER(19);
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_sideAngle = (jfloat(90.0f));
	LINE_NUMBER(20);
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_lightningSpacing = (jfloat(-1.0f));
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_lightningDelay = (jfloat(0.1f));
	LINE_NUMBER(21);
	((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_largeHit = (jint(0));
	LINE_NUMBER(24);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage = (frame[1].f);
	LINE_NUMBER(25);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(0));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitLaserBlast;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2))));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnEffect = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitLancer;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(32);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(4.0f));
	LINE_NUMBER(33);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(16.0f));
	LINE_NUMBER(34);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_impact = (jint(1));
	LINE_NUMBER(35);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_keepVelocity = (jint(0));
	LINE_NUMBER(36);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collides = (jint(0));
	LINE_NUMBER(37);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierce = (jint(1));
	LINE_NUMBER(38);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hittable = (jint(0));
	LINE_NUMBER(39);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_absorbable = (jint(0));
	LINE_NUMBER(40);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_removeAfterPierce = (jint(0));
	LINE_NUMBER(41);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_delayFrags = (jint(1));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_bullet_LaserBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/LaserBulletType:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_LaserBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(45);
	init_mindustry_entities_bullet_LaserBulletType_float(ctx, (frame[0].o), (jfloat(1)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_LaserBulletType_estimateDPS_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/LaserBulletType:estimateDPS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	jfloat temp0 = (jfloat)M_mindustry_entities_bullet_BulletType_estimateDPS_R_float(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(3.0f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_LaserBulletType_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/LaserBulletType:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	M_mindustry_entities_bullet_BulletType_init(ctx, (frame[0].o));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize), (((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_length) * (jfloat(2))));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_drawSize = temp0;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_LaserBulletType_calculateRange_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/LaserBulletType:calculateRange", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_length), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxRange));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_LaserBulletType_init_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/LaserBulletType:init", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_collideLaser_mindustry_gen_Bullet_float_boolean_boolean_int_R_float(ctx, (frame[1].o), ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_length), ((jint)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_largeHit), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserAbsorb), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap));
	frame[2].f = temp0;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	frame[3].f = temp1;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_laserEffect;
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp4 = frame[3].f;
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((frame[2].f) * (jfloat(0.75f))));
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp2, temp3, temp4, sp[1].o);
	LINE_NUMBER(72);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_lightningSpacing), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(73);
	frame[4].i = (jint(0));
	LINE_NUMBER(74);
	frame[5].f = (jfloat(0));
	}
label_7:;
	{
	if ((floatCompare((frame[5].f), (frame[2].f), 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(75);
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[3].f), (frame[5].f));
	frame[6].f = (temp0 + temp1);
	LINE_NUMBER(76);
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[3].f), (frame[5].f));
	frame[7].f = (temp2 + temp3);
	LINE_NUMBER(78);
	jint temp4 = frame[4].i;
	INST_IINC(4, 1);
	frame[8].i = temp4;
	LINE_NUMBER(80);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_12:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_13;
	}
	{
	frame[12].i = ((jint)ARRAY_ACCESS(jint, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(81);
	jfloat temp0 = (jfloat((frame[8].i))) * ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_lightningDelay);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_LaserBulletType_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_entities_bullet_LaserBulletType_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_entities_bullet_LaserBulletType_invoke_java_lang_Runnable_1);
		proxy->F_field5 = (frame[12].i);
		proxy->F_field4 = (frame[3].f);
		proxy->F_field3 = (frame[7].f);
		proxy->F_field2 = (frame[6].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(80);
	INST_IINC(11, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(74);
	frame[5].f = ((frame[5].f) + ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_lightningSpacing));
	goto label_7;
	}
label_4:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_LaserBulletType_draw_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/LaserBulletType:draw", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	frame[2].f = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_fdata);
	LINE_NUMBER(98);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fin_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, temp0, (jfloat(0)), (jfloat(0.2f)));
	frame[3].f = temp1;
	LINE_NUMBER(99);
	frame[4].f = ((frame[2].f) * (frame[3].f));
	LINE_NUMBER(100);
	frame[5].f = ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_width);
	LINE_NUMBER(101);
	frame[6].f = (jfloat(1));
	LINE_NUMBER(103);
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp2, temp3, temp4, (frame[4].f));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_7:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_8;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(105);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[10].o));
	LINE_NUMBER(106);
	jfloat temp0 = (frame[5].f) * ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_lengthFalloff);
	frame[5].f = temp0;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * temp3));
	LINE_NUMBER(107);
	jfloat temp4 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp6 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float_boolean(ctx, temp4, temp5, temp6, (frame[4].f), (jint(0)));
	LINE_NUMBER(108);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp7 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp7, (frame[4].f));
	LINE_NUMBER(109);
	jfloat temp8 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp9 = temp8 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp10 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp11 = temp10 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	jfloat temp12 = (jfloat)SM_arc_graphics_g2d_Lines_getStroke_R_float(ctx);
	jfloat temp13 = ((frame[5].f) * (jfloat(2))) + (((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)));
	jfloat temp14 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp9, temp11, temp12, temp13, temp14);
	LINE_NUMBER(111);
	jfloat temp15 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp16 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp17 = (jfloat(1)) * (frame[5].f);
	jfloat temp18 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp15, temp16, (temp17 * temp18));
	LINE_NUMBER(112);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[11].o = sp[0].o;
	frame[12].i = (((jarray) nullCheck(ctx, (frame[11].o)))->length);
	frame[13].i = (jint(0));
	}
label_16:;
	{
	if ((frame[13].i) >= (frame[12].i)) goto label_17;
	}
	{
	frame[14].i = ((jint)ARRAY_ACCESS(jint, (frame[11].o), (frame[13].i)));
	LINE_NUMBER(113);
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_sideWidth;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	jfloat temp4 = (temp2 * temp3) * (frame[5].f);
	jfloat temp5 = ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_sideLength) * (frame[6].f);
	jfloat temp6 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp0, temp1, temp4, temp5, (temp6 + (((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_sideAngle) * (jfloat((frame[14].i))))));
	LINE_NUMBER(112);
	INST_IINC(13, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(116);
	frame[6].f = ((frame[6].f) * ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_lengthFalloff));
	LINE_NUMBER(104);
	INST_IINC(9, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(118);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(120);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((frame[4].f) * (jfloat(1.1f))));
	LINE_NUMBER(121);
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp4 = temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp5 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp6 = temp5 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	jfloat temp7 = ((jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_width) * (jfloat(1.4f));
	jfloat temp8 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	jfloat temp9 = temp7 * temp8;
	sp[0].o = (jobject)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	SM_mindustry_graphics_Drawf_light_float_float_float_float_float_arc_graphics_Color_float(ctx, temp1, temp2, temp4, temp6, temp9, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (jfloat(0.6f)));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_LaserBulletType_drawLight_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/LaserBulletType:drawLight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_LaserBulletType_lambda$init$0_mindustry_gen_Bullet_float_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/LaserBulletType:lambda$init$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)((func_mindustry_gen_Bullet_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_isAdded_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_type;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningColor;
	LINE_NUMBER(84);
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningDamage), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage;
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[-1].o))->F_lightningDamage;
label_5:;
	{
	sp -= 3;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (frame[4].f) + (jfloat(((90) * (frame[5].i))));
	jfloat temp3 = (jfloat)((mindustry_entities_bullet_LaserBulletType *) NULL_CHECK((frame[0].o)))->F_lightningAngleRand;
	LINE_NUMBER(85);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, temp3);
	jfloat temp5 = temp2 + temp4;
	jint temp6 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningLength;
	jint temp7 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningLengthRand;
	LINE_NUMBER(86);
	jint temp8 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, temp7);
	jint temp9 = temp6 + temp8;
	LINE_NUMBER(83);
	SM_mindustry_entities_Lightning_create_mindustry_gen_Bullet_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, sp[1].o, sp[2].f, temp0, temp1, temp5, temp9);
	}
label_1:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_LaserBulletType[] {
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
	(void *) M_mindustry_entities_bullet_LaserBulletType_init,
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
	(void *) M_mindustry_entities_bullet_LaserBulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_LaserBulletType_calculateRange_R_float,
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
	(void *) M_mindustry_entities_bullet_LaserBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_LaserBulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_LaserBulletType_init_mindustry_gen_Bullet,
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
	(void *) M_mindustry_entities_bullet_LaserBulletType_lambda$init$0_mindustry_gen_Bullet_float_float_float_int,
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
	{ "lambda$init$0", "(Lmindustry/gen/Bullet;FFFI)V" },
};

static FieldMetadata fields[] {
	{ "colors", getArrayClass(&class_arc_graphics_Color, 1), offsetof(mindustry_entities_bullet_LaserBulletType, F_colors), "[Larc/graphics/Color;", 1 },
	{ "laserEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_LaserBulletType, F_laserEffect), "Lmindustry/entities/Effect;", 1 },
	{ "length", &class_float, offsetof(mindustry_entities_bullet_LaserBulletType, F_length), "F", 1 },
	{ "width", &class_float, offsetof(mindustry_entities_bullet_LaserBulletType, F_width), "F", 1 },
	{ "lengthFalloff", &class_float, offsetof(mindustry_entities_bullet_LaserBulletType, F_lengthFalloff), "F", 1 },
	{ "sideLength", &class_float, offsetof(mindustry_entities_bullet_LaserBulletType, F_sideLength), "F", 1 },
	{ "sideWidth", &class_float, offsetof(mindustry_entities_bullet_LaserBulletType, F_sideWidth), "F", 1 },
	{ "sideAngle", &class_float, offsetof(mindustry_entities_bullet_LaserBulletType, F_sideAngle), "F", 1 },
	{ "lightningSpacing", &class_float, offsetof(mindustry_entities_bullet_LaserBulletType, F_lightningSpacing), "F", 1 },
	{ "lightningDelay", &class_float, offsetof(mindustry_entities_bullet_LaserBulletType, F_lightningDelay), "F", 1 },
	{ "lightningAngleRand", &class_float, offsetof(mindustry_entities_bullet_LaserBulletType, F_lightningAngleRand), "F", 1 },
	{ "largeHit", &class_boolean, offsetof(mindustry_entities_bullet_LaserBulletType, F_largeHit), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_LaserBulletType_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_LaserBulletType, 0, "()V", 1 },
	{ "estimateDPS", (intptr_t) M_mindustry_entities_bullet_LaserBulletType_estimateDPS_R_float, VTABLE_mindustry_entities_bullet_LaserBulletType_estimateDPS_R_float, "()F", 1 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_LaserBulletType_init, VTABLE_mindustry_entities_bullet_LaserBulletType_init, "()V", 1 },
	{ "calculateRange", (intptr_t) M_mindustry_entities_bullet_LaserBulletType_calculateRange_R_float, VTABLE_mindustry_entities_bullet_LaserBulletType_calculateRange_R_float, "()F", 4 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_LaserBulletType_init_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_LaserBulletType_init_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_bullet_LaserBulletType_draw_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_LaserBulletType_draw_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_entities_bullet_LaserBulletType_drawLight_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_LaserBulletType_drawLight_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "lambda$init$0", (intptr_t) M_mindustry_entities_bullet_LaserBulletType_lambda$init$0_mindustry_gen_Bullet_float_float_float_int, VTABLE_mindustry_entities_bullet_LaserBulletType_lambda$init$0_mindustry_gen_Bullet_float_float_float_int, "(Lmindustry/gen/Bullet;FFFI)V", 4098 },
};

Class class_mindustry_entities_bullet_LaserBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/LaserBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BulletType,
		.size = sizeof(mindustry_entities_bullet_LaserBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_LaserBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_LaserBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_LaserBulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 78,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_LaserBulletType = registerClass(&class_mindustry_entities_bullet_LaserBulletType);

}
