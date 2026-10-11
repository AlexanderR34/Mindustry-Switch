#include "mindustry/core/NetServer_TeamAssigner.h"
#include "java/lang/Object.h"
#include "mindustry/core/NetServer_TeamAssigner.h"
#include "mindustry/gen/Player.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/game/Team.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_mindustry_core_NetServer$TeamAssigner(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_NetServer$TeamAssigner *) object;
}

void clinit_mindustry_core_NetServer$TeamAssigner(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_core_NetServer$TeamAssigner[] {
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
	{ "assign", "(Lmindustry/gen/Player;Ljava/lang/Iterable;)Lmindustry/game/Team;" },
};

static MethodMetadata methods[] {
	{ "assign", 0, INDEX_mindustry_core_NetServer$TeamAssigner_assign_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team, "(Lmindustry/gen/Player;Ljava/lang/Iterable;)Lmindustry/game/Team;", 1025 },
};

Class class_mindustry_core_NetServer$TeamAssigner{
		.nativeName = (intptr_t) "mindustry/core/NetServer$TeamAssigner",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_NetServer$TeamAssigner),
		.classVtable = (intptr_t) vtable_mindustry_core_NetServer$TeamAssigner,
		.staticInitializer = (intptr_t) clinit_mindustry_core_NetServer$TeamAssigner,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_NetServer$TeamAssigner,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_core_NetServer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_NetServer$TeamAssigner = registerClass(&class_mindustry_core_NetServer$TeamAssigner);

}

