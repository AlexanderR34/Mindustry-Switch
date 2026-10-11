#include "arc/graphics/Camera.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Camera.h"

extern "C" {

jobject SF_arc_graphics_Camera_tmpVector;

void mark_arc_graphics_Camera(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Camera_tmpVector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Camera_tmpVector)->clazz)->markFunction)((jobject) SF_arc_graphics_Camera_tmpVector, mark, depth + 1);
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
	auto self = (arc_graphics_Camera *) object;
	if (self->F_position)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_position)->clazz)->markFunction)((jobject) self->F_position, mark, depth + 1);
	if (self->F_mat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mat)->clazz)->markFunction)((jobject) self->F_mat, mark, depth + 1);
	if (self->F_inv)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inv)->clazz)->markFunction)((jobject) self->F_inv, mark, depth + 1);
}

void init_arc_graphics_Camera(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Camera(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position = (jref) sp[1].o;
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_mat = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_inv = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Camera_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_mat;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) - (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)));
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) - (((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))), ((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_inv;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_mat;
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_inv_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_inv_R_arc_math_Mat])(ctx, sp[0].o);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Camera_resize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:resize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(31);
	((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(32);
	((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].f);
	LINE_NUMBER(33);
	((func_arc_graphics_Camera_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Camera_update])(ctx, (frame[0].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:unproject", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(51);
	frame[6].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[2].f));
	frame[7].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[3].f));
	LINE_NUMBER(52);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x = ((((jfloat(2)) * (frame[6].f)) / (frame[4].f)) - (jfloat(1)));
	LINE_NUMBER(53);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y = ((((jfloat(2)) * (frame[7].f)) / (frame[5].f)) - (jfloat(1)));
	LINE_NUMBER(54);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_inv;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:unproject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
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
	sp[0].o = (jobject)((func_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Camera_unproject_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:unproject", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Camera(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Camera_tmpVector;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[2].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(75);
	clinit_arc_graphics_Camera(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Camera_tmpVector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:project", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
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
	sp[0].o = (jobject)((func_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Camera_project_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:project", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Camera(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Camera_tmpVector;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[2].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(92);
	clinit_arc_graphics_Camera(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Camera_tmpVector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:project", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_mat;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(110);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x = ((((frame[4].f) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) + (jfloat(1)))) / (jfloat(2))) + (frame[2].f));
	LINE_NUMBER(111);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y = ((((frame[5].f) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(1)))) / (jfloat(2))) + (frame[3].f));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:bounds", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_height));
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Camera(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Camera:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Camera(ctx);
	{
	LINE_NUMBER(11);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_Camera(ctx);
	SF_arc_graphics_Camera_tmpVector = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Camera[] {
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
	(void *) M_arc_graphics_Camera_update,
	(void *) M_arc_graphics_Camera_resize_float_float,
	(void *) M_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_graphics_Camera_unproject_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_graphics_Camera_project_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect,
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
	{ "unproject", "(Larc/math/geom/Vec2;FFFF)Larc/math/geom/Vec2;" },
	{ "unproject", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "unproject", "(FF)Larc/math/geom/Vec2;" },
	{ "project", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "project", "(FF)Larc/math/geom/Vec2;" },
	{ "project", "(Larc/math/geom/Vec2;FFFF)Larc/math/geom/Vec2;" },
	{ "bounds", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
};

static FieldMetadata fields[] {
	{ "tmpVector", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_Camera_tmpVector, "Larc/math/geom/Vec2;", 26 },
	{ "position", &class_arc_math_geom_Vec2, offsetof(arc_graphics_Camera, F_position), "Larc/math/geom/Vec2;", 17 },
	{ "mat", &class_arc_math_Mat, offsetof(arc_graphics_Camera, F_mat), "Larc/math/Mat;", 17 },
	{ "inv", &class_arc_math_Mat, offsetof(arc_graphics_Camera, F_inv), "Larc/math/Mat;", 17 },
	{ "width", &class_float, offsetof(arc_graphics_Camera, F_width), "F", 1 },
	{ "height", &class_float, offsetof(arc_graphics_Camera, F_height), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Camera, 0, "()V", 1 },
	{ "update", (intptr_t) M_arc_graphics_Camera_update, VTABLE_arc_graphics_Camera_update, "()V", 1 },
	{ "resize", (intptr_t) M_arc_graphics_Camera_resize_float_float, VTABLE_arc_graphics_Camera_resize_float_float, "(FF)V", 1 },
	{ "unproject", (intptr_t) M_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2, VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;FFFF)Larc/math/geom/Vec2;", 1 },
	{ "unproject", (intptr_t) M_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "unproject", (intptr_t) M_arc_graphics_Camera_unproject_float_float_R_arc_math_geom_Vec2, VTABLE_arc_graphics_Camera_unproject_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "project", (intptr_t) M_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "project", (intptr_t) M_arc_graphics_Camera_project_float_float_R_arc_math_geom_Vec2, VTABLE_arc_graphics_Camera_project_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "project", (intptr_t) M_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2, VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;FFFF)Larc/math/geom/Vec2;", 1 },
	{ "bounds", (intptr_t) M_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect, "(Larc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Camera, 0, "()V", 8 },
};

Class class_arc_graphics_Camera{
		.nativeName = (intptr_t) "arc/graphics/Camera",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_Camera),
		.classVtable = (intptr_t) vtable_arc_graphics_Camera,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Camera,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Camera,
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
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Camera = registerClass(&class_arc_graphics_Camera);

}
