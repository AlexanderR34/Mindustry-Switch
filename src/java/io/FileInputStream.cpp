#include "java/io/FileInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/FileInputStream.h"
#include "java/lang/NullPointerException.h"
#include "java/io/FileDescriptor.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/io/File.h"
#include "java/lang/Throwable.h"
#include "java/nio/channels/FileChannel.h"

extern "C" {


void mark_java_io_FileInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_InputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_FileInputStream *) object;
	if (self->F_path)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_path)->clazz)->markFunction)((jobject) self->F_path, mark, depth + 1);
	if (self->F_closeLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_closeLock)->clazz)->markFunction)((jobject) self->F_closeLock, mark, depth + 1);
}

void clinit_java_io_FileInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_InputStream(ctx);
}

void init_java_io_FileInputStream_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileInputStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 2;
	init_java_io_FileInputStream_java_io_File(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_FileInputStream_java_io_File(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileInputStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_io_FileInputStream *) NULL_CHECK(sp[0].o))->F_closeLock = (jref) sp[1].o;
	LINE_NUMBER(58);
	((java_io_FileInputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	LINE_NUMBER(119);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, (frame[1].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ACONST_NULL();
label_5:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(120);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(121);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_java_io_File_isInvalid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_isInvalid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(123);
	clinit_java_io_FileNotFoundException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileNotFoundException);
	init_java_io_FileNotFoundException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid file path"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(124);
	((java_io_FileInputStream *) NULL_CHECK((frame[0].o)))->F_path = (jref) (frame[2].o);
	LINE_NUMBER(125);
	M_java_io_FileInputStream_open_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(126);
	((java_io_FileInputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(0));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_FileInputStream_java_io_FileDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileInputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_io_FileInputStream *) NULL_CHECK(sp[0].o))->F_closeLock = (jref) sp[1].o;
	LINE_NUMBER(58);
	((java_io_FileInputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	LINE_NUMBER(130);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_io_FileInputStream_read_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileInputStream:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	jint temp0 = (jint)M_java_io_FileInputStream_readBytes_Array1_byte_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_io_FileInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileInputStream:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)M_java_io_FileInputStream_readBytes_Array1_byte_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_io_FileInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileInputStream:close", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((java_io_FileInputStream *) NULL_CHECK((frame[0].o)))->F_closeLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(254);
	if (((jint)((java_io_FileInputStream *) NULL_CHECK((frame[0].o)))->F_closed) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(255);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(256);
	((java_io_FileInputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	LINE_NUMBER(257);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_12:;
	{
	LINE_NUMBER(258);
	M_java_io_FileInputStream_close0(ctx, (frame[0].o));
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileInputStream:getChannel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_io_FileInputStream_finalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileInputStream:finalize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	((func_java_io_FileInputStream_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_FileInputStream_close])(ctx, (frame[0].o));
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_FileInputStream[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_io_FileInputStream_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_io_FileInputStream_close,
	(void *) M_java_io_FileInputStream_available_R_int,
	(void *) M_java_io_InputStream_mark_int,
	(void *) M_java_io_InputStream_markSupported_R_boolean,
	(void *) M_java_io_FileInputStream_read_R_int,
	(void *) M_java_io_FileInputStream_read_Array1_byte_R_int,
	(void *) M_java_io_FileInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_InputStream_reset,
	(void *) M_java_io_FileInputStream_skip_long_R_long,
	(void *) M_java_io_FileInputStream_open_java_lang_String,
	(void *) M_java_io_FileInputStream_readBytes_Array1_byte_int_int_R_int,
	(void *) M_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel,
	(void *) M_java_io_FileInputStream_close0,
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
	{ "close", "()V" },
	{ "available", "()I" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([B)I" },
	{ "read", "([BII)I" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
	{ "open", "(Ljava/lang/String;)V" },
	{ "readBytes", "([BII)I" },
	{ "getChannel", "()Ljava/nio/channels/FileChannel;" },
	{ "close0", "()V" },
};

static FieldMetadata fields[] {
	{ "file", &class_long, offsetof(java_io_FileInputStream, F_file), "J", 2 },
	{ "path", &class_java_lang_String, offsetof(java_io_FileInputStream, F_path), "Ljava/lang/String;", 18 },
	{ "closeLock", &class_java_lang_Object, offsetof(java_io_FileInputStream, F_closeLock), "Ljava/lang/Object;", 18 },
	{ "closed", &class_boolean, offsetof(java_io_FileInputStream, F_closed), "Z", 66 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_FileInputStream_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_FileInputStream_java_io_File, 0, "(Ljava/io/File;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_FileInputStream_java_io_FileDescriptor, 0, "(Ljava/io/FileDescriptor;)V", 1 },
	{ "open", (intptr_t) M_java_io_FileInputStream_open_java_lang_String, VTABLE_java_io_FileInputStream_open_java_lang_String, "(Ljava/lang/String;)V", 258 },
	{ "read", (intptr_t) M_java_io_FileInputStream_read_R_int, VTABLE_java_io_FileInputStream_read_R_int, "()I", 257 },
	{ "readBytes", (intptr_t) M_java_io_FileInputStream_readBytes_Array1_byte_int_int_R_int, VTABLE_java_io_FileInputStream_readBytes_Array1_byte_int_int_R_int, "([BII)I", 258 },
	{ "read", (intptr_t) M_java_io_FileInputStream_read_Array1_byte_R_int, VTABLE_java_io_FileInputStream_read_Array1_byte_R_int, "([B)I", 1 },
	{ "read", (intptr_t) M_java_io_FileInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_io_FileInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "skip", (intptr_t) M_java_io_FileInputStream_skip_long_R_long, VTABLE_java_io_FileInputStream_skip_long_R_long, "(J)J", 257 },
	{ "available", (intptr_t) M_java_io_FileInputStream_available_R_int, VTABLE_java_io_FileInputStream_available_R_int, "()I", 257 },
	{ "close", (intptr_t) M_java_io_FileInputStream_close, VTABLE_java_io_FileInputStream_close, "()V", 1 },
	{ "getChannel", (intptr_t) M_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel, VTABLE_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel, "()Ljava/nio/channels/FileChannel;", 1 },
	{ "close0", (intptr_t) M_java_io_FileInputStream_close0, VTABLE_java_io_FileInputStream_close0, "()V", 258 },
	{ "finalize", (intptr_t) M_java_io_FileInputStream_finalize, VTABLE_java_io_FileInputStream_finalize, "()V", 4 },
};

Class class_java_io_FileInputStream{
		.nativeName = (intptr_t) "java/io/FileInputStream",
		.parentClass = (intptr_t) &class_java_io_InputStream,
		.size = sizeof(java_io_FileInputStream),
		.classVtable = (intptr_t) vtable_java_io_FileInputStream,
		.staticInitializer = (intptr_t) clinit_java_io_FileInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_FileInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_FileInputStream = registerClass(&class_java_io_FileInputStream);

}
