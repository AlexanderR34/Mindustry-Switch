#include "java/text/CharacterIterator.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "java/text/CharacterIterator.h"

extern "C" {

jchar SF_java_text_CharacterIterator_DONE;

void mark_java_text_CharacterIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_text_CharacterIterator *) object;
}

void clinit_java_text_CharacterIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_text_CharacterIterator_DONE = jint(65535);
}

void *vtable_java_text_CharacterIterator[] {
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

static jclass interfaces[] { &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "DONE", &class_char, (intptr_t) &SF_java_text_CharacterIterator_DONE, "C", 25 },
};

static MethodMetadata methods[] {
	{ "first", 0, INDEX_java_text_CharacterIterator_first_R_char, "()C", 1025 },
	{ "last", 0, INDEX_java_text_CharacterIterator_last_R_char, "()C", 1025 },
	{ "current", 0, INDEX_java_text_CharacterIterator_current_R_char, "()C", 1025 },
	{ "next", 0, INDEX_java_text_CharacterIterator_next_R_char, "()C", 1025 },
	{ "previous", 0, INDEX_java_text_CharacterIterator_previous_R_char, "()C", 1025 },
	{ "setIndex", 0, INDEX_java_text_CharacterIterator_setIndex_int_R_char, "(I)C", 1025 },
	{ "getBeginIndex", 0, INDEX_java_text_CharacterIterator_getBeginIndex_R_int, "()I", 1025 },
	{ "getEndIndex", 0, INDEX_java_text_CharacterIterator_getEndIndex_R_int, "()I", 1025 },
	{ "getIndex", 0, INDEX_java_text_CharacterIterator_getIndex_R_int, "()I", 1025 },
	{ "clone", 0, INDEX_java_text_CharacterIterator_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
};

Class class_java_text_CharacterIterator{
		.nativeName = (intptr_t) "java/text/CharacterIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_text_CharacterIterator),
		.classVtable = (intptr_t) vtable_java_text_CharacterIterator,
		.staticInitializer = (intptr_t) clinit_java_text_CharacterIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_CharacterIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_CharacterIterator = registerClass(&class_java_text_CharacterIterator);

}
