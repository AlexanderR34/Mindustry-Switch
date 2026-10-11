#include "mindustry/ui/Fonts_10.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Object.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ui/Fonts_10.h"
#include "arc/util/Tmp.h"
#include "arc/graphics/Color.h"
#include "arc/scene/style/BaseDrawable.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "arc/graphics/g2d/Draw.h"

extern "C" {


void mark_mindustry_ui_Fonts$10(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_style_TextureRegionDrawable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_Fonts$10 *) object;
	if (self->F_val$g)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$g)->clazz)->markFunction)((jobject) self->F_val$g, mark, depth + 1);
}

void clinit_mindustry_ui_Fonts$10(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
}

void init_mindustry_ui_Fonts$10_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_Font$Glyph_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$10:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts$10(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(324);
	((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g = (jref) (frame[2].o);
	((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$size = (frame[3].f);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Fonts$10_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$10:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(327);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_tint;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(ctx);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_color_float(ctx, temp0);
	LINE_NUMBER(328);
	jfloat temp1 = (frame[1].f) + ((frame[3].f) / (jfloat(2)));
	sp[0].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	frame[5].f = (temp1 - ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width))) / (jfloat(2))));
	jfloat temp2 = (frame[2].f) + ((frame[4].f) / (jfloat(2)));
	sp[0].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	frame[6].f = (temp2 - ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height))) / (jfloat(2))));
	LINE_NUMBER(329);
	frame[5].f = (jfloat((jint((frame[5].f)))));
	LINE_NUMBER(330);
	frame[6].f = (jfloat((jint((frame[6].f)))));
	LINE_NUMBER(331);
	sp[0].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp3 = frame[5].f;
	sp[1].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	jfloat temp4 = temp3 + ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[1].o))->F_width))) / (jfloat(2)));
	jfloat temp5 = frame[6].f;
	sp[1].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	jfloat temp6 = temp5 + ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[1].o))->F_height))) / (jfloat(2)));
	sp[1].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	jfloat temp7 = jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[1].o))->F_width));
	sp[1].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp4, temp6, temp7, (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[1].o))->F_height))));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Fonts$10_draw_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$10:draw", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(336);
	frame[5].f = ((frame[5].f) * (frame[7].f));
	LINE_NUMBER(337);
	frame[6].f = ((frame[6].f) * (frame[8].f));
	LINE_NUMBER(338);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_tint;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(ctx);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_color_float(ctx, temp0);
	LINE_NUMBER(339);
	jfloat temp1 = (frame[1].f) + ((frame[5].f) / (jfloat(2)));
	sp[0].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	frame[10].f = (temp1 - ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width))) / (jfloat(2))));
	jfloat temp2 = (frame[2].f) + ((frame[6].f) / (jfloat(2)));
	sp[0].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	frame[11].f = (temp2 - ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height))) / (jfloat(2))));
	LINE_NUMBER(340);
	frame[10].f = (jfloat((jint((frame[10].f)))));
	LINE_NUMBER(341);
	frame[11].f = (jfloat((jint((frame[11].f)))));
	LINE_NUMBER(342);
	sp[0].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	frame[3].f = ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width))) / (jfloat(2)));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	frame[4].f = ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height))) / (jfloat(2)));
	LINE_NUMBER(344);
	sp[0].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp3 = frame[10].f;
	sp[1].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	jfloat temp4 = temp3 + ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[1].o))->F_width))) / (jfloat(2)));
	jfloat temp5 = frame[11].f;
	sp[1].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	jfloat temp6 = temp5 + ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[1].o))->F_height))) / (jfloat(2)));
	sp[1].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	jfloat temp7 = (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[1].o))->F_width))) * (frame[7].f);
	sp[1].o = (jobject)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$g;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(ctx, sp[0].o, temp4, temp6, temp7, ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[1].o))->F_height))) * (frame[8].f)), (frame[3].f), (frame[4].f), (frame[9].f));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_Fonts$10_imageSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$10:imageSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(349);
	jfloat temp0 = (jfloat)((mindustry_ui_Fonts$10 *) NULL_CHECK((frame[0].o)))->F_val$size;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	popStackFrame(ctx);
	return (temp0 / temp1);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Fonts$10[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_style_BaseDrawable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ui_Fonts$10_draw_float_float_float_float,
	(void *) M_mindustry_ui_Fonts$10_draw_float_float_float_float_float_float_float_float_float,
	(void *) M_arc_scene_style_BaseDrawable_getLeftWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setLeftWidth_float,
	(void *) M_arc_scene_style_BaseDrawable_getRightWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setRightWidth_float,
	(void *) M_arc_scene_style_BaseDrawable_getTopHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setTopHeight_float,
	(void *) M_arc_scene_style_BaseDrawable_getBottomHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setBottomHeight_float,
	(void *) M_arc_scene_style_BaseDrawable_getMinWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setMinWidth_float,
	(void *) M_arc_scene_style_BaseDrawable_getMinHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setMinHeight_float,
	(void *) M_mindustry_ui_Fonts$10_imageSize_R_float,
	(void *) M_arc_scene_style_BaseDrawable_getName_R_java_lang_String,
	(void *) M_arc_scene_style_BaseDrawable_setName_java_lang_String,
	(void *) M_arc_scene_style_TextureRegionDrawable_set_arc_graphics_g2d_TextureRegion_R_arc_scene_style_TextureRegionDrawable,
	(void *) M_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable,
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
	{ "draw", "(FFFF)V" },
	{ "draw", "(FFFFFFFFF)V" },
	{ "getLeftWidth", "()F" },
	{ "setLeftWidth", "(F)V" },
	{ "getRightWidth", "()F" },
	{ "setRightWidth", "(F)V" },
	{ "getTopHeight", "()F" },
	{ "setTopHeight", "(F)V" },
	{ "getBottomHeight", "()F" },
	{ "setBottomHeight", "(F)V" },
	{ "getMinWidth", "()F" },
	{ "setMinWidth", "(F)V" },
	{ "getMinHeight", "()F" },
	{ "setMinHeight", "(F)V" },
	{ "imageSize", "()F" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "set", "(Larc/graphics/g2d/TextureRegion;)Larc/scene/style/TextureRegionDrawable;" },
	{ "getRegion", "()Larc/graphics/g2d/TextureRegion;" },
	{ "setRegion", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "tint", "(FFFF)Larc/scene/style/Drawable;" },
	{ "tint", "(Larc/graphics/Color;)Larc/scene/style/Drawable;" },
};

