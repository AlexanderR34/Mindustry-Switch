#include "arc/util/CommandHandler_CommandResponse.h"
#include "java/lang/Object.h"
#include "arc/util/CommandHandler_Command.h"
#include "java/lang/String.h"
#include "arc/util/CommandHandler_CommandResponse.h"
#include "arc/util/CommandHandler_ResponseType.h"
#include "arc/util/CommandHandler.h"

extern "C" {


void mark_arc_util_CommandHandler$CommandResponse(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_CommandHandler$CommandResponse *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_command)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_command)->clazz)->markFunction)((jobject) self->F_command, mark, depth + 1);
	if (self->F_runCommand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runCommand)->clazz)->markFunction)((jobject) self->F_runCommand, mark, depth + 1);
}

void clinit_arc_util_CommandHandler$CommandResponse(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_CommandHandler$CommandResponse_arc_util_CommandHandler$ResponseType_arc_util_CommandHandler$Command_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler$CommandResponse:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler$CommandResponse(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(218);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(219);
	((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(220);
	((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[0].o)))->F_command = (jref) (frame[2].o);
	LINE_NUMBER(221);
	((arc_util_CommandHandler$CommandResponse *) NULL_CHECK((frame[0].o)))->F_runCommand = (jref) (frame[3].o);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_CommandHandler$CommandResponse[] {
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
};

static FieldMetadata fields[] {
	{ "type", &class_arc_util_CommandHandler$ResponseType, offsetof(arc_util_CommandHandler$CommandResponse, F_type), "Larc/util/CommandHandler$ResponseType;", 17 },
	{ "command", &class_arc_util_CommandHandler$Command, offsetof(arc_util_CommandHandler$CommandResponse, F_command), "Larc/util/CommandHandler$Command;", 17 },
	{ "runCommand", &class_java_lang_String, offsetof(arc_util_CommandHandler$CommandResponse, F_runCommand), "Ljava/lang/String;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_CommandHandler$CommandResponse_arc_util_CommandHandler$ResponseType_arc_util_CommandHandler$Command_java_lang_String, 0, "(Larc/util/CommandHandler$ResponseType;Larc/util/CommandHandler$Command;Ljava/lang/String;)V", 1 },
};

Class class_arc_util_CommandHandler$CommandResponse{
		.nativeName = (intptr_t) "arc/util/CommandHandler$CommandResponse",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_CommandHandler$CommandResponse),
		.classVtable = (intptr_t) vtable_arc_util_CommandHandler$CommandResponse,
		.staticInitializer = (intptr_t) clinit_arc_util_CommandHandler$CommandResponse,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_CommandHandler$CommandResponse,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_CommandHandler,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_CommandHandler$CommandResponse = registerClass(&class_arc_util_CommandHandler$CommandResponse);

}

