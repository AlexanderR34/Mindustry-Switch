#include "java/text/AttributedCharacterIterator.h"
#include "java/lang/Object.h"
#include "java/text/CharacterIterator.h"

extern "C" {


void mark_java_text_AttributedCharacterIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_text_AttributedCharacterIterator *) object;
}

void clinit_java_text_AttributedCharacterIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_text_AttributedCharacterIterator[] {
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
	{ "first", "()C" },
	{ "last", "()C" },
	{ "current", "()C" },
	{ "next", "()C" },
	{ "previous", "()C" },
	{ "setIndex", "(I)C" },
	{ "getBeginIndex", "()I" },
	{ "getEndIndex", "()I" },
	{ "getIndex", "()I" },
};

static jclass interfaces[] { &class_java_text_CharacterIterator, };

Class class_java_text_AttributedCharacterIterator{
		.nativeName = (intptr_t) "java/text/AttributedCharacterIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_text_AttributedCharacterIterator),
		.classVtable = (intptr_t) vtable_java_text_AttributedCharacterIterator,
		.staticInitializer = (intptr_t) clinit_java_text_AttributedCharacterIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_AttributedCharacterIterator,
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
		.methodCount = 0,
		.nativeMethods = (intptr_t) nullptr,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_AttributedCharacterIterator = registerClass(&class_java_text_AttributedCharacterIterator);

}
