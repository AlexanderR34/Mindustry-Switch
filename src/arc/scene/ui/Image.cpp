#include "arc/scene/ui/Image.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/util/Scaling.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/Image.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/style/NinePatchDrawable.h"
#include "arc/scene/style/Drawable.h"
#include "arc/graphics/g2d/NinePatch.h"
#include "arc/scene/style/TransformDrawable.h"

extern "C" {


void mark_arc_scene_ui_Image(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_Element(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Image *) object;
	if (self->F_scaling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scaling)->clazz)->markFunction)((jobject) self->F_scaling, mark, depth + 1);
	if (self->F_drawable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawable)->clazz)->markFunction)((jobject) self->F_drawable, mark, depth + 1);
}

void clinit_arc_scene_ui_Image(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
}

void init_arc_scene_ui_Image(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Image(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"whiteui"_j))));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"whiteui"_j))));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"white"_j))));
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(29);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(30);
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Image_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_scene_style_NinePatchDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_NinePatchDrawable);
	init_arc_scene_style_NinePatchDrawable_arc_graphics_g2d_NinePatch(ctx, sp[1].o, (frame[1].o));
	clinit_arc_util_Scaling(ctx);
	sp[2].o = (jobject)SF_arc_util_Scaling_stretch;
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_util_Scaling_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[1].o));
	clinit_arc_util_Scaling(ctx);
	sp[2].o = (jobject)SF_arc_util_Scaling_stretch;
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_util_Scaling_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Image_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[2].o, (frame[1].o));
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Image_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_Scaling(ctx);
	sp[2].o = (jobject)SF_arc_util_Scaling_stretch;
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_util_Scaling_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_util_Scaling(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(67);
	init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_util_Scaling_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_util_Scaling_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Image(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(71);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(72);
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(73);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_scaling = (jref) (frame[2].o);
	LINE_NUMBER(74);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_align = (frame[3].i);
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Image_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Image_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_ui_Image_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Image_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:layout", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = temp0;
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	frame[2].f = temp1;
	LINE_NUMBER(84);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_Image_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getWidth_R_float])(ctx, (frame[0].o));
	frame[3].f = temp2;
	LINE_NUMBER(85);
	jfloat temp3 = (jfloat)((func_arc_scene_ui_Image_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getHeight_R_float])(ctx, (frame[0].o));
	frame[4].f = temp3;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_scaling;
	sp[0].o = (jobject)((func_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(88);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x);
	LINE_NUMBER(89);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y);
	LINE_NUMBER(91);
	if ((((jint)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_align) & (8)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(92);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX = (jfloat(0));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(93);
	if ((((jint)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_align) & (16)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(94);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX = (jfloat((jint(((frame[3].f) - ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth))))));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(96);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX = (jfloat((jint((((frame[3].f) / (jfloat(2))) - (((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth) / (jfloat(2))))))));
	}
label_11:;
	{
	LINE_NUMBER(98);
	if ((((jint)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_align) & (jint(2))) == 0) goto label_14;
	}
	{
	LINE_NUMBER(99);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY = (jfloat((jint(((frame[4].f) - ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight))))));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(100);
	if ((((jint)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_align) & (jint(4))) == 0) goto label_17;
	}
	{
	LINE_NUMBER(101);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY = (jfloat(0));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(103);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY = (jfloat((jint((((frame[4].f) / (jfloat(2))) - (((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight) / (jfloat(2))))))));
	}
label_16:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Image_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	((func_arc_scene_ui_Image_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_validate])(ctx, (frame[0].o));
	LINE_NUMBER(110);
	frame[1].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(111);
	frame[2].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(112);
	frame[3].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX);
	LINE_NUMBER(113);
	frame[4].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(115);
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 * ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a)));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_style_TransformDrawable)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(118);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Image_getRotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getRotation_R_float])(ctx, (frame[0].o));
	frame[5].f = temp0;
	LINE_NUMBER(119);
	if ((floatCompare((frame[3].f), (jfloat(1)), -1)) != 0) goto label_11;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(1)), -1)) != 0) goto label_11;
	}
	{
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) == 0) goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	((func_arc_scene_style_Drawable_draw_float_float_float_float_float_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float_float_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX)), ((frame[2].f) + ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX) - ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY) - ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY)), ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth), ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((frame[1].f) + ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX)), ((frame[2].f) + ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY)), (((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth) * (frame[3].f)), (((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight) * (frame[4].f)));
	}
