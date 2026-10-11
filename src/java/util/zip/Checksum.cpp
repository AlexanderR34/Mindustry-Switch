#include "java/util/zip/Checksum.h"
#include "java/lang/Object.h"
#include "java/util/zip/Checksum.h"

extern "C" {


void mark_java_util_zip_Checksum(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_Checksum *) object;
}

void clinit_java_util_zip_Checksum(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_zip_Checksum[] {
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
	{ "update", "(I)V" },
	{ "update", "([BII)V" },
	{ "getValue", "()J" },
	{ "reset", "()V" },
};

static MethodMetadata methods[] {
	{ "update", 0, INDEX_java_util_zip_Checksum_update_int, "(I)V", 1025 },
	{ "update", 0, INDEX_java_util_zip_Checksum_update_Array1_byte_int_int, "([BII)V", 1025 },
	{ "getValue", 0, INDEX_java_util_zip_Checksum_getValue_R_long, "()J", 1025 },
	{ "reset", 0, INDEX_java_util_zip_Checksum_reset, "()V", 1025 },
};

Class class_java_util_zip_Checksum{
		.nativeName = (intptr_t) "java/util/zip/Checksum",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_zip_Checksum),
		.classVtable = (intptr_t) vtable_java_util_zip_Checksum,
		.staticInitializer = (intptr_t) clinit_java_util_zip_Checksum,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_Checksum,
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
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_Checksum = registerClass(&class_java_util_zip_Checksum);

}
