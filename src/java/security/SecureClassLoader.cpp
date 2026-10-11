#include "java/security/SecureClassLoader.h"
#include "java/lang/Object.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_java_security_SecureClassLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ClassLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_security_SecureClassLoader *) object;
}

void clinit_java_security_SecureClassLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ClassLoader(ctx);
}

void init_java_security_SecureClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/SecureClassLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_SecureClassLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5);
	init_java_lang_ClassLoader_java_lang_ClassLoader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(6);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_security_SecureClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/SecureClassLoader:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_SecureClassLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_ClassLoader(ctx, (frame[0].o));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_security_SecureClassLoader[] {
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
	(void *) M_java_lang_ClassLoader_getParent_R_java_lang_ClassLoader,
	(void *) M_java_lang_ClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream,
	(void *) M_java_lang_ClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL,
	(void *) M_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration,
	(void *) M_java_lang_ClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_findClass_java_lang_String_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_findSystemClass_java_lang_String_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_resolveClass_java_lang_Class,
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
	{ "getParent", "()Ljava/lang/ClassLoader;" },
	{ "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;" },
	{ "loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;" },
	{ "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;" },
	{ "getResource", "(Ljava/lang/String;)Ljava/net/URL;" },
	{ "getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;" },
	{ "findLoadedClass", "(Ljava/lang/String;)Ljava/lang/Class;" },
	{ "findClass", "(Ljava/lang/String;)Ljava/lang/Class;" },
	{ "findSystemClass", "(Ljava/lang/String;)Ljava/lang/Class;" },
	{ "defineClass", "(Ljava/lang/String;[BII)Ljava/lang/Class;" },
	{ "resolveClass", "(Ljava/lang/Class;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_SecureClassLoader_java_lang_ClassLoader, 0, "(Ljava/lang/ClassLoader;)V", 4 },
	{ "<init>", (intptr_t) init_java_security_SecureClassLoader, 0, "()V", 4 },
};

Class class_java_security_SecureClassLoader{
		.nativeName = (intptr_t) "java/security/SecureClassLoader",
		.parentClass = (intptr_t) &class_java_lang_ClassLoader,
		.size = sizeof(java_security_SecureClassLoader),
		.classVtable = (intptr_t) vtable_java_security_SecureClassLoader,
		.staticInitializer = (intptr_t) clinit_java_security_SecureClassLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_SecureClassLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_SecureClassLoader = registerClass(&class_java_security_SecureClassLoader);

}
