#include "arc/math/Interp_ExpIn.h"
#include "java/lang/Math.h"
#include "arc/math/Interp_Exp.h"
#include "java/lang/Object.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_ExpIn.h"

extern "C" {


void mark_arc_math_Interp$ExpIn(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_math_Interp$Exp(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_math_Interp$ExpIn *) object;
}

void clinit_arc_math_Interp$ExpIn(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_math_Interp$Exp(ctx);
}

void init_arc_math_Interp$ExpIn_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$ExpIn:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp$ExpIn(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(158);
	init_arc_math_Interp$Exp_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Interp$ExpIn_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$ExpIn:apply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(163);
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_value))), (jdouble((((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_power) * ((frame[1].f) - (jfloat(1)))))));
	popStackFrame(ctx);
	return (((jfloat(temp0)) - ((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_min)) * ((jfloat)((arc_math_Interp$Exp *) NULL_CHECK((frame[0].o)))->F_scale));
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Interp$ExpIn[] {
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
	(void *) M_arc_math_Interp$ExpIn_apply_float_R_float,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Interp$ExpIn_float_float, 0, "(FF)V", 1 },
	{ "apply", (intptr_t) M_arc_math_Interp$ExpIn_apply_float_R_float, VTABLE_arc_math_Interp$ExpIn_apply_float_R_float, "(F)F", 1 },
};

Class class_arc_math_Interp$ExpIn{
		.nativeName = (intptr_t) "arc/math/Interp$ExpIn",
		.parentClass = (intptr_t) &class_arc_math_Interp$Exp,
		.size = sizeof(arc_math_Interp$ExpIn),
		.classVtable = (intptr_t) vtable_arc_math_Interp$ExpIn,
		.staticInitializer = (intptr_t) clinit_arc_math_Interp$ExpIn,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Interp$ExpIn,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_math_Interp,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Interp$ExpIn = registerClass(&class_arc_math_Interp$ExpIn);

}

