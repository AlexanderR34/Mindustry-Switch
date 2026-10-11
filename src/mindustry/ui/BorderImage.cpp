#include "mindustry/ui/BorderImage.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/GLTexture.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Tex.h"
#include "arc/util/Scaling.h"
#include "mindustry/ui/BorderImage.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/util/Tmp.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Scl.h"

extern "C" {


void mark_mindustry_ui_BorderImage(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Image(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_BorderImage *) object;
	if (self->F_borderColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_borderColor)->clazz)->markFunction)((jobject) self->F_borderColor, mark, depth + 1);
	if (self->F_alphaColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_alphaColor)->clazz)->markFunction)((jobject) self->F_alphaColor, mark, depth + 1);
}

void clinit_mindustry_ui_BorderImage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Image(ctx);
}

void init_mindustry_ui_BorderImage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/BorderImage:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_BorderImage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_arc_scene_ui_Image(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_thickness = (jfloat(4.0f));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_pad = (jfloat(0));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_borderColor = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_forceNearest = (jint(0));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_drawAlpha = (jint(0));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_alphaColor = (jref) sp[1].o;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_BorderImage_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/BorderImage:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_BorderImage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	init_arc_scene_ui_Image_arc_graphics_Texture(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(16);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_thickness = (jfloat(4.0f));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_pad = (jfloat(0));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_borderColor = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_forceNearest = (jint(0));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_drawAlpha = (jint(0));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_alphaColor = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_BorderImage_arc_graphics_Texture_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/BorderImage:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_BorderImage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(30);
	init_arc_scene_ui_Image_arc_graphics_Texture(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(16);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_thickness = (jfloat(4.0f));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_pad = (jfloat(0));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_borderColor = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_forceNearest = (jint(0));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_drawAlpha = (jint(0));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_alphaColor = (jref) sp[1].o;
	LINE_NUMBER(31);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_thickness = (frame[2].f);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_BorderImage_arc_graphics_g2d_TextureRegion_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/BorderImage:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_BorderImage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(35);
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(16);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_thickness = (jfloat(4.0f));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_pad = (jfloat(0));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_borderColor = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_forceNearest = (jint(0));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_drawAlpha = (jint(0));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_alphaColor = (jref) sp[1].o;
	LINE_NUMBER(36);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_thickness = (frame[2].f);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_BorderImage_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/BorderImage:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_BorderImage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(16);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_thickness = (jfloat(4.0f));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_pad = (jfloat(0));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_borderColor = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_forceNearest = (jint(0));
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_drawAlpha = (jint(0));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_alphaColor = (jref) sp[1].o;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/BorderImage:border", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_borderColor = (jref) (frame[1].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_BorderImage_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/BorderImage:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	frame[1].o = sp[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	frame[2].o = sp[0].o;
	LINE_NUMBER(52);
	if (((jint)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_forceNearest) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ui_BorderImage_getDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_BorderImage_getDrawable_R_arc_scene_style_Drawable])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_arc_scene_style_TextureRegionDrawable)) == 0) goto label_3;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, (frame[4].o)));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[3].o));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	sp[0].o = (jobject)((func_arc_graphics_Texture_getMinFilter_R_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_getMinFilter_R_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[3].o));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	sp[0].o = (jobject)((func_arc_graphics_Texture_getMagFilter_R_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_getMagFilter_R_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[3].o));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(57);
	if (((jint)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_drawAlpha) == 0) goto label_7;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_alphaColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_scaling;
	sp[0].o = (jobject)((func_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth), ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat(1)) / ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width)), ((jfloat(1)) / ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(60);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_alphaBg;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o)))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(61);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_u;
	jfloat temp1 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_v;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_u), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_u2), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_v), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_v2), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y));
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(63);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX)) + ((((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX)) / (jfloat(2)))), ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY)) + ((((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY)) / (jfloat(2)))), (((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX)), (((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY)));
	}
label_7:;
	{
	LINE_NUMBER(66);
	M_arc_scene_ui_Image_draw(ctx, (frame[0].o));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_borderColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(69);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(70);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_thickness));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp0);
	LINE_NUMBER(71);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageX)) - ((jfloat)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_pad)), ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageY)) - ((jfloat)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_pad)), ((((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageWidth) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX)) + (((jfloat)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_pad) * (jfloat(2)))), ((((jfloat)((arc_scene_ui_Image *) NULL_CHECK((frame[0].o)))->F_imageHeight) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY)) + (((jfloat)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_pad) * (jfloat(2)))));
	LINE_NUMBER(72);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(74);
	if (((jint)((mindustry_ui_BorderImage *) NULL_CHECK((frame[0].o)))->F_forceNearest) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ui_BorderImage_getDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_BorderImage_getDrawable_R_arc_scene_style_Drawable])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_arc_scene_style_TextureRegionDrawable)) == 0) goto label_20;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, (frame[4].o)));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[3].o));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_20:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_BorderImage[] {
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
	(void *) M_mindustry_ui_BorderImage_draw,
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
	(void *) M_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage,
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
	{ "border", "(Larc/graphics/Color;)Lmindustry/ui/BorderImage;" },
};

static FieldMetadata fields[] {
	{ "thickness", &class_float, offsetof(mindustry_ui_BorderImage, F_thickness), "F", 1 },
	{ "pad", &class_float, offsetof(mindustry_ui_BorderImage, F_pad), "F", 1 },
	{ "borderColor", &class_arc_graphics_Color, offsetof(mindustry_ui_BorderImage, F_borderColor), "Larc/graphics/Color;", 1 },
	{ "forceNearest", &class_boolean, offsetof(mindustry_ui_BorderImage, F_forceNearest), "Z", 1 },
	{ "drawAlpha", &class_boolean, offsetof(mindustry_ui_BorderImage, F_drawAlpha), "Z", 1 },
	{ "alphaColor", &class_arc_graphics_Color, offsetof(mindustry_ui_BorderImage, F_alphaColor), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_BorderImage, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_BorderImage_arc_graphics_Texture, 0, "(Larc/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_BorderImage_arc_graphics_Texture_float, 0, "(Larc/graphics/Texture;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_BorderImage_arc_graphics_g2d_TextureRegion_float, 0, "(Larc/graphics/g2d/TextureRegion;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_BorderImage_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;)V", 1 },
	{ "border", (intptr_t) M_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage, VTABLE_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage, "(Larc/graphics/Color;)Lmindustry/ui/BorderImage;", 1 },
	{ "draw", (intptr_t) M_mindustry_ui_BorderImage_draw, VTABLE_mindustry_ui_BorderImage_draw, "()V", 1 },
};

Class class_mindustry_ui_BorderImage{
		.nativeName = (intptr_t) "mindustry/ui/BorderImage",
		.parentClass = (intptr_t) &class_arc_scene_ui_Image,
		.size = sizeof(mindustry_ui_BorderImage),
		.classVtable = (intptr_t) vtable_mindustry_ui_BorderImage,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_BorderImage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_BorderImage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 132,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_BorderImage = registerClass(&class_mindustry_ui_BorderImage);

}
