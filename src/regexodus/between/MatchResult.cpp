#include "regexodus/between/MatchResult.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "regexodus/between/MatchResult.h"

extern "C" {


void mark_regexodus_between_MatchResult(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_between_MatchResult *) object;
}

void clinit_regexodus_between_MatchResult(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_regexodus_between_MatchResult[] {
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
	{ "start", "()I" },
	{ "start", "(I)I" },
	{ "start", "(Ljava/lang/String;)I" },
	{ "end", "()I" },
	{ "end", "(I)I" },
	{ "end", "(Ljava/lang/String;)I" },
	{ "group", "()Ljava/lang/String;" },
	{ "group", "(I)Ljava/lang/String;" },
	{ "group", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "groupCount", "()I" },
};

static MethodMetadata methods[] {
	{ "start", 0, INDEX_regexodus_between_MatchResult_start_R_int, "()I", 1025 },
	{ "start", 0, INDEX_regexodus_between_MatchResult_start_int_R_int, "(I)I", 1025 },
	{ "start", 0, INDEX_regexodus_between_MatchResult_start_java_lang_String_R_int, "(Ljava/lang/String;)I", 1025 },
	{ "end", 0, INDEX_regexodus_between_MatchResult_end_R_int, "()I", 1025 },
	{ "end", 0, INDEX_regexodus_between_MatchResult_end_int_R_int, "(I)I", 1025 },
	{ "end", 0, INDEX_regexodus_between_MatchResult_end_java_lang_String_R_int, "(Ljava/lang/String;)I", 1025 },
	{ "group", 0, INDEX_regexodus_between_MatchResult_group_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "group", 0, INDEX_regexodus_between_MatchResult_group_int_R_java_lang_String, "(I)Ljava/lang/String;", 1025 },
	{ "group", 0, INDEX_regexodus_between_MatchResult_group_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1025 },
	{ "groupCount", 0, INDEX_regexodus_between_MatchResult_groupCount_R_int, "()I", 1025 },
};

Class class_regexodus_between_MatchResult{
		.nativeName = (intptr_t) "regexodus/between/MatchResult",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_between_MatchResult),
		.classVtable = (intptr_t) vtable_regexodus_between_MatchResult,
		.staticInitializer = (intptr_t) clinit_regexodus_between_MatchResult,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_between_MatchResult,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_between_MatchResult = registerClass(&class_regexodus_between_MatchResult);

}
