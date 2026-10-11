#include "java/lang/Process.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/io/OutputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Process_PipeInputStream.h"
#include "java/lang/Process.h"
#include "java/lang/IllegalThreadStateException.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_lang_Process(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_Process *) object;
}

void clinit_java_lang_Process(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_Process(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Process:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Process(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Process_waitFor_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Process:waitFor", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(36);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[4].l = temp0;
	LINE_NUMBER(37);
	jlong temp1 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[6].l = temp1;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalThreadStateException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_java_lang_Process_exitValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Process_exitValue_R_int])(ctx, (frame[0].o));
	LINE_NUMBER(42);
	jint temp1 = jint(1);
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(43);
	frame[8].o = sp[0].o;
	LINE_NUMBER(44);
	if ((longCompare((frame[6].l), (jlong(0)))) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(45);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toMillis_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long])(ctx, sp[0].o, (frame[6].l));
	jlong temp1 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (temp0 + (jlong(1))), (jlong(100ll)));
	SM_java_lang_Thread_sleep_long(ctx, temp1);
	}
label_8:;
	{
	LINE_NUMBER(48);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[6].l = (temp0 - (temp1 - (frame[4].l)));
	LINE_NUMBER(49);
	if ((longCompare((frame[6].l), (jlong(0)))) > 0) goto label_11;
	}
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	LINE_NUMBER(52);
	goto label_0;

	popStackFrame(ctx);
}

jobject M_java_lang_Process_destroyForcibly_R_java_lang_Process(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Process:destroyForcibly", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	((func_java_lang_Process_destroy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Process_destroy])(ctx, (frame[0].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Process_supportsNormalTermination_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Process:supportsNormalTermination", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".supportsNormalTermination() not supported"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_lang_Process_isAlive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Process:isAlive", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalThreadStateException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_java_lang_Process_exitValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Process_exitValue_R_int])(ctx, (frame[0].o));
	LINE_NUMBER(72);
	jint temp1 = jint(0);
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(73);
	frame[1].o = sp[0].o;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Process_pid_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Process:pid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Process[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_lang_Process_waitFor_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_lang_Process_destroyForcibly_R_java_lang_Process,
	(void *) M_java_lang_Process_supportsNormalTermination_R_boolean,
	(void *) M_java_lang_Process_isAlive_R_boolean,
	(void *) M_java_lang_Process_pid_R_long,
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
	{ "getOutputStream", "()Ljava/io/OutputStream;" },
	{ "getInputStream", "()Ljava/io/InputStream;" },
	{ "getErrorStream", "()Ljava/io/InputStream;" },
	{ "waitFor", "()I" },
	{ "waitFor", "(JLjava/util/concurrent/TimeUnit;)Z" },
	{ "exitValue", "()I" },
	{ "destroy", "()V" },
	{ "destroyForcibly", "()Ljava/lang/Process;" },
	{ "supportsNormalTermination", "()Z" },
	{ "isAlive", "()Z" },
	{ "pid", "()J" },
};

static jclass innerClasses[] {
	&class_java_lang_Process$PipeInputStream,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Process, 0, "()V", 1 },
	{ "getOutputStream", 0, VTABLE_java_lang_Process_getOutputStream_R_java_io_OutputStream, "()Ljava/io/OutputStream;", 1025 },
	{ "getInputStream", 0, VTABLE_java_lang_Process_getInputStream_R_java_io_InputStream, "()Ljava/io/InputStream;", 1025 },
	{ "getErrorStream", 0, VTABLE_java_lang_Process_getErrorStream_R_java_io_InputStream, "()Ljava/io/InputStream;", 1025 },
	{ "waitFor", 0, VTABLE_java_lang_Process_waitFor_R_int, "()I", 1025 },
	{ "waitFor", (intptr_t) M_java_lang_Process_waitFor_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_lang_Process_waitFor_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "exitValue", 0, VTABLE_java_lang_Process_exitValue_R_int, "()I", 1025 },
	{ "destroy", 0, VTABLE_java_lang_Process_destroy, "()V", 1025 },
	{ "destroyForcibly", (intptr_t) M_java_lang_Process_destroyForcibly_R_java_lang_Process, VTABLE_java_lang_Process_destroyForcibly_R_java_lang_Process, "()Ljava/lang/Process;", 1 },
	{ "supportsNormalTermination", (intptr_t) M_java_lang_Process_supportsNormalTermination_R_boolean, VTABLE_java_lang_Process_supportsNormalTermination_R_boolean, "()Z", 1 },
	{ "isAlive", (intptr_t) M_java_lang_Process_isAlive_R_boolean, VTABLE_java_lang_Process_isAlive_R_boolean, "()Z", 1 },
	{ "pid", (intptr_t) M_java_lang_Process_pid_R_long, VTABLE_java_lang_Process_pid_R_long, "()J", 1 },
};

Class class_java_lang_Process{
		.nativeName = (intptr_t) "java/lang/Process",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Process),
		.classVtable = (intptr_t) vtable_java_lang_Process,
		.staticInitializer = (intptr_t) clinit_java_lang_Process,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Process,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Process = registerClass(&class_java_lang_Process);

}
