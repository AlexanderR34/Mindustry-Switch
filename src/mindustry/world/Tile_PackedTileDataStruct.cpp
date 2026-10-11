#include "mindustry/world/Tile_PackedTileDataStruct.h"
#include "java/lang/Object.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/Tile_PackedTileDataStruct.h"

extern "C" {


void mark_mindustry_world_Tile$PackedTileDataStruct(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_Tile$PackedTileDataStruct *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_Tile$PackedTileDataStruct(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_Tile$PackedTileDataStruct_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile$PackedTileDataStruct:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile$PackedTileDataStruct(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(938);
	((mindustry_world_Tile$PackedTileDataStruct *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_Tile$PackedTileDataStruct[] {
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
};

static FieldMetadata fields[] {
	{ "extraData", &class_int, offsetof(mindustry_world_Tile$PackedTileDataStruct, F_extraData), "I", 0 },
	{ "data", &class_byte, offsetof(mindustry_world_Tile$PackedTileDataStruct, F_data), "B", 0 },
	{ "floorData", &class_byte, offsetof(mindustry_world_Tile$PackedTileDataStruct, F_floorData), "B", 0 },
	{ "overlayData", &class_byte, offsetof(mindustry_world_Tile$PackedTileDataStruct, F_overlayData), "B", 0 },
	{ "this$0", &class_mindustry_world_Tile, offsetof(mindustry_world_Tile$PackedTileDataStruct, F_this$0), "Lmindustry/world/Tile;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_Tile$PackedTileDataStruct_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 0 },
};

Class class_mindustry_world_Tile$PackedTileDataStruct{
		.nativeName = (intptr_t) "mindustry/world/Tile$PackedTileDataStruct",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_Tile$PackedTileDataStruct),
		.classVtable = (intptr_t) vtable_mindustry_world_Tile$PackedTileDataStruct,
		.staticInitializer = (intptr_t) clinit_mindustry_world_Tile$PackedTileDataStruct,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_Tile$PackedTileDataStruct,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_Tile,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_Tile$PackedTileDataStruct = registerClass(&class_mindustry_world_Tile$PackedTileDataStruct);

}

