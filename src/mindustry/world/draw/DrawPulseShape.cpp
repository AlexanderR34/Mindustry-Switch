#include "mindustry/world/draw/DrawPulseShape.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Time.h"
#include "arc/math/geom/Point2.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Building.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/world/draw/DrawPulseShape.h"
#include "java/lang/Object.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/math/geom/Geometry.h"

extern "C" {


void mark_mindustry_world_draw_DrawPulseShape(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawPulseShape *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawPulseShape(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawPulseShape_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPulseShape:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawPulseShape(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(20);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(2));
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_timeScl = (jfloat(100.0f));
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_minStroke = (jfloat(0.2f));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_radiusScl = (jfloat(1));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_square = (jint(1));
	LINE_NUMBER(21);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_square = (frame[1].i);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawPulseShape(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPulseShape:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawPulseShape(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(2));
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_timeScl = (jfloat(100.0f));
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_minStroke = (jfloat(0.2f));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_radiusScl = (jfloat(1));
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_square = (jint(1));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPulseShape_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPulseShape:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(30);
	if ((floatCompare(((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_2:;
	{
	LINE_NUMBER(32);
	frame[3].f = ((jfloat(1)) - (fmodf(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_timeScl)), (jfloat(1)))));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	frame[4].f = (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) * ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_radiusScl));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(36);
	jfloat temp0 = (((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_stroke) * (frame[3].f)) + ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_minStroke);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * temp1));
	LINE_NUMBER(38);
	if (((jint)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_square) == 0) goto label_7;
	}
	{
	LINE_NUMBER(39);
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp1 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat(1)) + (((jfloat(1)) - (frame[3].f)) * (frame[4].f))), (frame[4].f));
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, temp0, temp1, temp2);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(41);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat(2)) - ((frame[3].f) * (jfloat(2)))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (((temp1 * (frame[4].f)) - (frame[3].f)) - (jfloat(0.2f))));
	frame[5].f = temp2;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat(0.5f)) - (frame[3].f)));
	frame[6].f = ((temp3 * (frame[4].f)) * (jfloat(2)));
	LINE_NUMBER(42);
	SM_arc_graphics_g2d_Lines_beginLine(ctx);
	LINE_NUMBER(43);
	frame[7].i = (jint(0));
	}
label_13:;
	{
	if ((frame[7].i) >= (jint(4))) goto label_14;
	}
	{
	LINE_NUMBER(44);
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_x);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[7].i));
	jfloat temp1 = temp0 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x))) * (frame[5].f));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[7].i));
	jfloat temp2 = temp1 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y))) * (frame[6].f));
	jfloat temp3 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_y);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[7].i));
	jfloat temp4 = temp3 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y))) * (frame[5].f));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[7].i));
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, temp2, (temp4 - ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x))) * (frame[6].f))));
	LINE_NUMBER(45);
	if ((floatCompare((frame[3].f), (jfloat(0.5f)), 1)) >= 0) goto label_17;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_x);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[7].i));
	jfloat temp1 = temp0 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x))) * (frame[5].f));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[7].i));
	jfloat temp2 = temp1 - ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y))) * (frame[6].f));
	jfloat temp3 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawPulseShape *) NULL_CHECK((frame[0].o)))->F_y);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[7].i));
	jfloat temp4 = temp3 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y))) * (frame[5].f));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[7].i));
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, temp2, (temp4 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x))) * (frame[6].f))));
	}
label_17:;
	{
	LINE_NUMBER(43);
	INST_IINC(7, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(47);
	SM_arc_graphics_g2d_Lines_endLine_boolean(ctx, (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(52);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(53);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawPulseShape[] {
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
	(void *) M_mindustry_world_draw_DrawPulseShape_draw_mindustry_gen_Building,
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
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawPulseShape, F_color), "Larc/graphics/Color;", 1 },
	{ "stroke", &class_float, offsetof(mindustry_world_draw_DrawPulseShape, F_stroke), "F", 1 },
	{ "timeScl", &class_float, offsetof(mindustry_world_draw_DrawPulseShape, F_timeScl), "F", 1 },
	{ "minStroke", &class_float, offsetof(mindustry_world_draw_DrawPulseShape, F_minStroke), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawPulseShape, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawPulseShape, F_y), "F", 1 },
	{ "radiusScl", &class_float, offsetof(mindustry_world_draw_DrawPulseShape, F_radiusScl), "F", 1 },
	{ "layer", &class_float, offsetof(mindustry_world_draw_DrawPulseShape, F_layer), "F", 1 },
	{ "square", &class_boolean, offsetof(mindustry_world_draw_DrawPulseShape, F_square), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawPulseShape_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawPulseShape, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawPulseShape_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawPulseShape_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
};

Class class_mindustry_world_draw_DrawPulseShape{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawPulseShape",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawPulseShape),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawPulseShape,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawPulseShape,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawPulseShape,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawPulseShape = registerClass(&class_mindustry_world_draw_DrawPulseShape);

}
