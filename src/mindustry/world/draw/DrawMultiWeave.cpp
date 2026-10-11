#include "mindustry/world/draw/DrawMultiWeave.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/draw/DrawMultiWeave.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_mindustry_world_draw_DrawMultiWeave(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawMultiWeave *) object;
	if (self->F_weave)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weave)->clazz)->markFunction)((jobject) self->F_weave, mark, depth + 1);
	if (self->F_glow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glow)->clazz)->markFunction)((jobject) self->F_glow, mark, depth + 1);
	if (self->F_glowColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glowColor)->clazz)->markFunction)((jobject) self->F_glowColor, mark, depth + 1);
	if (self->F_weaveColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weaveColor)->clazz)->markFunction)((jobject) self->F_weaveColor, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawMultiWeave(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawMultiWeave(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawMultiWeave:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawMultiWeave(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(1));
	((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_rotateSpeed2 = (jfloat(-0.9f));
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_fadeWeave = (jint(0));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(0.4f)), (jfloat(0.4f)), (jfloat(0.8f)));
	((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK(sp[0].o))->F_glowColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK(sp[0].o))->F_weaveColor = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_pulse = (jfloat(0.3f));
	((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_pulseScl = (jfloat(10.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawMultiWeave_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawMultiWeave:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_weaveColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(20);
	if (((jint)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_fadeWeave) == 0) goto label_2;
	}
	{
	LINE_NUMBER(21);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp0);
	}
label_2:;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_weave;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, (temp2 * ((jfloat)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_rotateSpeed)));
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_weave;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp5 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp3, temp4, ((temp5 * ((jfloat)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_rotateSpeed)) * ((jfloat)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_rotateSpeed2)));
	LINE_NUMBER(27);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_glowColor;
	jfloat temp6 = (jfloat)((func_mindustry_gen_Building_warmup_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_warmup_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_glowColor;
	jfloat temp7 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a;
	jfloat temp8 = (jfloat(1)) - ((jfloat)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_pulse);
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, ((jfloat)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_pulseScl), ((jfloat)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_pulse));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (temp6 * (temp7 * (temp8 + temp9))));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_glow;
	jfloat temp10 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp11 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp12 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp10, temp11, (temp12 * ((jfloat)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_rotateSpeed)));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_glow;
	jfloat temp13 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp14 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp15 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp13, temp14, ((temp15 * ((jfloat)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_rotateSpeed)) * ((jfloat)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_rotateSpeed2)));
	LINE_NUMBER(34);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(35);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_draw_DrawMultiWeave_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawMultiWeave:icons", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	if (((jint)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_fadeWeave) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(0)));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK((frame[0].o)))->F_weave;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawMultiWeave_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawMultiWeave:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-weave"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK(sp[0].o))->F_weave = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-weave-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawMultiWeave *) NULL_CHECK(sp[0].o))->F_glow = (jref) sp[1].o;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawMultiWeave[] {
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
	(void *) M_mindustry_world_draw_DrawMultiWeave_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawMultiWeave_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawMultiWeave_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
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
	{ "weave", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawMultiWeave, F_weave), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "glow", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawMultiWeave, F_glow), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_world_draw_DrawMultiWeave, F_rotateSpeed), "F", 1 },
	{ "rotateSpeed2", &class_float, offsetof(mindustry_world_draw_DrawMultiWeave, F_rotateSpeed2), "F", 1 },
	{ "fadeWeave", &class_boolean, offsetof(mindustry_world_draw_DrawMultiWeave, F_fadeWeave), "Z", 1 },
	{ "glowColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawMultiWeave, F_glowColor), "Larc/graphics/Color;", 1 },
	{ "weaveColor", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawMultiWeave, F_weaveColor), "Larc/graphics/Color;", 1 },
	{ "pulse", &class_float, offsetof(mindustry_world_draw_DrawMultiWeave, F_pulse), "F", 1 },
	{ "pulseScl", &class_float, offsetof(mindustry_world_draw_DrawMultiWeave, F_pulseScl), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawMultiWeave, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawMultiWeave_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawMultiWeave_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_draw_DrawMultiWeave_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_draw_DrawMultiWeave_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawMultiWeave_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawMultiWeave_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawMultiWeave{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawMultiWeave",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawMultiWeave),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawMultiWeave,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawMultiWeave,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawMultiWeave,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawMultiWeave = registerClass(&class_mindustry_world_draw_DrawMultiWeave);

}
