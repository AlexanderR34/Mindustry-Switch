#include "arc/util/viewport/ScreenViewport.h"
#include "java/lang/Object.h"
#include "arc/util/viewport/ScreenViewport.h"
#include "arc/util/viewport/Viewport.h"
#include "arc/graphics/Camera.h"

extern "C" {


void mark_arc_util_viewport_ScreenViewport(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_util_viewport_Viewport(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_viewport_ScreenViewport *) object;
}

void clinit_arc_util_viewport_ScreenViewport(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_viewport_Viewport(ctx);
}

void init_arc_util_viewport_ScreenViewport(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/ScreenViewport:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_viewport_ScreenViewport(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Camera(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Camera);
	init_arc_graphics_Camera(ctx, sp[1].o);
	init_arc_util_viewport_ScreenViewport_arc_graphics_Camera(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_viewport_ScreenViewport_arc_graphics_Camera(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/ScreenViewport:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_viewport_ScreenViewport(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	init_arc_util_viewport_Viewport(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((arc_util_viewport_ScreenViewport *) NULL_CHECK((frame[0].o)))->F_unitsPerPixel = (jfloat(1));
	LINE_NUMBER(20);
	((func_arc_util_viewport_ScreenViewport_setCamera_arc_graphics_Camera) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_viewport_ScreenViewport_setCamera_arc_graphics_Camera])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_ScreenViewport_update_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/ScreenViewport:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(25);
	((func_arc_util_viewport_ScreenViewport_setScreenBounds_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_viewport_ScreenViewport_setScreenBounds_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (frame[1].i), (frame[2].i));
	LINE_NUMBER(26);
	((func_arc_util_viewport_ScreenViewport_setWorldSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_viewport_ScreenViewport_setWorldSize_float_float])(ctx, (frame[0].o), ((jfloat((frame[1].i))) * ((jfloat)((arc_util_viewport_ScreenViewport *) NULL_CHECK((frame[0].o)))->F_unitsPerPixel)), ((jfloat((frame[2].i))) * ((jfloat)((arc_util_viewport_ScreenViewport *) NULL_CHECK((frame[0].o)))->F_unitsPerPixel)));
	LINE_NUMBER(27);
	((func_arc_util_viewport_ScreenViewport_apply_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_viewport_ScreenViewport_apply_boolean])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_util_viewport_ScreenViewport_getUnitsPerPixel_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/ScreenViewport:getUnitsPerPixel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return ((jfloat)((arc_util_viewport_ScreenViewport *) NULL_CHECK((frame[0].o)))->F_unitsPerPixel);
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_ScreenViewport_setUnitsPerPixel_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/ScreenViewport:setUnitsPerPixel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(39);
	((arc_util_viewport_ScreenViewport *) NULL_CHECK((frame[0].o)))->F_unitsPerPixel = (frame[1].f);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_viewport_ScreenViewport[] {
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
	(void *) M_arc_util_viewport_Viewport_apply,
	(void *) M_arc_util_viewport_Viewport_apply_boolean,
	(void *) M_arc_util_viewport_Viewport_update_int_int,
	(void *) M_arc_util_viewport_ScreenViewport_update_int_int_boolean,
	(void *) M_arc_util_viewport_Viewport_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_util_viewport_Viewport_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_util_viewport_Viewport_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect,
	(void *) M_arc_util_viewport_Viewport_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2,
	(void *) M_arc_util_viewport_Viewport_getCamera_R_arc_graphics_Camera,
	(void *) M_arc_util_viewport_Viewport_setCamera_arc_graphics_Camera,
	(void *) M_arc_util_viewport_Viewport_getWorldWidth_R_float,
	(void *) M_arc_util_viewport_Viewport_setWorldWidth_float,
	(void *) M_arc_util_viewport_Viewport_getWorldHeight_R_float,
	(void *) M_arc_util_viewport_Viewport_setWorldHeight_float,
	(void *) M_arc_util_viewport_Viewport_setWorldSize_float_float,
	(void *) M_arc_util_viewport_Viewport_getScreenX_R_int,
	(void *) M_arc_util_viewport_Viewport_setScreenX_int,
	(void *) M_arc_util_viewport_Viewport_getScreenY_R_int,
	(void *) M_arc_util_viewport_Viewport_setScreenY_int,
	(void *) M_arc_util_viewport_Viewport_getScreenWidth_R_int,
	(void *) M_arc_util_viewport_Viewport_setScreenWidth_int,
	(void *) M_arc_util_viewport_Viewport_getScreenHeight_R_int,
	(void *) M_arc_util_viewport_Viewport_setScreenHeight_int,
	(void *) M_arc_util_viewport_Viewport_setScreenPosition_int_int,
	(void *) M_arc_util_viewport_Viewport_setScreenSize_int_int,
	(void *) M_arc_util_viewport_Viewport_setScreenBounds_int_int_int_int,
	(void *) M_arc_util_viewport_Viewport_getLeftGutterWidth_R_int,
	(void *) M_arc_util_viewport_Viewport_getRightGutterX_R_int,
	(void *) M_arc_util_viewport_Viewport_getRightGutterWidth_R_int,
	(void *) M_arc_util_viewport_Viewport_getBottomGutterHeight_R_int,
	(void *) M_arc_util_viewport_Viewport_getTopGutterY_R_int,
	(void *) M_arc_util_viewport_Viewport_getTopGutterHeight_R_int,
	(void *) M_arc_util_viewport_ScreenViewport_getUnitsPerPixel_R_float,
	(void *) M_arc_util_viewport_ScreenViewport_setUnitsPerPixel_float,
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
	{ "apply", "()V" },
	{ "apply", "(Z)V" },
	{ "update", "(II)V" },
	{ "update", "(IIZ)V" },
	{ "unproject", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "project", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "calculateScissors", "(Larc/math/Mat;Larc/math/geom/Rect;Larc/math/geom/Rect;)V" },
	{ "toScreenCoordinates", "(Larc/math/geom/Vec2;Larc/math/Mat;)Larc/math/geom/Vec2;" },
	{ "getCamera", "()Larc/graphics/Camera;" },
	{ "setCamera", "(Larc/graphics/Camera;)V" },
	{ "getWorldWidth", "()F" },
	{ "setWorldWidth", "(F)V" },
	{ "getWorldHeight", "()F" },
	{ "setWorldHeight", "(F)V" },
	{ "setWorldSize", "(FF)V" },
	{ "getScreenX", "()I" },
	{ "setScreenX", "(I)V" },
	{ "getScreenY", "()I" },
	{ "setScreenY", "(I)V" },
	{ "getScreenWidth", "()I" },
	{ "setScreenWidth", "(I)V" },
	{ "getScreenHeight", "()I" },
	{ "setScreenHeight", "(I)V" },
	{ "setScreenPosition", "(II)V" },
	{ "setScreenSize", "(II)V" },
	{ "setScreenBounds", "(IIII)V" },
	{ "getLeftGutterWidth", "()I" },
	{ "getRightGutterX", "()I" },
	{ "getRightGutterWidth", "()I" },
	{ "getBottomGutterHeight", "()I" },
	{ "getTopGutterY", "()I" },
	{ "getTopGutterHeight", "()I" },
	{ "getUnitsPerPixel", "()F" },
	{ "setUnitsPerPixel", "(F)V" },
};

static FieldMetadata fields[] {
	{ "unitsPerPixel", &class_float, offsetof(arc_util_viewport_ScreenViewport, F_unitsPerPixel), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_viewport_ScreenViewport, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_util_viewport_ScreenViewport_arc_graphics_Camera, 0, "(Larc/graphics/Camera;)V", 1 },
	{ "update", (intptr_t) M_arc_util_viewport_ScreenViewport_update_int_int_boolean, VTABLE_arc_util_viewport_ScreenViewport_update_int_int_boolean, "(IIZ)V", 1 },
	{ "getUnitsPerPixel", (intptr_t) M_arc_util_viewport_ScreenViewport_getUnitsPerPixel_R_float, VTABLE_arc_util_viewport_ScreenViewport_getUnitsPerPixel_R_float, "()F", 1 },
	{ "setUnitsPerPixel", (intptr_t) M_arc_util_viewport_ScreenViewport_setUnitsPerPixel_float, VTABLE_arc_util_viewport_ScreenViewport_setUnitsPerPixel_float, "(F)V", 1 },
};

Class class_arc_util_viewport_ScreenViewport{
		.nativeName = (intptr_t) "arc/util/viewport/ScreenViewport",
		.parentClass = (intptr_t) &class_arc_util_viewport_Viewport,
		.size = sizeof(arc_util_viewport_ScreenViewport),
		.classVtable = (intptr_t) vtable_arc_util_viewport_ScreenViewport,
		.staticInitializer = (intptr_t) clinit_arc_util_viewport_ScreenViewport,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_viewport_ScreenViewport,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_viewport_ScreenViewport = registerClass(&class_arc_util_viewport_ScreenViewport);

}
