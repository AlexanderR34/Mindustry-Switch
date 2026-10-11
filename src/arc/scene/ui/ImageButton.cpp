#include "arc/scene/ui/ImageButton.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/Scaling.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/Color.h"
#include "arc/scene/Scene.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/Element.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/ImageButton.h"
#include "java/lang/Class.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/Button_ButtonStyle.h"

extern "C" {


void mark_arc_scene_ui_ImageButton(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Button(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_ImageButton *) object;
	if (self->F_image)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_image)->clazz)->markFunction)((jobject) self->F_image, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
}

void clinit_arc_scene_ui_ImageButton(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Button(ctx);
}

void init_arc_scene_ui_ImageButton(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_scene_ui_ImageButton$ImageButtonStyle)));
	init_arc_scene_ui_ImageButton_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle, sp[1].o)));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(29);
	init_arc_scene_ui_ImageButton_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(30);
	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(31);
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[3].o)))->F_imageUp = (jref) (frame[1].o);
	LINE_NUMBER(33);
	((func_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ImageButton_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_scene_ui_ImageButton$ImageButtonStyle)));
	init_arc_scene_ui_ImageButton_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle, sp[1].o)));
	LINE_NUMBER(38);
	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_scene_ui_ImageButton$ImageButtonStyle)));
	init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle, sp[1].o)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(39);
	sp[0].o = frame[2].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[1].o));
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(41);
	((func_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ImageButton_arc_graphics_g2d_TextureRegion_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(45);
	init_arc_scene_ui_ImageButton_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(46);
	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = frame[3].o;
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[1].o));
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(49);
	((func_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ImageButton_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	init_arc_scene_ui_Button_arc_scene_ui_Button$ButtonStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image(ctx, sp[1].o);
	((arc_scene_ui_ImageButton *) NULL_CHECK(sp[0].o))->F_image = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	((func_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ImageButton_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ImageButton_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_ui_ImageButton_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ImageButton_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(ctx, sp[1].o, (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	init_arc_scene_ui_ImageButton_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_scene_ui_ImageButton$ImageButtonStyle)));
	init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle, sp[1].o)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(65);
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[2].o)))->F_imageUp = (jref) (frame[1].o);
	LINE_NUMBER(66);
	((func_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(ctx, sp[1].o, (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	init_arc_scene_ui_ImageButton_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle);
	init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(ctx, sp[1].o, (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (frame[1].o), (frame[2].o), (frame[3].o));
	init_arc_scene_ui_ImageButton_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_ui_ImageButton$ImageButtonStyle)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style must be an ImageButtonStyle."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(86);
	M_arc_scene_ui_Button_setStyle_arc_scene_ui_Button$ButtonStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(87);
	((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style = (jref) (checkCast(ctx, &class_arc_scene_ui_ImageButton$ImageButtonStyle, (frame[1].o)));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	if (sp[0].o == nullptr) goto label_5;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_ui_ImageButton_updateImage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_updateImage])(ctx, sp[0].o);
label_5:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_ImageButton_replaceImage_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:replaceImage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(93);
	((func_arc_scene_ui_ImageButton_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	jint temp0 = (jint)((func_arc_scene_ui_Image_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ImageButton_updateImage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:updateImage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(100);
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDisabled;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDisabled;
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isPressed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isPressed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDown;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDown;
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(104);
	if (((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isChecked) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageChecked;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedOver;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedOver;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageChecked;
	sp += 1;
	}
label_10:;
	INST_ASTORE(1);
	goto label_4;
label_7:;
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOver;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOver;
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_11:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp;
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	frame[2].o = sp[0].o;
	LINE_NUMBER(113);
	if (((jint)((arc_scene_ui_Button *) NULL_CHECK((frame[0].o)))->F_isDisabled) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDisabledColor;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDisabledColor;
	frame[2].o = sp[0].o;
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isPressed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isPressed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDownColor;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDownColor;
	frame[2].o = sp[0].o;
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isChecked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedColor;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedColor;
	frame[2].o = sp[0].o;
	goto label_17;
	}
label_20:;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOverColor;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOverColor;
	frame[2].o = sp[0].o;
	goto label_17;
	}
label_22:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor;
	frame[2].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ImageButton_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:draw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	((func_arc_scene_ui_ImageButton_updateImage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_updateImage])(ctx, (frame[0].o));
	LINE_NUMBER(131);
	M_arc_scene_ui_Button_draw(ctx, (frame[0].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:getImage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:getImageCell", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getCells_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getCells_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_ImageButton_resizeImage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:resizeImage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_Button$ButtonStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ImageButton:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ImageButton[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_ImageButton_draw,
	(void *) M_arc_scene_ui_Button_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Group_setScene_arc_scene_Scene,
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
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
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
	(void *) M_arc_scene_ui_Button_getMinWidth_R_float,
	(void *) M_arc_scene_ui_Button_getMinHeight_R_float,
	(void *) M_arc_scene_ui_Button_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_Button_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Table_layout,
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
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_drawBackground_float_float,
	(void *) M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_getClip_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_setClip_boolean,
	(void *) M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_reset,
	(void *) M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_endRow,
	(void *) M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getMarginTop_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginLeft_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginBottom_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginRight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getAlign_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRow_float_R_int,
	(void *) M_arc_scene_ui_layout_Table_setRound_boolean,
	(void *) M_arc_scene_ui_layout_Table_getRows_R_int,
	(void *) M_arc_scene_ui_layout_Table_getColumns_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRowHeight_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_arc_scene_ui_layout_Table_computeSize,
	(void *) M_arc_scene_ui_layout_Table_layout_float_float_float_float,
	(void *) M_arc_scene_ui_Button_isDisabled_R_boolean,
	(void *) M_arc_scene_ui_Button_setDisabled_boolean,
	(void *) M_arc_scene_ui_Button_initialize,
	(void *) M_arc_scene_ui_Button_setChecked_boolean_boolean,
	(void *) M_arc_scene_ui_Button_toggle,
	(void *) M_arc_scene_ui_Button_isChecked_R_boolean,
	(void *) M_arc_scene_ui_Button_setChecked_boolean,
	(void *) M_arc_scene_ui_Button_isPressed_R_boolean,
	(void *) M_arc_scene_ui_Button_isOver_R_boolean,
	(void *) M_arc_scene_ui_Button_getClickListener_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_ui_Button_setDisabled_arc_func_Boolp,
	(void *) M_arc_scene_ui_Button_childrenPressed_R_boolean,
	(void *) M_arc_scene_ui_Button_setProgrammaticChangeEvents_boolean,
	(void *) M_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_Button$ButtonStyle,
	(void *) M_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle,
	(void *) M_arc_scene_ui_Button_getButtonGroup_R_arc_scene_ui_ButtonGroup,
	(void *) M_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle,
	(void *) M_arc_scene_ui_ImageButton_replaceImage_arc_scene_Element,
	(void *) M_arc_scene_ui_ImageButton_updateImage,
	(void *) M_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image,
	(void *) M_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_ImageButton_resizeImage_float,
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
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "obtainCell", "()Larc/scene/ui/layout/Cell;" },
	{ "fill", "()Larc/scene/ui/layout/Table;" },
	{ "drawBackground", "(FF)V" },
	{ "background", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Table;" },
	{ "getBackground", "()Larc/scene/style/Drawable;" },
	{ "setBackground", "(Larc/scene/style/Drawable;)V" },
	{ "getClip", "()Z" },
	{ "setClip", "(Z)V" },
	{ "add", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "([Larc/scene/Element;)V" },
	{ "collapser", "(Larc/func/Cons;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/func/Cons;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "table", "()Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "wrapTable", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;ILarc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "label", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "add", "()Larc/scene/ui/layout/Cell;" },
	{ "stack", "([Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "spacer", "(Larc/func/Floatp;Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerX", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerY", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "imageDraw", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "image", "()Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/graphics/g2d/TextureRegion;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;FZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Larc/scene/ui/Button$ButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldFilter;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "rect", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/ui/layout/Cell;" },
	{ "buttonRow", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFZLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Larc/scene/ui/layout/Table;" },
	{ "endRow", "()V" },
	{ "getCell", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "getCells", "()Larc/struct/Seq;" },
	{ "defaults", "()Larc/scene/ui/layout/Cell;" },
	{ "margin", "(F)Larc/scene/ui/layout/Table;" },
	{ "margin", "(FFFF)Larc/scene/ui/layout/Table;" },
	{ "marginTop", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginLeft", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginBottom", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginRight", "(F)Larc/scene/ui/layout/Table;" },
	{ "align", "(I)Larc/scene/ui/layout/Table;" },
	{ "center", "()Larc/scene/ui/layout/Table;" },
	{ "top", "()Larc/scene/ui/layout/Table;" },
	{ "left", "()Larc/scene/ui/layout/Table;" },
	{ "bottom", "()Larc/scene/ui/layout/Table;" },
	{ "right", "()Larc/scene/ui/layout/Table;" },
	{ "getMarginTop", "()F" },
	{ "getMarginLeft", "()F" },
	{ "getMarginBottom", "()F" },
	{ "getMarginRight", "()F" },
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "layout", "(FFFF)V" },
	{ "isDisabled", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "initialize", "()V" },
	{ "setChecked", "(ZZ)V" },
	{ "toggle", "()V" },
	{ "isChecked", "()Z" },
	{ "setChecked", "(Z)V" },
	{ "isPressed", "()Z" },
	{ "isOver", "()Z" },
	{ "getClickListener", "()Larc/scene/event/ClickListener;" },
	{ "setDisabled", "(Larc/func/Boolp;)V" },
	{ "childrenPressed", "()Z" },
	{ "setProgrammaticChangeEvents", "(Z)V" },
	{ "getStyle", "()Larc/scene/ui/Button$ButtonStyle;" },
	{ "setStyle", "(Larc/scene/ui/Button$ButtonStyle;)V" },
	{ "getButtonGroup", "()Larc/scene/ui/ButtonGroup;" },
	{ "getStyle", "()Larc/scene/ui/ImageButton$ImageButtonStyle;" },
	{ "replaceImage", "(Larc/scene/Element;)V" },
	{ "updateImage", "()V" },
	{ "getImage", "()Larc/scene/ui/Image;" },
	{ "getImageCell", "()Larc/scene/ui/layout/Cell;" },
	{ "resizeImage", "(F)V" },
};

static jclass innerClasses[] {
	&class_arc_scene_ui_ImageButton$ImageButtonStyle,
};

static FieldMetadata fields[] {
	{ "image", &class_arc_scene_ui_Image, offsetof(arc_scene_ui_ImageButton, F_image), "Larc/scene/ui/Image;", 18 },
	{ "style", &class_arc_scene_ui_ImageButton$ImageButtonStyle, offsetof(arc_scene_ui_ImageButton, F_style), "Larc/scene/ui/ImageButton$ImageButtonStyle;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle, 0, "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton_arc_graphics_g2d_TextureRegion, 0, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton_arc_graphics_g2d_TextureRegion_arc_scene_ui_ImageButton$ImageButtonStyle, 0, "(Larc/graphics/g2d/TextureRegion;Larc/scene/ui/ImageButton$ImageButtonStyle;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton_arc_scene_ui_ImageButton$ImageButtonStyle, 0, "(Larc/scene/ui/ImageButton$ImageButtonStyle;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;Larc/scene/style/Drawable;Larc/scene/style/Drawable;)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle, VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle, "()Larc/scene/ui/ImageButton$ImageButtonStyle;", 1 },
	{ "setStyle", (intptr_t) M_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle, VTABLE_arc_scene_ui_ImageButton_setStyle_arc_scene_ui_Button$ButtonStyle, "(Larc/scene/ui/Button$ButtonStyle;)V", 1 },
	{ "replaceImage", (intptr_t) M_arc_scene_ui_ImageButton_replaceImage_arc_scene_Element, VTABLE_arc_scene_ui_ImageButton_replaceImage_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "updateImage", (intptr_t) M_arc_scene_ui_ImageButton_updateImage, VTABLE_arc_scene_ui_ImageButton_updateImage, "()V", 4 },
	{ "draw", (intptr_t) M_arc_scene_ui_ImageButton_draw, VTABLE_arc_scene_ui_ImageButton_draw, "()V", 1 },
	{ "getImage", (intptr_t) M_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image, VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image, "()Larc/scene/ui/Image;", 1 },
	{ "getImageCell", (intptr_t) M_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell, VTABLE_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell, "()Larc/scene/ui/layout/Cell;", 1 },
	{ "resizeImage", (intptr_t) M_arc_scene_ui_ImageButton_resizeImage_float, VTABLE_arc_scene_ui_ImageButton_resizeImage_float, "(F)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_Button$ButtonStyle, VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_Button$ButtonStyle, "()Larc/scene/ui/Button$ButtonStyle;", 4161 },
};

Class class_arc_scene_ui_ImageButton{
		.nativeName = (intptr_t) "arc/scene/ui/ImageButton",
		.parentClass = (intptr_t) &class_arc_scene_ui_Button,
		.size = sizeof(arc_scene_ui_ImageButton),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ImageButton,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ImageButton,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ImageButton,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 277,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ImageButton = registerClass(&class_arc_scene_ui_ImageButton);

}
