#include "arc/scene/Scene_1.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/util/viewport/ScreenViewport.h"
#include "arc/scene/Scene_1.h"
#include "arc/util/viewport/Viewport.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Camera.h"
#include "arc/graphics/g2d/ScissorStack.h"

extern "C" {


void mark_arc_scene_Scene$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_util_viewport_ScreenViewport(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_Scene$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_Scene$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_viewport_ScreenViewport(ctx);
}

void init_arc_scene_Scene$1_arc_scene_Scene(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	((arc_scene_Scene$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_util_viewport_ScreenViewport(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene$1_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene$1:calculateScissors", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_scene_Scene$1_getCamera_R_arc_graphics_Camera) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene$1_getCamera_R_arc_graphics_Camera])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_scene_Scene$1_getScreenX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene$1_getScreenX_R_int])(ctx, (frame[0].o));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)((func_arc_scene_Scene$1_getScreenY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene$1_getScreenY_R_int])(ctx, (frame[0].o));
	jfloat temp3 = jfloat(temp2);
	jint temp4 = (jint)((func_arc_scene_Scene$1_getScreenWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene$1_getScreenWidth_R_int])(ctx, (frame[0].o));
	jfloat temp5 = jfloat(temp4);
	jint temp6 = (jint)((func_arc_scene_Scene$1_getScreenHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene$1_getScreenHeight_R_int])(ctx, (frame[0].o));
	jfloat temp7 = jfloat(temp6);
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	LINE_NUMBER(47);
	SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_float_float_float_float_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(ctx, sp[0].o, temp1, temp3, temp5, temp7, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_Scene$1[] {
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
	(void *) M_arc_scene_Scene$1_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect,
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
	{ "this$0", &class_arc_scene_Scene, offsetof(arc_scene_Scene$1, F_this$0), "Larc/scene/Scene;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_Scene$1_arc_scene_Scene, 0, "(Larc/scene/Scene;)V", 0 },
	{ "calculateScissors", (intptr_t) M_arc_scene_Scene$1_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect, VTABLE_arc_scene_Scene$1_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect, "(Larc/math/Mat;Larc/math/geom/Rect;Larc/math/geom/Rect;)V", 1 },
};

Class class_arc_scene_Scene$1{
		.nativeName = (intptr_t) "arc/scene/Scene$1",
		.parentClass = (intptr_t) &class_arc_util_viewport_ScreenViewport,
		.size = sizeof(arc_scene_Scene$1),
		.classVtable = (intptr_t) vtable_arc_scene_Scene$1,
		.staticInitializer = (intptr_t) clinit_arc_scene_Scene$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_Scene$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_Scene$1 = registerClass(&class_arc_scene_Scene$1);

}

