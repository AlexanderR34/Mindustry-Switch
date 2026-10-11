#include "java/security/MessageDigest_Delegate_CloneableDelegate.h"
#include "java/security/Provider.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/security/MessageDigest_Delegate_CloneableDelegate.h"
#include "java/security/MessageDigest_1.h"
#include "java/lang/Cloneable.h"
#include "java/security/MessageDigest.h"
#include "java/security/MessageDigestSpi.h"
#include "java/security/MessageDigest_Delegate.h"

extern "C" {


void mark_java_security_MessageDigest$Delegate$CloneableDelegate(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_security_MessageDigest$Delegate(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_security_MessageDigest$Delegate$CloneableDelegate *) object;
}

void clinit_java_security_MessageDigest$Delegate$CloneableDelegate(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_security_MessageDigest$Delegate(ctx);
}

void init_java_security_MessageDigest$Delegate$CloneableDelegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate$CloneableDelegate:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest$Delegate$CloneableDelegate(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(213);
	init_java_security_MessageDigest$Delegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_java_security_MessageDigest$1(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_security_MessageDigest$Delegate$CloneableDelegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_java_security_MessageDigest$1(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate$CloneableDelegate:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest$Delegate$CloneableDelegate(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(211);
	init_java_security_MessageDigest$Delegate$CloneableDelegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_security_MessageDigest$Delegate$CloneableDelegate[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_security_MessageDigest$Delegate_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_security_MessageDigest_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_security_MessageDigest$Delegate_engineGetDigestLength_R_int,
	(void *) M_java_security_MessageDigest$Delegate_engineUpdate_byte,
	(void *) M_java_security_MessageDigest$Delegate_engineUpdate_Array1_byte_int_int,
	(void *) M_java_security_MessageDigest$Delegate_engineUpdate_java_nio_ByteBuffer,
	(void *) M_java_security_MessageDigest$Delegate_engineDigest_R_Array1_byte,
	(void *) M_java_security_MessageDigest$Delegate_engineDigest_Array1_byte_int_int_R_int,
	(void *) M_java_security_MessageDigest$Delegate_engineReset,
	(void *) M_java_security_MessageDigest_getProvider_R_java_security_Provider,
	(void *) M_java_security_MessageDigest_update_byte,
	(void *) M_java_security_MessageDigest_update_Array1_byte_int_int,
	(void *) M_java_security_MessageDigest_update_Array1_byte,
	(void *) M_java_security_MessageDigest_update_java_nio_ByteBuffer,
	(void *) M_java_security_MessageDigest_digest_R_Array1_byte,
	(void *) M_java_security_MessageDigest_digest_Array1_byte_int_int_R_int,
	(void *) M_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte,
	(void *) M_java_security_MessageDigest_getProviderName_R_java_lang_String,
	(void *) M_java_security_MessageDigest_reset,
	(void *) M_java_security_MessageDigest_getAlgorithm_R_java_lang_String,
	(void *) M_java_security_MessageDigest_getDigestLength_R_int,
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
	{ "engineGetDigestLength", "()I" },
	{ "engineUpdate", "(B)V" },
	{ "engineUpdate", "([BII)V" },
	{ "engineUpdate", "(Ljava/nio/ByteBuffer;)V" },
	{ "engineDigest", "()[B" },
	{ "engineDigest", "([BII)I" },
	{ "engineReset", "()V" },
	{ "getProvider", "()Ljava/security/Provider;" },
	{ "update", "(B)V" },
	{ "update", "([BII)V" },
	{ "update", "([B)V" },
	{ "update", "(Ljava/nio/ByteBuffer;)V" },
	{ "digest", "()[B" },
	{ "digest", "([BII)I" },
	{ "digest", "([B)[B" },
	{ "getProviderName", "()Ljava/lang/String;" },
	{ "reset", "()V" },
	{ "getAlgorithm", "()Ljava/lang/String;" },
	{ "getDigestLength", "()I" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_MessageDigest$Delegate$CloneableDelegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider, 0, "(Ljava/security/MessageDigestSpi;Ljava/lang/String;Ljava/security/Provider;)V", 2 },
	{ "<init>", (intptr_t) init_java_security_MessageDigest$Delegate$CloneableDelegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_java_security_MessageDigest$1, 0, "(Ljava/security/MessageDigestSpi;Ljava/lang/String;Ljava/security/Provider;Ljava/security/MessageDigest$1;)V", 4096 },
};

Class class_java_security_MessageDigest$Delegate$CloneableDelegate{
		.nativeName = (intptr_t) "java/security/MessageDigest$Delegate$CloneableDelegate",
		.parentClass = (intptr_t) &class_java_security_MessageDigest$Delegate,
		.size = sizeof(java_security_MessageDigest$Delegate$CloneableDelegate),
		.classVtable = (intptr_t) vtable_java_security_MessageDigest$Delegate$CloneableDelegate,
		.staticInitializer = (intptr_t) clinit_java_security_MessageDigest$Delegate$CloneableDelegate,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_MessageDigest$Delegate$CloneableDelegate,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_security_MessageDigest$Delegate,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_MessageDigest$Delegate$CloneableDelegate = registerClass(&class_java_security_MessageDigest$Delegate$CloneableDelegate);

}

