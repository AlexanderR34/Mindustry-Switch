#include "mindustry/entities/effect/ExplosionEffect.h"
#include "mindustry/entities/effect/ExplosionEffect_invoke_arc_func_Cons_3.h"
#include "mindustry/entities/effect/ExplosionEffect_invoke_arc_func_Floatc2_2.h"
#include "arc/math/Mathf.h"
#include "mindustry/entities/effect/ExplosionEffect_invoke_arc_func_Cons_2.h"
#include "mindustry/entities/effect/ExplosionEffect_invoke_arc_func_Floatc2_3.h"
#include "arc/math/Angles.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Drawf.h"
#include "arc/func/Floatc2.h"
#include "mindustry/entities/effect/ExplosionEffect.h"

extern "C" {


void mark_mindustry_entities_effect_ExplosionEffect(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_effect_ExplosionEffect *) object;
	if (self->F_waveColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_waveColor)->clazz)->markFunction)((jobject) self->F_waveColor, mark, depth + 1);
	if (self->F_smokeColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_smokeColor)->clazz)->markFunction)((jobject) self->F_smokeColor, mark, depth + 1);
	if (self->F_sparkColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sparkColor)->clazz)->markFunction)((jobject) self->F_sparkColor, mark, depth + 1);
}

void clinit_mindustry_entities_effect_ExplosionEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_Effect(ctx);
}

