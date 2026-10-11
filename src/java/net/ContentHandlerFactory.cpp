#include "java/net/ContentHandlerFactory.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/ContentHandlerFactory.h"
#include "java/net/ContentHandler.h"

extern "C" {


void mark_java_net_ContentHandlerFactory(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_ContentHandlerFactory *) object;
}

void clinit_java_net_ContentHandlerFactory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_net_ContentHandlerFactory[] {
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
	{ "createContentHandler", "(Ljava/lang/String;)Ljava/net/ContentHandler;" },
};

static MethodMetadata methods[] {
	{ "createContentHandler", 0, INDEX_java_net_ContentHandlerFactory_createContentHandler_java_lang_String_R_java_net_ContentHandler, "(Ljava/lang/String;)Ljava/net/ContentHandler;", 1025 },
};

Class class_java_net_ContentHandlerFactory{
		.nativeName = (intptr_t) "java/net/ContentHandlerFactory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_ContentHandlerFactory),
		.classVtable = (intptr_t) vtable_java_net_ContentHandlerFactory,
		.staticInitializer = (intptr_t) clinit_java_net_ContentHandlerFactory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_ContentHandlerFactory,
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
static bool registered_java_net_ContentHandlerFactory = registerClass(&class_java_net_ContentHandlerFactory);

}
