#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_java_lang_Runnable_2.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/logic/LStatements_SetMarkerStatement.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatements_SetMarkerStatement_invoke_java_lang_Runnable_2.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2 *) self;
	((func_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$12_arc_scene_ui_Button_arc_scene_ui_layout_Table) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_logic_LStatements$SetMarkerStatement_lambda$rebuild$12_arc_scene_ui_Button_arc_scene_ui_layout_Table])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2[] {
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
	(void *) M_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2_run,
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
	{ "field0", &class_mindustry_logic_LStatements$SetMarkerStatement, offsetof(mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2, F_field0), "Lmindustry/logic/LStatements$SetMarkerStatement;", 0 },
	{ "field1", &class_arc_scene_ui_Button, offsetof(mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2, F_field1), "Larc/scene/ui/Button;", 0 },
	{ "field2", &class_arc_scene_ui_layout_Table, offsetof(mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2, F_field2), "Larc/scene/ui/layout/Table;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2_run, VTABLE_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2_run, "()V", 0 },
};

Class class_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2,
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
static bool registered_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2 = registerClass(&class_mindustry_logic_LStatements$SetMarkerStatement_invoke_java_lang_Runnable_2);

}

