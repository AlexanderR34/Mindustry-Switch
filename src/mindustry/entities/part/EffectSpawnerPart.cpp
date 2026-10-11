#include "mindustry/entities/part/EffectSpawnerPart.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "mindustry/entities/part/EffectSpawnerPart.h"
#include "arc/util/Time.h"
#include "mindustry/entities/part/DrawPart.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_entities_part_EffectSpawnerPart(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_part_DrawPart(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_part_EffectSpawnerPart *) object;
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_effectColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effectColor)->clazz)->markFunction)((jobject) self->F_effectColor, mark, depth + 1);
	if (self->F_progress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_progress)->clazz)->markFunction)((jobject) self->F_progress, mark, depth + 1);
}

void clinit_mindustry_entities_part_EffectSpawnerPart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_DrawPart(ctx);
}

void init_mindustry_entities_part_EffectSpawnerPart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/EffectSpawnerPart:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_EffectSpawnerPart(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_mindustry_entities_part_DrawPart(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(22);
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectInterval = (jfloat(0));
	LINE_NUMBER(25);
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectChance = (jfloat(0.1f));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_sparkShoot;
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK(sp[0].o))->F_effectColor = (jref) sp[1].o;
	LINE_NUMBER(30);
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_useProgress = (jint(1));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_debugDraw = (jint(0));
	LINE_NUMBER(36);
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectIntervalState = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_EffectSpawnerPart_draw_mindustry_entities_part_DrawPart$PartParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/EffectSpawnerPart:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	if (((jint)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_debugDraw) == 0) goto label_1;
	}
	{
	LINE_NUMBER(41);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_mirror) == 0) goto label_4;
	}
	INST_ICONST(2);
	goto label_5;
label_4:;
	INST_ICONST(1);
label_5:;
	sp -= 2; if (sp[0].i >= sp[1].i) goto label_1;
	{
	LINE_NUMBER(42);
	if ((frame[2].i) != 0) goto label_7;
	}
	INST_FCONST(1);
	goto label_8;
label_7:;
	(sp++)->f = jfloat(-1.0f);
label_8:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	frame[4].f = (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) + (((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_rotation) * (frame[3].f)));
	LINE_NUMBER(43);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)), ((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(45);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[5].f = temp0;
	LINE_NUMBER(46);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(122.0f)));
	LINE_NUMBER(47);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_red;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(48);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"error"_j));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float_float(ctx, sp[0].o, temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), ((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_height), ((frame[4].f) - (jfloat(90.0f))));
	LINE_NUMBER(49);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(50);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[5].f));
	LINE_NUMBER(41);
	INST_IINC(2, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(54);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_18:;
	{
	LINE_NUMBER(56);
	if ((floatCompare(((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectIntervalFrom), (jfloat(0)), -1)) <= 0) goto label_19;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectIntervalFrom;
	jfloat temp1 = (jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectInterval;
	sp[0].o = (jobject)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_progress;
	jfloat temp2 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp0, temp1, temp2);
	sp[0].f = temp3;
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK(sp[-1].o))->F_effectInterval;
label_20:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(58);
	frame[3].i = (jint(0));
	}
label_22:;
	{
	jint temp0 = frame[3].i;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_mirror) == 0) goto label_23;
	}
	INST_ICONST(2);
	goto label_24;
label_23:;
	INST_ICONST(1);
label_24:;
	sp -= 2; if (sp[0].i >= sp[1].i) goto label_25;
	{
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_27;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) <= 0) goto label_28;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK(sp[0].o))->F_effectIntervalState) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK(sp[0].o))->F_effectIntervalState = temp0;
	if ((floatCompare(temp0, (frame[2].f), -1)) < 0) goto label_27;
	}
	goto label_29;
label_28:;
	{
	jfloat temp0 = (jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectChance;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_useProgress) == 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_progress;
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_31;
	}
label_30:;
	INST_FCONST(1);
label_31:;
	{
	sp -= 2;
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble((sp[0].f * sp[1].f))));
	if (temp0 == 0) goto label_27;
	}
