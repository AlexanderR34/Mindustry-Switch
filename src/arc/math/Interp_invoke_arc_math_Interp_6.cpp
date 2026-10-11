#include "arc/math/Interp_invoke_arc_math_Interp_6.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_invoke_arc_math_Interp_6.h"

extern "C" {


void mark_arc_math_Interp_invoke_arc_math_Interp_6(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_Interp_invoke_arc_math_Interp_6 *) object;
}

void clinit_arc_math_Interp_invoke_arc_math_Interp_6(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_arc_math_Interp_invoke_arc_math_Interp_6_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/math/Interp_invoke_arc_math_Interp_6:apply", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_math_Interp_invoke_arc_math_Interp_6 *) self;
	auto object = SM_arc_math_Mathf_slope_float_R_float(ctx, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_arc_math_Interp_invoke_arc_math_Interp_6[] {
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
	(void *) M_arc_math_Interp_invoke_arc_math_Interp_6_apply_float_R_float,
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

static MethodMetadata methods[] {
	{ "apply", (intptr_t) M_arc_math_Interp_invoke_arc_math_Interp_6_apply_float_R_float, VTABLE_arc_math_Interp_invoke_arc_math_Interp_6_apply_float_R_float, "(F)F", 0 },
};

Class class_arc_math_Interp_invoke_arc_math_Interp_6{
		.nativeName = (intptr_t) "arc/math/Interp_invoke_arc_math_Interp_6",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Interp_invoke_arc_math_Interp_6),
		.classVtable = (intptr_t) vtable_arc_math_Interp_invoke_arc_math_Interp_6,
		.staticInitializer = (intptr_t) clinit_arc_math_Interp_invoke_arc_math_Interp_6,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Interp_invoke_arc_math_Interp_6,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Interp_invoke_arc_math_Interp_6 = registerClass(&class_arc_math_Interp_invoke_arc_math_Interp_6);

}
