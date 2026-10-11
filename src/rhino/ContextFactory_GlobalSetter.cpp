#include "rhino/ContextFactory_GlobalSetter.h"
#include "java/lang/Object.h"
#include "rhino/ContextFactory_GlobalSetter.h"
#include "rhino/ContextFactory.h"

extern "C" {


void mark_rhino_ContextFactory$GlobalSetter(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ContextFactory$GlobalSetter *) object;
}

void clinit_rhino_ContextFactory$GlobalSetter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_ContextFactory$GlobalSetter[] {
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
	{ "setContextFactoryGlobal", "(Lrhino/ContextFactory;)V" },
	{ "getContextFactoryGlobal", "()Lrhino/ContextFactory;" },
};

static MethodMetadata methods[] {
	{ "setContextFactoryGlobal", 0, INDEX_rhino_ContextFactory$GlobalSetter_setContextFactoryGlobal_rhino_ContextFactory, "(Lrhino/ContextFactory;)V", 1025 },
	{ "getContextFactoryGlobal", 0, INDEX_rhino_ContextFactory$GlobalSetter_getContextFactoryGlobal_R_rhino_ContextFactory, "()Lrhino/ContextFactory;", 1025 },
};

Class class_rhino_ContextFactory$GlobalSetter{
		.nativeName = (intptr_t) "rhino/ContextFactory$GlobalSetter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ContextFactory$GlobalSetter),
		.classVtable = (intptr_t) vtable_rhino_ContextFactory$GlobalSetter,
		.staticInitializer = (intptr_t) clinit_rhino_ContextFactory$GlobalSetter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ContextFactory$GlobalSetter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ContextFactory,
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
static bool registered_rhino_ContextFactory$GlobalSetter = registerClass(&class_rhino_ContextFactory$GlobalSetter);

}

