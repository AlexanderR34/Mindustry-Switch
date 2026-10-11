#include "arc/util/viewport/Viewport.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/gl/HdpiUtils.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "arc/util/viewport/Viewport.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Camera.h"
#include "arc/graphics/g2d/ScissorStack.h"

extern "C" {


void mark_arc_util_viewport_Viewport(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_viewport_Viewport *) object;
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
	if (self->F_camera)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camera)->clazz)->markFunction)((jobject) self->F_camera, mark, depth + 1);
}

void clinit_arc_util_viewport_Viewport(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_viewport_Viewport(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_viewport_Viewport(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_util_viewport_Viewport *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:apply", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	((func_arc_util_viewport_Viewport_apply_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_viewport_Viewport_apply_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_apply_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(32);
	SM_arc_graphics_gl_HdpiUtils_glViewport_int_int_int_int(ctx, ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX), ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY), ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth), ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width = ((jfloat)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth);
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height = ((jfloat)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight);
	LINE_NUMBER(35);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth) / (jfloat(2))), (((jfloat)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight) / (jfloat(2))));
	}
label_4:;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	((func_arc_graphics_Camera_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_update])(ctx, sp[0].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_update_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(41);
	((func_arc_util_viewport_Viewport_update_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_viewport_Viewport_update_int_int_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(0)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_update_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(51);
	((func_arc_util_viewport_Viewport_apply_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_viewport_Viewport_apply_boolean])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_viewport_Viewport_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:unproject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))));
	LINE_NUMBER(62);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_viewport_Viewport_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:project", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))));
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:calculateScissors", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_float_float_float_float_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(ctx, sp[0].o, (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX))), (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY))), (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth))), (jfloat(((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight))), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_viewport_Viewport_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:toScreenCoordinates", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (temp1 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(93);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_tmp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_viewport_Viewport_getCamera_R_arc_graphics_Camera(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getCamera", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setCamera_arc_graphics_Camera(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setCamera", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_camera = (jref) (frame[1].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_util_viewport_Viewport_getWorldWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getWorldWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return ((jfloat)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth);
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setWorldWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setWorldWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(111);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth = (frame[1].f);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_util_viewport_Viewport_getWorldHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getWorldHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return ((jfloat)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight);
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setWorldHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setWorldHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(120);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight = (frame[1].f);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setWorldSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setWorldSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(124);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldWidth = (frame[1].f);
	LINE_NUMBER(125);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_worldHeight = (frame[2].f);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getScreenX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getScreenX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX);
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setScreenX_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setScreenX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(134);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX = (frame[1].i);
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getScreenY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getScreenY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY);
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setScreenY_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setScreenY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(143);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY = (frame[1].i);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getScreenWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getScreenWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth);
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setScreenWidth_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setScreenWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(152);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth = (frame[1].i);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getScreenHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getScreenHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight);
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setScreenHeight_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setScreenHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(161);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight = (frame[1].i);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setScreenPosition_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setScreenPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(166);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX = (frame[1].i);
	LINE_NUMBER(167);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY = (frame[2].i);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setScreenSize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setScreenSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(172);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth = (frame[1].i);
	LINE_NUMBER(173);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight = (frame[2].i);
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_viewport_Viewport_setScreenBounds_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:setScreenBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(178);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX = (frame[1].i);
	LINE_NUMBER(179);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY = (frame[2].i);
	LINE_NUMBER(180);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth = (frame[3].i);
	LINE_NUMBER(181);
	((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight = (frame[4].i);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getLeftGutterWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getLeftGutterWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX);
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getRightGutterX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getRightGutterX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX) + ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth));
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getRightGutterWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getRightGutterWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - (((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenX) + ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenWidth)));
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getBottomGutterHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getBottomGutterHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY);
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getTopGutterY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getTopGutterY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY) + ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight));
	}

	popStackFrame(ctx);
}

