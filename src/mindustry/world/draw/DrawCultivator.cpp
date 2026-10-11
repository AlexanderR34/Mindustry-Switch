#include "mindustry/world/draw/DrawCultivator.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Rand.h"
#include "mindustry/world/draw/DrawCultivator.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/graphics/Drawf.h"

extern "C" {


void mark_mindustry_world_draw_DrawCultivator(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawCultivator *) object;
	if (self->F_plantColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plantColor)->clazz)->markFunction)((jobject) self->F_plantColor, mark, depth + 1);
	if (self->F_plantColorLight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plantColorLight)->clazz)->markFunction)((jobject) self->F_plantColorLight, mark, depth + 1);
	if (self->F_bottomColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bottomColor)->clazz)->markFunction)((jobject) self->F_bottomColor, mark, depth + 1);
	if (self->F_middle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_middle)->clazz)->markFunction)((jobject) self->F_middle, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawCultivator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawCultivator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawCultivator:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawCultivator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"5541b1"_j))));
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK(sp[0].o))->F_plantColor = (jref) sp[1].o;
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7457ce"_j))));
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK(sp[0].o))->F_plantColorLight = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"474747"_j))));
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK(sp[0].o))->F_bottomColor = (jref) sp[1].o;
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_bubbles = (12);
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_sides = (8);
	LINE_NUMBER(17);
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_strokeMin = (jfloat(0.2f));
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_spread = (jfloat(3.0f));
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_timeScl = (jfloat(70.0f));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_recurrence = (jfloat(6.0f));
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(3.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawCultivator_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawCultivator:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_middle;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_plantColor;
	SM_mindustry_graphics_Drawf_liquid_arc_graphics_g2d_TextureRegion_float_float_float_arc_graphics_Color(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_bottomColor;
	sp[1].o = (jobject)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_plantColorLight;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp3);
	LINE_NUMBER(28);
	clinit_mindustry_world_draw_DrawCultivator(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jint temp4 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(temp4)));
	LINE_NUMBER(29);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_bubbles)) goto label_5;
	}
	{
	LINE_NUMBER(30);
	clinit_mindustry_world_draw_DrawCultivator(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_spread));
	frame[3].f = temp0;
	clinit_mindustry_world_draw_DrawCultivator(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_spread));
	frame[4].f = temp1;
	LINE_NUMBER(31);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_timeScl);
	clinit_mindustry_world_draw_DrawCultivator(ctx);
	sp[0].o = (jobject)SF_mindustry_world_draw_DrawBlock_rand;
	jfloat temp4 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_recurrence));
	frame[5].f = (temp2 - (fmodf((temp3 + temp4), ((jfloat)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_recurrence))));
	LINE_NUMBER(33);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(34);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * ((frame[5].f) + ((jfloat)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_strokeMin))));
	LINE_NUMBER(35);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float(ctx, ((((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + (frame[3].f)) + ((jfloat)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_x)), ((((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + (frame[4].f)) + ((jfloat)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_y)), ((jint)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_sides), (((jfloat(1)) - (frame[5].f)) * ((jfloat)((mindustry_world_draw_DrawCultivator *) NULL_CHECK((frame[0].o)))->F_radius)));
	}
label_10:;
	{
	LINE_NUMBER(29);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(39);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawCultivator_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawCultivator:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-middle"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawCultivator *) NULL_CHECK(sp[0].o))->F_middle = (jref) sp[1].o;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawCultivator[] {
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
	(void *) M_mindustry_world_draw_DrawCultivator_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawCultivator_load_mindustry_world_Block,
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
	{ "plantColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawCultivator, F_plantColor), "Larc/graphics/Color;", 1 },
	{ "plantColorLight", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawCultivator, F_plantColorLight), "Larc/graphics/Color;", 1 },
	{ "bottomColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawCultivator, F_bottomColor), "Larc/graphics/Color;", 1 },
	{ "bubbles", &class_int, offsetof(mindustry_world_draw_DrawCultivator, F_bubbles), "I", 1 },
	{ "sides", &class_int, offsetof(mindustry_world_draw_DrawCultivator, F_sides), "I", 1 },
	{ "strokeMin", &class_float, offsetof(mindustry_world_draw_DrawCultivator, F_strokeMin), "F", 1 },
	{ "spread", &class_float, offsetof(mindustry_world_draw_DrawCultivator, F_spread), "F", 1 },
	{ "timeScl", &class_float, offsetof(mindustry_world_draw_DrawCultivator, F_timeScl), "F", 1 },
	{ "recurrence", &class_float, offsetof(mindustry_world_draw_DrawCultivator, F_recurrence), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_world_draw_DrawCultivator, F_radius), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawCultivator, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawCultivator, F_y), "F", 1 },
	{ "middle", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawCultivator, F_middle), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawCultivator, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawCultivator_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawCultivator_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawCultivator_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawCultivator_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawCultivator{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawCultivator",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawCultivator),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawCultivator,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawCultivator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawCultivator,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawCultivator = registerClass(&class_mindustry_world_draw_DrawCultivator);

}
