#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_37.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_37.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/logic/LogicDialog.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
}

void clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_37:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37 *) self;
	((func_mindustry_logic_LogicDialog_lambda$showAddDialog$9_int_arc_func_Prov_mindustry_ui_dialogs_BaseDialog) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_logic_LogicDialog_lambda$showAddDialog$9_int_arc_func_Prov_mindustry_ui_dialogs_BaseDialog])(ctx, (jobject) proxy->F_field0, proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37[] {
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
	(void *) M_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37_run,
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
	{ "run", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_logic_LogicDialog, offsetof(mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37, F_field0), "Lmindustry/logic/LogicDialog;", 0 },
	{ "field1", &class_int, offsetof(mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37, F_field1), "I", 0 },
	{ "field2", &class_arc_func_Prov, offsetof(mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37, F_field2), "Larc/func/Prov;", 0 },
	{ "field3", &class_mindustry_ui_dialogs_BaseDialog, offsetof(mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37, F_field3), "Lmindustry/ui/dialogs/BaseDialog;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37_run, VTABLE_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37_run, "()V", 0 },
};

Class class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37{
		.nativeName = (intptr_t) "mindustry/logic/LogicDialog_invoke_java_lang_Runnable_37",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37),
		.classVtable = (intptr_t) vtable_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37 = registerClass(&class_mindustry_logic_LogicDialog_invoke_java_lang_Runnable_37);

}
