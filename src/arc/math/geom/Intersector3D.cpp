#include "arc/math/geom/Intersector3D.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Intersector3D_SplitTriangle.h"
#include "arc/math/geom/Plane_PlaneSide.h"
#include "arc/math/geom/BoundingBox.h"
#include "arc/math/geom/Plane.h"
#include "arc/math/geom/Vec3.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Ray.h"
#include "arc/math/geom/Intersector3D.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_arc_math_geom_Intersector3D_v0;
jobject SF_arc_math_geom_Intersector3D_v1;
jobject SF_arc_math_geom_Intersector3D_v2;
jobject SF_arc_math_geom_Intersector3D_p;
jobject SF_arc_math_geom_Intersector3D_i;
jobject SF_arc_math_geom_Intersector3D_best;
jobject SF_arc_math_geom_Intersector3D_tmp;
jobject SF_arc_math_geom_Intersector3D_tmp1;
jobject SF_arc_math_geom_Intersector3D_tmp2;
jobject SF_arc_math_geom_Intersector3D_tmp3;
jobject SF_arc_math_geom_Intersector3D_intersection;

void mark_arc_math_geom_Intersector3D(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Intersector3D_v0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_v0)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_v0, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_v1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_v1)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_v1, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_v2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_v2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_v2, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_p)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_p)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_p, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_i)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_i)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_i, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_best)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_best)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_best, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_tmp)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_tmp, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_tmp1)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_tmp1, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_tmp2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_tmp2, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_tmp3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_tmp3)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_tmp3, mark, depth + 1);
		if (SF_arc_math_geom_Intersector3D_intersection)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector3D_intersection)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector3D_intersection, mark, depth + 1);
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
	auto self = (arc_math_geom_Intersector3D *) object;
}

void init_arc_math_geom_Intersector3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectRayPlane_arc_math_geom_Ray_arc_math_geom_Plane_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectRayPlane", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[1].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[3].f = temp0;
	LINE_NUMBER(32);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[1].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[4].f = ((-(temp0 + ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[1].o)))->F_d))) / (frame[3].f));
	LINE_NUMBER(34);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(36);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_v0;
	sp[2].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[4].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_onPlane;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(39);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Intersector3D_intersectLinePlane_float_float_float_float_float_float_arc_math_geom_Plane_arc_math_geom_Vec3_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7) {
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectLinePlane", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(52);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].f), (frame[4].f), (frame[5].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f));
	frame[8].o = sp[0].o;
	LINE_NUMBER(53);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f));
	frame[9].o = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[6].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[10].f = temp0;
	LINE_NUMBER(55);
	if ((floatCompare((frame[10].f), (jfloat(0)), -1)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[6].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[11].f = ((-(temp0 + ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[6].o)))->F_d))) / (frame[10].f));
	LINE_NUMBER(57);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[7].o), (frame[9].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, (frame[8].o), (frame[11].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (frame[11].f);
	}
label_4:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[6].o), (frame[9].o));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_onPlane;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(60);
	if ((frame[7].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[7].o), (frame[9].o));
	}
label_10:;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_8:;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (jfloat(-1.0f));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectRayTriangle_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectRayTriangle", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(77);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(78);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(80);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(81);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[5].o), (frame[7].o));
	frame[8].f = temp0;
	LINE_NUMBER(82);
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[8].f));
	if (temp1 == 0) goto label_5;
	}
	{
	LINE_NUMBER(83);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_p;
	((func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(84);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_p;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_onPlane;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jint temp0 = (jint)SM_arc_math_geom_Intersector_isInTriangle_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(85);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(91);
	frame[8].f = ((jfloat(1)) / (frame[8].f));
	LINE_NUMBER(93);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_i;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(94);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[9].o), (frame[7].o));
	frame[10].f = (temp0 * (frame[8].f));
	LINE_NUMBER(95);
	if ((floatCompare((frame[10].f), (jfloat(0)), 1)) < 0) goto label_14;
	}
	{
	if ((floatCompare((frame[10].f), (jfloat(1)), -1)) <= 0) goto label_15;
	}
label_14:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[9].o), (frame[5].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, (frame[11].o));
	frame[12].f = (temp0 * (frame[8].f));
	LINE_NUMBER(99);
	if ((floatCompare((frame[12].f), (jfloat(0)), 1)) < 0) goto label_18;
	}
	{
	if ((floatCompare(((frame[10].f) + (frame[12].f)), (jfloat(1)), -1)) <= 0) goto label_19;
	}
