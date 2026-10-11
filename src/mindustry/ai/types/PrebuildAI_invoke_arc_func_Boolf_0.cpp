#include "mindustry/ai/types/PrebuildAI_invoke_arc_func_Boolf_0.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "java/lang/Object.h"
#include "mindustry/ai/types/PrebuildAI_invoke_arc_func_Boolf_0.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/ai/types/PrebuildAI.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
}

void clinit_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0_get_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI_invoke_arc_func_Boolf_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0 *) self;
	auto object = ((func_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_game_Teams$TeamData_mindustry_game_Teams$BlockPlan_R_boolean) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_game_Teams$TeamData_mindustry_game_Teams$BlockPlan_R_boolean])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0[] {
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
	(void *) M_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0_get_java_lang_Object_R_boolean,
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
	{ "get", "(Ljava/lang/Object;)Z" },
};

static jclass interfaces[] { &class_arc_func_Boolf, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_ai_types_PrebuildAI, offsetof(mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0, F_field0), "Lmindustry/ai/types/PrebuildAI;", 0 },
	{ "field1", &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, offsetof(mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0, F_field1), "Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 0 },
	{ "field2", &class_mindustry_game_Teams$TeamData, offsetof(mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0, F_field2), "Lmindustry/game/Teams$TeamData;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0_get_java_lang_Object_R_boolean, VTABLE_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0_get_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 0 },
};

Class class_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0{
		.nativeName = (intptr_t) "mindustry/ai/types/PrebuildAI_invoke_arc_func_Boolf_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0 = registerClass(&class_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_0);

}
