#include "mindustry/world/draw/DrawHeatInput.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/util/Eachable.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/blocks/heat/HeatConsumer.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/draw/DrawHeatInput.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_mindustry_world_draw_DrawHeatInput(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawHeatInput *) object;
	if (self->F_suffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suffix)->clazz)->markFunction)((jobject) self->F_suffix, mark, depth + 1);
	if (self->F_heatColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heatColor)->clazz)->markFunction)((jobject) self->F_heatColor, mark, depth + 1);
	if (self->F_heat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heat)->clazz)->markFunction)((jobject) self->F_heat, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawHeatInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawHeatInput_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatInput:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawHeatInput(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-heat"_j)));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(0.22f)), (jfloat(0.22f)), (jfloat(0.8f)));
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heatPulse = (jfloat(0.3f));
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heatPulseScl = (jfloat(10.0f));
	LINE_NUMBER(22);
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (frame[1].o);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawHeatInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatInput:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawHeatInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-heat"_j)));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(0.22f)), (jfloat(0.22f)), (jfloat(0.8f)));
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heatPulse = (jfloat(0.3f));
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heatPulseScl = (jfloat(10.0f));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawHeatInput_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatInput:drawPlan", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawHeatInput_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatInput:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(31.0f)));
	LINE_NUMBER(36);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_heat_HeatConsumer)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_heat_HeatConsumer, (frame[1].o)));
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_mindustry_world_blocks_heat_HeatConsumer_sideHeat_R_Array1_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_heat_HeatConsumer, INDEX_mindustry_world_blocks_heat_HeatConsumer_sideHeat_R_Array1_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(38);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(39);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))), (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(40);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heatColor;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i));
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_heat_HeatConsumer_heatRequirement_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_heat_HeatConsumer, INDEX_mindustry_world_blocks_heat_HeatConsumer_heatRequirement_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = temp0 / temp1;
	sp[1].o = (jobject)((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heatColor;
	jfloat temp3 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a;
	jfloat temp4 = (jfloat(1)) - ((jfloat)((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heatPulse);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, ((jfloat)((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heatPulseScl), ((jfloat)((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heatPulse));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (temp2 * (temp3 * (temp4 + temp5))));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_heat;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat((frame[4].i))) * (jfloat(90.0f))));
	LINE_NUMBER(43);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(44);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_7:;
	{
	LINE_NUMBER(38);
	INST_IINC(4, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(48);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(30.0f)));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawHeatInput_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawHeatInput:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawHeatInput *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawHeatInput *) NULL_CHECK(sp[0].o))->F_heat = (jref) sp[1].o;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawHeatInput[] {
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
	(void *) M_mindustry_world_draw_DrawHeatInput_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawHeatInput_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawHeatInput_load_mindustry_world_Block,
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
	{ "suffix", &class_java_lang_String, offsetof(mindustry_world_draw_DrawHeatInput, F_suffix), "Ljava/lang/String;", 1 },
	{ "heatColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawHeatInput, F_heatColor), "Larc/graphics/Color;", 1 },
	{ "heatPulse", &class_float, offsetof(mindustry_world_draw_DrawHeatInput, F_heatPulse), "F", 1 },
	{ "heatPulseScl", &class_float, offsetof(mindustry_world_draw_DrawHeatInput, F_heatPulseScl), "F", 1 },
	{ "heat", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawHeatInput, F_heat), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawHeatInput_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawHeatInput, 0, "()V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_world_draw_DrawHeatInput_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_draw_DrawHeatInput_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawHeatInput_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawHeatInput_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawHeatInput_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawHeatInput_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawHeatInput{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawHeatInput",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawHeatInput),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawHeatInput,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawHeatInput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawHeatInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawHeatInput = registerClass(&class_mindustry_world_draw_DrawHeatInput);

}
