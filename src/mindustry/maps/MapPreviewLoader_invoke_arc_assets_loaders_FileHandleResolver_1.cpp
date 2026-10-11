#include "mindustry/maps/MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/maps/MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1.h"
#include "arc/Files.h"
#include "arc/files/Fi.h"

extern "C" {


void mark_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1_resolve_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1:resolve", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1 *) self;
	auto object = ((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, (jobject)proxy->F_field0))(ctx, (jobject) proxy->F_field0, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1[] {
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
	(void *) M_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1_resolve_java_lang_String_R_arc_files_Fi,
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
	{ "resolve", "(Ljava/lang/String;)Larc/files/Fi;" },
};

static jclass interfaces[] { &class_arc_assets_loaders_FileHandleResolver, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_Files, offsetof(mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1, F_field0), "Larc/Files;", 0 },
};

static MethodMetadata methods[] {
	{ "resolve", (intptr_t) M_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1_resolve_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1_resolve_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 0 },
};

Class class_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1{
		.nativeName = (intptr_t) "mindustry/maps/MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1),
		.classVtable = (intptr_t) vtable_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1,
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
static bool registered_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1 = registerClass(&class_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1);

}
