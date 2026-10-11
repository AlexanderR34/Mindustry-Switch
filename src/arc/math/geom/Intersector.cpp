#include "arc/math/geom/Intersector.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/geom/Rect.h"
#include "arc/struct/FloatSeq.h"
#include "arc/math/geom/Vec3.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "arc/struct/Seq.h"
#include "arc/math/geom/Circle.h"
#include "arc/math/geom/Polygon.h"
#include "arc/math/geom/Intersector_MinimumTranslationVector.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_arc_math_geom_Intersector_v0;
jobject SF_arc_math_geom_Intersector_v1;
jobject SF_arc_math_geom_Intersector_v2;
jobject SF_arc_math_geom_Intersector_floatArray;
jobject SF_arc_math_geom_Intersector_floatArray2;
jobject SF_arc_math_geom_Intersector_ip;
jobject SF_arc_math_geom_Intersector_ep1;
jobject SF_arc_math_geom_Intersector_ep2;
jobject SF_arc_math_geom_Intersector_s;
jobject SF_arc_math_geom_Intersector_e;
jobject SF_arc_math_geom_Intersector_tmp;
jobject SF_arc_math_geom_Intersector_tmp1;
jobject SF_arc_math_geom_Intersector_tmp2;
jobject SF_arc_math_geom_Intersector_tmp3;
jobject SF_arc_math_geom_Intersector_v2tmp;

void mark_arc_math_geom_Intersector(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Intersector_v0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_v0)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_v0, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_v1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_v1)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_v1, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_v2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_v2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_v2, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_floatArray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_floatArray)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_floatArray, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_floatArray2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_floatArray2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_floatArray2, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_ip)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_ip)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_ip, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_ep1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_ep1)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_ep1, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_ep2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_ep2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_ep2, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_s)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_s)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_s, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_e)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_e)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_e, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_tmp)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_tmp, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_tmp1)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_tmp1, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_tmp2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_tmp2, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_tmp3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_tmp3)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_tmp3, mark, depth + 1);
		if (SF_arc_math_geom_Intersector_v2tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Intersector_v2tmp)->clazz)->markFunction)((jobject) SF_arc_math_geom_Intersector_v2tmp, mark, depth + 1);
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
	auto self = (arc_math_geom_Intersector *) object;
}

void init_arc_math_geom_Intersector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectPolygons_Array1_float_Array1_float_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectPolygons", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(31);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(32);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(33);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	((func_arc_struct_FloatSeq_addAll_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_Array1_float])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(34);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == 0) goto label_4;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(37);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(38);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(1))))));
	LINE_NUMBER(40);
	if ((frame[2].i) >= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(2)))) goto label_10;
	}
	{
	LINE_NUMBER(41);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(3))))));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(43);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))));
	}
label_12:;
	{
	LINE_NUMBER(45);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_13;
	}
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(48);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_s;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[2].o))->F_size) - (jint(2))));
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[2].o))->F_size) - (jint(1))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(49);
	frame[3].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[3].i;
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	if (temp0 >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_17;
	}
	{
	LINE_NUMBER(50);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_e;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, (frame[3].i));
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, ((frame[3].i) + (jint(1))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(52);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_e;
	jint temp2 = (jint)SM_arc_math_geom_Intersector_pointLineSide_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp2 <= 0) goto label_20;
	}
	{
	LINE_NUMBER(53);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_s;
	jint temp0 = (jint)SM_arc_math_geom_Intersector_pointLineSide_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_22;
	}
	{
	LINE_NUMBER(54);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_s;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Intersector_ip;
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectLines_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(55);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) < (jint(2))) goto label_25;
	}
	{
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(2))));
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ip;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), -1)) != 0) goto label_25;
	}
	{
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	jint temp0 = ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	LINE_NUMBER(56);
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, temp0);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ip;
	if ((floatCompare(temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), -1)) == 0) goto label_22;
	}
label_25:;
	{
	LINE_NUMBER(57);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ip;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(58);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ip;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_22:;
	{
	LINE_NUMBER(61);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(62);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	goto label_29;
	}
label_20:;
	{
	LINE_NUMBER(63);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_s;
	jint temp0 = (jint)SM_arc_math_geom_Intersector_pointLineSide_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_29;
	}
	{
	LINE_NUMBER(64);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_s;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Intersector_ip;
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectLines_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(65);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ip;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(66);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ip;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_29:;
	{
	LINE_NUMBER(68);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_s;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(49);
	INST_IINC(3, 2);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(70);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(71);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	((func_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(37);
	INST_IINC(2, 2);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(75);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_isInTriangle_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:isInTriangle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(88);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_v0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(89);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(90);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_v2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(92);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_v0;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_v1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[4].f = temp0;
	LINE_NUMBER(93);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_v0;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_v2;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp1;
	LINE_NUMBER(94);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_v1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_v2;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[6].f = temp2;
	LINE_NUMBER(95);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_v2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_v2;
	jfloat temp3 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[7].f = temp3;
	LINE_NUMBER(97);
	if ((floatCompare((((frame[6].f) * (frame[5].f)) - ((frame[7].f) * (frame[4].f))), (jfloat(0)), 1)) >= 0) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(98);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_v1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_v1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[8].f = temp0;
	LINE_NUMBER(99);
	if ((floatCompare((((frame[4].f) * (frame[6].f)) - ((frame[5].f) * (frame[8].f))), (jfloat(0)), 1)) < 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_isInsideHexagon_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:isInsideHexagon", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(104);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) - (frame[0].f)));
	frame[5].f = (temp0 / (frame[2].f));
	LINE_NUMBER(105);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) - (frame[1].f)));
	frame[6].f = (temp1 / (frame[2].f));
	LINE_NUMBER(106);
	frame[7].f = ((jfloat(0.25f)) * (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt3));
	LINE_NUMBER(107);
	if ((floatCompare((frame[6].f), (frame[7].f), 1)) > 0) goto label_4;
	}
	{
	if ((doubleCompare(((jdouble(((frame[7].f) * (frame[5].f)))) + ((jdouble(0.25)) * (jdouble((frame[6].f))))), ((jdouble(0.5)) * (jdouble((frame[7].f)))), 1)) > 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_isInRegularPolygon_int_float_float_float_float_float_float_R_boolean(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:isInRegularPolygon", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(112);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(113);
	frame[7].i = (jint(0));
	}
label_2:;
	{
	if ((frame[7].i) >= (frame[0].i)) goto label_3;
	}
	{
	LINE_NUMBER(114);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_s;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((jfloat((frame[7].i))) * (jfloat(360.0f))) / (jfloat((frame[0].i)))) + (frame[4].f)), (frame[3].f));
	LINE_NUMBER(115);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	jfloat temp0 = frame[1].f;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_s;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = frame[2].f;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_s;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	LINE_NUMBER(113);
	INST_IINC(7, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(118);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = jint(0);
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	jint temp1 = (jint)SM_arc_math_geom_Intersector_isInPolygon_Array1_float_int_int_float_float_R_boolean(ctx, sp[0].o, temp0, ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size), (frame[5].f), (frame[6].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_isInTriangle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:isInTriangle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(123);
	frame[4].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(124);
	frame[5].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(125);
	if ((floatCompare((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x)) * (frame[5].f)) - ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y)) * (frame[4].f))), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(126);
	if ((floatCompare((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x)) * (frame[5].f)) - ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y)) * (frame[4].f))), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	INST_ILOAD(6);
	sp -= 2; if (sp[0].i != sp[1].i) goto label_8;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(127);
	if ((floatCompare((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y))) - ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x)))), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	INST_ILOAD(6);
	sp -= 2; if (sp[0].i != sp[1].i) goto label_11;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_isInTriangle_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:isInTriangle", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(132);
	frame[8].f = ((frame[0].f) - (frame[2].f));
	LINE_NUMBER(133);
	frame[9].f = ((frame[1].f) - (frame[3].f));
	LINE_NUMBER(134);
	if ((floatCompare(((((frame[4].f) - (frame[2].f)) * (frame[9].f)) - (((frame[5].f) - (frame[3].f)) * (frame[8].f))), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(135);
	if ((floatCompare(((((frame[6].f) - (frame[2].f)) * (frame[9].f)) - (((frame[7].f) - (frame[3].f)) * (frame[8].f))), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	INST_ILOAD(10);
	sp -= 2; if (sp[0].i != sp[1].i) goto label_8;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(136);
	if ((floatCompare(((((frame[6].f) - (frame[4].f)) * ((frame[1].f) - (frame[5].f))) - (((frame[7].f) - (frame[5].f)) * ((frame[0].f) - (frame[4].f)))), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	INST_ILOAD(10);
	sp -= 2; if (sp[0].i != sp[1].i) goto label_11;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_arc_math_geom_Intersector_pointLineSide_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:pointLineSide", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(145);
	jfloat temp0 = (jfloat)SM_java_lang_Math_signum_float_R_float(ctx, (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y))) - ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)))));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_geom_Intersector_pointLineSide_float_float_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:pointLineSide", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(150);
	jfloat temp0 = (((frame[2].f) - (frame[0].f)) * ((frame[5].f) - (frame[1].f))) - (((frame[3].f) - (frame[1].f)) * ((frame[4].f) - (frame[0].f)));
	LINE_NUMBER(151);
	jfloat temp1 = (jfloat)SM_java_lang_Math_signum_float_R_float(ctx, temp0);
	jint temp2 = jint(temp1);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_isInPolygon_arc_struct_Seq_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:isInPolygon", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o));
	LINE_NUMBER(162);
	frame[3].i = (jint(0));
	LINE_NUMBER(163);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o));
	LINE_NUMBER(165);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), 1)) >= 0) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), -1)) >= 0) goto label_8;
	}
