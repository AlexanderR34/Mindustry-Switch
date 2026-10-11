#include "mindustry/entities/effect/WaveEffect.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/Angles.h"
#include "arc/math/Interp.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/effect/WaveEffect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Drawf.h"
#include "java/lang/reflect/Method.h"

extern "C" {


void mark_mindustry_entities_effect_WaveEffect(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_entities_effect_WaveEffect *) object;
	if (self->F_colorFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorFrom)->clazz)->markFunction)((jobject) self->F_colorFrom, mark, depth + 1);
	if (self->F_colorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorTo)->clazz)->markFunction)((jobject) self->F_colorTo, mark, depth + 1);
	if (self->F_lightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightColor)->clazz)->markFunction)((jobject) self->F_lightColor, mark, depth + 1);
	if (self->F_interp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interp)->clazz)->markFunction)((jobject) self->F_interp, mark, depth + 1);
	if (self->F_lightInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightInterp)->clazz)->markFunction)((jobject) self->F_lightInterp, mark, depth + 1);
}

void clinit_mindustry_entities_effect_WaveEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_Effect(ctx);
}

void init_mindustry_entities_effect_WaveEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/WaveEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_WaveEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK(sp[0].o))->F_colorFrom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK(sp[0].o))->F_colorTo = (jref) sp[1].o;
	LINE_NUMBER(14);
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_sizeFrom = (jfloat(0));
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_sizeTo = (jfloat(100.0f));
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_lightScl = (jfloat(3.0f));
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.8f));
	LINE_NUMBER(15);
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_sides = (jint(-1));
	LINE_NUMBER(16);
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(17);
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_strokeFrom = (jfloat(2));
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_strokeTo = (jfloat(0));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_linear;
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK(sp[0].o))->F_interp = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_reverse;
	((mindustry_entities_effect_WaveEffect *) NULL_CHECK(sp[0].o))->F_lightInterp = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_WaveEffect_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/WaveEffect:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_clip;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_sizeFrom), ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_sizeTo));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_strokeFrom), ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_strokeTo));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 + temp2));
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_clip = temp3;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_WaveEffect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/WaveEffect:render", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(30);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	jfloat temp1 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	frame[3].f = temp1;
	LINE_NUMBER(31);
	jfloat temp2 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_offsetY));
	frame[4].f = (temp2 + temp3);
	jfloat temp4 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_offsetY));
	frame[5].f = (temp4 + temp5);
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_colorFrom;
	sp[1].o = (jobject)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_colorTo;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[3].f));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	jfloat temp6 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_strokeFrom), ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_strokeTo), (frame[2].f));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp6);
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_interp;
	jfloat temp7 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_sizeFrom), ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_sizeTo), (frame[2].f));
	frame[6].f = temp7;
	LINE_NUMBER(37);
	jfloat temp8 = frame[4].f;
	jfloat temp9 = frame[5].f;
	sp[0].f = temp8;
	sp[1].f = temp9;
	sp += 2;
	if (((jint)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_sides) > 0) goto label_8;
	}
	{
	jint temp0 = (jint)SM_arc_graphics_g2d_Lines_circleVertices_float_R_int(ctx, (frame[6].f));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ALOAD(0);
	sp[-1].i = ((mindustry_entities_effect_WaveEffect *) NULL_CHECK(sp[-1].o))->F_sides;
label_9:;
	{
	sp -= 3;
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, sp[0].f, sp[1].f, sp[2].i, (frame[6].f), (((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_rotation) + ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation)));
	LINE_NUMBER(39);
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	jfloat temp2 = (frame[6].f) * ((jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_lightScl);
	sp[0].o = (jobject)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_lightColor;
	jobject temp3 = sp[0].o;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].f = temp2;
	sp += 3;
	if (temp3 != nullptr) goto label_11;
	}
	sp->o = (jobject)SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(ctx);
	sp++;
	goto label_12;
label_11:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_effect_WaveEffect *) NULL_CHECK(sp[-1].o))->F_lightColor;
label_12:;
	{
	sp -= 4;
	jfloat temp0 = (jfloat)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_lightOpacity;
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)((mindustry_entities_effect_WaveEffect *) NULL_CHECK((frame[0].o)))->F_lightInterp;
	jfloat temp1 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float])(ctx, sp[4].o, sp[5].o);
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, sp[0].f, sp[1].f, sp[2].f, sp[3].o, (temp0 * temp1));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_effect_WaveEffect;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lightColor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_effect_WaveEffect[] {
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
	(void *) M_mindustry_entities_effect_WaveEffect_init,
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
	(void *) M_mindustry_entities_effect_WaveEffect_render_mindustry_entities_Effect$EffectContainer,
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
	{ "colorFrom", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_WaveEffect, F_colorFrom), "Larc/graphics/Color;", 1 },
	{ "colorTo", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_WaveEffect, F_colorTo), "Larc/graphics/Color;", 1 },
	{ "lightColor", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_WaveEffect, F_lightColor), "Larc/graphics/Color;", 1 },
	{ "sizeFrom", &class_float, offsetof(mindustry_entities_effect_WaveEffect, F_sizeFrom), "F", 1 },
	{ "sizeTo", &class_float, offsetof(mindustry_entities_effect_WaveEffect, F_sizeTo), "F", 1 },
	{ "lightScl", &class_float, offsetof(mindustry_entities_effect_WaveEffect, F_lightScl), "F", 1 },
	{ "lightOpacity", &class_float, offsetof(mindustry_entities_effect_WaveEffect, F_lightOpacity), "F", 1 },
	{ "sides", &class_int, offsetof(mindustry_entities_effect_WaveEffect, F_sides), "I", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_effect_WaveEffect, F_rotation), "F", 1 },
	{ "strokeFrom", &class_float, offsetof(mindustry_entities_effect_WaveEffect, F_strokeFrom), "F", 1 },
	{ "strokeTo", &class_float, offsetof(mindustry_entities_effect_WaveEffect, F_strokeTo), "F", 1 },
	{ "interp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_WaveEffect, F_interp), "Larc/math/Interp;", 1 },
	{ "lightInterp", &class_arc_math_Interp, offsetof(mindustry_entities_effect_WaveEffect, F_lightInterp), "Larc/math/Interp;", 1 },
	{ "offsetX", &class_float, offsetof(mindustry_entities_effect_WaveEffect, F_offsetX), "F", 1 },
	{ "offsetY", &class_float, offsetof(mindustry_entities_effect_WaveEffect, F_offsetY), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_effect_WaveEffect, 0, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_effect_WaveEffect_init, VTABLE_mindustry_entities_effect_WaveEffect_init, "()V", 1 },
	{ "render", (intptr_t) M_mindustry_entities_effect_WaveEffect_render_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_effect_WaveEffect_render_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;)V", 1 },
};

Class class_mindustry_entities_effect_WaveEffect{
		.nativeName = (intptr_t) "mindustry/entities/effect/WaveEffect",
		.parentClass = (intptr_t) &class_mindustry_entities_Effect,
		.size = sizeof(mindustry_entities_effect_WaveEffect),
		.classVtable = (intptr_t) vtable_mindustry_entities_effect_WaveEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_effect_WaveEffect,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_effect_WaveEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_effect_WaveEffect = registerClass(&class_mindustry_entities_effect_WaveEffect);

}
