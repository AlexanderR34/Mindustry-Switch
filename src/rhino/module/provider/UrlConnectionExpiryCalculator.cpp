#include "rhino/module/provider/UrlConnectionExpiryCalculator.h"
#include "java/lang/Object.h"
#include "rhino/module/provider/UrlConnectionExpiryCalculator.h"
#include "java/net/URLConnection.h"

extern "C" {


void mark_rhino_module_provider_UrlConnectionExpiryCalculator(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_provider_UrlConnectionExpiryCalculator *) object;
}

void clinit_rhino_module_provider_UrlConnectionExpiryCalculator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_module_provider_UrlConnectionExpiryCalculator[] {
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
	{ "calculateExpiry", "(Ljava/net/URLConnection;)J" },
};

static MethodMetadata methods[] {
	{ "calculateExpiry", 0, INDEX_rhino_module_provider_UrlConnectionExpiryCalculator_calculateExpiry_java_net_URLConnection_R_long, "(Ljava/net/URLConnection;)J", 1025 },
};

Class class_rhino_module_provider_UrlConnectionExpiryCalculator{
		.nativeName = (intptr_t) "rhino/module/provider/UrlConnectionExpiryCalculator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_provider_UrlConnectionExpiryCalculator),
		.classVtable = (intptr_t) vtable_rhino_module_provider_UrlConnectionExpiryCalculator,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_UrlConnectionExpiryCalculator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_UrlConnectionExpiryCalculator,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_UrlConnectionExpiryCalculator = registerClass(&class_rhino_module_provider_UrlConnectionExpiryCalculator);

}