label_7:;
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), 1)) >= 0) goto label_9;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), -1)) < 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(166);
	if ((floatCompare((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x) + (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y)) / (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y))) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x)))), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(167);
	if ((frame[3].i) != 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	INST_ISTORE(3);
label_9:;
	{
	LINE_NUMBER(170);
	frame[2].o = (frame[5].o);
	LINE_NUMBER(163);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_isInPolygon_Array1_float_int_int_float_float_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4) {
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:isInPolygon", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(181);
	frame[5].i = (jint(0));
	LINE_NUMBER(182);
	frame[6].i = (((frame[1].i) + (frame[2].i)) - (jint(2)));
	LINE_NUMBER(183);
	frame[7].i = (frame[1].i);
	frame[8].i = (frame[6].i);
	}
label_4:;
	{
	if ((frame[7].i) > (frame[8].i)) goto label_5;
	}
	{
	LINE_NUMBER(184);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(185);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(186);
	if ((floatCompare((frame[9].f), (frame[4].f), 1)) >= 0) goto label_9;
	}
	{
	if ((floatCompare((frame[10].f), (frame[4].f), -1)) >= 0) goto label_10;
	}
label_9:;
	{
	if ((floatCompare((frame[10].f), (frame[4].f), 1)) >= 0) goto label_11;
	}
	{
	if ((floatCompare((frame[9].f), (frame[4].f), -1)) < 0) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(187);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[7].i)));
	LINE_NUMBER(188);
	if ((floatCompare(((frame[11].f) + ((((frame[4].f) - (frame[9].f)) / ((frame[10].f) - (frame[9].f))) * (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[6].i))) - (frame[11].f)))), (frame[3].f), 1)) >= 0) goto label_11;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_13;
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	INST_ISTORE(5);
label_11:;
	{
	LINE_NUMBER(190);
	frame[6].i = (frame[7].i);
	LINE_NUMBER(183);
	INST_IINC(7, 2);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_arc_math_geom_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectPolygons", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_math_geom_Polygon_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Polygon_getVertices_R_Array1_float])(ctx, (frame[0].o));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Polygon_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getVertices_R_Array1_float])(ctx, (frame[1].o));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(208);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(209);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(210);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	((func_arc_struct_FloatSeq_addAll_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(211);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(212);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[3].i) + (jint(1))))));
	LINE_NUMBER(214);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	if (temp1 >= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(2)))) goto label_10;
	}
	{
	LINE_NUMBER(215);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[3].i) + (jint(2))));
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[3].i) + (jint(3))))));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(217);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)))));
	}
label_12:;
	{
	LINE_NUMBER(219);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_13;
	}
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(222);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_s;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[2].o))->F_size) - (jint(2))));
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[2].o))->F_size) - (jint(1))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(223);
	frame[4].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[4].i;
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	if (temp0 >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_17;
	}
	{
	LINE_NUMBER(224);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_e;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, (frame[4].i));
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, ((frame[4].i) + (jint(1))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(226);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_e;
	jint temp2 = (jint)SM_arc_math_geom_Intersector_pointLineSide_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp2 <= 0) goto label_20;
	}
	{
	LINE_NUMBER(227);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_s;
	jint temp0 = (jint)SM_arc_math_geom_Intersector_pointLineSide_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_22;
	}
	{
	LINE_NUMBER(228);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_s;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Intersector_ip;
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectLines_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(229);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) < (jint(2))) goto label_25;
	}
	{
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(2))));
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ip;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), -1)) != 0) goto label_25;
	}
	{
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	jint temp0 = ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	LINE_NUMBER(230);
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, temp0);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ip;
	if ((floatCompare(temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), -1)) == 0) goto label_22;
	}
label_25:;
	{
	LINE_NUMBER(231);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ip;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(232);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ip;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_22:;
	{
	LINE_NUMBER(235);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(236);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	goto label_29;
	}
label_20:;
	{
	LINE_NUMBER(237);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_s;
	jint temp0 = (jint)SM_arc_math_geom_Intersector_pointLineSide_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 <= 0) goto label_29;
	}
	{
	LINE_NUMBER(238);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_s;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_ep1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Intersector_ep2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Intersector_ip;
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectLines_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(239);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ip;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(240);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_ip;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_29:;
	{
	LINE_NUMBER(242);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_s;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_e;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(223);
	INST_IINC(4, 2);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(244);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(245);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	((func_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(246);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(211);
	INST_IINC(3, 2);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(248);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_37;
	}
	{
	LINE_NUMBER(249);
	if ((frame[2].o) == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_arc_math_geom_Polygon_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Polygon_getVertices_R_Array1_float])(ctx, (frame[2].o));
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	if (temp0 != ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_41;
	}
	{
	LINE_NUMBER(251);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Polygon_getVertices_R_Array1_float])(ctx, (frame[2].o));
	jint temp1 = jint(0);
	clinit_arc_math_geom_Intersector(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[2].o))->F_size));
	goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(253);
	sp[0].o = frame[2].o;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_floatArray2;
	sp[1].o = (jobject)((func_arc_struct_FloatSeq_toArray_R_Array1_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_toArray_R_Array1_float])(ctx, sp[1].o);
	((func_arc_math_geom_Polygon_setVertices_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Polygon_setVertices_Array1_float])(ctx, sp[0].o, sp[1].o);
	}
label_39:;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jint(1));
	}
