#include "java/lang/ProcessBuilder_RedirectPipeImpl.h"
#include "java/lang/ProcessBuilder_Redirect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ProcessBuilder_Redirect_Type.h"
#include "java/lang/ProcessBuilder.h"
#include "java/lang/ProcessBuilder_1.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Enum.h"
#include "java/lang/ProcessBuilder_RedirectPipeImpl.h"

extern "C" {


void mark_java_lang_ProcessBuilder$RedirectPipeImpl(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ProcessBuilder$Redirect(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_ProcessBuilder$RedirectPipeImpl *) object;
	if (self->F_fd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fd)->clazz)->markFunction)((jobject) self->F_fd, mark, depth + 1);
}

void clinit_java_lang_ProcessBuilder$RedirectPipeImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
}

void init_java_lang_ProcessBuilder$RedirectPipeImpl(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$RedirectPipeImpl:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$RedirectPipeImpl(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(442);
	init_java_lang_ProcessBuilder$Redirect_java_lang_ProcessBuilder$1(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	clinit_java_io_FileDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_FileDescriptor);
	init_java_io_FileDescriptor(ctx, sp[1].o);
	((java_lang_ProcessBuilder$RedirectPipeImpl *) NULL_CHECK(sp[0].o))->F_fd = (jref) sp[1].o;
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder$RedirectPipeImpl_type_R_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$RedirectPipeImpl:type", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[0].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_PIPE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder$RedirectPipeImpl_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$RedirectPipeImpl:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$RedirectPipeImpl_type_R_java_lang_ProcessBuilder$Redirect$Type) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ProcessBuilder$RedirectPipeImpl_type_R_java_lang_ProcessBuilder$Redirect$Type])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect$Type_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect$Type_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ProcessBuilder$RedirectPipeImpl_getFd_R_java_io_FileDescriptor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$RedirectPipeImpl:getFd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((java_lang_ProcessBuilder$RedirectPipeImpl *) NULL_CHECK((frame[0].o)))->F_fd;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ProcessBuilder$RedirectPipeImpl[] {
	(void *) M_java_lang_ProcessBuilder$Redirect_hashCode_R_int,
	(void *) M_java_lang_ProcessBuilder$Redirect_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_ProcessBuilder$RedirectPipeImpl_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_ProcessBuilder$RedirectPipeImpl_type_R_java_lang_ProcessBuilder$Redirect$Type,
	(void *) M_java_lang_ProcessBuilder$Redirect_file_R_java_io_File,
	(void *) M_java_lang_ProcessBuilder$Redirect_append_R_boolean,
	(void *) M_java_lang_ProcessBuilder$RedirectPipeImpl_getFd_R_java_io_FileDescriptor,
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
	{ "type", "()Ljava/lang/ProcessBuilder$Redirect$Type;" },
	{ "file", "()Ljava/io/File;" },
	{ "append", "()Z" },
	{ "getFd", "()Ljava/io/FileDescriptor;" },
};

static FieldMetadata fields[] {
	{ "fd", &class_java_io_FileDescriptor, offsetof(java_lang_ProcessBuilder$RedirectPipeImpl, F_fd), "Ljava/io/FileDescriptor;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ProcessBuilder$RedirectPipeImpl, 0, "()V", 0 },
	{ "type", (intptr_t) M_java_lang_ProcessBuilder$RedirectPipeImpl_type_R_java_lang_ProcessBuilder$Redirect$Type, VTABLE_java_lang_ProcessBuilder$RedirectPipeImpl_type_R_java_lang_ProcessBuilder$Redirect$Type, "()Ljava/lang/ProcessBuilder$Redirect$Type;", 1 },
	{ "toString", (intptr_t) M_java_lang_ProcessBuilder$RedirectPipeImpl_toString_R_java_lang_String, VTABLE_java_lang_ProcessBuilder$RedirectPipeImpl_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getFd", (intptr_t) M_java_lang_ProcessBuilder$RedirectPipeImpl_getFd_R_java_io_FileDescriptor, VTABLE_java_lang_ProcessBuilder$RedirectPipeImpl_getFd_R_java_io_FileDescriptor, "()Ljava/io/FileDescriptor;", 0 },
};

Class class_java_lang_ProcessBuilder$RedirectPipeImpl{
		.nativeName = (intptr_t) "java/lang/ProcessBuilder$RedirectPipeImpl",
		.parentClass = (intptr_t) &class_java_lang_ProcessBuilder$Redirect,
		.size = sizeof(java_lang_ProcessBuilder$RedirectPipeImpl),
		.classVtable = (intptr_t) vtable_java_lang_ProcessBuilder$RedirectPipeImpl,
		.staticInitializer = (intptr_t) clinit_java_lang_ProcessBuilder$RedirectPipeImpl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ProcessBuilder$RedirectPipeImpl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_ProcessBuilder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ProcessBuilder$RedirectPipeImpl = registerClass(&class_java_lang_ProcessBuilder$RedirectPipeImpl);

}

