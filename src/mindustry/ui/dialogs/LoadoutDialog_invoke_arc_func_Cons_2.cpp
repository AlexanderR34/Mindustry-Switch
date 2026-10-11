#include "mindustry/ui/dialogs/LoadoutDialog_invoke_arc_func_Cons_2.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/LoadoutDialog.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/LoadoutDialog_invoke_arc_func_Cons_2.h"

extern "C" {


void mark_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2_get_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ui/dialogs/LoadoutDialog_invoke_arc_func_Cons_2:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2 *) self;
	((func_mindustry_ui_dialogs_LoadoutDialog_lambda$setup$0_mindustry_type_ItemStack_float_arc_scene_ui_layout_Table) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_ui_dialogs_LoadoutDialog_lambda$setup$0_mindustry_type_ItemStack_float_arc_scene_ui_layout_Table])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, proxy->F_field2, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2[] {
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
	(void *) M_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2_get_java_lang_Object,
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
	{ "field0", &class_mindustry_ui_dialogs_LoadoutDialog, offsetof(mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2, F_field0), "Lmindustry/ui/dialogs/LoadoutDialog;", 0 },
	{ "field1", &class_mindustry_type_ItemStack, offsetof(mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2, F_field1), "Lmindustry/type/ItemStack;", 0 },
	{ "field2", &class_float, offsetof(mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2, F_field2), "F", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2_get_java_lang_Object, VTABLE_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2_get_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
};

Class class_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/LoadoutDialog_invoke_arc_func_Cons_2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2,
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
static bool registered_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2 = registerClass(&class_mindustry_ui_dialogs_LoadoutDialog_invoke_arc_func_Cons_2);

}