label_18:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_19:;
	{
	LINE_NUMBER(101);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[6].o), (frame[11].o));
	frame[13].f = (temp0 * (frame[8].f));
	LINE_NUMBER(102);
	if ((floatCompare((frame[13].f), (jfloat(0)), 1)) >= 0) goto label_21;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_21:;
	{
	LINE_NUMBER(104);
	if ((frame[4].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(105);
	if ((floatCompare((frame[13].f), (jfloat(1,000000e-06f)), 1)) > 0) goto label_24;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	goto label_22;
	}
label_24:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_math_geom_Ray_getEndPoint_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Ray_getEndPoint_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[4].o), (frame[13].f));
	}
label_22:;
	{
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectRaySphere_arc_math_geom_Ray_arc_math_geom_Vec3_float_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectRaySphere", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp3 = temp2 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp4 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp5 = (jfloat)((func_arc_math_geom_Vec3_dot_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_float_float_float_R_float])(ctx, sp[0].o, temp1, temp3, (temp4 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z)));
	frame[4].f = temp5;
	LINE_NUMBER(125);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp1 = temp0 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x) * (frame[4].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp3 = temp2 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y) * (frame[4].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp5 = (jfloat)((func_arc_math_geom_Vec3_dst2_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst2_float_float_float_R_float])(ctx, sp[0].o, temp1, temp3, (temp4 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z) * (frame[4].f))));
	frame[5].f = temp5;
	LINE_NUMBER(129);
	frame[6].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(130);
	if ((floatCompare((frame[5].f), (frame[6].f), -1)) <= 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(131);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = frame[4].f;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[6].f) - (frame[5].f)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (temp0 - (jfloat(temp1))));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectRayBounds_arc_math_geom_Ray_arc_math_geom_BoundingBox_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectRayBounds", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(155);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jint temp0 = (jint)((func_arc_math_geom_BoundingBox_contains_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_contains_arc_math_geom_Vec3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(156);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(159);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(160);
	frame[5].i = (jint(0));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(165);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_6;
	}
	{
	LINE_NUMBER(166);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(167);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_6;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_6;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_6;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_6;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_11;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_6;
	}
label_11:;
	{
	LINE_NUMBER(168);
	frame[5].i = (jint(1));
	LINE_NUMBER(169);
	frame[3].f = (frame[4].f);
	}
label_6:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), (jfloat(0)), 1)) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(176);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_13;
	}
	{
	LINE_NUMBER(177);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_13;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_13;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_13;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_13;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_18;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_13;
	}
label_18:;
	{
	LINE_NUMBER(179);
	frame[5].i = (jint(1));
	LINE_NUMBER(180);
	frame[3].f = (frame[4].f);
	}
label_13:;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), (jfloat(0)), -1)) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(187);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_20;
	}
	{
	LINE_NUMBER(188);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(189);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_20;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_20;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_20;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_20;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_25;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_20;
	}
label_25:;
	{
	LINE_NUMBER(190);
	frame[5].i = (jint(1));
	LINE_NUMBER(191);
	frame[3].f = (frame[4].f);
	}
label_20:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), (jfloat(0)), 1)) >= 0) goto label_27;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(198);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_27;
	}
	{
	LINE_NUMBER(199);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_27;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_27;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_27;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_27;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_32;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_27;
	}
label_32:;
	{
	LINE_NUMBER(201);
	frame[5].i = (jint(1));
	LINE_NUMBER(202);
	frame[3].f = (frame[4].f);
	}
label_27:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), (jfloat(0)), -1)) <= 0) goto label_34;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z));
	LINE_NUMBER(209);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_34;
	}
	{
	LINE_NUMBER(210);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(211);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_34;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_34;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_34;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_34;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_39;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_34;
	}
label_39:;
	{
	LINE_NUMBER(212);
	frame[5].i = (jint(1));
	LINE_NUMBER(213);
	frame[3].f = (frame[4].f);
	}
label_34:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), (jfloat(0)), 1)) >= 0) goto label_41;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z));
	LINE_NUMBER(220);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_41;
	}
	{
	LINE_NUMBER(221);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(222);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_41;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_41;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_41;
	}
	{
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_41;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_46;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_41;
	}
label_46:;
	{
	LINE_NUMBER(223);
	frame[5].i = (jint(1));
	LINE_NUMBER(224);
	frame[3].f = (frame[4].f);
	}
