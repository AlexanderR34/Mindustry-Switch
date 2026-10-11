#include "arc/net/FrameworkMessage.h"
#include "arc/net/FrameworkMessage.h"
#include "java/lang/Object.h"
#include "arc/net/FrameworkMessage_DiscoverHost.h"
#include "arc/net/FrameworkMessage_KeepAlive.h"
#include "arc/net/FrameworkMessage_RegisterUDP.h"
#include "arc/net/FrameworkMessage_RegisterTCP.h"
#include "arc/net/FrameworkMessage_Ping.h"

extern "C" {

jobject SF_arc_net_FrameworkMessage_keepAlive;
jobject SF_arc_net_FrameworkMessage_discoverHost;

void mark_arc_net_FrameworkMessage(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_net_FrameworkMessage_keepAlive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_net_FrameworkMessage_keepAlive)->clazz)->markFunction)((jobject) SF_arc_net_FrameworkMessage_keepAlive, mark, depth + 1);
		if (SF_arc_net_FrameworkMessage_discoverHost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_net_FrameworkMessage_discoverHost)->clazz)->markFunction)((jobject) SF_arc_net_FrameworkMessage_discoverHost, mark, depth + 1);
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
	auto self = (arc_net_FrameworkMessage *) object;
}

void clinit_arc_net_FrameworkMessage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/FrameworkMessage:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_FrameworkMessage(ctx);
	{
	LINE_NUMBER(8);
	clinit_arc_net_FrameworkMessage$KeepAlive(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_net_FrameworkMessage$KeepAlive);
	init_arc_net_FrameworkMessage$KeepAlive(ctx, sp[0].o);
	clinit_arc_net_FrameworkMessage(ctx);
	SF_arc_net_FrameworkMessage_keepAlive = sp[0].o;
	LINE_NUMBER(9);
	clinit_arc_net_FrameworkMessage$DiscoverHost(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_net_FrameworkMessage$DiscoverHost);
	init_arc_net_FrameworkMessage$DiscoverHost(ctx, sp[0].o);
	clinit_arc_net_FrameworkMessage(ctx);
	SF_arc_net_FrameworkMessage_discoverHost = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_net_FrameworkMessage[] {
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

static jclass innerClasses[] {
	&class_arc_net_FrameworkMessage$KeepAlive,
	&class_arc_net_FrameworkMessage$DiscoverHost,
	&class_arc_net_FrameworkMessage$Ping,
	&class_arc_net_FrameworkMessage$RegisterUDP,
	&class_arc_net_FrameworkMessage$RegisterTCP,
};

static FieldMetadata fields[] {
	{ "keepAlive", &class_arc_net_FrameworkMessage$KeepAlive, (intptr_t) &SF_arc_net_FrameworkMessage_keepAlive, "Larc/net/FrameworkMessage$KeepAlive;", 25 },
	{ "discoverHost", &class_arc_net_FrameworkMessage$DiscoverHost, (intptr_t) &SF_arc_net_FrameworkMessage_discoverHost, "Larc/net/FrameworkMessage$DiscoverHost;", 25 },
};

static MethodMetadata methods[] {
	{ "<clinit>", (intptr_t) clinit_arc_net_FrameworkMessage, 0, "()V", 8 },
};

Class class_arc_net_FrameworkMessage{
		.nativeName = (intptr_t) "arc/net/FrameworkMessage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_FrameworkMessage),
		.classVtable = (intptr_t) vtable_arc_net_FrameworkMessage,
		.staticInitializer = (intptr_t) clinit_arc_net_FrameworkMessage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_FrameworkMessage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_FrameworkMessage = registerClass(&class_arc_net_FrameworkMessage);

}
