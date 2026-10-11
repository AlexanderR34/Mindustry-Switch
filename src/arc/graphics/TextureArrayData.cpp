#include "arc/graphics/TextureArrayData.h"
#include "java/lang/Object.h"
#include "arc/graphics/TextureArrayData.h"

extern "C" {


void mark_arc_graphics_TextureArrayData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_TextureArrayData *) object;
}

void clinit_arc_graphics_TextureArrayData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_arc_graphics_TextureArrayData[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "isPrepared", "()Z" },
	{ "prepare", "()V" },
	{ "consumeTextureArrayData", "()V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getDepth", "()I" },
	{ "getInternalFormat", "()I" },
	{ "getGLType", "()I" },
};

static MethodMetadata methods[] {
	{ "isPrepared", 0, INDEX_arc_graphics_TextureArrayData_isPrepared_R_boolean, "()Z", 1025 },
	{ "prepare", 0, INDEX_arc_graphics_TextureArrayData_prepare, "()V", 1025 },
	{ "consumeTextureArrayData", 0, INDEX_arc_graphics_TextureArrayData_consumeTextureArrayData, "()V", 1025 },
	{ "getWidth", 0, INDEX_arc_graphics_TextureArrayData_getWidth_R_int, "()I", 1025 },
	{ "getHeight", 0, INDEX_arc_graphics_TextureArrayData_getHeight_R_int, "()I", 1025 },
	{ "getDepth", 0, INDEX_arc_graphics_TextureArrayData_getDepth_R_int, "()I", 1025 },
	{ "getInternalFormat", 0, INDEX_arc_graphics_TextureArrayData_getInternalFormat_R_int, "()I", 1025 },
	{ "getGLType", 0, INDEX_arc_graphics_TextureArrayData_getGLType_R_int, "()I", 1025 },
};

Class class_arc_graphics_TextureArrayData{
		.nativeName = (intptr_t) "arc/graphics/TextureArrayData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_TextureArrayData),
		.classVtable = (intptr_t) vtable_arc_graphics_TextureArrayData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_TextureArrayData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_TextureArrayData,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_TextureArrayData = registerClass(&class_arc_graphics_TextureArrayData);

}
