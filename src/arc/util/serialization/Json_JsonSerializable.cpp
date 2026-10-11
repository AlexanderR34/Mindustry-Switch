#include "arc/util/serialization/Json_JsonSerializable.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"

extern "C" {


void mark_arc_util_serialization_Json$JsonSerializable(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_Json$JsonSerializable *) object;
}

void clinit_arc_util_serialization_Json$JsonSerializable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_arc_util_serialization_Json$JsonSerializable[] {
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
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
};

static MethodMetadata methods[] {
	{ "write", 0, INDEX_arc_util_serialization_Json$JsonSerializable_write_arc_util_serialization_Json, "(Larc/util/serialization/Json;)V", 1025 },
	{ "read", 0, INDEX_arc_util_serialization_Json$JsonSerializable_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V", 1025 },
};

Class class_arc_util_serialization_Json$JsonSerializable{
		.nativeName = (intptr_t) "arc/util/serialization/Json$JsonSerializable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Json$JsonSerializable),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Json$JsonSerializable,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Json$JsonSerializable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Json$JsonSerializable,
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
static bool registered_arc_util_serialization_Json$JsonSerializable = registerClass(&class_arc_util_serialization_Json$JsonSerializable);

}

