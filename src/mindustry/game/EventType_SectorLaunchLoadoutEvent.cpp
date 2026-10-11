#include "mindustry/game/EventType_SectorLaunchLoadoutEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_SectorLaunchLoadoutEvent.h"
#include "mindustry/game/EventType.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/type/Sector.h"

extern "C" {


void mark_mindustry_game_EventType$SectorLaunchLoadoutEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$SectorLaunchLoadoutEvent *) object;
	if (self->F_sector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sector)->clazz)->markFunction)((jobject) self->F_sector, mark, depth + 1);
	if (self->F_from)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_from)->clazz)->markFunction)((jobject) self->F_from, mark, depth + 1);
	if (self->F_loadout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadout)->clazz)->markFunction)((jobject) self->F_loadout, mark, depth + 1);
}

void clinit_mindustry_game_EventType$SectorLaunchLoadoutEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$SectorLaunchLoadoutEvent_mindustry_type_Sector_mindustry_type_Sector_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$SectorLaunchLoadoutEvent:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$SectorLaunchLoadoutEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(177);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(178);
	((mindustry_game_EventType$SectorLaunchLoadoutEvent *) NULL_CHECK((frame[0].o)))->F_sector = (jref) (frame[1].o);
	LINE_NUMBER(179);
	((mindustry_game_EventType$SectorLaunchLoadoutEvent *) NULL_CHECK((frame[0].o)))->F_from = (jref) (frame[2].o);
	LINE_NUMBER(180);
	((mindustry_game_EventType$SectorLaunchLoadoutEvent *) NULL_CHECK((frame[0].o)))->F_loadout = (jref) (frame[3].o);
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$SectorLaunchLoadoutEvent[] {
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
	{ "sector", &class_mindustry_type_Sector, offsetof(mindustry_game_EventType$SectorLaunchLoadoutEvent, F_sector), "Lmindustry/type/Sector;", 17 },
	{ "from", &class_mindustry_type_Sector, offsetof(mindustry_game_EventType$SectorLaunchLoadoutEvent, F_from), "Lmindustry/type/Sector;", 17 },
	{ "loadout", &class_mindustry_game_Schematic, offsetof(mindustry_game_EventType$SectorLaunchLoadoutEvent, F_loadout), "Lmindustry/game/Schematic;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$SectorLaunchLoadoutEvent_mindustry_type_Sector_mindustry_type_Sector_mindustry_game_Schematic, 0, "(Lmindustry/type/Sector;Lmindustry/type/Sector;Lmindustry/game/Schematic;)V", 1 },
};

Class class_mindustry_game_EventType$SectorLaunchLoadoutEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$SectorLaunchLoadoutEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$SectorLaunchLoadoutEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$SectorLaunchLoadoutEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$SectorLaunchLoadoutEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$SectorLaunchLoadoutEvent,
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
static bool registered_mindustry_game_EventType$SectorLaunchLoadoutEvent = registerClass(&class_mindustry_game_EventType$SectorLaunchLoadoutEvent);

}

