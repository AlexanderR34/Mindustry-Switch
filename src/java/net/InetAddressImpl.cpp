#include "java/net/InetAddressImpl.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "java/net/NetworkInterface.h"
#include "java/net/InetAddressImpl.h"

extern "C" {


void mark_java_net_InetAddressImpl(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_InetAddressImpl *) object;
}

void clinit_java_net_InetAddressImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_net_InetAddressImpl[] {
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
	{ "getLocalHostName", "()Ljava/lang/String;" },
	{ "lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;" },
	{ "getHostByAddr", "([B)Ljava/lang/String;" },
	{ "anyLocalAddress", "()Ljava/net/InetAddress;" },
	{ "loopbackAddress", "()Ljava/net/InetAddress;" },
	{ "isReachable", "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z" },
};

static MethodMetadata methods[] {
	{ "getLocalHostName", 0, INDEX_java_net_InetAddressImpl_getLocalHostName_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "lookupAllHostAddr", 0, INDEX_java_net_InetAddressImpl_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress, "(Ljava/lang/String;)[Ljava/net/InetAddress;", 1025 },
	{ "getHostByAddr", 0, INDEX_java_net_InetAddressImpl_getHostByAddr_Array1_byte_R_java_lang_String, "([B)Ljava/lang/String;", 1025 },
	{ "anyLocalAddress", 0, INDEX_java_net_InetAddressImpl_anyLocalAddress_R_java_net_InetAddress, "()Ljava/net/InetAddress;", 1025 },
	{ "loopbackAddress", 0, INDEX_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress, "()Ljava/net/InetAddress;", 1025 },
	{ "isReachable", 0, INDEX_java_net_InetAddressImpl_isReachable_java_net_InetAddress_int_java_net_NetworkInterface_int_R_boolean, "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z", 1025 },
};

Class class_java_net_InetAddressImpl{
		.nativeName = (intptr_t) "java/net/InetAddressImpl",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InetAddressImpl),
		.classVtable = (intptr_t) vtable_java_net_InetAddressImpl,
		.staticInitializer = (intptr_t) clinit_java_net_InetAddressImpl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetAddressImpl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1536,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetAddressImpl = registerClass(&class_java_net_InetAddressImpl);

}
