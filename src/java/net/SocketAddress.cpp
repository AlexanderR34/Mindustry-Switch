#include "java/net/SocketAddress.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

extern "C" {

jlong SF_java_net_SocketAddress_serialVersionUID;

void mark_java_net_SocketAddress(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_SocketAddress *) object;
}

void clinit_java_net_SocketAddress(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_net_SocketAddress_serialVersionUID = jlong(5215720748342549866ll);
}

void init_java_net_SocketAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/SocketAddress:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_SocketAddress(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_SocketAddress[] {
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

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_net_SocketAddress_serialVersionUID, "J", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_SocketAddress, 0, "()V", 1 },
};

Class class_java_net_SocketAddress{
		.nativeName = (intptr_t) "java/net/SocketAddress",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_SocketAddress),
		.classVtable = (intptr_t) vtable_java_net_SocketAddress,
		.staticInitializer = (intptr_t) clinit_java_net_SocketAddress,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_SocketAddress,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_SocketAddress = registerClass(&class_java_net_SocketAddress);

}
