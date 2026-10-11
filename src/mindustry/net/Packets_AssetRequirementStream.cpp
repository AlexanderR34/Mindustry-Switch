#include "mindustry/net/Packets_AssetRequirementStream.h"
#include "java/lang/Object.h"
#include "mindustry/net/Packets.h"
#include "mindustry/net/Streamable.h"
#include "mindustry/net/Packet.h"

extern "C" {


void mark_mindustry_net_Packets$AssetRequirementStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_net_Streamable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_net_Packets$AssetRequirementStream *) object;
}

void clinit_mindustry_net_Packets$AssetRequirementStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Streamable(ctx);
}

void init_mindustry_net_Packets$AssetRequirementStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$AssetRequirementStream:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$AssetRequirementStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(78);
	init_mindustry_net_Streamable(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Packets$AssetRequirementStream[] {
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
	(void *) M_mindustry_net_Packet_read_arc_util_io_Reads,
	(void *) M_mindustry_net_Packet_write_arc_util_io_Writes,
	(void *) M_mindustry_net_Streamable_allow_boolean_R_boolean,
	(void *) M_mindustry_net_Packet_read_arc_util_io_Reads_int,
	(void *) M_mindustry_net_Packet_handled,
	(void *) M_mindustry_net_Streamable_getPriority_R_int,
	(void *) M_mindustry_net_Packet_handleClient,
	(void *) M_mindustry_net_Packet_handleServer_mindustry_net_NetConnection,
	(void *) M_mindustry_net_Streamable_incremental_R_boolean,
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
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "allow", "(Z)Z" },
	{ "read", "(Larc/util/io/Reads;I)V" },
	{ "handled", "()V" },
	{ "getPriority", "()I" },
	{ "handleClient", "()V" },
	{ "handleServer", "(Lmindustry/net/NetConnection;)V" },
	{ "incremental", "()Z" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Packets$AssetRequirementStream, 0, "()V", 1 },
};

Class class_mindustry_net_Packets$AssetRequirementStream{
		.nativeName = (intptr_t) "mindustry/net/Packets$AssetRequirementStream",
		.parentClass = (intptr_t) &class_mindustry_net_Streamable,
		.size = sizeof(mindustry_net_Packets$AssetRequirementStream),
		.classVtable = (intptr_t) vtable_mindustry_net_Packets$AssetRequirementStream,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Packets$AssetRequirementStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Packets$AssetRequirementStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Packets,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Packets$AssetRequirementStream = registerClass(&class_mindustry_net_Packets$AssetRequirementStream);

}

