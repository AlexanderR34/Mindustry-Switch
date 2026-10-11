#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_8.h"
#include "mindustry/logic/RadarTarget_RadarTargetFunc.h"
#include "java/lang/Object.h"
#include "mindustry/logic/RadarTarget.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget_RadarTargetFunc_8.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8 *) object;
}

void clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8 *) self;
	auto object = SM_mindustry_logic_RadarTarget_lambda$static$0_mindustry_game_Team_mindustry_gen_Unit_R_boolean(ctx, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8[] {
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
	(void *) M_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean,
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
	{ "get", "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z" },
};

static jclass interfaces[] { &class_mindustry_logic_RadarTarget$RadarTargetFunc, };

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8_get_mindustry_game_Team_mindustry_gen_Unit_R_boolean, "(Lmindustry/game/Team;Lmindustry/gen/Unit;)Z", 0 },
};

Class class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8{
		.nativeName = (intptr_t) "mindustry/logic/RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8),
		.classVtable = (intptr_t) vtable_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8,
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
static bool registered_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8 = registerClass(&class_mindustry_logic_RadarTarget_invoke_mindustry_logic_RadarTarget$RadarTargetFunc_8);

}

