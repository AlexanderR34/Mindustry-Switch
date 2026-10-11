#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_java_lang_CharSequence(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_CharSequence *) object;
}

void clinit_java_lang_CharSequence(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_lang_CharSequence[] {
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
	{ "length", "()I" },
	{ "charAt", "(I)C" },
	{ "subSequence", "(II)Ljava/lang/CharSequence;" },
};

static MethodMetadata methods[] {
	{ "length", 0, INDEX_java_lang_CharSequence_length_R_int, "()I", 1025 },
	{ "charAt", 0, INDEX_java_lang_CharSequence_charAt_int_R_char, "(I)C", 1025 },
	{ "subSequence", 0, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, "(II)Ljava/lang/CharSequence;", 1025 },
	{ "toString", 0, INDEX_java_lang_CharSequence_toString_R_java_lang_String, "()Ljava/lang/String;", 1025 },
};

Class class_java_lang_CharSequence{
		.nativeName = (intptr_t) "java/lang/CharSequence",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_CharSequence),
		.classVtable = (intptr_t) vtable_java_lang_CharSequence,
		.staticInitializer = (intptr_t) clinit_java_lang_CharSequence,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_CharSequence,
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
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_CharSequence = registerClass(&class_java_lang_CharSequence);

}