label_37:;
	{
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Intersector_distanceLinePoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:distanceLinePoint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(263);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Intersector_distanceLinePoint_float_float_float_float_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Intersector_distanceLinePoint_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:distanceLinePoint", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(268);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[2].f) - (frame[0].f)) * ((frame[2].f) - (frame[0].f))) + (((frame[3].f) - (frame[1].f)) * ((frame[3].f) - (frame[1].f)))))));
	frame[6].f = (jfloat(temp0));
	LINE_NUMBER(269);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((((frame[4].f) - (frame[0].f)) * ((frame[3].f) - (frame[1].f))) - (((frame[5].f) - (frame[1].f)) * ((frame[2].f) - (frame[0].f)))));
	popStackFrame(ctx);
	return (temp1 / (frame[6].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Intersector_distanceSegmentPoint_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:distanceSegmentPoint", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(274);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = frame[5].f;
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_v2tmp;
	sp[0].o = (jobject)SM_arc_math_geom_Intersector_nearestSegmentPoint_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, temp0, temp1, temp2, temp3, temp4, temp5, sp[0].o);
	jfloat temp6 = (jfloat)((func_arc_math_geom_Vec2_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_float_float_R_float])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	popStackFrame(ctx);
	return temp6;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Intersector_distanceSegmentPoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:distanceSegmentPoint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_math_geom_Intersector(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Intersector_v2tmp;
	sp[0].o = (jobject)SM_arc_math_geom_Intersector_nearestSegmentPoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Intersector_nearestSegmentPoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:nearestSegmentPoint", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(284);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(285);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[3].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(286);
	frame[5].f = ((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x))) + ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)))) / (frame[4].f));
	LINE_NUMBER(287);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[3].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(288);
	if ((floatCompare((frame[5].f), (jfloat(1)), -1)) <= 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[3].o), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) + ((frame[5].f) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)))), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) + ((frame[5].f) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Intersector_nearestSegmentPoint_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:nearestSegmentPoint", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(295);
	frame[7].f = ((frame[2].f) - (frame[0].f));
	LINE_NUMBER(296);
	frame[8].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(297);
	frame[9].f = (((frame[7].f) * (frame[7].f)) + ((frame[8].f) * (frame[8].f)));
	LINE_NUMBER(298);
	if ((floatCompare((frame[9].f), (jfloat(0)), -1)) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[6].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(299);
	frame[10].f = (((((frame[4].f) - (frame[0].f)) * ((frame[2].f) - (frame[0].f))) + (((frame[5].f) - (frame[1].f)) * ((frame[3].f) - (frame[1].f)))) / (frame[9].f));
	LINE_NUMBER(300);
	if ((floatCompare((frame[10].f), (jfloat(0)), 1)) >= 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[6].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(301);
	if ((floatCompare((frame[10].f), (jfloat(1)), -1)) <= 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[6].o), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[6].o), ((frame[0].f) + ((frame[10].f) * ((frame[2].f) - (frame[0].f)))), ((frame[1].f) + ((frame[10].f) * ((frame[3].f) - (frame[1].f)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectSegmentCircle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectSegmentCircle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(314);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)), (jfloat(0)));
	LINE_NUMBER(315);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)), (jfloat(0)));
	LINE_NUMBER(316);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_len_R_float])(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(317);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp1;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_tmp;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp1;
	LINE_NUMBER(318);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) > 0) goto label_5;
	}
	{
	LINE_NUMBER(319);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(320);
	if ((floatCompare((frame[5].f), (frame[4].f), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(321);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(0)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(323);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp3;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_tmp;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[5].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(324);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp2;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_tmp3;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x);
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_tmp3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)), (jfloat(0)));
	}
label_7:;
	{
	LINE_NUMBER(327);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp2;
	frame[6].f = (temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(328);
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp2;
	frame[7].f = (temp1 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(330);
	if ((floatCompare((((frame[6].f) * (frame[6].f)) + ((frame[7].f) * (frame[7].f))), (frame[3].f), 1)) > 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Intersector_intersectSegmentCircleDisplace_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectSegmentCircleDisplace", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(345);
	frame[5].f = (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x))) + ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y))));
	LINE_NUMBER(346);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[6].f = temp0;
	LINE_NUMBER(347);
	frame[5].f = ((frame[5].f) / ((frame[6].f) * (frame[6].f)));
	LINE_NUMBER(348);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) < 0) goto label_4;
	}
	{
	if ((floatCompare((frame[5].f), (jfloat(1)), -1)) <= 0) goto label_5;
	}
label_4:;
	(sp++)->f = jfloat(std::numeric_limits<float>::infinity());
	popStackFrame(ctx);
	INST_FRETURN();
label_5:;
	{
	LINE_NUMBER(349);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)));
	LINE_NUMBER(350);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)));
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_tmp;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[5].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(351);
	clinit_arc_math_geom_Intersector(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Intersector_tmp2;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_float_float_float_R_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), (jfloat(0)));
	frame[6].f = temp0;
	LINE_NUMBER(352);
	if ((floatCompare((frame[6].f), (frame[3].f), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[4].o), (frame[2].o));
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_tmp2;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_geom_Intersector(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Intersector_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (frame[6].f);
	}
label_9:;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (jfloat(std::numeric_limits<float>::infinity()));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Intersector_intersectRayRay_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectRayRay", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(371);
	frame[4].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(372);
	frame[5].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(373);
	frame[6].f = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x)));
	LINE_NUMBER(374);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (jfloat(std::numeric_limits<float>::infinity()));
	}
label_4:;
	{
	LINE_NUMBER(377);
	frame[7].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) / (frame[6].f));
	LINE_NUMBER(378);
	frame[8].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) / (frame[6].f));
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (((frame[4].f) * (frame[8].f)) - ((frame[5].f) * (frame[7].f)));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectLines_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectLines", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(392);
	frame[5].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x);
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y);
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[8].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x);
	frame[10].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y);
	frame[11].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x);
	frame[12].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y);
	LINE_NUMBER(394);
	frame[13].f = ((((frame[12].f) - (frame[10].f)) * ((frame[7].f) - (frame[5].f))) - (((frame[11].f) - (frame[9].f)) * ((frame[8].f) - (frame[6].f))));
	LINE_NUMBER(395);
	if ((floatCompare((frame[13].f), (jfloat(0)), -1)) != 0) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(397);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(398);
	frame[14].f = (((((frame[11].f) - (frame[9].f)) * ((frame[6].f) - (frame[10].f))) - (((frame[12].f) - (frame[10].f)) * ((frame[5].f) - (frame[9].f)))) / (frame[13].f));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[4].o), ((frame[5].f) + (((frame[7].f) - (frame[5].f)) * (frame[14].f))), ((frame[6].f) + (((frame[8].f) - (frame[6].f)) * (frame[14].f))));
	}
label_11:;
	{
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectLines_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectLines", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(410);
	frame[9].f = ((((frame[7].f) - (frame[5].f)) * ((frame[2].f) - (frame[0].f))) - (((frame[6].f) - (frame[4].f)) * ((frame[3].f) - (frame[1].f))));
	LINE_NUMBER(411);
	if ((floatCompare((frame[9].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(413);
	if ((frame[8].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(414);
	frame[10].f = (((((frame[6].f) - (frame[4].f)) * ((frame[1].f) - (frame[5].f))) - (((frame[7].f) - (frame[5].f)) * ((frame[0].f) - (frame[4].f)))) / (frame[9].f));
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[8].o), ((frame[0].f) + (((frame[2].f) - (frame[0].f)) * (frame[10].f))), ((frame[1].f) + (((frame[3].f) - (frame[1].f)) * (frame[10].f))));
	}
label_3:;
	{
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectLinePolygon_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[22];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectLinePolygon", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(429);
	frame[4].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x);
	frame[5].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y);
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(430);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(431);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[8].i) - (jint(2)))));
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[8].i) - (jint(1)))));
	LINE_NUMBER(432);
	frame[11].i = (jint(0));
	}
