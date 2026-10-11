#include "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers_MarkerSetter_3.h"
#include "java/lang/Object.h"
#include "mindustry/game/MapMarkers_MarkerSetter.h"
#include "mindustry/game/MapMarkers.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers_MarkerSetter_3.h"

extern "C" {


void mark_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3 *) object;
}

void clinit_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3_set_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3:set", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3 *) self;
	SM_mindustry_game_MapMarkers_lambda$remove$0_mindustry_game_MapObjectives$ObjectiveMarker_int(ctx, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3[] {
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
	(void *) M_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3_set_mindustry_game_MapObjectives$ObjectiveMarker_int,
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
	{ "set", "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V" },
};

static jclass interfaces[] { &class_mindustry_game_MapMarkers$MarkerSetter, };

static MethodMetadata methods[] {
	{ "set", (intptr_t) M_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3_set_mindustry_game_MapObjectives$ObjectiveMarker_int, VTABLE_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3_set_mindustry_game_MapObjectives$ObjectiveMarker_int, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 0 },
};

Class class_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3{
		.nativeName = (intptr_t) "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3),
		.classVtable = (intptr_t) vtable_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3 = registerClass(&class_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_3);

}

