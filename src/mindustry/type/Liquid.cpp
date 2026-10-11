#include "mindustry/type/Liquid.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/Rand.h"
#include "mindustry/world/meta/Attribute.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Puddle.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/StatusEffect.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/graphics/Drawf.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ctype/ContentType.h"

extern "C" {

jint SF_mindustry_type_Liquid_animationFrames;
jfloat SF_mindustry_type_Liquid_animationScaleGas;
jfloat SF_mindustry_type_Liquid_animationScaleLiquid;
jobject SF_mindustry_type_Liquid_rand;

void mark_mindustry_type_Liquid(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_type_Liquid_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Liquid_rand)->clazz)->markFunction)((jobject) SF_mindustry_type_Liquid_rand, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_UnlockableContent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_Liquid *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_gasColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_gasColor)->clazz)->markFunction)((jobject) self->F_gasColor, mark, depth + 1);
	if (self->F_barColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_barColor)->clazz)->markFunction)((jobject) self->F_barColor, mark, depth + 1);
	if (self->F_lightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightColor)->clazz)->markFunction)((jobject) self->F_lightColor, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_particleEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleEffect)->clazz)->markFunction)((jobject) self->F_particleEffect, mark, depth + 1);
	if (self->F_vaporEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vaporEffect)->clazz)->markFunction)((jobject) self->F_vaporEffect, mark, depth + 1);
	if (self->F_canStayOn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_canStayOn)->clazz)->markFunction)((jobject) self->F_canStayOn, mark, depth + 1);
}

void init_mindustry_type_Liquid_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Liquid(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(73);
	init_mindustry_ctype_UnlockableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(28);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_gas = (jint(0));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_gasColor = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_temperature = (jfloat(0.5f));
	LINE_NUMBER(42);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_heatCapacity = (jfloat(0.5f));
	LINE_NUMBER(44);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_viscosity = (jfloat(0.5f));
	LINE_NUMBER(48);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_blockReactive = (jint(1));
	LINE_NUMBER(50);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_coolant = (jint(1));
	LINE_NUMBER(52);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_moveThroughBlocks = (jint(0));
	LINE_NUMBER(54);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_incinerable = (jint(1));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_particleEffect = (jref) sp[1].o;
	LINE_NUMBER(60);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_particleSpacing = (jfloat(60.0f));
	LINE_NUMBER(62);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_boilPoint = (jfloat(2));
	LINE_NUMBER(64);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_capPuddles = (jint(1));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_vapor;
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_vaporEffect = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_canStayOn = (jref) sp[1].o;
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, (frame[2].o));
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_Liquid_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Liquid(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_black;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[2].o, sp[3].o);
	init_mindustry_type_Liquid_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Liquid_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	M_mindustry_ctype_Content_init(ctx, (frame[0].o));
	LINE_NUMBER(86);
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_gas) == 0) goto label_2;
	}
	{
	LINE_NUMBER(88);
	((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_boilPoint = (jfloat(-1.0f));
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0.6f));
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_color;
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_gasColor = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_barColor;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(1)));
	((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_barColor = (jref) sp[1].o;
	}
label_2:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_Liquid_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_hidden);
	}

	popStackFrame(ctx);
}

jint M_mindustry_type_Liquid_getAnimationFrame_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:getAnimationFrame", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_time;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_gas) == 0) goto label_1;
	}
	clinit_mindustry_type_Liquid(ctx);
	(sp++)->f = SF_mindustry_type_Liquid_animationScaleGas;
	goto label_2;
label_1:;
	clinit_mindustry_type_Liquid(ctx);
	(sp++)->f = SF_mindustry_type_Liquid_animationScaleLiquid;