label_41:;
	{
	LINE_NUMBER(228);
	if ((frame[5].i) == 0) goto label_48;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_48;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(230);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), 1)) >= 0) goto label_51;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x);
	goto label_53;
	}
label_51:;
	{
	LINE_NUMBER(232);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), -1)) <= 0) goto label_53;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x);
	}
label_53:;
	{
	LINE_NUMBER(235);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), 1)) >= 0) goto label_55;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y);
	goto label_57;
	}
label_55:;
	{
	LINE_NUMBER(237);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), -1)) <= 0) goto label_57;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y);
	}
label_57:;
	{
	LINE_NUMBER(240);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), 1)) >= 0) goto label_59;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z);
	goto label_48;
	}
label_59:;
	{
	LINE_NUMBER(242);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), -1)) <= 0) goto label_48;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z);
	}
label_48:;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectRayBoundsFast_arc_math_geom_Ray_arc_math_geom_BoundingBox_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectRayBoundsFast", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector3D_tmp1;
	sp[1].o = (jobject)((func_arc_math_geom_BoundingBox_getCenter_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getCenter_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Intersector3D_tmp2;
	sp[2].o = (jobject)((func_arc_math_geom_BoundingBox_getDimensions_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getDimensions_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, sp[3].o);
	jint temp0 = (jint)SM_arc_math_geom_Intersector3D_intersectRayBoundsFast_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectRayBoundsFast_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[17];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectRayBoundsFast", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(267);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[3].f = (temp0 / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(268);
	jfloat temp1 = jfloat(1);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(269);
	jfloat temp2 = jfloat(1);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[5].f = (temp2 / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z));
	LINE_NUMBER(271);
	jfloat temp3 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x) * (jfloat(0.5f)));
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[6].f = ((temp3 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x)) * (frame[3].f));
	LINE_NUMBER(272);
	jfloat temp4 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x) * (jfloat(0.5f)));
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[7].f = ((temp4 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x)) * (frame[3].f));
	LINE_NUMBER(273);
	if ((floatCompare((frame[6].f), (frame[7].f), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(274);
	frame[8].f = (frame[6].f);
	LINE_NUMBER(275);
	frame[6].f = (frame[7].f);
	LINE_NUMBER(276);
	frame[7].f = (frame[8].f);
	}
label_6:;
	{
	LINE_NUMBER(279);
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y) * (jfloat(0.5f)));
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[8].f = ((temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y)) * (frame[4].f));
	LINE_NUMBER(280);
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y) * (jfloat(0.5f)));
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[9].f = ((temp1 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y)) * (frame[4].f));
	LINE_NUMBER(281);
	if ((floatCompare((frame[8].f), (frame[9].f), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(282);
	frame[10].f = (frame[8].f);
	LINE_NUMBER(283);
	frame[8].f = (frame[9].f);
	LINE_NUMBER(284);
	frame[9].f = (frame[10].f);
	}
label_12:;
	{
	LINE_NUMBER(287);
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z) * (jfloat(0.5f)));
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[10].f = ((temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z)) * (frame[5].f));
	LINE_NUMBER(288);
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z) * (jfloat(0.5f)));
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[11].f = ((temp1 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z)) * (frame[5].f));
	LINE_NUMBER(289);
	if ((floatCompare((frame[10].f), (frame[11].f), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(290);
	frame[12].f = (frame[10].f);
	LINE_NUMBER(291);
	frame[10].f = (frame[11].f);
	LINE_NUMBER(292);
	frame[11].f = (frame[12].f);
	}
label_18:;
	{
	LINE_NUMBER(295);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[6].f), (frame[8].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (frame[10].f));
	frame[12].f = temp1;
	LINE_NUMBER(296);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[7].f), (frame[9].f));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp2, (frame[11].f));
	frame[13].f = temp3;
	LINE_NUMBER(298);
	if ((floatCompare((frame[13].f), (jfloat(0)), -1)) < 0) goto label_24;
	}
	{
	if ((floatCompare((frame[13].f), (frame[12].f), -1)) < 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectSegmentPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Plane_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectSegmentPlane", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(302);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_v0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(303);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[2].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp0;
	LINE_NUMBER(304);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[2].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[6].f = ((-(temp0 + ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[2].o)))->F_d))) / (frame[5].f));
	LINE_NUMBER(306);
	if ((floatCompare((frame[6].f), (jfloat(0)), 1)) < 0) goto label_5;
	}
	{
	if ((floatCompare((frame[6].f), (jfloat(1)), -1)) <= 0) goto label_6;
	}
