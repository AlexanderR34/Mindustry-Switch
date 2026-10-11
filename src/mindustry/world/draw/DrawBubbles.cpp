#include "mindustry/world/draw/DrawBubbles.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/math/Rand.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/draw/DrawBubbles.h"
#include "mindustry/graphics/Lod.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"

extern "C" {


void mark_mindustry_world_draw_DrawBubbles(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawBubbles *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawBubbles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawBubbles_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawBubbles:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawBubbles(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7457ce"_j))));
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_amount = (12);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_sides = (8);
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_strokeMin = (jfloat(0.2f));
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_spread = (jfloat(3.0f));
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_timeScl = (jfloat(30.0f));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_recurrence = (jfloat(6.0f));
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(3.0f));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_fill = (jint(0));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[1].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawBubbles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawBubbles:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawBubbles(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7457ce"_j))));
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_amount = (12);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_sides = (8);
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_strokeMin = (jfloat(0.2f));
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_spread = (jfloat(3.0f));
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_timeScl = (jfloat(30.0f));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_recurrence = (jfloat(6.0f));
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(3.0f));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_fill = (jint(0));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawBubbles_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawBubbles:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp0, (jfloat(1,000000e-03f)), 1)) <= 0) goto label_1;
	}
	clinit_mindustry_graphics_Lod(ctx);
	(sp++)->i = SF_mindustry_graphics_Lod_l1;
	if ((--sp)->i != 0) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(29);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 * (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha1)));
	LINE_NUMBER(31);
	clinit_mindustry_world_draw_DrawBubbles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_id))));
	LINE_NUMBER(32);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_amount)) goto label_7;
	}
	{
	LINE_NUMBER(33);
	clinit_mindustry_world_draw_DrawBubbles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_spread));
	frame[3].f = temp0;
	clinit_mindustry_world_draw_DrawBubbles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_spread));
	frame[4].f = temp1;
	LINE_NUMBER(34);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_timeScl);
	clinit_mindustry_world_draw_DrawBubbles(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp4 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_recurrence));
	frame[5].f = (temp2 - (fmodf((temp3 + temp4), ((jfloat)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_recurrence))));
	LINE_NUMBER(36);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(37);
	frame[6].f = (((jfloat(1)) - (frame[5].f)) * ((jfloat)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_radius));
	LINE_NUMBER(38);
	if (((jint)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_fill) == 0) goto label_15;
	}
	{
	LINE_NUMBER(39);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + (frame[3].f)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + (frame[4].f)), (frame[6].f));
	goto label_12;
	}
label_15:;
	{
	LINE_NUMBER(41);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * ((frame[5].f) + ((jfloat)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_strokeMin))));
	LINE_NUMBER(42);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + (frame[3].f)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + (frame[4].f)), ((jint)((mindustry_world_draw_DrawBubbles *) NULL_CHECK((frame[0].o)))->F_sides), (frame[6].f));
	}
label_12:;
	{
	LINE_NUMBER(32);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(47);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawBubbles[] {
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
	(void *) M_mindustry_world_draw_DrawBubbles_draw_mindustry_gen_Building,
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
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawBubbles, F_color), "Larc/graphics/Color;", 1 },
	{ "amount", &class_int, offsetof(mindustry_world_draw_DrawBubbles, F_amount), "I", 1 },
	{ "sides", &class_int, offsetof(mindustry_world_draw_DrawBubbles, F_sides), "I", 1 },
	{ "strokeMin", &class_float, offsetof(mindustry_world_draw_DrawBubbles, F_strokeMin), "F", 1 },
	{ "spread", &class_float, offsetof(mindustry_world_draw_DrawBubbles, F_spread), "F", 1 },
	{ "timeScl", &class_float, offsetof(mindustry_world_draw_DrawBubbles, F_timeScl), "F", 1 },
	{ "recurrence", &class_float, offsetof(mindustry_world_draw_DrawBubbles, F_recurrence), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_world_draw_DrawBubbles, F_radius), "F", 1 },
	{ "fill", &class_boolean, offsetof(mindustry_world_draw_DrawBubbles, F_fill), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawBubbles_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawBubbles, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawBubbles_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawBubbles_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
};

Class class_mindustry_world_draw_DrawBubbles{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawBubbles",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawBubbles),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawBubbles,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawBubbles,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawBubbles,
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
static bool registered_mindustry_world_draw_DrawBubbles = registerClass(&class_mindustry_world_draw_DrawBubbles);

}
