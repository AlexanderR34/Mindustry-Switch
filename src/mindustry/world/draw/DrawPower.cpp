#include "mindustry/world/draw/DrawPower.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/draw/DrawPower.h"
#include "arc/util/Eachable.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/modules/PowerModule.h"

extern "C" {


void mark_mindustry_world_draw_DrawPower(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawPower *) object;
	if (self->F_emptyRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_emptyRegion)->clazz)->markFunction)((jobject) self->F_emptyRegion, mark, depth + 1);
	if (self->F_fullRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fullRegion)->clazz)->markFunction)((jobject) self->F_fullRegion, mark, depth + 1);
	if (self->F_suffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suffix)->clazz)->markFunction)((jobject) self->F_suffix, mark, depth + 1);
	if (self->F_emptyLightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_emptyLightColor)->clazz)->markFunction)((jobject) self->F_emptyLightColor, mark, depth + 1);
	if (self->F_fullLightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fullLightColor)->clazz)->markFunction)((jobject) self->F_fullLightColor, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawPower(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawPower(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPower:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawPower(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-power"_j)));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_drawPlan = (jint(1));
	LINE_NUMBER(19);
	((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_mixcol = (jint(1));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f8c266"_j))));
	((mindustry_world_draw_DrawPower *) NULL_CHECK(sp[0].o))->F_emptyLightColor = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"fb9567"_j))));
	((mindustry_world_draw_DrawPower *) NULL_CHECK(sp[0].o))->F_fullLightColor = (jref) sp[1].o;
	LINE_NUMBER(24);
	((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawPower_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPower:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawPower(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-power"_j)));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_drawPlan = (jint(1));
	LINE_NUMBER(19);
	((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_mixcol = (jint(1));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f8c266"_j))));
	((mindustry_world_draw_DrawPower *) NULL_CHECK(sp[0].o))->F_emptyLightColor = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"fb9567"_j))));
	((mindustry_world_draw_DrawPower *) NULL_CHECK(sp[0].o))->F_fullLightColor = (jref) sp[1].o;
	LINE_NUMBER(24);
	((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	LINE_NUMBER(30);
	((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (frame[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPower_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPower:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(36);
	if ((floatCompare(((jfloat)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_2:;
	{
	LINE_NUMBER(37);
	if (((jint)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_mixcol) == 0) goto label_3;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_emptyLightColor;
	sp[1].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_fullLightColor;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[2].o))->F_status));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_emptyRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_emptyRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(42);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = 8;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, temp0, temp1, ((((jfloat((temp2 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) / (jfloat(2))) - (jfloat(1))) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl)));
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_emptyRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status));
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_fullRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_8:;
	{
	LINE_NUMBER(49);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(50);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPower_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPower:drawPlan", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(55);
	if (((jint)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_drawPlan) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_mixcol) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_emptyRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_emptyRegion;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_draw_DrawPower_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPower:icons", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	if (((jint)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_mixcol) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_emptyRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_emptyRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
	INST_ANEWARRAY(&class_arc_graphics_g2d_TextureRegion);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPower_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPower:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	if (((jint)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_mixcol) == 0) goto label_1;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawPower *) NULL_CHECK(sp[0].o))->F_emptyRegion = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001-empty"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawPower *) NULL_CHECK(sp[0].o))->F_emptyRegion = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawPower *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001-full"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawPower *) NULL_CHECK(sp[0].o))->F_fullRegion = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawPower[] {
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
	(void *) M_mindustry_world_draw_DrawPower_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawPower_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawPower_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawPower_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
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
	{ "emptyRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawPower, F_emptyRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "fullRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawPower, F_fullRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "suffix", &class_java_lang_String, offsetof(mindustry_world_draw_DrawPower, F_suffix), "Ljava/lang/String;", 1 },
	{ "drawPlan", &class_boolean, offsetof(mindustry_world_draw_DrawPower, F_drawPlan), "Z", 1 },
	{ "mixcol", &class_boolean, offsetof(mindustry_world_draw_DrawPower, F_mixcol), "Z", 1 },
	{ "emptyLightColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawPower, F_emptyLightColor), "Larc/graphics/Color;", 1 },
	{ "fullLightColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawPower, F_fullLightColor), "Larc/graphics/Color;", 1 },
	{ "layer", &class_float, offsetof(mindustry_world_draw_DrawPower, F_layer), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawPower, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawPower_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawPower_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawPower_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_world_draw_DrawPower_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_draw_DrawPower_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_draw_DrawPower_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_draw_DrawPower_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawPower_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawPower_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawPower{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawPower",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawPower),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawPower,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawPower,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawPower,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawPower = registerClass(&class_mindustry_world_draw_DrawPower);

}
