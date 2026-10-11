#include "java/net/URLClassLoader.h"
#include "java/net/URLStreamHandlerFactory.h"
#include "java/lang/Object.h"
#include "java/net/URL.h"
#include "java/security/SecureClassLoader.h"
#include "java/io/Closeable.h"
#include "java/net/URLClassLoader.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_java_net_URLClassLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_security_SecureClassLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_net_URLClassLoader *) object;
}

void clinit_java_net_URLClassLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_security_SecureClassLoader(ctx);
}

void init_java_net_URLClassLoader_Array1_java_net_URL_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLClassLoader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLClassLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(9);
	init_java_security_SecureClassLoader_java_lang_ClassLoader(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_URLClassLoader_Array1_java_net_URL(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLClassLoader:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLClassLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	init_java_security_SecureClassLoader(ctx, (frame[0].o));
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_URLClassLoader_Array1_java_net_URL_java_lang_ClassLoader_java_net_URLStreamHandlerFactory(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLClassLoader:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLClassLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(16);
	init_java_security_SecureClassLoader_java_lang_ClassLoader(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_URLClassLoader_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLClassLoader:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_net_URLClassLoader[] {
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
	(void *) M_java_net_URLClassLoader_close,
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
	{ "close", "()V" },
};

static jclass interfaces[] { &class_java_io_Closeable, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_URLClassLoader_Array1_java_net_URL_java_lang_ClassLoader, 0, "([Ljava/net/URL;Ljava/lang/ClassLoader;)V", 1 },
	{ "<init>", (intptr_t) init_java_net_URLClassLoader_Array1_java_net_URL, 0, "([Ljava/net/URL;)V", 1 },
	{ "<init>", (intptr_t) init_java_net_URLClassLoader_Array1_java_net_URL_java_lang_ClassLoader_java_net_URLStreamHandlerFactory, 0, "([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V", 1 },
	{ "close", (intptr_t) M_java_net_URLClassLoader_close, VTABLE_java_net_URLClassLoader_close, "()V", 1 },
};

Class class_java_net_URLClassLoader{
		.nativeName = (intptr_t) "java/net/URLClassLoader",
		.parentClass = (intptr_t) &class_java_security_SecureClassLoader,
		.size = sizeof(java_net_URLClassLoader),
		.classVtable = (intptr_t) vtable_java_net_URLClassLoader,
		.staticInitializer = (intptr_t) clinit_java_net_URLClassLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_URLClassLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_URLClassLoader = registerClass(&class_java_net_URLClassLoader);

}