label_2:;
	{
	sp -= 2;
	popStackFrame(ctx);
	return ((jint((((sp[0].f / sp[1].f) * (jfloat(50.0f))) + (jfloat((((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id) * (jint(5)))))))) % (50));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Liquid_willBoil_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:willBoil", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_heat;
	jfloat temp0 = (jfloat)((func_mindustry_world_meta_Attribute_env_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Attribute_env_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_boilPoint), -1)) < 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_Liquid_canExtinguish_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:canExtinguish", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_flammability), (jfloat(0.1f)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_temperature), (jfloat(0.5f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_Liquid_barColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:barColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_barColor;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_color;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_type_Liquid *) NULL_CHECK(sp[-1].o))->F_barColor;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Liquid_drawPuddle_mindustry_gen_Puddle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:drawPuddle", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	frame[2].f = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_amount);
	frame[3].f = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_x);
	frame[4].f = ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(126);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[2].f) / (jfloat(46.666668f))));
	frame[5].f = temp0;
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_5;
	}
	(sp++)->f = jfloat(0.8f);
	goto label_6;
label_5:;
	INST_FCONST(0);
label_6:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	frame[7].f = (jfloat(25.0f));
	LINE_NUMBER(129);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_shiftValue_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_shiftValue_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(-0.05f)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(130);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat((((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id) * (532))))), (frame[7].f), (frame[6].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat((((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id) * (53))))), (frame[7].f), (frame[6].f));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp2, (temp3 + temp4), ((frame[5].f) * (jfloat(8.0f))));
	LINE_NUMBER(132);
	frame[8].f = ((frame[5].f) * (jfloat(6.0f)));
	LINE_NUMBER(133);
	clinit_mindustry_type_Liquid(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Liquid_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id))));
	LINE_NUMBER(134);
	frame[9].i = (jint(0));
	}
label_13:;
	{
	if ((frame[9].i) >= (jint(3))) goto label_14;
	}
	{
	LINE_NUMBER(135);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	clinit_mindustry_type_Liquid(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Liquid_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(360.0f)));
	clinit_mindustry_type_Liquid(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Liquid_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (frame[8].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(136);
	jfloat temp2 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[10].f = (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	jfloat temp3 = frame[4].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[11].f = (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(138);
	jfloat temp4 = frame[10].f;
	jfloat temp5 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((frame[9].i) * (532))));
	jfloat temp6 = frame[7].f;
	jfloat temp7 = frame[6].f;
	LINE_NUMBER(139);
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp5, temp6, temp7);
	jfloat temp9 = temp4 + temp8;
	jfloat temp10 = frame[11].f;
	jfloat temp11 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((frame[9].i) * (53))));
	jfloat temp12 = frame[7].f;
	jfloat temp13 = frame[6].f;
	LINE_NUMBER(140);
	jfloat temp14 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp11, temp12, temp13);
	jfloat temp15 = temp10 + temp14;
	jfloat temp16 = (frame[5].f) * (jfloat(5.0f));
	LINE_NUMBER(138);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp9, temp15, temp16);
	LINE_NUMBER(134);
	INST_IINC(9, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(144);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_lightColor;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_24;
	}
	{
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(147);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = (jfloat(30.0f)) * (frame[5].f);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_lightColor;
	sp[1].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_color;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp2, sp[0].o, ((((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a) * (frame[5].f)) * (jfloat(0.8f))));
	}
