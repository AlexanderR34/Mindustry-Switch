#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_21.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_21.h"
#include "mindustry/world/meta/StatValues.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
}

void clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_21:display", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21 *) self;
	SM_mindustry_world_meta_StatValues_lambda$speedBoosters$0_arc_func_Boolf_float_float_java_lang_String_boolean_arc_scene_ui_layout_Table(ctx, (jobject) proxy->F_field0, proxy->F_field1, proxy->F_field2, (jobject) proxy->F_field3, proxy->F_field4, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21[] {
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
	(void *) M_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21_display_arc_scene_ui_layout_Table,
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
	{ "field0", &class_arc_func_Boolf, offsetof(mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21, F_field0), "Larc/func/Boolf;", 0 },
	{ "field1", &class_float, offsetof(mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21, F_field1), "F", 0 },
	{ "field2", &class_float, offsetof(mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21, F_field2), "F", 0 },
	{ "field3", &class_java_lang_String, offsetof(mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21, F_field3), "Ljava/lang/String;", 0 },
	{ "field4", &class_boolean, offsetof(mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21, F_field4), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "display", (intptr_t) M_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21_display_arc_scene_ui_layout_Table, VTABLE_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 0 },
};

Class class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21{
		.nativeName = (intptr_t) "mindustry/world/meta/StatValues_invoke_mindustry_world_meta_StatValue_21",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21 = registerClass(&class_mindustry_world_meta_StatValues_invoke_mindustry_world_meta_StatValue_21);

}
