#include "arc/util/Log_NoopLogHandler.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Log.h"
#include "arc/util/Log_LogHandler.h"
#include "arc/util/Log_NoopLogHandler.h"
#include "arc/util/Log_LogLevel.h"

extern "C" {


void mark_arc_util_Log$NoopLogHandler(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Log$NoopLogHandler *) object;
}

void clinit_arc_util_Log$NoopLogHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Log$NoopLogHandler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$NoopLogHandler:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log$NoopLogHandler(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(133);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_Log$NoopLogHandler_log_arc_util_Log$LogLevel_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$NoopLogHandler:log", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_Log$NoopLogHandler[] {
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
	(void *) M_arc_util_Log$NoopLogHandler_log_arc_util_Log$LogLevel_java_lang_String,
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
	{ "log", "(Larc/util/Log$LogLevel;Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_arc_util_Log$LogHandler, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Log$NoopLogHandler, 0, "()V", 1 },
	{ "log", (intptr_t) M_arc_util_Log$NoopLogHandler_log_arc_util_Log$LogLevel_java_lang_String, VTABLE_arc_util_Log$NoopLogHandler_log_arc_util_Log$LogLevel_java_lang_String, "(Larc/util/Log$LogLevel;Ljava/lang/String;)V", 1 },
};

Class class_arc_util_Log$NoopLogHandler{
		.nativeName = (intptr_t) "arc/util/Log$NoopLogHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Log$NoopLogHandler),
		.classVtable = (intptr_t) vtable_arc_util_Log$NoopLogHandler,
		.staticInitializer = (intptr_t) clinit_arc_util_Log$NoopLogHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Log$NoopLogHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_Log,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Log$NoopLogHandler = registerClass(&class_arc_util_Log$NoopLogHandler);

}

