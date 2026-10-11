#include "mindustry/maps/filters/SpawnPathFilter_invoke_mindustry_ai_Astar_TileHeuristic_0.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/SpawnPathFilter.h"
#include "mindustry/maps/filters/SpawnPathFilter_invoke_mindustry_ai_Astar_TileHeuristic_0.h"
#include "mindustry/world/Tile.h"
#include "mindustry/ai/Astar_TileHeuristic.h"

extern "C" {


void mark_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0 *) object;
}

void clinit_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0_cost_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0:cost", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0 *) self;
	auto object = SM_mindustry_maps_filters_SpawnPathFilter_lambda$apply$0_mindustry_world_Tile_R_float(ctx, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0[] {
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
	(void *) M_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0_cost_mindustry_world_Tile_R_float,
	(void *) M_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_mindustry_world_Tile_R_float,
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
	{ "cost", "(Lmindustry/world/Tile;)F" },
	{ "cost", "(Lmindustry/world/Tile;Lmindustry/world/Tile;)F" },
};

static jclass interfaces[] { &class_mindustry_ai_Astar$TileHeuristic, };

static MethodMetadata methods[] {
	{ "cost", (intptr_t) M_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0_cost_mindustry_world_Tile_R_float, VTABLE_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0_cost_mindustry_world_Tile_R_float, "(Lmindustry/world/Tile;)F", 0 },
};

Class class_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0{
		.nativeName = (intptr_t) "mindustry/maps/filters/SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0,
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
static bool registered_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0 = registerClass(&class_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_0);

}

