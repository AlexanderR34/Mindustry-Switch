#include "mindustry/editor/data/AssetView.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/editor/data/MapAssetsDialog.h"
#include "mindustry/editor/data/AssetView.h"

extern "C" {


void mark_mindustry_editor_data_AssetView(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_data_AssetView *) object;
}

void clinit_mindustry_editor_data_AssetView(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_editor_data_AssetView[] {
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
	{ "build", "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V" },
	{ "buildButtons", "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V" },
};

static MethodMetadata methods[] {
	{ "build", 0, INDEX_mindustry_editor_data_AssetView_build_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1025 },
	{ "buildButtons", 0, INDEX_mindustry_editor_data_AssetView_buildButtons_mindustry_editor_data_MapAssetsDialog_arc_scene_ui_layout_Table, "(Lmindustry/editor/data/MapAssetsDialog;Larc/scene/ui/layout/Table;)V", 1025 },
};

Class class_mindustry_editor_data_AssetView{
		.nativeName = (intptr_t) "mindustry/editor/data/AssetView",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_data_AssetView),
		.classVtable = (intptr_t) vtable_mindustry_editor_data_AssetView,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_data_AssetView,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_data_AssetView,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_data_AssetView = registerClass(&class_mindustry_editor_data_AssetView);

}
