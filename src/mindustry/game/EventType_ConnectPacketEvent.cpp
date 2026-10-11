#include "mindustry/game/EventType_ConnectPacketEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "mindustry/net/Packets_ConnectPacket.h"
#include "mindustry/game/EventType_ConnectPacketEvent.h"
#include "mindustry/net/NetConnection.h"

extern "C" {


void mark_mindustry_game_EventType$ConnectPacketEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$ConnectPacketEvent *) object;
	if (self->F_connection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connection)->clazz)->markFunction)((jobject) self->F_connection, mark, depth + 1);
	if (self->F_packet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packet)->clazz)->markFunction)((jobject) self->F_packet, mark, depth + 1);
}

void clinit_mindustry_game_EventType$ConnectPacketEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$ConnectPacketEvent_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$ConnectPacketEvent:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$ConnectPacketEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(753);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(754);
	((mindustry_game_EventType$ConnectPacketEvent *) NULL_CHECK((frame[0].o)))->F_connection = (jref) (frame[1].o);
	LINE_NUMBER(755);
	((mindustry_game_EventType$ConnectPacketEvent *) NULL_CHECK((frame[0].o)))->F_packet = (jref) (frame[2].o);
	LINE_NUMBER(756);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$ConnectPacketEvent[] {
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
	{ "connection", &class_mindustry_net_NetConnection, offsetof(mindustry_game_EventType$ConnectPacketEvent, F_connection), "Lmindustry/net/NetConnection;", 17 },
	{ "packet", &class_mindustry_net_Packets$ConnectPacket, offsetof(mindustry_game_EventType$ConnectPacketEvent, F_packet), "Lmindustry/net/Packets$ConnectPacket;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$ConnectPacketEvent_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket, 0, "(Lmindustry/net/NetConnection;Lmindustry/net/Packets$ConnectPacket;)V", 1 },
};

Class class_mindustry_game_EventType$ConnectPacketEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$ConnectPacketEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$ConnectPacketEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$ConnectPacketEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$ConnectPacketEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$ConnectPacketEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_EventType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_mindustry_game_EventType$ConnectPacketEvent = registerClass(&class_mindustry_game_EventType$ConnectPacketEvent);

}

