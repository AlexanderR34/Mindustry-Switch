#include "java/lang/Runtime.h"
#include "java/lang/Object.h"
#include "java/lang/Runtime.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Process.h"
#include "java/io/File.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_java_lang_Runtime_instance;

void mark_java_lang_Runtime(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Runtime_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Runtime_instance)->clazz)->markFunction)((jobject) SF_java_lang_Runtime_instance, mark, depth + 1);
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
	auto self = (java_lang_Runtime *) object;
}

void init_java_lang_Runtime(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Runtime(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_Runtime_exit_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:exit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(43);
	SM_java_lang_System_exit_int(ctx, (frame[1].i));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Runtime_freeMemory_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:freeMemory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	jlong temp0 = (jlong)SM_java_lang_Runtime_freeMemoryImpl_R_long(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Runtime_maxMemory_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:maxMemory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	jlong temp0 = (jlong)SM_java_lang_Runtime_maxMemoryImpl_R_long(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_lang_Runtime_gc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:gc", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	SM_java_lang_System_gc(ctx);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:getRuntime", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Runtime(ctx);
	{
	LINE_NUMBER(70);
	clinit_java_lang_Runtime(ctx);
	sp[0].o = (jobject)SF_java_lang_Runtime_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Runtime_totalMemory_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:totalMemory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	jlong temp0 = (jlong)SM_java_lang_Runtime_totalMemoryImpl_R_long(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Runtime_availableProcessors_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:availableProcessors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Runtime_exec_java_lang_String_R_java_lang_Process(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:exec", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_R_java_lang_Process(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:exec", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(94);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:exec", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(98);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:exec", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_R_java_lang_Process(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:exec", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(106);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:exec", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(110);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_java_lang_Runtime(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Runtime:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Runtime(ctx);
	{
	LINE_NUMBER(36);
	clinit_java_lang_Runtime(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Runtime);
	init_java_lang_Runtime(ctx, sp[0].o);
	clinit_java_lang_Runtime(ctx);
	SF_java_lang_Runtime_instance = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Runtime[] {
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
	(void *) M_java_lang_Runtime_exit_int,
	(void *) M_java_lang_Runtime_freeMemory_R_long,
	(void *) M_java_lang_Runtime_maxMemory_R_long,
	(void *) M_java_lang_Runtime_gc,
	(void *) M_java_lang_Runtime_totalMemory_R_long,
	(void *) M_java_lang_Runtime_availableProcessors_R_int,
	(void *) M_java_lang_Runtime_exec_java_lang_String_R_java_lang_Process,
	(void *) M_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_R_java_lang_Process,
	(void *) M_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process,
	(void *) M_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process,
	(void *) M_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_R_java_lang_Process,
	(void *) M_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process,
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
	{ "exit", "(I)V" },
	{ "freeMemory", "()J" },
	{ "maxMemory", "()J" },
	{ "gc", "()V" },
	{ "totalMemory", "()J" },
	{ "availableProcessors", "()I" },
	{ "exec", "(Ljava/lang/String;)Ljava/lang/Process;" },
	{ "exec", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;" },
	{ "exec", "(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;" },
	{ "exec", "([Ljava/lang/String;)Ljava/lang/Process;" },
	{ "exec", "([Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;" },
	{ "exec", "([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;" },
};

static FieldMetadata fields[] {
	{ "instance", &class_java_lang_Runtime, (intptr_t) &SF_java_lang_Runtime_instance, "Ljava/lang/Runtime;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Runtime, 0, "()V", 1 },
	{ "exit", (intptr_t) M_java_lang_Runtime_exit_int, VTABLE_java_lang_Runtime_exit_int, "(I)V", 1 },
	{ "freeMemory", (intptr_t) M_java_lang_Runtime_freeMemory_R_long, VTABLE_java_lang_Runtime_freeMemory_R_long, "()J", 1 },
	{ "maxMemory", (intptr_t) M_java_lang_Runtime_maxMemory_R_long, VTABLE_java_lang_Runtime_maxMemory_R_long, "()J", 1 },
	{ "gc", (intptr_t) M_java_lang_Runtime_gc, VTABLE_java_lang_Runtime_gc, "()V", 1 },
	{ "getRuntime", (intptr_t) SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime, 0, "()Ljava/lang/Runtime;", 9 },
	{ "totalMemory", (intptr_t) M_java_lang_Runtime_totalMemory_R_long, VTABLE_java_lang_Runtime_totalMemory_R_long, "()J", 1 },
	{ "totalMemoryImpl", (intptr_t) SM_java_lang_Runtime_totalMemoryImpl_R_long, 0, "()J", 266 },
	{ "freeMemoryImpl", (intptr_t) SM_java_lang_Runtime_freeMemoryImpl_R_long, 0, "()J", 266 },
	{ "maxMemoryImpl", (intptr_t) SM_java_lang_Runtime_maxMemoryImpl_R_long, 0, "()J", 266 },
	{ "availableProcessors", (intptr_t) M_java_lang_Runtime_availableProcessors_R_int, VTABLE_java_lang_Runtime_availableProcessors_R_int, "()I", 1 },
	{ "exec", (intptr_t) M_java_lang_Runtime_exec_java_lang_String_R_java_lang_Process, VTABLE_java_lang_Runtime_exec_java_lang_String_R_java_lang_Process, "(Ljava/lang/String;)Ljava/lang/Process;", 1 },
	{ "exec", (intptr_t) M_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_R_java_lang_Process, VTABLE_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_R_java_lang_Process, "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;", 1 },
	{ "exec", (intptr_t) M_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process, VTABLE_java_lang_Runtime_exec_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process, "(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;", 1 },
	{ "exec", (intptr_t) M_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process, VTABLE_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process, "([Ljava/lang/String;)Ljava/lang/Process;", 1 },
	{ "exec", (intptr_t) M_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_R_java_lang_Process, VTABLE_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_R_java_lang_Process, "([Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;", 1 },
	{ "exec", (intptr_t) M_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process, VTABLE_java_lang_Runtime_exec_Array1_java_lang_String_Array1_java_lang_String_java_io_File_R_java_lang_Process, "([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Runtime, 0, "()V", 8 },
};

Class class_java_lang_Runtime{
		.nativeName = (intptr_t) "java/lang/Runtime",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Runtime),
		.classVtable = (intptr_t) vtable_java_lang_Runtime,
		.staticInitializer = (intptr_t) clinit_java_lang_Runtime,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Runtime,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Runtime = registerClass(&class_java_lang_Runtime);

}
