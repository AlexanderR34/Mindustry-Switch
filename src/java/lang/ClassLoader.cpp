#include "java/lang/ClassLoader.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/net/URL.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/NullPointerException.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader_1.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jobject SF_java_lang_ClassLoader_systemClassLoader;

void mark_java_lang_ClassLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_ClassLoader_systemClassLoader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ClassLoader_systemClassLoader)->clazz)->markFunction)((jobject) SF_java_lang_ClassLoader_systemClassLoader, mark, depth + 1);
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
	auto self = (java_lang_ClassLoader *) object;
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
}

void init_java_lang_ClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ClassLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_java_lang_ClassLoader_java_lang_ClassLoader(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_ClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ClassLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	((java_lang_ClassLoader *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_getParent_R_java_lang_ClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((java_lang_ClassLoader *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:getSystemClassLoader", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ClassLoader(ctx);
	{
	LINE_NUMBER(46);
	clinit_java_lang_ClassLoader(ctx);
	sp[0].o = (jobject)SF_java_lang_ClassLoader_systemClassLoader;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:getResourceAsStream", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ClassLoader_getSystemResource_java_lang_String_R_java_net_URL(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:getSystemResource", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ClassLoader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(ctx);
	sp[0].o = (jobject)((func_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ClassLoader_getSystemResources_java_lang_String_R_java_util_Enumeration(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:getSystemResources", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ClassLoader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(ctx);
	sp[0].o = (jobject)((func_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ClassLoader_getSystemResourceAsStream_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:getSystemResourceAsStream", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ClassLoader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(62);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:loadClass", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(66);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:loadClass", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(72);
	frame[2].o = sp[0].o;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:getResource", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:getResources", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:findLoadedClass", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(88);
	frame[2].o = sp[0].o;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_findClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:findClass", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_findSystemClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:findSystemClass", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:defineClass", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(102);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_lang_ClassLoader_resolveClass_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:resolveClass", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(107);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_lang_ClassLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ClassLoader:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ClassLoader(ctx);
	{
	LINE_NUMBER(29);
	clinit_java_lang_ClassLoader$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassLoader$1);
	init_java_lang_ClassLoader$1(ctx, sp[0].o);
	clinit_java_lang_ClassLoader(ctx);
	SF_java_lang_ClassLoader_systemClassLoader = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ClassLoader[] {
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

static FieldMetadata fields[] {
	{ "parent", &class_java_lang_ClassLoader, offsetof(java_lang_ClassLoader, F_parent), "Ljava/lang/ClassLoader;", 2 },
	{ "systemClassLoader", &class_java_lang_ClassLoader, (intptr_t) &SF_java_lang_ClassLoader_systemClassLoader, "Ljava/lang/ClassLoader;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ClassLoader, 0, "()V", 4 },
	{ "<init>", (intptr_t) init_java_lang_ClassLoader_java_lang_ClassLoader, 0, "(Ljava/lang/ClassLoader;)V", 4 },
	{ "getParent", (intptr_t) M_java_lang_ClassLoader_getParent_R_java_lang_ClassLoader, VTABLE_java_lang_ClassLoader_getParent_R_java_lang_ClassLoader, "()Ljava/lang/ClassLoader;", 1 },
	{ "getSystemClassLoader", (intptr_t) SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader, 0, "()Ljava/lang/ClassLoader;", 9 },
	{ "getResourceAsStream", (intptr_t) M_java_lang_ClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream, VTABLE_java_lang_ClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream, "(Ljava/lang/String;)Ljava/io/InputStream;", 1 },
	{ "getSystemResource", (intptr_t) SM_java_lang_ClassLoader_getSystemResource_java_lang_String_R_java_net_URL, 0, "(Ljava/lang/String;)Ljava/net/URL;", 9 },
	{ "getSystemResources", (intptr_t) SM_java_lang_ClassLoader_getSystemResources_java_lang_String_R_java_util_Enumeration, 0, "(Ljava/lang/String;)Ljava/util/Enumeration;", 9 },
	{ "getSystemResourceAsStream", (intptr_t) SM_java_lang_ClassLoader_getSystemResourceAsStream_java_lang_String_R_java_io_InputStream, 0, "(Ljava/lang/String;)Ljava/io/InputStream;", 9 },
	{ "loadClass", (intptr_t) M_java_lang_ClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class, VTABLE_java_lang_ClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class, "(Ljava/lang/String;Z)Ljava/lang/Class;", 4 },
	{ "loadClass", (intptr_t) M_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class, VTABLE_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 1 },
	{ "getResource", (intptr_t) M_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL, VTABLE_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL, "(Ljava/lang/String;)Ljava/net/URL;", 1 },
	{ "getResources", (intptr_t) M_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration, VTABLE_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration, "(Ljava/lang/String;)Ljava/util/Enumeration;", 1 },
	{ "findLoadedClass", (intptr_t) M_java_lang_ClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class, VTABLE_java_lang_ClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 20 },
	{ "findClass", (intptr_t) M_java_lang_ClassLoader_findClass_java_lang_String_R_java_lang_Class, VTABLE_java_lang_ClassLoader_findClass_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 4 },
	{ "findSystemClass", (intptr_t) M_java_lang_ClassLoader_findSystemClass_java_lang_String_R_java_lang_Class, VTABLE_java_lang_ClassLoader_findSystemClass_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 20 },
	{ "defineClass", (intptr_t) M_java_lang_ClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class, VTABLE_java_lang_ClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class, "(Ljava/lang/String;[BII)Ljava/lang/Class;", 20 },
	{ "resolveClass", (intptr_t) M_java_lang_ClassLoader_resolveClass_java_lang_Class, VTABLE_java_lang_ClassLoader_resolveClass_java_lang_Class, "(Ljava/lang/Class;)V", 20 },
	{ "<clinit>", (intptr_t) clinit_java_lang_ClassLoader, 0, "()V", 8 },
};

Class class_java_lang_ClassLoader{
		.nativeName = (intptr_t) "java/lang/ClassLoader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_ClassLoader),
		.classVtable = (intptr_t) vtable_java_lang_ClassLoader,
		.staticInitializer = (intptr_t) clinit_java_lang_ClassLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ClassLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ClassLoader = registerClass(&class_java_lang_ClassLoader);

}
