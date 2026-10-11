#include "mindustry/entities/effect/TriangleEffect.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/Rand.h"
#include "arc/math/Interp.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Drawf.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/effect/TriangleEffect.h"

extern "C" {

jobject SF_mindustry_entities_effect_TriangleEffect_rand;

void mark_mindustry_entities_effect_TriangleEffect(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_effect_TriangleEffect_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_effect_TriangleEffect_rand)->clazz)->markFunction)((jobject) SF_mindustry_entities_effect_TriangleEffect_rand, mark, depth + 1);
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
	auto self = (mindustry_entities_effect_TriangleEffect *) object;
	if (self->F_colorFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorFrom)->clazz)->markFunction)((jobject) self->F_colorFrom, mark, depth + 1);
	if (self->F_colorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorTo)->clazz)->markFunction)((jobject) self->F_colorTo, mark, depth + 1);
	if (self->F_interp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interp)->clazz)->markFunction)((jobject) self->F_interp, mark, depth + 1);
	if (self->F_widthInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_widthInterp)->clazz)->markFunction)((jobject) self->F_widthInterp, mark, depth + 1);
	if (self->F_heightInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heightInterp)->clazz)->markFunction)((jobject) self->F_heightInterp, mark, depth + 1);
	if (self->F_colorInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorInterp)->clazz)->markFunction)((jobject) self->F_colorInterp, mark, depth + 1);
	if (self->F_lightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightColor)->clazz)->markFunction)((jobject) self->F_lightColor, mark, depth + 1);
}

void init_mindustry_entities_effect_TriangleEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/TriangleEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_TriangleEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK(sp[0].o))->F_colorFrom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK(sp[0].o))->F_colorTo = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_linear;
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK(sp[0].o))->F_interp = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_widthInterp = (jref) (jobject(nullptr));
	LINE_NUMBER(25);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_heightInterp = (jref) (jobject(nullptr));
	LINE_NUMBER(27);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_colorInterp = (jref) (jobject(nullptr));
	LINE_NUMBER(29);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_startX = (jfloat(0));
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_startY = (jfloat(0));
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_endX = (jfloat(0));
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_endY = (jfloat(0));
	LINE_NUMBER(31);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_lightScl = (jfloat(8.0f));
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_lightOpacityFrom = (jfloat(0.6f));
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_lightOpacityTo = (jfloat(0));
	LINE_NUMBER(36);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_widthFrom = (jfloat(4.0f));
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_widthTo = (jfloat(0));
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_heightFrom = (jfloat(4.0f));
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_heightTo = (jfloat(4.0f));
	LINE_NUMBER(38);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_useRotation = (jint(1));
	LINE_NUMBER(40);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_spin = (jint(0));
	LINE_NUMBER(42);
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_offset = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_TriangleEffect_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/TriangleEffect:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_widthInterp;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK(sp[0].o))->F_widthInterp = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_heightInterp;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK(sp[0].o))->F_heightInterp = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_colorInterp;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	((mindustry_entities_effect_TriangleEffect *) NULL_CHECK(sp[0].o))->F_colorInterp = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_TriangleEffect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/TriangleEffect:render", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	if (((jint)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_useRotation) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_flippable) == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_Effect *) NULL_CHECK(sp[-1].o))->F_baseRotation;
label_3:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(54);
	if (((jint)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_flippable) == 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation));
	jint temp1 = -temp0;
	sp[0].i = temp1;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ICONST(1);
label_6:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(55);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(56);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	jfloat temp1 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp1;
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_widthInterp;
	jfloat temp2 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_widthFrom;
	jfloat temp3 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_widthTo;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, (frame[4].f), (jfloat(0)), (jfloat(1)));
	jfloat temp5 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp2, temp3, temp4);
	frame[6].f = temp5;
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_heightInterp;
	jfloat temp6 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_heightFrom;
	jfloat temp7 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_heightTo;
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, (frame[4].f), (jfloat(0)), (jfloat(1)));
	jfloat temp9 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp6, temp7, temp8);
	frame[7].f = temp9;
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_colorInterp;
	jfloat temp10 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_lightOpacityFrom;
	jfloat temp11 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_lightOpacityTo;
	jfloat temp12 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, (frame[4].f), (jfloat(0)), (jfloat(1)));
	jfloat temp13 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp10, temp11, temp12);
	frame[8].f = temp13;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	jfloat temp14 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_startX;
	jfloat temp15 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_endX;
	jfloat temp16 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, (frame[4].f), (jfloat(0)), (jfloat(1)));
	jfloat temp17 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp14, temp15, temp16);
	frame[9].f = temp17;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	jfloat temp18 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_startY;
	jfloat temp19 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_endY;
	jfloat temp20 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, (frame[4].f), (jfloat(0)), (jfloat(1)));
	jfloat temp21 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp18, temp19, temp20);
	frame[10].f = temp21;
	LINE_NUMBER(63);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, (frame[9].f), (frame[10].f));
	frame[11].o = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, (frame[11].o), (frame[2].f));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_colorFrom;
	sp[1].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_colorTo;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[5].f));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_lightColor;
	if (sp[0].o != nullptr) goto label_18;
	}
	sp->o = (jobject)SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(ctx);
	sp++;
	goto label_19;
