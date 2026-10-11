#include "mindustry/entities/bullet/ContinuousLaserBulletType.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/entities/bullet/ContinuousLaserBulletType.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/ctype/Content.h"
#include "arc/util/Tmp.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/entities/bullet/ContinuousBulletType.h"

extern "C" {


void mark_mindustry_entities_bullet_ContinuousLaserBulletType(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_ContinuousBulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_bullet_ContinuousLaserBulletType *) object;
	if (self->F_colors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colors)->clazz)->markFunction)((jobject) self->F_colors, mark, depth + 1);
}

void clinit_mindustry_entities_bullet_ContinuousLaserBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_ContinuousBulletType(ctx);
}

void init_mindustry_entities_bullet_ContinuousLaserBulletType_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousLaserBulletType:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_ContinuousLaserBulletType(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(21);
	init_mindustry_entities_bullet_ContinuousBulletType(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_fadeTime = (jfloat(16.0f));
	LINE_NUMBER(14);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_lightStroke = (jfloat(40.0f));
	LINE_NUMBER(15);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_divisions = (13);
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (jint(4)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ec745855"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ec7458aa"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff9c5a"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_strokeFrom = (jfloat(2));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_strokeTo = (jfloat(0.5f));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_pointyScaling = (jfloat(0.75f));
	LINE_NUMBER(18);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_backLength = (jfloat(7.0f));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_frontLength = (jfloat(35.0f));
	LINE_NUMBER(19);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(9.0f));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscScl = (jfloat(0.8f));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscMag = (jfloat(1.5f));
	LINE_NUMBER(29);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(1));
	LINE_NUMBER(30);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_largeHit = (jint(1));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitBeam;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(32);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(4.0f));
	LINE_NUMBER(33);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize = (jfloat(420.0f));
	LINE_NUMBER(34);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(16.0f));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2))));
	LINE_NUMBER(36);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendAmount = (jint(1));
	LINE_NUMBER(37);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendSpread = (jfloat(5.0f));
	LINE_NUMBER(38);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendChance = (jfloat(0.4f));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_orange;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.7f));
	LINE_NUMBER(22);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage = (frame[1].f);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_bullet_ContinuousLaserBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousLaserBulletType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_ContinuousLaserBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_mindustry_entities_bullet_ContinuousBulletType(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_fadeTime = (jfloat(16.0f));
	LINE_NUMBER(14);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_lightStroke = (jfloat(40.0f));
	LINE_NUMBER(15);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_divisions = (13);
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (jint(4)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ec745855"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ec7458aa"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff9c5a"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_strokeFrom = (jfloat(2));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_strokeTo = (jfloat(0.5f));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_pointyScaling = (jfloat(0.75f));
	LINE_NUMBER(18);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_backLength = (jfloat(7.0f));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_frontLength = (jfloat(35.0f));
	LINE_NUMBER(19);
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(9.0f));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscScl = (jfloat(0.8f));
	((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscMag = (jfloat(1.5f));
	LINE_NUMBER(29);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(1));
	LINE_NUMBER(30);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_largeHit = (jint(1));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitBeam;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(32);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(4.0f));
	LINE_NUMBER(33);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize = (jfloat(420.0f));
	LINE_NUMBER(34);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(16.0f));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2))));
	LINE_NUMBER(36);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendAmount = (jint(1));
	LINE_NUMBER(37);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendSpread = (jfloat(5.0f));
	LINE_NUMBER(38);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendChance = (jfloat(0.4f));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_orange;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.7f));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ContinuousLaserBulletType_draw_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousLaserBulletType:draw", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time), (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_lifetime) - ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_fadeTime)), -1)) <= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat(1)) - ((((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time) - (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime) - ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_fadeTime))) / ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_fadeTime));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(1);
