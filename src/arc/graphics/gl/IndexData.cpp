#include "arc/graphics/gl/IndexData.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/nio/ShortBuffer.h"
#include "arc/graphics/gl/IndexData.h"

extern "C" {


void mark_arc_graphics_gl_IndexData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_IndexData *) object;
}

void clinit_arc_graphics_gl_IndexData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_arc_graphics_gl_IndexData[] {
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
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "size", "()I" },
	{ "max", "()I" },
	{ "set", "([SII)V" },
	{ "set", "(Ljava/nio/ShortBuffer;)V" },
	{ "update", "(I[SII)V" },
	{ "buffer", "()Ljava/nio/ShortBuffer;" },
	{ "bind", "()V" },
	{ "unbind", "()V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static MethodMetadata methods[] {
	{ "size", 0, INDEX_arc_graphics_gl_IndexData_size_R_int, "()I", 1025 },
	{ "max", 0, INDEX_arc_graphics_gl_IndexData_max_R_int, "()I", 1025 },
	{ "set", 0, INDEX_arc_graphics_gl_IndexData_set_Array1_short_int_int, "([SII)V", 1025 },
	{ "set", 0, INDEX_arc_graphics_gl_IndexData_set_java_nio_ShortBuffer, "(Ljava/nio/ShortBuffer;)V", 1025 },
	{ "update", 0, INDEX_arc_graphics_gl_IndexData_update_int_Array1_short_int_int, "(I[SII)V", 1025 },
	{ "buffer", 0, INDEX_arc_graphics_gl_IndexData_buffer_R_java_nio_ShortBuffer, "()Ljava/nio/ShortBuffer;", 1025 },
	{ "bind", 0, INDEX_arc_graphics_gl_IndexData_bind, "()V", 1025 },
	{ "unbind", 0, INDEX_arc_graphics_gl_IndexData_unbind, "()V", 1025 },
	{ "dispose", 0, INDEX_arc_graphics_gl_IndexData_dispose, "()V", 1025 },
};

Class class_arc_graphics_gl_IndexData{
		.nativeName = (intptr_t) "arc/graphics/gl/IndexData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_IndexData),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_IndexData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_IndexData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_IndexData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_IndexData = registerClass(&class_arc_graphics_gl_IndexData);

}
