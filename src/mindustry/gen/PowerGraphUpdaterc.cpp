#include "mindustry/gen/PowerGraphUpdaterc.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "mindustry/gen/PowerGraphUpdaterc.h"
#include "mindustry/gen/Entityc.h"

extern "C" {


void mark_mindustry_gen_PowerGraphUpdaterc(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_PowerGraphUpdaterc *) object;
}

void clinit_mindustry_gen_PowerGraphUpdaterc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_gen_PowerGraphUpdaterc[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "graph", "()Lmindustry/world/blocks/power/PowerGraph;" },
	{ "graph", "(Lmindustry/world/blocks/power/PowerGraph;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Entityc, };

static MethodMetadata methods[] {
	{ "graph", 0, INDEX_mindustry_gen_PowerGraphUpdaterc_graph_R_mindustry_world_blocks_power_PowerGraph, "()Lmindustry/world/blocks/power/PowerGraph;", 1025 },
	{ "graph", 0, INDEX_mindustry_gen_PowerGraphUpdaterc_graph_mindustry_world_blocks_power_PowerGraph, "(Lmindustry/world/blocks/power/PowerGraph;)V", 1025 },
	{ "update", 0, INDEX_mindustry_gen_PowerGraphUpdaterc_update, "()V", 1025 },
};

Class class_mindustry_gen_PowerGraphUpdaterc{
		.nativeName = (intptr_t) "mindustry/gen/PowerGraphUpdaterc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_PowerGraphUpdaterc),
		.classVtable = (intptr_t) vtable_mindustry_gen_PowerGraphUpdaterc,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_PowerGraphUpdaterc,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_PowerGraphUpdaterc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_PowerGraphUpdaterc = registerClass(&class_mindustry_gen_PowerGraphUpdaterc);

}
