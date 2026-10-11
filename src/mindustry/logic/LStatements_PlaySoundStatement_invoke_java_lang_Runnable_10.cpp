#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_10.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_invoke_java_lang_Runnable_10.h"
#include "mindustry/logic/LStatements_PlaySoundStatement.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10 *) object;
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
}

void clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10 *) self;
	((func_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$3_arc_scene_ui_layout_Table_Array1_java_lang_String_arc_struct_Seq_arc_struct_ObjectMap_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_logic_LStatements$PlaySoundStatement_lambda$showSoundSelect$3_arc_scene_ui_layout_Table_Array1_java_lang_String_arc_struct_Seq_arc_struct_ObjectMap_arc_scene_ui_layout_Table_java_lang_Runnable_java_lang_String])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, (jobject) proxy->F_field4, (jobject) proxy->F_field5, (jobject) proxy->F_field6, (jobject) proxy->F_field7);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10[] {
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
	(void *) M_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10_run,
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
	{ "field0", &class_mindustry_logic_LStatements$PlaySoundStatement, offsetof(mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10, F_field0), "Lmindustry/logic/LStatements$PlaySoundStatement;", 0 },
	{ "field1", &class_arc_scene_ui_layout_Table, offsetof(mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10, F_field1), "Larc/scene/ui/layout/Table;", 0 },
	{ "field2", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10, F_field2), "[Ljava/lang/String;", 0 },
	{ "field3", &class_arc_struct_Seq, offsetof(mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10, F_field3), "Larc/struct/Seq;", 0 },
	{ "field4", &class_arc_struct_ObjectMap, offsetof(mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10, F_field4), "Larc/struct/ObjectMap;", 0 },
	{ "field5", &class_arc_scene_ui_layout_Table, offsetof(mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10, F_field5), "Larc/scene/ui/layout/Table;", 0 },
	{ "field6", &class_java_lang_Runnable, offsetof(mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10, F_field6), "Ljava/lang/Runnable;", 0 },
	{ "field7", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10, F_field7), "Ljava/lang/String;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10_run, VTABLE_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10_run, "()V", 0 },
};

Class class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10 = registerClass(&class_mindustry_logic_LStatements$PlaySoundStatement_invoke_java_lang_Runnable_10);

}

