#include "arc/util/Log_DefaultLogHandler.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/util/Log.h"
#include "arc/util/Log_DefaultLogHandler.h"
#include "arc/util/Log_LogHandler.h"
#include "arc/util/Log_LogLevel.h"
#include "java/lang/System.h"
#include "java/io/PrintStream.h"

extern "C" {


void mark_arc_util_Log$DefaultLogHandler(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Log$DefaultLogHandler *) object;
}

void clinit_arc_util_Log$DefaultLogHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Log$DefaultLogHandler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$DefaultLogHandler:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log$DefaultLogHandler(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(121);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_Log$DefaultLogHandler_log_arc_util_Log$LogLevel_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$DefaultLogHandler:log", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(124);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	LINE_NUMBER(125);
	sp[2].o = frame[1].o;
	clinit_arc_util_Log$LogLevel(ctx);
	sp[3].o = (jobject)SF_arc_util_Log$LogLevel_debug;
	sp += 2;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"&lc&fb"_j));
	goto label_3;
label_2:;
	{
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_info;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"&fb"_j));
	goto label_3;
label_4:;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[1].o;
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_warn;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"&ly&fb"_j));
	goto label_3;
label_5:;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[1].o;
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_err;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"&lr&fb"_j));
	goto label_3;
label_6:;
	LINE_NUMBER(129);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"&fr"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	LINE_NUMBER(124);
	sp[1].o = (jobject)SM_arc_util_Log_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Log$DefaultLogHandler[] {
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
	(void *) M_arc_util_Log$DefaultLogHandler_log_arc_util_Log$LogLevel_java_lang_String,
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
	{ "<init>", (intptr_t) init_arc_util_Log$DefaultLogHandler, 0, "()V", 1 },
	{ "log", (intptr_t) M_arc_util_Log$DefaultLogHandler_log_arc_util_Log$LogLevel_java_lang_String, VTABLE_arc_util_Log$DefaultLogHandler_log_arc_util_Log$LogLevel_java_lang_String, "(Larc/util/Log$LogLevel;Ljava/lang/String;)V", 1 },
};

Class class_arc_util_Log$DefaultLogHandler{
		.nativeName = (intptr_t) "arc/util/Log$DefaultLogHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Log$DefaultLogHandler),
		.classVtable = (intptr_t) vtable_arc_util_Log$DefaultLogHandler,
		.staticInitializer = (intptr_t) clinit_arc_util_Log$DefaultLogHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Log$DefaultLogHandler,
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
static bool registered_arc_util_Log$DefaultLogHandler = registerClass(&class_arc_util_Log$DefaultLogHandler);

}

