#include "mindustry/ai/Astar_invoke_arc_func_Floatf_1.h"
#include "mindustry/ai/Astar.h"
#include "mindustry/ai/Astar_invoke_arc_func_Floatf_1.h"
#include "arc/func/Floatf.h"
#include "java/lang/Object.h"
#include "mindustry/world/Tile.h"
#include "mindustry/ai/Astar_DistanceHeuristic.h"

extern "C" {


void mark_mindustry_ai_Astar_invoke_arc_func_Floatf_1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_Astar_invoke_arc_func_Floatf_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_mindustry_ai_Astar_invoke_arc_func_Floatf_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_mindustry_ai_Astar_invoke_arc_func_Floatf_1_get_java_lang_Object_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ai/Astar_invoke_arc_func_Floatf_1:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ai_Astar_invoke_arc_func_Floatf_1 *) self;
	auto object = SM_mindustry_ai_Astar_lambda$pathfind$0_mindustry_ai_Astar$DistanceHeuristic_mindustry_world_Tile_mindustry_world_Tile_R_float(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_Astar_invoke_arc_func_Floatf_1[] {
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
	(void *) M_mindustry_ai_Astar_invoke_arc_func_Floatf_1_get_java_lang_Object_R_float,
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
	{ "get", "(Ljava/lang/Object;)F" },
};

static jclass interfaces[] { &class_arc_func_Floatf, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_ai_Astar$DistanceHeuristic, offsetof(mindustry_ai_Astar_invoke_arc_func_Floatf_1, F_field0), "Lmindustry/ai/Astar$DistanceHeuristic;", 0 },
	{ "field1", &class_mindustry_world_Tile, offsetof(mindustry_ai_Astar_invoke_arc_func_Floatf_1, F_field1), "Lmindustry/world/Tile;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_ai_Astar_invoke_arc_func_Floatf_1_get_java_lang_Object_R_float, VTABLE_mindustry_ai_Astar_invoke_arc_func_Floatf_1_get_java_lang_Object_R_float, "(Ljava/lang/Object;)F", 0 },
};

Class class_mindustry_ai_Astar_invoke_arc_func_Floatf_1{
		.nativeName = (intptr_t) "mindustry/ai/Astar_invoke_arc_func_Floatf_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_Astar_invoke_arc_func_Floatf_1),
		.classVtable = (intptr_t) vtable_mindustry_ai_Astar_invoke_arc_func_Floatf_1,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_Astar_invoke_arc_func_Floatf_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_Astar_invoke_arc_func_Floatf_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_Astar_invoke_arc_func_Floatf_1 = registerClass(&class_mindustry_ai_Astar_invoke_arc_func_Floatf_1);

}
