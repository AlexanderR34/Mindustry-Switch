#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_31.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_StringProcessor.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog.h"
#include "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog_StringProcessor_31.h"

extern "C" {


void mark_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31 *) object;
}

void clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31_get_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31 *) self;
	auto object = SM_mindustry_ui_dialogs_SettingsMenuDialog_lambda$addSettings$17_int_R_java_lang_String(ctx, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31[] {
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
	(void *) M_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31_get_int_R_java_lang_String,
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
	{ "get", "(I)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor, };

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31_get_int_R_java_lang_String, VTABLE_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31_get_int_R_java_lang_String, "(I)Ljava/lang/String;", 0 },
};

Class class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31 = registerClass(&class_mindustry_ui_dialogs_SettingsMenuDialog_invoke_mindustry_ui_dialogs_SettingsMenuDialog$StringProcessor_31);

}