jint M_arc_util_viewport_Viewport_getTopGutterHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/viewport/Viewport:getTopGutterHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - (((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenY) + ((jint)((arc_util_viewport_Viewport *) NULL_CHECK((frame[0].o)))->F_screenHeight)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_viewport_Viewport[] {
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
	(void *) M_arc_util_viewport_Viewport_update_int_int_boolean,
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
};

static FieldMetadata fields[] {
	{ "tmp", &class_arc_math_geom_Vec2, offsetof(arc_util_viewport_Viewport, F_tmp), "Larc/math/geom/Vec2;", 18 },
	{ "camera", &class_arc_graphics_Camera, offsetof(arc_util_viewport_Viewport, F_camera), "Larc/graphics/Camera;", 2 },
	{ "worldWidth", &class_float, offsetof(arc_util_viewport_Viewport, F_worldWidth), "F", 2 },
	{ "worldHeight", &class_float, offsetof(arc_util_viewport_Viewport, F_worldHeight), "F", 2 },
	{ "screenX", &class_int, offsetof(arc_util_viewport_Viewport, F_screenX), "I", 2 },
	{ "screenY", &class_int, offsetof(arc_util_viewport_Viewport, F_screenY), "I", 2 },
	{ "screenWidth", &class_int, offsetof(arc_util_viewport_Viewport, F_screenWidth), "I", 2 },
	{ "screenHeight", &class_int, offsetof(arc_util_viewport_Viewport, F_screenHeight), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_viewport_Viewport, 0, "()V", 1 },
	{ "apply", (intptr_t) M_arc_util_viewport_Viewport_apply, VTABLE_arc_util_viewport_Viewport_apply, "()V", 1 },
	{ "apply", (intptr_t) M_arc_util_viewport_Viewport_apply_boolean, VTABLE_arc_util_viewport_Viewport_apply_boolean, "(Z)V", 1 },
	{ "update", (intptr_t) M_arc_util_viewport_Viewport_update_int_int, VTABLE_arc_util_viewport_Viewport_update_int_int, "(II)V", 17 },
	{ "update", (intptr_t) M_arc_util_viewport_Viewport_update_int_int_boolean, VTABLE_arc_util_viewport_Viewport_update_int_int_boolean, "(IIZ)V", 1 },
	{ "unproject", (intptr_t) M_arc_util_viewport_Viewport_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_util_viewport_Viewport_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "project", (intptr_t) M_arc_util_viewport_Viewport_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_util_viewport_Viewport_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "calculateScissors", (intptr_t) M_arc_util_viewport_Viewport_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect, VTABLE_arc_util_viewport_Viewport_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect, "(Larc/math/Mat;Larc/math/geom/Rect;Larc/math/geom/Rect;)V", 1 },
	{ "toScreenCoordinates", (intptr_t) M_arc_util_viewport_Viewport_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2, VTABLE_arc_util_viewport_Viewport_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;Larc/math/Mat;)Larc/math/geom/Vec2;", 1 },
	{ "getCamera", (intptr_t) M_arc_util_viewport_Viewport_getCamera_R_arc_graphics_Camera, VTABLE_arc_util_viewport_Viewport_getCamera_R_arc_graphics_Camera, "()Larc/graphics/Camera;", 1 },
	{ "setCamera", (intptr_t) M_arc_util_viewport_Viewport_setCamera_arc_graphics_Camera, VTABLE_arc_util_viewport_Viewport_setCamera_arc_graphics_Camera, "(Larc/graphics/Camera;)V", 1 },
	{ "getWorldWidth", (intptr_t) M_arc_util_viewport_Viewport_getWorldWidth_R_float, VTABLE_arc_util_viewport_Viewport_getWorldWidth_R_float, "()F", 1 },
	{ "setWorldWidth", (intptr_t) M_arc_util_viewport_Viewport_setWorldWidth_float, VTABLE_arc_util_viewport_Viewport_setWorldWidth_float, "(F)V", 1 },
	{ "getWorldHeight", (intptr_t) M_arc_util_viewport_Viewport_getWorldHeight_R_float, VTABLE_arc_util_viewport_Viewport_getWorldHeight_R_float, "()F", 1 },
	{ "setWorldHeight", (intptr_t) M_arc_util_viewport_Viewport_setWorldHeight_float, VTABLE_arc_util_viewport_Viewport_setWorldHeight_float, "(F)V", 1 },
	{ "setWorldSize", (intptr_t) M_arc_util_viewport_Viewport_setWorldSize_float_float, VTABLE_arc_util_viewport_Viewport_setWorldSize_float_float, "(FF)V", 1 },
	{ "getScreenX", (intptr_t) M_arc_util_viewport_Viewport_getScreenX_R_int, VTABLE_arc_util_viewport_Viewport_getScreenX_R_int, "()I", 1 },
	{ "setScreenX", (intptr_t) M_arc_util_viewport_Viewport_setScreenX_int, VTABLE_arc_util_viewport_Viewport_setScreenX_int, "(I)V", 1 },
	{ "getScreenY", (intptr_t) M_arc_util_viewport_Viewport_getScreenY_R_int, VTABLE_arc_util_viewport_Viewport_getScreenY_R_int, "()I", 1 },
	{ "setScreenY", (intptr_t) M_arc_util_viewport_Viewport_setScreenY_int, VTABLE_arc_util_viewport_Viewport_setScreenY_int, "(I)V", 1 },
	{ "getScreenWidth", (intptr_t) M_arc_util_viewport_Viewport_getScreenWidth_R_int, VTABLE_arc_util_viewport_Viewport_getScreenWidth_R_int, "()I", 1 },
	{ "setScreenWidth", (intptr_t) M_arc_util_viewport_Viewport_setScreenWidth_int, VTABLE_arc_util_viewport_Viewport_setScreenWidth_int, "(I)V", 1 },
	{ "getScreenHeight", (intptr_t) M_arc_util_viewport_Viewport_getScreenHeight_R_int, VTABLE_arc_util_viewport_Viewport_getScreenHeight_R_int, "()I", 1 },
	{ "setScreenHeight", (intptr_t) M_arc_util_viewport_Viewport_setScreenHeight_int, VTABLE_arc_util_viewport_Viewport_setScreenHeight_int, "(I)V", 1 },
	{ "setScreenPosition", (intptr_t) M_arc_util_viewport_Viewport_setScreenPosition_int_int, VTABLE_arc_util_viewport_Viewport_setScreenPosition_int_int, "(II)V", 1 },
	{ "setScreenSize", (intptr_t) M_arc_util_viewport_Viewport_setScreenSize_int_int, VTABLE_arc_util_viewport_Viewport_setScreenSize_int_int, "(II)V", 1 },
	{ "setScreenBounds", (intptr_t) M_arc_util_viewport_Viewport_setScreenBounds_int_int_int_int, VTABLE_arc_util_viewport_Viewport_setScreenBounds_int_int_int_int, "(IIII)V", 1 },
	{ "getLeftGutterWidth", (intptr_t) M_arc_util_viewport_Viewport_getLeftGutterWidth_R_int, VTABLE_arc_util_viewport_Viewport_getLeftGutterWidth_R_int, "()I", 1 },
	{ "getRightGutterX", (intptr_t) M_arc_util_viewport_Viewport_getRightGutterX_R_int, VTABLE_arc_util_viewport_Viewport_getRightGutterX_R_int, "()I", 1 },
	{ "getRightGutterWidth", (intptr_t) M_arc_util_viewport_Viewport_getRightGutterWidth_R_int, VTABLE_arc_util_viewport_Viewport_getRightGutterWidth_R_int, "()I", 1 },
	{ "getBottomGutterHeight", (intptr_t) M_arc_util_viewport_Viewport_getBottomGutterHeight_R_int, VTABLE_arc_util_viewport_Viewport_getBottomGutterHeight_R_int, "()I", 1 },
	{ "getTopGutterY", (intptr_t) M_arc_util_viewport_Viewport_getTopGutterY_R_int, VTABLE_arc_util_viewport_Viewport_getTopGutterY_R_int, "()I", 1 },
	{ "getTopGutterHeight", (intptr_t) M_arc_util_viewport_Viewport_getTopGutterHeight_R_int, VTABLE_arc_util_viewport_Viewport_getTopGutterHeight_R_int, "()I", 1 },
};

Class class_arc_util_viewport_Viewport{
		.nativeName = (intptr_t) "arc/util/viewport/Viewport",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_viewport_Viewport),
		.classVtable = (intptr_t) vtable_arc_util_viewport_Viewport,
		.staticInitializer = (intptr_t) clinit_arc_util_viewport_Viewport,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_viewport_Viewport,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_viewport_Viewport = registerClass(&class_arc_util_viewport_Viewport);

}
