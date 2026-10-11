#include "arc/scene/style/ScaledNinePatchDrawable.h"
#include "arc/scene/style/ScaledNinePatchDrawable.h"
#include "java/lang/Object.h"
#include "arc/scene/style/NinePatchDrawable.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/style/BaseDrawable.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/NinePatch.h"

extern "C" {


void mark_arc_scene_style_ScaledNinePatchDrawable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_style_NinePatchDrawable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_style_ScaledNinePatchDrawable *) object;
}

void clinit_arc_scene_style_ScaledNinePatchDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_NinePatchDrawable(ctx);
}

void init_arc_scene_style_ScaledNinePatchDrawable_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/ScaledNinePatchDrawable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_ScaledNinePatchDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	init_arc_scene_style_ScaledNinePatchDrawable_arc_graphics_g2d_NinePatch_float(ctx, (frame[0].o), (frame[1].o), (jfloat(1)));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_style_ScaledNinePatchDrawable_arc_graphics_g2d_NinePatch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/ScaledNinePatchDrawable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_ScaledNinePatchDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(13);
	init_arc_scene_style_NinePatchDrawable(ctx, (frame[0].o));
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK(sp[0].o))->F_scale = temp0;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[2].f));
	((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK(sp[0].o))->F_scale = temp1;
	LINE_NUMBER(16);
	((func_arc_scene_style_ScaledNinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_style_ScaledNinePatchDrawable_arc_scene_style_NinePatchDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/ScaledNinePatchDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_ScaledNinePatchDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_arc_scene_style_NinePatchDrawable_arc_scene_style_NinePatchDrawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK(sp[0].o))->F_scale = temp0;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_ScaledNinePatchDrawable_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/ScaledNinePatchDrawable:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_arc_scene_style_ScaledNinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch])(ctx, (frame[0].o));
	((func_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (jfloat(0)), (jfloat(0)), ((frame[3].f) / ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale)), ((frame[4].f) / ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale)), ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale), ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale), (jfloat(0)));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_ScaledNinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/ScaledNinePatchDrawable:setPatch", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	M_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getTotalWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getTotalWidth_R_float])(ctx, (frame[1].o));
	((func_arc_scene_style_ScaledNinePatchDrawable_setMinWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_setMinWidth_float])(ctx, sp[0].o, (temp0 * ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale)));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_NinePatch_getTotalHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getTotalHeight_R_float])(ctx, (frame[1].o));
	((func_arc_scene_style_ScaledNinePatchDrawable_setMinHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_ScaledNinePatchDrawable_setMinHeight_float])(ctx, sp[0].o, (temp1 * ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale)));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_ScaledNinePatchDrawable_getLeftWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/ScaledNinePatchDrawable:getLeftWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_scene_style_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getPadLeft_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getPadLeft_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_ScaledNinePatchDrawable_getRightWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/ScaledNinePatchDrawable:getRightWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_scene_style_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getPadRight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getPadRight_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_ScaledNinePatchDrawable_getTopHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/ScaledNinePatchDrawable:getTopHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_scene_style_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getPadTop_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getPadTop_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_ScaledNinePatchDrawable_getBottomHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/ScaledNinePatchDrawable:getBottomHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_scene_style_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getPadBottom_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getPadBottom_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((arc_scene_style_ScaledNinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_scale));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_style_ScaledNinePatchDrawable[] {
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
	(void *) M_arc_scene_style_ScaledNinePatchDrawable_draw_float_float_float_float,
	(void *) M_arc_scene_style_NinePatchDrawable_draw_float_float_float_float_float_float_float_float_float,
	(void *) M_arc_scene_style_ScaledNinePatchDrawable_getLeftWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setLeftWidth_float,
	(void *) M_arc_scene_style_ScaledNinePatchDrawable_getRightWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setRightWidth_float,
	(void *) M_arc_scene_style_ScaledNinePatchDrawable_getTopHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setTopHeight_float,
	(void *) M_arc_scene_style_ScaledNinePatchDrawable_getBottomHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setBottomHeight_float,
	(void *) M_arc_scene_style_BaseDrawable_getMinWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setMinWidth_float,
	(void *) M_arc_scene_style_BaseDrawable_getMinHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setMinHeight_float,
	(void *) M_arc_scene_style_Drawable_imageSize_R_float,
	(void *) M_arc_scene_style_BaseDrawable_getName_R_java_lang_String,
	(void *) M_arc_scene_style_BaseDrawable_setName_java_lang_String,
	(void *) M_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch,
	(void *) M_arc_scene_style_ScaledNinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch,
	(void *) M_arc_scene_style_NinePatchDrawable_tint_arc_graphics_Color_R_arc_scene_style_NinePatchDrawable,
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
	{ "getPatch", "()Larc/graphics/g2d/NinePatch;" },
	{ "setPatch", "(Larc/graphics/g2d/NinePatch;)V" },
	{ "tint", "(Larc/graphics/Color;)Larc/scene/style/NinePatchDrawable;" },
};

