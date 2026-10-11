#include "mindustry/async/AsyncProcess.h"
#include "mindustry/async/AsyncProcess.h"
#include "java/lang/Object.h"

extern "C" {


void mark_mindustry_async_AsyncProcess(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_async_AsyncProcess *) object;
}

void clinit_mindustry_async_AsyncProcess(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_async_AsyncProcess_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncProcess:init", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(6);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_async_AsyncProcess_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncProcess:reset", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(9);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_async_AsyncProcess_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncProcess:begin", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(12);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_async_AsyncProcess_process(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncProcess:process", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_async_AsyncProcess_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncProcess:end", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_async_AsyncProcess_shouldProcess_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AsyncProcess:shouldProcess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_async_AsyncProcess[] {
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
	(void *) M_mindustry_async_AsyncProcess_init,
	(void *) M_mindustry_async_AsyncProcess_reset,
	(void *) M_mindustry_async_AsyncProcess_begin,
	(void *) M_mindustry_async_AsyncProcess_process,
	(void *) M_mindustry_async_AsyncProcess_end,
	(void *) M_mindustry_async_AsyncProcess_shouldProcess_R_boolean,
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
	{ "init", "()V" },
	{ "reset", "()V" },
	{ "begin", "()V" },
	{ "process", "()V" },
	{ "end", "()V" },
	{ "shouldProcess", "()Z" },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) M_mindustry_async_AsyncProcess_init, INDEX_mindustry_async_AsyncProcess_init, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_async_AsyncProcess_reset, INDEX_mindustry_async_AsyncProcess_reset, "()V", 1 },
	{ "begin", (intptr_t) M_mindustry_async_AsyncProcess_begin, INDEX_mindustry_async_AsyncProcess_begin, "()V", 1 },
	{ "process", (intptr_t) M_mindustry_async_AsyncProcess_process, INDEX_mindustry_async_AsyncProcess_process, "()V", 1 },
	{ "end", (intptr_t) M_mindustry_async_AsyncProcess_end, INDEX_mindustry_async_AsyncProcess_end, "()V", 1 },
	{ "shouldProcess", (intptr_t) M_mindustry_async_AsyncProcess_shouldProcess_R_boolean, INDEX_mindustry_async_AsyncProcess_shouldProcess_R_boolean, "()Z", 1 },
};

Class class_mindustry_async_AsyncProcess{
		.nativeName = (intptr_t) "mindustry/async/AsyncProcess",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_async_AsyncProcess),
		.classVtable = (intptr_t) vtable_mindustry_async_AsyncProcess,
		.staticInitializer = (intptr_t) clinit_mindustry_async_AsyncProcess,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_async_AsyncProcess,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_async_AsyncProcess = registerClass(&class_mindustry_async_AsyncProcess);

}
