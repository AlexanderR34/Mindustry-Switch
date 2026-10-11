#include "java/lang/reflect/GenericArrayType.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/GenericArrayType.h"
#include "java/lang/reflect/Type.h"

extern "C" {


void mark_java_lang_reflect_GenericArrayType(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_GenericArrayType *) object;
}

void clinit_java_lang_reflect_GenericArrayType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_lang_reflect_GenericArrayType[] {
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
	{ "getGenericComponentType", "()Ljava/lang/reflect/Type;" },
};

static jclass interfaces[] { &class_java_lang_reflect_Type, };

static MethodMetadata methods[] {
	{ "getGenericComponentType", 0, INDEX_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type, "()Ljava/lang/reflect/Type;", 1025 },
};

Class class_java_lang_reflect_GenericArrayType{
		.nativeName = (intptr_t) "java/lang/reflect/GenericArrayType",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_GenericArrayType),
		.classVtable = (intptr_t) vtable_java_lang_reflect_GenericArrayType,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_GenericArrayType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_GenericArrayType,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_GenericArrayType = registerClass(&class_java_lang_reflect_GenericArrayType);

}
