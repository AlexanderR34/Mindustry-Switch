#include "arc/net/NetSerializer.h"
#include "java/nio/ByteBuffer.h"
#include "arc/net/NetSerializer.h"
#include "java/lang/Object.h"

extern "C" {


void mark_arc_net_NetSerializer(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_NetSerializer *) object;
}

void clinit_arc_net_NetSerializer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jint M_arc_net_NetSerializer_getLengthLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetSerializer:getLengthLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (jint(2));
	}

	popStackFrame(ctx);
}

void M_arc_net_NetSerializer_writeLength_java_nio_ByteBuffer_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetSerializer:writeLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (jshort((frame[2].i))));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_net_NetSerializer_readLength_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/NetSerializer:readLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getShort_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_getShort_R_short])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 & (jint(65535)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_net_NetSerializer[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_net_NetSerializer_getLengthLength_R_int,
	(void *) M_arc_net_NetSerializer_writeLength_java_nio_ByteBuffer_int,
	(void *) M_arc_net_NetSerializer_readLength_java_nio_ByteBuffer_R_int,
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
	{ "write", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;)V" },
	{ "read", "(Ljava/nio/ByteBuffer;)Ljava/lang/Object;" },
	{ "getLengthLength", "()I" },
	{ "writeLength", "(Ljava/nio/ByteBuffer;I)V" },
	{ "readLength", "(Ljava/nio/ByteBuffer;)I" },
};

static MethodMetadata methods[] {
	{ "write", 0, INDEX_arc_net_NetSerializer_write_java_nio_ByteBuffer_java_lang_Object, "(Ljava/nio/ByteBuffer;Ljava/lang/Object;)V", 1025 },
	{ "read", 0, INDEX_arc_net_NetSerializer_read_java_nio_ByteBuffer_R_java_lang_Object, "(Ljava/nio/ByteBuffer;)Ljava/lang/Object;", 1025 },
	{ "getLengthLength", (intptr_t) M_arc_net_NetSerializer_getLengthLength_R_int, INDEX_arc_net_NetSerializer_getLengthLength_R_int, "()I", 1 },
	{ "writeLength", (intptr_t) M_arc_net_NetSerializer_writeLength_java_nio_ByteBuffer_int, INDEX_arc_net_NetSerializer_writeLength_java_nio_ByteBuffer_int, "(Ljava/nio/ByteBuffer;I)V", 1 },
	{ "readLength", (intptr_t) M_arc_net_NetSerializer_readLength_java_nio_ByteBuffer_R_int, INDEX_arc_net_NetSerializer_readLength_java_nio_ByteBuffer_R_int, "(Ljava/nio/ByteBuffer;)I", 1 },
};

Class class_arc_net_NetSerializer{
		.nativeName = (intptr_t) "arc/net/NetSerializer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_NetSerializer),
		.classVtable = (intptr_t) vtable_arc_net_NetSerializer,
		.staticInitializer = (intptr_t) clinit_arc_net_NetSerializer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_NetSerializer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_NetSerializer = registerClass(&class_arc_net_NetSerializer);

}
