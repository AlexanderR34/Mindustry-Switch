#include "arc/math/geom/Bezier.h"
#include "arc/math/geom/Bezier.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Vector.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "arc/math/geom/Path.h"

extern "C" {


void mark_arc_math_geom_Bezier(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Bezier *) object;
	if (self->F_points)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_points)->clazz)->markFunction)((jobject) self->F_points, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
	if (self->F_tmp2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp2)->clazz)->markFunction)((jobject) self->F_tmp2, mark, depth + 1);
	if (self->F_tmp3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp3)->clazz)->markFunction)((jobject) self->F_tmp3, mark, depth + 1);
}

void clinit_arc_math_geom_Bezier(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_geom_Bezier(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_points = (jref) sp[1].o;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Bezier_Array1_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_points = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_R_arc_math_geom_Bezier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_R_arc_math_geom_Bezier])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Bezier_Array1_arc_math_geom_Vector_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_points = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Bezier_arc_struct_Seq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_points = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Bezier_linear_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:linear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, ((jfloat(1)) - (frame[1].f)));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[4].o)))(ctx, (frame[4].o), (frame[3].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (frame[1].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Bezier_linearDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:linearDerivative", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Bezier_quadratic_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:quadratic", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(71);
	frame[6].f = ((jfloat(1)) - (frame[1].f));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, ((frame[6].f) * (frame[6].f)));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[5].o)))(ctx, (frame[5].o), (frame[3].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (((jfloat(2)) * (frame[6].f)) * (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[5].o)))(ctx, (frame[5].o), (frame[4].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, ((frame[1].f) * (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Bezier_quadraticDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:quadraticDerivative", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(88);
	frame[6].f = ((jfloat(1)) - (frame[1].f));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, ((jfloat(1)) - (frame[1].f)));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[5].o)))(ctx, (frame[5].o), (frame[4].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (jfloat(2)));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Bezier_cubic_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:cubic", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(106);
	frame[7].f = ((jfloat(1)) - (frame[1].f));
	LINE_NUMBER(107);
	frame[8].f = ((frame[7].f) * (frame[7].f));
	LINE_NUMBER(108);
	frame[9].f = ((frame[1].f) * (frame[1].f));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, ((frame[8].f) * (frame[7].f)));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[6].o)))(ctx, (frame[6].o), (frame[3].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (((jfloat(3.0f)) * (frame[8].f)) * (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[6].o)))(ctx, (frame[6].o), (frame[4].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (((jfloat(3.0f)) * (frame[7].f)) * (frame[9].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[6].o;
	sp[2].o = frame[5].o;
	LINE_NUMBER(110);
	sp[1].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, ((frame[9].f) * (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Bezier_cubicDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:cubicDerivative", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Bezier(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(127);
	frame[7].f = ((jfloat(1)) - (frame[1].f));
	LINE_NUMBER(128);
	frame[8].f = ((frame[7].f) * (frame[7].f));
	LINE_NUMBER(129);
	frame[9].f = ((frame[1].f) * (frame[1].f));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, ((frame[8].f) * (jfloat(3.0f))));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[6].o)))(ctx, (frame[6].o), (frame[4].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (((frame[7].f) * (frame[1].f)) * (jfloat(6.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[6].o)))(ctx, (frame[6].o), (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, sp[1].o))(ctx, sp[1].o, ((frame[9].f) * (jfloat(3.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(138);
	if ((frame[3].i) < (jint(2))) goto label_1;
	}
	{
	if ((frame[3].i) <= (jint(4))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(139);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Only first, second and third degree Bezier curves are supported."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp2;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_tmp2 = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp3;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_tmp3 = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bezier_set_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp2;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, (frame[2].o)))(ctx, (frame[2].o));
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_tmp2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp3;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, (frame[3].o)))(ctx, (frame[3].o));
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_tmp3 = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier])(ctx, (frame[0].o), (frame[1].o), (jint(0)), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(162);
	if ((frame[3].i) < (jint(2))) goto label_1;
	}
	{
	if ((frame[3].i) <= (jint(4))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(163);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Only first, second and third degree Bezier curves are supported."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (jint(0)));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, (checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o))))(ctx, (checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o)));
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp2;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (jint(0)));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, (checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o))))(ctx, (checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o)));
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_tmp2 = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp3;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (jint(0)));
	sp[1].o = (jobject)((func_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, (checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o))))(ctx, (checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o)));
	((arc_math_geom_Bezier *) NULL_CHECK(sp[0].o))->F_tmp3 = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:valueAt", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(175);
	if ((frame[3].i) != (jint(2))) goto label_2;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(0)));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o);
	sp[2].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (jint(1)));
	sp[2].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[2].o);
	sp[3].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)SM_arc_math_geom_Bezier_linear_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(177);
	if ((frame[3].i) != (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(0)));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o);
	sp[2].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (jint(1)));
	sp[2].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[2].o);
	sp[3].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[3].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[3].o, (jint(2)));
	sp[3].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[3].o);
	sp[4].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)SM_arc_math_geom_Bezier_quadratic_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(179);
	if ((frame[3].i) != (jint(4))) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(0)));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o);
	sp[2].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (jint(1)));
	sp[2].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[2].o);
	sp[3].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[3].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[3].o, (jint(2)));
	sp[3].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[3].o);
	sp[4].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[4].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[4].o, (jint(3)));
	sp[4].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[4].o);
	sp[5].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)SM_arc_math_geom_Bezier_cubic_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	}
