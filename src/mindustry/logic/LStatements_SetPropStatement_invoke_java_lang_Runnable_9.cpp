#include "mindustry/logic/LStatements_SetPropStatement_invoke_java_lang_Runnable_9.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/layout/Stack.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LStatements_SetPropStatement_invoke_java_lang_Runnable_9.h"
#include "mindustry/logic/LStatements_SetPropStatement.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/logic/LStatements$SetPropStatement_invoke_java_lang_Runnable_9:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9 *) self;
	((func_mindustry_logic_LStatements$SetPropStatement_lambda$build$13_int_arc_scene_ui_layout_Stack_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_logic_LStatements$SetPropStatement_lambda$build$13_int_arc_scene_ui_layout_Stack_Array1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table])(ctx, (jobject) proxy->F_field0, proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, (jobject) proxy->F_field4);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9[] {
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
	(void *) M_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9_run,
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
	{ "field0", &class_mindustry_logic_LStatements$SetPropStatement, offsetof(mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9, F_field0), "Lmindustry/logic/LStatements$SetPropStatement;", 0 },
	{ "field1", &class_int, offsetof(mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9, F_field1), "I", 0 },
	{ "field2", &class_arc_scene_ui_layout_Stack, offsetof(mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9, F_field2), "Larc/scene/ui/layout/Stack;", 0 },
	{ "field3", getArrayClass(&class_arc_scene_ui_layout_Table, 1), offsetof(mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9, F_field3), "[Larc/scene/ui/layout/Table;", 0 },
	{ "field4", &class_arc_scene_ui_layout_Table, offsetof(mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9, F_field4), "Larc/scene/ui/layout/Table;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9_run, VTABLE_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9_run, "()V", 0 },
};

Class class_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$SetPropStatement_invoke_java_lang_Runnable_9",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9,
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
static bool registered_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9 = registerClass(&class_mindustry_logic_LStatements$SetPropStatement_invoke_java_lang_Runnable_9);

}

