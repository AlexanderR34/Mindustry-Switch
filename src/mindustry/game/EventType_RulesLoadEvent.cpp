#include "mindustry/game/EventType_RulesLoadEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/EventType_RulesLoadEvent.h"

extern "C" {


void mark_mindustry_game_EventType$RulesLoadEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$RulesLoadEvent *) object;
	if (self->F_rules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rules)->clazz)->markFunction)((jobject) self->F_rules, mark, depth + 1);
}

void clinit_mindustry_game_EventType$RulesLoadEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$RulesLoadEvent_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$RulesLoadEvent:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$RulesLoadEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(541);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(542);
	((mindustry_game_EventType$RulesLoadEvent *) NULL_CHECK((frame[0].o)))->F_rules = (jref) (frame[1].o);
	LINE_NUMBER(543);
	((mindustry_game_EventType$RulesLoadEvent *) NULL_CHECK((frame[0].o)))->F_fromSave = (jint(0));
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_EventType$RulesLoadEvent_mindustry_game_Rules_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$RulesLoadEvent:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$RulesLoadEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(546);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(547);
	((mindustry_game_EventType$RulesLoadEvent *) NULL_CHECK((frame[0].o)))->F_rules = (jref) (frame[1].o);
	LINE_NUMBER(548);
	((mindustry_game_EventType$RulesLoadEvent *) NULL_CHECK((frame[0].o)))->F_fromSave = (frame[2].i);
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$RulesLoadEvent[] {
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
	{ "rules", &class_mindustry_game_Rules, offsetof(mindustry_game_EventType$RulesLoadEvent, F_rules), "Lmindustry/game/Rules;", 17 },
	{ "fromSave", &class_boolean, offsetof(mindustry_game_EventType$RulesLoadEvent, F_fromSave), "Z", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$RulesLoadEvent_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_EventType$RulesLoadEvent_mindustry_game_Rules_boolean, 0, "(Lmindustry/game/Rules;Z)V", 1 },
};

Class class_mindustry_game_EventType$RulesLoadEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$RulesLoadEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$RulesLoadEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$RulesLoadEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$RulesLoadEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$RulesLoadEvent,
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
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$RulesLoadEvent = registerClass(&class_mindustry_game_EventType$RulesLoadEvent);

}

