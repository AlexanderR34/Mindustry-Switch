#include "arc/graphics/g3d/Camera3D.h"
#include "arc/math/geom/Frustum.h"
#include "java/lang/Math.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Ray.h"
#include "arc/Core.h"
#include "arc/Input.h"
#include "arc/graphics/g3d/Camera3D.h"
#include "arc/math/geom/Mat3D.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_arc_graphics_g3d_Camera3D(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g3d_Camera3D *) object;
	if (self->F_position)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_position)->clazz)->markFunction)((jobject) self->F_position, mark, depth + 1);
	if (self->F_direction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_direction)->clazz)->markFunction)((jobject) self->F_direction, mark, depth + 1);
	if (self->F_up)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_up)->clazz)->markFunction)((jobject) self->F_up, mark, depth + 1);
	if (self->F_combined)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_combined)->clazz)->markFunction)((jobject) self->F_combined, mark, depth + 1);
	if (self->F_projection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_projection)->clazz)->markFunction)((jobject) self->F_projection, mark, depth + 1);
	if (self->F_view)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_view)->clazz)->markFunction)((jobject) self->F_view, mark, depth + 1);
	if (self->F_invProjectionView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_invProjectionView)->clazz)->markFunction)((jobject) self->F_invProjectionView, mark, depth + 1);
	if (self->F_frustum)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frustum)->clazz)->markFunction)((jobject) self->F_frustum, mark, depth + 1);
	if (self->F_tmpVec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpVec)->clazz)->markFunction)((jobject) self->F_tmpVec, mark, depth + 1);
	if (self->F_ray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ray)->clazz)->markFunction)((jobject) self->F_ray, mark, depth + 1);
}

