#include "mindustry/entities/comp/LaunchCoreComp.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/Block.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_PowOut.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/Color.h"
#include "arc/util/Interval.h"
#include "mindustry/entities/comp/LaunchCoreComp.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Drawc.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_entities_comp_LaunchCoreComp(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_comp_LaunchCoreComp *) object;
	if (self->F_in)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_in)->clazz)->markFunction)((jobject) self->F_in, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
}

void clinit_mindustry_entities_comp_LaunchCoreComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_LaunchCoreComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LaunchCoreComp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_LaunchCoreComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_entities_comp_LaunchCoreComp *) NULL_CHECK(sp[0].o))->F_in = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_LaunchCoreComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LaunchCoreComp:draw", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_fout_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_fout_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(23);
	frame[2].f = ((((jfloat(1)) - (frame[1].f)) * (jfloat(1.4f))) + (jfloat(1)));
	LINE_NUMBER(24);
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_cx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_cx_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	jfloat temp2 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_cy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_cy_R_float])(ctx, (frame[0].o));
	frame[4].f = temp2;
	LINE_NUMBER(25);
	jfloat temp3 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_fin_R_float])(ctx, (frame[0].o));
	jfloat temp4 = jfloat(140.0f);
	jint temp5 = (jint)((func_mindustry_entities_comp_LaunchCoreComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_id_R_int])(ctx, (frame[0].o));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong(temp5)), (jfloat(50.0f)));
	frame[5].f = (temp3 * (temp4 + temp6));
	LINE_NUMBER(27);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.001f)));
	LINE_NUMBER(29);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_engine;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(31);
	jfloat temp7 = jfloat(0.2f);
	jfloat temp8 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_fslope_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_fslope_R_float])(ctx, (frame[0].o));
	frame[6].f = (temp7 + temp8);
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_entities_comp_LaunchCoreComp *) NULL_CHECK((frame[0].o)))->F_block;
	frame[7].f = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))))) * (jfloat(0.85f)));
	LINE_NUMBER(34);
	jfloat temp9 = frame[3].f;
	jfloat temp10 = frame[4].f;
	jint temp11 = 10;
	jfloat temp12 = ((jfloat(25.0f)) * (((frame[6].f) + (frame[2].f)) - (jfloat(1)))) * (frame[7].f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0)));
	SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(ctx, temp9, temp10, temp11, temp12, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[1].f));
	LINE_NUMBER(37);
	frame[8].i = (jint(0));
	}