label_9:;
	{
	if ((frame[11].i) >= (frame[8].i)) goto label_10;
	}
	{
	LINE_NUMBER(433);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[11].i)));
	frame[13].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[11].i) + (jint(1)))));
	LINE_NUMBER(434);
	frame[14].f = ((((frame[13].f) - (frame[10].f)) * ((frame[6].f) - (frame[4].f))) - (((frame[12].f) - (frame[9].f)) * ((frame[7].f) - (frame[5].f))));
	LINE_NUMBER(435);
	if ((floatCompare((frame[14].f), (jfloat(0)), -1)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(436);
	frame[15].f = ((frame[5].f) - (frame[10].f));
	LINE_NUMBER(437);
	frame[16].f = ((frame[4].f) - (frame[9].f));
	LINE_NUMBER(438);
	frame[17].f = (((((frame[12].f) - (frame[9].f)) * (frame[15].f)) - (((frame[13].f) - (frame[10].f)) * (frame[16].f))) / (frame[14].f));
	LINE_NUMBER(439);
	if ((floatCompare((frame[17].f), (jfloat(0)), -1)) < 0) goto label_15;
	}
	{
	if ((floatCompare((frame[17].f), (jfloat(1)), 1)) > 0) goto label_15;
	}
	{
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(443);
	frame[9].f = (frame[12].f);
	LINE_NUMBER(444);
	frame[10].f = (frame[13].f);
	LINE_NUMBER(432);
	INST_IINC(11, 2);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectRectangles_arc_math_geom_Rect_arc_math_geom_Rect_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectRectangles", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(455);
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(457);
	sp[0].o = frame[2].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width)));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (temp1 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_x));
	LINE_NUMBER(458);
	sp[0].o = frame[2].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(459);
	sp[0].o = frame[2].o;
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height)));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (temp3 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_y));
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectSegmentRectangleFast_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[25];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectSegmentRectangleFast", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(468);
	frame[8].f = ((frame[2].f) - (frame[0].f));
	LINE_NUMBER(469);
	frame[9].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(470);
	frame[10].f = ((frame[4].f) + ((frame[6].f) / (jfloat(2))));
	LINE_NUMBER(471);
	frame[11].f = ((frame[5].f) + ((frame[7].f) / (jfloat(2))));
	LINE_NUMBER(472);
	frame[12].f = ((frame[6].f) / (jfloat(2)));
	LINE_NUMBER(473);
	frame[13].f = ((frame[7].f) / (jfloat(2)));
	LINE_NUMBER(475);
	frame[14].f = ((jfloat(1)) / (frame[8].f));
	LINE_NUMBER(476);
	frame[15].f = ((jfloat(1)) / (frame[9].f));
	LINE_NUMBER(477);
	jint temp0 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (frame[14].f));
	frame[16].i = temp0;
	LINE_NUMBER(478);
	jint temp1 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (frame[15].f));
	frame[17].i = temp1;
	LINE_NUMBER(479);
	frame[18].f = ((((frame[10].f) - ((jfloat((frame[16].i))) * (frame[12].f))) - (frame[0].f)) * (frame[14].f));
	LINE_NUMBER(480);
	frame[19].f = ((((frame[11].f) - ((jfloat((frame[17].i))) * (frame[13].f))) - (frame[1].f)) * (frame[15].f));
	LINE_NUMBER(481);
	frame[20].f = ((((frame[10].f) + ((jfloat((frame[16].i))) * (frame[12].f))) - (frame[0].f)) * (frame[14].f));
	LINE_NUMBER(482);
	frame[21].f = ((((frame[11].f) + ((jfloat((frame[17].i))) * (frame[13].f))) - (frame[1].f)) * (frame[15].f));
	LINE_NUMBER(484);
	if ((floatCompare((frame[18].f), (frame[21].f), 1)) >= 0) goto label_15;
	}
	{
	if ((floatCompare((frame[19].f), (frame[20].f), 1)) >= 0) goto label_15;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[18].f), (frame[19].f));
	if ((floatCompare(temp0, (jfloat(1)), 1)) >= 0) goto label_15;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[20].f), (frame[21].f));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectSegmentRectangle_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectSegmentRectangle", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(496);
	frame[8].f = ((frame[4].f) + (frame[6].f));
	LINE_NUMBER(497);
	frame[9].f = ((frame[5].f) + (frame[7].f));
	LINE_NUMBER(499);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = frame[5].f;
	jfloat temp6 = frame[4].f;
	jfloat temp7 = frame[9].f;
	sp[0].o = jobject(nullptr);
	LINE_NUMBER(500);
	jint temp8 = (jint)SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	if (temp8 != 0) goto label_4;
	}
	{
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = frame[5].f;
	jfloat temp6 = frame[8].f;
	jfloat temp7 = frame[5].f;
	sp[0].o = jobject(nullptr);
	LINE_NUMBER(501);
	jint temp8 = (jint)SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	if (temp8 != 0) goto label_4;
	}
	{
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[8].f;
	jfloat temp5 = frame[5].f;
	jfloat temp6 = frame[8].f;
	jfloat temp7 = frame[9].f;
	sp[0].o = jobject(nullptr);
	LINE_NUMBER(502);
	jint temp8 = (jint)SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	if (temp8 != 0) goto label_4;
	}
	{
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = frame[9].f;
	jfloat temp6 = frame[8].f;
	jfloat temp7 = frame[9].f;
	sp[0].o = jobject(nullptr);
	LINE_NUMBER(503);
	jint temp8 = (jint)SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	if (temp8 != 0) goto label_4;
	}
	{
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	jfloat temp2 = frame[6].f;
	jfloat temp3 = frame[7].f;
	jfloat temp4 = frame[0].f;
	jfloat temp5 = frame[1].f;
	LINE_NUMBER(504);
	jint temp6 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5);
	if (temp6 == 0) goto label_9;
	}
label_4:;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	LINE_NUMBER(499);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectSegmentRectangle_float_float_float_float_arc_math_geom_Rect_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectSegmentRectangle", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(517);
	frame[5].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_width));
	LINE_NUMBER(518);
	frame[6].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_height));
	LINE_NUMBER(520);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_x), (frame[6].f), (jobject(nullptr)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(523);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_y), (frame[5].f), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_y), (jobject(nullptr)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(526);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[5].f), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_y), (frame[5].f), (frame[6].f), (jobject(nullptr)));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(529);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_x), (frame[6].f), (frame[5].f), (frame[6].f), (jobject(nullptr)));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(532);
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, (frame[4].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectSegmentRectangle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectSegmentRectangle", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(539);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectSegmentRectangle_float_float_float_float_arc_math_geom_Rect_R_boolean(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectSegmentPolygon_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectSegmentPolygon", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(550);
	frame[4].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x);
	frame[5].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y);
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(551);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(552);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[8].i) - (jint(2)))));
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[8].i) - (jint(1)))));
	LINE_NUMBER(553);
	frame[11].i = (jint(0));
	}