void clinit_arc_graphics_g3d_Camera3D(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g3d_Camera3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g3d_Camera3D(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_fov = (jfloat(67.0f));
	LINE_NUMBER(10);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_near = (jfloat(1));
	LINE_NUMBER(12);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_far = (jfloat(100.0f));
	LINE_NUMBER(14);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_perspective = (jint(1));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_position = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(-1.0f)));
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_direction = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(1)), (jfloat(0)));
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[1].o);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_combined = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[1].o);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_projection = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[1].o);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_view = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[1].o);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_invProjectionView = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Frustum(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Frustum);
	init_arc_math_geom_Frustum(ctx, sp[1].o);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_frustum = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_tmpVec = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Ray(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Ray);
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[3].o);
	init_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3(ctx, sp[1].o, sp[2].o, sp[3].o);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_ray = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_Camera3D_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	if (((jint)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_perspective) == 0) goto label_1;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_projection;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_near));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_far));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToProjection_float_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToProjection_float_float_float_float_R_arc_math_geom_Mat3D])(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_fov), (((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_width) / ((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_height)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_projection;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D])(ctx, sp[0].o, ((-((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_width)) / (jfloat(2))), (((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))), ((-((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_height)) / (jfloat(2))), (((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))), ((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_near), ((jfloat)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_far));
	}
label_3:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_view;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_position;
	sp[2].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[3].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_position;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_combined;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_projection;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_view;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_invProjectionView;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_combined;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D])(ctx, sp[0].o);
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_frustum;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_invProjectionView;
	((func_arc_math_geom_Frustum_update_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Frustum_update_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_Camera3D_resize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:resize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(53);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(54);
	((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].f);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_Camera3D_lookAt_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:lookAt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isZero_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_isZero_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_up;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[4].f = temp0;
	LINE_NUMBER(61);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) - (jfloat(1))));
	if ((floatCompare(temp1, (jfloat(1,000000e-09f)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_up;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(-1.0f)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(64);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) + (jfloat(1))));
	if ((floatCompare(temp0, (jfloat(1,000000e-09f)), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_up;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	((func_arc_graphics_g3d_Camera3D_normalizeUp) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_Camera3D_normalizeUp])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_Camera3D_lookAt_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:lookAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	((func_arc_graphics_g3d_Camera3D_lookAt_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_Camera3D_lookAt_float_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_Camera3D_normalizeUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:normalizeUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_up;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_tmpVec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:unproject", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(105);
	frame[6].f = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[7].f = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(106);
	frame[6].f = ((frame[6].f) - (frame[2].f));
	LINE_NUMBER(107);
	frame[7].f = ((frame[7].f) - (frame[3].f));
	LINE_NUMBER(108);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x = ((((jfloat(2)) * (frame[6].f)) / (frame[4].f)) - (jfloat(1)));
	LINE_NUMBER(109);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y = ((((jfloat(2)) * (frame[7].f)) / (frame[5].f)) - (jfloat(1)));
	LINE_NUMBER(110);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z = (((jfloat(2)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) - (jfloat(1)));
	LINE_NUMBER(111);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_invProjectionView;
	sp[0].o = (jobject)SM_arc_math_geom_Mat3D_prj_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:unproject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[2].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:project", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[2].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:project", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(155);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_combined;
	sp[0].o = (jobject)SM_arc_math_geom_Mat3D_prj_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(156);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x = ((((frame[4].f) * (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) + (jfloat(1)))) / (jfloat(2))) + (frame[2].f));
	LINE_NUMBER(157);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y = ((((frame[5].f) * (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(1)))) / (jfloat(2))) + (frame[3].f));
	LINE_NUMBER(158);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z = ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) + (jfloat(1))) / (jfloat(2)));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:getMouseRay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray])(ctx, sp[0].o, temp1, (jfloat(temp2)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g3d_Camera3D_getPickRay_float_float_float_float_float_float_R_arc_math_geom_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:getPickRay", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_ray;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK(sp[1].o))->F_origin;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_ray;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK(sp[1].o))->F_direction;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (jfloat(1)));
	sp[0].o = (jobject)((func_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_ray;
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK(sp[0].o))->F_direction;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_ray;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK(sp[1].o))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[0].o)))->F_ray;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/Camera3D:getPickRay", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp5 = jfloat(temp4);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_g3d_Camera3D_getPickRay_float_float_float_float_float_float_R_arc_math_geom_Ray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_getPickRay_float_float_float_float_float_float_R_arc_math_geom_Ray])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp5, (jfloat(temp6)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g3d_Camera3D[] {
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
	(void *) M_arc_graphics_g3d_Camera3D_update,
	(void *) M_arc_graphics_g3d_Camera3D_resize_float_float,
	(void *) M_arc_graphics_g3d_Camera3D_lookAt_float_float_float,
	(void *) M_arc_graphics_g3d_Camera3D_lookAt_arc_math_geom_Vec3,
	(void *) M_arc_graphics_g3d_Camera3D_normalizeUp,
	(void *) M_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3,
	(void *) M_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3,
	(void *) M_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray,
	(void *) M_arc_graphics_g3d_Camera3D_getPickRay_float_float_float_float_float_float_R_arc_math_geom_Ray,
	(void *) M_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray,
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
	{ "update", "()V" },
	{ "resize", "(FF)V" },
	{ "lookAt", "(FFF)V" },
	{ "lookAt", "(Larc/math/geom/Vec3;)V" },
	{ "normalizeUp", "()V" },
	{ "unproject", "(Larc/math/geom/Vec3;FFFF)Larc/math/geom/Vec3;" },
	{ "unproject", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "project", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "project", "(Larc/math/geom/Vec3;FFFF)Larc/math/geom/Vec3;" },
	{ "getMouseRay", "()Larc/math/geom/Ray;" },
	{ "getPickRay", "(FFFFFF)Larc/math/geom/Ray;" },
	{ "getPickRay", "(FF)Larc/math/geom/Ray;" },
};

