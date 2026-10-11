#include "rhino/DefiningClassLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "rhino/DefiningClassLoader.h"
#include "rhino/GeneratedClassLoader.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_rhino_DefiningClassLoader(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_DefiningClassLoader *) object;
	if (self->F_parentLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parentLoader)->clazz)->markFunction)((jobject) self->F_parentLoader, mark, depth + 1);
}

void clinit_rhino_DefiningClassLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ClassLoader(ctx);
}

void init_rhino_DefiningClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefiningClassLoader:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DefiningClassLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_ClassLoader(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, sp[1].o);
	((rhino_DefiningClassLoader *) NULL_CHECK(sp[0].o))->F_parentLoader = (jref) sp[1].o;
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_DefiningClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefiningClassLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DefiningClassLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	init_java_lang_ClassLoader(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((rhino_DefiningClassLoader *) NULL_CHECK((frame[0].o)))->F_parentLoader = (jref) (frame[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_DefiningClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefiningClassLoader:defineClass", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)M_java_lang_ClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_DefiningClassLoader_linkClass_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefiningClassLoader:linkClass", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	((func_rhino_DefiningClassLoader_resolveClass_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_DefiningClassLoader_resolveClass_java_lang_Class])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_DefiningClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DefiningClassLoader:loadClass", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_rhino_DefiningClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_DefiningClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(30);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((rhino_DefiningClassLoader *) NULL_CHECK((frame[0].o)))->F_parentLoader;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((rhino_DefiningClassLoader *) NULL_CHECK((frame[0].o)))->F_parentLoader;
	sp[0].o = (jobject)((func_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_rhino_DefiningClassLoader_findSystemClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_DefiningClassLoader_findSystemClass_java_lang_String_R_java_lang_Class])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(37);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(38);
	((func_rhino_DefiningClassLoader_resolveClass_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_DefiningClassLoader_resolveClass_java_lang_Class])(ctx, (frame[0].o), (frame[3].o));
	}
label_6:;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_DefiningClassLoader[] {
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
	(void *) M_rhino_DefiningClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL,
	(void *) M_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration,
	(void *) M_java_lang_ClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_findClass_java_lang_String_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_findSystemClass_java_lang_String_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class,
	(void *) M_java_lang_ClassLoader_resolveClass_java_lang_Class,
	(void *) M_rhino_DefiningClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class,
	(void *) M_rhino_DefiningClassLoader_linkClass_java_lang_Class,
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
	{ "defineClass", "(Ljava/lang/String;[B)Ljava/lang/Class;" },
	{ "linkClass", "(Ljava/lang/Class;)V" },
};

static jclass interfaces[] { &class_rhino_GeneratedClassLoader, };

static FieldMetadata fields[] {
	{ "parentLoader", &class_java_lang_ClassLoader, offsetof(rhino_DefiningClassLoader, F_parentLoader), "Ljava/lang/ClassLoader;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_DefiningClassLoader, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_DefiningClassLoader_java_lang_ClassLoader, 0, "(Ljava/lang/ClassLoader;)V", 1 },
	{ "defineClass", (intptr_t) M_rhino_DefiningClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class, VTABLE_rhino_DefiningClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class, "(Ljava/lang/String;[B)Ljava/lang/Class;", 1 },
	{ "linkClass", (intptr_t) M_rhino_DefiningClassLoader_linkClass_java_lang_Class, VTABLE_rhino_DefiningClassLoader_linkClass_java_lang_Class, "(Ljava/lang/Class;)V", 1 },
	{ "loadClass", (intptr_t) M_rhino_DefiningClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class, VTABLE_rhino_DefiningClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class, "(Ljava/lang/String;Z)Ljava/lang/Class;", 1 },
};

Class class_rhino_DefiningClassLoader{
		.nativeName = (intptr_t) "rhino/DefiningClassLoader",
		.parentClass = (intptr_t) &class_java_lang_ClassLoader,
		.size = sizeof(rhino_DefiningClassLoader),
		.classVtable = (intptr_t) vtable_rhino_DefiningClassLoader,
		.staticInitializer = (intptr_t) clinit_rhino_DefiningClassLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_DefiningClassLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_DefiningClassLoader = registerClass(&class_rhino_DefiningClassLoader);

}
