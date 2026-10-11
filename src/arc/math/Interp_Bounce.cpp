#include "arc/math/Interp_Bounce.h"
#include "java/lang/Object.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_BounceOut.h"
#include "arc/math/Interp_Bounce.h"

extern "C" {


void mark_arc_math_Interp$Bounce(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_math_Interp$BounceOut(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_math_Interp$Bounce *) object;
}

void clinit_arc_math_Interp$Bounce(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_math_Interp$BounceOut(ctx);
}

void init_arc_math_Interp$Bounce_Array1_float_Array1_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$Bounce:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp$Bounce(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(227);
	init_arc_math_Interp$BounceOut_Array1_float_Array1_float(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_Interp$Bounce_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$Bounce:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp$Bounce(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(231);
	init_arc_math_Interp$BounceOut_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Interp$Bounce_out_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$Bounce:out", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(235);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	frame[2].f = (temp0 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) / (jfloat(2))));
	LINE_NUMBER(236);
	jfloat temp1 = frame[2].f;
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	if ((floatCompare(temp1, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))), 1)) >= 0) goto label_2;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_math_Interp$BounceOut *) NULL_CHECK((frame[0].o)))->F_widths;
	popStackFrame(ctx);
	return ((temp0 / (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) / (jfloat(2)))) - (jfloat(1)));
	}
label_2:;
	{
	LINE_NUMBER(237);
	jfloat temp0 = (jfloat)M_arc_math_Interp$BounceOut_apply_float_R_float(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Interp$Bounce_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$Bounce:apply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(242);
	if ((floatCompare((frame[1].f), (jfloat(0.5f)), 1)) > 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)M_arc_math_Interp$Bounce_out_float_R_float(ctx, (frame[0].o), ((jfloat(1)) - ((frame[1].f) * (jfloat(2)))));
	popStackFrame(ctx);
	return ((temp0 - temp1) / (jfloat(2)));
	}
label_1:;
	{
	LINE_NUMBER(243);
	jfloat temp0 = (jfloat)M_arc_math_Interp$Bounce_out_float_R_float(ctx, (frame[0].o), (((frame[1].f) * (jfloat(2))) - (jfloat(1))));
	popStackFrame(ctx);
	return ((temp0 / (jfloat(2))) + (jfloat(0.5f)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Interp$Bounce[] {
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
	(void *) M_arc_math_Interp$Bounce_apply_float_R_float,
	(void *) M_arc_math_Interp_apply_float_float_float_R_float,
	(void *) M_arc_math_Interp$Bounce_out_float_R_float,
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
	{ "out", "(F)F" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Interp$Bounce_Array1_float_Array1_float, 0, "([F[F)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_Interp$Bounce_int, 0, "(I)V", 1 },
	{ "out", (intptr_t) M_arc_math_Interp$Bounce_out_float_R_float, VTABLE_arc_math_Interp$Bounce_out_float_R_float, "(F)F", 2 },
	{ "apply", (intptr_t) M_arc_math_Interp$Bounce_apply_float_R_float, VTABLE_arc_math_Interp$Bounce_apply_float_R_float, "(F)F", 1 },
};

Class class_arc_math_Interp$Bounce{
		.nativeName = (intptr_t) "arc/math/Interp$Bounce",
		.parentClass = (intptr_t) &class_arc_math_Interp$BounceOut,
		.size = sizeof(arc_math_Interp$Bounce),
		.classVtable = (intptr_t) vtable_arc_math_Interp$Bounce,
		.staticInitializer = (intptr_t) clinit_arc_math_Interp$Bounce,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Interp$Bounce,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Interp$Bounce = registerClass(&class_arc_math_Interp$Bounce);

}

