#include "mindustry/Vars_invoke_arc_util_Log_LogHandler_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/Writer.h"
#include "arc/util/Log_LogHandler.h"
#include "mindustry/Vars_invoke_arc_util_Log_LogHandler_1.h"
#include "mindustry/Vars.h"
#include "arc/util/Log_LogLevel.h"

extern "C" {


void mark_mindustry_Vars_invoke_arc_util_Log$LogHandler_1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_Vars_invoke_arc_util_Log$LogHandler_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_mindustry_Vars_invoke_arc_util_Log$LogHandler_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_log_arc_util_Log$LogLevel_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/Vars_invoke_arc_util_Log$LogHandler_1:log", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_Vars_invoke_arc_util_Log$LogHandler_1 *) self;
	SM_mindustry_Vars_lambda$loadFileLogger$0_arc_util_Log$LogHandler_java_io_Writer_arc_util_Log$LogLevel_java_lang_String(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_Vars_invoke_arc_util_Log$LogHandler_1[] {
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
	(void *) M_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_log_arc_util_Log$LogLevel_java_lang_String,
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

static FieldMetadata fields[] {
	{ "field0", &class_arc_util_Log$LogHandler, offsetof(mindustry_Vars_invoke_arc_util_Log$LogHandler_1, F_field0), "Larc/util/Log$LogHandler;", 0 },
	{ "field1", &class_java_io_Writer, offsetof(mindustry_Vars_invoke_arc_util_Log$LogHandler_1, F_field1), "Ljava/io/Writer;", 0 },
};

static MethodMetadata methods[] {
	{ "log", (intptr_t) M_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_log_arc_util_Log$LogLevel_java_lang_String, VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_log_arc_util_Log$LogLevel_java_lang_String, "(Larc/util/Log$LogLevel;Ljava/lang/String;)V", 0 },
};

Class class_mindustry_Vars_invoke_arc_util_Log$LogHandler_1{
		.nativeName = (intptr_t) "mindustry/Vars_invoke_arc_util_Log$LogHandler_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_Vars_invoke_arc_util_Log$LogHandler_1),
		.classVtable = (intptr_t) vtable_mindustry_Vars_invoke_arc_util_Log$LogHandler_1,
		.staticInitializer = (intptr_t) clinit_mindustry_Vars_invoke_arc_util_Log$LogHandler_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_Vars_invoke_arc_util_Log$LogHandler_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_Vars_invoke_arc_util_Log$LogHandler_1 = registerClass(&class_mindustry_Vars_invoke_arc_util_Log$LogHandler_1);

}

