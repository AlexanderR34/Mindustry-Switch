#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_21.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/CustomRulesDialog.h"
#include "arc/func/Boolc.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_21.h"

extern "C" {


void mark_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21_get_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_21:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21 *) self;
	((func_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$79_boolean) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$79_boolean])(ctx, (jobject) proxy->F_field0, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21[] {
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
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21_get_boolean,
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
	{ "get", "(Z)V" },
};

static jclass interfaces[] { &class_arc_func_Boolc, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_ui_dialogs_CustomRulesDialog, offsetof(mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21, F_field0), "Lmindustry/ui/dialogs/CustomRulesDialog;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21_get_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21_get_boolean, "(Z)V", 0 },
};

Class class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_21",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21,
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
static bool registered_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21 = registerClass(&class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_21);

}