label_5:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[3].o), (frame[0].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, (frame[4].o), (frame[6].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectRayTriangles_arc_math_geom_Ray_Array1_float_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectRayTriangles", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(320);
	frame[3].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(321);
	frame[4].i = (jint(0));
	LINE_NUMBER(323);
	if ((((((jarray) nullCheck(ctx, (frame[1].o)))->length) / (jint(3))) % (jint(3))) == 0) goto label_3;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"triangle list size is not a multiple of 3"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(325);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (6))) goto label_5;
	}
	{
	LINE_NUMBER(326);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_tmp1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(2))))));
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector3D_tmp2;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(3))));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(4))));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(5))));
	LINE_NUMBER(327);
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, temp0, temp1, temp2);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Intersector3D_tmp3;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (6)));
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (7)));
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (8)));
	LINE_NUMBER(328);
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[3].o, temp3, temp4, temp5);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	LINE_NUMBER(326);
	jint temp6 = (jint)SM_arc_math_geom_Intersector3D_intersectRayTriangle_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[6].i = temp6;
	LINE_NUMBER(330);
	if ((frame[6].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[7].f = temp0;
	LINE_NUMBER(332);
	if ((floatCompare((frame[7].f), (frame[3].f), 1)) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(333);
	frame[3].f = (frame[7].f);
	LINE_NUMBER(334);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_best;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(335);
	frame[4].i = (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(325);
	INST_IINC(5, 9);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(340);
	if ((frame[4].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(343);
	if ((frame[2].o) == nullptr) goto label_19;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_best;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectRayTriangles_arc_math_geom_Ray_Array1_float_Array1_short_int_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectRayTriangles", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(359);
	frame[5].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(360);
	frame[6].i = (jint(0));
	LINE_NUMBER(362);
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) % (jint(3))) == 0) goto label_3;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"triangle list size is not a multiple of 3"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(364);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(365);
	frame[8].i = (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[7].i))) * (frame[3].i));
	LINE_NUMBER(366);
	frame[9].i = (((jint)ARRAY_ACCESS(jshort, (frame[2].o), ((frame[7].i) + (jint(1))))) * (frame[3].i));
	LINE_NUMBER(367);
	frame[10].i = (((jint)ARRAY_ACCESS(jshort, (frame[2].o), ((frame[7].i) + (jint(2))))) * (frame[3].i));
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_tmp1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[8].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(2))))));
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector3D_tmp2;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[9].i));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[9].i) + (jint(1))));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[9].i) + (jint(2))));
	LINE_NUMBER(370);
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, temp0, temp1, temp2);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Intersector3D_tmp3;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[10].i));
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[10].i) + (jint(1))));
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[10].i) + (jint(2))));
	LINE_NUMBER(371);
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[3].o, temp3, temp4, temp5);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	LINE_NUMBER(369);
	jint temp6 = (jint)SM_arc_math_geom_Intersector3D_intersectRayTriangle_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[11].i = temp6;
	LINE_NUMBER(373);
	if ((frame[11].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[12].f = temp0;
	LINE_NUMBER(375);
	if ((floatCompare((frame[12].f), (frame[5].f), 1)) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(376);
	frame[5].f = (frame[12].f);
	LINE_NUMBER(377);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_best;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(378);
	frame[6].i = (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(364);
	INST_IINC(7, 3);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(383);
	if ((frame[6].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(386);
	if ((frame[4].o) == nullptr) goto label_22;
	}
	{
	sp[0].o = frame[4].o;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_best;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_22:;
	{
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector3D_intersectRayTriangles_arc_math_geom_Ray_arc_struct_Seq_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:intersectRayTriangles", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(399);
	frame[3].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(400);
	frame[4].i = (jint(0));
	LINE_NUMBER(402);
	if ((((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) % (jint(3))) == 0) goto label_3;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"triangle list size is not a multiple of 3"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(404);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(2)))) goto label_5;
	}
	{
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].i));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Vec3, sp[1].o);
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), ((frame[5].i) + (jint(1))));
	sp[2].o = checkCast(ctx, &class_arc_math_geom_Vec3, sp[2].o);
	sp[3].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), ((frame[5].i) + (jint(2))));
	sp[3].o = checkCast(ctx, &class_arc_math_geom_Vec3, sp[3].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	jint temp0 = (jint)SM_arc_math_geom_Intersector3D_intersectRayTriangle_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[6].i = temp0;
	LINE_NUMBER(407);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[7].f = temp0;
	LINE_NUMBER(409);
	if ((floatCompare((frame[7].f), (frame[3].f), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(410);
	frame[3].f = (frame[7].f);
	LINE_NUMBER(411);
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector3D_best;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(412);
	frame[4].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(404);
	INST_IINC(5, 3);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(417);
	if ((frame[4].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(420);
	if ((frame[2].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_best;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Intersector3D_splitTriangle_Array1_float_arc_math_geom_Plane_arc_math_geom_Intersector3D$SplitTriangle(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:splitTriangle", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(445);
	frame[3].i = ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(3)));
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[3].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(1)) + (frame[3].i)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(2)) + (frame[3].i)))));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[3].i) * (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(1)) + ((frame[3].i) * (jint(2)))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(2)) + ((frame[3].i) * (jint(2)))))));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(451);
	((func_arc_math_geom_Intersector3D$SplitTriangle_reset) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_reset])(ctx, (frame[2].o));
	LINE_NUMBER(454);
	if ((frame[4].i) != (frame[5].i)) goto label_12;
	}
	{
	if ((frame[5].i) != (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(455);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_total = (jint(1));
	LINE_NUMBER(456);
	if ((frame[4].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(457);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numBack = (jint(1));
	LINE_NUMBER(458);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(460);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numFront = (jint(1));
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	}
label_18:;
	LINE_NUMBER(463);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(467);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_total = (jint(3));
	LINE_NUMBER(468);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[4].i) == 0) goto label_21;
	}
	INST_ICONST(0);
	goto label_22;
label_21:;
	INST_ICONST(1);
label_22:;
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_23;
	INST_ICONST(0);
	goto label_24;
label_23:;
	INST_ICONST(1);
label_24:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[6].i) == 0) goto label_25;
	}
	INST_ICONST(0);
	goto label_26;
