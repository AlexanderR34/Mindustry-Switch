#include "mindustry/content/UnitTypes_35_1_1.h"
#include "arc/math/Angles.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/content/UnitTypes_35.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "mindustry/content/UnitTypes_35_1_1.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/content/UnitTypes_35_1.h"
#include "mindustry/entities/bullet/EmpBulletType.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "mindustry/content/UnitTypes_35_1_1_invoke_arc_func_Cons_4.h"
#include "arc/audio/Sound.h"
#include "mindustry/content/UnitTypes_35_1_1_invoke_arc_func_Cons_3.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/content/UnitTypes_35_1_1_invoke_arc_func_Cons_5.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_content_UnitTypes$35$1$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_EmpBulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$35$1$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$35$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_EmpBulletType(ctx);
}

void init_mindustry_content_UnitTypes$35$1$1_mindustry_content_UnitTypes$35$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$35$1$1:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$35$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2362);
	((mindustry_content_UnitTypes$35$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_bullet_EmpBulletType(ctx, (frame[0].o));
	LINE_NUMBER(2363);
	frame[2].f = (jfloat(100.0f));
	LINE_NUMBER(2365);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_scaleLife = (jint(1));
	LINE_NUMBER(2366);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.7f));
	LINE_NUMBER(2367);
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_unitDamageScl = (jfloat(0.8f));
	LINE_NUMBER(2368);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healPercent = (jfloat(20.0f));
	LINE_NUMBER(2369);
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_timeIncrease = (jfloat(3.0f));
	LINE_NUMBER(2370);
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_timeDuration = (jfloat(1200.0f));
	LINE_NUMBER(2371);
	((mindustry_entities_bullet_EmpBulletType *) NULL_CHECK((frame[0].o)))->F_powerDamageScl = (jfloat(3.0f));
	LINE_NUMBER(2372);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(110.0f));
	LINE_NUMBER(2373);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_lightColor = (jref) sp[2].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) sp[2].o;
	LINE_NUMBER(2374);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightRadius = (jfloat(70.0f));
	LINE_NUMBER(2375);
	sp[0].o = (jobject)((mindustry_content_UnitTypes$35$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_content_UnitTypes$35$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize = (jfloat(250.0f));
	LINE_NUMBER(2376);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitEmpSpark;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(2377);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootBigSmoke2;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(2378);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(60.0f));
	LINE_NUMBER(2379);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_sprite = (jref) (((jobject) createStringLiteral(ctx, u8"circle-bullet"_j)));
	LINE_NUMBER(2380);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_backColor = (jref) sp[1].o;
	LINE_NUMBER(2381);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_frontColor = (jref) sp[1].o;
	LINE_NUMBER(2382);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(12.0f);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[1].o))->F_height = temp0;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(2383);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_shrinkY = (jfloat(0));
	LINE_NUMBER(2384);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(5.0f));
	LINE_NUMBER(2385);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength = (20);
	LINE_NUMBER(2386);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailWidth = (jfloat(6.0f));
	LINE_NUMBER(2387);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailColor = (jref) sp[1].o;
	LINE_NUMBER(2388);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval = (jfloat(3.0f));
	LINE_NUMBER(2389);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamage = (jfloat(110.0f));
	LINE_NUMBER(2390);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius = (frame[2].f);
	LINE_NUMBER(2391);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitShake = (jfloat(4.0f));
	LINE_NUMBER(2392);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailRotation = (jint(1));
	LINE_NUMBER(2393);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_electrified;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(2394);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionNavanax;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitSound = (jref) sp[1].o;
	LINE_NUMBER(2396);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_Effect);
	jfloat temp3 = jfloat(16.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$35$1$1_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_content_UnitTypes$35$1$1_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$35$1$1_invoke_arc_func_Cons_3);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_Effect_float_arc_func_Cons(ctx, sp[1].o, temp3, sp[2].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailEffect = (jref) sp[1].o;
	LINE_NUMBER(2403);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_Effect);
	jfloat temp4 = jfloat(50.0f);
	jfloat temp5 = jfloat(100.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$35$1$1_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_content_UnitTypes$35$1$1_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$35$1$1_invoke_arc_func_Cons_4);
		proxy->F_field0 = (frame[2].f);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_Effect_float_float_arc_func_Cons(ctx, sp[1].o, temp4, temp5, sp[2].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(2362);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_UnitTypes$35$1$1_lambda$new$1_float_mindustry_entities_Effect$EffectContainer(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$35$1$1:lambda$new$1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$35$1$1(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2404);
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat(7.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$35$1$1_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_content_UnitTypes$35$1$1_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$35$1$1_invoke_arc_func_Cons_5);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(2409);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_heal;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2410);
	jfloat temp1 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp1 * (jfloat(3.0f))));
	LINE_NUMBER(2411);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y), (frame[0].f));
	LINE_NUMBER(2413);
	frame[2].i = (10);
	LINE_NUMBER(2414);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_randomSeed_long_float_R_float(ctx, (jlong(((jint)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_id))), (jfloat(360.0f)));
	frame[3].f = temp2;
	LINE_NUMBER(2415);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(2416);
	frame[5].f = ((((jfloat((frame[4].i))) * (jfloat(360.0f))) / (jfloat((frame[2].i)))) + (frame[3].f));
	LINE_NUMBER(2418);
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[5].f), (frame[0].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[5].f), (frame[0].f));
	jfloat temp5 = temp3 + temp4;
	jfloat temp6 = jfloat(6.0f);
	jfloat temp7 = jfloat(50.0f);
	jfloat temp8 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp2, temp5, temp6, (temp7 * temp8), (frame[5].f));
	LINE_NUMBER(2415);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2422);
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = jfloat(12.0f);
	jfloat temp3 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp0, temp1, (temp2 * temp3));
	LINE_NUMBER(2423);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(2424);
	jfloat temp4 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp6 = jfloat(6.0f);
	jfloat temp7 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp4, temp5, (temp6 * temp7));
	LINE_NUMBER(2425);
	jfloat temp8 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp9 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp10 = (frame[0].f) * (jfloat(1.6f));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_heal;
	jfloat temp11 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp8, temp9, temp10, sp[0].o, temp11);
	LINE_NUMBER(2426);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_UnitTypes$35$1$1_lambda$new$2_mindustry_entities_Effect$EffectContainer_float_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$35$1$1:lambda$new$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$35$1$1(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2405);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_heal;
	jfloat temp0 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, temp0);
	LINE_NUMBER(2406);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f));
	LINE_NUMBER(2407);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_UnitTypes$35$1$1_lambda$new$0_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$35$1$1:lambda$new$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$35$1$1(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2397);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_heal;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2398);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(2399);
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(4.0f);
	jfloat temp3 = jfloat(30.0f);
	jfloat temp4 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fslope_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fslope_R_float])(ctx, (frame[0].o));
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, temp0, temp1, temp2, (temp3 * temp4), (((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation) + ((jfloat(90.0f)) * (jfloat((frame[4].i))))));
	LINE_NUMBER(2398);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(2401);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$35$1$1[] {
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
	(void *) M_mindustry_entities_bullet_BasicBulletType_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_entities_bullet_BulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_continuousDamage_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_heals_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float,
	(void *) M_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_EmpBulletType_hit_mindustry_gen_Bullet_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BasicBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet,
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
	(void *) M_mindustry_entities_bullet_EmpBulletType_lambda$hit$1_mindustry_gen_Bullet_float_float_mindustry_gen_Unit,
	(void *) M_mindustry_entities_bullet_EmpBulletType_lambda$hit$0_mindustry_gen_Bullet_float_float_mindustry_gen_Building,
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
	{ "lambda$hit$1", "(Lmindustry/gen/Bullet;FFLmindustry/gen/Unit;)V" },
	{ "lambda$hit$0", "(Lmindustry/gen/Bullet;FFLmindustry/gen/Building;)V" },
};

static FieldMetadata fields[] {
	{ "this$1", &class_mindustry_content_UnitTypes$35$1, offsetof(mindustry_content_UnitTypes$35$1$1, F_this$1), "Lmindustry/content/UnitTypes$35$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$35$1$1_mindustry_content_UnitTypes$35$1, 0, "(Lmindustry/content/UnitTypes$35$1;)V", 0 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_content_UnitTypes$35$1$1_lambda$new$1_float_mindustry_entities_Effect$EffectContainer, 0, "(FLmindustry/entities/Effect$EffectContainer;)V", 4106 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_content_UnitTypes$35$1$1_lambda$new$2_mindustry_entities_Effect$EffectContainer_float_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;FLmindustry/entities/Effect$EffectContainer;)V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_content_UnitTypes$35$1$1_lambda$new$0_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;)V", 4106 },
};

Class class_mindustry_content_UnitTypes$35$1$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$35$1$1",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_EmpBulletType,
		.size = sizeof(mindustry_content_UnitTypes$35$1$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$35$1$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$35$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$35$1$1,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 79,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$35$1$1 = registerClass(&class_mindustry_content_UnitTypes$35$1$1);

}

