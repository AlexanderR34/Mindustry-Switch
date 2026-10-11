#include "mindustry/world/draw/DrawFlame.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/draw/DrawFlame.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/graphics/Drawf.h"

extern "C" {


void mark_mindustry_world_draw_DrawFlame(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawFlame *) object;
	if (self->F_flameColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flameColor)->clazz)->markFunction)((jobject) self->F_flameColor, mark, depth + 1);
	if (self->F_top)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_top)->clazz)->markFunction)((jobject) self->F_top, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawFlame(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawFlame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawFlame:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawFlame(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffc999"_j))));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK(sp[0].o))->F_flameColor = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightRadius = (jfloat(60.0f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightAlpha = (jfloat(0.65f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightSinScl = (jfloat(10.0f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightSinMag = (jfloat(5.0f));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadius = (jfloat(3.0f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusIn = (jfloat(1.9f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusScl = (jfloat(5.0f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusMag = (jfloat(2));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusInMag = (jfloat(1));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameX = (jfloat(0));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameY = (jfloat(0));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawFlame_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawFlame:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawFlame(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffc999"_j))));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK(sp[0].o))->F_flameColor = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightRadius = (jfloat(60.0f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightAlpha = (jfloat(0.65f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightSinScl = (jfloat(10.0f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightSinMag = (jfloat(5.0f));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadius = (jfloat(3.0f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusIn = (jfloat(1.9f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusScl = (jfloat(5.0f));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusMag = (jfloat(2));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusInMag = (jfloat(1));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameX = (jfloat(0));
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameY = (jfloat(0));
	LINE_NUMBER(23);
	((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameColor = (jref) (frame[1].o);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawFlame_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawFlame:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_emitLight = (jint(1));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawFlame *) NULL_CHECK(sp[0].o))->F_top = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_lightClipSize), (((((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightRadius) + ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightSinMag)) * (jfloat(2))) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size)))));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightClipSize = temp0;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawFlame_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawFlame:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameColor;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(36);
	frame[2].f = (jfloat(0.3f));
	LINE_NUMBER(37);
	frame[3].f = (jfloat(0.06f));
	LINE_NUMBER(38);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(0.1f)));
	frame[4].f = temp0;
	LINE_NUMBER(40);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.01f)));
	LINE_NUMBER(42);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp1);
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_top;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(45);
	jfloat temp2 = (jfloat(1)) - (frame[2].f);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(8.0f)), (frame[2].f));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (frame[3].f));
	jfloat temp6 = (temp4 + temp5) - (frame[3].f);
	jfloat temp7 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp6 * temp7));
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameColor;
	SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(48);
	jfloat temp8 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameX);
	jfloat temp9 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameY);
	jfloat temp10 = (jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadius;
	jfloat temp11 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusScl), ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusMag));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp8, temp9, ((temp10 + temp11) + (frame[4].f)));
	LINE_NUMBER(49);
	jfloat temp12 = jfloat(1);
	jfloat temp13 = jfloat(1);
	jfloat temp14 = jfloat(1);
	jfloat temp15 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp12, temp13, temp14, temp15);
	LINE_NUMBER(50);
	jfloat temp16 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameX);
	jfloat temp17 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameY);
	jfloat temp18 = (jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusIn;
	jfloat temp19 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusScl), ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameRadiusInMag));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp16, temp17, ((temp18 + temp19) + (frame[4].f)));
	LINE_NUMBER(52);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_1:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawFlame_drawLight_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawFlame:drawLight", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameX);
	jfloat temp1 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameY);
	jfloat temp2 = (jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightRadius;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightSinScl), ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightSinMag));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	jfloat temp6 = temp4 * temp5;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jfloat temp7 = temp6 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)));
	sp[0].o = (jobject)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_flameColor;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp7, sp[0].o, ((jfloat)((mindustry_world_draw_DrawFlame *) NULL_CHECK((frame[0].o)))->F_lightAlpha));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawFlame[] {
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
	(void *) M_mindustry_world_draw_DrawFlame_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawFlame_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawFlame_load_mindustry_world_Block,
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
	{ "flameColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawFlame, F_flameColor), "Larc/graphics/Color;", 1 },
	{ "top", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawFlame, F_top), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "lightRadius", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_lightRadius), "F", 1 },
	{ "lightAlpha", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_lightAlpha), "F", 1 },
	{ "lightSinScl", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_lightSinScl), "F", 1 },
	{ "lightSinMag", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_lightSinMag), "F", 1 },
	{ "flameRadius", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_flameRadius), "F", 1 },
	{ "flameRadiusIn", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_flameRadiusIn), "F", 1 },
	{ "flameRadiusScl", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_flameRadiusScl), "F", 1 },
	{ "flameRadiusMag", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_flameRadiusMag), "F", 1 },
	{ "flameRadiusInMag", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_flameRadiusInMag), "F", 1 },
	{ "flameX", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_flameX), "F", 1 },
	{ "flameY", &class_float, offsetof(mindustry_world_draw_DrawFlame, F_flameY), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawFlame, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawFlame_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawFlame_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawFlame_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawFlame_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawFlame_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_world_draw_DrawFlame_drawLight_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawFlame_drawLight_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
};

Class class_mindustry_world_draw_DrawFlame{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawFlame",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawFlame),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawFlame,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawFlame,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawFlame,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawFlame = registerClass(&class_mindustry_world_draw_DrawFlame);

}
