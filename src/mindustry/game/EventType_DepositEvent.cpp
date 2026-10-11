#include "mindustry/game/EventType_DepositEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Item.h"
#include "mindustry/game/EventType_DepositEvent.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_game_EventType$DepositEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$DepositEvent *) object;
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_player)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_player)->clazz)->markFunction)((jobject) self->F_player, mark, depth + 1);
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
}

void clinit_mindustry_game_EventType$DepositEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$DepositEvent_mindustry_gen_Building_mindustry_gen_Player_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$DepositEvent:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$DepositEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(300);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(301);
	((mindustry_game_EventType$DepositEvent *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (frame[1].o);
	LINE_NUMBER(302);
	((mindustry_game_EventType$DepositEvent *) NULL_CHECK((frame[0].o)))->F_player = (jref) (frame[2].o);
	LINE_NUMBER(303);
	((mindustry_game_EventType$DepositEvent *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[3].o);
	LINE_NUMBER(304);
	((mindustry_game_EventType$DepositEvent *) NULL_CHECK((frame[0].o)))->F_amount = (frame[4].i);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$DepositEvent[] {
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
	{ "tile", &class_mindustry_gen_Building, offsetof(mindustry_game_EventType$DepositEvent, F_tile), "Lmindustry/gen/Building;", 17 },
	{ "player", &class_mindustry_gen_Player, offsetof(mindustry_game_EventType$DepositEvent, F_player), "Lmindustry/gen/Player;", 17 },
	{ "item", &class_mindustry_type_Item, offsetof(mindustry_game_EventType$DepositEvent, F_item), "Lmindustry/type/Item;", 17 },
	{ "amount", &class_int, offsetof(mindustry_game_EventType$DepositEvent, F_amount), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$DepositEvent_mindustry_gen_Building_mindustry_gen_Player_mindustry_type_Item_int, 0, "(Lmindustry/gen/Building;Lmindustry/gen/Player;Lmindustry/type/Item;I)V", 1 },
};

Class class_mindustry_game_EventType$DepositEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$DepositEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$DepositEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$DepositEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$DepositEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$DepositEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_EventType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$DepositEvent = registerClass(&class_mindustry_game_EventType$DepositEvent);

}