static FieldMetadata fields[] {
	{ "val$g", &class_arc_graphics_g2d_Font$Glyph, offsetof(mindustry_ui_Fonts$10, F_val$g), "Larc/graphics/g2d/Font$Glyph;", 4112 },
	{ "val$size", &class_float, offsetof(mindustry_ui_Fonts$10, F_val$size), "F", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Fonts$10_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_Font$Glyph_float, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/g2d/Font$Glyph;F)V", 0 },
	{ "draw", (intptr_t) M_mindustry_ui_Fonts$10_draw_float_float_float_float, VTABLE_mindustry_ui_Fonts$10_draw_float_float_float_float, "(FFFF)V", 1 },
	{ "draw", (intptr_t) M_mindustry_ui_Fonts$10_draw_float_float_float_float_float_float_float_float_float, VTABLE_mindustry_ui_Fonts$10_draw_float_float_float_float_float_float_float_float_float, "(FFFFFFFFF)V", 1 },
	{ "imageSize", (intptr_t) M_mindustry_ui_Fonts$10_imageSize_R_float, VTABLE_mindustry_ui_Fonts$10_imageSize_R_float, "()F", 1 },
};

Class class_mindustry_ui_Fonts$10{
		.nativeName = (intptr_t) "mindustry/ui/Fonts$10",
		.parentClass = (intptr_t) &class_arc_scene_style_TextureRegionDrawable,
		.size = sizeof(mindustry_ui_Fonts$10),
		.classVtable = (intptr_t) vtable_mindustry_ui_Fonts$10,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Fonts$10,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Fonts$10,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_Fonts$10 = registerClass(&class_mindustry_ui_Fonts$10);

}

