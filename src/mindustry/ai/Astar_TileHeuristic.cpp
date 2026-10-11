#include "mindustry/ai/Astar_TileHeuristic.h"
#include "mindustry/ai/Astar.h"
#include "java/lang/Object.h"
#include "mindustry/world/Tile.h"
#include "mindustry/ai/Astar_TileHeuristic.h"

extern "C" {


void mark_mindustry_ai_Astar$TileHeuristic(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_Astar$TileHeuristic *) object;
}

void clinit_mindustry_ai_Astar$TileHeuristic(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Astar$TileHeuristic:cost", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(101);
	jfloat temp0 = (jfloat)((func_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_R_float) resolveInterfaceMethod(ctx, &class_mindustry_ai_Astar$TileHeuristic, INDEX_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_Astar$TileHeuristic[] {
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

static MethodMetadata methods[] {
	{ "cost", 0, INDEX_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_R_float, "(Lmindustry/world/Tile;)F", 1025 },
	{ "cost", (intptr_t) M_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_mindustry_world_Tile_R_float, INDEX_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_mindustry_world_Tile_R_float, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)F", 1 },
};

Class class_mindustry_ai_Astar$TileHeuristic{
		.nativeName = (intptr_t) "mindustry/ai/Astar$TileHeuristic",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_Astar$TileHeuristic),
		.classVtable = (intptr_t) vtable_mindustry_ai_Astar$TileHeuristic,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_Astar$TileHeuristic,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_Astar$TileHeuristic,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_Astar,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_Astar$TileHeuristic = registerClass(&class_mindustry_ai_Astar$TileHeuristic);

}

