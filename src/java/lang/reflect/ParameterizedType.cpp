#include "java/lang/reflect/ParameterizedType.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/ParameterizedType.h"
#include "java/lang/reflect/Type.h"

extern "C" {


void mark_java_lang_reflect_ParameterizedType(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_ParameterizedType *) object;
}

void clinit_java_lang_reflect_ParameterizedType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_lang_reflect_ParameterizedType[] {
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
	{ "getActualTypeArguments", "()[Ljava/lang/reflect/Type;" },
	{ "getRawType", "()Ljava/lang/reflect/Type;" },
	{ "getOwnerType", "()Ljava/lang/reflect/Type;" },
};

static jclass interfaces[] { &class_java_lang_reflect_Type, };

static MethodMetadata methods[] {
	{ "getActualTypeArguments", 0, INDEX_java_lang_reflect_ParameterizedType_getActualTypeArguments_R_Array1_java_lang_reflect_Type, "()[Ljava/lang/reflect/Type;", 1025 },
	{ "getRawType", 0, INDEX_java_lang_reflect_ParameterizedType_getRawType_R_java_lang_reflect_Type, "()Ljava/lang/reflect/Type;", 1025 },
	{ "getOwnerType", 0, INDEX_java_lang_reflect_ParameterizedType_getOwnerType_R_java_lang_reflect_Type, "()Ljava/lang/reflect/Type;", 1025 },
};

Class class_java_lang_reflect_ParameterizedType{
		.nativeName = (intptr_t) "java/lang/reflect/ParameterizedType",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_ParameterizedType),
		.classVtable = (intptr_t) vtable_java_lang_reflect_ParameterizedType,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_ParameterizedType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_ParameterizedType,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_ParameterizedType = registerClass(&class_java_lang_reflect_ParameterizedType);

}
