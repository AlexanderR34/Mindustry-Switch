#include "java/net/InetAddress_NameServiceAddresses.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "java/util/concurrent/ConcurrentMap.h"
#include "java/net/InetAddress_NameServiceAddresses.h"
#include "java/net/UnknownHostException.h"
#include "java/net/InetAddress_Addresses.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_net_InetAddress$NameServiceAddresses(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_InetAddress$NameServiceAddresses *) object;
	if (self->F_host)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_host)->clazz)->markFunction)((jobject) self->F_host, mark, depth + 1);
	if (self->F_reqAddr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reqAddr)->clazz)->markFunction)((jobject) self->F_reqAddr, mark, depth + 1);
}

void clinit_java_net_InetAddress$NameServiceAddresses(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_InetAddress$NameServiceAddresses_java_lang_String_java_net_InetAddress(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$NameServiceAddresses:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress$NameServiceAddresses(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(802);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(803);
	((java_net_InetAddress$NameServiceAddresses *) NULL_CHECK((frame[0].o)))->F_host = (jref) (frame[1].o);
	LINE_NUMBER(804);
	((java_net_InetAddress$NameServiceAddresses *) NULL_CHECK((frame[0].o)))->F_reqAddr = (jref) (frame[2].o);
	LINE_NUMBER(805);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$NameServiceAddresses_get_R_Array1_java_net_InetAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$NameServiceAddresses:get", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(812);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(814);
	sp[0].o = (jobject)SM_java_net_InetAddress_access$000_R_java_util_concurrent_ConcurrentMap(ctx);
	sp[1].o = (jobject)((java_net_InetAddress$NameServiceAddresses *) NULL_CHECK((frame[0].o)))->F_host;
	sp[0].o = (jobject)((func_java_util_concurrent_ConcurrentMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ConcurrentMap, INDEX_java_util_concurrent_ConcurrentMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_java_net_InetAddress$Addresses, sp[0].o));
	LINE_NUMBER(815);
	if ((frame[1].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(819);
	frame[1].o = (frame[0].o);
	}
label_15:;
	{
	LINE_NUMBER(822);
	if ((frame[1].o) != (frame[0].o)) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_UnknownHostException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)((java_net_InetAddress$NameServiceAddresses *) NULL_CHECK((frame[0].o)))->F_host;
	sp[1].o = (jobject)((java_net_InetAddress$NameServiceAddresses *) NULL_CHECK((frame[0].o)))->F_reqAddr;
	sp[0].o = (jobject)SM_java_net_InetAddress_getAddressesFromNameService_java_lang_String_java_net_InetAddress_R_Array1_java_net_InetAddress(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(829);
	frame[4].o = (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(835);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(831);
	frame[6].o = sp[0].o;
	LINE_NUMBER(832);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(833);
	frame[4].o = (frame[6].o);
	}
label_18:;
	{
	LINE_NUMBER(857);
	sp[0].o = frame[3].o;
	monitorExit(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(860);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_21;
label_6:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_21:;
	{
	LINE_NUMBER(863);
	sp[0].o = (jobject)((func_java_net_InetAddress$Addresses_get_R_Array1_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddress$Addresses, INDEX_java_net_InetAddress$Addresses_get_R_Array1_java_net_InetAddress, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InetAddress$NameServiceAddresses[] {
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
	(void *) M_java_net_InetAddress$NameServiceAddresses_get_R_Array1_java_net_InetAddress,
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
	{ "get", "()[Ljava/net/InetAddress;" },
};

static jclass interfaces[] { &class_java_net_InetAddress$Addresses, };

static FieldMetadata fields[] {
	{ "host", &class_java_lang_String, offsetof(java_net_InetAddress$NameServiceAddresses, F_host), "Ljava/lang/String;", 18 },
	{ "reqAddr", &class_java_net_InetAddress, offsetof(java_net_InetAddress$NameServiceAddresses, F_reqAddr), "Ljava/net/InetAddress;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_InetAddress$NameServiceAddresses_java_lang_String_java_net_InetAddress, 0, "(Ljava/lang/String;Ljava/net/InetAddress;)V", 0 },
	{ "get", (intptr_t) M_java_net_InetAddress$NameServiceAddresses_get_R_Array1_java_net_InetAddress, VTABLE_java_net_InetAddress$NameServiceAddresses_get_R_Array1_java_net_InetAddress, "()[Ljava/net/InetAddress;", 1 },
};

Class class_java_net_InetAddress$NameServiceAddresses{
		.nativeName = (intptr_t) "java/net/InetAddress$NameServiceAddresses",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InetAddress$NameServiceAddresses),
		.classVtable = (intptr_t) vtable_java_net_InetAddress$NameServiceAddresses,
		.staticInitializer = (intptr_t) clinit_java_net_InetAddress$NameServiceAddresses,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetAddress$NameServiceAddresses,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_InetAddress,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetAddress$NameServiceAddresses = registerClass(&class_java_net_InetAddress$NameServiceAddresses);

}