label_29:;
	{
	LINE_NUMBER(60);
	if ((frame[3].i) != 0) goto label_32;
	}
	INST_FCONST(1);
	goto label_33;
label_32:;
	(sp++)->f = jfloat(-1.0f);
label_33:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	frame[5].f = (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) + (((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_rotation) * (frame[4].f)));
	LINE_NUMBER(61);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_x) * (frame[4].f)), ((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(62);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((-((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_height)) * (jfloat(0.5f))), (((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_height) * (jfloat(0.5f))));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((-((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_width)) * (jfloat(0.5f))), (((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_width) * (jfloat(0.5f))));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, temp1);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[5].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effect;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp4 = (frame[5].f) + (((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectRot) * (frame[4].f));
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (-((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectRandRot)), ((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectRandRot));
	jfloat temp6 = temp4 + temp5;
	sp[1].o = (jobject)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK((frame[0].o)))->F_effectColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp2, temp3, temp6, sp[1].o);
	LINE_NUMBER(65);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) <= 0) goto label_27;
	}
	{
	sp[0].o = frame[0].o;
	((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK(sp[0].o))->F_effectIntervalState = (fmodf(((jfloat)((mindustry_entities_part_EffectSpawnerPart *) NULL_CHECK(sp[0].o))->F_effectIntervalState), (frame[2].f)));
	}
label_27:;
	{
	LINE_NUMBER(58);
	INST_IINC(3, 1);
	goto label_22;
	}
label_25:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_part_EffectSpawnerPart[] {
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
	(void *) M_mindustry_entities_part_EffectSpawnerPart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_DrawPart_load_java_lang_String,
	(void *) M_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq,
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
	{ "draw", "(Lmindustry/entities/part/DrawPart$PartParams;)V" },
	{ "load", "(Ljava/lang/String;)V" },
	{ "getOutlines", "(Larc/struct/Seq;)V" },
};

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_y), "F", 1 },
	{ "width", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_width), "F", 1 },
	{ "height", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_height), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_rotation), "F", 1 },
	{ "mirror", &class_boolean, offsetof(mindustry_entities_part_EffectSpawnerPart, F_mirror), "Z", 1 },
	{ "effectRot", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_effectRot), "F", 1 },
	{ "effectRandRot", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_effectRandRot), "F", 1 },
	{ "effectInterval", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_effectInterval), "F", 1 },
	{ "effectIntervalFrom", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_effectIntervalFrom), "F", 1 },
	{ "effectChance", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_effectChance), "F", 1 },
	{ "effect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_part_EffectSpawnerPart, F_effect), "Lmindustry/entities/Effect;", 1 },
	{ "effectColor", &class_arc_graphics_Color, offsetof(mindustry_entities_part_EffectSpawnerPart, F_effectColor), "Larc/graphics/Color;", 1 },
	{ "useProgress", &class_boolean, offsetof(mindustry_entities_part_EffectSpawnerPart, F_useProgress), "Z", 1 },
	{ "progress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_entities_part_EffectSpawnerPart, F_progress), "Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "debugDraw", &class_boolean, offsetof(mindustry_entities_part_EffectSpawnerPart, F_debugDraw), "Z", 1 },
	{ "effectIntervalState", &class_float, offsetof(mindustry_entities_part_EffectSpawnerPart, F_effectIntervalState), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_EffectSpawnerPart, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_part_EffectSpawnerPart_draw_mindustry_entities_part_DrawPart$PartParams, VTABLE_mindustry_entities_part_EffectSpawnerPart_draw_mindustry_entities_part_DrawPart$PartParams, "(Lmindustry/entities/part/DrawPart$PartParams;)V", 1 },
};

Class class_mindustry_entities_part_EffectSpawnerPart{
		.nativeName = (intptr_t) "mindustry/entities/part/EffectSpawnerPart",
		.parentClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.size = sizeof(mindustry_entities_part_EffectSpawnerPart),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_EffectSpawnerPart,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_EffectSpawnerPart,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_part_EffectSpawnerPart,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_EffectSpawnerPart = registerClass(&class_mindustry_entities_part_EffectSpawnerPart);

}
