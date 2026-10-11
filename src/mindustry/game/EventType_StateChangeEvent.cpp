#include "mindustry/game/EventType_StateChangeEvent.h"
#include "mindustry/game/EventType_StateChangeEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "mindustry/core/GameState_State.h"

extern "C" {


void mark_mindustry_game_EventType$StateChangeEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$StateChangeEvent *) object;
	if (self->F_from)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_from)->clazz)->markFunction)((jobject) self->F_from, mark, depth + 1);
	if (self->F_to)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_to)->clazz)->markFunction)((jobject) self->F_to, mark, depth + 1);
}

void clinit_mindustry_game_EventType$StateChangeEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$StateChangeEvent_mindustry_core_GameState$State_mindustry_core_GameState$State(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$StateChangeEvent:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$StateChangeEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(514);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(515);
	((mindustry_game_EventType$StateChangeEvent *) NULL_CHECK((frame[0].o)))->F_from = (jref) (frame[1].o);
	LINE_NUMBER(516);
	((mindustry_game_EventType$StateChangeEvent *) NULL_CHECK((frame[0].o)))->F_to = (jref) (frame[2].o);
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$StateChangeEvent[] {
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
	{ "from", &class_mindustry_core_GameState$State, offsetof(mindustry_game_EventType$StateChangeEvent, F_from), "Lmindustry/core/GameState$State;", 17 },
	{ "to", &class_mindustry_core_GameState$State, offsetof(mindustry_game_EventType$StateChangeEvent, F_to), "Lmindustry/core/GameState$State;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$StateChangeEvent_mindustry_core_GameState$State_mindustry_core_GameState$State, 0, "(Lmindustry/core/GameState$State;Lmindustry/core/GameState$State;)V", 1 },
};

Class class_mindustry_game_EventType$StateChangeEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$StateChangeEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$StateChangeEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$StateChangeEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$StateChangeEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$StateChangeEvent,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$StateChangeEvent = registerClass(&class_mindustry_game_EventType$StateChangeEvent);

}

