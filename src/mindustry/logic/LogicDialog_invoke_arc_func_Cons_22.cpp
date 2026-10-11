#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_22.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LogicDialog_invoke_arc_func_Cons_22.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/logic/LogicDialog.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_22 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
	if (self->F_field5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field5)->clazz)->markFunction)((jobject) self->F_field5, mark, depth + 1);
}

void clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22_get_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/logic/LogicDialog_invoke_arc_func_Cons_22:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_logic_LogicDialog_invoke_arc_func_Cons_22 *) self;
	((func_mindustry_logic_LogicDialog_lambda$showAddDialog$5_Array1_java_lang_Runnable_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_logic_LogicDialog_lambda$showAddDialog$5_Array1_java_lang_Runnable_Array1_java_lang_String_Array1_arc_func_Prov_int_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, proxy->F_field4, (jobject) proxy->F_field5, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22[] {
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
	(void *) M_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22_get_java_lang_Object,
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
	{ "field0", &class_mindustry_logic_LogicDialog, offsetof(mindustry_logic_LogicDialog_invoke_arc_func_Cons_22, F_field0), "Lmindustry/logic/LogicDialog;", 0 },
	{ "field1", getArrayClass(&class_java_lang_Runnable, 1), offsetof(mindustry_logic_LogicDialog_invoke_arc_func_Cons_22, F_field1), "[Ljava/lang/Runnable;", 0 },
	{ "field2", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_logic_LogicDialog_invoke_arc_func_Cons_22, F_field2), "[Ljava/lang/String;", 0 },
	{ "field3", getArrayClass(&class_arc_func_Prov, 1), offsetof(mindustry_logic_LogicDialog_invoke_arc_func_Cons_22, F_field3), "[Larc/func/Prov;", 0 },
	{ "field4", &class_int, offsetof(mindustry_logic_LogicDialog_invoke_arc_func_Cons_22, F_field4), "I", 0 },
	{ "field5", &class_mindustry_ui_dialogs_BaseDialog, offsetof(mindustry_logic_LogicDialog_invoke_arc_func_Cons_22, F_field5), "Lmindustry/ui/dialogs/BaseDialog;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22_get_java_lang_Object, VTABLE_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22_get_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
};

Class class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22{
		.nativeName = (intptr_t) "mindustry/logic/LogicDialog_invoke_arc_func_Cons_22",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LogicDialog_invoke_arc_func_Cons_22),
		.classVtable = (intptr_t) vtable_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22 = registerClass(&class_mindustry_logic_LogicDialog_invoke_arc_func_Cons_22);

}
