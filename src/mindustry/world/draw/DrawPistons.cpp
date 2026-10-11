#include "mindustry/world/draw/DrawPistons.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/draw/DrawPistons.h"
#include "arc/util/Eachable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/util/Tmp.h"
#include "mindustry/entities/units/BuildPlan.h"

extern "C" {


void mark_mindustry_world_draw_DrawPistons(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawPistons *) object;
	if (self->F_suffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suffix)->clazz)->markFunction)((jobject) self->F_suffix, mark, depth + 1);
	if (self->F_region1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region1)->clazz)->markFunction)((jobject) self->F_region1, mark, depth + 1);
	if (self->F_region2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region2)->clazz)->markFunction)((jobject) self->F_region2, mark, depth + 1);
	if (self->F_regiont)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regiont)->clazz)->markFunction)((jobject) self->F_regiont, mark, depth + 1);
	if (self->F_iconRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iconRegion)->clazz)->markFunction)((jobject) self->F_iconRegion, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawPistons(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawPistons(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPistons:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawPistons(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sinMag = (jfloat(4.0f));
	((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sinScl = (jfloat(6.0f));
	((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sinOffset = (jfloat(50.0f));
	((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sideOffset = (jfloat(0));
	((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_lenOffset = (jfloat(-1.0f));
	((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_horiOffset = (jfloat(0));
	((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_angleOffset = (jfloat(0));
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-piston"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPistons_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPistons:drawPlan", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_iconRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_iconRegion;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	}
label_1:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPistons_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPistons:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sides)) goto label_2;
	}
	{
	LINE_NUMBER(27);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, ((temp0 + ((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sinOffset)) + ((((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sideOffset) * ((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sinScl)) * (jfloat((frame[2].i))))), ((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sinScl), ((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sinMag));
	frame[3].f = (temp1 + ((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_lenOffset));
	LINE_NUMBER(28);
	frame[4].f = (((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_angleOffset) + (((jfloat((frame[2].i))) * (jfloat(360.0f))) / (jfloat(((jint)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_sides)))));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_regiont;
	jint temp2 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_6;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[4].f), (jfloat(315.0f)));
	if (temp0 != 0) goto label_7;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[4].f), (jfloat(135.0f)));
	if (temp0 == 0) goto label_6;
	}
label_7:;
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_regiont;
	sp += 1;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(31);
	if ((floatCompare((frame[4].f), (jfloat(135.0f)), -1)) < 0) goto label_9;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(315.0f)), 1)) >= 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_region2;
	sp += 1;
	goto label_8;
	}
label_9:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_draw_DrawPistons *) NULL_CHECK(sp[-1].o))->F_region1;
label_8:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(33);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[4].f), (jfloat(315.0f)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(34);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = (jfloat(-1.0f));
	}
label_11:;
	{
	LINE_NUMBER(37);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f), (frame[3].f), (-((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_horiOffset)));
	LINE_NUMBER(38);
	sp[0].o = frame[5].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)) + ((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, ((temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)) + ((jfloat)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_y)), (frame[4].f));
	LINE_NUMBER(40);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = (jfloat(1));
	LINE_NUMBER(26);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPistons_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPistons:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	M_mindustry_world_draw_DrawBlock_load_mindustry_world_Block(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u00010"_j.string, 2, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[4].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[3].o, sp[4].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_draw_DrawPistons *) NULL_CHECK(sp[0].o))->F_region1 = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u00011"_j.string, 2, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[4].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[3].o, sp[4].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_draw_DrawPistons *) NULL_CHECK(sp[0].o))->F_region2 = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001-t"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawPistons *) NULL_CHECK(sp[0].o))->F_regiont = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001-icon"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawPistons *) NULL_CHECK(sp[0].o))->F_iconRegion = (jref) sp[1].o;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_draw_DrawPistons_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPistons:icons", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_draw_DrawPistons *) NULL_CHECK((frame[0].o)))->F_iconRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawPistons[] {
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
	(void *) M_mindustry_world_draw_DrawPistons_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawPistons_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawPistons_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawPistons_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
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
	{ "sinMag", &class_float, offsetof(mindustry_world_draw_DrawPistons, F_sinMag), "F", 1 },
	{ "sinScl", &class_float, offsetof(mindustry_world_draw_DrawPistons, F_sinScl), "F", 1 },
	{ "sinOffset", &class_float, offsetof(mindustry_world_draw_DrawPistons, F_sinOffset), "F", 1 },
	{ "sideOffset", &class_float, offsetof(mindustry_world_draw_DrawPistons, F_sideOffset), "F", 1 },
	{ "lenOffset", &class_float, offsetof(mindustry_world_draw_DrawPistons, F_lenOffset), "F", 1 },
	{ "horiOffset", &class_float, offsetof(mindustry_world_draw_DrawPistons, F_horiOffset), "F", 1 },
	{ "angleOffset", &class_float, offsetof(mindustry_world_draw_DrawPistons, F_angleOffset), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawPistons, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawPistons, F_y), "F", 1 },
	{ "sides", &class_int, offsetof(mindustry_world_draw_DrawPistons, F_sides), "I", 1 },
	{ "suffix", &class_java_lang_String, offsetof(mindustry_world_draw_DrawPistons, F_suffix), "Ljava/lang/String;", 1 },
	{ "region1", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawPistons, F_region1), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "region2", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawPistons, F_region2), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "regiont", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawPistons, F_regiont), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "iconRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawPistons, F_iconRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawPistons, 0, "()V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_world_draw_DrawPistons_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_draw_DrawPistons_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawPistons_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawPistons_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawPistons_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawPistons_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_draw_DrawPistons_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_draw_DrawPistons_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;", 1 },
};

Class class_mindustry_world_draw_DrawPistons{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawPistons",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawPistons),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawPistons,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawPistons,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawPistons,
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
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawPistons = registerClass(&class_mindustry_world_draw_DrawPistons);

}
