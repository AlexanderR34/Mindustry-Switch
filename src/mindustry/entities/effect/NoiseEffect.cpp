#include "mindustry/entities/effect/NoiseEffect.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/util/Nullable.h"
#include "arc/assets/AssetManager.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "mindustry/entities/effect/NoiseEffect.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "arc/graphics/Camera.h"

extern "C" {


void mark_mindustry_entities_effect_NoiseEffect(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_effect_NoiseEffect *) object;
	if (self->F_noisePath)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_noisePath)->clazz)->markFunction)((jobject) self->F_noisePath, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_tex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tex)->clazz)->markFunction)((jobject) self->F_tex, mark, depth + 1);
}

void clinit_mindustry_entities_effect_NoiseEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_Effect(ctx);
}

void init_mindustry_entities_effect_NoiseEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/NoiseEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_NoiseEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_noisePath = (jref) (((jobject) createStringLiteral(ctx, u8"sprites/distortAlpha.png"_j)));
	LINE_NUMBER(13);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_noiseScl = (jfloat(1000.0f));
	LINE_NUMBER(14);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_opacity = (jfloat(0.3f));
	LINE_NUMBER(15);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_baseSpeed = (jfloat(0.4f));
	LINE_NUMBER(16);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	LINE_NUMBER(17);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_windX = (jfloat(1));
	LINE_NUMBER(18);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_windY = (jfloat(0));
	LINE_NUMBER(19);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layers = (jint(4));
	LINE_NUMBER(20);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layerSpeedMul = (jfloat(-1.3f));
	LINE_NUMBER(21);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layerAlphaMul = (jfloat(0.7f));
	LINE_NUMBER(22);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layerSclMul = (jfloat(0.8f));
	LINE_NUMBER(23);
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layerColorMul = (jfloat(0.9f));
	LINE_NUMBER(28);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_clip = (jfloat(3,402823e+38f));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_NoiseEffect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/NoiseEffect:render", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_tex;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_assets;
	sp[2].o = (jobject)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_noisePath;
	sp[1].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, (((jobject) &class_arc_graphics_Texture)));
	((mindustry_entities_effect_NoiseEffect *) NULL_CHECK(sp[0].o))->F_tex = (jref) (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o));
	}
label_1:;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_tex;
	if (sp[0].o != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(38);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	sp[1].o = (jobject)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_color;
	sp += 1;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_color;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_entities_Effect$EffectContainer *) NULL_CHECK(sp[-1].o))->F_color;
