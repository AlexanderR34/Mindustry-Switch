#include "arc/util/serialization/Json_Serializer.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Json_Serializer.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_util_serialization_Json$Serializer(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_Json$Serializer *) object;
}

void clinit_arc_util_serialization_Json$Serializer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_arc_util_serialization_Json$Serializer[] {
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
	{ "write", "(Larc/util/serialization/Json;Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;" },
};

static MethodMetadata methods[] {
	{ "write", 0, INDEX_arc_util_serialization_Json$Serializer_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, "(Larc/util/serialization/Json;Ljava/lang/Object;Ljava/lang/Class;)V", 1025 },
	{ "read", 0, INDEX_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 1025 },
};

Class class_arc_util_serialization_Json$Serializer{
		.nativeName = (intptr_t) "arc/util/serialization/Json$Serializer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Json$Serializer),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Json$Serializer,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Json$Serializer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Json$Serializer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_Json,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Json$Serializer = registerClass(&class_arc_util_serialization_Json$Serializer);

}

