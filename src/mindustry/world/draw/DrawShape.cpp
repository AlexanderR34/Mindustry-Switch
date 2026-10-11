#include "mindustry/world/draw/DrawShape.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/draw/DrawShape.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Fill.h"

extern "C" {


void mark_mindustry_world_draw_DrawShape(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawShape *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawShape(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawShape(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawShape:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawShape(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawShape *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(10);
	((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(11);
	((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(2));
	((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_timeScl = (jfloat(1));
	((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_useWarmupRadius = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawShape_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawShape:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(17);
	if ((floatCompare(((jfloat)((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_2:;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(20);
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp1 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_y);
	jint temp2 = (jint)((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_sides;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].i = temp2;
	sp += 3;
	if (((jint)((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_useWarmupRadius) == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_radius;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	jfloat temp2 = temp0 * temp1;
	sp[0].f = temp2;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_world_draw_DrawShape *) NULL_CHECK(sp[-1].o))->F_radius;
label_5:;
	{
	sp -= 4;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, sp[0].f, sp[1].f, sp[2].i, sp[3].f, (temp0 * ((jfloat)((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_timeScl)));
	LINE_NUMBER(22);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(23);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawShape[] {
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
	(void *) M_mindustry_world_draw_DrawShape_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawBlock_load_mindustry_world_Block,
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
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawShape, F_color), "Larc/graphics/Color;", 1 },
	{ "sides", &class_int, offsetof(mindustry_world_draw_DrawShape, F_sides), "I", 1 },
	{ "radius", &class_float, offsetof(mindustry_world_draw_DrawShape, F_radius), "F", 1 },
	{ "timeScl", &class_float, offsetof(mindustry_world_draw_DrawShape, F_timeScl), "F", 1 },
	{ "layer", &class_float, offsetof(mindustry_world_draw_DrawShape, F_layer), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawShape, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawShape, F_y), "F", 1 },
	{ "useWarmupRadius", &class_boolean, offsetof(mindustry_world_draw_DrawShape, F_useWarmupRadius), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawShape, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawShape_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawShape_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
};

Class class_mindustry_world_draw_DrawShape{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawShape",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawShape),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawShape,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawShape,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawShape,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawShape = registerClass(&class_mindustry_world_draw_DrawShape);

}
