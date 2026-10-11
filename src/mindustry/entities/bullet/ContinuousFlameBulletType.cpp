#include "mindustry/entities/bullet/ContinuousFlameBulletType.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/entities/bullet/ContinuousFlameBulletType.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
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


void mark_mindustry_entities_bullet_ContinuousFlameBulletType(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_bullet_ContinuousFlameBulletType *) object;
	if (self->F_flareColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flareColor)->clazz)->markFunction)((jobject) self->F_flareColor, mark, depth + 1);
	if (self->F_lengthInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lengthInterp)->clazz)->markFunction)((jobject) self->F_lengthInterp, mark, depth + 1);
	if (self->F_lengthWidthPans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lengthWidthPans)->clazz)->markFunction)((jobject) self->F_lengthWidthPans, mark, depth + 1);
	if (self->F_colors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colors)->clazz)->markFunction)((jobject) self->F_colors, mark, depth + 1);
}

void clinit_mindustry_entities_bullet_ContinuousFlameBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_ContinuousBulletType(ctx);
}

void init_mindustry_entities_bullet_ContinuousFlameBulletType_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousFlameBulletType:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_ContinuousFlameBulletType(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(36);
	init_mindustry_entities_bullet_ContinuousBulletType(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_lightStroke = (jfloat(40.0f));
	LINE_NUMBER(16);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(3.7f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_oscScl = (jfloat(1.2f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_oscMag = (jfloat(0.02f));
	LINE_NUMBER(17);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_divisions = (25);
	LINE_NUMBER(19);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_drawFlare = (jint(1));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e189f5"_j))));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK(sp[0].o))->F_flareColor = (jref) sp[1].o;
	LINE_NUMBER(21);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareWidth = (jfloat(3.0f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareInnerScl = (jfloat(0.5f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareLength = (jfloat(40.0f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareInnerLenScl = (jfloat(0.5f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareLayer = (jfloat(99.9999f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareRotSpeed = (jfloat(1.2f));
	LINE_NUMBER(22);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_rotateFlare = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_slope;
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK(sp[0].o))->F_lengthInterp = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (15));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (jfloat(1.12f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))) = (jfloat(1.3f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))) = (jfloat(0.32f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))) = (jfloat(0.3f));
	ARRAY_ACCESS(jfloat, sp[1].o, (6)) = (jfloat(0.8f));
	ARRAY_ACCESS(jfloat, sp[1].o, (7)) = (jfloat(0.9f));
	ARRAY_ACCESS(jfloat, sp[1].o, (8)) = (jfloat(0.2f));
	ARRAY_ACCESS(jfloat, sp[1].o, (9)) = (jfloat(0.5f));
	ARRAY_ACCESS(jfloat, sp[1].o, (10)) = (jfloat(0.8f));
	ARRAY_ACCESS(jfloat, sp[1].o, (11)) = (jfloat(0.15f));
	ARRAY_ACCESS(jfloat, sp[1].o, (12)) = (jfloat(0.25f));
	ARRAY_ACCESS(jfloat, sp[1].o, (13)) = (jfloat(0.7f));
	ARRAY_ACCESS(jfloat, sp[1].o, (14)) = (jfloat(0.1f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK(sp[0].o))->F_lengthWidthPans = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (jint(5)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"eb7abe"_j))));
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (jfloat(0.55f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e189f5"_j))));
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (jfloat(0.7f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"907ef7"_j))));
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (jfloat(0.8f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"91a4ff"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[2].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(44);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_optimalLifeFract = (jfloat(0.5f));
	LINE_NUMBER(45);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(120.0f));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitFlameBeam;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(47);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(4.0f));
	LINE_NUMBER(48);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize = (jfloat(420.0f));
	LINE_NUMBER(49);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(16.0f));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))))->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))));
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(1)));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(52);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.7f));
	LINE_NUMBER(53);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserAbsorb = (jint(0));
	LINE_NUMBER(54);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_ammoMultiplier = (jfloat(1));
	LINE_NUMBER(55);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceArmor = (jint(1));
	LINE_NUMBER(37);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage = (frame[1].f);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_bullet_ContinuousFlameBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousFlameBulletType:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_ContinuousFlameBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_mindustry_entities_bullet_ContinuousBulletType(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_lightStroke = (jfloat(40.0f));
	LINE_NUMBER(16);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(3.7f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_oscScl = (jfloat(1.2f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_oscMag = (jfloat(0.02f));
	LINE_NUMBER(17);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_divisions = (25);
	LINE_NUMBER(19);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_drawFlare = (jint(1));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e189f5"_j))));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK(sp[0].o))->F_flareColor = (jref) sp[1].o;
	LINE_NUMBER(21);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareWidth = (jfloat(3.0f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareInnerScl = (jfloat(0.5f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareLength = (jfloat(40.0f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareInnerLenScl = (jfloat(0.5f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareLayer = (jfloat(99.9999f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareRotSpeed = (jfloat(1.2f));
	LINE_NUMBER(22);
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_rotateFlare = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_slope;
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK(sp[0].o))->F_lengthInterp = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (15));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (jfloat(1.12f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))) = (jfloat(1.3f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))) = (jfloat(0.32f));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))) = (jfloat(0.3f));
	ARRAY_ACCESS(jfloat, sp[1].o, (6)) = (jfloat(0.8f));
	ARRAY_ACCESS(jfloat, sp[1].o, (7)) = (jfloat(0.9f));
	ARRAY_ACCESS(jfloat, sp[1].o, (8)) = (jfloat(0.2f));
	ARRAY_ACCESS(jfloat, sp[1].o, (9)) = (jfloat(0.5f));
	ARRAY_ACCESS(jfloat, sp[1].o, (10)) = (jfloat(0.8f));
	ARRAY_ACCESS(jfloat, sp[1].o, (11)) = (jfloat(0.15f));
	ARRAY_ACCESS(jfloat, sp[1].o, (12)) = (jfloat(0.25f));
	ARRAY_ACCESS(jfloat, sp[1].o, (13)) = (jfloat(0.7f));
	ARRAY_ACCESS(jfloat, sp[1].o, (14)) = (jfloat(0.1f));
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK(sp[0].o))->F_lengthWidthPans = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (jint(5)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"eb7abe"_j))));
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (jfloat(0.55f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e189f5"_j))));
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (jfloat(0.7f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"907ef7"_j))));
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (jfloat(0.8f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"91a4ff"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[2].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(44);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_optimalLifeFract = (jfloat(0.5f));
	LINE_NUMBER(45);
	((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(120.0f));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitFlameBeam;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(47);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(4.0f));
	LINE_NUMBER(48);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize = (jfloat(420.0f));
	LINE_NUMBER(49);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(16.0f));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))))->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))));
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(1)));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(52);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.7f));
	LINE_NUMBER(53);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserAbsorb = (jint(0));
	LINE_NUMBER(54);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_ammoMultiplier = (jfloat(1));
	LINE_NUMBER(55);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceArmor = (jint(1));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ContinuousFlameBulletType_draw_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousFlameBulletType:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_lengthInterp;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = temp0;
	LINE_NUMBER(61);
	jfloat temp1 = (jfloat)SM_mindustry_entities_Damage_findLength_mindustry_gen_Bullet_float_boolean_int_R_float(ctx, (frame[1].o), (((jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length) * (frame[2].f)), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserAbsorb), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap));
	frame[3].f = temp1;
	LINE_NUMBER(63);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_oscScl), ((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_oscMag));
	frame[4].f = temp2;
	LINE_NUMBER(65);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.9f)));
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(1)), (jfloat(0.1f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (temp0 + temp1));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(67);
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp4 = (jint)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_divisions;
	jfloat temp5 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	jfloat temp6 = frame[3].f;
	sp[0].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_lengthWidthPans;
	jfloat temp7 = (temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[5].i) * (jint(3)))))) * ((jfloat(1)) - (frame[4].f));
	jfloat temp8 = (jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_width;
	sp[0].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_lengthWidthPans;
	jfloat temp9 = ((temp8 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((frame[5].i) * (jint(3))) + (jint(1)))))) * (frame[2].f)) * ((jfloat(1)) + (frame[4].f));
	sp[0].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_lengthWidthPans;
	SM_mindustry_graphics_Drawf_flame_float_float_int_float_float_float_float(ctx, temp2, temp3, temp4, temp5, temp7, temp9, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((frame[5].i) * (jint(3))) + (jint(2))))));
	LINE_NUMBER(65);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(74);
	if (((jint)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_drawFlare) == 0) goto label_9;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(76);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareLayer));
	LINE_NUMBER(78);
	jfloat temp0 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * ((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareRotSpeed);
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_rotateFlare) == 0) goto label_13;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_FCONST(0);
label_14:;
	{
	sp -= 2;
	frame[5].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(80);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	if ((frame[6].i) >= (jint(4))) goto label_17;
	}
	{
	LINE_NUMBER(81);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareWidth), (((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareLength) * ((frame[2].f) + (frame[4].f))), ((jfloat((((frame[6].i) * (90)) + (45)))) + (frame[5].f)));
	LINE_NUMBER(80);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(84);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(85);
	frame[6].i = (jint(0));
	}
