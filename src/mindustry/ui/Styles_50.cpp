#include "mindustry/ui/Styles_50.h"
#include "arc/scene/style/ScaledNinePatchDrawable.h"
#include "java/lang/Object.h"
#include "mindustry/ui/Styles_50.h"
#include "arc/scene/style/NinePatchDrawable.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/style/BaseDrawable.h"
#include "arc/graphics/g2d/NinePatch.h"

extern "C" {


void mark_mindustry_ui_Styles$50(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_style_ScaledNinePatchDrawable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_Styles$50 *) object;
}

void clinit_mindustry_ui_Styles$50(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_ScaledNinePatchDrawable(ctx);
}

void init_mindustry_ui_Styles$50_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles$50:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Styles$50(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(483);
	init_arc_scene_style_ScaledNinePatchDrawable_arc_graphics_g2d_NinePatch(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_Styles$50_getLeftWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles$50:getLeftWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_Styles$50_getRightWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles$50:getRightWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_Styles$50_getTopHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles$50:getTopHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_Styles$50_getBottomHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles$50:getBottomHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Styles$50[] {
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
	(void *) M_mindustry_ui_Styles$50_getLeftWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setLeftWidth_float,
	(void *) M_mindustry_ui_Styles$50_getRightWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setRightWidth_float,
	(void *) M_mindustry_ui_Styles$50_getTopHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setTopHeight_float,
	(void *) M_mindustry_ui_Styles$50_getBottomHeight_R_float,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Styles$50_arc_graphics_g2d_NinePatch, 0, "(Larc/graphics/g2d/NinePatch;)V", 0 },
	{ "getLeftWidth", (intptr_t) M_mindustry_ui_Styles$50_getLeftWidth_R_float, VTABLE_mindustry_ui_Styles$50_getLeftWidth_R_float, "()F", 1 },
	{ "getRightWidth", (intptr_t) M_mindustry_ui_Styles$50_getRightWidth_R_float, VTABLE_mindustry_ui_Styles$50_getRightWidth_R_float, "()F", 1 },
	{ "getTopHeight", (intptr_t) M_mindustry_ui_Styles$50_getTopHeight_R_float, VTABLE_mindustry_ui_Styles$50_getTopHeight_R_float, "()F", 1 },
	{ "getBottomHeight", (intptr_t) M_mindustry_ui_Styles$50_getBottomHeight_R_float, VTABLE_mindustry_ui_Styles$50_getBottomHeight_R_float, "()F", 1 },
};

Class class_mindustry_ui_Styles$50{
		.nativeName = (intptr_t) "mindustry/ui/Styles$50",
		.parentClass = (intptr_t) &class_arc_scene_style_ScaledNinePatchDrawable,
		.size = sizeof(mindustry_ui_Styles$50),
		.classVtable = (intptr_t) vtable_mindustry_ui_Styles$50,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Styles$50,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Styles$50,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_Styles$50 = registerClass(&class_mindustry_ui_Styles$50);

}

