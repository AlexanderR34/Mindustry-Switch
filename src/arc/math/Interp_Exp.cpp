#include "arc/math/Interp_Exp.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/math/Interp_Exp.h"
#include "arc/math/Interp.h"

extern "C" {


void mark_arc_math_Interp$Exp(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_Interp$Exp *) object;
}

void clinit_arc_math_Interp$Exp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_Interp$Exp_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$Exp:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp$Exp(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(142);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(143);
	((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(144);
	((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_power = (frame[2].f);
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble((frame[1].f))), (jdouble((-(frame[2].f)))));
	((arc_math_Interp$Exp *) NULL_CHECK(sp[0].o))->F_min = (jfloat(temp0));
	LINE_NUMBER(146);
	((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_scale = ((jfloat(1)) / ((jfloat(1)) - ((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_min)));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Interp$Exp_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$Exp:apply", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(151);
	if ((floatCompare((frame[1].f), (jfloat(0.5f)), 1)) > 0) goto label_1;
	}
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_value))), (jdouble((((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_power) * (((frame[1].f) * (jfloat(2))) - (jfloat(1)))))));
	popStackFrame(ctx);
	return ((((jfloat(temp0)) - ((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_min)) * ((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_scale)) / (jfloat(2)));
	}
label_1:;
	{
	LINE_NUMBER(152);
	jfloat temp0 = jfloat(2);
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_value))), (jdouble(((-((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_power)) * (((frame[1].f) * (jfloat(2))) - (jfloat(1)))))));
	popStackFrame(ctx);
	return ((temp0 - (((jfloat(temp1)) - ((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_min)) * ((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_scale))) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Interp$Exp[] {
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
	(void *) M_arc_math_Interp$Exp_apply_float_R_float,
	(void *) M_arc_math_Interp_apply_float_float_float_R_float,
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
	{ "apply", "(F)F" },
	{ "apply", "(FFF)F" },
};

static jclass interfaces[] { &class_arc_math_Interp, };

static FieldMetadata fields[] {
	{ "value", &class_float, offsetof(arc_math_Interp$Exp, F_value), "F", 16 },
	{ "power", &class_float, offsetof(arc_math_Interp$Exp, F_power), "F", 16 },
	{ "min", &class_float, offsetof(arc_math_Interp$Exp, F_min), "F", 16 },
	{ "scale", &class_float, offsetof(arc_math_Interp$Exp, F_scale), "F", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Interp$Exp_float_float, 0, "(FF)V", 1 },
	{ "apply", (intptr_t) M_arc_math_Interp$Exp_apply_float_R_float, VTABLE_arc_math_Interp$Exp_apply_float_R_float, "(F)F", 1 },
};

Class class_arc_math_Interp$Exp{
		.nativeName = (intptr_t) "arc/math/Interp$Exp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Interp$Exp),
		.classVtable = (intptr_t) vtable_arc_math_Interp$Exp,
		.staticInitializer = (intptr_t) clinit_arc_math_Interp$Exp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Interp$Exp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_math_Interp,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Interp$Exp = registerClass(&class_arc_math_Interp$Exp);

}