label_25:;
	INST_ICONST(1);
label_26:;
	{
	sp -= 3;
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK(sp[0].o))->F_numFront = (sp[1].i + sp[2].i);
	LINE_NUMBER(469);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numBack = (((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_total) - ((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numFront));
	LINE_NUMBER(474);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[4].i) != 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 2;
	((func_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(477);
	frame[7].i = (jint(0));
	LINE_NUMBER(478);
	frame[8].i = (frame[3].i);
	LINE_NUMBER(479);
	if ((frame[4].i) == (frame[5].i)) goto label_34;
	}
	{
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	jint temp1 = frame[8].i;
	jint temp2 = frame[3].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	SM_arc_math_geom_Intersector3D_splitEdge_Array1_float_int_int_int_arc_math_geom_Plane_Array1_float_int(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(484);
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	LINE_NUMBER(485);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(488);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)((func_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean])(ctx, (frame[2].o));
	sp += 1;
	if (temp3 != 0) goto label_39;
	}
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 2;
	((func_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(489);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	goto label_42;
	}
label_34:;
	{
	LINE_NUMBER(492);
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	}
label_42:;
	{
	LINE_NUMBER(496);
	frame[7].i = (frame[3].i);
	LINE_NUMBER(497);
	frame[8].i = ((frame[3].i) + (frame[3].i));
	LINE_NUMBER(498);
	if ((frame[5].i) == (frame[6].i)) goto label_45;
	}
	{
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	jint temp1 = frame[8].i;
	jint temp2 = frame[3].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	SM_arc_math_geom_Intersector3D_splitEdge_Array1_float_int_int_int_arc_math_geom_Plane_Array1_float_int(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(503);
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	LINE_NUMBER(504);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(507);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)((func_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean])(ctx, (frame[2].o));
	sp += 1;
	if (temp3 != 0) goto label_50;
	}
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(0);
label_51:;
	{
	sp -= 2;
	((func_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(508);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	goto label_53;
	}
label_45:;
	{
	LINE_NUMBER(511);
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	}
label_53:;
	{
	LINE_NUMBER(515);
	frame[7].i = ((frame[3].i) + (frame[3].i));
	LINE_NUMBER(516);
	frame[8].i = (jint(0));
	LINE_NUMBER(517);
	if ((frame[6].i) == (frame[4].i)) goto label_56;
	}
	{
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	jint temp1 = frame[8].i;
	jint temp2 = frame[3].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	SM_arc_math_geom_Intersector3D_splitEdge_Array1_float_int_int_int_arc_math_geom_Plane_Array1_float_int(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(522);
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	LINE_NUMBER(523);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(526);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)((func_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean])(ctx, (frame[2].o));
	sp += 1;
	if (temp3 != 0) goto label_61;
	}
	INST_ICONST(1);
	goto label_62;
label_61:;
	INST_ICONST(0);
label_62:;
	{
	sp -= 2;
	((func_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(527);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	goto label_64;
	}
label_56:;
	{
	LINE_NUMBER(530);
	((func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	}
label_64:;
	{
	LINE_NUMBER(534);
	if (((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numFront) != (jint(2))) goto label_65;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	jint temp0 = (frame[3].i) * (jint(2));
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[3].i) * (jint(3))), ((frame[3].i) * (jint(2))));
	LINE_NUMBER(536);
	sp[0].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[3].i) * (jint(5))), (frame[3].i));
	goto label_68;
	}
label_65:;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	jint temp0 = (frame[3].i) * (jint(2));
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[3].i) * (jint(3))), ((frame[3].i) * (jint(2))));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[3].i) * (jint(5))), (frame[3].i));
	}
