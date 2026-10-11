#include "arc/math/geom/Icosphere.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "arc/math/geom/MeshResult.h"
#include "arc/math/geom/Icosphere.h"
#include "arc/struct/FloatSeq.h"
#include "arc/struct/IntSeq.h"
#include "arc/math/geom/Vec3.h"

extern "C" {

jfloat SF_arc_math_geom_Icosphere_t;
jobject SF_arc_math_geom_Icosphere_baseVert;
jobject SF_arc_math_geom_Icosphere_baseFace;

void mark_arc_math_geom_Icosphere(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Icosphere_baseVert)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Icosphere_baseVert)->clazz)->markFunction)((jobject) SF_arc_math_geom_Icosphere_baseVert, mark, depth + 1);
		if (SF_arc_math_geom_Icosphere_baseFace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Icosphere_baseFace)->clazz)->markFunction)((jobject) SF_arc_math_geom_Icosphere_baseFace, mark, depth + 1);
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
	auto self = (arc_math_geom_Icosphere *) object;
}

void init_arc_math_geom_Icosphere(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Icosphere:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Icosphere(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Icosphere_create_int_R_arc_math_geom_MeshResult(jcontext ctx, jint param0) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Icosphere:create", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Icosphere(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(15);
	clinit_arc_math_geom_MeshResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_MeshResult);
	init_arc_math_geom_MeshResult(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_math_geom_Icosphere(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Icosphere_baseVert;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(18);
	sp[0].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[1].o)))->F_vertices;
	((func_arc_struct_FloatSeq_add_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float_float])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[5].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[5].o)))->F_z));
	LINE_NUMBER(17);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(21);
	clinit_arc_math_geom_Icosphere(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Icosphere_baseFace;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_7;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(22);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)));
	jint temp1 = (jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(1)));
	jint temp2 = (jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[1].o)))->F_vertices;
	sp[1].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[1].o)))->F_indices;
	SM_arc_math_geom_Icosphere_subdivide_int_int_int_arc_struct_FloatSeq_arc_struct_IntSeq_int(ctx, temp0, temp1, temp2, sp[0].o, sp[1].o, (frame[0].i));
	LINE_NUMBER(21);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Icosphere_subdivide_int_int_int_arc_struct_FloatSeq_arc_struct_IntSeq_int(jcontext ctx, jint param0, jint param1, jint param2, jobject param3, jobject param4, jint param5) {
	jtype frame[26];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Icosphere:subdivide", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Icosphere(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(29);
	if ((frame[5].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(30);
	((func_arc_struct_IntSeq_add_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int_int_int])(ctx, (frame[4].o), (frame[0].i), (frame[1].i), (frame[2].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(32);
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), ((jint(3)) * (frame[0].i)));
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), ((jint(3)) * (frame[1].i)));
	frame[6].f = (temp0 + temp1);
	LINE_NUMBER(33);
	jfloat temp2 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[0].i)) + (jint(1))));
	jfloat temp3 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[1].i)) + (jint(1))));
	frame[7].f = (temp2 + temp3);
	LINE_NUMBER(34);
	jfloat temp4 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[0].i)) + (jint(2))));
	jfloat temp5 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[1].i)) + (jint(2))));
	frame[8].f = (temp4 + temp5);
	LINE_NUMBER(35);
	jfloat temp6 = (jfloat)SM_arc_math_geom_Vec3_len_float_float_float_R_float(ctx, (frame[6].f), (frame[7].f), (frame[8].f));
	frame[9].f = temp6;
	LINE_NUMBER(36);
	frame[10].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[3].o)))->F_size) / (jint(3)));
	LINE_NUMBER(37);
	((func_arc_struct_FloatSeq_add_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float_float])(ctx, (frame[3].o), ((frame[6].f) / (frame[9].f)), ((frame[7].f) / (frame[9].f)), ((frame[8].f) / (frame[9].f)));
	LINE_NUMBER(39);
	jfloat temp7 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), ((jint(3)) * (frame[2].i)));
	jfloat temp8 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), ((jint(3)) * (frame[1].i)));
	frame[11].f = (temp7 + temp8);
	LINE_NUMBER(40);
	jfloat temp9 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[2].i)) + (jint(1))));
	jfloat temp10 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[1].i)) + (jint(1))));
	frame[12].f = (temp9 + temp10);
	LINE_NUMBER(41);
	jfloat temp11 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[2].i)) + (jint(2))));
	jfloat temp12 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[1].i)) + (jint(2))));
	frame[13].f = (temp11 + temp12);
	LINE_NUMBER(42);
	jfloat temp13 = (jfloat)SM_arc_math_geom_Vec3_len_float_float_float_R_float(ctx, (frame[11].f), (frame[12].f), (frame[13].f));
	frame[9].f = temp13;
	LINE_NUMBER(43);
	frame[14].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[3].o)))->F_size) / (jint(3)));
	LINE_NUMBER(44);
	((func_arc_struct_FloatSeq_add_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float_float])(ctx, (frame[3].o), ((frame[11].f) / (frame[9].f)), ((frame[12].f) / (frame[9].f)), ((frame[13].f) / (frame[9].f)));
	LINE_NUMBER(46);
	jfloat temp14 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), ((jint(3)) * (frame[0].i)));
	jfloat temp15 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), ((jint(3)) * (frame[2].i)));
	frame[15].f = (temp14 + temp15);
	LINE_NUMBER(47);
	jfloat temp16 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[0].i)) + (jint(1))));
	jfloat temp17 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[2].i)) + (jint(1))));
	frame[16].f = (temp16 + temp17);
	LINE_NUMBER(48);
	jfloat temp18 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[0].i)) + (jint(2))));
	jfloat temp19 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[3].o), (((jint(3)) * (frame[2].i)) + (jint(2))));
	frame[17].f = (temp18 + temp19);
	LINE_NUMBER(49);
	jfloat temp20 = (jfloat)SM_arc_math_geom_Vec3_len_float_float_float_R_float(ctx, (frame[15].f), (frame[16].f), (frame[17].f));
	frame[9].f = temp20;
	LINE_NUMBER(50);
	frame[18].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[3].o)))->F_size) / (jint(3)));
	LINE_NUMBER(51);
	((func_arc_struct_FloatSeq_add_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float_float])(ctx, (frame[3].o), ((frame[15].f) / (frame[9].f)), ((frame[16].f) / (frame[9].f)), ((frame[17].f) / (frame[9].f)));
	LINE_NUMBER(53);
	SM_arc_math_geom_Icosphere_subdivide_int_int_int_arc_struct_FloatSeq_arc_struct_IntSeq_int(ctx, (frame[0].i), (frame[10].i), (frame[18].i), (frame[3].o), (frame[4].o), ((frame[5].i) - (jint(1))));
	LINE_NUMBER(54);
	SM_arc_math_geom_Icosphere_subdivide_int_int_int_arc_struct_FloatSeq_arc_struct_IntSeq_int(ctx, (frame[10].i), (frame[1].i), (frame[14].i), (frame[3].o), (frame[4].o), ((frame[5].i) - (jint(1))));
	LINE_NUMBER(55);
	SM_arc_math_geom_Icosphere_subdivide_int_int_int_arc_struct_FloatSeq_arc_struct_IntSeq_int(ctx, (frame[18].i), (frame[14].i), (frame[2].i), (frame[3].o), (frame[4].o), ((frame[5].i) - (jint(1))));
	LINE_NUMBER(56);
	SM_arc_math_geom_Icosphere_subdivide_int_int_int_arc_struct_FloatSeq_arc_struct_IntSeq_int(ctx, (frame[10].i), (frame[14].i), (frame[18].i), (frame[3].o), (frame[4].o), ((frame[5].i) - (jint(1))));
	}
