#include "mindustry/entities/Predict.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Predict.h"
#include "mindustry/gen/Hitboxc.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {

jobject SF_mindustry_entities_Predict_vec;
jobject SF_mindustry_entities_Predict_vresult;

void mark_mindustry_entities_Predict(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_Predict_vec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Predict_vec)->clazz)->markFunction)((jobject) SF_mindustry_entities_Predict_vec, mark, depth + 1);
		if (SF_mindustry_entities_Predict_vresult)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Predict_vresult)->clazz)->markFunction)((jobject) SF_mindustry_entities_Predict_vresult, mark, depth + 1);
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
	auto self = (mindustry_entities_Predict *) object;
}

void init_mindustry_entities_Predict(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Predict:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Predict(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Predict_intercept_float_float_float_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	jtype frame[22];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Predict:intercept", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Predict(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(28);
	frame[4].f = ((frame[4].f) / (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(29);
	frame[5].f = ((frame[5].f) / (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(30);
	frame[7].f = ((frame[2].f) - (frame[0].f));
	LINE_NUMBER(31);
	frame[8].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(34);
	frame[9].f = ((((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f))) - ((frame[6].f) * (frame[6].f)));
	LINE_NUMBER(35);
	frame[10].f = ((jfloat(2)) * (((frame[4].f) * (frame[7].f)) + ((frame[5].f) * (frame[8].f))));
	LINE_NUMBER(36);
	frame[11].f = (((frame[7].f) * (frame[7].f)) + ((frame[8].f) * (frame[8].f)));
	LINE_NUMBER(39);
	sp[0].o = (jobject)SM_mindustry_entities_Predict_quad_float_float_float_R_arc_math_geom_Vec2(ctx, (frame[9].f), (frame[10].f), (frame[11].f));
	frame[12].o = sp[0].o;
	LINE_NUMBER(42);
	clinit_mindustry_entities_Predict(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Predict_vresult;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	frame[13].o = sp[0].o;
	LINE_NUMBER(43);
	if ((frame[12].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(44);
	frame[14].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_x);
	frame[15].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_y);
	LINE_NUMBER(45);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[14].f), (frame[15].f));
	frame[16].f = temp0;
	LINE_NUMBER(46);
	if ((floatCompare((frame[16].f), (jfloat(0)), 1)) >= 0) goto label_15;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[14].f), (frame[15].f));
	frame[16].f = temp0;
	}
label_15:;
	{
	LINE_NUMBER(47);
	if ((floatCompare((frame[16].f), (jfloat(0)), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[13].o), ((frame[2].f) + ((frame[4].f) * (frame[16].f))), ((frame[3].f) + ((frame[5].f) * (frame[16].f))));
	}
label_10:;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return (frame[13].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Predict:intercept", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Predict(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_float_R_arc_math_geom_Vec2(ctx, (frame[0].o), (frame[1].o), (jfloat(0)), (jfloat(0)), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_mindustry_entities_bullet_BulletType_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Predict:intercept", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Predict(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_boolean_float_R_arc_math_geom_Vec2(ctx, (frame[0].o), (frame[1].o), (jfloat(0)), (jfloat(0)), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_keepVelocity), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_speed));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Predict:intercept", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Predict(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_boolean_float_R_arc_math_geom_Vec2(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jint(1)), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_boolean_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jbool param4, jfloat param5) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Predict:intercept", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Predict(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(68);
	frame[6].f = (jfloat(0));
	frame[7].f = (jfloat(0));
	LINE_NUMBER(69);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Hitboxc)) == 0) goto label_3;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Hitboxc, (frame[1].o)));
	LINE_NUMBER(70);
	jfloat temp0 = frame[6].f;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Hitboxc_deltaX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaX_R_float, (frame[8].o)))(ctx, (frame[8].o));
	frame[6].f = (temp0 + temp1);
	LINE_NUMBER(71);
	jfloat temp2 = frame[7].f;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Hitboxc_deltaY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaY_R_float, (frame[8].o)))(ctx, (frame[8].o));
	frame[7].f = (temp2 + temp3);
	}
label_3:;
	{
	LINE_NUMBER(73);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Hitboxc)) == 0) goto label_6;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Hitboxc, (frame[0].o)));
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(74);
	jfloat temp0 = frame[6].f;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Hitboxc_deltaX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaX_R_float, (frame[8].o)))(ctx, (frame[8].o));
	frame[6].f = (temp0 - temp1);
	LINE_NUMBER(75);
	jfloat temp2 = frame[7].f;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Hitboxc_deltaY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaY_R_float, (frame[8].o)))(ctx, (frame[8].o));
	frame[7].f = (temp2 - temp3);
	}
