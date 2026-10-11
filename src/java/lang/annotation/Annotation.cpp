#include "java/lang/annotation/Annotation.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_lang_annotation_Annotation(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_annotation_Annotation *) object;
}

void clinit_java_lang_annotation_Annotation(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_lang_annotation_Annotation[] {
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
	{ "annotationType", "()Ljava/lang/Class;" },
};

static MethodMetadata methods[] {
	{ "annotationType", 0, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, "()Ljava/lang/Class;", 1025 },
	{ "equals", 0, INDEX_java_lang_annotation_Annotation_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "hashCode", 0, INDEX_java_lang_annotation_Annotation_hashCode_R_int, "()I", 1025 },
	{ "toString", 0, INDEX_java_lang_annotation_Annotation_toString_R_java_lang_String, "()Ljava/lang/String;", 1025 },
};

Class class_java_lang_annotation_Annotation{
		.nativeName = (intptr_t) "java/lang/annotation/Annotation",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_annotation_Annotation),
		.classVtable = (intptr_t) vtable_java_lang_annotation_Annotation,
		.staticInitializer = (intptr_t) clinit_java_lang_annotation_Annotation,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_annotation_Annotation,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_annotation_Annotation = registerClass(&class_java_lang_annotation_Annotation);

}
