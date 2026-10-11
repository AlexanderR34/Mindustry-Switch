#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Object.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/util/Tmp.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/style/BaseDrawable.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/scene/style/TransformDrawable.h"
#include "arc/graphics/g2d/Draw.h"

extern "C" {


void mark_arc_scene_style_TextureRegionDrawable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_style_BaseDrawable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_style_TextureRegionDrawable *) object;
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_tint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tint)->clazz)->markFunction)((jobject) self->F_tint, mark, depth + 1);
}

void clinit_arc_scene_style_TextureRegionDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_BaseDrawable(ctx);
}

void init_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_arc_scene_style_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK(sp[0].o))->F_tint = (jref) sp[1].o;
	LINE_NUMBER(16);
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	init_arc_scene_style_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK(sp[0].o))->F_tint = (jref) sp[1].o;
	LINE_NUMBER(16);
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(23);
	((func_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(26);
	init_arc_scene_style_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK(sp[0].o))->F_tint = (jref) sp[1].o;
	LINE_NUMBER(16);
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(27);
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_scale = (frame[2].f);
	LINE_NUMBER(28);
	((func_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_style_TextureRegionDrawable_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	init_arc_scene_style_BaseDrawable_arc_scene_style_Drawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK(sp[0].o))->F_tint = (jref) sp[1].o;
	LINE_NUMBER(16);
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[1].o)))->F_region;
	((func_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_TextureRegionDrawable_imageSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:imageSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width)));
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_TextureRegionDrawable_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(43);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_tint;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(ctx);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_color_float(ctx, temp0);
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((frame[1].f) + ((frame[3].f) / (jfloat(2)))), ((frame[2].f) + ((frame[4].f) / (jfloat(2)))), (frame[3].f), (frame[4].f));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_TextureRegionDrawable_draw_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:draw", 18 };
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
	LINE_NUMBER(49);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_tint;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(ctx);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_color_float(ctx, temp0);
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(ctx, sp[0].o, ((frame[1].f) + ((frame[5].f) / (jfloat(2)))), ((frame[2].f) + ((frame[6].f) / (jfloat(2)))), ((frame[5].f) * (frame[7].f)), ((frame[6].f) * (frame[8].f)), (frame[3].f), (frame[4].f), (frame[9].f));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_style_TextureRegionDrawable_set_arc_graphics_g2d_TextureRegion_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	((func_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:getRegion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:setRegion", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region = (jref) (frame[1].o);
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (((jfloat)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_scale) * (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width)))));
	((func_arc_scene_style_TextureRegionDrawable_setMinWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setMinWidth_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (((jfloat)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_scale) * (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_height)))));
	((func_arc_scene_style_TextureRegionDrawable_setMinHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setMinHeight_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:tint", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/TextureRegionDrawable:tint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[0].o)))->F_region;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_scene_style_TextureRegionDrawable *) NULL_CHECK((frame[2].o)))->F_tint;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_style_TextureRegionDrawable[] {
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
	(void *) M_arc_scene_style_TextureRegionDrawable_draw_float_float_float_float,
	(void *) M_arc_scene_style_TextureRegionDrawable_draw_float_float_float_float_float_float_float_float_float,
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
	(void *) M_arc_scene_style_TextureRegionDrawable_imageSize_R_float,
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

static jclass interfaces[] { &class_arc_scene_style_TransformDrawable, };

static FieldMetadata fields[] {
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(arc_scene_style_TextureRegionDrawable, F_region), "Larc/graphics/g2d/TextureRegion;", 4 },
	{ "tint", &class_arc_graphics_Color, offsetof(arc_scene_style_TextureRegionDrawable, F_tint), "Larc/graphics/Color;", 4 },
	{ "scale", &class_float, offsetof(arc_scene_style_TextureRegionDrawable, F_scale), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_style_TextureRegionDrawable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion, 0, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion_float, 0, "(Larc/graphics/g2d/TextureRegion;F)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_style_TextureRegionDrawable_arc_scene_style_TextureRegionDrawable, 0, "(Larc/scene/style/TextureRegionDrawable;)V", 1 },
	{ "imageSize", (intptr_t) M_arc_scene_style_TextureRegionDrawable_imageSize_R_float, VTABLE_arc_scene_style_TextureRegionDrawable_imageSize_R_float, "()F", 1 },
	{ "draw", (intptr_t) M_arc_scene_style_TextureRegionDrawable_draw_float_float_float_float, VTABLE_arc_scene_style_TextureRegionDrawable_draw_float_float_float_float, "(FFFF)V", 1 },
	{ "draw", (intptr_t) M_arc_scene_style_TextureRegionDrawable_draw_float_float_float_float_float_float_float_float_float, VTABLE_arc_scene_style_TextureRegionDrawable_draw_float_float_float_float_float_float_float_float_float, "(FFFFFFFFF)V", 1 },
	{ "set", (intptr_t) M_arc_scene_style_TextureRegionDrawable_set_arc_graphics_g2d_TextureRegion_R_arc_scene_style_TextureRegionDrawable, VTABLE_arc_scene_style_TextureRegionDrawable_set_arc_graphics_g2d_TextureRegion_R_arc_scene_style_TextureRegionDrawable, "(Larc/graphics/g2d/TextureRegion;)Larc/scene/style/TextureRegionDrawable;", 1 },
	{ "getRegion", (intptr_t) M_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion, VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "setRegion", (intptr_t) M_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion, VTABLE_arc_scene_style_TextureRegionDrawable_setRegion_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "tint", (intptr_t) M_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable, VTABLE_arc_scene_style_TextureRegionDrawable_tint_float_float_float_float_R_arc_scene_style_Drawable, "(FFFF)Larc/scene/style/Drawable;", 1 },
	{ "tint", (intptr_t) M_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable, VTABLE_arc_scene_style_TextureRegionDrawable_tint_arc_graphics_Color_R_arc_scene_style_Drawable, "(Larc/graphics/Color;)Larc/scene/style/Drawable;", 1 },
};

Class class_arc_scene_style_TextureRegionDrawable{
		.nativeName = (intptr_t) "arc/scene/style/TextureRegionDrawable",
		.parentClass = (intptr_t) &class_arc_scene_style_BaseDrawable,
		.size = sizeof(arc_scene_style_TextureRegionDrawable),
		.classVtable = (intptr_t) vtable_arc_scene_style_TextureRegionDrawable,
		.staticInitializer = (intptr_t) clinit_arc_scene_style_TextureRegionDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_style_TextureRegionDrawable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_style_TextureRegionDrawable = registerClass(&class_arc_scene_style_TextureRegionDrawable);

}
