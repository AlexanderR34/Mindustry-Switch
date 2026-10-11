#include "java/net/InetAddress_CachedLocalHost.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "java/lang/System.h"
#include "java/net/InetAddress_CachedLocalHost.h"

extern "C" {


void mark_java_net_InetAddress$CachedLocalHost(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_InetAddress$CachedLocalHost *) object;
	if (self->F_host)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_host)->clazz)->markFunction)((jobject) self->F_host, mark, depth + 1);
	if (self->F_addr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_addr)->clazz)->markFunction)((jobject) self->F_addr, mark, depth + 1);
}

void clinit_java_net_InetAddress$CachedLocalHost(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_InetAddress$CachedLocalHost_java_lang_String_java_net_InetAddress(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$CachedLocalHost:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress$CachedLocalHost(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1552);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1550);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	((java_net_InetAddress$CachedLocalHost *) NULL_CHECK(sp[0].o))->F_expiryTime = (temp0 + (jlong(5000000000ll)));
	LINE_NUMBER(1553);
	((java_net_InetAddress$CachedLocalHost *) NULL_CHECK((frame[0].o)))->F_host = (jref) (frame[1].o);
	LINE_NUMBER(1554);
	((java_net_InetAddress$CachedLocalHost *) NULL_CHECK((frame[0].o)))->F_addr = (jref) (frame[2].o);
	LINE_NUMBER(1555);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InetAddress$CachedLocalHost[] {
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
	{ "host", &class_java_lang_String, offsetof(java_net_InetAddress$CachedLocalHost, F_host), "Ljava/lang/String;", 16 },
	{ "addr", &class_java_net_InetAddress, offsetof(java_net_InetAddress$CachedLocalHost, F_addr), "Ljava/net/InetAddress;", 16 },
	{ "expiryTime", &class_long, offsetof(java_net_InetAddress$CachedLocalHost, F_expiryTime), "J", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_InetAddress$CachedLocalHost_java_lang_String_java_net_InetAddress, 0, "(Ljava/lang/String;Ljava/net/InetAddress;)V", 0 },
};

Class class_java_net_InetAddress$CachedLocalHost{
		.nativeName = (intptr_t) "java/net/InetAddress$CachedLocalHost",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InetAddress$CachedLocalHost),
		.classVtable = (intptr_t) vtable_java_net_InetAddress$CachedLocalHost,
		.staticInitializer = (intptr_t) clinit_java_net_InetAddress$CachedLocalHost,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetAddress$CachedLocalHost,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_InetAddress,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetAddress$CachedLocalHost = registerClass(&class_java_net_InetAddress$CachedLocalHost);

}

