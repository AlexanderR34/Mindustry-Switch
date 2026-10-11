#include "mindustry/game/EventType_BuildTeamChangeEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_BuildTeamChangeEvent.h"
#include "mindustry/game/EventType.h"
#include "mindustry/game/Team.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_game_EventType$BuildTeamChangeEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$BuildTeamChangeEvent *) object;
	if (self->F_previous)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previous)->clazz)->markFunction)((jobject) self->F_previous, mark, depth + 1);
	if (self->F_build)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_build)->clazz)->markFunction)((jobject) self->F_build, mark, depth + 1);
}

void clinit_mindustry_game_EventType$BuildTeamChangeEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$BuildTeamChangeEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$BuildTeamChangeEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$BuildTeamChangeEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(491);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_EventType$BuildTeamChangeEvent_set_mindustry_game_Team_mindustry_gen_Building_R_mindustry_game_EventType$BuildTeamChangeEvent(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$BuildTeamChangeEvent:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(496);
	((mindustry_game_EventType$BuildTeamChangeEvent *) NULL_CHECK((frame[0].o)))->F_build = (jref) (frame[2].o);
	LINE_NUMBER(497);
	((mindustry_game_EventType$BuildTeamChangeEvent *) NULL_CHECK((frame[0].o)))->F_previous = (jref) (frame[1].o);
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$BuildTeamChangeEvent[] {
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
	(void *) M_mindustry_game_EventType$BuildTeamChangeEvent_set_mindustry_game_Team_mindustry_gen_Building_R_mindustry_game_EventType$BuildTeamChangeEvent,
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
	{ "set", "(Lmindustry/game/Team;Lmindustry/gen/Building;)Lmindustry/game/EventType$BuildTeamChangeEvent;" },
};

static FieldMetadata fields[] {
	{ "previous", &class_mindustry_game_Team, offsetof(mindustry_game_EventType$BuildTeamChangeEvent, F_previous), "Lmindustry/game/Team;", 1 },
	{ "build", &class_mindustry_gen_Building, offsetof(mindustry_game_EventType$BuildTeamChangeEvent, F_build), "Lmindustry/gen/Building;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$BuildTeamChangeEvent, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_game_EventType$BuildTeamChangeEvent_set_mindustry_game_Team_mindustry_gen_Building_R_mindustry_game_EventType$BuildTeamChangeEvent, VTABLE_mindustry_game_EventType$BuildTeamChangeEvent_set_mindustry_game_Team_mindustry_gen_Building_R_mindustry_game_EventType$BuildTeamChangeEvent, "(Lmindustry/game/Team;Lmindustry/gen/Building;)Lmindustry/game/EventType$BuildTeamChangeEvent;", 1 },
};

Class class_mindustry_game_EventType$BuildTeamChangeEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$BuildTeamChangeEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$BuildTeamChangeEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$BuildTeamChangeEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$BuildTeamChangeEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$BuildTeamChangeEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_EventType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$BuildTeamChangeEvent = registerClass(&class_mindustry_game_EventType$BuildTeamChangeEvent);

}

