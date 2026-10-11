#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_5.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units_Sortf_5.h"
#include "mindustry/entities/Units_Sortf.h"
#include "mindustry/entities/UnitSorts.h"

extern "C" {


void mark_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5 *) object;
}

void clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5_cost_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units$Sortf_5:cost", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5 *) self;
	auto object = SM_mindustry_entities_UnitSorts_lambda$static$3_mindustry_gen_Unit_float_float_R_float(ctx, param0, param1, param2);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5[] {
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
	(void *) M_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5_cost_mindustry_gen_Unit_float_float_R_float,
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
	{ "cost", "(Lmindustry/gen/Unit;FF)F" },
};

static jclass interfaces[] { &class_mindustry_entities_Units$Sortf, };

static MethodMetadata methods[] {
	{ "cost", (intptr_t) M_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5_cost_mindustry_gen_Unit_float_float_R_float, VTABLE_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5_cost_mindustry_gen_Unit_float_float_R_float, "(Lmindustry/gen/Unit;FF)F", 0 },
};

Class class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5{
		.nativeName = (intptr_t) "mindustry/entities/UnitSorts_invoke_mindustry_entities_Units$Sortf_5",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5),
		.classVtable = (intptr_t) vtable_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5,
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
static bool registered_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5 = registerClass(&class_mindustry_entities_UnitSorts_invoke_mindustry_entities_Units$Sortf_5);

}

