#include "mindustry/world/blocks/storage/Unloader_ContainerStat.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/storage/Unloader_ContainerStat.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/world/blocks/storage/Unloader.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_world_blocks_storage_Unloader$ContainerStat(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_storage_Unloader$ContainerStat *) object;
	if (self->F_building)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_building)->clazz)->markFunction)((jobject) self->F_building, mark, depth + 1);
}

void clinit_mindustry_world_blocks_storage_Unloader$ContainerStat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_storage_Unloader$ContainerStat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/Unloader$ContainerStat:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_Unloader$ContainerStat(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(77);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_Unloader$ContainerStat_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/Unloader$ContainerStat:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	((mindustry_world_blocks_storage_Unloader$ContainerStat *) NULL_CHECK((frame[0].o)))->F_building = (jref) (jobject(nullptr));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_storage_Unloader$ContainerStat[] {
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
	(void *) M_mindustry_world_blocks_storage_Unloader$ContainerStat_reset,
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
	{ "reset", "()V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "building", &class_mindustry_gen_Building, offsetof(mindustry_world_blocks_storage_Unloader$ContainerStat, F_building), "Lmindustry/gen/Building;", 0 },
	{ "loadFactor", &class_float, offsetof(mindustry_world_blocks_storage_Unloader$ContainerStat, F_loadFactor), "F", 0 },
	{ "canLoad", &class_boolean, offsetof(mindustry_world_blocks_storage_Unloader$ContainerStat, F_canLoad), "Z", 0 },
	{ "canUnload", &class_boolean, offsetof(mindustry_world_blocks_storage_Unloader$ContainerStat, F_canUnload), "Z", 0 },
	{ "notStorage", &class_boolean, offsetof(mindustry_world_blocks_storage_Unloader$ContainerStat, F_notStorage), "Z", 0 },
	{ "lastUsed", &class_int, offsetof(mindustry_world_blocks_storage_Unloader$ContainerStat, F_lastUsed), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_storage_Unloader$ContainerStat, 0, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_world_blocks_storage_Unloader$ContainerStat_reset, VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_reset, "()V", 1 },
};

Class class_mindustry_world_blocks_storage_Unloader$ContainerStat{
		.nativeName = (intptr_t) "mindustry/world/blocks/storage/Unloader$ContainerStat",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_storage_Unloader$ContainerStat),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_storage_Unloader$ContainerStat,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_storage_Unloader$ContainerStat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_storage_Unloader$ContainerStat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_storage_Unloader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_storage_Unloader$ContainerStat = registerClass(&class_mindustry_world_blocks_storage_Unloader$ContainerStat);

}

