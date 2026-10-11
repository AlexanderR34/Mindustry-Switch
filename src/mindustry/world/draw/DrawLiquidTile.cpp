#include "mindustry/world/draw/DrawLiquidTile.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/liquid/LiquidBlock.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "mindustry/world/draw/DrawLiquidTile.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_world_draw_DrawLiquidTile(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawLiquidTile *) object;
	if (self->F_drawLiquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawLiquid)->clazz)->markFunction)((jobject) self->F_drawLiquid, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawLiquidTile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawLiquidTile_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawLiquidTile:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawLiquidTile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(14);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(1));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_drawLiquid = (jref) (frame[1].o);
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padding = (frame[2].f);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawLiquidTile_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawLiquidTile:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawLiquidTile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(1));
	LINE_NUMBER(20);
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_drawLiquid = (jref) (frame[1].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawLiquidTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawLiquidTile:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawLiquidTile(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(1));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawLiquidTile_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawLiquidTile:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_drawLiquid;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_drawLiquid;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp4 = (jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp5 = (jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp6 = (jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padBottom;
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp7 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	SM_mindustry_world_blocks_liquid_LiquidBlock_drawTiledFrames_int_float_float_float_float_float_float_mindustry_type_Liquid_float(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, sp[0].o, ((temp7 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_liquidCapacity)) * ((jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_alpha)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawLiquidTile_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawLiquidTile:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	if ((floatCompare(((jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padLeft), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padLeft = ((jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padding);
	}
label_1:;
	{
	LINE_NUMBER(35);
	if ((floatCompare(((jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padRight), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padRight = ((jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padding);
	}
label_2:;
	{
	LINE_NUMBER(36);
	if ((floatCompare(((jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padTop), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padTop = ((jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padding);
	}
label_3:;
	{
	LINE_NUMBER(37);
	if ((floatCompare(((jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padBottom), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padBottom = ((jfloat)((mindustry_world_draw_DrawLiquidTile *) NULL_CHECK((frame[0].o)))->F_padding);
	}
label_4:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawLiquidTile[] {
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
	(void *) M_mindustry_world_draw_DrawLiquidTile_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawLiquidTile_load_mindustry_world_Block,
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
	{ "drawLiquid", &class_mindustry_type_Liquid, offsetof(mindustry_world_draw_DrawLiquidTile, F_drawLiquid), "Lmindustry/type/Liquid;", 1 },
	{ "padding", &class_float, offsetof(mindustry_world_draw_DrawLiquidTile, F_padding), "F", 1 },
	{ "padLeft", &class_float, offsetof(mindustry_world_draw_DrawLiquidTile, F_padLeft), "F", 1 },
	{ "padRight", &class_float, offsetof(mindustry_world_draw_DrawLiquidTile, F_padRight), "F", 1 },
	{ "padTop", &class_float, offsetof(mindustry_world_draw_DrawLiquidTile, F_padTop), "F", 1 },
	{ "padBottom", &class_float, offsetof(mindustry_world_draw_DrawLiquidTile, F_padBottom), "F", 1 },
	{ "alpha", &class_float, offsetof(mindustry_world_draw_DrawLiquidTile, F_alpha), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawLiquidTile_mindustry_type_Liquid_float, 0, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawLiquidTile_mindustry_type_Liquid, 0, "(Lmindustry/type/Liquid;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawLiquidTile, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawLiquidTile_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawLiquidTile_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawLiquidTile_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawLiquidTile_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawLiquidTile{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawLiquidTile",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawLiquidTile),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawLiquidTile,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawLiquidTile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawLiquidTile,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawLiquidTile = registerClass(&class_mindustry_world_draw_DrawLiquidTile);

}
