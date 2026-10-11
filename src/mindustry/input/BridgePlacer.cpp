#include "mindustry/input/BridgePlacer.h"
#include "java/lang/Object.h"
#include "mindustry/input/BridgePlacer.h"
#include "mindustry/entities/units/BuildPlan.h"

extern "C" {


void mark_mindustry_input_BridgePlacer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_input_BridgePlacer *) object;
}

void clinit_mindustry_input_BridgePlacer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_input_BridgePlacer[] {
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
	(void *) nullptr,
	(void *) nullptr,
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
	{ "unlockedNow", "()Z" },
	{ "positionsValid", "(IIII)Z" },
	{ "applyToPlans", "(Lmindustry/entities/units/BuildPlan;Lmindustry/entities/units/BuildPlan;)V" },
};

static MethodMetadata methods[] {
	{ "unlockedNow", 0, INDEX_mindustry_input_BridgePlacer_unlockedNow_R_boolean, "()Z", 1025 },
	{ "positionsValid", 0, INDEX_mindustry_input_BridgePlacer_positionsValid_int_int_int_int_R_boolean, "(IIII)Z", 1025 },
	{ "applyToPlans", 0, INDEX_mindustry_input_BridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;Lmindustry/entities/units/BuildPlan;)V", 1025 },
};

Class class_mindustry_input_BridgePlacer{
		.nativeName = (intptr_t) "mindustry/input/BridgePlacer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_input_BridgePlacer),
		.classVtable = (intptr_t) vtable_mindustry_input_BridgePlacer,
		.staticInitializer = (intptr_t) clinit_mindustry_input_BridgePlacer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_input_BridgePlacer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1536,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_input_BridgePlacer = registerClass(&class_mindustry_input_BridgePlacer);

}