label_5:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	frame[2].o = sp[0].o;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_tex;
	SM_mindustry_entities_effect_NoiseEffect_drawNoiseLayers_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_int_float_float_float_float(ctx, sp[0].o, (frame[2].o), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_noiseScl), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_opacity), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_baseSpeed), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_intensity), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_windX), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_windY), ((jint)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layers), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layerSpeedMul), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layerAlphaMul), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layerSclMul), ((jfloat)((mindustry_entities_effect_NoiseEffect *) NULL_CHECK((frame[0].o)))->F_layerColorMul));
	LINE_NUMBER(40);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_effect_NoiseEffect_drawNoiseLayers_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_int_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jint param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12) {
	jtype frame[28];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/NoiseEffect:drawNoiseLayers", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_NoiseEffect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].i = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].f = param11;
	frame[12].f = param12;
	{
	LINE_NUMBER(45);
	frame[13].f = (jfloat(1));
	frame[14].f = (jfloat(1));
	frame[15].f = (jfloat(1));
	frame[16].f = (jfloat(0));
	LINE_NUMBER(46);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(47);
	frame[18].i = (jint(0));
	}
label_6:;
	{
	if ((frame[18].i) >= (frame[8].i)) goto label_7;
	}
	{
	LINE_NUMBER(48);
	SM_mindustry_entities_effect_NoiseEffect_drawNoise_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_float(ctx, (frame[0].o), (frame[17].o), ((frame[2].f) * (frame[14].f)), ((frame[15].f) * (frame[3].f)), ((frame[13].f) * (frame[4].f)), (frame[5].f), (frame[6].f), (frame[7].f), (frame[16].f));
	LINE_NUMBER(49);
	frame[13].f = ((frame[13].f) * (frame[9].f));
	LINE_NUMBER(50);
	frame[15].f = ((frame[15].f) * (frame[10].f));
	LINE_NUMBER(51);
	frame[14].f = ((frame[14].f) * (frame[11].f));
	LINE_NUMBER(52);
	frame[16].f = ((frame[16].f) + (jfloat(0.29f)));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, (frame[17].o), (frame[12].f));
	LINE_NUMBER(47);
	INST_IINC(18, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_effect_NoiseEffect_drawNoise_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/NoiseEffect:drawNoise", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_NoiseEffect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	{
	LINE_NUMBER(58);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[3].f));
	LINE_NUMBER(59);
	SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color(ctx, (frame[1].o));
	LINE_NUMBER(61);
	frame[9].f = ((frame[4].f) * (frame[5].f));
	LINE_NUMBER(62);
	frame[10].f = ((frame[6].f) * (frame[9].f));
	frame[11].f = ((frame[7].f) * (frame[9].f));
	LINE_NUMBER(64);
	frame[12].f = ((jfloat(1)) / (frame[2].f));
	LINE_NUMBER(65);
	frame[13].f = (((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (frame[12].f)) + (frame[8].f));
	LINE_NUMBER(66);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture = (jref) (frame[0].o);
	LINE_NUMBER(67);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x) * (frame[12].f);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp1 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y) * (frame[12].f);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp3 = (temp2 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width)) * (frame[12].f);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp4 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp3, ((temp4 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height)) * (frame[12].f)));
	LINE_NUMBER(69);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_scroll_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scroll_float_float])(ctx, sp[0].o, ((-(frame[10].f)) * (frame[13].f)), ((-(frame[11].f)) * (frame[13].f)));
	LINE_NUMBER(70);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp6 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp7 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp5, temp6, temp7, (-((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height)));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_effect_NoiseEffect;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field color
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_effect_NoiseEffect[] {
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
	(void *) M_mindustry_entities_Effect_init,
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
	(void *) M_mindustry_entities_effect_NoiseEffect_render_mindustry_entities_Effect$EffectContainer,
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
	{ "noisePath", &class_java_lang_String, offsetof(mindustry_entities_effect_NoiseEffect, F_noisePath), "Ljava/lang/String;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_NoiseEffect, F_color), "Larc/graphics/Color;", 1 },
	{ "noiseScl", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_noiseScl), "F", 1 },
	{ "opacity", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_opacity), "F", 1 },
	{ "baseSpeed", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_baseSpeed), "F", 1 },
	{ "intensity", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_intensity), "F", 1 },
	{ "windX", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_windX), "F", 1 },
	{ "windY", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_windY), "F", 1 },
	{ "layers", &class_int, offsetof(mindustry_entities_effect_NoiseEffect, F_layers), "I", 1 },
	{ "layerSpeedMul", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_layerSpeedMul), "F", 1 },
	{ "layerAlphaMul", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_layerAlphaMul), "F", 1 },
	{ "layerSclMul", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_layerSclMul), "F", 1 },
	{ "layerColorMul", &class_float, offsetof(mindustry_entities_effect_NoiseEffect, F_layerColorMul), "F", 1 },
	{ "tex", &class_arc_graphics_Texture, offsetof(mindustry_entities_effect_NoiseEffect, F_tex), "Larc/graphics/Texture;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_effect_NoiseEffect, 0, "()V", 1 },
	{ "render", (intptr_t) M_mindustry_entities_effect_NoiseEffect_render_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_effect_NoiseEffect_render_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;)V", 1 },
	{ "drawNoiseLayers", (intptr_t) SM_mindustry_entities_effect_NoiseEffect_drawNoiseLayers_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_int_float_float_float_float, 0, "(Larc/graphics/Texture;Larc/graphics/Color;FFFFFFIFFFF)V", 9 },
	{ "drawNoise", (intptr_t) SM_mindustry_entities_effect_NoiseEffect_drawNoise_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_float, 0, "(Larc/graphics/Texture;Larc/graphics/Color;FFFFFFF)V", 9 },
};

Class class_mindustry_entities_effect_NoiseEffect{
		.nativeName = (intptr_t) "mindustry/entities/effect/NoiseEffect",
		.parentClass = (intptr_t) &class_mindustry_entities_Effect,
		.size = sizeof(mindustry_entities_effect_NoiseEffect),
		.classVtable = (intptr_t) vtable_mindustry_entities_effect_NoiseEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_effect_NoiseEffect,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_effect_NoiseEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_effect_NoiseEffect = registerClass(&class_mindustry_entities_effect_NoiseEffect);

}
