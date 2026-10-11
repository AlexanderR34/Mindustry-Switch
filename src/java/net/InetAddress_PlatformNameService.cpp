#include "java/net/InetAddress_PlatformNameService.h"
#include "java/lang/Object.h"
#include "java/net/InetAddress_NameService.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "java/net/InetAddress_PlatformNameService.h"
#include "java/net/InetAddress_1.h"
#include "java/net/InetAddressImpl.h"

extern "C" {


void mark_java_net_InetAddress$PlatformNameService(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_InetAddress$PlatformNameService *) object;
}

void clinit_java_net_InetAddress$PlatformNameService(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_InetAddress$PlatformNameService(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$PlatformNameService:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress$PlatformNameService(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(904);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$PlatformNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$PlatformNameService:lookupAllHostAddr", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(909);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_impl;
	sp[0].o = (jobject)((func_java_net_InetAddressImpl_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$PlatformNameService_getHostByAddr_Array1_byte_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$PlatformNameService:getHostByAddr", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(915);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_impl;
	sp[0].o = (jobject)((func_java_net_InetAddressImpl_getHostByAddr_Array1_byte_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_getHostByAddr_Array1_byte_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_net_InetAddress$PlatformNameService_java_net_InetAddress$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$PlatformNameService:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress$PlatformNameService(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(904);
	init_java_net_InetAddress$PlatformNameService(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InetAddress$PlatformNameService[] {
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
	(void *) M_java_net_InetAddress$PlatformNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress,
	(void *) M_java_net_InetAddress$PlatformNameService_getHostByAddr_Array1_byte_R_java_lang_String,
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
	{ "lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;" },
	{ "getHostByAddr", "([B)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_net_InetAddress$NameService, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_InetAddress$PlatformNameService, 0, "()V", 2 },
	{ "lookupAllHostAddr", (intptr_t) M_java_net_InetAddress$PlatformNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress, VTABLE_java_net_InetAddress$PlatformNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress, "(Ljava/lang/String;)[Ljava/net/InetAddress;", 1 },
	{ "getHostByAddr", (intptr_t) M_java_net_InetAddress$PlatformNameService_getHostByAddr_Array1_byte_R_java_lang_String, VTABLE_java_net_InetAddress$PlatformNameService_getHostByAddr_Array1_byte_R_java_lang_String, "([B)Ljava/lang/String;", 1 },
	{ "<init>", (intptr_t) init_java_net_InetAddress$PlatformNameService_java_net_InetAddress$1, 0, "(Ljava/net/InetAddress$1;)V", 4096 },
};

Class class_java_net_InetAddress$PlatformNameService{
		.nativeName = (intptr_t) "java/net/InetAddress$PlatformNameService",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InetAddress$PlatformNameService),
		.classVtable = (intptr_t) vtable_java_net_InetAddress$PlatformNameService,
		.staticInitializer = (intptr_t) clinit_java_net_InetAddress$PlatformNameService,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetAddress$PlatformNameService,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_InetAddress,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetAddress$PlatformNameService = registerClass(&class_java_net_InetAddress$PlatformNameService);

}