label_24:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Liquid_update_mindustry_gen_Puddle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_type_Liquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:react", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Liquid_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:setStats", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_explosiveness;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_explosiveness));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_flammability;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_flammability));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_temperature;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_temperature));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_heatCapacity;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_heatCapacity));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_viscosity;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_viscosity));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_type_Liquid_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_color;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_color;
	jdouble temp0 = (jdouble)((func_arc_graphics_Color_toDoubleBits_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toDoubleBits_R_double])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(173);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_id;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Liquid_getLogicId_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Liquid_getLogicId_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_2:;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Liquid_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_name;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(180);
	clinit_mindustry_type_Liquid(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_Senseable_noSensed;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Liquid_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Liquid_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_type_Liquid(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_UnlockableContent(ctx);
	SF_mindustry_type_Liquid_animationFrames = jint(50);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Liquid:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Liquid(ctx);
	{
	LINE_NUMBER(23);
	clinit_mindustry_type_Liquid(ctx);
	SF_mindustry_type_Liquid_animationScaleGas = (jfloat(190.0f));
	clinit_mindustry_type_Liquid(ctx);
	SF_mindustry_type_Liquid_animationScaleLiquid = (jfloat(230.0f));
	LINE_NUMBER(25);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_type_Liquid(ctx);
	SF_mindustry_type_Liquid_rand = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_Liquid;
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

	{ // Field barColor
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

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_type_Liquid[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_Liquid_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_Liquid_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_type_Liquid_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_type_Liquid_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_Liquid_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_type_Liquid_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_type_Liquid_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_type_Liquid_getAnimationFrame_R_int,
	(void *) M_mindustry_type_Liquid_willBoil_R_boolean,
	(void *) M_mindustry_type_Liquid_canExtinguish_R_boolean,
	(void *) M_mindustry_type_Liquid_barColor_R_arc_graphics_Color,
	(void *) M_mindustry_type_Liquid_drawPuddle_mindustry_gen_Puddle,
	(void *) M_mindustry_type_Liquid_update_mindustry_gen_Puddle,
	(void *) M_mindustry_type_Liquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float,
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
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "getAnimationFrame", "()I" },
	{ "willBoil", "()Z" },
	{ "canExtinguish", "()Z" },
	{ "barColor", "()Larc/graphics/Color;" },
	{ "drawPuddle", "(Lmindustry/gen/Puddle;)V" },
	{ "update", "(Lmindustry/gen/Puddle;)V" },
	{ "react", "(Lmindustry/type/Liquid;FLmindustry/world/Tile;FF)F" },
};

static jclass interfaces[] { &class_mindustry_logic_Senseable, };

static FieldMetadata fields[] {
	{ "animationFrames", &class_int, (intptr_t) &SF_mindustry_type_Liquid_animationFrames, "I", 25 },
	{ "animationScaleGas", &class_float, (intptr_t) &SF_mindustry_type_Liquid_animationScaleGas, "F", 9 },
	{ "animationScaleLiquid", &class_float, (intptr_t) &SF_mindustry_type_Liquid_animationScaleLiquid, "F", 9 },
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_type_Liquid_rand, "Larc/math/Rand;", 28 },
	{ "gas", &class_boolean, offsetof(mindustry_type_Liquid, F_gas), "Z", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_type_Liquid, F_color), "Larc/graphics/Color;", 1 },
	{ "gasColor", &class_arc_graphics_Color, offsetof(mindustry_type_Liquid, F_gasColor), "Larc/graphics/Color;", 1 },
	{ "barColor", &class_arc_graphics_Color, offsetof(mindustry_type_Liquid, F_barColor), "Larc/graphics/Color;", 1 },
	{ "lightColor", &class_arc_graphics_Color, offsetof(mindustry_type_Liquid, F_lightColor), "Larc/graphics/Color;", 1 },
	{ "flammability", &class_float, offsetof(mindustry_type_Liquid, F_flammability), "F", 1 },
	{ "temperature", &class_float, offsetof(mindustry_type_Liquid, F_temperature), "F", 1 },
	{ "heatCapacity", &class_float, offsetof(mindustry_type_Liquid, F_heatCapacity), "F", 1 },
	{ "viscosity", &class_float, offsetof(mindustry_type_Liquid, F_viscosity), "F", 1 },
	{ "explosiveness", &class_float, offsetof(mindustry_type_Liquid, F_explosiveness), "F", 1 },
	{ "blockReactive", &class_boolean, offsetof(mindustry_type_Liquid, F_blockReactive), "Z", 1 },
	{ "coolant", &class_boolean, offsetof(mindustry_type_Liquid, F_coolant), "Z", 1 },
	{ "moveThroughBlocks", &class_boolean, offsetof(mindustry_type_Liquid, F_moveThroughBlocks), "Z", 1 },
	{ "incinerable", &class_boolean, offsetof(mindustry_type_Liquid, F_incinerable), "Z", 1 },
	{ "effect", &class_mindustry_type_StatusEffect, offsetof(mindustry_type_Liquid, F_effect), "Lmindustry/type/StatusEffect;", 1 },
	{ "particleEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_Liquid, F_particleEffect), "Lmindustry/entities/Effect;", 1 },
	{ "particleSpacing", &class_float, offsetof(mindustry_type_Liquid, F_particleSpacing), "F", 1 },
	{ "boilPoint", &class_float, offsetof(mindustry_type_Liquid, F_boilPoint), "F", 1 },
	{ "capPuddles", &class_boolean, offsetof(mindustry_type_Liquid, F_capPuddles), "Z", 1 },
	{ "vaporEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_Liquid, F_vaporEffect), "Lmindustry/entities/Effect;", 1 },
	{ "hidden", &class_boolean, offsetof(mindustry_type_Liquid, F_hidden), "Z", 1 },
	{ "canStayOn", &class_arc_struct_ObjectSet, offsetof(mindustry_type_Liquid, F_canStayOn), "Larc/struct/ObjectSet;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Liquid_java_lang_String_arc_graphics_Color, 0, "(Ljava/lang/String;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_Liquid_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_mindustry_type_Liquid_init, VTABLE_mindustry_type_Liquid_init, "()V", 1 },
	{ "isHidden", (intptr_t) M_mindustry_type_Liquid_isHidden_R_boolean, VTABLE_mindustry_type_Liquid_isHidden_R_boolean, "()Z", 1 },
	{ "getAnimationFrame", (intptr_t) M_mindustry_type_Liquid_getAnimationFrame_R_int, VTABLE_mindustry_type_Liquid_getAnimationFrame_R_int, "()I", 1 },
	{ "willBoil", (intptr_t) M_mindustry_type_Liquid_willBoil_R_boolean, VTABLE_mindustry_type_Liquid_willBoil_R_boolean, "()Z", 1 },
	{ "canExtinguish", (intptr_t) M_mindustry_type_Liquid_canExtinguish_R_boolean, VTABLE_mindustry_type_Liquid_canExtinguish_R_boolean, "()Z", 1 },
	{ "barColor", (intptr_t) M_mindustry_type_Liquid_barColor_R_arc_graphics_Color, VTABLE_mindustry_type_Liquid_barColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "drawPuddle", (intptr_t) M_mindustry_type_Liquid_drawPuddle_mindustry_gen_Puddle, VTABLE_mindustry_type_Liquid_drawPuddle_mindustry_gen_Puddle, "(Lmindustry/gen/Puddle;)V", 1 },
	{ "update", (intptr_t) M_mindustry_type_Liquid_update_mindustry_gen_Puddle, VTABLE_mindustry_type_Liquid_update_mindustry_gen_Puddle, "(Lmindustry/gen/Puddle;)V", 1 },
	{ "react", (intptr_t) M_mindustry_type_Liquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float, VTABLE_mindustry_type_Liquid_react_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float, "(Lmindustry/type/Liquid;FLmindustry/world/Tile;FF)F", 1 },
	{ "setStats", (intptr_t) M_mindustry_type_Liquid_setStats, VTABLE_mindustry_type_Liquid_setStats, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_type_Liquid_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_type_Liquid_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_type_Liquid_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_type_Liquid_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_mindustry_type_Liquid_toString_R_java_lang_String, VTABLE_mindustry_type_Liquid_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getContentType", (intptr_t) M_mindustry_type_Liquid_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_type_Liquid_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_type_Liquid, 0, "()V", 8 },
};

Class class_mindustry_type_Liquid{
		.nativeName = (intptr_t) "mindustry/type/Liquid",
		.parentClass = (intptr_t) &class_mindustry_ctype_UnlockableContent,
		.size = sizeof(mindustry_type_Liquid),
		.classVtable = (intptr_t) vtable_mindustry_type_Liquid,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Liquid,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_Liquid,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 64,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Liquid = registerClass(&class_mindustry_type_Liquid);

}
