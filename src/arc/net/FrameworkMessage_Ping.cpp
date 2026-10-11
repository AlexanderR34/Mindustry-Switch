#include "arc/net/FrameworkMessage_Ping.h"
#include "arc/net/FrameworkMessage.h"
#include "java/lang/Object.h"

extern "C" {


void mark_arc_net_FrameworkMessage$Ping(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_FrameworkMessage$Ping *) object;
}

void clinit_arc_net_FrameworkMessage$Ping(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_FrameworkMessage$Ping(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/FrameworkMessage$Ping:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_FrameworkMessage$Ping(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_net_FrameworkMessage$Ping[] {
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

static jclass interfaces[] { &class_arc_net_FrameworkMessage, };

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(arc_net_FrameworkMessage$Ping, F_id), "I", 1 },
	{ "isReply", &class_boolean, offsetof(arc_net_FrameworkMessage$Ping, F_isReply), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_FrameworkMessage$Ping, 0, "()V", 1 },
};

Class class_arc_net_FrameworkMessage$Ping{
		.nativeName = (intptr_t) "arc/net/FrameworkMessage$Ping",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_FrameworkMessage$Ping),
		.classVtable = (intptr_t) vtable_arc_net_FrameworkMessage$Ping,
		.staticInitializer = (intptr_t) clinit_arc_net_FrameworkMessage$Ping,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_FrameworkMessage$Ping,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_net_FrameworkMessage,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_FrameworkMessage$Ping = registerClass(&class_arc_net_FrameworkMessage$Ping);

}

