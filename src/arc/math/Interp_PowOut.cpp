#include "arc/math/Interp_PowOut.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_Pow.h"
#include "arc/math/Interp_PowOut.h"

extern "C" {


void mark_arc_math_Interp$PowOut(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_math_Interp$Pow(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_math_Interp$PowOut *) object;
}

void clinit_arc_math_Interp$PowOut(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_math_Interp$Pow(ctx);
}

void init_arc_math_Interp$PowOut_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$PowOut:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp$PowOut(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(126);
	init_arc_math_Interp$Pow_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_Interp$PowOut_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$PowOut:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp$PowOut(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(130);
	init_arc_math_Interp$Pow_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Interp$PowOut_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$PowOut:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(135);
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((frame[1].f) - (jfloat(1))))), (jdouble(((jfloat)((arc_math_Interp$Pow *) NULL_CHECK((frame[0].o)))->F_power))));
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	if ((floatCompare((fmodf(((jfloat)((arc_math_Interp$Pow *) NULL_CHECK((frame[0].o)))->F_power), (jfloat(2)))), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ICONST(1);
label_2:;
	{
	sp -= 2;
	popStackFrame(ctx);
	return ((sp[0].f * (jfloat(sp[1].i))) + (jfloat(1)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Interp$PowOut[] {
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
	(void *) M_arc_math_Interp$PowOut_apply_float_R_float,
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
	{ "<init>", (intptr_t) init_arc_math_Interp$PowOut_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_Interp$PowOut_float, 0, "(F)V", 1 },
	{ "apply", (intptr_t) M_arc_math_Interp$PowOut_apply_float_R_float, VTABLE_arc_math_Interp$PowOut_apply_float_R_float, "(F)F", 1 },
};

Class class_arc_math_Interp$PowOut{
		.nativeName = (intptr_t) "arc/math/Interp$PowOut",
		.parentClass = (intptr_t) &class_arc_math_Interp$Pow,
		.size = sizeof(arc_math_Interp$PowOut),
		.classVtable = (intptr_t) vtable_arc_math_Interp$PowOut,
		.staticInitializer = (intptr_t) clinit_arc_math_Interp$PowOut,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Interp$PowOut,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Interp$PowOut = registerClass(&class_arc_math_Interp$PowOut);

}

