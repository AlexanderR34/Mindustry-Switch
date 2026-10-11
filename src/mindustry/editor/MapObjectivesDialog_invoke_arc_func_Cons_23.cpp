#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_23.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/editor/MapObjectivesDialog.h"
#include "arc/func/Boolc.h"
#include "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_23.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
}

void clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23_get_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_23:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23 *) self;
	SM_mindustry_editor_MapObjectivesDialog_lambda$static$71_arc_func_Prov_arc_scene_ui_layout_Table_java_lang_CharSequence_java_lang_Runnable_arc_func_Boolc_arc_scene_ui_layout_Table(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, (jobject) proxy->F_field4, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23[] {
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
	(void *) M_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23_get_java_lang_Object,
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
	{ "get", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_arc_func_Cons, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_func_Prov, offsetof(mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23, F_field0), "Larc/func/Prov;", 0 },
	{ "field1", &class_arc_scene_ui_layout_Table, offsetof(mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23, F_field1), "Larc/scene/ui/layout/Table;", 0 },
	{ "field2", &class_java_lang_CharSequence, offsetof(mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23, F_field2), "Ljava/lang/CharSequence;", 0 },
	{ "field3", &class_java_lang_Runnable, offsetof(mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23, F_field3), "Ljava/lang/Runnable;", 0 },
	{ "field4", &class_arc_func_Boolc, offsetof(mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23, F_field4), "Larc/func/Boolc;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23_get_java_lang_Object, VTABLE_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23_get_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
};

Class class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesDialog_invoke_arc_func_Cons_23",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23,
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
static bool registered_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23 = registerClass(&class_mindustry_editor_MapObjectivesDialog_invoke_arc_func_Cons_23);

}
