#include "mindustry/game/EventType_TileChangeEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "mindustry/world/Tile.h"

extern "C" {


void mark_mindustry_game_EventType$TileChangeEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$TileChangeEvent *) object;
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
}

void clinit_mindustry_game_EventType$TileChangeEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$TileChangeEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$TileChangeEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(446);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_EventType$TileChangeEvent_set_mindustry_world_Tile_R_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$TileChangeEvent:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(450);
	((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (frame[1].o);
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$TileChangeEvent[] {
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
	(void *) M_mindustry_game_EventType$TileChangeEvent_set_mindustry_world_Tile_R_mindustry_game_EventType$TileChangeEvent,
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
	{ "set", "(Lmindustry/world/Tile;)Lmindustry/game/EventType$TileChangeEvent;" },
};

static FieldMetadata fields[] {
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_game_EventType$TileChangeEvent, F_tile), "Lmindustry/world/Tile;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$TileChangeEvent, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_game_EventType$TileChangeEvent_set_mindustry_world_Tile_R_mindustry_game_EventType$TileChangeEvent, VTABLE_mindustry_game_EventType$TileChangeEvent_set_mindustry_world_Tile_R_mindustry_game_EventType$TileChangeEvent, "(Lmindustry/world/Tile;)Lmindustry/game/EventType$TileChangeEvent;", 1 },
};

Class class_mindustry_game_EventType$TileChangeEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$TileChangeEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$TileChangeEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$TileChangeEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$TileChangeEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$TileChangeEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_EventType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$TileChangeEvent = registerClass(&class_mindustry_game_EventType$TileChangeEvent);

}

