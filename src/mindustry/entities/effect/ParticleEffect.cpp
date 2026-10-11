#include "mindustry/entities/effect/ParticleEffect.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Angles.h"
#include "arc/math/Rand.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "java/lang/String.h"
#include "mindustry/entities/effect/ParticleEffect.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/Interp.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Drawf.h"

extern "C" {

jobject SF_mindustry_entities_effect_ParticleEffect_rand;
jobject SF_mindustry_entities_effect_ParticleEffect_rv;

void mark_mindustry_entities_effect_ParticleEffect(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_effect_ParticleEffect_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_effect_ParticleEffect_rand)->clazz)->markFunction)((jobject) SF_mindustry_entities_effect_ParticleEffect_rand, mark, depth + 1);
		if (SF_mindustry_entities_effect_ParticleEffect_rv)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_effect_ParticleEffect_rv)->clazz)->markFunction)((jobject) SF_mindustry_entities_effect_ParticleEffect_rv, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_Effect(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_effect_ParticleEffect *) object;
	if (self->F_colorFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorFrom)->clazz)->markFunction)((jobject) self->F_colorFrom, mark, depth + 1);
	if (self->F_colorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorTo)->clazz)->markFunction)((jobject) self->F_colorTo, mark, depth + 1);
	if (self->F_interp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interp)->clazz)->markFunction)((jobject) self->F_interp, mark, depth + 1);
	if (self->F_sizeInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sizeInterp)->clazz)->markFunction)((jobject) self->F_sizeInterp, mark, depth + 1);
	if (self->F_colorInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorInterp)->clazz)->markFunction)((jobject) self->F_colorInterp, mark, depth + 1);
	if (self->F_lightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightColor)->clazz)->markFunction)((jobject) self->F_lightColor, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_widthInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_widthInterp)->clazz)->markFunction)((jobject) self->F_widthInterp, mark, depth + 1);
	if (self->F_heightInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heightInterp)->clazz)->markFunction)((jobject) self->F_heightInterp, mark, depth + 1);
	if (self->F_tex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tex)->clazz)->markFunction)((jobject) self->F_tex, mark, depth + 1);
}

void init_mindustry_entities_effect_ParticleEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/ParticleEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[0].o))->F_colorFrom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[0].o))->F_colorTo = (jref) sp[1].o;
	LINE_NUMBER(20);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_particles = (6);
	LINE_NUMBER(22);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_randLength = (jint(1));
	LINE_NUMBER(25);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_cone = (jfloat(180.0f));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(20.0f));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_baseLength = (jfloat(0));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_linear;
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[0].o))->F_interp = (jref) sp[1].o;
	LINE_NUMBER(29);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeInterp = (jref) (jobject(nullptr));
	LINE_NUMBER(31);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_colorInterp = (jref) (jobject(nullptr));
	LINE_NUMBER(35);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lightScl = (jfloat(2));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.6f));
	LINE_NUMBER(42);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_spin = (jfloat(0));
	LINE_NUMBER(44);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeFrom = (jfloat(2));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeTo = (jfloat(0));
	LINE_NUMBER(46);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeChangeStart = (jfloat(0));
	LINE_NUMBER(48);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_widthChangeStart = (jfloat(0));
	LINE_NUMBER(50);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_heightChangeStart = (jfloat(0));
	LINE_NUMBER(52);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_useRotation = (jint(1));
	LINE_NUMBER(54);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_offset = (jfloat(0));
	LINE_NUMBER(56);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_region = (jref) (((jobject) createStringLiteral(ctx, u8"circle"_j)));
	LINE_NUMBER(58);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_widthFrom = (jfloat(1));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_widthTo = (jfloat(1));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_heightFrom = (jfloat(1));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_heightTo = (jfloat(1));
	LINE_NUMBER(60);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_widthInterp = (jref) (jobject(nullptr));
	LINE_NUMBER(62);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_heightInterp = (jref) (jobject(nullptr));
	LINE_NUMBER(66);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_strokeFrom = (jfloat(2));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_strokeTo = (jfloat(0));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lenFrom = (jfloat(4.0f));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lenTo = (jfloat(2));
	LINE_NUMBER(67);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_cap = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_ParticleEffect_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/ParticleEffect:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_clip;
	jfloat temp1 = (jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_length;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeFrom), ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeTo));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 + temp2));
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_clip = temp3;
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeChangeStart), (jfloat(0)), ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[0].o))->F_sizeChangeStart = temp4;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeInterp;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[0].o))->F_sizeInterp = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_widthInterp;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeInterp;
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[0].o))->F_widthInterp = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_heightInterp;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeInterp;
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[0].o))->F_heightInterp = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_colorInterp;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[0].o))->F_colorInterp = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_ParticleEffect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/ParticleEffect:render", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_tex;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_region;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[0].o))->F_tex = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(85);
	if (((jint)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_useRotation) == 0) goto label_2;
	}
	{
	if (((jint)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_casingFlip) == 0) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation));
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_Effect *) NULL_CHECK(sp[-1].o))->F_baseRotation;
label_4:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(86);
	if (((jint)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_casingFlip) == 0) goto label_6;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation));
	jint temp1 = -temp0;
	sp[0].i = temp1;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ICONST(1);
