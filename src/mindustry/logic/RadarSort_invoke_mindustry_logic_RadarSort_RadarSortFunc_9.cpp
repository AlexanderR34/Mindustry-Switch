#include "mindustry/logic/RadarSort_invoke_mindustry_logic_RadarSort_RadarSortFunc_9.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/RadarSort_RadarSortFunc.h"
#include "mindustry/logic/RadarSort.h"
#include "mindustry/logic/RadarSort_invoke_mindustry_logic_RadarSort_RadarSortFunc_9.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9 *) object;
}

void clinit_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9_get_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/logic/RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9 *) self;
	auto object = SM_mindustry_logic_RadarSort_lambda$static$4_arc_math_geom_Position_mindustry_gen_Unit_R_float(ctx, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9[] {
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
	(void *) M_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9_get_arc_math_geom_Position_mindustry_gen_Unit_R_float,
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
	{ "get", "(Larc/math/geom/Position;Lmindustry/gen/Unit;)F" },
};

static jclass interfaces[] { &class_mindustry_logic_RadarSort$RadarSortFunc, };

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9_get_arc_math_geom_Position_mindustry_gen_Unit_R_float, VTABLE_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9_get_arc_math_geom_Position_mindustry_gen_Unit_R_float, "(Larc/math/geom/Position;Lmindustry/gen/Unit;)F", 0 },
};

Class class_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9{
		.nativeName = (intptr_t) "mindustry/logic/RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9),
		.classVtable = (intptr_t) vtable_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9,
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
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9 = registerClass(&class_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9);

}

