#include "mindustry/world/draw/DrawHeatOutput.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/util/Eachable.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/blocks/heat/HeatBlock.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/draw/DrawHeatOutput.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_mindustry_world_draw_DrawHeatOutput(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_draw_DrawBlock(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_draw_DrawHeatOutput *) object;
	if (self->F_heat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heat)->clazz)->markFunction)((jobject) self->F_heat, mark, depth + 1);
	if (self->F_glow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glow)->clazz)->markFunction)((jobject) self->F_glow, mark, depth + 1);
	if (self->F_top1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_top1)->clazz)->markFunction)((jobject) self->F_top1, mark, depth + 1);
	if (self->F_top2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_top2)->clazz)->markFunction)((jobject) self->F_top2, mark, depth + 1);
	if (self->F_heatColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heatColor)->clazz)->markFunction)((jobject) self->F_heatColor, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawHeatOutput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawHeatOutput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatOutput:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawHeatOutput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(0.22f)), (jfloat(0.22f)), (jfloat(0.8f)));
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heatPulse = (jfloat(0.3f));
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heatPulseScl = (jfloat(10.0f));
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_glowMult = (jfloat(1.2f));
	LINE_NUMBER(20);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_rotOffset = (jint(0));
	LINE_NUMBER(21);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_drawGlow = (jint(1));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawHeatOutput_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatOutput:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawHeatOutput(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(25);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(0.22f)), (jfloat(0.22f)), (jfloat(0.8f)));
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heatPulse = (jfloat(0.3f));
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heatPulseScl = (jfloat(10.0f));
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_glowMult = (jfloat(1.2f));
	LINE_NUMBER(20);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_rotOffset = (jint(0));
	LINE_NUMBER(21);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_drawGlow = (jint(1));
	LINE_NUMBER(26);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_rotOffset = (frame[1].i);
	LINE_NUMBER(27);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_drawGlow = (frame[2].i);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawHeatOutput_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatOutput:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	frame[2].f = (jfloat(((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_rotation) + ((jint)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_rotOffset)) * (90))));
	LINE_NUMBER(33);
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_rotation) + ((jint)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_rotOffset)), (jint(4)));
	if (temp0 <= (jint(1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_top2;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK(sp[-1].o))->F_top1;
label_3:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f));
	LINE_NUMBER(35);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_heat_HeatBlock)) == 0) goto label_5;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatBlock, (frame[1].o)));
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_heat_HeatBlock_heat_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_heat_HeatBlock, INDEX_mindustry_world_blocks_heat_HeatBlock_heat_R_float, (frame[3].o)))(ctx, (frame[3].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(36);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(31.0f)));
	LINE_NUMBER(37);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heatColor;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_heat_HeatBlock_heatFrac_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_heat_HeatBlock, INDEX_mindustry_world_blocks_heat_HeatBlock_heatFrac_R_float, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heatColor;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a;
	jfloat temp2 = (jfloat(1)) - ((jfloat)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heatPulse);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, ((jfloat)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heatPulseScl), ((jfloat)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heatPulse));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (temp0 * (temp1 * (temp2 + temp3))));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heat;
	jint temp4 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp4 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_heat;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f));
	}
label_11:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(ctx);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_glowMult));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(41);
	if (((jint)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_drawGlow) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_glow;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_glow;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_13:;
	{
	LINE_NUMBER(42);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(43);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_5:;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawHeatOutput_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatOutput:drawPlan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation) + ((jint)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_rotOffset)), (jint(4)));
	if (temp0 <= (jint(1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_top2;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK(sp[-1].o))->F_top1;
label_2:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, (jfloat(((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation) + ((jint)((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK((frame[0].o)))->F_rotOffset)) * (90)))));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawHeatOutput_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatOutput:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-heat"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK(sp[0].o))->F_heat = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK(sp[0].o))->F_glow = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top1"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK(sp[0].o))->F_top1 = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top2"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawHeatOutput *) NULL_CHECK(sp[0].o))->F_top2 = (jref) sp[1].o;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawHeatOutput[] {
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
	(void *) M_mindustry_world_draw_DrawBlock_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq,
	(void *) M_mindustry_world_draw_DrawHeatOutput_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawHeatOutput_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawHeatOutput_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawBlock_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter,
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
	{ "getRegionsToOutline", "(Lmindustry/world/Block;Larc/struct/Seq;)V" },
	{ "draw", "(Lmindustry/gen/Building;)V" },
	{ "drawLight", "(Lmindustry/gen/Building;)V" },
	{ "drawPlan", "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "load", "(Lmindustry/world/Block;)V" },
	{ "icons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "finalIcons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "expectCrafter", "(Lmindustry/world/Block;)Lmindustry/world/blocks/production/GenericCrafter;" },
};

static FieldMetadata fields[] {
	{ "heat", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawHeatOutput, F_heat), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "glow", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawHeatOutput, F_glow), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "top1", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawHeatOutput, F_top1), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "top2", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawHeatOutput, F_top2), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "heatColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawHeatOutput, F_heatColor), "Larc/graphics/Color;", 1 },
	{ "heatPulse", &class_float, offsetof(mindustry_world_draw_DrawHeatOutput, F_heatPulse), "F", 1 },
	{ "heatPulseScl", &class_float, offsetof(mindustry_world_draw_DrawHeatOutput, F_heatPulseScl), "F", 1 },
	{ "glowMult", &class_float, offsetof(mindustry_world_draw_DrawHeatOutput, F_glowMult), "F", 1 },
	{ "rotOffset", &class_int, offsetof(mindustry_world_draw_DrawHeatOutput, F_rotOffset), "I", 1 },
	{ "drawGlow", &class_boolean, offsetof(mindustry_world_draw_DrawHeatOutput, F_drawGlow), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawHeatOutput, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawHeatOutput_int_boolean, 0, "(IZ)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawHeatOutput_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawHeatOutput_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_world_draw_DrawHeatOutput_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_draw_DrawHeatOutput_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawHeatOutput_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawHeatOutput_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawHeatOutput{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawHeatOutput",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawHeatOutput),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawHeatOutput,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawHeatOutput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawHeatOutput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawHeatOutput = registerClass(&class_mindustry_world_draw_DrawHeatOutput);

}