label_12:;
	{
	if ((frame[8].i) >= (jint(4))) goto label_13;
	}
	{
	LINE_NUMBER(38);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, (frame[3].f), (frame[4].f), ((jfloat(6.0f)) * (frame[7].f)), (((jfloat(40.0f)) * (((frame[6].f) + (frame[2].f)) - (jfloat(1)))) * (frame[7].f)), (((jfloat((frame[8].i))) * (jfloat(90.0f))) + (frame[5].f)));
	LINE_NUMBER(37);
	INST_IINC(8, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(41);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(43);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(129.0f)));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_entities_comp_LaunchCoreComp *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	frame[8].o = sp[0].o;
	LINE_NUMBER(46);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[8].o));
	frame[2].f = (temp0 * temp1);
	LINE_NUMBER(47);
	frame[9].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[8].o)))->F_width))) * (frame[2].f));
	frame[10].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[8].o)))->F_height))) * (frame[2].f));
	LINE_NUMBER(49);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[1].f));
	LINE_NUMBER(50);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[8].o), (frame[3].f), (frame[4].f), (frame[9].f), (frame[10].f), ((frame[5].f) - (jfloat(45.0f))));
	LINE_NUMBER(52);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = jfloat(225.0f);
	sp[1].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3In;
	jfloat temp3 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_fin_arc_math_Interp_R_float])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, (temp3 * (jfloat(250.0f))));
	LINE_NUMBER(54);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(116.0f)));
	LINE_NUMBER(55);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), ((jfloat(0.22f)) * (frame[1].f)));
	LINE_NUMBER(56);
	sp[0].o = frame[8].o;
	jfloat temp4 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp6 = frame[4].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp5, (temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[9].f), (frame[10].f), ((frame[5].f) - (jfloat(45.0f))));
	LINE_NUMBER(58);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_LaunchCoreComp_cx_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LaunchCoreComp:cx", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_LaunchCoreComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(12.0f);
	jint temp3 = (jint)((func_mindustry_entities_comp_LaunchCoreComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_id_R_int])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((temp3 + (jint(3))))), (jfloat(4.0f)));
	popStackFrame(ctx);
	return (temp0 + (temp1 * (temp2 + temp4)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_LaunchCoreComp_cy_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LaunchCoreComp:cy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_LaunchCoreComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(100.0f);
	jint temp3 = (jint)((func_mindustry_entities_comp_LaunchCoreComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_id_R_int])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((temp3 + (jint(2))))), (jfloat(30.0f)));
	popStackFrame(ctx);
	return (temp0 + (temp1 * (temp2 + temp4)));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_LaunchCoreComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/LaunchCoreComp:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	frame[1].f = (jfloat(4.0f));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_entities_comp_LaunchCoreComp *) NULL_CHECK((frame[0].o)))->F_in;
	jfloat temp0 = jfloat(3.0f);
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_fin_R_float])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (temp0 - (temp1 * (jfloat(2)))));
	if (temp2 == 0) goto label_2;
	}
	{
	LINE_NUMBER(73);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rocketSmokeLarge;
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_cx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_cx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[1].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_cy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_cy_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[1].f));
	jfloat temp5 = temp3 + temp4;
	jfloat temp6 = (jfloat)((func_mindustry_entities_comp_LaunchCoreComp_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_LaunchCoreComp_fin_R_float])(ctx, (frame[0].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp2, temp5, temp6);
	}
label_2:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_LaunchCoreComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_LaunchCoreComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_LaunchCoreComp_draw,
	(void *) nullptr,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_LaunchCoreComp_cx_R_float,
	(void *) M_mindustry_entities_comp_LaunchCoreComp_cy_R_float,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
	{ "lifetime", "()F" },
	{ "time", "()F" },
	{ "lifetime", "(F)V" },
	{ "time", "(F)V" },
	{ "cx", "()F" },
	{ "cy", "()F" },
};

static jclass interfaces[] { &class_mindustry_gen_Drawc, &class_mindustry_gen_Timedc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_LaunchCoreComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_LaunchCoreComp, F_y), "F", 0 },
	{ "in", &class_arc_util_Interval, offsetof(mindustry_entities_comp_LaunchCoreComp, F_in), "Larc/util/Interval;", 128 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_entities_comp_LaunchCoreComp, F_block), "Lmindustry/world/Block;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_LaunchCoreComp, 0, "()V", 0 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_LaunchCoreComp_draw, VTABLE_mindustry_entities_comp_LaunchCoreComp_draw, "()V", 1 },
	{ "cx", (intptr_t) M_mindustry_entities_comp_LaunchCoreComp_cx_R_float, VTABLE_mindustry_entities_comp_LaunchCoreComp_cx_R_float, "()F", 0 },
	{ "cy", (intptr_t) M_mindustry_entities_comp_LaunchCoreComp_cy_R_float, VTABLE_mindustry_entities_comp_LaunchCoreComp_cy_R_float, "()F", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_LaunchCoreComp_update, VTABLE_mindustry_entities_comp_LaunchCoreComp_update, "()V", 1 },
};

Class class_mindustry_entities_comp_LaunchCoreComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/LaunchCoreComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_LaunchCoreComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_LaunchCoreComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_LaunchCoreComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_LaunchCoreComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 71,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_LaunchCoreComp = registerClass(&class_mindustry_entities_comp_LaunchCoreComp);

}