label_4:;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bezier_derivativeAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:derivativeAt", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(186);
	if ((frame[3].i) != (jint(2))) goto label_2;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(0)));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o);
	sp[2].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (jint(1)));
	sp[2].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[2].o);
	sp[3].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)SM_arc_math_geom_Bezier_linearDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(188);
	if ((frame[3].i) != (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(0)));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o);
	sp[2].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (jint(1)));
	sp[2].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[2].o);
	sp[3].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[3].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[3].o, (jint(2)));
	sp[3].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[3].o);
	sp[4].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)SM_arc_math_geom_Bezier_quadraticDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(190);
	if ((frame[3].i) != (jint(4))) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(0)));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[1].o);
	sp[2].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (jint(1)));
	sp[2].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[2].o);
	sp[3].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[3].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[3].o, (jint(2)));
	sp[3].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[3].o);
	sp[4].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[4].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[4].o, (jint(3)));
	sp[4].o = checkCast(ctx, &class_arc_math_geom_Vector, sp[4].o);
	sp[5].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)SM_arc_math_geom_Bezier_cubicDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	}
label_4:;
	{
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:approximate", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Vector, sp[0].o));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	frame[3].o = (checkCast(ctx, &class_arc_math_geom_Vector, sp[0].o));
	LINE_NUMBER(199);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vector_dst2_arc_math_geom_Vector_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_dst2_arc_math_geom_Vector_R_float, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	frame[4].f = temp0;
	LINE_NUMBER(200);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vector_dst2_arc_math_geom_Vector_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_dst2_arc_math_geom_Vector_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	frame[5].f = temp1;
	LINE_NUMBER(201);
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vector_dst2_arc_math_geom_Vector_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_dst2_arc_math_geom_Vector_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	frame[6].f = temp2;
	LINE_NUMBER(202);
	jdouble temp3 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[7].f = (jfloat(temp3));
	LINE_NUMBER(203);
	frame[8].f = ((((frame[5].f) + (frame[4].f)) - (frame[6].f)) / ((jfloat(2)) * (frame[7].f)));
	LINE_NUMBER(204);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((frame[7].f) - (frame[8].f)) / (frame[7].f)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Bezier_locate_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:locate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(210);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Bezier_approxLength_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:approxLength", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(215);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(216);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp2;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp3;
	sp[0].o = (jobject)((func_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp3;
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector])(ctx, sp[0].o, sp[1].o, ((jfloat((frame[3].i))) / ((jfloat((frame[1].i))) - (jfloat(1)))));
	LINE_NUMBER(219);
	if ((frame[3].i) <= 0) goto label_7;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp2;
	sp[1].o = (jobject)((arc_math_geom_Bezier *) NULL_CHECK((frame[0].o)))->F_tmp3;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vector_dst_arc_math_geom_Vector_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_dst_arc_math_geom_Vector_R_float, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[2].f = (temp0 + temp1);
	}
