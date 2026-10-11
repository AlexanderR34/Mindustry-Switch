#include "mindustry/maps/generators/WorldGenerator.h"
#include "java/lang/Object.h"
#include "mindustry/world/WorldParams.h"
#include "mindustry/maps/generators/WorldGenerator.h"
#include "mindustry/world/Tiles.h"

extern "C" {


void mark_mindustry_maps_generators_WorldGenerator(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_generators_WorldGenerator *) object;
}

void clinit_mindustry_maps_generators_WorldGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/WorldGenerator:postGenerate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(9);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_generators_WorldGenerator[] {
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
	(void *) M_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles,
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
	{ "generate", "(Lmindustry/world/Tiles;Lmindustry/world/WorldParams;)V" },
	{ "postGenerate", "(Lmindustry/world/Tiles;)V" },
};

static MethodMetadata methods[] {
	{ "generate", 0, INDEX_mindustry_maps_generators_WorldGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams, "(Lmindustry/world/Tiles;Lmindustry/world/WorldParams;)V", 1025 },
	{ "postGenerate", (intptr_t) M_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles, INDEX_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles, "(Lmindustry/world/Tiles;)V", 1 },
};

Class class_mindustry_maps_generators_WorldGenerator{
		.nativeName = (intptr_t) "mindustry/maps/generators/WorldGenerator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_generators_WorldGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_generators_WorldGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_generators_WorldGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_generators_WorldGenerator,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_generators_WorldGenerator = registerClass(&class_mindustry_maps_generators_WorldGenerator);

}