label_2:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, sp[0].f);
	frame[2].f = temp0;
	LINE_NUMBER(46);
	jfloat temp1 = (jfloat)SM_mindustry_entities_Damage_findLength_mindustry_gen_Bullet_float_boolean_int_R_float(ctx, (frame[1].o), (((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length) * (frame[2].f)), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserAbsorb), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap));
	frame[3].f = temp1;
	LINE_NUMBER(47);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	frame[4].f = temp2;
	LINE_NUMBER(49);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(50);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))));
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(1)), (jfloat(0.1f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (temp0 + temp1));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(52);
	jfloat temp2 = jfloat((frame[5].i));
	sp[0].o = (jobject)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	frame[6].f = (temp2 / (jfloat(((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))))));
	LINE_NUMBER(53);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_strokeFrom), ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_strokeTo), (frame[6].f));
	frame[7].f = temp3;
	LINE_NUMBER(54);
	jfloat temp4 = (jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_width;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscScl), ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_oscMag));
	frame[8].f = (((temp4 + temp5) * (frame[2].f)) * (frame[7].f));
	LINE_NUMBER(55);
	jfloat temp6 = jfloat(1);
	jfloat temp7 = jfloat((frame[5].i));
	sp[0].o = (jobject)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (temp6 - (temp7 / (jfloat((((jarray) nullCheck(ctx, sp[0].o))->length))))), (jfloat(1)), ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_pointyScaling));
	frame[9].f = temp8;
	LINE_NUMBER(57);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (frame[8].f));
	LINE_NUMBER(58);
	jfloat temp9 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp10 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp11 = frame[4].f;
	jfloat temp12 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[3].f) - ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_frontLength)));
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float_boolean(ctx, temp9, temp10, temp11, temp12, (jint(0)));
	LINE_NUMBER(61);
	SM_mindustry_graphics_Drawf_flameFront_float_float_int_float_float_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_divisions), ((frame[4].f) + (jfloat(180.0f))), ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_backLength), ((frame[8].f) / (jfloat(2))));
	LINE_NUMBER(64);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp13 = frame[4].f;
	jfloat temp14 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[3].f) - ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_frontLength)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp13, temp14);
	LINE_NUMBER(65);
	jfloat temp15 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp16 = temp15 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp17 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_mindustry_graphics_Drawf_flameFront_float_float_int_float_float_float(ctx, temp16, (temp17 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)), ((jint)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_divisions), (frame[4].f), (((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_frontLength) * (frame[9].f)), ((frame[8].f) / (jfloat(2))));
	LINE_NUMBER(49);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(68);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((frame[3].f) * (jfloat(1.1f))));
	LINE_NUMBER(70);
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
	jfloat temp7 = (jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_lightStroke;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightColor;
	SM_mindustry_graphics_Drawf_light_float_float_float_float_float_arc_graphics_Color_float(ctx, temp1, temp2, temp4, temp6, temp7, sp[0].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity));
	LINE_NUMBER(71);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ContinuousLaserBulletType_drawLight_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousLaserBulletType:drawLight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_ContinuousLaserBulletType_currentLength_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousLaserBulletType:currentLength", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time), (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_lifetime) - ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_fadeTime)), -1)) <= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat(1)) - ((((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time) - (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime) - ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_fadeTime))) / ((jfloat)((mindustry_entities_bullet_ContinuousLaserBulletType *) NULL_CHECK((frame[0].o)))->F_fadeTime));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(1);
label_2:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, sp[0].f);
	frame[2].f = temp0;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length) * (frame[2].f));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_ContinuousLaserBulletType[] {
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
	(void *) M_mindustry_entities_bullet_ContinuousLaserBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_ContinuousLaserBulletType_drawLight_mindustry_gen_Bullet,
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
	(void *) M_mindustry_entities_bullet_ContinuousLaserBulletType_currentLength_mindustry_gen_Bullet_R_float,
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
	{ "fadeTime", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_fadeTime), "F", 1 },
	{ "lightStroke", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_lightStroke), "F", 1 },
	{ "divisions", &class_int, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_divisions), "I", 1 },
	{ "colors", getArrayClass(&class_arc_graphics_Color, 1), offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_colors), "[Larc/graphics/Color;", 1 },
	{ "strokeFrom", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_strokeFrom), "F", 1 },
	{ "strokeTo", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_strokeTo), "F", 1 },
	{ "pointyScaling", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_pointyScaling), "F", 1 },
	{ "backLength", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_backLength), "F", 1 },
	{ "frontLength", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_frontLength), "F", 1 },
	{ "width", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_width), "F", 1 },
	{ "oscScl", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_oscScl), "F", 1 },
	{ "oscMag", &class_float, offsetof(mindustry_entities_bullet_ContinuousLaserBulletType, F_oscMag), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_ContinuousLaserBulletType_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_ContinuousLaserBulletType, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_bullet_ContinuousLaserBulletType_draw_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_ContinuousLaserBulletType_draw_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_entities_bullet_ContinuousLaserBulletType_drawLight_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_ContinuousLaserBulletType_drawLight_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "currentLength", (intptr_t) M_mindustry_entities_bullet_ContinuousLaserBulletType_currentLength_mindustry_gen_Bullet_R_float, VTABLE_mindustry_entities_bullet_ContinuousLaserBulletType_currentLength_mindustry_gen_Bullet_R_float, "(Lmindustry/gen/Bullet;)F", 1 },
};

Class class_mindustry_entities_bullet_ContinuousLaserBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/ContinuousLaserBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_ContinuousBulletType,
		.size = sizeof(mindustry_entities_bullet_ContinuousLaserBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_ContinuousLaserBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_ContinuousLaserBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_ContinuousLaserBulletType,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 79,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_ContinuousLaserBulletType = registerClass(&class_mindustry_entities_bullet_ContinuousLaserBulletType);

}
