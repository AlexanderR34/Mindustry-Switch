#include "mindustry/world/draw/DrawGlowRegion.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/draw/DrawGlowRegion.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_mindustry_world_draw_DrawGlowRegion(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawGlowRegion *) object;
	if (self->F_blending)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blending)->clazz)->markFunction)((jobject) self->F_blending, mark, depth + 1);
	if (self->F_suffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suffix)->clazz)->markFunction)((jobject) self->F_suffix, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawGlowRegion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawGlowRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawGlowRegion:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawGlowRegion(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_additive;
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-glow"_j)));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(0.9f));
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowScale = (jfloat(10.0f));
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowIntensity = (jfloat(0.5f));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(31.0f));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(0));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_red;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawGlowRegion_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawGlowRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawGlowRegion(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(24);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_additive;
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-glow"_j)));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(0.9f));
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowScale = (jfloat(10.0f));
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowIntensity = (jfloat(0.5f));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(31.0f));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(0));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_red;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_layer = (frame[1].f);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawGlowRegion_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawGlowRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawGlowRegion(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(28);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_additive;
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-glow"_j)));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(0.9f));
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowScale = (jfloat(10.0f));
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowIntensity = (jfloat(0.5f));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(31.0f));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(0));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_red;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(29);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotate = (frame[1].i);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawGlowRegion_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawGlowRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawGlowRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Blending(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Blending_additive;
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-glow"_j)));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(0.9f));
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowScale = (jfloat(10.0f));
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowIntensity = (jfloat(0.5f));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(31.0f));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(0));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_red;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (frame[1].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawGlowRegion_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawGlowRegion:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(1,000000e-03f)), 1)) > 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(41);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(42);
	if ((floatCompare(((jfloat)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_3:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_blending;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(45);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowScale), ((jfloat)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_alpha));
	jfloat temp2 = ((temp1 * ((jfloat)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowIntensity)) + (jfloat(1))) - ((jfloat)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_glowIntensity);
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((temp2 * temp3) * ((jfloat)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_alpha)));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp6 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	jfloat temp7 = temp6 * ((jfloat)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotateSpeed);
	sp[1].f = temp4;
	sp[2].f = temp5;
	sp[3].f = temp7;
	sp += 4;
	if (((jint)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_rotdeg_R_float])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_FCONST(0);
label_8:;
	{
	sp -= 5;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, (sp[3].f + sp[4].f));
	LINE_NUMBER(47);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(48);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(49);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawGlowRegion_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawGlowRegion:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawGlowRegion *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawGlowRegion[] {
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
	(void *) M_mindustry_world_draw_DrawGlowRegion_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawGlowRegion_load_mindustry_world_Block,
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
	{ "blending", &class_arc_graphics_Blending, offsetof(mindustry_world_draw_DrawGlowRegion, F_blending), "Larc/graphics/Blending;", 1 },
	{ "suffix", &class_java_lang_String, offsetof(mindustry_world_draw_DrawGlowRegion, F_suffix), "Ljava/lang/String;", 1 },
	{ "alpha", &class_float, offsetof(mindustry_world_draw_DrawGlowRegion, F_alpha), "F", 1 },
	{ "glowScale", &class_float, offsetof(mindustry_world_draw_DrawGlowRegion, F_glowScale), "F", 1 },
	{ "glowIntensity", &class_float, offsetof(mindustry_world_draw_DrawGlowRegion, F_glowIntensity), "F", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_world_draw_DrawGlowRegion, F_rotateSpeed), "F", 1 },
	{ "layer", &class_float, offsetof(mindustry_world_draw_DrawGlowRegion, F_layer), "F", 1 },
	{ "rotate", &class_boolean, offsetof(mindustry_world_draw_DrawGlowRegion, F_rotate), "Z", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawGlowRegion, F_color), "Larc/graphics/Color;", 1 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawGlowRegion, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawGlowRegion, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawGlowRegion_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawGlowRegion_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawGlowRegion_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawGlowRegion_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawGlowRegion_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawGlowRegion_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawGlowRegion_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawGlowRegion{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawGlowRegion",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawGlowRegion),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawGlowRegion,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawGlowRegion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawGlowRegion,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawGlowRegion = registerClass(&class_mindustry_world_draw_DrawGlowRegion);

}
