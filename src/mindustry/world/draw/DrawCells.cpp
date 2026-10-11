#include "mindustry/world/draw/DrawCells.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Rand.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/draw/DrawCells.h"
#include "mindustry/graphics/Drawf.h"

extern "C" {


void mark_mindustry_world_draw_DrawCells(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawCells *) object;
	if (self->F_middle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_middle)->clazz)->markFunction)((jobject) self->F_middle, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_particleColorFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleColorFrom)->clazz)->markFunction)((jobject) self->F_particleColorFrom, mark, depth + 1);
	if (self->F_particleColorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleColorTo)->clazz)->markFunction)((jobject) self->F_particleColorTo, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawCells(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawCells(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawCells:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawCells(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawCells *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawCells *) NULL_CHECK(sp[0].o))->F_particleColorFrom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawCells *) NULL_CHECK(sp[0].o))->F_particleColorTo = (jref) sp[1].o;
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_particles = (12);
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(4.0f));
	((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_recurrence = (jfloat(2));
	((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(1.8f));
	((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(180.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawCells_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawCells:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_middle;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_color;
	SM_mindustry_graphics_Drawf_liquid_arc_graphics_g2d_TextureRegion_float_float_float_arc_graphics_Color(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(23);
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp3, (jfloat(1,000000e-03f)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(24);
	clinit_mindustry_world_draw_DrawCells(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_id))));
	LINE_NUMBER(25);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_particles)) goto label_2;
	}
	{
	LINE_NUMBER(26);
	clinit_mindustry_world_draw_DrawCells(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	frame[3].f = (temp0 * (jfloat(999999.0f)));
	LINE_NUMBER(27);
	clinit_mindustry_world_draw_DrawCells(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_range));
	frame[4].f = temp1;
	clinit_mindustry_world_draw_DrawCells(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_range));
	frame[5].f = temp2;
	LINE_NUMBER(28);
	frame[6].f = ((jfloat(1)) - (fmodf((((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (frame[3].f)) / ((jfloat)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_lifetime)), ((jfloat)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_recurrence))));
	LINE_NUMBER(29);
	clinit_mindustry_world_draw_DrawCells(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp3 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0.1f)), (jfloat(1)));
	frame[7].f = temp3;
	LINE_NUMBER(30);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_slope_float_R_float(ctx, (frame[6].f));
	frame[8].f = temp4;
	LINE_NUMBER(32);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_particleColorFrom;
	sp[1].o = (jobject)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_particleColorTo;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[7].f));
	LINE_NUMBER(34);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp0);
	LINE_NUMBER(36);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + (frame[4].f)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + (frame[5].f)), ((frame[8].f) * ((jfloat)((mindustry_world_draw_DrawCells *) NULL_CHECK((frame[0].o)))->F_radius)));
	}
label_13:;
	{
	LINE_NUMBER(25);
	INST_IINC(2, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(41);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawCells_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawCells:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-middle"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawCells *) NULL_CHECK(sp[0].o))->F_middle = (jref) sp[1].o;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawCells[] {
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
	(void *) M_mindustry_world_draw_DrawCells_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawCells_load_mindustry_world_Block,
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
	{ "middle", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawCells, F_middle), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawCells, F_color), "Larc/graphics/Color;", 1 },
	{ "particleColorFrom", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawCells, F_particleColorFrom), "Larc/graphics/Color;", 1 },
	{ "particleColorTo", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawCells, F_particleColorTo), "Larc/graphics/Color;", 1 },
	{ "particles", &class_int, offsetof(mindustry_world_draw_DrawCells, F_particles), "I", 1 },
	{ "range", &class_float, offsetof(mindustry_world_draw_DrawCells, F_range), "F", 1 },
	{ "recurrence", &class_float, offsetof(mindustry_world_draw_DrawCells, F_recurrence), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_world_draw_DrawCells, F_radius), "F", 1 },
	{ "lifetime", &class_float, offsetof(mindustry_world_draw_DrawCells, F_lifetime), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawCells, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawCells_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawCells_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawCells_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawCells_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawCells{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawCells",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawCells),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawCells,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawCells,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawCells,
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
static bool registered_mindustry_world_draw_DrawCells = registerClass(&class_mindustry_world_draw_DrawCells);

}
