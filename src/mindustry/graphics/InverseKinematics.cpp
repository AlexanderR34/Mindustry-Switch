#include "mindustry/graphics/InverseKinematics.h"
#include "mindustry/graphics/InverseKinematics.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"

extern "C" {

jobject SF_mindustry_graphics_InverseKinematics_mat1;
jobject SF_mindustry_graphics_InverseKinematics_mat2;
jobject SF_mindustry_graphics_InverseKinematics_temp;
jobject SF_mindustry_graphics_InverseKinematics_temp2;
jobject SF_mindustry_graphics_InverseKinematics_at1;

void mark_mindustry_graphics_InverseKinematics(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_InverseKinematics_mat1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_InverseKinematics_mat1)->clazz)->markFunction)((jobject) SF_mindustry_graphics_InverseKinematics_mat1, mark, depth + 1);
		if (SF_mindustry_graphics_InverseKinematics_mat2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_InverseKinematics_mat2)->clazz)->markFunction)((jobject) SF_mindustry_graphics_InverseKinematics_mat2, mark, depth + 1);
		if (SF_mindustry_graphics_InverseKinematics_temp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_InverseKinematics_temp)->clazz)->markFunction)((jobject) SF_mindustry_graphics_InverseKinematics_temp, mark, depth + 1);
		if (SF_mindustry_graphics_InverseKinematics_temp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_InverseKinematics_temp2)->clazz)->markFunction)((jobject) SF_mindustry_graphics_InverseKinematics_temp2, mark, depth + 1);
		if (SF_mindustry_graphics_InverseKinematics_at1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_InverseKinematics_at1)->clazz)->markFunction)((jobject) SF_mindustry_graphics_InverseKinematics_at1, mark, depth + 1);
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
	auto self = (mindustry_graphics_InverseKinematics *) object;
}

void init_mindustry_graphics_InverseKinematics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/InverseKinematics:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_InverseKinematics(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_InverseKinematics_solve_float_float_arc_math_geom_Vec2_boolean_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jbool param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/InverseKinematics:solve", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_InverseKinematics(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(11);
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_InverseKinematics_at1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	if ((frame[3].i) == 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	(sp++)->f = jfloat(-1.0f);
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[0].f) + (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) / (jfloat(2))), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) / (jfloat(2))));
	LINE_NUMBER(12);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	sp[0].o = frame[2].o;
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_at1;
	jint temp2 = (jint)SM_mindustry_graphics_InverseKinematics_solve_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(ctx, temp0, temp1, sp[0].o, sp[1].o, (frame[4].o));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_InverseKinematics_solve_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/InverseKinematics:solve", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_InverseKinematics(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(29);
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(30);
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))), (frame[3].o));
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_temp2;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[5].o));
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[3].o), (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(31);
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat1;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat2;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_x;
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1))))))->F_x));
	LINE_NUMBER(32);
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat1;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat2;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_y;
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1))))))->F_y));
	LINE_NUMBER(33);
	sp[0].o = frame[4].o;
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat2;
	jfloat temp3 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (frame[2].o));
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat2;
	jfloat temp4 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp3, temp4);
	LINE_NUMBER(34);
	jfloat temp5 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[4].o));
	frame[6].f = temp5;
	LINE_NUMBER(35);
	jfloat temp6 = jfloat(0);
	jfloat temp7 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[0].f), (((frame[6].f) + ((((frame[0].f) * (frame[0].f)) - ((frame[1].f) * (frame[1].f))) / (frame[6].f))) / (jfloat(2))));
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp6, temp7);
	frame[7].f = temp8;
	LINE_NUMBER(36);
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_InverseKinematics_temp;
	jfloat temp9 = frame[7].f;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, (((frame[0].f) * (frame[0].f)) - ((frame[7].f) * (frame[7].f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp9, temp10);
	frame[8].o = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = frame[4].o;
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat1;
	jfloat temp11 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (frame[8].o));
	clinit_mindustry_graphics_InverseKinematics(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_InverseKinematics_mat1;
	jfloat temp12 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))), (frame[8].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp11, temp12);
	LINE_NUMBER(39);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) <= 0) goto label_10;
	}
	{
	if ((floatCompare((frame[7].f), (frame[0].f), 1)) >= 0) goto label_10;
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

void clinit_mindustry_graphics_InverseKinematics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/InverseKinematics:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_InverseKinematics(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec2, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	clinit_mindustry_graphics_InverseKinematics(ctx);
	SF_mindustry_graphics_InverseKinematics_mat1 = sp[0].o;
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec2, (jint(2)));
	jint temp2 = jint(0);
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(1);
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	clinit_mindustry_graphics_InverseKinematics(ctx);
	SF_mindustry_graphics_InverseKinematics_mat2 = sp[0].o;
	LINE_NUMBER(8);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_graphics_InverseKinematics(ctx);
	SF_mindustry_graphics_InverseKinematics_temp = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_graphics_InverseKinematics(ctx);
	SF_mindustry_graphics_InverseKinematics_temp2 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_graphics_InverseKinematics(ctx);
	SF_mindustry_graphics_InverseKinematics_at1 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_InverseKinematics[] {
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
	{ "mat1", getArrayClass(&class_arc_math_geom_Vec2, 1), (intptr_t) &SF_mindustry_graphics_InverseKinematics_mat1, "[Larc/math/geom/Vec2;", 26 },
	{ "mat2", getArrayClass(&class_arc_math_geom_Vec2, 1), (intptr_t) &SF_mindustry_graphics_InverseKinematics_mat2, "[Larc/math/geom/Vec2;", 26 },
	{ "temp", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_graphics_InverseKinematics_temp, "Larc/math/geom/Vec2;", 26 },
	{ "temp2", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_graphics_InverseKinematics_temp2, "Larc/math/geom/Vec2;", 26 },
	{ "at1", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_graphics_InverseKinematics_at1, "Larc/math/geom/Vec2;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_InverseKinematics, 0, "()V", 1 },
	{ "solve", (intptr_t) SM_mindustry_graphics_InverseKinematics_solve_float_float_arc_math_geom_Vec2_boolean_arc_math_geom_Vec2_R_boolean, 0, "(FFLarc/math/geom/Vec2;ZLarc/math/geom/Vec2;)Z", 9 },
	{ "solve", (intptr_t) SM_mindustry_graphics_InverseKinematics_solve_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, 0, "(FFLarc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_InverseKinematics, 0, "()V", 8 },
};

Class class_mindustry_graphics_InverseKinematics{
		.nativeName = (intptr_t) "mindustry/graphics/InverseKinematics",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_InverseKinematics),
		.classVtable = (intptr_t) vtable_mindustry_graphics_InverseKinematics,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_InverseKinematics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_InverseKinematics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_InverseKinematics = registerClass(&class_mindustry_graphics_InverseKinematics);

}
