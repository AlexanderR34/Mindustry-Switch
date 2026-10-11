#include "mindustry/logic/Controllable.h"
#include "java/lang/Object.h"
#include "mindustry/logic/Controllable.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_logic_Controllable(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_Controllable *) object;
}

void clinit_mindustry_logic_Controllable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_logic_Controllable[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "team", "()Lmindustry/game/Team;" },
};

static MethodMetadata methods[] {
	{ "control", 0, INDEX_mindustry_logic_Controllable_control_mindustry_logic_LAccess_double_double_double_double, "(Lmindustry/logic/LAccess;DDDD)V", 1025 },
	{ "control", 0, INDEX_mindustry_logic_Controllable_control_mindustry_logic_LAccess_java_lang_Object_double_double_double, "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V", 1025 },
	{ "team", 0, INDEX_mindustry_logic_Controllable_team_R_mindustry_game_Team, "()Lmindustry/game/Team;", 1025 },
};

Class class_mindustry_logic_Controllable{
		.nativeName = (intptr_t) "mindustry/logic/Controllable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_Controllable),
		.classVtable = (intptr_t) vtable_mindustry_logic_Controllable,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_Controllable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_Controllable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_Controllable = registerClass(&class_mindustry_logic_Controllable);

}