label_68:;
	LINE_NUMBER(541);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_geom_Intersector3D_splitEdge_Array1_float_int_int_int_arc_math_geom_Plane_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5, jint param6) {
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:splitEdge", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(544);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[1].i));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (jint(1))));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (jint(2))));
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[2].i));
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(1))));
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(2))));
	sp[0].o = frame[4].o;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_intersection;
	jfloat temp6 = (jfloat)SM_arc_math_geom_Intersector3D_intersectLinePlane_float_float_float_float_float_float_arc_math_geom_Plane_arc_math_geom_Vec3_R_float(ctx, temp0, temp1, temp2, temp3, temp4, temp5, sp[0].o, sp[1].o);
	frame[7].f = temp6;
	LINE_NUMBER(546);
	sp[0].o = frame[5].o;
	jint temp7 = frame[6].i;
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_intersection;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(547);
	sp[0].o = frame[5].o;
	jint temp8 = (frame[6].i) + (jint(1));
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_intersection;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(548);
	sp[0].o = frame[5].o;
	jint temp9 = (frame[6].i) + (jint(2));
	clinit_arc_math_geom_Intersector3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector3D_intersection;
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z);
	LINE_NUMBER(549);
	frame[8].i = (jint(3));
	}
label_5:;
	{
	if ((frame[8].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(550);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (frame[8].i))));
	LINE_NUMBER(551);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (frame[8].i))));
	LINE_NUMBER(552);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[6].i) + (frame[8].i))) = ((frame[9].f) + ((frame[7].f) * ((frame[10].f) - (frame[9].f))));
	LINE_NUMBER(549);
	INST_IINC(8, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(554);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Intersector3D(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D(ctx);
	{
	LINE_NUMBER(10);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_v0 = sp[0].o;
	LINE_NUMBER(11);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_v1 = sp[0].o;
	LINE_NUMBER(12);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_v2 = sp[0].o;
	LINE_NUMBER(13);
	clinit_arc_math_geom_Plane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Plane);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	init_arc_math_geom_Plane_arc_math_geom_Vec3_float(ctx, sp[0].o, sp[1].o, (jfloat(0)));
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_p = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_i = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_best = sp[0].o;
	LINE_NUMBER(16);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_tmp = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_tmp1 = sp[0].o;
	LINE_NUMBER(18);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_tmp2 = sp[0].o;
	LINE_NUMBER(19);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_tmp3 = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector3D(ctx);
	SF_arc_math_geom_Intersector3D_intersection = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Intersector3D[] {
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
};

static jclass innerClasses[] {
	&class_arc_math_geom_Intersector3D$SplitTriangle,
};

static FieldMetadata fields[] {
	{ "v0", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_v0, "Larc/math/geom/Vec3;", 26 },
	{ "v1", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_v1, "Larc/math/geom/Vec3;", 26 },
	{ "v2", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_v2, "Larc/math/geom/Vec3;", 26 },
	{ "p", &class_arc_math_geom_Plane, (intptr_t) &SF_arc_math_geom_Intersector3D_p, "Larc/math/geom/Plane;", 26 },
	{ "i", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_i, "Larc/math/geom/Vec3;", 26 },
	{ "best", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_best, "Larc/math/geom/Vec3;", 8 },
	{ "tmp", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_tmp, "Larc/math/geom/Vec3;", 8 },
	{ "tmp1", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_tmp1, "Larc/math/geom/Vec3;", 8 },
	{ "tmp2", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_tmp2, "Larc/math/geom/Vec3;", 8 },
	{ "tmp3", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_tmp3, "Larc/math/geom/Vec3;", 8 },
	{ "intersection", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector3D_intersection, "Larc/math/geom/Vec3;", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Intersector3D, 0, "()V", 1 },
	{ "intersectRayPlane", (intptr_t) SM_arc_math_geom_Intersector3D_intersectRayPlane_arc_math_geom_Ray_arc_math_geom_Plane_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Ray;Larc/math/geom/Plane;Larc/math/geom/Vec3;)Z", 9 },
	{ "intersectLinePlane", (intptr_t) SM_arc_math_geom_Intersector3D_intersectLinePlane_float_float_float_float_float_float_arc_math_geom_Plane_arc_math_geom_Vec3_R_float, 0, "(FFFFFFLarc/math/geom/Plane;Larc/math/geom/Vec3;)F", 9 },
	{ "intersectRayTriangle", (intptr_t) SM_arc_math_geom_Intersector3D_intersectRayTriangle_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Ray;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Z", 9 },
	{ "intersectRaySphere", (intptr_t) SM_arc_math_geom_Intersector3D_intersectRaySphere_arc_math_geom_Ray_arc_math_geom_Vec3_float_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Ray;Larc/math/geom/Vec3;FLarc/math/geom/Vec3;)Z", 9 },
	{ "intersectRayBounds", (intptr_t) SM_arc_math_geom_Intersector3D_intersectRayBounds_arc_math_geom_Ray_arc_math_geom_BoundingBox_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Ray;Larc/math/geom/BoundingBox;Larc/math/geom/Vec3;)Z", 9 },
	{ "intersectRayBoundsFast", (intptr_t) SM_arc_math_geom_Intersector3D_intersectRayBoundsFast_arc_math_geom_Ray_arc_math_geom_BoundingBox_R_boolean, 0, "(Larc/math/geom/Ray;Larc/math/geom/BoundingBox;)Z", 9 },
	{ "intersectRayBoundsFast", (intptr_t) SM_arc_math_geom_Intersector3D_intersectRayBoundsFast_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Ray;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Z", 9 },
	{ "intersectSegmentPlane", (intptr_t) SM_arc_math_geom_Intersector3D_intersectSegmentPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Plane_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Plane;Larc/math/geom/Vec3;)Z", 9 },
	{ "intersectRayTriangles", (intptr_t) SM_arc_math_geom_Intersector3D_intersectRayTriangles_arc_math_geom_Ray_Array1_float_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Ray;[FLarc/math/geom/Vec3;)Z", 9 },
	{ "intersectRayTriangles", (intptr_t) SM_arc_math_geom_Intersector3D_intersectRayTriangles_arc_math_geom_Ray_Array1_float_Array1_short_int_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Ray;[F[SILarc/math/geom/Vec3;)Z", 9 },
	{ "intersectRayTriangles", (intptr_t) SM_arc_math_geom_Intersector3D_intersectRayTriangles_arc_math_geom_Ray_arc_struct_Seq_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Ray;Larc/struct/Seq;Larc/math/geom/Vec3;)Z", 9 },
	{ "splitTriangle", (intptr_t) SM_arc_math_geom_Intersector3D_splitTriangle_Array1_float_arc_math_geom_Plane_arc_math_geom_Intersector3D$SplitTriangle, 0, "([FLarc/math/geom/Plane;Larc/math/geom/Intersector3D$SplitTriangle;)V", 9 },
	{ "splitEdge", (intptr_t) SM_arc_math_geom_Intersector3D_splitEdge_Array1_float_int_int_int_arc_math_geom_Plane_Array1_float_int, 0, "([FIIILarc/math/geom/Plane;[FI)V", 10 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Intersector3D, 0, "()V", 8 },
};

Class class_arc_math_geom_Intersector3D{
		.nativeName = (intptr_t) "arc/math/geom/Intersector3D",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Intersector3D),
		.classVtable = (intptr_t) vtable_arc_math_geom_Intersector3D,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Intersector3D,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Intersector3D,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Intersector3D = registerClass(&class_arc_math_geom_Intersector3D);

}
