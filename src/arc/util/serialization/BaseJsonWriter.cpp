#include "arc/util/serialization/BaseJsonWriter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/BaseJsonWriter.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/Closeable.h"
#include "arc/util/serialization/JsonWriter_OutputType.h"

extern "C" {


void mark_arc_util_serialization_BaseJsonWriter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_BaseJsonWriter *) object;
}

void clinit_arc_util_serialization_BaseJsonWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_arc_util_serialization_BaseJsonWriter[] {
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
	{ "close", "()V" },
	{ "setOutputType", "(Larc/util/serialization/JsonWriter$OutputType;)V" },
	{ "setQuoteLongValues", "(Z)V" },
	{ "name", "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;" },
	{ "object", "()Larc/util/serialization/BaseJsonWriter;" },
	{ "array", "()Larc/util/serialization/BaseJsonWriter;" },
	{ "value", "(Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;" },
	{ "object", "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;" },
	{ "array", "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;" },
	{ "set", "(Ljava/lang/String;Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;" },
	{ "pop", "()Larc/util/serialization/BaseJsonWriter;" },
};

static jclass interfaces[] { &class_java_io_Closeable, };

static MethodMetadata methods[] {
	{ "setOutputType", 0, INDEX_arc_util_serialization_BaseJsonWriter_setOutputType_arc_util_serialization_JsonWriter$OutputType, "(Larc/util/serialization/JsonWriter$OutputType;)V", 1025 },
	{ "setQuoteLongValues", 0, INDEX_arc_util_serialization_BaseJsonWriter_setQuoteLongValues_boolean, "(Z)V", 1025 },
	{ "name", 0, INDEX_arc_util_serialization_BaseJsonWriter_name_java_lang_String_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;", 1025 },
	{ "object", 0, INDEX_arc_util_serialization_BaseJsonWriter_object_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 1025 },
	{ "array", 0, INDEX_arc_util_serialization_BaseJsonWriter_array_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 1025 },
	{ "value", 0, INDEX_arc_util_serialization_BaseJsonWriter_value_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;", 1025 },
	{ "object", 0, INDEX_arc_util_serialization_BaseJsonWriter_object_java_lang_String_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;", 1025 },
	{ "array", 0, INDEX_arc_util_serialization_BaseJsonWriter_array_java_lang_String_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;)Larc/util/serialization/BaseJsonWriter;", 1025 },
	{ "set", 0, INDEX_arc_util_serialization_BaseJsonWriter_set_java_lang_String_java_lang_Object_R_arc_util_serialization_BaseJsonWriter, "(Ljava/lang/String;Ljava/lang/Object;)Larc/util/serialization/BaseJsonWriter;", 1025 },
	{ "pop", 0, INDEX_arc_util_serialization_BaseJsonWriter_pop_R_arc_util_serialization_BaseJsonWriter, "()Larc/util/serialization/BaseJsonWriter;", 1025 },
};

Class class_arc_util_serialization_BaseJsonWriter{
		.nativeName = (intptr_t) "arc/util/serialization/BaseJsonWriter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_BaseJsonWriter),
		.classVtable = (intptr_t) vtable_arc_util_serialization_BaseJsonWriter,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_BaseJsonWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_BaseJsonWriter,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_BaseJsonWriter = registerClass(&class_arc_util_serialization_BaseJsonWriter);

}
