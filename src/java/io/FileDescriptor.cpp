#include "java/io/FileDescriptor.h"
#include "java/lang/Object.h"
#include "java/io/FileDescriptor.h"

extern "C" {

jobject SF_java_io_FileDescriptor_in;
jobject SF_java_io_FileDescriptor_out;
jobject SF_java_io_FileDescriptor_err;

void mark_java_io_FileDescriptor(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_io_FileDescriptor_in)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_io_FileDescriptor_in)->clazz)->markFunction)((jobject) SF_java_io_FileDescriptor_in, mark, depth + 1);
		if (SF_java_io_FileDescriptor_out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_io_FileDescriptor_out)->clazz)->markFunction)((jobject) SF_java_io_FileDescriptor_out, mark, depth + 1);
		if (SF_java_io_FileDescriptor_err)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_io_FileDescriptor_err)->clazz)->markFunction)((jobject) SF_java_io_FileDescriptor_err, mark, depth + 1);
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
	auto self = (java_io_FileDescriptor *) object;
}

void init_java_io_FileDescriptor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileDescriptor:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileDescriptor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((java_io_FileDescriptor *) NULL_CHECK((frame[0].o)))->F_fd = (jint(-1));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_FileDescriptor_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileDescriptor:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileDescriptor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((java_io_FileDescriptor *) NULL_CHECK((frame[0].o)))->F_fd = (frame[1].i);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_io_FileDescriptor_valid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileDescriptor:valid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	if (((jint)((java_io_FileDescriptor *) NULL_CHECK((frame[0].o)))->F_fd) == (jint(-1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_io_FileDescriptor_sync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileDescriptor:sync", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_io_FileDescriptor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileDescriptor:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileDescriptor(ctx);
	{
	LINE_NUMBER(21);
	clinit_java_io_FileDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileDescriptor);
	init_java_io_FileDescriptor(ctx, sp[0].o);
	clinit_java_io_FileDescriptor(ctx);
	SF_java_io_FileDescriptor_in = sp[0].o;
	LINE_NUMBER(22);
	clinit_java_io_FileDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileDescriptor);
	init_java_io_FileDescriptor(ctx, sp[0].o);
	clinit_java_io_FileDescriptor(ctx);
	SF_java_io_FileDescriptor_out = sp[0].o;
	LINE_NUMBER(23);
	clinit_java_io_FileDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileDescriptor);
	init_java_io_FileDescriptor(ctx, sp[0].o);
	clinit_java_io_FileDescriptor(ctx);
	SF_java_io_FileDescriptor_err = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_FileDescriptor[] {
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
	(void *) M_java_io_FileDescriptor_valid_R_boolean,
	(void *) M_java_io_FileDescriptor_sync,
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
	{ "valid", "()Z" },
	{ "sync", "()V" },
};

static FieldMetadata fields[] {
	{ "in", &class_java_io_FileDescriptor, (intptr_t) &SF_java_io_FileDescriptor_in, "Ljava/io/FileDescriptor;", 25 },
	{ "out", &class_java_io_FileDescriptor, (intptr_t) &SF_java_io_FileDescriptor_out, "Ljava/io/FileDescriptor;", 25 },
	{ "err", &class_java_io_FileDescriptor, (intptr_t) &SF_java_io_FileDescriptor_err, "Ljava/io/FileDescriptor;", 25 },
	{ "fd", &class_int, offsetof(java_io_FileDescriptor, F_fd), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_FileDescriptor, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_io_FileDescriptor_int, 0, "(I)V", 2 },
	{ "valid", (intptr_t) M_java_io_FileDescriptor_valid_R_boolean, VTABLE_java_io_FileDescriptor_valid_R_boolean, "()Z", 1 },
	{ "sync", (intptr_t) M_java_io_FileDescriptor_sync, VTABLE_java_io_FileDescriptor_sync, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_java_io_FileDescriptor, 0, "()V", 8 },
};

Class class_java_io_FileDescriptor{
		.nativeName = (intptr_t) "java/io/FileDescriptor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_io_FileDescriptor),
		.classVtable = (intptr_t) vtable_java_io_FileDescriptor,
		.staticInitializer = (intptr_t) clinit_java_io_FileDescriptor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_FileDescriptor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_FileDescriptor = registerClass(&class_java_io_FileDescriptor);

}
