#include "mindustry/game/EventType_TileFloorChangeEvent.h"
#include "mindustry/game/EventType_TileFloorChangeEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"

extern "C" {


void mark_mindustry_game_EventType$TileFloorChangeEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$TileFloorChangeEvent *) object;
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_previous)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previous)->clazz)->markFunction)((jobject) self->F_previous, mark, depth + 1);
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
}

void clinit_mindustry_game_EventType$TileFloorChangeEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$TileFloorChangeEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$TileFloorChangeEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$TileFloorChangeEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(459);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_EventType$TileFloorChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileFloorChangeEvent(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$TileFloorChangeEvent:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(464);
	((mindustry_game_EventType$TileFloorChangeEvent *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (frame[1].o);
	LINE_NUMBER(465);
	((mindustry_game_EventType$TileFloorChangeEvent *) NULL_CHECK((frame[0].o)))->F_previous = (jref) (frame[2].o);
	LINE_NUMBER(466);
	((mindustry_game_EventType$TileFloorChangeEvent *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[3].o);
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$TileFloorChangeEvent[] {
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
	(void *) M_mindustry_game_EventType$TileFloorChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileFloorChangeEvent,
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
	{ "set", "(Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;Lmindustry/world/blocks/environment/Floor;)Lmindustry/game/EventType$TileFloorChangeEvent;" },
};

static FieldMetadata fields[] {
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_game_EventType$TileFloorChangeEvent, F_tile), "Lmindustry/world/Tile;", 1 },
	{ "previous", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_game_EventType$TileFloorChangeEvent, F_previous), "Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "floor", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_game_EventType$TileFloorChangeEvent, F_floor), "Lmindustry/world/blocks/environment/Floor;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$TileFloorChangeEvent, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_game_EventType$TileFloorChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileFloorChangeEvent, VTABLE_mindustry_game_EventType$TileFloorChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileFloorChangeEvent, "(Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;Lmindustry/world/blocks/environment/Floor;)Lmindustry/game/EventType$TileFloorChangeEvent;", 1 },
};

Class class_mindustry_game_EventType$TileFloorChangeEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$TileFloorChangeEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$TileFloorChangeEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$TileFloorChangeEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$TileFloorChangeEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$TileFloorChangeEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_EventType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$TileFloorChangeEvent = registerClass(&class_mindustry_game_EventType$TileFloorChangeEvent);

}