label_9:;
	{
	if ((frame[11].i) >= (frame[8].i)) goto label_10;
	}
	{
	LINE_NUMBER(554);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[11].i)));
	frame[13].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[11].i) + (jint(1)))));
	LINE_NUMBER(555);
	frame[14].f = ((((frame[13].f) - (frame[10].f)) * ((frame[6].f) - (frame[4].f))) - (((frame[12].f) - (frame[9].f)) * ((frame[7].f) - (frame[5].f))));
	LINE_NUMBER(556);
	if ((floatCompare((frame[14].f), (jfloat(0)), -1)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(557);
	frame[15].f = ((frame[5].f) - (frame[10].f));
	LINE_NUMBER(558);
	frame[16].f = ((frame[4].f) - (frame[9].f));
	LINE_NUMBER(559);
	frame[17].f = (((((frame[12].f) - (frame[9].f)) * (frame[15].f)) - (((frame[13].f) - (frame[10].f)) * (frame[16].f))) / (frame[14].f));
	LINE_NUMBER(560);
	if ((floatCompare((frame[17].f), (jfloat(0)), -1)) < 0) goto label_15;
	}
	{
	if ((floatCompare((frame[17].f), (jfloat(1)), 1)) > 0) goto label_15;
	}
	{
	LINE_NUMBER(561);
	frame[18].f = (((((frame[6].f) - (frame[4].f)) * (frame[15].f)) - (((frame[7].f) - (frame[5].f)) * (frame[16].f))) / (frame[14].f));
	LINE_NUMBER(562);
	if ((floatCompare((frame[18].f), (jfloat(0)), -1)) < 0) goto label_15;
	}
	{
	if ((floatCompare((frame[18].f), (jfloat(1)), 1)) > 0) goto label_15;
	}
	{
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(567);
	frame[9].f = (frame[12].f);
	LINE_NUMBER(568);
	frame[10].f = (frame[13].f);
	LINE_NUMBER(553);
	INST_IINC(11, 2);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectSegments_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectSegments", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(583);
	frame[5].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x);
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y);
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[8].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x);
	frame[10].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y);
	frame[11].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x);
	frame[12].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y);
	LINE_NUMBER(585);
	frame[13].f = ((((frame[12].f) - (frame[10].f)) * ((frame[7].f) - (frame[5].f))) - (((frame[11].f) - (frame[9].f)) * ((frame[8].f) - (frame[6].f))));
	LINE_NUMBER(586);
	if ((floatCompare((frame[13].f), (jfloat(0)), -1)) != 0) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(588);
	frame[14].f = ((frame[6].f) - (frame[10].f));
	LINE_NUMBER(589);
	frame[15].f = ((frame[5].f) - (frame[9].f));
	LINE_NUMBER(590);
	frame[16].f = (((((frame[11].f) - (frame[9].f)) * (frame[14].f)) - (((frame[12].f) - (frame[10].f)) * (frame[15].f))) / (frame[13].f));
	LINE_NUMBER(591);
	if ((floatCompare((frame[16].f), (jfloat(0)), 1)) < 0) goto label_14;
	}
	{
	if ((floatCompare((frame[16].f), (jfloat(1)), -1)) <= 0) goto label_15;
	}
label_14:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(593);
	frame[17].f = (((((frame[7].f) - (frame[5].f)) * (frame[14].f)) - (((frame[8].f) - (frame[6].f)) * (frame[15].f))) / (frame[13].f));
	LINE_NUMBER(594);
	if ((floatCompare((frame[17].f), (jfloat(0)), 1)) < 0) goto label_17;
	}
	{
	if ((floatCompare((frame[17].f), (jfloat(1)), -1)) <= 0) goto label_18;
	}
label_17:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(596);
	if ((frame[4].o) == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[4].o), ((frame[5].f) + (((frame[7].f) - (frame[5].f)) * (frame[16].f))), ((frame[6].f) + (((frame[8].f) - (frame[6].f)) * (frame[16].f))));
	}
label_19:;
	{
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8) {
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:intersectSegments", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(603);
	frame[9].f = ((((frame[7].f) - (frame[5].f)) * ((frame[2].f) - (frame[0].f))) - (((frame[6].f) - (frame[4].f)) * ((frame[3].f) - (frame[1].f))));
	LINE_NUMBER(604);
	if ((floatCompare((frame[9].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(606);
	frame[10].f = ((frame[1].f) - (frame[5].f));
	LINE_NUMBER(607);
	frame[11].f = ((frame[0].f) - (frame[4].f));
	LINE_NUMBER(608);
	frame[12].f = (((((frame[6].f) - (frame[4].f)) * (frame[10].f)) - (((frame[7].f) - (frame[5].f)) * (frame[11].f))) / (frame[9].f));
	LINE_NUMBER(609);
	if ((floatCompare((frame[12].f), (jfloat(0)), 1)) < 0) goto label_6;
	}
	{
	if ((floatCompare((frame[12].f), (jfloat(1)), -1)) <= 0) goto label_7;
	}
label_6:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(611);
	frame[13].f = (((((frame[2].f) - (frame[0].f)) * (frame[10].f)) - (((frame[3].f) - (frame[1].f)) * (frame[11].f))) / (frame[9].f));
	LINE_NUMBER(612);
	if ((floatCompare((frame[13].f), (jfloat(0)), 1)) < 0) goto label_9;
	}
	{
	if ((floatCompare((frame[13].f), (jfloat(1)), -1)) <= 0) goto label_10;
	}
label_9:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(614);
	if ((frame[8].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[8].o), ((frame[0].f) + (((frame[2].f) - (frame[0].f)) * (frame[12].f))), ((frame[1].f) + (((frame[3].f) - (frame[1].f)) * (frame[12].f))));
	}
label_11:;
	{
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Intersector_det_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:det", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(619);
	popStackFrame(ctx);
	return (((frame[0].f) * (frame[3].f)) - ((frame[1].f) * (frame[2].f)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_math_geom_Intersector_detd_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:detd", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return (((frame[0].d) * (frame[6].d)) - ((frame[2].d) * (frame[4].d)));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_overlapsRect_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:overlapsRect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(627);
	if ((floatCompare((frame[0].f), ((frame[4].f) + (frame[6].f)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare(((frame[0].f) + (frame[2].f)), (frame[4].f), -1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare((frame[1].f), ((frame[5].f) + (frame[7].f)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare(((frame[1].f) + (frame[3].f)), (frame[5].f), -1)) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Circle_arc_math_geom_Circle_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:overlaps", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(631);
	jint temp0 = (jint)((func_arc_math_geom_Circle_overlaps_arc_math_geom_Circle_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Circle_overlaps_arc_math_geom_Circle_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Rect_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:overlaps", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(635);
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Circle_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:overlaps", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(639);
	frame[2].f = ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(640);
	frame[3].f = ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(642);
	if ((floatCompare(((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(643);
	frame[2].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(644);
	if ((floatCompare(((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(645);
	frame[2].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width));
	}
label_5:;
	{
	LINE_NUMBER(648);
	if ((floatCompare(((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(649);
	frame[3].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(650);
	if ((floatCompare(((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(651);
	frame[3].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height));
	}
label_9:;
	{
	LINE_NUMBER(654);
	frame[2].f = ((frame[2].f) - ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(655);
	frame[2].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(656);
	frame[3].f = ((frame[3].f) - ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(657);
	frame[3].f = ((frame[3].f) * (frame[3].f));
	LINE_NUMBER(659);
	if ((floatCompare(((frame[2].f) + (frame[3].f)), (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius)), 1)) >= 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_overlapConvexPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:overlapConvexPolygons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(669);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_overlapConvexPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_overlapConvexPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:overlapConvexPolygons", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(681);
	sp[0].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	jint temp0 = (jint)SM_arc_math_geom_Intersector_overlapConvexPolygons_Array1_float_Array1_float_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_overlapConvexPolygons_Array1_float_Array1_float_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:overlapConvexPolygons", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(686);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_overlapConvexPolygons_Array1_float_int_int_Array1_float_int_int_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Intersector_overlapConvexPolygons_Array1_float_int_int_Array1_float_int_int_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5, jobject param6) {
	jtype frame[37];
	auto stack = &frame[28];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:overlapConvexPolygons", 37 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(700);
	frame[7].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(701);
	frame[8].f = (jfloat(0));
	LINE_NUMBER(702);
	frame[9].f = (jfloat(0));
	LINE_NUMBER(705);
	frame[11].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(706);
	frame[12].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(709);
	frame[13].i = (frame[1].i);
	}
label_6:;
	{
	if ((frame[13].i) >= (frame[11].i)) goto label_7;
	}
	{
	LINE_NUMBER(710);
	frame[14].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[13].i)));
	LINE_NUMBER(711);
	frame[15].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[13].i) + (jint(1)))));
	LINE_NUMBER(712);
	frame[16].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (((frame[13].i) + (jint(2))) % (frame[2].i))));
	LINE_NUMBER(713);
	frame[17].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (((frame[13].i) + (jint(3))) % (frame[2].i))));
	LINE_NUMBER(715);
	frame[18].f = ((frame[15].f) - (frame[17].f));
	LINE_NUMBER(716);
	frame[19].f = (-((frame[14].f) - (frame[16].f)));
	LINE_NUMBER(718);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[18].f) * (frame[18].f)) + ((frame[19].f) * (frame[19].f))))));
	frame[20].f = (jfloat(temp0));
	LINE_NUMBER(719);
	frame[18].f = ((frame[18].f) / (frame[20].f));
	LINE_NUMBER(720);
	frame[19].f = ((frame[19].f) / (frame[20].f));
	LINE_NUMBER(725);
	frame[21].f = (((frame[18].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))))) + ((frame[19].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))));
	LINE_NUMBER(726);
	frame[22].f = (frame[21].f);
	LINE_NUMBER(727);
	frame[23].i = (frame[1].i);
	}
label_20:;
	{
	if ((frame[23].i) >= (frame[11].i)) goto label_21;
	}
	{
	LINE_NUMBER(728);
	frame[24].f = (((frame[18].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[23].i)))) + ((frame[19].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[23].i) + (jint(1)))))));
	LINE_NUMBER(729);
	if ((floatCompare((frame[24].f), (frame[21].f), 1)) >= 0) goto label_24;
	}
	{
	LINE_NUMBER(730);
	frame[21].f = (frame[24].f);
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(731);
	if ((floatCompare((frame[24].f), (frame[22].f), -1)) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(732);
	frame[22].f = (frame[24].f);
	}
label_26:;
	{
	LINE_NUMBER(727);
	INST_IINC(23, 2);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(737);
	frame[10].i = (jint(0));
	LINE_NUMBER(738);
	frame[23].f = (((frame[18].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))))) + ((frame[19].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))))));
	LINE_NUMBER(739);
	frame[24].f = (frame[23].f);
	LINE_NUMBER(740);
	frame[25].i = (frame[4].i);
	}
