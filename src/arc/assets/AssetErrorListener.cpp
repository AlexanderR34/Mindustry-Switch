#include "arc/assets/AssetErrorListener.h"
#include "arc/assets/AssetDescriptor.h"
#include "java/lang/Object.h"
#include "arc/assets/AssetErrorListener.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_assets_AssetErrorListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_AssetErrorListener *) object;
}

void clinit_arc_assets_AssetErrorListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_arc_assets_AssetErrorListener[] {
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
	{ "error", "(Larc/assets/AssetDescriptor;Ljava/lang/Throwable;)V" },
};

static MethodMetadata methods[] {
	{ "error", 0, INDEX_arc_assets_AssetErrorListener_error_arc_assets_AssetDescriptor_java_lang_Throwable, "(Larc/assets/AssetDescriptor;Ljava/lang/Throwable;)V", 1025 },
};

Class class_arc_assets_AssetErrorListener{
		.nativeName = (intptr_t) "arc/assets/AssetErrorListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_assets_AssetErrorListener),
		.classVtable = (intptr_t) vtable_arc_assets_AssetErrorListener,
		.staticInitializer = (intptr_t) clinit_arc_assets_AssetErrorListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_AssetErrorListener,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_AssetErrorListener = registerClass(&class_arc_assets_AssetErrorListener);

}
