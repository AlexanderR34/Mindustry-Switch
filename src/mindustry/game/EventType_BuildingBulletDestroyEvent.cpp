#include "mindustry/game/EventType_BuildingBulletDestroyEvent.h"
#include "mindustry/game/EventType_BuildingBulletDestroyEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_game_EventType$BuildingBulletDestroyEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$BuildingBulletDestroyEvent *) object;
	if (self->F_build)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_build)->clazz)->markFunction)((jobject) self->F_build, mark, depth + 1);
	if (self->F_bullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bullet)->clazz)->markFunction)((jobject) self->F_bullet, mark, depth + 1);
}

void clinit_mindustry_game_EventType$BuildingBulletDestroyEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$BuildingBulletDestroyEvent_mindustry_gen_Building_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$BuildingBulletDestroyEvent:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$BuildingBulletDestroyEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(640);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(641);
	((mindustry_game_EventType$BuildingBulletDestroyEvent *) NULL_CHECK((frame[0].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(642);
	((mindustry_game_EventType$BuildingBulletDestroyEvent *) NULL_CHECK((frame[0].o)))->F_bullet = (jref) (frame[2].o);
	LINE_NUMBER(643);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_EventType$BuildingBulletDestroyEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$BuildingBulletDestroyEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$BuildingBulletDestroyEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(645);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$BuildingBulletDestroyEvent[] {
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
	{ "build", &class_mindustry_gen_Building, offsetof(mindustry_game_EventType$BuildingBulletDestroyEvent, F_build), "Lmindustry/gen/Building;", 1 },
	{ "bullet", &class_mindustry_gen_Bullet, offsetof(mindustry_game_EventType$BuildingBulletDestroyEvent, F_bullet), "Lmindustry/gen/Bullet;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$BuildingBulletDestroyEvent_mindustry_gen_Building_mindustry_gen_Bullet, 0, "(Lmindustry/gen/Building;Lmindustry/gen/Bullet;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_EventType$BuildingBulletDestroyEvent, 0, "()V", 1 },
};

Class class_mindustry_game_EventType$BuildingBulletDestroyEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$BuildingBulletDestroyEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$BuildingBulletDestroyEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$BuildingBulletDestroyEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$BuildingBulletDestroyEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$BuildingBulletDestroyEvent,
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
static bool registered_mindustry_game_EventType$BuildingBulletDestroyEvent = registerClass(&class_mindustry_game_EventType$BuildingBulletDestroyEvent);

}

