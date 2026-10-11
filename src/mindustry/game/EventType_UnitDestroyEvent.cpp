#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/game/EventType.h"

extern "C" {


void mark_mindustry_game_EventType$UnitDestroyEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$UnitDestroyEvent *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
}

void clinit_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$UnitDestroyEvent_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$UnitDestroyEvent:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$UnitDestroyEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(652);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(653);
	((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$UnitDestroyEvent[] {
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
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_game_EventType$UnitDestroyEvent, F_unit), "Lmindustry/gen/Unit;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$UnitDestroyEvent_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 1 },
};

Class class_mindustry_game_EventType$UnitDestroyEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$UnitDestroyEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$UnitDestroyEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$UnitDestroyEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$UnitDestroyEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$UnitDestroyEvent,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$UnitDestroyEvent = registerClass(&class_mindustry_game_EventType$UnitDestroyEvent);

}

