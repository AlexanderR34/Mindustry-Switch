#include "mindustry/game/Objectives.h"
#include "mindustry/game/Objectives_OnSector.h"
#include "mindustry/game/Objectives_Research.h"
#include "java/lang/Object.h"
#include "mindustry/game/Objectives_OnPlanet.h"
#include "mindustry/game/Objectives_SectorComplete.h"
#include "mindustry/game/Objectives_Objective.h"
#include "mindustry/game/Objectives_Produce.h"

extern "C" {


void mark_mindustry_game_Objectives(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Objectives *) object;
}

void clinit_mindustry_game_Objectives(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Objectives(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Objectives(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Objectives[] {
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

static jclass innerClasses[] {
	&class_mindustry_game_Objectives$Objective,
	&class_mindustry_game_Objectives$OnPlanet,
	&class_mindustry_game_Objectives$OnSector,
	&class_mindustry_game_Objectives$SectorComplete,
	&class_mindustry_game_Objectives$Produce,
	&class_mindustry_game_Objectives$Research,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Objectives, 0, "()V", 1 },
};

Class class_mindustry_game_Objectives{
		.nativeName = (intptr_t) "mindustry/game/Objectives",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Objectives),
		.classVtable = (intptr_t) vtable_mindustry_game_Objectives,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Objectives,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Objectives,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 6,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Objectives = registerClass(&class_mindustry_game_Objectives);

}
