#include "regexodus/MatchResult.h"
#include "regexodus/MatchResult.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "regexodus/Pattern.h"
#include "java/lang/String.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/between/MatchResult.h"

extern "C" {

jint SF_regexodus_MatchResult_MATCH;
jint SF_regexodus_MatchResult_PREFIX;
jint SF_regexodus_MatchResult_SUFFIX;
jint SF_regexodus_MatchResult_TARGET;

void mark_regexodus_MatchResult(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_MatchResult *) object;
}

void clinit_regexodus_MatchResult(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_MatchResult_MATCH = jint(0);
	SF_regexodus_MatchResult_PREFIX = jint(-1);
	SF_regexodus_MatchResult_SUFFIX = jint(-2);
	SF_regexodus_MatchResult_TARGET = jint(-3);
}

void *vtable_regexodus_MatchResult[] {
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
	{ "pattern", "()Lregexodus/Pattern;" },
	{ "isCaptured", "()Z" },
	{ "isCaptured", "(I)Z" },
	{ "isCaptured", "(Ljava/lang/String;)Z" },
	{ "getGroup", "(ILjava/lang/StringBuilder;I)Z" },
	{ "getGroup", "(ILregexodus/TextBuffer;I)Z" },
	{ "getGroup", "(ILjava/lang/StringBuilder;)Z" },
	{ "getGroup", "(ILregexodus/TextBuffer;)Z" },
	{ "getGroup", "(Ljava/lang/String;Ljava/lang/StringBuilder;I)Z" },
	{ "getGroup", "(Ljava/lang/String;Lregexodus/TextBuffer;I)Z" },
	{ "getGroup", "(Ljava/lang/String;Ljava/lang/StringBuilder;)Z" },
	{ "getGroup", "(Ljava/lang/String;Lregexodus/TextBuffer;)Z" },
	{ "prefix", "()Ljava/lang/String;" },
	{ "suffix", "()Ljava/lang/String;" },
	{ "target", "()Ljava/lang/String;" },
	{ "targetStart", "()I" },
	{ "targetEnd", "()I" },
	{ "targetChars", "()[C" },
	{ "length", "()I" },
	{ "length", "(I)I" },
	{ "charAt", "(I)C" },
	{ "charAt", "(II)C" },
};

static jclass interfaces[] { &class_regexodus_between_MatchResult, };

static FieldMetadata fields[] {
	{ "MATCH", &class_int, (intptr_t) &SF_regexodus_MatchResult_MATCH, "I", 25 },
	{ "PREFIX", &class_int, (intptr_t) &SF_regexodus_MatchResult_PREFIX, "I", 25 },
	{ "SUFFIX", &class_int, (intptr_t) &SF_regexodus_MatchResult_SUFFIX, "I", 25 },
	{ "TARGET", &class_int, (intptr_t) &SF_regexodus_MatchResult_TARGET, "I", 25 },
};

static MethodMetadata methods[] {
	{ "pattern", 0, INDEX_regexodus_MatchResult_pattern_R_regexodus_Pattern, "()Lregexodus/Pattern;", 1025 },
	{ "groupCount", 0, INDEX_regexodus_MatchResult_groupCount_R_int, "()I", 1025 },
	{ "isCaptured", 0, INDEX_regexodus_MatchResult_isCaptured_R_boolean, "()Z", 1025 },
	{ "isCaptured", 0, INDEX_regexodus_MatchResult_isCaptured_int_R_boolean, "(I)Z", 1025 },
	{ "isCaptured", 0, INDEX_regexodus_MatchResult_isCaptured_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1025 },
	{ "group", 0, INDEX_regexodus_MatchResult_group_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "group", 0, INDEX_regexodus_MatchResult_group_int_R_java_lang_String, "(I)Ljava/lang/String;", 1025 },
	{ "group", 0, INDEX_regexodus_MatchResult_group_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1025 },
	{ "getGroup", 0, INDEX_regexodus_MatchResult_getGroup_int_java_lang_StringBuilder_int_R_boolean, "(ILjava/lang/StringBuilder;I)Z", 1025 },
	{ "getGroup", 0, INDEX_regexodus_MatchResult_getGroup_int_regexodus_TextBuffer_int_R_boolean, "(ILregexodus/TextBuffer;I)Z", 1025 },
	{ "getGroup", 0, INDEX_regexodus_MatchResult_getGroup_int_java_lang_StringBuilder_R_boolean, "(ILjava/lang/StringBuilder;)Z", 1025 },
	{ "getGroup", 0, INDEX_regexodus_MatchResult_getGroup_int_regexodus_TextBuffer_R_boolean, "(ILregexodus/TextBuffer;)Z", 1025 },
	{ "getGroup", 0, INDEX_regexodus_MatchResult_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean, "(Ljava/lang/String;Ljava/lang/StringBuilder;I)Z", 1025 },
	{ "getGroup", 0, INDEX_regexodus_MatchResult_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean, "(Ljava/lang/String;Lregexodus/TextBuffer;I)Z", 1025 },
	{ "getGroup", 0, INDEX_regexodus_MatchResult_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean, "(Ljava/lang/String;Ljava/lang/StringBuilder;)Z", 1025 },
	{ "getGroup", 0, INDEX_regexodus_MatchResult_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean, "(Ljava/lang/String;Lregexodus/TextBuffer;)Z", 1025 },
	{ "prefix", 0, INDEX_regexodus_MatchResult_prefix_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "suffix", 0, INDEX_regexodus_MatchResult_suffix_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "target", 0, INDEX_regexodus_MatchResult_target_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "targetStart", 0, INDEX_regexodus_MatchResult_targetStart_R_int, "()I", 1025 },
	{ "targetEnd", 0, INDEX_regexodus_MatchResult_targetEnd_R_int, "()I", 1025 },
	{ "targetChars", 0, INDEX_regexodus_MatchResult_targetChars_R_Array1_char, "()[C", 1025 },
	{ "start", 0, INDEX_regexodus_MatchResult_start_R_int, "()I", 1025 },
	{ "end", 0, INDEX_regexodus_MatchResult_end_R_int, "()I", 1025 },
	{ "length", 0, INDEX_regexodus_MatchResult_length_R_int, "()I", 1025 },
	{ "start", 0, INDEX_regexodus_MatchResult_start_int_R_int, "(I)I", 1025 },
	{ "end", 0, INDEX_regexodus_MatchResult_end_int_R_int, "(I)I", 1025 },
	{ "length", 0, INDEX_regexodus_MatchResult_length_int_R_int, "(I)I", 1025 },
	{ "charAt", 0, INDEX_regexodus_MatchResult_charAt_int_R_char, "(I)C", 1025 },
	{ "charAt", 0, INDEX_regexodus_MatchResult_charAt_int_int_R_char, "(II)C", 1025 },
};

Class class_regexodus_MatchResult{
		.nativeName = (intptr_t) "regexodus/MatchResult",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_MatchResult),
		.classVtable = (intptr_t) vtable_regexodus_MatchResult,
		.staticInitializer = (intptr_t) clinit_regexodus_MatchResult,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_MatchResult,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_MatchResult = registerClass(&class_regexodus_MatchResult);

}