label_6:;
	{
	LINE_NUMBER(77);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp3 = temp2 + (frame[2].f);
	jfloat temp4 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_mindustry_entities_Predict_intercept_float_float_float_float_float_float_float_R_arc_math_geom_Vec2(ctx, temp0, temp1, temp3, (temp4 + (frame[3].f)), (frame[6].f), (frame[7].f), (frame[5].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Predict_intercept_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Predict:intercept", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Predict(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(84);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp4 = (jfloat)((func_mindustry_gen_Hitboxc_deltaX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)((func_mindustry_gen_Hitboxc_deltaX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp6 = temp4 - (temp5 / ((jfloat(2)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	jfloat temp7 = (jfloat)((func_mindustry_gen_Hitboxc_deltaY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp8 = (jfloat)((func_mindustry_gen_Hitboxc_deltaX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_entities_Predict_intercept_float_float_float_float_float_float_float_R_arc_math_geom_Vec2(ctx, temp0, temp1, temp2, temp3, temp6, (temp7 - (temp8 / ((jfloat(2)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Predict_quad_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Predict:quad", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Predict(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(88);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(89);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[0].f));
	if ((doubleCompare((jdouble(temp0)), (jdouble(1,000000e-06)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(90);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[1].f));
	if ((doubleCompare((jdouble(temp0)), (jdouble(1,000000e-06)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(91);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[2].f));
	if ((doubleCompare((jdouble(temp0)), (jdouble(1,000000e-06)), 1)) >= 0) goto label_6;
	}
	{
	clinit_mindustry_entities_Predict(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Predict_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)));
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ACONST_NULL();
label_7:;
	INST_ASTORE(3);
	goto label_8;
label_4:;
	{
	LINE_NUMBER(93);
	clinit_mindustry_entities_Predict(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Predict_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((-(frame[2].f)) / (frame[1].f)), ((-(frame[2].f)) / (frame[1].f)));
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(96);
	frame[4].f = (((frame[1].f) * (frame[1].f)) - (((jfloat(4.0f)) * (frame[0].f)) * (frame[2].f)));
	LINE_NUMBER(97);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(98);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, (frame[4].f));
	frame[4].f = temp0;
	LINE_NUMBER(99);
	frame[0].f = ((jfloat(2)) * (frame[0].f));
	LINE_NUMBER(100);
	clinit_mindustry_entities_Predict(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Predict_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((-(frame[1].f)) - (frame[4].f)) / (frame[0].f)), (((-(frame[1].f)) + (frame[4].f)) / (frame[0].f)));
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_Predict(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Predict:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Predict(ctx);
	{
	LINE_NUMBER(13);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_Predict(ctx);
	SF_mindustry_entities_Predict_vec = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_Predict(ctx);
	SF_mindustry_entities_Predict_vresult = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_Predict[] {
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
	{ "vec", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_Predict_vec, "Larc/math/geom/Vec2;", 26 },
	{ "vresult", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_Predict_vresult, "Larc/math/geom/Vec2;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Predict, 0, "()V", 1 },
	{ "intercept", (intptr_t) SM_mindustry_entities_Predict_intercept_float_float_float_float_float_float_float_R_arc_math_geom_Vec2, 0, "(FFFFFFF)Larc/math/geom/Vec2;", 9 },
	{ "intercept", (intptr_t) SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Position;Larc/math/geom/Position;F)Larc/math/geom/Vec2;", 9 },
	{ "intercept", (intptr_t) SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_mindustry_entities_bullet_BulletType_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Position;Larc/math/geom/Position;Lmindustry/entities/bullet/BulletType;)Larc/math/geom/Vec2;", 9 },
	{ "intercept", (intptr_t) SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_float_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Position;Larc/math/geom/Position;FFF)Larc/math/geom/Vec2;", 9 },
	{ "intercept", (intptr_t) SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_boolean_float_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Position;Larc/math/geom/Position;FFZF)Larc/math/geom/Vec2;", 9 },
	{ "intercept", (intptr_t) SM_mindustry_entities_Predict_intercept_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc_float_R_arc_math_geom_Vec2, 0, "(Lmindustry/gen/Hitboxc;Lmindustry/gen/Hitboxc;F)Larc/math/geom/Vec2;", 9 },
	{ "quad", (intptr_t) SM_mindustry_entities_Predict_quad_float_float_float_R_arc_math_geom_Vec2, 0, "(FFF)Larc/math/geom/Vec2;", 10 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_Predict, 0, "()V", 8 },
};

Class class_mindustry_entities_Predict{
		.nativeName = (intptr_t) "mindustry/entities/Predict",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Predict),
		.classVtable = (intptr_t) vtable_mindustry_entities_Predict,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Predict,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_Predict,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Predict = registerClass(&class_mindustry_entities_Predict);

}