label_7:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(87);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(88);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	jfloat temp1 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp1;
	LINE_NUMBER(89);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_colorInterp;
	jfloat temp2 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	frame[6].f = temp2;
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeInterp;
	jfloat temp3 = (jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeFrom;
	jfloat temp4 = (jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeTo;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, (frame[4].f), (((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeChangeStart) / ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime)), (jfloat(1)));
	jfloat temp6 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp3, temp4, temp5);
	frame[7].f = (temp6 * (jfloat(2)));
	LINE_NUMBER(91);
	jfloat temp7 = frame[7].f;
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_widthInterp;
	jfloat temp8 = (jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_widthFrom;
	jfloat temp9 = (jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_widthTo;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, (frame[4].f), (((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_widthChangeStart) / ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime)), (jfloat(1)));
	jfloat temp11 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp8, temp9, temp10);
	frame[8].f = (temp7 * temp11);
	LINE_NUMBER(92);
	jfloat temp12 = frame[7].f;
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_heightInterp;
	jfloat temp13 = (jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_heightFrom;
	jfloat temp14 = (jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_heightTo;
	jfloat temp15 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, (frame[4].f), (((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_heightChangeStart) / ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime)), (jfloat(1)));
	jfloat temp16 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp13, temp14, temp15);
	frame[9].f = (temp12 * temp16);
	LINE_NUMBER(93);
	jfloat temp17 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp18 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[2].f), (((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_offsetX) * (jfloat((frame[3].i)))), ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_offsetY));
	frame[10].f = (temp17 + temp18);
	jfloat temp19 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp20 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[2].f), (((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_offsetX) * (jfloat((frame[3].i)))), ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_offsetY));
	frame[11].f = (temp19 + temp20);
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_colorFrom;
	sp[1].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_colorTo;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[6].f));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lightColor;
	if (sp[0].o != nullptr) goto label_18;
	}
	sp->o = (jobject)SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(ctx);
	sp++;
	goto label_19;
label_18:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_effect_ParticleEffect *) NULL_CHECK(sp[-1].o))->F_lightColor;
label_19:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(98);
	if (((jint)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_line) == 0) goto label_21;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeInterp;
	jfloat temp0 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_strokeFrom), ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_strokeTo), (frame[4].f));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp0);
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_sizeInterp;
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lenFrom), ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lenTo), (frame[4].f));
	frame[13].f = temp1;
	LINE_NUMBER(102);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_id))));
	LINE_NUMBER(103);
	frame[14].i = (jint(0));
	}
label_26:;
	{
	if ((frame[14].i) >= ((jint)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_particles)) goto label_27;
	}
	{
	LINE_NUMBER(104);
	frame[15].f = ((((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_length) * (frame[5].f)) + ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_baseLength));
	LINE_NUMBER(105);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rv;
	jfloat temp0 = frame[2].f;
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_cone));
	jfloat temp2 = temp0 + temp1;
	sp[1].f = temp2;
	sp += 2;
	if (((jint)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_randLength) != 0) goto label_30;
	}
	INST_FLOAD(15);
	goto label_31;
label_30:;
	{
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (frame[15].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_31:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].f, sp[2].f);
	LINE_NUMBER(106);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rv;
	frame[16].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rv;
	frame[17].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(108);
	jfloat temp0 = (frame[10].f) + (frame[16].f);
	jfloat temp1 = (frame[11].f) + (frame[17].f);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, (frame[16].f), (frame[17].f));
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float_boolean(ctx, temp0, temp1, temp2, (frame[13].f), ((jint)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_cap));
	LINE_NUMBER(109);
	jfloat temp3 = (frame[10].f) + (frame[16].f);
	jfloat temp4 = (frame[11].f) + (frame[17].f);
	jfloat temp5 = (frame[13].f) * ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lightScl);
	sp[0].o = frame[12].o;
	jfloat temp6 = (jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lightOpacity;
	jfloat temp7 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp3, temp4, temp5, sp[0].o, (temp6 * temp7));
	LINE_NUMBER(103);
	INST_IINC(14, 1);
	goto label_26;
	}
label_27:;
	LINE_NUMBER(111);
	goto label_37;
label_21:;
	{
	LINE_NUMBER(112);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_id))));
	LINE_NUMBER(113);
	frame[13].i = (jint(0));
	}