label_31:;
	{
	if ((frame[25].i) >= (frame[12].i)) goto label_32;
	}
	{
	LINE_NUMBER(742);
	jint temp0 = frame[10].i;
	jint temp1 = (jint)SM_arc_math_geom_Intersector_pointLineSide_float_float_float_float_float_float_R_int(ctx, (frame[14].f), (frame[15].f), (frame[16].f), (frame[17].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[25].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[25].i) + (jint(1))))));
	frame[10].i = (temp0 - temp1);
	LINE_NUMBER(743);
	frame[26].f = (((frame[18].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[25].i)))) + ((frame[19].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[25].i) + (jint(1)))))));
	LINE_NUMBER(744);
	if ((floatCompare((frame[26].f), (frame[23].f), 1)) >= 0) goto label_36;
	}
	{
	LINE_NUMBER(745);
	frame[23].f = (frame[26].f);
	goto label_38;
	}
label_36:;
	{
	LINE_NUMBER(746);
	if ((floatCompare((frame[26].f), (frame[24].f), -1)) <= 0) goto label_38;
	}
	{
	LINE_NUMBER(747);
	frame[24].f = (frame[26].f);
	}
label_38:;
	{
	LINE_NUMBER(740);
	INST_IINC(25, 2);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(751);
	if ((floatCompare((frame[21].f), (frame[23].f), 1)) > 0) goto label_40;
	}
	{
	if ((floatCompare((frame[22].f), (frame[23].f), -1)) >= 0) goto label_41;
	}
label_40:;
	{
	if ((floatCompare((frame[23].f), (frame[21].f), 1)) > 0) goto label_42;
	}
	{
	if ((floatCompare((frame[24].f), (frame[21].f), -1)) >= 0) goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(752);
	popStackFrame(ctx);
	return (jint(0));
	}
label_41:;
	{
	LINE_NUMBER(754);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[22].f), (frame[24].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[21].f), (frame[23].f));
	frame[25].f = (temp0 - temp1);
	LINE_NUMBER(755);
	if ((floatCompare((frame[21].f), (frame[23].f), 1)) >= 0) goto label_44;
	}
	{
	if ((floatCompare((frame[22].f), (frame[24].f), -1)) > 0) goto label_45;
	}
label_44:;
	{
	if ((floatCompare((frame[23].f), (frame[21].f), 1)) >= 0) goto label_46;
	}
	{
	if ((floatCompare((frame[24].f), (frame[22].f), -1)) <= 0) goto label_46;
	}
label_45:;
	{
	LINE_NUMBER(756);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[21].f) - (frame[23].f)));
	frame[26].f = temp0;
	LINE_NUMBER(757);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[22].f) - (frame[24].f)));
	frame[27].f = temp1;
	LINE_NUMBER(758);
	if ((floatCompare((frame[26].f), (frame[27].f), 1)) >= 0) goto label_49;
	}
	{
	LINE_NUMBER(759);
	frame[25].f = ((frame[25].f) + (frame[26].f));
	goto label_46;
	}
label_49:;
	{
	LINE_NUMBER(761);
	frame[25].f = ((frame[25].f) + (frame[27].f));
	}
label_46:;
	{
	LINE_NUMBER(764);
	if ((floatCompare((frame[25].f), (frame[7].f), 1)) >= 0) goto label_51;
	}
	{
	LINE_NUMBER(765);
	frame[7].f = (frame[25].f);
	LINE_NUMBER(767);
	if ((frame[10].i) < 0) goto label_54;
	}
	INST_FLOAD(18);
	goto label_55;
label_54:;
	INST_FLOAD(18);
	INST_FNEG();
label_55:;
	{
	sp -= 1;
	frame[8].f = sp[0].f;
	LINE_NUMBER(768);
	if ((frame[10].i) < 0) goto label_57;
	}
	INST_FLOAD(19);
	goto label_58;
label_57:;
	INST_FLOAD(19);
	INST_FNEG();
label_58:;
	INST_FSTORE(9);
label_51:;
	{
	LINE_NUMBER(709);
	INST_IINC(13, 2);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(775);
	frame[13].i = (frame[4].i);
	}
label_59:;
	{
	if ((frame[13].i) >= (frame[12].i)) goto label_60;
	}
	{
	LINE_NUMBER(776);
	frame[14].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[13].i)));
	LINE_NUMBER(777);
	frame[15].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[13].i) + (jint(1)))));
	LINE_NUMBER(778);
	frame[16].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (((frame[13].i) + (jint(2))) % (frame[5].i))));
	LINE_NUMBER(779);
	frame[17].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (((frame[13].i) + (jint(3))) % (frame[5].i))));
	LINE_NUMBER(781);
	frame[18].f = ((frame[15].f) - (frame[17].f));
	LINE_NUMBER(782);
	frame[19].f = (-((frame[14].f) - (frame[16].f)));
	LINE_NUMBER(784);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[18].f) * (frame[18].f)) + ((frame[19].f) * (frame[19].f))))));
	frame[20].f = (jfloat(temp0));
	LINE_NUMBER(785);
	frame[18].f = ((frame[18].f) / (frame[20].f));
	LINE_NUMBER(786);
	frame[19].f = ((frame[19].f) / (frame[20].f));
	LINE_NUMBER(789);
	frame[10].i = (jint(0));
	LINE_NUMBER(792);
	frame[21].f = (((frame[18].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))))) + ((frame[19].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))));
	LINE_NUMBER(793);
	frame[22].f = (frame[21].f);
	LINE_NUMBER(794);
	frame[23].i = (frame[1].i);
	}
label_74:;
	{
	if ((frame[23].i) >= (frame[11].i)) goto label_75;
	}
	{
	LINE_NUMBER(795);
	frame[24].f = (((frame[18].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[23].i)))) + ((frame[19].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[23].i) + (jint(1)))))));
	LINE_NUMBER(797);
	jint temp0 = frame[10].i;
	jint temp1 = (jint)SM_arc_math_geom_Intersector_pointLineSide_float_float_float_float_float_float_R_int(ctx, (frame[14].f), (frame[15].f), (frame[16].f), (frame[17].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[23].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[23].i) + (jint(1))))));
	frame[10].i = (temp0 - temp1);
	LINE_NUMBER(798);
	if ((floatCompare((frame[24].f), (frame[21].f), 1)) >= 0) goto label_79;
	}
	{
	LINE_NUMBER(799);
	frame[21].f = (frame[24].f);
	goto label_81;
	}
