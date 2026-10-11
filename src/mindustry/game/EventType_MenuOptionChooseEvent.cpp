#include "mindustry/game/EventType_MenuOptionChooseEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "mindustry/gen/Player.h"
#include "mindustry/game/EventType_MenuOptionChooseEvent.h"

extern "C" {


void mark_mindustry_game_EventType$MenuOptionChooseEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$MenuOptionChooseEvent *) object;
	if (self->F_player)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_player)->clazz)->markFunction)((jobject) self->F_player, mark, depth + 1);
}

void clinit_mindustry_game_EventType$MenuOptionChooseEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$MenuOptionChooseEvent_mindustry_gen_Player_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$MenuOptionChooseEvent:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$MenuOptionChooseEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(215);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(216);
	((mindustry_game_EventType$MenuOptionChooseEvent *) NULL_CHECK((frame[0].o)))->F_player = (jref) (frame[1].o);
	LINE_NUMBER(217);
	((mindustry_game_EventType$MenuOptionChooseEvent *) NULL_CHECK((frame[0].o)))->F_menuId = (frame[2].i);
	LINE_NUMBER(218);
	((mindustry_game_EventType$MenuOptionChooseEvent *) NULL_CHECK((frame[0].o)))->F_option = (frame[3].i);
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$MenuOptionChooseEvent[] {
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
	{ "player", &class_mindustry_gen_Player, offsetof(mindustry_game_EventType$MenuOptionChooseEvent, F_player), "Lmindustry/gen/Player;", 17 },
	{ "menuId", &class_int, offsetof(mindustry_game_EventType$MenuOptionChooseEvent, F_menuId), "I", 17 },
	{ "option", &class_int, offsetof(mindustry_game_EventType$MenuOptionChooseEvent, F_option), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$MenuOptionChooseEvent_mindustry_gen_Player_int_int, 0, "(Lmindustry/gen/Player;II)V", 1 },
};

Class class_mindustry_game_EventType$MenuOptionChooseEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$MenuOptionChooseEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$MenuOptionChooseEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$MenuOptionChooseEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$MenuOptionChooseEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$MenuOptionChooseEvent,
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
static bool registered_mindustry_game_EventType$MenuOptionChooseEvent = registerClass(&class_mindustry_game_EventType$MenuOptionChooseEvent);

}

