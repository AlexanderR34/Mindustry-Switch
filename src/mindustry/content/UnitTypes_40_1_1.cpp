#include "mindustry/content/UnitTypes_40_1_1.h"
#include "mindustry/content/UnitTypes_40_1_1_invoke_arc_func_Cons_5.h"
#include "arc/math/Mathf.h"
#include "mindustry/content/UnitTypes_40_1_1_invoke_arc_func_Cons_6.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/content/UnitTypes_40_1.h"
#include "mindustry/content/UnitTypes_40_1_1_invoke_arc_func_Cons_4.h"
#include "arc/math/Rand.h"
#include "mindustry/entities/bullet/RailBulletType.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/content/UnitTypes_40_1_1.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/content/UnitTypes_40_1_1_invoke_arc_func_Cons_7.h"

extern "C" {


void mark_mindustry_content_UnitTypes$40$1$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_RailBulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$40$1$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$40$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_RailBulletType(ctx);
}

void init_mindustry_content_UnitTypes$40$1$1_mindustry_content_UnitTypes$40$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$40$1$1:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$40$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2733);
	((mindustry_content_UnitTypes$40$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_bullet_RailBulletType(ctx, (frame[0].o));
	LINE_NUMBER(2734);
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(160.0f));
	LINE_NUMBER(2735);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(48.0f));
	LINE_NUMBER(2736);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"feb380"_j))));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) sp[1].o;
	LINE_NUMBER(2737);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Fx_hitBulletColor;
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK(sp[1].o))->F_endEffect = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[2].o;
	LINE_NUMBER(2738);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceDamageFactor = (jfloat(0.8f));
	LINE_NUMBER(2740);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_colorSpark;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(2742);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_Effect);
	jfloat temp0 = jfloat(14.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_4);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_Effect_float_arc_func_Cons(ctx, sp[1].o, temp0, sp[2].o);
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK(sp[0].o))->F_endEffect = (jref) sp[1].o;
	LINE_NUMBER(2747);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_Effect);
	jfloat temp1 = jfloat(10.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_5);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_Effect_float_arc_func_Cons(ctx, sp[1].o, temp1, sp[2].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(2761);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_Effect);
	jfloat temp2 = jfloat(20.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_6);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_Effect_float_arc_func_Cons(ctx, sp[1].o, temp2, sp[2].o);
	((mindustry_entities_bullet_RailBulletType *) NULL_CHECK(sp[0].o))->F_lineEffect = (jref) sp[1].o;
	LINE_NUMBER(2733);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_UnitTypes$40$1$1_lambda$new$2_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$40$1$1:lambda$new$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$40$1$1(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2762);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_data;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_arc_math_geom_Vec2)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[2].o)));
	goto label_4;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(2764);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2765);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((temp0 * (jfloat(0.9f))) + (jfloat(0.6f))));
	LINE_NUMBER(2767);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_id))));
	LINE_NUMBER(2768);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	if ((frame[2].i) >= (7)) goto label_9;
	}
	{
	LINE_NUMBER(2769);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_v;
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_rand;
	jfloat temp1 = jfloat(8.0f);
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_dst_float_float_R_float])(ctx, (frame[1].o), ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp3 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[1].o, temp1, (temp2 - (jfloat(8.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp3);
	LINE_NUMBER(2770);
	jfloat temp4 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_v;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp6 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_v;
	jfloat temp7 = temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	jfloat temp8 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp9 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_finpow_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_finpow_R_float])(ctx, (frame[0].o));
	jfloat temp10 = temp8 + temp9;
	jfloat temp11 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_foutpowdown_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_foutpowdown_R_float])(ctx, (frame[0].o));
	jfloat temp12 = temp11 * (jfloat(20.0f));
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rand;
	jfloat temp13 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0.5f)), (jfloat(1)));
	SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float(ctx, temp5, temp7, temp10, ((temp12 * temp13) + (jfloat(0.3f))));
	LINE_NUMBER(2768);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2773);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(14.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$40$1$1_invoke_arc_func_Cons_7);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(2778);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_UnitTypes$40$1$1_lambda$new$3_mindustry_entities_Effect$EffectContainer_arc_math_geom_Vec2_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$40$1$1:lambda$new$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$40$1$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2774);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * (jfloat(1.5f))));
	LINE_NUMBER(2775);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2776);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(2777);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_UnitTypes$40$1$1_lambda$new$1_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$40$1$1:lambda$new$1", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$40$1$1(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2748);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2749);
	jfloat temp0 = jfloat(1.2f);
	jfloat temp1 = jfloat(7.0f);
	jfloat temp2 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	frame[1].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(2751);
	jfloat temp3 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = frame[1].f;
	jfloat temp6 = jfloat(30.0f);
	jfloat temp7 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp3, temp4, temp5, (temp6 * temp7), ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(2752);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2754);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(2755);
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (frame[1].f) * (jfloat(0.9f));
	jfloat temp3 = jfloat(18.0f);
	jfloat temp4 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp0, temp1, temp2, (temp3 * temp4), (((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation) + ((jfloat((frame[5].i))) * (jfloat(90.0f)))));
	LINE_NUMBER(2754);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2758);
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = frame[1].f;
	jfloat temp3 = jfloat(4.0f);
	jfloat temp4 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp0, temp1, temp2, (temp3 * temp4), (((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))));
	LINE_NUMBER(2759);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_UnitTypes$40$1$1_lambda$new$0_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$40$1$1:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$40$1$1(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2743);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2744);
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp0, temp1, (temp2 * (jfloat(1.5f))), (jfloat(5.0f)), ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(2745);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$40$1$1[] {
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
	(void *) M_mindustry_entities_bullet_BulletType_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_entities_bullet_BulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_RailBulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_continuousDamage_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_heals_R_boolean,
	(void *) M_mindustry_entities_bullet_RailBulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_RailBulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float,
	(void *) M_mindustry_entities_bullet_RailBulletType_handlePierce_mindustry_gen_Bullet_float_float_float,
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
	(void *) M_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_RailBulletType_init_mindustry_gen_Bullet,
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
	{ "this$1", &class_mindustry_content_UnitTypes$40$1, offsetof(mindustry_content_UnitTypes$40$1$1, F_this$1), "Lmindustry/content/UnitTypes$40$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$40$1$1_mindustry_content_UnitTypes$40$1, 0, "(Lmindustry/content/UnitTypes$40$1;)V", 0 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_content_UnitTypes$40$1$1_lambda$new$2_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;)V", 4106 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_content_UnitTypes$40$1$1_lambda$new$3_mindustry_entities_Effect$EffectContainer_arc_math_geom_Vec2_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;Larc/math/geom/Vec2;Lmindustry/entities/Effect$EffectContainer;)V", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_content_UnitTypes$40$1$1_lambda$new$1_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;)V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_content_UnitTypes$40$1$1_lambda$new$0_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;)V", 4106 },
};

Class class_mindustry_content_UnitTypes$40$1$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$40$1$1",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_RailBulletType,
		.size = sizeof(mindustry_content_UnitTypes$40$1$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$40$1$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$40$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$40$1$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$40$1$1 = registerClass(&class_mindustry_content_UnitTypes$40$1$1);

}

