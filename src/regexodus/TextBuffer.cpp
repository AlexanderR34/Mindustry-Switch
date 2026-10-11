#include "regexodus/TextBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "regexodus/TextBuffer.h"

extern "C" {


void mark_regexodus_TextBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_TextBuffer *) object;
}

void clinit_regexodus_TextBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_regexodus_TextBuffer[] {
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
	{ "append", "(C)V" },
	{ "append", "([CII)V" },
	{ "append", "(Ljava/lang/String;)V" },
};

static MethodMetadata methods[] {
	{ "append", 0, INDEX_regexodus_TextBuffer_append_char, "(C)V", 1025 },
	{ "append", 0, INDEX_regexodus_TextBuffer_append_Array1_char_int_int, "([CII)V", 1025 },
	{ "append", 0, INDEX_regexodus_TextBuffer_append_java_lang_String, "(Ljava/lang/String;)V", 1025 },
};

Class class_regexodus_TextBuffer{
		.nativeName = (intptr_t) "regexodus/TextBuffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_TextBuffer),
		.classVtable = (intptr_t) vtable_regexodus_TextBuffer,
		.staticInitializer = (intptr_t) clinit_regexodus_TextBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_TextBuffer,
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
static bool registered_regexodus_TextBuffer = registerClass(&class_regexodus_TextBuffer);

}