label_13:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Image_getRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getRegion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o)))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:setDrawable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[1].o));
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:setDrawable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(144);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(145);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Image_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	if ((floatCompare(temp0, temp1, -1)) != 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Image_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getPrefHeight_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	if ((floatCompare(temp0, temp1, -1)) == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(146);
	((func_arc_scene_ui_Image_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_invalidateHierarchy])(ctx, (frame[0].o));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(148);
	((func_arc_scene_ui_Image_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_invalidateHierarchy])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(149);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable = (jref) (frame[1].o);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:setScaling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scaling cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(154);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_scaling = (jref) (frame[1].o);
	LINE_NUMBER(155);
	((func_arc_scene_ui_Image_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Image_setAlign_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:setAlign", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(161);
	((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_align = (frame[1].i);
	LINE_NUMBER(162);
	((func_arc_scene_ui_Image_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Image_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Image_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Image_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Image_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_drawable;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Image_getImageX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getImageX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Image_getImageY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getImageY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Image_getImageWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getImageWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Image_getImageHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Image:getImageHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight);
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Image[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Element_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_Image_draw,
	(void *) M_arc_scene_Element_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Element_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Element_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_Element_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_Image_getMinWidth_R_float,
	(void *) M_arc_scene_ui_Image_getMinHeight_R_float,
	(void *) M_arc_scene_ui_Image_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_Image_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_Element_setLayoutEnabled_boolean,
	(void *) M_arc_scene_Element_validate,
	(void *) M_arc_scene_Element_needsLayout_R_boolean,
	(void *) M_arc_scene_Element_invalidate,
	(void *) M_arc_scene_Element_invalidateHierarchy,
	(void *) M_arc_scene_Element_pack,
	(void *) M_arc_scene_Element_setFillParent_boolean,
	(void *) M_arc_scene_ui_Image_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_ui_Image_getRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image,
	(void *) M_arc_scene_ui_Image_setAlign_int,
	(void *) M_arc_scene_ui_Image_getImageX_R_float,
	(void *) M_arc_scene_ui_Image_getImageY_R_float,
	(void *) M_arc_scene_ui_Image_getImageWidth_R_float,
	(void *) M_arc_scene_ui_Image_getImageHeight_R_float,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "getRegion", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getDrawable", "()Larc/scene/style/Drawable;" },
	{ "setDrawable", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "setDrawable", "(Larc/scene/style/Drawable;)V" },
	{ "setScaling", "(Larc/util/Scaling;)Larc/scene/ui/Image;" },
	{ "setAlign", "(I)V" },
	{ "getImageX", "()F" },
	{ "getImageY", "()F" },
	{ "getImageWidth", "()F" },
	{ "getImageHeight", "()F" },
};

static FieldMetadata fields[] {
	{ "imageX", &class_float, offsetof(arc_scene_ui_Image, F_imageX), "F", 4 },
	{ "imageY", &class_float, offsetof(arc_scene_ui_Image, F_imageY), "F", 4 },
	{ "imageWidth", &class_float, offsetof(arc_scene_ui_Image, F_imageWidth), "F", 4 },
	{ "imageHeight", &class_float, offsetof(arc_scene_ui_Image, F_imageHeight), "F", 4 },
	{ "scaling", &class_arc_util_Scaling, offsetof(arc_scene_ui_Image, F_scaling), "Larc/util/Scaling;", 4 },
	{ "align", &class_int, offsetof(arc_scene_ui_Image, F_align), "I", 4 },
	{ "drawable", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_Image, F_drawable), "Larc/scene/style/Drawable;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Image, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_graphics_Color, 0, "(Larc/scene/style/Drawable;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Image_arc_graphics_g2d_NinePatch, 0, "(Larc/graphics/g2d/NinePatch;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion, 0, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Image_arc_graphics_Texture, 0, "(Larc/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Image_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_util_Scaling, 0, "(Larc/scene/style/Drawable;Larc/util/Scaling;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Image_arc_scene_style_Drawable_arc_util_Scaling_int, 0, "(Larc/scene/style/Drawable;Larc/util/Scaling;I)V", 1 },
	{ "layout", (intptr_t) M_arc_scene_ui_Image_layout, VTABLE_arc_scene_ui_Image_layout, "()V", 1 },
	{ "draw", (intptr_t) M_arc_scene_ui_Image_draw, VTABLE_arc_scene_ui_Image_draw, "()V", 1 },
	{ "getRegion", (intptr_t) M_arc_scene_ui_Image_getRegion_R_arc_graphics_g2d_TextureRegion, VTABLE_arc_scene_ui_Image_getRegion_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getDrawable", (intptr_t) M_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable, VTABLE_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable, "()Larc/scene/style/Drawable;", 1 },
	{ "setDrawable", (intptr_t) M_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion, VTABLE_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "setDrawable", (intptr_t) M_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable, VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable, "(Larc/scene/style/Drawable;)V", 1 },
	{ "setScaling", (intptr_t) M_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image, VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image, "(Larc/util/Scaling;)Larc/scene/ui/Image;", 1 },
	{ "setAlign", (intptr_t) M_arc_scene_ui_Image_setAlign_int, VTABLE_arc_scene_ui_Image_setAlign_int, "(I)V", 1 },
	{ "getMinWidth", (intptr_t) M_arc_scene_ui_Image_getMinWidth_R_float, VTABLE_arc_scene_ui_Image_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_arc_scene_ui_Image_getMinHeight_R_float, VTABLE_arc_scene_ui_Image_getMinHeight_R_float, "()F", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_Image_getPrefWidth_R_float, VTABLE_arc_scene_ui_Image_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_Image_getPrefHeight_R_float, VTABLE_arc_scene_ui_Image_getPrefHeight_R_float, "()F", 1 },
	{ "getImageX", (intptr_t) M_arc_scene_ui_Image_getImageX_R_float, VTABLE_arc_scene_ui_Image_getImageX_R_float, "()F", 1 },
	{ "getImageY", (intptr_t) M_arc_scene_ui_Image_getImageY_R_float, VTABLE_arc_scene_ui_Image_getImageY_R_float, "()F", 1 },
	{ "getImageWidth", (intptr_t) M_arc_scene_ui_Image_getImageWidth_R_float, VTABLE_arc_scene_ui_Image_getImageWidth_R_float, "()F", 1 },
	{ "getImageHeight", (intptr_t) M_arc_scene_ui_Image_getImageHeight_R_float, VTABLE_arc_scene_ui_Image_getImageHeight_R_float, "()F", 1 },
};

Class class_arc_scene_ui_Image{
		.nativeName = (intptr_t) "arc/scene/ui/Image",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(arc_scene_ui_Image),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Image,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Image,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Image,
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
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 131,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Image = registerClass(&class_arc_scene_ui_Image);

}