void init_mindustry_entities_effect_ExplosionEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/ExplosionEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_ExplosionEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_missileYellow;
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK(sp[0].o))->F_waveColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK(sp[0].o))->F_smokeColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_missileYellowBack;
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK(sp[0].o))->F_sparkColor = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveLife = (jfloat(6.0f));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveStroke = (jfloat(3.0f));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveRad = (jfloat(15.0f));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveRadBase = (jfloat(2));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkStroke = (jfloat(1));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkRad = (jfloat(23.0f));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkLen = (jfloat(3.0f));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokeSize = (jfloat(4.0f));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokeSizeBase = (jfloat(0.5f));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokeRad = (jfloat(23.0f));
	LINE_NUMBER(16);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokes = (jint(5));
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparks = (jint(4));
	LINE_NUMBER(19);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_clip = (jfloat(100.0f));
	LINE_NUMBER(20);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(22.0f));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_renderer = (jref) sp[1].o;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_ExplosionEffect_lambda$new$0_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/ExplosionEffect:lambda$new$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(25);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveLife;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Cons_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokeColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(32);
	if ((floatCompare(((jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokeSize), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(33);
	jlong temp0 = jlong(((jint)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_id));
	jint temp1 = (jint)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokes;
	jfloat temp2 = jfloat(2);
	jfloat temp3 = (jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokeRad;
	jfloat temp4 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_finpow_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_finpow_R_float])(ctx, (frame[1].o));
	jfloat temp5 = temp2 + (temp3 * temp4);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Floatc2_2(ctx);
		auto proxy = (mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Floatc2_2 *) gcAlloc(ctx, &class_mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Floatc2_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_Angles_randLenVectors_long_int_float_arc_func_Floatc2(ctx, temp0, temp1, temp5, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(39);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * ((jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkStroke)));
	LINE_NUMBER(41);
	jlong temp1 = jlong((((jint)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_id) + (jint(1))));
	jint temp2 = (jint)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparks;
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkRad;
	jfloat temp5 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_finpow_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_finpow_R_float])(ctx, (frame[1].o));
	jfloat temp6 = temp3 + (temp4 * temp5);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Floatc2_3(ctx);
		auto proxy = (mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Floatc2_3 *) gcAlloc(ctx, &class_mindustry_entities_effect_ExplosionEffect_invoke_arc_func_Floatc2_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_Angles_randLenVectors_long_int_float_arc_func_Floatc2(ctx, temp1, temp2, temp6, sp[0].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_ExplosionEffect_lambda$new$3_mindustry_entities_Effect$EffectContainer_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/ExplosionEffect:lambda$new$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(42);
	jfloat temp0 = ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x) + (frame[2].f);
	jfloat temp1 = ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y) + (frame[3].f);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, (frame[2].f), (frame[3].f));
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp0, temp1, temp2, (temp3 + (temp4 * ((jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkLen))));
	LINE_NUMBER(43);
	jfloat temp5 = ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x) + (frame[2].f);
	jfloat temp6 = ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y) + (frame[3].f);
	jfloat temp7 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	jfloat temp8 = (temp7 * ((jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkLen)) * (jfloat(4.0f));
	sp[0].o = (jobject)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkColor;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp5, temp6, temp8, sp[0].o, (jfloat(0.7f)));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_ExplosionEffect_lambda$new$2_mindustry_entities_Effect$EffectContainer_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/ExplosionEffect:lambda$new$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(34);
	jfloat temp0 = ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x) + (frame[2].f);
	jfloat temp1 = ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y) + (frame[3].f);
	jfloat temp2 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp0, temp1, ((temp2 * ((jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokeSize)) + ((jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokeSizeBase)));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_ExplosionEffect_lambda$new$1_mindustry_entities_Effect$EffectContainer_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/ExplosionEffect:lambda$new$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveStroke;
	jfloat temp1 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * temp1));
	LINE_NUMBER(27);
	jfloat temp2 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp4 = (jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveRadBase;
	jfloat temp5 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, temp2, temp3, (temp4 + (temp5 * ((jfloat)((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveRad))));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_effect_ExplosionEffect[] {
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
	(void *) M_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_effect_ExplosionEffect_lambda$new$0_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_entities_effect_ExplosionEffect_lambda$new$3_mindustry_entities_Effect$EffectContainer_float_float,
	(void *) M_mindustry_entities_effect_ExplosionEffect_lambda$new$2_mindustry_entities_Effect$EffectContainer_float_float,
	(void *) M_mindustry_entities_effect_ExplosionEffect_lambda$new$1_mindustry_entities_Effect$EffectContainer_mindustry_entities_Effect$EffectContainer,
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
	{ "lambda$new$0", "(Lmindustry/entities/Effect$EffectContainer;)V" },
	{ "lambda$new$3", "(Lmindustry/entities/Effect$EffectContainer;FF)V" },
	{ "lambda$new$2", "(Lmindustry/entities/Effect$EffectContainer;FF)V" },
	{ "lambda$new$1", "(Lmindustry/entities/Effect$EffectContainer;Lmindustry/entities/Effect$EffectContainer;)V" },
};

static FieldMetadata fields[] {
	{ "waveColor", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_ExplosionEffect, F_waveColor), "Larc/graphics/Color;", 1 },
	{ "smokeColor", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_ExplosionEffect, F_smokeColor), "Larc/graphics/Color;", 1 },
	{ "sparkColor", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_ExplosionEffect, F_sparkColor), "Larc/graphics/Color;", 1 },
	{ "waveLife", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_waveLife), "F", 1 },
	{ "waveStroke", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_waveStroke), "F", 1 },
	{ "waveRad", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_waveRad), "F", 1 },
	{ "waveRadBase", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_waveRadBase), "F", 1 },
	{ "sparkStroke", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_sparkStroke), "F", 1 },
	{ "sparkRad", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_sparkRad), "F", 1 },
	{ "sparkLen", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_sparkLen), "F", 1 },
	{ "smokeSize", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_smokeSize), "F", 1 },
	{ "smokeSizeBase", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_smokeSizeBase), "F", 1 },
	{ "smokeRad", &class_float, offsetof(mindustry_entities_effect_ExplosionEffect, F_smokeRad), "F", 1 },
	{ "smokes", &class_int, offsetof(mindustry_entities_effect_ExplosionEffect, F_smokes), "I", 1 },
	{ "sparks", &class_int, offsetof(mindustry_entities_effect_ExplosionEffect, F_sparks), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_effect_ExplosionEffect, 0, "()V", 1 },
	{ "lambda$new$0", (intptr_t) M_mindustry_entities_effect_ExplosionEffect_lambda$new$0_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_effect_ExplosionEffect_lambda$new$0_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;)V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_entities_effect_ExplosionEffect_lambda$new$3_mindustry_entities_Effect$EffectContainer_float_float, VTABLE_mindustry_entities_effect_ExplosionEffect_lambda$new$3_mindustry_entities_Effect$EffectContainer_float_float, "(Lmindustry/entities/Effect$EffectContainer;FF)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_entities_effect_ExplosionEffect_lambda$new$2_mindustry_entities_Effect$EffectContainer_float_float, VTABLE_mindustry_entities_effect_ExplosionEffect_lambda$new$2_mindustry_entities_Effect$EffectContainer_float_float, "(Lmindustry/entities/Effect$EffectContainer;FF)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_entities_effect_ExplosionEffect_lambda$new$1_mindustry_entities_Effect$EffectContainer_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_effect_ExplosionEffect_lambda$new$1_mindustry_entities_Effect$EffectContainer_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;Lmindustry/entities/Effect$EffectContainer;)V", 4098 },
};

Class class_mindustry_entities_effect_ExplosionEffect{
		.nativeName = (intptr_t) "mindustry/entities/effect/ExplosionEffect",
		.parentClass = (intptr_t) &class_mindustry_entities_Effect,
		.size = sizeof(mindustry_entities_effect_ExplosionEffect),
		.classVtable = (intptr_t) vtable_mindustry_entities_effect_ExplosionEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_effect_ExplosionEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_effect_ExplosionEffect,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_effect_ExplosionEffect = registerClass(&class_mindustry_entities_effect_ExplosionEffect);

}
