#include "mindustry/world/draw/DrawPlasma.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/draw/DrawFlame.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawPlasma.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/util/Tmp.h"
#include "mindustry/graphics/Drawf.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_mindustry_world_draw_DrawPlasma(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_draw_DrawFlame(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_draw_DrawPlasma *) object;
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
	if (self->F_suffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suffix)->clazz)->markFunction)((jobject) self->F_suffix, mark, depth + 1);
	if (self->F_plasma1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plasma1)->clazz)->markFunction)((jobject) self->F_plasma1, mark, depth + 1);
	if (self->F_plasma2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plasma2)->clazz)->markFunction)((jobject) self->F_plasma2, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawPlasma(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawFlame(ctx);
}

void init_mindustry_world_draw_DrawPlasma(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPlasma:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawPlasma(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_mindustry_world_draw_DrawFlame(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8"-plasma-"_j)));
	LINE_NUMBER(16);
	((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_plasmas = (jint(4));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd06b"_j))));
	((mindustry_world_draw_DrawPlasma *) NULL_CHECK(sp[0].o))->F_plasma1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff361b"_j))));
	((mindustry_world_draw_DrawPlasma *) NULL_CHECK(sp[0].o))->F_plasma2 = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPlasma_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPlasma:load", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_emitLight = (jint(1));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, ((jint)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_plasmas));
	((mindustry_world_draw_DrawPlasma *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(25);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_regions;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_regions;
	jint temp0 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[3].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001\u0001"_j.string, 3, sp[2].o, sp[3].o, boxInteger(ctx, (frame[2].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(25);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(28);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPlasma_drawLight_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPlasma:drawLight", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = jfloat(110.0f);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(5.0f)));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	jfloat temp6 = temp4 * temp5;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_plasma2;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_plasma1;
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(7.0f)), (jfloat(0.2f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp7);
	jfloat temp8 = jfloat(0.8f);
	jfloat temp9 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp6, sp[0].o, (temp8 * temp9));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawPlasma_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawPlasma:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(38);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_regions;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_regions;
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_width));
	sp[0].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_regions;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	jfloat temp2 = (temp0 * temp1) - (jfloat(3.0f));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat(2)) + ((jfloat((frame[2].i))) * (jfloat(1)))), ((jfloat(5.0f)) - ((jfloat((frame[2].i))) * (jfloat(0.5f)))));
	frame[3].f = (temp2 + temp3);
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_plasma1;
	sp[1].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_plasma2;
	jfloat temp4 = jfloat((frame[2].i));
	sp[2].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_regions;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (temp4 / (jfloat((((jarray) nullCheck(ctx, sp[2].o))->length)))));
	LINE_NUMBER(42);
	jfloat temp5 = jfloat(0.3f);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat(2)) + ((jfloat((frame[2].i))) * (jfloat(2)))), ((jfloat(0.3f)) + ((jfloat((frame[2].i))) * (jfloat(0.05f)))));
	jfloat temp7 = temp5 + temp6;
	jfloat temp8 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp7 * temp8));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	jfloat temp9 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp10 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawPlasma *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp11 = frame[3].f;
	jfloat temp12 = frame[3].f;
	jfloat temp13 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp9, temp10, temp11, temp12, (temp13 * ((jfloat(12.0f)) + ((jfloat((frame[2].i))) * (jfloat(6.0f))))));
	LINE_NUMBER(38);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(45);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(46);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawPlasma[] {
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
	(void *) M_mindustry_world_draw_DrawPlasma_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawPlasma_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawPlasma_load_mindustry_world_Block,
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
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawPlasma, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawPlasma, F_y), "F", 1 },
	{ "regions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_draw_DrawPlasma, F_regions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "suffix", &class_java_lang_String, offsetof(mindustry_world_draw_DrawPlasma, F_suffix), "Ljava/lang/String;", 1 },
	{ "plasmas", &class_int, offsetof(mindustry_world_draw_DrawPlasma, F_plasmas), "I", 1 },
	{ "plasma1", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawPlasma, F_plasma1), "Larc/graphics/Color;", 1 },
	{ "plasma2", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawPlasma, F_plasma2), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawPlasma, 0, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawPlasma_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawPlasma_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_world_draw_DrawPlasma_drawLight_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawPlasma_drawLight_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawPlasma_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawPlasma_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
};

Class class_mindustry_world_draw_DrawPlasma{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawPlasma",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawFlame,
		.size = sizeof(mindustry_world_draw_DrawPlasma),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawPlasma,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawPlasma,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawPlasma,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawPlasma = registerClass(&class_mindustry_world_draw_DrawPlasma);

}
