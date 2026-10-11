#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_1.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_1.h"
#include "mindustry/ui/IntFormat.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "arc/scene/ui/layout/Cell.h"

extern "C" {


void mark_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1 *) object;
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
	if (self->F_field5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field5)->clazz)->markFunction)((jobject) self->F_field5, mark, depth + 1);
	if (self->F_field6)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field6)->clazz)->markFunction)((jobject) self->F_field6, mark, depth + 1);
	if (self->F_field7)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field7)->clazz)->markFunction)((jobject) self->F_field7, mark, depth + 1);
	if (self->F_field8)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field8)->clazz)->markFunction)((jobject) self->F_field8, mark, depth + 1);
	if (self->F_field9)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field9)->clazz)->markFunction)((jobject) self->F_field9, mark, depth + 1);
	if (self->F_field10)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field10)->clazz)->markFunction)((jobject) self->F_field10, mark, depth + 1);
	if (self->F_field11)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field11)->clazz)->markFunction)((jobject) self->F_field11, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_1:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1 *) self;
	auto object = ((func_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$13_Array1_boolean_Array1_arc_scene_ui_layout_Cell_arc_scene_ui_layout_Table_java_lang_StringBuilder_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_R_java_lang_CharSequence) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_lambda$makeStatusTable$13_Array1_boolean_Array1_arc_scene_ui_layout_Cell_arc_scene_ui_layout_Table_java_lang_StringBuilder_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_mindustry_ui_IntFormat_R_java_lang_CharSequence])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, (jobject) proxy->F_field4, (jobject) proxy->F_field5, (jobject) proxy->F_field6, (jobject) proxy->F_field7, (jobject) proxy->F_field8, (jobject) proxy->F_field9, (jobject) proxy->F_field10, (jobject) proxy->F_field11);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1[] {
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
	(void *) M_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1_get_R_java_lang_Object,
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
	{ "get", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_arc_func_Prov, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_ui_fragments_HudFragment, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field0), "Lmindustry/ui/fragments/HudFragment;", 0 },
	{ "field1", getArrayClass(&class_boolean, 1), offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field1), "[Z", 0 },
	{ "field2", getArrayClass(&class_arc_scene_ui_layout_Cell, 1), offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field2), "[Larc/scene/ui/layout/Cell;", 0 },
	{ "field3", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field3), "Larc/scene/ui/layout/Table;", 0 },
	{ "field4", &class_java_lang_StringBuilder, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field4), "Ljava/lang/StringBuilder;", 0 },
	{ "field5", &class_mindustry_ui_IntFormat, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field5), "Lmindustry/ui/IntFormat;", 0 },
	{ "field6", &class_mindustry_ui_IntFormat, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field6), "Lmindustry/ui/IntFormat;", 0 },
	{ "field7", &class_mindustry_ui_IntFormat, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field7), "Lmindustry/ui/IntFormat;", 0 },
	{ "field8", &class_mindustry_ui_IntFormat, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field8), "Lmindustry/ui/IntFormat;", 0 },
	{ "field9", &class_mindustry_ui_IntFormat, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field9), "Lmindustry/ui/IntFormat;", 0 },
	{ "field10", &class_mindustry_ui_IntFormat, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field10), "Lmindustry/ui/IntFormat;", 0 },
	{ "field11", &class_mindustry_ui_IntFormat, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1, F_field11), "Lmindustry/ui/IntFormat;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1_get_R_java_lang_Object, VTABLE_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1_get_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
};

Class class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1{
		.nativeName = (intptr_t) "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1 = registerClass(&class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_1);

}
