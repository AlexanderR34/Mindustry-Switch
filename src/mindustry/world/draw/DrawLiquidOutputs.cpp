#include "mindustry/world/draw/DrawLiquidOutputs.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/blocks/production/GenericCrafter.h"
#include "arc/util/Eachable.h"
#include "mindustry/type/LiquidStack.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/draw/DrawLiquidOutputs.h"

extern "C" {


void mark_mindustry_world_draw_DrawLiquidOutputs(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawLiquidOutputs *) object;
	if (self->F_liquidOutputRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquidOutputRegions)->clazz)->markFunction)((jobject) self->F_liquidOutputRegions, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawLiquidOutputs(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawLiquidOutputs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawLiquidOutputs:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawLiquidOutputs(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawLiquidOutputs_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawLiquidOutputs:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_production_GenericCrafter, sp[0].o));
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[2].o)))->F_outputLiquids;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(20);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[2].o)))->F_outputLiquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(21);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[2].o)))->F_liquidOutputDirections;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[2].o)))->F_liquidOutputDirections;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ICONST(-1);
label_7:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(22);
	if ((frame[4].i) == (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(23);
	frame[5].i = (((frame[4].i) + ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_rotation)) % (jint(4)));
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_world_draw_DrawLiquidOutputs *) NULL_CHECK((frame[0].o)))->F_liquidOutputRegions;
	sp += 1;
	if ((frame[5].i) <= (jint(1))) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, sp[1].i)), (frame[3].i))), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(((frame[5].i) * (90)))));
	}
label_9:;
	{
	LINE_NUMBER(20);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawLiquidOutputs_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawLiquidOutputs:drawPlan", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(31);
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_production_GenericCrafter, (frame[1].o)));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[4].o)))->F_outputLiquids;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(34);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[4].o)))->F_outputLiquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(35);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[4].o)))->F_liquidOutputDirections;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[4].o)))->F_liquidOutputDirections;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ICONST(-1);
label_7:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(36);
	if ((frame[6].i) == (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(37);
	frame[7].i = (((frame[6].i) + ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation)) % (jint(4)));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_world_draw_DrawLiquidOutputs *) NULL_CHECK((frame[0].o)))->F_liquidOutputRegions;
	sp += 1;
	if ((frame[7].i) <= (jint(1))) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, sp[1].i)), (frame[5].i));
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, (jfloat(((frame[7].i) * (90)))));
	}
label_9:;
	{
	LINE_NUMBER(34);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawLiquidOutputs_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawLiquidOutputs:load", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_mindustry_world_draw_DrawLiquidOutputs_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_draw_DrawLiquidOutputs_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[2].o)))->F_outputLiquids;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	jint temp0 = jint(2);
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[2].o)))->F_outputLiquids;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_graphics_g2d_TextureRegion, {temp0, (((jarray) nullCheck(ctx, sp[1].o))->length)});
	((mindustry_world_draw_DrawLiquidOutputs *) NULL_CHECK(sp[0].o))->F_liquidOutputRegions = (jref) sp[1].o;
	LINE_NUMBER(50);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[2].o)))->F_outputLiquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(51);
	frame[4].i = (jint(1));
	}
label_7:;
	{
	if ((frame[4].i) > (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_world_draw_DrawLiquidOutputs *) NULL_CHECK((frame[0].o)))->F_liquidOutputRegions;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[4].i) - (jint(1))));
	jint temp0 = frame[3].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK((frame[2].o)))->F_outputLiquids;
	sp[3].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[3].i)))))->F_liquid;
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[3].o))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001-output\u0001"_j.string, 3, sp[2].o, sp[3].o, boxInteger(ctx, (frame[4].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(51);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(50);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawLiquidOutputs[] {
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
	(void *) M_mindustry_world_draw_DrawLiquidOutputs_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawLiquidOutputs_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawLiquidOutputs_load_mindustry_world_Block,
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
	{ "liquidOutputRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 2), offsetof(mindustry_world_draw_DrawLiquidOutputs, F_liquidOutputRegions), "[[Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawLiquidOutputs, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawLiquidOutputs_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawLiquidOutputs_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_world_draw_DrawLiquidOutputs_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_draw_DrawLiquidOutputs_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawLiquidOutputs_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawLiquidOutputs_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawLiquidOutputs{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawLiquidOutputs",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawLiquidOutputs),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawLiquidOutputs,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawLiquidOutputs,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawLiquidOutputs,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawLiquidOutputs = registerClass(&class_mindustry_world_draw_DrawLiquidOutputs);

}