label_3:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Icosphere:v", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Icosphere(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(61);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Icosphere(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Icosphere:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Icosphere(ctx);
	{
	LINE_NUMBER(7);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, (jfloat(5.0f)));
	clinit_arc_math_geom_Icosphere(ctx);
	SF_arc_math_geom_Icosphere_t = ((temp0 - (jfloat(1))) / (jfloat(2)));
	LINE_NUMBER(8);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec3, (12));
	jint temp1 = jint(0);
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (jfloat(-1.0f)), (-(clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t)), (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(1);
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (jfloat(0)), (jfloat(1)), (clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(2);
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (jfloat(0)), (jfloat(1)), (-(clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(3);
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (jfloat(1)), (clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t), (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(4);
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (jfloat(1)), (-(clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t)), (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(5);
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (jfloat(0)), (jfloat(-1.0f)), (-(clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 6;
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (jfloat(0)), (jfloat(-1.0f)), (clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 7;
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t), (jfloat(0)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 8;
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (-(clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t)), (jfloat(0)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 9;
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t), (jfloat(0)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 10;
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (-(clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t)), (jfloat(0)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 11;
	sp[1].o = (jobject)SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(ctx, (jfloat(-1.0f)), (clinit_arc_math_geom_Icosphere(ctx), (jfloat)SF_arc_math_geom_Icosphere_t), (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	clinit_arc_math_geom_Icosphere(ctx);
	SF_arc_math_geom_Icosphere_baseVert = sp[0].o;
	LINE_NUMBER(9);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (20));
	jint temp13 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (11);
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 10;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 11;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 12;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 13;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 14;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (8);
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 15;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (8);
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 16;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 17;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 18;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 19;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (11);
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	clinit_arc_math_geom_Icosphere(ctx);
	SF_arc_math_geom_Icosphere_baseFace = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Icosphere[] {
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

static FieldMetadata fields[] {
	{ "t", &class_float, (intptr_t) &SF_arc_math_geom_Icosphere_t, "F", 26 },
	{ "baseVert", getArrayClass(&class_arc_math_geom_Vec3, 1), (intptr_t) &SF_arc_math_geom_Icosphere_baseVert, "[Larc/math/geom/Vec3;", 26 },
	{ "baseFace", getArrayClass(&class_int, 2), (intptr_t) &SF_arc_math_geom_Icosphere_baseFace, "[[I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Icosphere, 0, "()V", 1 },
	{ "create", (intptr_t) SM_arc_math_geom_Icosphere_create_int_R_arc_math_geom_MeshResult, 0, "(I)Larc/math/geom/MeshResult;", 9 },
	{ "subdivide", (intptr_t) SM_arc_math_geom_Icosphere_subdivide_int_int_int_arc_struct_FloatSeq_arc_struct_IntSeq_int, 0, "(IIILarc/struct/FloatSeq;Larc/struct/IntSeq;I)V", 10 },
	{ "v", (intptr_t) SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3, 0, "(FFF)Larc/math/geom/Vec3;", 10 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Icosphere, 0, "()V", 8 },
};

Class class_arc_math_geom_Icosphere{
		.nativeName = (intptr_t) "arc/math/geom/Icosphere",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Icosphere),
		.classVtable = (intptr_t) vtable_arc_math_geom_Icosphere,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Icosphere,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Icosphere,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Icosphere = registerClass(&class_arc_math_geom_Icosphere);

}