label_79:;
	{
	LINE_NUMBER(800);
	if ((floatCompare((frame[24].f), (frame[22].f), -1)) <= 0) goto label_81;
	}
	{
	LINE_NUMBER(801);
	frame[22].f = (frame[24].f);
	}
label_81:;
	{
	LINE_NUMBER(794);
	INST_IINC(23, 2);
	goto label_74;
	}
label_75:;
	{
	LINE_NUMBER(806);
	frame[23].f = (((frame[18].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))))) + ((frame[19].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))))));
	LINE_NUMBER(807);
	frame[24].f = (frame[23].f);
	LINE_NUMBER(808);
	frame[25].i = (frame[4].i);
	}
label_85:;
	{
	if ((frame[25].i) >= (frame[12].i)) goto label_86;
	}
	{
	LINE_NUMBER(809);
	frame[26].f = (((frame[18].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[25].i)))) + ((frame[19].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[25].i) + (jint(1)))))));
	LINE_NUMBER(810);
	if ((floatCompare((frame[26].f), (frame[23].f), 1)) >= 0) goto label_89;
	}
	{
	LINE_NUMBER(811);
	frame[23].f = (frame[26].f);
	goto label_91;
	}
label_89:;
	{
	LINE_NUMBER(812);
	if ((floatCompare((frame[26].f), (frame[24].f), -1)) <= 0) goto label_91;
	}
	{
	LINE_NUMBER(813);
	frame[24].f = (frame[26].f);
	}
label_91:;
	{
	LINE_NUMBER(808);
	INST_IINC(25, 2);
	goto label_85;
	}
label_86:;
	{
	LINE_NUMBER(817);
	if ((floatCompare((frame[21].f), (frame[23].f), 1)) > 0) goto label_93;
	}
	{
	if ((floatCompare((frame[22].f), (frame[23].f), -1)) >= 0) goto label_94;
	}
label_93:;
	{
	if ((floatCompare((frame[23].f), (frame[21].f), 1)) > 0) goto label_95;
	}
	{
	if ((floatCompare((frame[24].f), (frame[21].f), -1)) >= 0) goto label_94;
	}
label_95:;
	{
	LINE_NUMBER(818);
	popStackFrame(ctx);
	return (jint(0));
	}
label_94:;
	{
	LINE_NUMBER(820);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[22].f), (frame[24].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[21].f), (frame[23].f));
	frame[25].f = (temp0 - temp1);
	LINE_NUMBER(822);
	if ((floatCompare((frame[21].f), (frame[23].f), 1)) >= 0) goto label_97;
	}
	{
	if ((floatCompare((frame[22].f), (frame[24].f), -1)) > 0) goto label_98;
	}
label_97:;
	{
	if ((floatCompare((frame[23].f), (frame[21].f), 1)) >= 0) goto label_99;
	}
	{
	if ((floatCompare((frame[24].f), (frame[22].f), -1)) <= 0) goto label_99;
	}
label_98:;
	{
	LINE_NUMBER(823);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[21].f) - (frame[23].f)));
	frame[26].f = temp0;
	LINE_NUMBER(824);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[22].f) - (frame[24].f)));
	frame[27].f = temp1;
	LINE_NUMBER(825);
	if ((floatCompare((frame[26].f), (frame[27].f), 1)) >= 0) goto label_102;
	}
	{
	LINE_NUMBER(826);
	frame[25].f = ((frame[25].f) + (frame[26].f));
	goto label_99;
	}
label_102:;
	{
	LINE_NUMBER(828);
	frame[25].f = ((frame[25].f) + (frame[27].f));
	}
label_99:;
	{
	LINE_NUMBER(832);
	if ((floatCompare((frame[25].f), (frame[7].f), 1)) >= 0) goto label_104;
	}
	{
	LINE_NUMBER(833);
	frame[7].f = (frame[25].f);
	LINE_NUMBER(835);
	if ((frame[10].i) >= 0) goto label_107;
	}
	INST_FLOAD(18);
	goto label_108;
label_107:;
	INST_FLOAD(18);
	INST_FNEG();
label_108:;
	{
	sp -= 1;
	frame[8].f = sp[0].f;
	LINE_NUMBER(836);
	if ((frame[10].i) >= 0) goto label_110;
	}
	INST_FLOAD(19);
	goto label_111;
label_110:;
	INST_FLOAD(19);
	INST_FNEG();
label_111:;
	INST_FSTORE(9);
label_104:;
	{
	LINE_NUMBER(775);
	INST_IINC(13, 2);
	goto label_59;
	}
label_60:;
	{
	LINE_NUMBER(841);
	if ((frame[6].o) == nullptr) goto label_112;
	}
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((arc_math_geom_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[6].o)))->F_normal;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[8].f), (frame[9].f));
	LINE_NUMBER(843);
	((arc_math_geom_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[6].o)))->F_depth = (frame[7].f);
	}
