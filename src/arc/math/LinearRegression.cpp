#include "arc/math/LinearRegression.h"
#include "arc/math/LinearRegression.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/struct/Seq.h"

extern "C" {


void mark_arc_math_LinearRegression(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_LinearRegression *) object;
}

void clinit_arc_math_LinearRegression(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_LinearRegression(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/LinearRegression:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_LinearRegression(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_LinearRegression_calculate_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/LinearRegression:calculate", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(14);
	frame[3].f = (jfloat(0));
	frame[4].f = (jfloat(0));
	LINE_NUMBER(15);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(16);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].i));
	frame[3].f = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o))))->F_x));
	LINE_NUMBER(17);
	jfloat temp1 = frame[4].f;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].i));
	frame[4].f = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o))))->F_y));
	LINE_NUMBER(15);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(19);
	frame[5].f = ((frame[3].f) / (jfloat((frame[2].i))));
	LINE_NUMBER(20);
	frame[6].f = ((frame[4].f) / (jfloat((frame[2].i))));
	LINE_NUMBER(22);
	frame[7].f = (jfloat(0));
	frame[8].f = (jfloat(0));
	LINE_NUMBER(23);
	frame[9].i = (jint(0));
	}
label_13:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(24);
	jfloat temp0 = frame[7].f;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[9].i));
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o))))->F_x) - (frame[5].f);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[9].i));
	frame[7].f = (temp0 + (temp1 * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o))))->F_x) - (frame[5].f))));
	LINE_NUMBER(25);
	jfloat temp2 = frame[8].f;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[9].i));
	jfloat temp3 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o))))->F_x) - (frame[5].f);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[9].i));
	frame[8].f = (temp2 + (temp3 * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((checkCast(ctx, &class_arc_math_geom_Vec2, sp[0].o))))->F_y) - (frame[6].f))));
	LINE_NUMBER(23);
	INST_IINC(9, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(28);
	((arc_math_LinearRegression *) NULL_CHECK((frame[0].o)))->F_slope = ((frame[8].f) / (frame[7].f));
	LINE_NUMBER(29);
	((arc_math_LinearRegression *) NULL_CHECK((frame[0].o)))->F_intercept = ((frame[6].f) - (((jfloat)((arc_math_LinearRegression *) NULL_CHECK((frame[0].o)))->F_slope) * (frame[5].f)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_LinearRegression_predict_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/LinearRegression:predict", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return ((((jfloat)((arc_math_LinearRegression *) NULL_CHECK((frame[0].o)))->F_slope) * (frame[1].f)) + ((jfloat)((arc_math_LinearRegression *) NULL_CHECK((frame[0].o)))->F_intercept));
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_LinearRegression[] {
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
	(void *) M_arc_math_LinearRegression_calculate_arc_struct_Seq,
	(void *) M_arc_math_LinearRegression_predict_float_R_float,
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
	{ "calculate", "(Larc/struct/Seq;)V" },
	{ "predict", "(F)F" },
};

static FieldMetadata fields[] {
	{ "intercept", &class_float, offsetof(arc_math_LinearRegression, F_intercept), "F", 1 },
	{ "slope", &class_float, offsetof(arc_math_LinearRegression, F_slope), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_LinearRegression, 0, "()V", 1 },
	{ "calculate", (intptr_t) M_arc_math_LinearRegression_calculate_arc_struct_Seq, VTABLE_arc_math_LinearRegression_calculate_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "predict", (intptr_t) M_arc_math_LinearRegression_predict_float_R_float, VTABLE_arc_math_LinearRegression_predict_float_R_float, "(F)F", 1 },
};

Class class_arc_math_LinearRegression{
		.nativeName = (intptr_t) "arc/math/LinearRegression",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_LinearRegression),
		.classVtable = (intptr_t) vtable_arc_math_LinearRegression,
		.staticInitializer = (intptr_t) clinit_arc_math_LinearRegression,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_LinearRegression,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_LinearRegression = registerClass(&class_arc_math_LinearRegression);

}