label_18:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_effect_TriangleEffect *) NULL_CHECK(sp[-1].o))->F_lightColor;
label_19:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(69);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_x) + ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_y) + ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y)), (frame[6].f), (frame[7].f), (((frame[2].f) + ((jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_offset)) + (((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_time) * (jfloat(((jint)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_spin))))));
	LINE_NUMBER(70);
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_x) + ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x);
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_y) + ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y);
	jfloat temp2 = (jfloat)((mindustry_entities_effect_TriangleEffect *) NULL_CHECK((frame[0].o)))->F_lightScl;
	sp[0].o = frame[12].o;
	jfloat temp3 = frame[8].f;
	jfloat temp4 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp2, sp[0].o, (temp3 * temp4));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_effect_TriangleEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_Effect(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/TriangleEffect:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_TriangleEffect(ctx);
	{
	LINE_NUMBER(14);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_entities_effect_TriangleEffect(ctx);
	SF_mindustry_entities_effect_TriangleEffect_rand = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_effect_TriangleEffect;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field widthInterp
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field heightInterp
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field colorInterp
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lightColor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_effect_TriangleEffect[] {
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
	(void *) M_mindustry_entities_effect_TriangleEffect_init,
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
	(void *) M_mindustry_entities_effect_TriangleEffect_render_mindustry_entities_Effect$EffectContainer,
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
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_entities_effect_TriangleEffect_rand, "Larc/math/Rand;", 26 },
	{ "colorFrom", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_TriangleEffect, F_colorFrom), "Larc/graphics/Color;", 1 },
	{ "colorTo", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_TriangleEffect, F_colorTo), "Larc/graphics/Color;", 1 },
	{ "flippable", &class_boolean, offsetof(mindustry_entities_effect_TriangleEffect, F_flippable), "Z", 1 },
	{ "interp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_TriangleEffect, F_interp), "Larc/math/Interp;", 1 },
	{ "widthInterp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_TriangleEffect, F_widthInterp), "Larc/math/Interp;", 1 },
	{ "heightInterp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_TriangleEffect, F_heightInterp), "Larc/math/Interp;", 1 },
	{ "colorInterp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_TriangleEffect, F_colorInterp), "Larc/math/Interp;", 1 },
	{ "startX", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_startX), "F", 1 },
	{ "startY", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_startY), "F", 1 },
	{ "endX", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_endX), "F", 1 },
	{ "endY", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_endY), "F", 1 },
	{ "lightScl", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_lightScl), "F", 1 },
	{ "lightOpacityFrom", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_lightOpacityFrom), "F", 1 },
	{ "lightOpacityTo", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_lightOpacityTo), "F", 1 },
	{ "lightColor", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_TriangleEffect, F_lightColor), "Larc/graphics/Color;", 1 },
	{ "widthFrom", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_widthFrom), "F", 1 },
	{ "widthTo", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_widthTo), "F", 1 },
	{ "heightFrom", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_heightFrom), "F", 1 },
	{ "heightTo", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_heightTo), "F", 1 },
	{ "useRotation", &class_boolean, offsetof(mindustry_entities_effect_TriangleEffect, F_useRotation), "Z", 1 },
	{ "spin", &class_int, offsetof(mindustry_entities_effect_TriangleEffect, F_spin), "I", 1 },
	{ "offset", &class_float, offsetof(mindustry_entities_effect_TriangleEffect, F_offset), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_effect_TriangleEffect, 0, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_effect_TriangleEffect_init, VTABLE_mindustry_entities_effect_TriangleEffect_init, "()V", 1 },
	{ "render", (intptr_t) M_mindustry_entities_effect_TriangleEffect_render_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_effect_TriangleEffect_render_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_effect_TriangleEffect, 0, "()V", 8 },
};

Class class_mindustry_entities_effect_TriangleEffect{
		.nativeName = (intptr_t) "mindustry/entities/effect/TriangleEffect",
		.parentClass = (intptr_t) &class_mindustry_entities_Effect,
		.size = sizeof(mindustry_entities_effect_TriangleEffect),
		.classVtable = (intptr_t) vtable_mindustry_entities_effect_TriangleEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_effect_TriangleEffect,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_effect_TriangleEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 23,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_effect_TriangleEffect = registerClass(&class_mindustry_entities_effect_TriangleEffect);

}