static FieldMetadata fields[] {
	{ "fov", &class_float, offsetof(arc_graphics_g3d_Camera3D, F_fov), "F", 1 },
	{ "near", &class_float, offsetof(arc_graphics_g3d_Camera3D, F_near), "F", 1 },
	{ "far", &class_float, offsetof(arc_graphics_g3d_Camera3D, F_far), "F", 1 },
	{ "perspective", &class_boolean, offsetof(arc_graphics_g3d_Camera3D, F_perspective), "Z", 1 },
	{ "width", &class_float, offsetof(arc_graphics_g3d_Camera3D, F_width), "F", 1 },
	{ "height", &class_float, offsetof(arc_graphics_g3d_Camera3D, F_height), "F", 1 },
	{ "position", &class_arc_math_geom_Vec3, offsetof(arc_graphics_g3d_Camera3D, F_position), "Larc/math/geom/Vec3;", 17 },
	{ "direction", &class_arc_math_geom_Vec3, offsetof(arc_graphics_g3d_Camera3D, F_direction), "Larc/math/geom/Vec3;", 17 },
	{ "up", &class_arc_math_geom_Vec3, offsetof(arc_graphics_g3d_Camera3D, F_up), "Larc/math/geom/Vec3;", 17 },
	{ "combined", &class_arc_math_geom_Mat3D, offsetof(arc_graphics_g3d_Camera3D, F_combined), "Larc/math/geom/Mat3D;", 17 },
	{ "projection", &class_arc_math_geom_Mat3D, offsetof(arc_graphics_g3d_Camera3D, F_projection), "Larc/math/geom/Mat3D;", 17 },
	{ "view", &class_arc_math_geom_Mat3D, offsetof(arc_graphics_g3d_Camera3D, F_view), "Larc/math/geom/Mat3D;", 17 },
	{ "invProjectionView", &class_arc_math_geom_Mat3D, offsetof(arc_graphics_g3d_Camera3D, F_invProjectionView), "Larc/math/geom/Mat3D;", 17 },
	{ "frustum", &class_arc_math_geom_Frustum, offsetof(arc_graphics_g3d_Camera3D, F_frustum), "Larc/math/geom/Frustum;", 17 },
	{ "tmpVec", &class_arc_math_geom_Vec3, offsetof(arc_graphics_g3d_Camera3D, F_tmpVec), "Larc/math/geom/Vec3;", 18 },
	{ "ray", &class_arc_math_geom_Ray, offsetof(arc_graphics_g3d_Camera3D, F_ray), "Larc/math/geom/Ray;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g3d_Camera3D, 0, "()V", 1 },
	{ "update", (intptr_t) M_arc_graphics_g3d_Camera3D_update, VTABLE_arc_graphics_g3d_Camera3D_update, "()V", 1 },
	{ "resize", (intptr_t) M_arc_graphics_g3d_Camera3D_resize_float_float, VTABLE_arc_graphics_g3d_Camera3D_resize_float_float, "(FF)V", 1 },
	{ "lookAt", (intptr_t) M_arc_graphics_g3d_Camera3D_lookAt_float_float_float, VTABLE_arc_graphics_g3d_Camera3D_lookAt_float_float_float, "(FFF)V", 1 },
	{ "lookAt", (intptr_t) M_arc_graphics_g3d_Camera3D_lookAt_arc_math_geom_Vec3, VTABLE_arc_graphics_g3d_Camera3D_lookAt_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)V", 1 },
	{ "normalizeUp", (intptr_t) M_arc_graphics_g3d_Camera3D_normalizeUp, VTABLE_arc_graphics_g3d_Camera3D_normalizeUp, "()V", 1 },
	{ "unproject", (intptr_t) M_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3, VTABLE_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;FFFF)Larc/math/geom/Vec3;", 1 },
	{ "unproject", (intptr_t) M_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "project", (intptr_t) M_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "project", (intptr_t) M_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3, VTABLE_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;FFFF)Larc/math/geom/Vec3;", 1 },
	{ "getMouseRay", (intptr_t) M_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray, VTABLE_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray, "()Larc/math/geom/Ray;", 1 },
	{ "getPickRay", (intptr_t) M_arc_graphics_g3d_Camera3D_getPickRay_float_float_float_float_float_float_R_arc_math_geom_Ray, VTABLE_arc_graphics_g3d_Camera3D_getPickRay_float_float_float_float_float_float_R_arc_math_geom_Ray, "(FFFFFF)Larc/math/geom/Ray;", 1 },
	{ "getPickRay", (intptr_t) M_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray, VTABLE_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray, "(FF)Larc/math/geom/Ray;", 1 },
};

Class class_arc_graphics_g3d_Camera3D{
		.nativeName = (intptr_t) "arc/graphics/g3d/Camera3D",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g3d_Camera3D),
		.classVtable = (intptr_t) vtable_arc_graphics_g3d_Camera3D,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g3d_Camera3D,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g3d_Camera3D,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g3d_Camera3D = registerClass(&class_arc_graphics_g3d_Camera3D);

}
