#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_27.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_27.h"

extern "C" {


void mark_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27 *) object;
}

void clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_27:display", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27 *) self;
	SM_mindustry_world_meta_StatValues_lambda$bool$0_boolean_arc_scene_ui_layout_Table(ctx, proxy->F_field0, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27[] {
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
	(void *) M_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27_display_arc_scene_ui_layout_Table,
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
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
};

static jclass interfaces[] { &class_mindustry_world_meta_StatValue, };

static FieldMetadata fields[] {
	{ "field0", &class_boolean, offsetof(mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27, F_field0), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "display", (intptr_t) M_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27_display_arc_scene_ui_layout_Table, VTABLE_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 0 },
};

Class class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27{
		.nativeName = (intptr_t) "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_27",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27 = registerClass(&class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_27);

}
