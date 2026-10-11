#include "java/lang/Process_PipeInputStream.h"
#include "java/lang/Math.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/Process_PipeInputStream.h"
#include "java/io/FileInputStream.h"
#include "java/lang/Process.h"
#include "java/io/FileDescriptor.h"

extern "C" {


void mark_java_lang_Process$PipeInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_FileInputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_Process$PipeInputStream *) object;
}

void clinit_java_lang_Process$PipeInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FileInputStream(ctx);
}

void init_java_lang_Process$PipeInputStream_java_io_FileDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Process$PipeInputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Process$PipeInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	init_java_io_FileInputStream_java_io_FileDescriptor(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Process$PipeInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Process$PipeInputStream:skip", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(88);
	frame[3].l = (frame[1].l);
	LINE_NUMBER(89);
	if ((longCompare((frame[1].l), (jlong(0)))) > 0) goto label_2;
	}
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_2:;
	{
	LINE_NUMBER(92);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (jlong(2048ll)), (frame[3].l));
	frame[5].i = (jint(temp0));
	LINE_NUMBER(95);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[5].i));
	frame[7].o = sp[0].o;
	}
label_5:;
	{
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = frame[7].o;
	jint temp0 = jint(0);
	jlong temp1 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (jlong((frame[5].i))), (frame[3].l));
	jint temp2 = (jint)((func_java_lang_Process$PipeInputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Process$PipeInputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, (jint(temp1)));
	frame[6].i = temp2;
	LINE_NUMBER(97);
	if ((frame[6].i) >= 0) goto label_9;
	}
	LINE_NUMBER(98);
	goto label_6;
label_9:;
	{
	LINE_NUMBER(95);
	frame[3].l = ((frame[3].l) - (jlong((frame[6].i))));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return ((frame[1].l) - (frame[3].l));
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Process$PipeInputStream[] {
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
	(void *) M_java_lang_Process$PipeInputStream_skip_long_R_long,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Process$PipeInputStream_java_io_FileDescriptor, 0, "(Ljava/io/FileDescriptor;)V", 0 },
	{ "skip", (intptr_t) M_java_lang_Process$PipeInputStream_skip_long_R_long, VTABLE_java_lang_Process$PipeInputStream_skip_long_R_long, "(J)J", 1 },
};

Class class_java_lang_Process$PipeInputStream{
		.nativeName = (intptr_t) "java/lang/Process$PipeInputStream",
		.parentClass = (intptr_t) &class_java_io_FileInputStream,
		.size = sizeof(java_lang_Process$PipeInputStream),
		.classVtable = (intptr_t) vtable_java_lang_Process$PipeInputStream,
		.staticInitializer = (intptr_t) clinit_java_lang_Process$PipeInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Process$PipeInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_Process,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Process$PipeInputStream = registerClass(&class_java_lang_Process$PipeInputStream);

}