static FieldMetadata fields[] {
	{ "scale", &class_float, offsetof(arc_scene_style_ScaledNinePatchDrawable, F_scale), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_style_ScaledNinePatchDrawable_arc_graphics_g2d_NinePatch, 0, "(Larc/graphics/g2d/NinePatch;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_style_ScaledNinePatchDrawable_arc_graphics_g2d_NinePatch_float, 0, "(Larc/graphics/g2d/NinePatch;F)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_style_ScaledNinePatchDrawable_arc_scene_style_NinePatchDrawable, 0, "(Larc/scene/style/NinePatchDrawable;)V", 1 },
	{ "draw", (intptr_t) M_arc_scene_style_ScaledNinePatchDrawable_draw_float_float_float_float, VTABLE_arc_scene_style_ScaledNinePatchDrawable_draw_float_float_float_float, "(FFFF)V", 1 },
	{ "setPatch", (intptr_t) M_arc_scene_style_ScaledNinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch, VTABLE_arc_scene_style_ScaledNinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch, "(Larc/graphics/g2d/NinePatch;)V", 1 },
	{ "getLeftWidth", (intptr_t) M_arc_scene_style_ScaledNinePatchDrawable_getLeftWidth_R_float, VTABLE_arc_scene_style_ScaledNinePatchDrawable_getLeftWidth_R_float, "()F", 1 },
	{ "getRightWidth", (intptr_t) M_arc_scene_style_ScaledNinePatchDrawable_getRightWidth_R_float, VTABLE_arc_scene_style_ScaledNinePatchDrawable_getRightWidth_R_float, "()F", 1 },
	{ "getTopHeight", (intptr_t) M_arc_scene_style_ScaledNinePatchDrawable_getTopHeight_R_float, VTABLE_arc_scene_style_ScaledNinePatchDrawable_getTopHeight_R_float, "()F", 1 },
	{ "getBottomHeight", (intptr_t) M_arc_scene_style_ScaledNinePatchDrawable_getBottomHeight_R_float, VTABLE_arc_scene_style_ScaledNinePatchDrawable_getBottomHeight_R_float, "()F", 1 },
};

Class class_arc_scene_style_ScaledNinePatchDrawable{
		.nativeName = (intptr_t) "arc/scene/style/ScaledNinePatchDrawable",
		.parentClass = (intptr_t) &class_arc_scene_style_NinePatchDrawable,
		.size = sizeof(arc_scene_style_ScaledNinePatchDrawable),
		.classVtable = (intptr_t) vtable_arc_scene_style_ScaledNinePatchDrawable,
		.staticInitializer = (intptr_t) clinit_arc_scene_style_ScaledNinePatchDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_style_ScaledNinePatchDrawable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_style_ScaledNinePatchDrawable = registerClass(&class_arc_scene_style_ScaledNinePatchDrawable);

}
