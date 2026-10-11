#include "java/io/RandomAccessFile.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/RandomAccessFile.h"
#include "java/io/Closeable.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/io/File.h"
#include "java/nio/channels/FileChannel.h"

extern "C" {


void mark_java_io_RandomAccessFile(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_RandomAccessFile *) object;
}

void clinit_java_io_RandomAccessFile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_io_RandomAccessFile_java_io_File_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/RandomAccessFile:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_RandomAccessFile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_io_RandomAccessFile_getChannel_R_java_nio_channels_FileChannel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/RandomAccessFile:getChannel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_io_RandomAccessFile_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/RandomAccessFile:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_io_RandomAccessFile[] {
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
	(void *) M_java_io_RandomAccessFile_close,
	(void *) M_java_io_RandomAccessFile_getChannel_R_java_nio_channels_FileChannel,
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
	{ "getChannel", "()Ljava/nio/channels/FileChannel;" },
};

static jclass interfaces[] { &class_java_io_Closeable, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_RandomAccessFile_java_io_File_java_lang_String, 0, "(Ljava/io/File;Ljava/lang/String;)V", 1 },
	{ "getChannel", (intptr_t) M_java_io_RandomAccessFile_getChannel_R_java_nio_channels_FileChannel, VTABLE_java_io_RandomAccessFile_getChannel_R_java_nio_channels_FileChannel, "()Ljava/nio/channels/FileChannel;", 17 },
	{ "close", (intptr_t) M_java_io_RandomAccessFile_close, VTABLE_java_io_RandomAccessFile_close, "()V", 1 },
};

Class class_java_io_RandomAccessFile{
		.nativeName = (intptr_t) "java/io/RandomAccessFile",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_io_RandomAccessFile),
		.classVtable = (intptr_t) vtable_java_io_RandomAccessFile,
		.staticInitializer = (intptr_t) clinit_java_io_RandomAccessFile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_RandomAccessFile,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_RandomAccessFile = registerClass(&class_java_io_RandomAccessFile);

}
