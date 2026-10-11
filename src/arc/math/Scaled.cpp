#include "arc/math/Scaled.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_PowOut.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/math/Scaled.h"

extern "C" {


void mark_arc_math_Scaled(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_Scaled *) object;
}

void clinit_arc_math_Scaled(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_arc_math_Scaled_fout_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Scaled:fout", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(9);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)((func_arc_math_Scaled_fin_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fin_R_float, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Scaled_fout_arc_math_Interp_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Scaled:fout", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_math_Scaled_fout_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fout_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Scaled_fout_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Scaled:fout", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(19);
	jfloat temp0 = (jfloat)((func_arc_math_Scaled_fin_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fin_R_float, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(20);
	if ((floatCompare((frame[2].f), ((jfloat(1)) - (frame[1].f)), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return ((jfloat(1)) - (((frame[2].f) - ((jfloat(1)) - (frame[1].f))) / (frame[1].f)));
	}
label_2:;
	{
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Scaled_fin_arc_math_Interp_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Scaled:fin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_math_Scaled_fin_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fin_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Scaled_finpow_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Scaled:finpow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow3Out;
	jfloat temp0 = (jfloat)((func_arc_math_Scaled_fin_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fin_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Scaled_foutpow_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Scaled:foutpow", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	jfloat temp0 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow3Out;
	jfloat temp1 = (jfloat)((func_arc_math_Scaled_fin_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fin_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return (temp0 - temp2);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Scaled_finpowdown_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Scaled:finpowdown", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow3In;
	jfloat temp0 = (jfloat)((func_arc_math_Scaled_fin_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fin_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Scaled_foutpowdown_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Scaled:foutpowdown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	jfloat temp0 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow3In;
	jfloat temp1 = (jfloat)((func_arc_math_Scaled_fin_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fin_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return (temp0 - temp2);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Scaled_fslope_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Scaled:fslope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	jfloat temp0 = jfloat(0.5f);
	jfloat temp1 = (jfloat)((func_arc_math_Scaled_fin_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fin_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp1 - (jfloat(0.5f))));
	popStackFrame(ctx);
	return ((temp0 - temp2) * (jfloat(2)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Scaled[] {
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
	(void *) nullptr,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
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
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
};

static MethodMetadata methods[] {
	{ "fin", 0, INDEX_arc_math_Scaled_fin_R_float, "()F", 1025 },
	{ "fout", (intptr_t) M_arc_math_Scaled_fout_R_float, INDEX_arc_math_Scaled_fout_R_float, "()F", 1 },
	{ "fout", (intptr_t) M_arc_math_Scaled_fout_arc_math_Interp_R_float, INDEX_arc_math_Scaled_fout_arc_math_Interp_R_float, "(Larc/math/Interp;)F", 1 },
	{ "fout", (intptr_t) M_arc_math_Scaled_fout_float_R_float, INDEX_arc_math_Scaled_fout_float_R_float, "(F)F", 1 },
	{ "fin", (intptr_t) M_arc_math_Scaled_fin_arc_math_Interp_R_float, INDEX_arc_math_Scaled_fin_arc_math_Interp_R_float, "(Larc/math/Interp;)F", 1 },
	{ "finpow", (intptr_t) M_arc_math_Scaled_finpow_R_float, INDEX_arc_math_Scaled_finpow_R_float, "()F", 1 },
	{ "foutpow", (intptr_t) M_arc_math_Scaled_foutpow_R_float, INDEX_arc_math_Scaled_foutpow_R_float, "()F", 1 },
	{ "finpowdown", (intptr_t) M_arc_math_Scaled_finpowdown_R_float, INDEX_arc_math_Scaled_finpowdown_R_float, "()F", 1 },
	{ "foutpowdown", (intptr_t) M_arc_math_Scaled_foutpowdown_R_float, INDEX_arc_math_Scaled_foutpowdown_R_float, "()F", 1 },
	{ "fslope", (intptr_t) M_arc_math_Scaled_fslope_R_float, INDEX_arc_math_Scaled_fslope_R_float, "()F", 1 },
};

Class class_arc_math_Scaled{
		.nativeName = (intptr_t) "arc/math/Scaled",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Scaled),
		.classVtable = (intptr_t) vtable_arc_math_Scaled,
		.staticInitializer = (intptr_t) clinit_arc_math_Scaled,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Scaled,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Scaled = registerClass(&class_arc_math_Scaled);

}
