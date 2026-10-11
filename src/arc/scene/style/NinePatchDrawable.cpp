#include "arc/scene/style/NinePatchDrawable.h"
#include "java/lang/Object.h"
#include "arc/scene/style/NinePatchDrawable.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/style/BaseDrawable.h"
#include "arc/graphics/Color.h"
#include "arc/scene/style/TransformDrawable.h"
#include "arc/graphics/g2d/NinePatch.h"

extern "C" {


void mark_arc_scene_style_NinePatchDrawable(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_style_NinePatchDrawable *) object;
	if (self->F_patch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_patch)->clazz)->markFunction)((jobject) self->F_patch, mark, depth + 1);
}

void clinit_arc_scene_style_NinePatchDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_style_BaseDrawable(ctx);
}

void init_arc_scene_style_NinePatchDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/NinePatchDrawable:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_NinePatchDrawable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_arc_scene_style_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_style_NinePatchDrawable_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/NinePatchDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_NinePatchDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	init_arc_scene_style_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((func_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_style_NinePatchDrawable_arc_scene_style_NinePatchDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/NinePatchDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_NinePatchDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	init_arc_scene_style_BaseDrawable_arc_scene_style_Drawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_style_NinePatchDrawable *) NULL_CHECK((frame[1].o)))->F_patch;
	((func_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_NinePatchDrawable_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/NinePatchDrawable:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_scene_style_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	((func_arc_graphics_g2d_NinePatch_draw_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_NinePatch_draw_float_float_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_NinePatchDrawable_draw_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/NinePatchDrawable:draw", 20 };
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
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_scene_style_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	((func_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].f));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/NinePatchDrawable:getPatch", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_scene_style_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/NinePatchDrawable:setPatch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	((arc_scene_style_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch = (jref) (frame[1].o);
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getTotalWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getTotalWidth_R_float])(ctx, (frame[1].o));
	((func_arc_scene_style_NinePatchDrawable_setMinWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_setMinWidth_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_NinePatch_getTotalHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getTotalHeight_R_float])(ctx, (frame[1].o));
	((func_arc_scene_style_NinePatchDrawable_setMinHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_setMinHeight_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_graphics_g2d_NinePatch_getPadTop_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getPadTop_R_float])(ctx, (frame[1].o));
	((func_arc_scene_style_NinePatchDrawable_setTopHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_setTopHeight_float])(ctx, sp[0].o, temp2);
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_NinePatch_getPadRight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getPadRight_R_float])(ctx, (frame[1].o));
	((func_arc_scene_style_NinePatchDrawable_setRightWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_setRightWidth_float])(ctx, sp[0].o, temp3);
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_NinePatch_getPadBottom_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getPadBottom_R_float])(ctx, (frame[1].o));
	((func_arc_scene_style_NinePatchDrawable_setBottomHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_setBottomHeight_float])(ctx, sp[0].o, temp4);
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_graphics_g2d_NinePatch_getPadLeft_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getPadLeft_R_float])(ctx, (frame[1].o));
	((func_arc_scene_style_NinePatchDrawable_setLeftWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_setLeftWidth_float])(ctx, sp[0].o, temp5);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_style_NinePatchDrawable_tint_arc_graphics_Color_R_arc_scene_style_NinePatchDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/NinePatchDrawable:tint", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	clinit_arc_scene_style_NinePatchDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_NinePatchDrawable);
	init_arc_scene_style_NinePatchDrawable_arc_scene_style_NinePatchDrawable(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = frame[2].o;
	clinit_arc_graphics_g2d_NinePatch(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_NinePatch);
	sp[2].o = (jobject)((func_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch])(ctx, (frame[2].o));
	init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_NinePatch_arc_graphics_Color(ctx, sp[1].o, sp[2].o, (frame[1].o));
	((func_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_style_NinePatchDrawable[] {
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
	(void *) M_arc_scene_style_NinePatchDrawable_draw_float_float_float_float,
	(void *) M_arc_scene_style_NinePatchDrawable_draw_float_float_float_float_float_float_float_float_float,
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
	(void *) M_arc_scene_style_Drawable_imageSize_R_float,
	(void *) M_arc_scene_style_BaseDrawable_getName_R_java_lang_String,
	(void *) M_arc_scene_style_BaseDrawable_setName_java_lang_String,
	(void *) M_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch,
	(void *) M_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch,
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

static jclass interfaces[] { &class_arc_scene_style_TransformDrawable, };

static FieldMetadata fields[] {
	{ "patch", &class_arc_graphics_g2d_NinePatch, offsetof(arc_scene_style_NinePatchDrawable, F_patch), "Larc/graphics/g2d/NinePatch;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_style_NinePatchDrawable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_style_NinePatchDrawable_arc_graphics_g2d_NinePatch, 0, "(Larc/graphics/g2d/NinePatch;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_style_NinePatchDrawable_arc_scene_style_NinePatchDrawable, 0, "(Larc/scene/style/NinePatchDrawable;)V", 1 },
	{ "draw", (intptr_t) M_arc_scene_style_NinePatchDrawable_draw_float_float_float_float, VTABLE_arc_scene_style_NinePatchDrawable_draw_float_float_float_float, "(FFFF)V", 1 },
	{ "draw", (intptr_t) M_arc_scene_style_NinePatchDrawable_draw_float_float_float_float_float_float_float_float_float, VTABLE_arc_scene_style_NinePatchDrawable_draw_float_float_float_float_float_float_float_float_float, "(FFFFFFFFF)V", 1 },
	{ "getPatch", (intptr_t) M_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch, VTABLE_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch, "()Larc/graphics/g2d/NinePatch;", 1 },
	{ "setPatch", (intptr_t) M_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch, VTABLE_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch, "(Larc/graphics/g2d/NinePatch;)V", 1 },
	{ "tint", (intptr_t) M_arc_scene_style_NinePatchDrawable_tint_arc_graphics_Color_R_arc_scene_style_NinePatchDrawable, VTABLE_arc_scene_style_NinePatchDrawable_tint_arc_graphics_Color_R_arc_scene_style_NinePatchDrawable, "(Larc/graphics/Color;)Larc/scene/style/NinePatchDrawable;", 1 },
};

Class class_arc_scene_style_NinePatchDrawable{
		.nativeName = (intptr_t) "arc/scene/style/NinePatchDrawable",
		.parentClass = (intptr_t) &class_arc_scene_style_BaseDrawable,
		.size = sizeof(arc_scene_style_NinePatchDrawable),
		.classVtable = (intptr_t) vtable_arc_scene_style_NinePatchDrawable,
		.staticInitializer = (intptr_t) clinit_arc_scene_style_NinePatchDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_style_NinePatchDrawable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_style_NinePatchDrawable = registerClass(&class_arc_scene_style_NinePatchDrawable);

}
