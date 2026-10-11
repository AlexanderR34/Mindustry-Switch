#include "mindustry/world/draw/DrawFrames.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/draw/DrawFrames.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"

extern "C" {


void mark_mindustry_world_draw_DrawFrames(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_draw_DrawFrames *) object;
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawFrames(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawFrames(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawFrames:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawFrames(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_frames = (jint(3));
	LINE_NUMBER(13);
	((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_interval = (jfloat(5.0f));
	LINE_NUMBER(15);
	((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_sine = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawFrames_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawFrames:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	if (((jint)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_sine) == 0) goto label_1;
	}
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_regions;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_interval), ((jfloat(((jint)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_frames))) - (jfloat(1,000000e-03f))));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(temp1)));
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_regions;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint((fmodf((temp0 / ((jfloat)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_interval)), (jfloat(((jint)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_frames))))))));
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	LINE_NUMBER(20);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_draw_DrawFrames_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawFrames:icons", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_regions;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawFrames_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawFrames:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, ((jint)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_frames));
	((mindustry_world_draw_DrawFrames *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(35);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_frames)) goto label_3;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_world_draw_DrawFrames *) NULL_CHECK((frame[0].o)))->F_regions;
	jint temp0 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-frame\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[2].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(35);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_draw_DrawFrames[] {
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
	(void *) M_mindustry_world_draw_DrawFrames_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawFrames_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawFrames_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
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
	{ "frames", &class_int, offsetof(mindustry_world_draw_DrawFrames, F_frames), "I", 1 },
	{ "interval", &class_float, offsetof(mindustry_world_draw_DrawFrames, F_interval), "F", 1 },
	{ "sine", &class_boolean, offsetof(mindustry_world_draw_DrawFrames, F_sine), "Z", 1 },
	{ "regions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_draw_DrawFrames, F_regions), "[Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawFrames, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawFrames_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawFrames_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_draw_DrawFrames_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_draw_DrawFrames_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawFrames_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawFrames_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawFrames{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawFrames",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawFrames),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawFrames,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawFrames,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawFrames,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawFrames = registerClass(&class_mindustry_world_draw_DrawFrames);

}
