#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_15.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_15.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_15:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15 *) self;
	((func_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$18_Array1_java_lang_Runnable) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_lambda$showAllTags$18_Array1_java_lang_Runnable])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15[] {
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
	(void *) M_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15_run,
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
	{ "field0", &class_mindustry_ui_dialogs_SchematicsDialog, offsetof(mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15, F_field0), "Lmindustry/ui/dialogs/SchematicsDialog;", 0 },
	{ "field1", getArrayClass(&class_java_lang_Runnable, 1), offsetof(mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15, F_field1), "[Ljava/lang/Runnable;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15_run, VTABLE_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15_run, "()V", 0 },
};

Class class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SchematicsDialog_invoke_java_lang_Runnable_15",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15 = registerClass(&class_mindustry_ui_dialogs_SchematicsDialog_invoke_java_lang_Runnable_15);

}
