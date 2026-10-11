#include "mindustry/net/Streamable.h"
#include "mindustry/net/Streamable_StreamBuilder.h"
#include "java/lang/Object.h"
#include "mindustry/net/Streamable_IncrementalStream.h"
#include "java/io/ByteArrayInputStream.h"
#include "mindustry/net/Streamable.h"
#include "mindustry/net/Packet.h"

extern "C" {


void mark_mindustry_net_Streamable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_net_Packet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_net_Streamable *) object;
	if (self->F_stream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stream)->clazz)->markFunction)((jobject) self->F_stream, mark, depth + 1);
}

void clinit_mindustry_net_Streamable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_net_Packet(ctx);
}

void init_mindustry_net_Streamable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Streamable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_net_Packet(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_net_Streamable_getPriority_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable:getPriority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return (jint(2));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Streamable_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable:allow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(19);
	if ((frame[1].i) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_net_Streamable_incremental_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Streamable:incremental", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Streamable[] {
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

static jclass innerClasses[] {
	&class_mindustry_net_Streamable$IncrementalStream,
	&class_mindustry_net_Streamable$StreamBuilder,
};

static FieldMetadata fields[] {
	{ "stream", &class_java_io_ByteArrayInputStream, offsetof(mindustry_net_Streamable, F_stream), "Ljava/io/ByteArrayInputStream;", 129 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Streamable, 0, "()V", 1 },
	{ "getPriority", (intptr_t) M_mindustry_net_Streamable_getPriority_R_int, VTABLE_mindustry_net_Streamable_getPriority_R_int, "()I", 1 },
	{ "allow", (intptr_t) M_mindustry_net_Streamable_allow_boolean_R_boolean, VTABLE_mindustry_net_Streamable_allow_boolean_R_boolean, "(Z)Z", 1 },
	{ "incremental", (intptr_t) M_mindustry_net_Streamable_incremental_R_boolean, VTABLE_mindustry_net_Streamable_incremental_R_boolean, "()Z", 1 },
};

Class class_mindustry_net_Streamable{
		.nativeName = (intptr_t) "mindustry/net/Streamable",
		.parentClass = (intptr_t) &class_mindustry_net_Packet,
		.size = sizeof(mindustry_net_Streamable),
		.classVtable = (intptr_t) vtable_mindustry_net_Streamable,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Streamable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Streamable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Streamable = registerClass(&class_mindustry_net_Streamable);

}
