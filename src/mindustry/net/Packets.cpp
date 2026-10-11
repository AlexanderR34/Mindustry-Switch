#include "mindustry/net/Packets.h"
#include "mindustry/net/Packets_TextureStream.h"
#include "mindustry/net/Packets_Connect.h"
#include "mindustry/net/Packets_AdminAction.h"
#include "java/lang/Object.h"
#include "mindustry/net/Packets_ConnectPacket.h"
#include "mindustry/net/Packets_AssetStream.h"
#include "mindustry/net/Packets_AssetRequirementStream.h"
#include "mindustry/net/Packets_StreamBegin.h"
#include "mindustry/net/Packets_WorldStream.h"
#include "mindustry/net/Packets_Disconnect.h"
#include "mindustry/net/Packets_StreamChunk.h"
#include "mindustry/net/Packets_KickReason.h"

extern "C" {


void mark_mindustry_net_Packets(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Packets *) object;
}

void clinit_mindustry_net_Packets(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_Packets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Packets[] {
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
	&class_mindustry_net_Packets$ConnectPacket,
	&class_mindustry_net_Packets$StreamChunk,
	&class_mindustry_net_Packets$StreamBegin,
	&class_mindustry_net_Packets$AssetStream,
	&class_mindustry_net_Packets$AssetRequirementStream,
	&class_mindustry_net_Packets$TextureStream,
	&class_mindustry_net_Packets$WorldStream,
	&class_mindustry_net_Packets$Disconnect,
	&class_mindustry_net_Packets$Connect,
	&class_mindustry_net_Packets$AdminAction,
	&class_mindustry_net_Packets$KickReason,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Packets, 0, "()V", 1 },
};

Class class_mindustry_net_Packets{
		.nativeName = (intptr_t) "mindustry/net/Packets",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Packets),
		.classVtable = (intptr_t) vtable_mindustry_net_Packets,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Packets,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Packets,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 11,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Packets = registerClass(&class_mindustry_net_Packets);

}