label_21:;
	{
	if ((frame[6].i) >= (jint(4))) goto label_9;
	}
	{
	LINE_NUMBER(86);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y), (((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareWidth) * ((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareInnerScl)), ((((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareLength) * ((jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_flareInnerLenScl)) * ((frame[2].f) + (frame[4].f))), ((jfloat((((frame[6].i) * (90)) + (45)))) + (frame[5].f)));
	LINE_NUMBER(85);
	INST_IINC(6, 1);
	goto label_21;
	}
label_9:;
	{
	LINE_NUMBER(90);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((frame[3].f) * (jfloat(1.1f))));
	LINE_NUMBER(91);
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
	jfloat temp7 = (jfloat)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_lightStroke;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightColor;
	SM_mindustry_graphics_Drawf_light_float_float_float_float_float_arc_graphics_Color_float(ctx, temp1, temp2, temp4, temp6, temp7, sp[0].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity));
	LINE_NUMBER(92);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_ContinuousFlameBulletType_currentLength_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousFlameBulletType:currentLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_ContinuousBulletType *) NULL_CHECK((frame[0].o)))->F_length;
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_ContinuousFlameBulletType *) NULL_CHECK((frame[0].o)))->F_lengthInterp;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_ContinuousFlameBulletType_drawLight_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/ContinuousFlameBulletType:drawLight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_bullet_ContinuousFlameBulletType[] {
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
	(void *) M_mindustry_entities_bullet_ContinuousFlameBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_ContinuousFlameBulletType_drawLight_mindustry_gen_Bullet,
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
	(void *) M_mindustry_entities_bullet_ContinuousFlameBulletType_currentLength_mindustry_gen_Bullet_R_float,
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
	{ "lightStroke", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_lightStroke), "F", 1 },
	{ "width", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_width), "F", 1 },
	{ "oscScl", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_oscScl), "F", 1 },
	{ "oscMag", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_oscMag), "F", 1 },
	{ "divisions", &class_int, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_divisions), "I", 1 },
	{ "drawFlare", &class_boolean, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_drawFlare), "Z", 1 },
	{ "flareColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_flareColor), "Larc/graphics/Color;", 1 },
	{ "flareWidth", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_flareWidth), "F", 1 },
	{ "flareInnerScl", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_flareInnerScl), "F", 1 },
	{ "flareLength", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_flareLength), "F", 1 },
	{ "flareInnerLenScl", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_flareInnerLenScl), "F", 1 },
	{ "flareLayer", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_flareLayer), "F", 1 },
	{ "flareRotSpeed", &class_float, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_flareRotSpeed), "F", 1 },
	{ "rotateFlare", &class_boolean, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_rotateFlare), "Z", 1 },
	{ "lengthInterp", &class_arc_math_Interp, offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_lengthInterp), "Larc/math/Interp;", 1 },
	{ "lengthWidthPans", getArrayClass(&class_float, 1), offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_lengthWidthPans), "[F", 1 },
	{ "colors", getArrayClass(&class_arc_graphics_Color, 1), offsetof(mindustry_entities_bullet_ContinuousFlameBulletType, F_colors), "[Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_ContinuousFlameBulletType_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_ContinuousFlameBulletType, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_bullet_ContinuousFlameBulletType_draw_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_ContinuousFlameBulletType_draw_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "currentLength", (intptr_t) M_mindustry_entities_bullet_ContinuousFlameBulletType_currentLength_mindustry_gen_Bullet_R_float, VTABLE_mindustry_entities_bullet_ContinuousFlameBulletType_currentLength_mindustry_gen_Bullet_R_float, "(Lmindustry/gen/Bullet;)F", 1 },
	{ "drawLight", (intptr_t) M_mindustry_entities_bullet_ContinuousFlameBulletType_drawLight_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_ContinuousFlameBulletType_drawLight_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
};

Class class_mindustry_entities_bullet_ContinuousFlameBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/ContinuousFlameBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_ContinuousBulletType,
		.size = sizeof(mindustry_entities_bullet_ContinuousFlameBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_ContinuousFlameBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_ContinuousFlameBulletType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_ContinuousFlameBulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 79,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_ContinuousFlameBulletType = registerClass(&class_mindustry_entities_bullet_ContinuousFlameBulletType);

}