label_112:;
	{
	LINE_NUMBER(845);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Intersector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector(ctx);
	{
	LINE_NUMBER(13);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_v0 = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_v1 = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_v2 = sp[0].o;
	LINE_NUMBER(16);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_floatArray = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_floatArray2 = sp[0].o;
	LINE_NUMBER(18);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_ip = sp[0].o;
	LINE_NUMBER(19);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_ep1 = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_ep2 = sp[0].o;
	LINE_NUMBER(21);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_s = sp[0].o;
	LINE_NUMBER(22);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_e = sp[0].o;
	LINE_NUMBER(23);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_tmp = sp[0].o;
	LINE_NUMBER(24);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_tmp1 = sp[0].o;
	LINE_NUMBER(25);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_tmp2 = sp[0].o;
	LINE_NUMBER(26);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_tmp3 = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_geom_Intersector(ctx);
	SF_arc_math_geom_Intersector_v2tmp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Intersector[] {
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
	&class_arc_math_geom_Intersector$MinimumTranslationVector,
};

static FieldMetadata fields[] {
	{ "v0", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector_v0, "Larc/math/geom/Vec3;", 26 },
	{ "v1", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector_v1, "Larc/math/geom/Vec3;", 26 },
	{ "v2", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector_v2, "Larc/math/geom/Vec3;", 26 },
	{ "floatArray", &class_arc_struct_FloatSeq, (intptr_t) &SF_arc_math_geom_Intersector_floatArray, "Larc/struct/FloatSeq;", 26 },
	{ "floatArray2", &class_arc_struct_FloatSeq, (intptr_t) &SF_arc_math_geom_Intersector_floatArray2, "Larc/struct/FloatSeq;", 26 },
	{ "ip", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Intersector_ip, "Larc/math/geom/Vec2;", 26 },
	{ "ep1", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Intersector_ep1, "Larc/math/geom/Vec2;", 26 },
	{ "ep2", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Intersector_ep2, "Larc/math/geom/Vec2;", 26 },
	{ "s", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Intersector_s, "Larc/math/geom/Vec2;", 26 },
	{ "e", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Intersector_e, "Larc/math/geom/Vec2;", 26 },
	{ "tmp", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector_tmp, "Larc/math/geom/Vec3;", 8 },
	{ "tmp1", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector_tmp1, "Larc/math/geom/Vec3;", 8 },
	{ "tmp2", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector_tmp2, "Larc/math/geom/Vec3;", 8 },
	{ "tmp3", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Intersector_tmp3, "Larc/math/geom/Vec3;", 8 },
	{ "v2tmp", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Intersector_v2tmp, "Larc/math/geom/Vec2;", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Intersector, 0, "()V", 1 },
	{ "intersectPolygons", (intptr_t) SM_arc_math_geom_Intersector_intersectPolygons_Array1_float_Array1_float_R_boolean, 0, "([F[F)Z", 9 },
	{ "isInTriangle", (intptr_t) SM_arc_math_geom_Intersector_isInTriangle_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Z", 9 },
	{ "isInsideHexagon", (intptr_t) SM_arc_math_geom_Intersector_isInsideHexagon_float_float_float_float_float_R_boolean, 0, "(FFFFF)Z", 9 },
	{ "isInRegularPolygon", (intptr_t) SM_arc_math_geom_Intersector_isInRegularPolygon_int_float_float_float_float_float_float_R_boolean, 0, "(IFFFFFF)Z", 9 },
	{ "isInTriangle", (intptr_t) SM_arc_math_geom_Intersector_isInTriangle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z", 9 },
	{ "isInTriangle", (intptr_t) SM_arc_math_geom_Intersector_isInTriangle_float_float_float_float_float_float_float_float_R_boolean, 0, "(FFFFFFFF)Z", 9 },
	{ "pointLineSide", (intptr_t) SM_arc_math_geom_Intersector_pointLineSide_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_int, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)I", 9 },
	{ "pointLineSide", (intptr_t) SM_arc_math_geom_Intersector_pointLineSide_float_float_float_float_float_float_R_int, 0, "(FFFFFF)I", 9 },
	{ "isInPolygon", (intptr_t) SM_arc_math_geom_Intersector_isInPolygon_arc_struct_Seq_arc_math_geom_Vec2_R_boolean, 0, "(Larc/struct/Seq;Larc/math/geom/Vec2;)Z", 9 },
	{ "isInPolygon", (intptr_t) SM_arc_math_geom_Intersector_isInPolygon_Array1_float_int_int_float_float_R_boolean, 0, "([FIIFF)Z", 9 },
	{ "intersectPolygons", (intptr_t) SM_arc_math_geom_Intersector_intersectPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_arc_math_geom_Polygon_R_boolean, 0, "(Larc/math/geom/Polygon;Larc/math/geom/Polygon;Larc/math/geom/Polygon;)Z", 9 },
	{ "distanceLinePoint", (intptr_t) SM_arc_math_geom_Intersector_distanceLinePoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)F", 9 },
	{ "distanceLinePoint", (intptr_t) SM_arc_math_geom_Intersector_distanceLinePoint_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "distanceSegmentPoint", (intptr_t) SM_arc_math_geom_Intersector_distanceSegmentPoint_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "distanceSegmentPoint", (intptr_t) SM_arc_math_geom_Intersector_distanceSegmentPoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)F", 9 },
	{ "nearestSegmentPoint", (intptr_t) SM_arc_math_geom_Intersector_nearestSegmentPoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 9 },
	{ "nearestSegmentPoint", (intptr_t) SM_arc_math_geom_Intersector_nearestSegmentPoint_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "(FFFFFFLarc/math/geom/Vec2;)Larc/math/geom/Vec2;", 9 },
	{ "intersectSegmentCircle", (intptr_t) SM_arc_math_geom_Intersector_intersectSegmentCircle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_R_boolean, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;F)Z", 9 },
	{ "intersectSegmentCircleDisplace", (intptr_t) SM_arc_math_geom_Intersector_intersectSegmentCircleDisplace_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_float, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;FLarc/math/geom/Vec2;)F", 9 },
	{ "intersectRayRay", (intptr_t) SM_arc_math_geom_Intersector_intersectRayRay_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)F", 9 },
	{ "intersectLines", (intptr_t) SM_arc_math_geom_Intersector_intersectLines_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z", 9 },
	{ "intersectLines", (intptr_t) SM_arc_math_geom_Intersector_intersectLines_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean, 0, "(FFFFFFFFLarc/math/geom/Vec2;)Z", 9 },
	{ "intersectLinePolygon", (intptr_t) SM_arc_math_geom_Intersector_intersectLinePolygon_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Polygon_R_boolean, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Polygon;)Z", 9 },
	{ "intersectRectangles", (intptr_t) SM_arc_math_geom_Intersector_intersectRectangles_arc_math_geom_Rect_arc_math_geom_Rect_arc_math_geom_Rect_R_boolean, 0, "(Larc/math/geom/Rect;Larc/math/geom/Rect;Larc/math/geom/Rect;)Z", 9 },
	{ "intersectSegmentRectangleFast", (intptr_t) SM_arc_math_geom_Intersector_intersectSegmentRectangleFast_float_float_float_float_float_float_float_float_R_boolean, 0, "(FFFFFFFF)Z", 9 },
	{ "intersectSegmentRectangle", (intptr_t) SM_arc_math_geom_Intersector_intersectSegmentRectangle_float_float_float_float_float_float_float_float_R_boolean, 0, "(FFFFFFFF)Z", 9 },
	{ "intersectSegmentRectangle", (intptr_t) SM_arc_math_geom_Intersector_intersectSegmentRectangle_float_float_float_float_arc_math_geom_Rect_R_boolean, 0, "(FFFFLarc/math/geom/Rect;)Z", 9 },
	{ "intersectSegmentRectangle", (intptr_t) SM_arc_math_geom_Intersector_intersectSegmentRectangle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Rect_R_boolean, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Rect;)Z", 9 },
	{ "intersectSegmentPolygon", (intptr_t) SM_arc_math_geom_Intersector_intersectSegmentPolygon_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Polygon_R_boolean, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Polygon;)Z", 9 },
	{ "intersectSegments", (intptr_t) SM_arc_math_geom_Intersector_intersectSegments_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z", 9 },
	{ "intersectSegments", (intptr_t) SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean, 0, "(FFFFFFFFLarc/math/geom/Vec2;)Z", 9 },
	{ "det", (intptr_t) SM_arc_math_geom_Intersector_det_float_float_float_float_R_float, 0, "(FFFF)F", 8 },
	{ "detd", (intptr_t) SM_arc_math_geom_Intersector_detd_double_double_double_double_R_double, 0, "(DDDD)D", 8 },
	{ "overlapsRect", (intptr_t) SM_arc_math_geom_Intersector_overlapsRect_float_float_float_float_float_float_float_float_R_boolean, 0, "(FFFFFFFF)Z", 9 },
	{ "overlaps", (intptr_t) SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Circle_arc_math_geom_Circle_R_boolean, 0, "(Larc/math/geom/Circle;Larc/math/geom/Circle;)Z", 9 },
	{ "overlaps", (intptr_t) SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Rect_arc_math_geom_Rect_R_boolean, 0, "(Larc/math/geom/Rect;Larc/math/geom/Rect;)Z", 9 },
	{ "overlaps", (intptr_t) SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Circle_arc_math_geom_Rect_R_boolean, 0, "(Larc/math/geom/Circle;Larc/math/geom/Rect;)Z", 9 },
	{ "overlapConvexPolygons", (intptr_t) SM_arc_math_geom_Intersector_overlapConvexPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_R_boolean, 0, "(Larc/math/geom/Polygon;Larc/math/geom/Polygon;)Z", 9 },
	{ "overlapConvexPolygons", (intptr_t) SM_arc_math_geom_Intersector_overlapConvexPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean, 0, "(Larc/math/geom/Polygon;Larc/math/geom/Polygon;Larc/math/geom/Intersector$MinimumTranslationVector;)Z", 9 },
	{ "overlapConvexPolygons", (intptr_t) SM_arc_math_geom_Intersector_overlapConvexPolygons_Array1_float_Array1_float_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean, 0, "([F[FLarc/math/geom/Intersector$MinimumTranslationVector;)Z", 9 },
	{ "overlapConvexPolygons", (intptr_t) SM_arc_math_geom_Intersector_overlapConvexPolygons_Array1_float_int_int_Array1_float_int_int_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean, 0, "([FII[FIILarc/math/geom/Intersector$MinimumTranslationVector;)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Intersector, 0, "()V", 8 },
};

Class class_arc_math_geom_Intersector{
		.nativeName = (intptr_t) "arc/math/geom/Intersector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Intersector),
		.classVtable = (intptr_t) vtable_arc_math_geom_Intersector,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Intersector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Intersector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Intersector = registerClass(&class_arc_math_geom_Intersector);

}
