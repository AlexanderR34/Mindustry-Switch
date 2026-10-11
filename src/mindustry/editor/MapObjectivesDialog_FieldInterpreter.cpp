#include "mindustry/editor/MapObjectivesDialog_FieldInterpreter.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Prov.h"
#include "mindustry/editor/MapObjectivesDialog_FieldInterpreter.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/editor/MapObjectivesDialog.h"
#include "mindustry/editor/MapObjectivesDialog_TypeInfo.h"
#include "arc/func/Boolc.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_editor_MapObjectivesDialog$FieldInterpreter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapObjectivesDialog$FieldInterpreter *) object;
}

void clinit_mindustry_editor_MapObjectivesDialog$FieldInterpreter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_editor_MapObjectivesDialog$FieldInterpreter[] {
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
	(void *) nullptr,
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
	{ "build", "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V" },
};

static MethodMetadata methods[] {
	{ "build", 0, INDEX_mindustry_editor_MapObjectivesDialog$FieldInterpreter_build_arc_scene_ui_layout_Table_java_lang_CharSequence_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field_java_lang_Runnable_arc_func_Boolc_arc_func_Prov_arc_func_Cons, "(Larc/scene/ui/layout/Table;Ljava/lang/CharSequence;Lmindustry/editor/MapObjectivesDialog$TypeInfo;Ljava/lang/reflect/Field;Ljava/lang/Runnable;Larc/func/Boolc;Larc/func/Prov;Larc/func/Cons;)V", 1025 },
};

Class class_mindustry_editor_MapObjectivesDialog$FieldInterpreter{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesDialog$FieldInterpreter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_MapObjectivesDialog$FieldInterpreter),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesDialog$FieldInterpreter,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesDialog$FieldInterpreter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesDialog$FieldInterpreter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_editor_MapObjectivesDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesDialog$FieldInterpreter = registerClass(&class_mindustry_editor_MapObjectivesDialog$FieldInterpreter);

}