label_39:;
	{
	if ((frame[13].i) >= ((jint)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_particles)) goto label_37;
	}
	{
	LINE_NUMBER(114);
	frame[14].f = ((((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_length) * (frame[5].f)) + ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_baseLength));
	LINE_NUMBER(115);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rv;
	jfloat temp0 = frame[2].f;
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_cone));
	jfloat temp2 = temp0 + temp1;
	sp[1].f = temp2;
	sp += 2;
	if (((jint)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_randLength) != 0) goto label_42;
	}
	INST_FLOAD(14);
	goto label_43;
label_42:;
	{
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (frame[14].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_43:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].f, sp[2].f);
	LINE_NUMBER(116);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rv;
	frame[15].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_effect_ParticleEffect_rv;
	frame[16].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_tex;
	jfloat temp0 = (frame[10].f) + (frame[15].f);
	jfloat temp1 = (frame[11].f) + (frame[16].f);
	jfloat temp2 = frame[8].f;
	jfloat temp3 = frame[9].f;
	sp[1].o = (jobject)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_tex;
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_TextureRegion_ratio_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_ratio_R_float])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, (temp3 / temp4), (((frame[2].f) + ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_offset)) + (((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_time) * ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_spin))));
	LINE_NUMBER(119);
	jfloat temp5 = (frame[10].f) + (frame[15].f);
	jfloat temp6 = (frame[11].f) + (frame[16].f);
	jfloat temp7 = (frame[7].f) * ((jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lightScl);
	sp[0].o = frame[12].o;
	jfloat temp8 = (jfloat)((mindustry_entities_effect_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_lightOpacity;
	jfloat temp9 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp5, temp6, temp7, sp[0].o, (temp8 * temp9));
	LINE_NUMBER(113);
	INST_IINC(13, 1);
	goto label_39;
	}
label_37:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_entities_effect_ParticleEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_Effect(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/ParticleEffect:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	{
	LINE_NUMBER(14);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	SF_mindustry_entities_effect_ParticleEffect_rand = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_effect_ParticleEffect(ctx);
	SF_mindustry_entities_effect_ParticleEffect_rv = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_effect_ParticleEffect;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field sizeInterp
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field colorInterp
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lightColor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field widthInterp
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[31]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field heightInterp
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[32]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field tex
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[39]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_effect_ParticleEffect[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_entities_Effect_startDelay_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_effect_ParticleEffect_init,
	(void *) M_mindustry_entities_Effect_followParent_boolean_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_rotWithParent_boolean_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_baseRotation_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_layer_float_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect,
	(void *) M_mindustry_entities_Effect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect,
	(void *) M_mindustry_entities_Effect_at_arc_math_geom_Position,
	(void *) M_mindustry_entities_Effect_at_arc_math_geom_Position_boolean,
	(void *) M_mindustry_entities_Effect_at_arc_math_geom_Position_float,
	(void *) M_mindustry_entities_Effect_at_float_float,
	(void *) M_mindustry_entities_Effect_at_float_float_float,
	(void *) M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color,
	(void *) M_mindustry_entities_Effect_at_float_float_arc_graphics_Color,
	(void *) M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_at_float_float_float_java_lang_Object,
	(void *) M_mindustry_entities_Effect_shouldCreate_R_boolean,
	(void *) M_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float,
	(void *) M_mindustry_entities_effect_ParticleEffect_render_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object,
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
	{ "startDelay", "(F)Lmindustry/entities/Effect;" },
	{ "init", "()V" },
	{ "followParent", "(Z)Lmindustry/entities/Effect;" },
	{ "rotWithParent", "(Z)Lmindustry/entities/Effect;" },
	{ "layer", "(F)Lmindustry/entities/Effect;" },
	{ "baseRotation", "(F)Lmindustry/entities/Effect;" },
	{ "layer", "(FF)Lmindustry/entities/Effect;" },
	{ "wrap", "(Larc/graphics/Color;)Lmindustry/entities/effect/WrapEffect;" },
	{ "wrap", "(Larc/graphics/Color;F)Lmindustry/entities/effect/WrapEffect;" },
	{ "at", "(Larc/math/geom/Position;)V" },
	{ "at", "(Larc/math/geom/Position;Z)V" },
	{ "at", "(Larc/math/geom/Position;F)V" },
	{ "at", "(FF)V" },
	{ "at", "(FFF)V" },
	{ "at", "(FFFLarc/graphics/Color;)V" },
	{ "at", "(FFLarc/graphics/Color;)V" },
	{ "at", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "at", "(FFFLjava/lang/Object;)V" },
	{ "shouldCreate", "()Z" },
	{ "create", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "add", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "render", "(ILarc/graphics/Color;FFFFFLjava/lang/Object;)F" },
	{ "render", "(Lmindustry/entities/Effect$EffectContainer;)V" },
	{ "lambda$create$0", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
};

static FieldMetadata fields[] {
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_entities_effect_ParticleEffect_rand, "Larc/math/Rand;", 26 },
	{ "rv", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_effect_ParticleEffect_rv, "Larc/math/geom/Vec2;", 26 },
	{ "colorFrom", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_ParticleEffect, F_colorFrom), "Larc/graphics/Color;", 1 },
	{ "colorTo", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_ParticleEffect, F_colorTo), "Larc/graphics/Color;", 1 },
	{ "particles", &class_int, offsetof(mindustry_entities_effect_ParticleEffect, F_particles), "I", 1 },
	{ "randLength", &class_boolean, offsetof(mindustry_entities_effect_ParticleEffect, F_randLength), "Z", 1 },
	{ "casingFlip", &class_boolean, offsetof(mindustry_entities_effect_ParticleEffect, F_casingFlip), "Z", 1 },
	{ "cone", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_cone), "F", 1 },
	{ "length", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_length), "F", 1 },
	{ "baseLength", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_baseLength), "F", 1 },
	{ "interp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_ParticleEffect, F_interp), "Larc/math/Interp;", 1 },
	{ "sizeInterp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_ParticleEffect, F_sizeInterp), "Larc/math/Interp;", 1 },
	{ "colorInterp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_ParticleEffect, F_colorInterp), "Larc/math/Interp;", 1 },
	{ "offsetX", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_offsetX), "F", 1 },
	{ "offsetY", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_offsetY), "F", 1 },
	{ "lightScl", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_lightScl), "F", 1 },
	{ "lightOpacity", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_lightOpacity), "F", 1 },
	{ "lightColor", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_ParticleEffect, F_lightColor), "Larc/graphics/Color;", 1 },
	{ "spin", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_spin), "F", 1 },
	{ "sizeFrom", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_sizeFrom), "F", 1 },
	{ "sizeTo", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_sizeTo), "F", 1 },
	{ "sizeChangeStart", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_sizeChangeStart), "F", 1 },
	{ "widthChangeStart", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_widthChangeStart), "F", 1 },
	{ "heightChangeStart", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_heightChangeStart), "F", 1 },
	{ "useRotation", &class_boolean, offsetof(mindustry_entities_effect_ParticleEffect, F_useRotation), "Z", 1 },
	{ "offset", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_offset), "F", 1 },
	{ "region", &class_java_lang_String, offsetof(mindustry_entities_effect_ParticleEffect, F_region), "Ljava/lang/String;", 1 },
	{ "widthFrom", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_widthFrom), "F", 1 },
	{ "widthTo", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_widthTo), "F", 1 },
	{ "heightFrom", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_heightFrom), "F", 1 },
	{ "heightTo", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_heightTo), "F", 1 },
	{ "widthInterp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_ParticleEffect, F_widthInterp), "Larc/math/Interp;", 1 },
	{ "heightInterp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_ParticleEffect, F_heightInterp), "Larc/math/Interp;", 1 },
	{ "line", &class_boolean, offsetof(mindustry_entities_effect_ParticleEffect, F_line), "Z", 1 },
	{ "strokeFrom", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_strokeFrom), "F", 1 },
	{ "strokeTo", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_strokeTo), "F", 1 },
	{ "lenFrom", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_lenFrom), "F", 1 },
	{ "lenTo", &class_float, offsetof(mindustry_entities_effect_ParticleEffect, F_lenTo), "F", 1 },
	{ "cap", &class_boolean, offsetof(mindustry_entities_effect_ParticleEffect, F_cap), "Z", 1 },
	{ "tex", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_effect_ParticleEffect, F_tex), "Larc/graphics/g2d/TextureRegion;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_effect_ParticleEffect, 0, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_effect_ParticleEffect_init, VTABLE_mindustry_entities_effect_ParticleEffect_init, "()V", 1 },
	{ "render", (intptr_t) M_mindustry_entities_effect_ParticleEffect_render_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_effect_ParticleEffect_render_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_effect_ParticleEffect, 0, "()V", 8 },
};

Class class_mindustry_entities_effect_ParticleEffect{
		.nativeName = (intptr_t) "mindustry/entities/effect/ParticleEffect",
		.parentClass = (intptr_t) &class_mindustry_entities_Effect,
		.size = sizeof(mindustry_entities_effect_ParticleEffect),
		.classVtable = (intptr_t) vtable_mindustry_entities_effect_ParticleEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_effect_ParticleEffect,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_effect_ParticleEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 40,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_effect_ParticleEffect = registerClass(&class_mindustry_entities_effect_ParticleEffect);

}
