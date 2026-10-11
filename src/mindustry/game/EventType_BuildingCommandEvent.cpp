#include "mindustry/game/EventType_BuildingCommandEvent.h"
#include "mindustry/game/EventType_BuildingCommandEvent.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_game_EventType$BuildingCommandEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$BuildingCommandEvent *) object;
	if (self->F_player)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_player)->clazz)->markFunction)((jobject) self->F_player, mark, depth + 1);
	if (self->F_building)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_building)->clazz)->markFunction)((jobject) self->F_building, mark, depth + 1);
	if (self->F_position)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_position)->clazz)->markFunction)((jobject) self->F_position, mark, depth + 1);
}

void clinit_mindustry_game_EventType$BuildingCommandEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$BuildingCommandEvent_mindustry_gen_Player_mindustry_gen_Building_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$BuildingCommandEvent:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$BuildingCommandEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(383);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(384);
	((mindustry_game_EventType$BuildingCommandEvent *) NULL_CHECK((frame[0].o)))->F_player = (jref) (frame[1].o);
	LINE_NUMBER(385);
	((mindustry_game_EventType$BuildingCommandEvent *) NULL_CHECK((frame[0].o)))->F_building = (jref) (frame[2].o);
	LINE_NUMBER(386);
	((mindustry_game_EventType$BuildingCommandEvent *) NULL_CHECK((frame[0].o)))->F_position = (jref) (frame[3].o);
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$BuildingCommandEvent[] {
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
	{ "player", &class_mindustry_gen_Player, offsetof(mindustry_game_EventType$BuildingCommandEvent, F_player), "Lmindustry/gen/Player;", 17 },
	{ "building", &class_mindustry_gen_Building, offsetof(mindustry_game_EventType$BuildingCommandEvent, F_building), "Lmindustry/gen/Building;", 17 },
	{ "position", &class_arc_math_geom_Vec2, offsetof(mindustry_game_EventType$BuildingCommandEvent, F_position), "Larc/math/geom/Vec2;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$BuildingCommandEvent_mindustry_gen_Player_mindustry_gen_Building_arc_math_geom_Vec2, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;Larc/math/geom/Vec2;)V", 1 },
};

Class class_mindustry_game_EventType$BuildingCommandEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$BuildingCommandEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$BuildingCommandEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$BuildingCommandEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$BuildingCommandEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$BuildingCommandEvent,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$BuildingCommandEvent = registerClass(&class_mindustry_game_EventType$BuildingCommandEvent);

}

