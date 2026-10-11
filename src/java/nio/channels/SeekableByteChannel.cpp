#include "java/nio/channels/SeekableByteChannel.h"
#include "java/nio/channels/ByteChannel.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/channels/WritableByteChannel.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channel.h"
#include "java/lang/AutoCloseable.h"
#include "java/nio/channels/SeekableByteChannel.h"
#include "java/nio/channels/ReadableByteChannel.h"

extern "C" {


void mark_java_nio_channels_SeekableByteChannel(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_channels_SeekableByteChannel *) object;
}

void clinit_java_nio_channels_SeekableByteChannel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_nio_channels_SeekableByteChannel[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "close", "()V" },
	{ "isOpen", "()Z" },
	{ "read", "(Ljava/nio/ByteBuffer;)I" },
	{ "write", "(Ljava/nio/ByteBuffer;)I" },
	{ "position", "()J" },
	{ "position", "(J)Ljava/nio/channels/SeekableByteChannel;" },
	{ "size", "()J" },
	{ "truncate", "(J)Ljava/nio/channels/SeekableByteChannel;" },
};

static jclass interfaces[] { &class_java_nio_channels_ByteChannel, };

static MethodMetadata methods[] {
	{ "read", 0, INDEX_java_nio_channels_SeekableByteChannel_read_java_nio_ByteBuffer_R_int, "(Ljava/nio/ByteBuffer;)I", 1025 },
	{ "write", 0, INDEX_java_nio_channels_SeekableByteChannel_write_java_nio_ByteBuffer_R_int, "(Ljava/nio/ByteBuffer;)I", 1025 },
	{ "position", 0, INDEX_java_nio_channels_SeekableByteChannel_position_R_long, "()J", 1025 },
	{ "position", 0, INDEX_java_nio_channels_SeekableByteChannel_position_long_R_java_nio_channels_SeekableByteChannel, "(J)Ljava/nio/channels/SeekableByteChannel;", 1025 },
	{ "size", 0, INDEX_java_nio_channels_SeekableByteChannel_size_R_long, "()J", 1025 },
	{ "truncate", 0, INDEX_java_nio_channels_SeekableByteChannel_truncate_long_R_java_nio_channels_SeekableByteChannel, "(J)Ljava/nio/channels/SeekableByteChannel;", 1025 },
};

Class class_java_nio_channels_SeekableByteChannel{
		.nativeName = (intptr_t) "java/nio/channels/SeekableByteChannel",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_channels_SeekableByteChannel),
		.classVtable = (intptr_t) vtable_java_nio_channels_SeekableByteChannel,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_SeekableByteChannel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_SeekableByteChannel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_SeekableByteChannel = registerClass(&class_java_nio_channels_SeekableByteChannel);

}
