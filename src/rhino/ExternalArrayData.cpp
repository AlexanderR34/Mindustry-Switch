#include "rhino/ExternalArrayData.h"
#include "rhino/ExternalArrayData.h"
#include "java/lang/Object.h"

extern "C" {


void mark_rhino_ExternalArrayData(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ExternalArrayData *) object;
}

void clinit_rhino_ExternalArrayData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_ExternalArrayData[] {
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
	{ "getArrayElement", "(I)Ljava/lang/Object;" },
	{ "setArrayElement", "(ILjava/lang/Object;)V" },
	{ "getArrayLength", "()I" },
};

static MethodMetadata methods[] {
	{ "getArrayElement", 0, INDEX_rhino_ExternalArrayData_getArrayElement_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1025 },
	{ "setArrayElement", 0, INDEX_rhino_ExternalArrayData_setArrayElement_int_java_lang_Object, "(ILjava/lang/Object;)V", 1025 },
	{ "getArrayLength", 0, INDEX_rhino_ExternalArrayData_getArrayLength_R_int, "()I", 1025 },
};

Class class_rhino_ExternalArrayData{
		.nativeName = (intptr_t) "rhino/ExternalArrayData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ExternalArrayData),
		.classVtable = (intptr_t) vtable_rhino_ExternalArrayData,
		.staticInitializer = (intptr_t) clinit_rhino_ExternalArrayData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ExternalArrayData,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ExternalArrayData = registerClass(&class_rhino_ExternalArrayData);

}
