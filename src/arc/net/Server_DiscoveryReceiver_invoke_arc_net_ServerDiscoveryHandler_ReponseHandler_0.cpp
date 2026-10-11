#include "arc/net/Server_DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler_ReponseHandler_0.h"
#include "arc/net/Server_DiscoveryReceiver.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "arc/net/ServerDiscoveryHandler_ReponseHandler.h"
#include "java/net/DatagramPacket.h"
#include "arc/net/Server_DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler_ReponseHandler_0.h"

extern "C" {


void mark_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0_respond_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/net/Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0:respond", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0 *) self;
	M_arc_net_Server$DiscoveryReceiver_lambda$start$1_java_net_DatagramPacket_java_nio_ByteBuffer(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0[] {
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
	(void *) M_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0_respond_java_nio_ByteBuffer,
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
	{ "respond", "(Ljava/nio/ByteBuffer;)V" },
};

static jclass interfaces[] { &class_arc_net_ServerDiscoveryHandler$ReponseHandler, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_net_Server$DiscoveryReceiver, offsetof(arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0, F_field0), "Larc/net/Server$DiscoveryReceiver;", 0 },
	{ "field1", &class_java_net_DatagramPacket, offsetof(arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0, F_field1), "Ljava/net/DatagramPacket;", 0 },
};

static MethodMetadata methods[] {
	{ "respond", (intptr_t) M_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0_respond_java_nio_ByteBuffer, VTABLE_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0_respond_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;)V", 0 },
};

Class class_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0{
		.nativeName = (intptr_t) "arc/net/Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0),
		.classVtable = (intptr_t) vtable_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0,
		.staticInitializer = (intptr_t) clinit_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0,
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
static bool registered_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0 = registerClass(&class_arc_net_Server$DiscoveryReceiver_invoke_arc_net_ServerDiscoveryHandler$ReponseHandler_0);

}

