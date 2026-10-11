#include "mindustry/maps/filters/GenerateFilter_GenerateInput_TileProvider.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput_TileProvider.h"
#include "mindustry/world/Tile.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"

extern "C" {


void mark_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider *) object;
}

void clinit_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider[] {
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
	{ "get", "(II)Lmindustry/world/Tile;" },
};

static MethodMetadata methods[] {
	{ "get", 0, INDEX_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider_get_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1025 },
};

Class class_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider{
		.nativeName = (intptr_t) "mindustry/maps/filters/GenerateFilter$GenerateInput$TileProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter$GenerateInput,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider = registerClass(&class_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider);

}

