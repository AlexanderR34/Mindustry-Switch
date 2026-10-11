#include "mindustry/game/Objectives_Objective.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/game/Objectives.h"
#include "mindustry/game/Objectives_Objective.h"

extern "C" {


void mark_mindustry_game_Objectives$Objective(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Objectives$Objective *) object;
}

void clinit_mindustry_game_Objectives$Objective(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_game_Objectives$Objective_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$Objective:build", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Objectives$Objective[] {
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
	(void *) M_mindustry_game_Objectives$Objective_build_arc_scene_ui_layout_Table,
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
	{ "complete", "()Z" },
	{ "display", "()Ljava/lang/String;" },
	{ "build", "(Larc/scene/ui/layout/Table;)V" },
};

static MethodMetadata methods[] {
	{ "complete", 0, INDEX_mindustry_game_Objectives$Objective_complete_R_boolean, "()Z", 1025 },
	{ "display", 0, INDEX_mindustry_game_Objectives$Objective_display_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "build", (intptr_t) M_mindustry_game_Objectives$Objective_build_arc_scene_ui_layout_Table, INDEX_mindustry_game_Objectives$Objective_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
};

Class class_mindustry_game_Objectives$Objective{
		.nativeName = (intptr_t) "mindustry/game/Objectives$Objective",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Objectives$Objective),
		.classVtable = (intptr_t) vtable_mindustry_game_Objectives$Objective,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Objectives$Objective,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Objectives$Objective,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_Objectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
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
static bool registered_mindustry_game_Objectives$Objective = registerClass(&class_mindustry_game_Objectives$Objective);

}

