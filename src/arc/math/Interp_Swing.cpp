#include "arc/math/Interp_Swing.h"
#include "java/lang/Object.h"
#include "arc/math/Interp_Swing.h"
#include "arc/math/Interp.h"

extern "C" {


void mark_arc_math_Interp$Swing(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_Interp$Swing *) object;
}

void clinit_arc_math_Interp$Swing(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_Interp$Swing_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$Swing:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp$Swing(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(337);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(338);
	((arc_math_Interp$Swing *) NULL_CHECK((frame[0].o)))->F_scale = ((frame[1].f) * (jfloat(2)));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Interp$Swing_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp$Swing:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(343);
	if ((floatCompare((frame[1].f), (jfloat(0.5f)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(344);
	frame[1].f = ((frame[1].f) * (jfloat(2)));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return ((((frame[1].f) * (frame[1].f)) * (((((jfloat)((arc_math_Interp$Swing *) NULL_CHECK((frame[0].o)))->F_scale) + (jfloat(1))) * (frame[1].f)) - ((jfloat)((arc_math_Interp$Swing *) NULL_CHECK((frame[0].o)))->F_scale))) / (jfloat(2)));
	}
label_1:;
	{
	LINE_NUMBER(347);
	frame[1].f = ((frame[1].f) - (jfloat(1)));
	LINE_NUMBER(348);
	frame[1].f = ((frame[1].f) * (jfloat(2)));
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return (((((frame[1].f) * (frame[1].f)) * (((((jfloat)((arc_math_Interp$Swing *) NULL_CHECK((frame[0].o)))->F_scale) + (jfloat(1))) * (frame[1].f)) + ((jfloat)((arc_math_Interp$Swing *) NULL_CHECK((frame[0].o)))->F_scale))) / (jfloat(2))) + (jfloat(1)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Interp$Swing[] {
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
	(void *) M_arc_math_Interp$Swing_apply_float_R_float,
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
	{ "scale", &class_float, offsetof(arc_math_Interp$Swing, F_scale), "F", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Interp$Swing_float, 0, "(F)V", 1 },
	{ "apply", (intptr_t) M_arc_math_Interp$Swing_apply_float_R_float, VTABLE_arc_math_Interp$Swing_apply_float_R_float, "(F)F", 1 },
};

Class class_arc_math_Interp$Swing{
		.nativeName = (intptr_t) "arc/math/Interp$Swing",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Interp$Swing),
		.classVtable = (intptr_t) vtable_arc_math_Interp$Swing,
		.staticInitializer = (intptr_t) clinit_arc_math_Interp$Swing,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Interp$Swing,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_math_Interp,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Interp$Swing = registerClass(&class_arc_math_Interp$Swing);

}