label_7:;
	{
	LINE_NUMBER(216);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Bezier_locate_java_lang_Object_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:locate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Bezier_locate_arc_math_geom_Vector_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_locate_arc_math_geom_Vector_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vector, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Bezier_approximate_java_lang_Object_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:approximate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vector, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bezier_valueAt_java_lang_Object_float_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:valueAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vector, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Bezier_derivativeAt_java_lang_Object_float_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Bezier:derivativeAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_derivativeAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Bezier_derivativeAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vector, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Bezier[] {
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
	(void *) M_arc_math_geom_Bezier_derivativeAt_java_lang_Object_float_R_java_lang_Object,
	(void *) M_arc_math_geom_Bezier_valueAt_java_lang_Object_float_R_java_lang_Object,
	(void *) M_arc_math_geom_Bezier_approximate_java_lang_Object_R_float,
	(void *) M_arc_math_geom_Bezier_locate_java_lang_Object_R_float,
	(void *) M_arc_math_geom_Bezier_approxLength_int_R_float,
	(void *) M_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_R_arc_math_geom_Bezier,
	(void *) M_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier,
	(void *) M_arc_math_geom_Bezier_set_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Bezier,
	(void *) M_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier,
	(void *) M_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier,
	(void *) M_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Bezier_derivativeAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float,
	(void *) M_arc_math_geom_Bezier_locate_arc_math_geom_Vector_R_float,
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
	{ "derivativeAt", "(Ljava/lang/Object;F)Ljava/lang/Object;" },
	{ "valueAt", "(Ljava/lang/Object;F)Ljava/lang/Object;" },
	{ "approximate", "(Ljava/lang/Object;)F" },
	{ "locate", "(Ljava/lang/Object;)F" },
	{ "approxLength", "(I)F" },
	{ "set", "([Larc/math/geom/Vector;)Larc/math/geom/Bezier;" },
	{ "set", "([Larc/math/geom/Vector;II)Larc/math/geom/Bezier;" },
	{ "set", "(Larc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Bezier;" },
	{ "set", "(Larc/struct/Seq;)Larc/math/geom/Bezier;" },
	{ "set", "(Larc/struct/Seq;II)Larc/math/geom/Bezier;" },
	{ "valueAt", "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;" },
	{ "derivativeAt", "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;" },
	{ "approximate", "(Larc/math/geom/Vector;)F" },
	{ "locate", "(Larc/math/geom/Vector;)F" },
};

static jclass interfaces[] { &class_arc_math_geom_Path, };

static FieldMetadata fields[] {
	{ "points", &class_arc_struct_Seq, offsetof(arc_math_geom_Bezier, F_points), "Larc/struct/Seq;", 1 },
	{ "tmp", &class_arc_math_geom_Vector, offsetof(arc_math_geom_Bezier, F_tmp), "Larc/math/geom/Vector;", 2 },
	{ "tmp2", &class_arc_math_geom_Vector, offsetof(arc_math_geom_Bezier, F_tmp2), "Larc/math/geom/Vector;", 2 },
	{ "tmp3", &class_arc_math_geom_Vector, offsetof(arc_math_geom_Bezier, F_tmp3), "Larc/math/geom/Vector;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Bezier, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Bezier_Array1_arc_math_geom_Vector, 0, "([Larc/math/geom/Vector;)V", 129 },
	{ "<init>", (intptr_t) init_arc_math_geom_Bezier_Array1_arc_math_geom_Vector_int_int, 0, "([Larc/math/geom/Vector;II)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Bezier_arc_struct_Seq_int_int, 0, "(Larc/struct/Seq;II)V", 1 },
	{ "linear", (intptr_t) SM_arc_math_geom_Bezier_linear_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, 0, "(Larc/math/geom/Vector;FLarc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;", 9 },
	{ "linearDerivative", (intptr_t) SM_arc_math_geom_Bezier_linearDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, 0, "(Larc/math/geom/Vector;FLarc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;", 9 },
	{ "quadratic", (intptr_t) SM_arc_math_geom_Bezier_quadratic_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, 0, "(Larc/math/geom/Vector;FLarc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;", 9 },
	{ "quadraticDerivative", (intptr_t) SM_arc_math_geom_Bezier_quadraticDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, 0, "(Larc/math/geom/Vector;FLarc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;", 9 },
	{ "cubic", (intptr_t) SM_arc_math_geom_Bezier_cubic_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, 0, "(Larc/math/geom/Vector;FLarc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;", 9 },
	{ "cubicDerivative", (intptr_t) SM_arc_math_geom_Bezier_cubicDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, 0, "(Larc/math/geom/Vector;FLarc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;", 9 },
	{ "set", (intptr_t) M_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_R_arc_math_geom_Bezier, VTABLE_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_R_arc_math_geom_Bezier, "([Larc/math/geom/Vector;)Larc/math/geom/Bezier;", 129 },
	{ "set", (intptr_t) M_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier, VTABLE_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier, "([Larc/math/geom/Vector;II)Larc/math/geom/Bezier;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Bezier_set_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Bezier, VTABLE_arc_math_geom_Bezier_set_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Bezier, "(Larc/math/geom/Vector;Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Bezier;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier, VTABLE_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier, "(Larc/struct/Seq;)Larc/math/geom/Bezier;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier, VTABLE_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier, "(Larc/struct/Seq;II)Larc/math/geom/Bezier;", 1 },
	{ "valueAt", (intptr_t) M_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;", 1 },
	{ "derivativeAt", (intptr_t) M_arc_math_geom_Bezier_derivativeAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Bezier_derivativeAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;", 1 },
	{ "approximate", (intptr_t) M_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float, VTABLE_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 1 },
	{ "locate", (intptr_t) M_arc_math_geom_Bezier_locate_arc_math_geom_Vector_R_float, VTABLE_arc_math_geom_Bezier_locate_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 1 },
	{ "approxLength", (intptr_t) M_arc_math_geom_Bezier_approxLength_int_R_float, VTABLE_arc_math_geom_Bezier_approxLength_int_R_float, "(I)F", 1 },
	{ "locate", (intptr_t) M_arc_math_geom_Bezier_locate_java_lang_Object_R_float, VTABLE_arc_math_geom_Bezier_locate_java_lang_Object_R_float, "(Ljava/lang/Object;)F", 4161 },
	{ "approximate", (intptr_t) M_arc_math_geom_Bezier_approximate_java_lang_Object_R_float, VTABLE_arc_math_geom_Bezier_approximate_java_lang_Object_R_float, "(Ljava/lang/Object;)F", 4161 },
	{ "valueAt", (intptr_t) M_arc_math_geom_Bezier_valueAt_java_lang_Object_float_R_java_lang_Object, VTABLE_arc_math_geom_Bezier_valueAt_java_lang_Object_float_R_java_lang_Object, "(Ljava/lang/Object;F)Ljava/lang/Object;", 4161 },
	{ "derivativeAt", (intptr_t) M_arc_math_geom_Bezier_derivativeAt_java_lang_Object_float_R_java_lang_Object, VTABLE_arc_math_geom_Bezier_derivativeAt_java_lang_Object_float_R_java_lang_Object, "(Ljava/lang/Object;F)Ljava/lang/Object;", 4161 },
};

Class class_arc_math_geom_Bezier{
		.nativeName = (intptr_t) "arc/math/geom/Bezier",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Bezier),
		.classVtable = (intptr_t) vtable_arc_math_geom_Bezier,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Bezier,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Bezier,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Bezier = registerClass(&class_arc_math_geom_Bezier);

}
