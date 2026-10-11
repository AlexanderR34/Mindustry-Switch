#include "mindustry/maps/generators/FileMapGenerator_1.h"
#include "mindustry/maps/Map.h"
#include "mindustry/maps/generators/FileMapGenerator.h"
#include "java/lang/Object.h"
#include "mindustry/core/World_FilterContext.h"
#include "mindustry/world/WorldContext.h"
#include "mindustry/type/Sector.h"
#include "mindustry/maps/generators/FileMapGenerator_1.h"
#include "java/util/Objects.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_maps_generators_FileMapGenerator$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_core_World$FilterContext(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_generators_FileMapGenerator$1 *) object;
	if (self->F_val$sector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$sector)->clazz)->markFunction)((jobject) self->F_val$sector, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_maps_generators_FileMapGenerator$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_core_World$FilterContext(ctx);
}

void init_mindustry_maps_generators_FileMapGenerator$1_mindustry_maps_generators_FileMapGenerator_mindustry_core_World_mindustry_maps_Map_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/FileMapGenerator$1:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_FileMapGenerator$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(71);
	((mindustry_maps_generators_FileMapGenerator$1 *) NULL_CHECK((frame[0].o)))->F_val$sector = (jref) (frame[4].o);
	((mindustry_maps_generators_FileMapGenerator$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	init_mindustry_core_World$FilterContext_mindustry_core_World_mindustry_maps_Map(ctx, sp[0].o, sp[1].o, (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_generators_FileMapGenerator$1_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/FileMapGenerator$1:getSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator$1 *) NULL_CHECK((frame[0].o)))->F_val$sector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_FileMapGenerator$1_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/FileMapGenerator$1:end", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	((func_mindustry_maps_generators_FileMapGenerator$1_applyFilters) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_FileMapGenerator$1_applyFilters])(ctx, (frame[0].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_generators_FileMapGenerator$1[] {
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
	(void *) M_mindustry_core_World$FilterContext_tile_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World$FilterContext_resize_int_int,
	(void *) M_mindustry_core_World$FilterContext_create_int_int_int_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World$FilterContext_isGenerating_R_boolean,
	(void *) M_mindustry_core_World$FilterContext_begin,
	(void *) M_mindustry_maps_generators_FileMapGenerator$1_end,
	(void *) M_mindustry_world_WorldContext_onReadBuilding,
	(void *) M_mindustry_world_WorldContext_onReadTileData,
	(void *) M_mindustry_maps_generators_FileMapGenerator$1_getSector_R_mindustry_type_Sector,
	(void *) M_mindustry_core_World$FilterContext_isMap_R_boolean,
	(void *) M_mindustry_core_World$FilterContext_applyFilters,
	(void *) M_mindustry_core_World$FilterContext_lambda$applyFilters$0_int_int_R_mindustry_world_Tile,
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
	{ "tile", "(I)Lmindustry/world/Tile;" },
	{ "resize", "(II)V" },
	{ "create", "(IIIII)Lmindustry/world/Tile;" },
	{ "isGenerating", "()Z" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "onReadBuilding", "()V" },
	{ "onReadTileData", "()V" },
	{ "getSector", "()Lmindustry/type/Sector;" },
	{ "isMap", "()Z" },
	{ "applyFilters", "()V" },
	{ "lambda$applyFilters$0", "(II)Lmindustry/world/Tile;" },
};

static FieldMetadata fields[] {
	{ "val$sector", &class_mindustry_type_Sector, offsetof(mindustry_maps_generators_FileMapGenerator$1, F_val$sector), "Lmindustry/type/Sector;", 4112 },
	{ "this$0", &class_mindustry_maps_generators_FileMapGenerator, offsetof(mindustry_maps_generators_FileMapGenerator$1, F_this$0), "Lmindustry/maps/generators/FileMapGenerator;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_generators_FileMapGenerator$1_mindustry_maps_generators_FileMapGenerator_mindustry_core_World_mindustry_maps_Map_mindustry_type_Sector, 0, "(Lmindustry/maps/generators/FileMapGenerator;Lmindustry/core/World;Lmindustry/maps/Map;Lmindustry/type/Sector;)V", 0 },
	{ "getSector", (intptr_t) M_mindustry_maps_generators_FileMapGenerator$1_getSector_R_mindustry_type_Sector, VTABLE_mindustry_maps_generators_FileMapGenerator$1_getSector_R_mindustry_type_Sector, "()Lmindustry/type/Sector;", 1 },
	{ "end", (intptr_t) M_mindustry_maps_generators_FileMapGenerator$1_end, VTABLE_mindustry_maps_generators_FileMapGenerator$1_end, "()V", 1 },
};

Class class_mindustry_maps_generators_FileMapGenerator$1{
		.nativeName = (intptr_t) "mindustry/maps/generators/FileMapGenerator$1",
		.parentClass = (intptr_t) &class_mindustry_core_World$FilterContext,
		.size = sizeof(mindustry_maps_generators_FileMapGenerator$1),
		.classVtable = (intptr_t) vtable_mindustry_maps_generators_FileMapGenerator$1,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_generators_FileMapGenerator$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_generators_FileMapGenerator$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_maps_generators_FileMapGenerator$1 = registerClass(&class_mindustry_maps_generators_FileMapGenerator$1);

}

