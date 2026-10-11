#include "java/io/FileOutputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/FileOutputStream.h"
#include "java/lang/NullPointerException.h"
#include "java/io/File.h"
#include "java/lang/Throwable.h"
#include "java/nio/channels/FileChannel.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_java_io_FileOutputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_OutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_FileOutputStream *) object;
	if (self->F_path)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_path)->clazz)->markFunction)((jobject) self->F_path, mark, depth + 1);
	if (self->F_closeLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_closeLock)->clazz)->markFunction)((jobject) self->F_closeLock, mark, depth + 1);
}

void clinit_java_io_FileOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_OutputStream(ctx);
}

void init_java_io_FileOutputStream_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
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
	init_java_io_FileOutputStream_java_io_File_boolean(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_FileOutputStream_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(124);
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
	init_java_io_FileOutputStream_java_io_File_boolean(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_FileOutputStream_java_io_File(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	init_java_io_FileOutputStream_java_io_File_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_FileOutputStream_java_io_File_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FileOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(187);
	init_java_io_OutputStream(ctx, (frame[0].o));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_io_FileOutputStream *) NULL_CHECK(sp[0].o))->F_closeLock = (jref) sp[1].o;
	LINE_NUMBER(68);
	((java_io_FileOutputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(0));
	LINE_NUMBER(188);
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
	frame[3].o = sp[0].o;
	LINE_NUMBER(189);
	if ((frame[3].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(190);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(191);
	jint temp0 = (jint)((func_java_io_File_isInvalid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_isInvalid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(192);
	clinit_java_io_FileNotFoundException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileNotFoundException);
	init_java_io_FileNotFoundException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid file path"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(193);
	((java_io_FileOutputStream *) NULL_CHECK((frame[0].o)))->F_append = (frame[2].i);
	LINE_NUMBER(194);
	((java_io_FileOutputStream *) NULL_CHECK((frame[0].o)))->F_path = (jref) (frame[3].o);
	LINE_NUMBER(196);
	((func_java_io_FileOutputStream_open_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_FileOutputStream_open_java_lang_String_boolean])(ctx, (frame[0].o), (frame[3].o), (frame[2].i));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_FileOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(223);
	M_java_io_FileOutputStream_write_int_boolean(ctx, (frame[0].o), (frame[1].i), ((jint)((java_io_FileOutputStream *) NULL_CHECK((frame[0].o)))->F_append));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_FileOutputStream_write_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	M_java_io_FileOutputStream_writeBytes_Array1_byte_int_int_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), ((jint)((java_io_FileOutputStream *) NULL_CHECK((frame[0].o)))->F_append));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_FileOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(259);
	M_java_io_FileOutputStream_writeBytes_Array1_byte_int_int_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), ((jint)((java_io_FileOutputStream *) NULL_CHECK((frame[0].o)))->F_append));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_FileOutputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:close", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((java_io_FileOutputStream *) NULL_CHECK((frame[0].o)))->F_closeLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(277);
	if (((jint)((java_io_FileOutputStream *) NULL_CHECK((frame[0].o)))->F_closed) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(278);
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
	LINE_NUMBER(279);
	((java_io_FileOutputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	LINE_NUMBER(280);
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
	LINE_NUMBER(282);
	M_java_io_FileOutputStream_close0(ctx, (frame[0].o));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_io_FileOutputStream_getChannel_R_java_nio_channels_FileChannel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:getChannel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_io_FileOutputStream_finalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FileOutputStream:finalize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(298);
	((func_java_io_FileOutputStream_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_FileOutputStream_close])(ctx, (frame[0].o));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_FileOutputStream[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_io_FileOutputStream_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_io_FileOutputStream_close,
	(void *) M_java_io_OutputStream_flush,
	(void *) M_java_io_FileOutputStream_write_Array1_byte,
	(void *) M_java_io_FileOutputStream_write_Array1_byte_int_int,
	(void *) M_java_io_FileOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_io_FileOutputStream_open_java_lang_String_boolean,
	(void *) M_java_io_FileOutputStream_write_int_boolean,
	(void *) M_java_io_FileOutputStream_writeBytes_Array1_byte_int_int_boolean,
	(void *) M_java_io_FileOutputStream_getChannel_R_java_nio_channels_FileChannel,
	(void *) M_java_io_FileOutputStream_close0,
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
	{ "flush", "()V" },
	{ "write", "([B)V" },
	{ "write", "([BII)V" },
	{ "write", "(I)V" },
	{ "checkError", "()Z" },
	{ "open", "(Ljava/lang/String;Z)V" },
	{ "write", "(IZ)V" },
	{ "writeBytes", "([BIIZ)V" },
	{ "getChannel", "()Ljava/nio/channels/FileChannel;" },
	{ "close0", "()V" },
};

static FieldMetadata fields[] {
	{ "file", &class_long, offsetof(java_io_FileOutputStream, F_file), "J", 2 },
	{ "append", &class_boolean, offsetof(java_io_FileOutputStream, F_append), "Z", 18 },
	{ "path", &class_java_lang_String, offsetof(java_io_FileOutputStream, F_path), "Ljava/lang/String;", 18 },
	{ "closeLock", &class_java_lang_Object, offsetof(java_io_FileOutputStream, F_closeLock), "Ljava/lang/Object;", 18 },
	{ "closed", &class_boolean, offsetof(java_io_FileOutputStream, F_closed), "Z", 66 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_FileOutputStream_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_FileOutputStream_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 1 },
	{ "<init>", (intptr_t) init_java_io_FileOutputStream_java_io_File, 0, "(Ljava/io/File;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_FileOutputStream_java_io_File_boolean, 0, "(Ljava/io/File;Z)V", 1 },
	{ "open", (intptr_t) M_java_io_FileOutputStream_open_java_lang_String_boolean, VTABLE_java_io_FileOutputStream_open_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 257 },
	{ "write", (intptr_t) M_java_io_FileOutputStream_write_int_boolean, VTABLE_java_io_FileOutputStream_write_int_boolean, "(IZ)V", 258 },
	{ "write", (intptr_t) M_java_io_FileOutputStream_write_int, VTABLE_java_io_FileOutputStream_write_int, "(I)V", 1 },
	{ "writeBytes", (intptr_t) M_java_io_FileOutputStream_writeBytes_Array1_byte_int_int_boolean, VTABLE_java_io_FileOutputStream_writeBytes_Array1_byte_int_int_boolean, "([BIIZ)V", 258 },
	{ "write", (intptr_t) M_java_io_FileOutputStream_write_Array1_byte, VTABLE_java_io_FileOutputStream_write_Array1_byte, "([B)V", 1 },
	{ "write", (intptr_t) M_java_io_FileOutputStream_write_Array1_byte_int_int, VTABLE_java_io_FileOutputStream_write_Array1_byte_int_int, "([BII)V", 1 },
	{ "close", (intptr_t) M_java_io_FileOutputStream_close, VTABLE_java_io_FileOutputStream_close, "()V", 1 },
	{ "getChannel", (intptr_t) M_java_io_FileOutputStream_getChannel_R_java_nio_channels_FileChannel, VTABLE_java_io_FileOutputStream_getChannel_R_java_nio_channels_FileChannel, "()Ljava/nio/channels/FileChannel;", 1 },
	{ "finalize", (intptr_t) M_java_io_FileOutputStream_finalize, VTABLE_java_io_FileOutputStream_finalize, "()V", 4 },
	{ "close0", (intptr_t) M_java_io_FileOutputStream_close0, VTABLE_java_io_FileOutputStream_close0, "()V", 258 },
};

Class class_java_io_FileOutputStream{
		.nativeName = (intptr_t) "java/io/FileOutputStream",
		.parentClass = (intptr_t) &class_java_io_OutputStream,
		.size = sizeof(java_io_FileOutputStream),
		.classVtable = (intptr_t) vtable_java_io_FileOutputStream,
		.staticInitializer = (intptr_t) clinit_java_io_FileOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_FileOutputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_FileOutputStream = registerClass(&class_java_io_FileOutputStream);

}
