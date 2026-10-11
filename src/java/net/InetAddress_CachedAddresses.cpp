#include "java/net/InetAddress_CachedAddresses.h"
#include "java/net/InetAddress_CachedAddresses.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "java/net/InetAddress.h"
#include "java/util/concurrent/atomic/AtomicLong.h"
#include "java/net/UnknownHostException.h"
#include "java/lang/Long.h"
#include "java/net/InetAddress_Addresses.h"

extern "C" {

jobject SF_java_net_InetAddress$CachedAddresses_seq;

void mark_java_net_InetAddress$CachedAddresses(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_InetAddress$CachedAddresses_seq)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_InetAddress$CachedAddresses_seq)->clazz)->markFunction)((jobject) SF_java_net_InetAddress$CachedAddresses_seq, mark, depth + 1);
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
	auto self = (java_net_InetAddress$CachedAddresses *) object;
	if (self->F_host)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_host)->clazz)->markFunction)((jobject) self->F_host, mark, depth + 1);
	if (self->F_inetAddresses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inetAddresses)->clazz)->markFunction)((jobject) self->F_inetAddresses, mark, depth + 1);
}

void init_java_net_InetAddress$CachedAddresses_java_lang_String_Array1_java_net_InetAddress_long(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$CachedAddresses:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress$CachedAddresses(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(768);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(766);
	sp[0].o = frame[0].o;
	clinit_java_net_InetAddress$CachedAddresses(ctx);
	sp[1].o = (jobject)SF_java_net_InetAddress$CachedAddresses_seq;
	jlong temp0 = (jlong)((func_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long])(ctx, sp[1].o);
	((java_net_InetAddress$CachedAddresses *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(769);
	((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[0].o)))->F_host = (jref) (frame[1].o);
	LINE_NUMBER(770);
	((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[0].o)))->F_inetAddresses = (jref) (frame[2].o);
	LINE_NUMBER(771);
	((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[0].o)))->F_expiryTime = (frame[3].l);
	LINE_NUMBER(772);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$CachedAddresses_get_R_Array1_java_net_InetAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$CachedAddresses:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[0].o)))->F_inetAddresses;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(777);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	sp[1].o = (jobject)((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[0].o)))->F_host;
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[0].o)))->F_inetAddresses;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_net_InetAddress$CachedAddresses_compareTo_java_net_InetAddress$CachedAddresses_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$CachedAddresses:compareTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(788);
	frame[2].l = (((jlong)((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[0].o)))->F_expiryTime) - ((jlong)((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[1].o)))->F_expiryTime));
	LINE_NUMBER(789);
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_2;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(790);
	if ((longCompare((frame[2].l), (jlong(0)))) <= 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(792);
	jint temp0 = (jint)SM_java_lang_Long_compare_long_long_R_int(ctx, ((jlong)((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[0].o)))->F_id), ((jlong)((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_net_InetAddress$CachedAddresses_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$CachedAddresses:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(761);
	jint temp0 = (jint)((func_java_net_InetAddress$CachedAddresses_compareTo_java_net_InetAddress$CachedAddresses_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress$CachedAddresses_compareTo_java_net_InetAddress$CachedAddresses_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_net_InetAddress$CachedAddresses, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_net_InetAddress$CachedAddresses(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$CachedAddresses:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress$CachedAddresses(ctx);
	{
	LINE_NUMBER(762);
	clinit_java_util_concurrent_atomic_AtomicLong(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicLong);
	init_java_util_concurrent_atomic_AtomicLong(ctx, sp[0].o);
	clinit_java_net_InetAddress$CachedAddresses(ctx);
	SF_java_net_InetAddress$CachedAddresses_seq = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InetAddress$CachedAddresses[] {
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
	(void *) M_java_net_InetAddress$CachedAddresses_get_R_Array1_java_net_InetAddress,
	(void *) M_java_net_InetAddress$CachedAddresses_compareTo_java_lang_Object_R_int,
	(void *) M_java_net_InetAddress$CachedAddresses_compareTo_java_net_InetAddress$CachedAddresses_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/net/InetAddress$CachedAddresses;)I" },
};

static jclass interfaces[] { &class_java_net_InetAddress$Addresses, &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "seq", &class_java_util_concurrent_atomic_AtomicLong, (intptr_t) &SF_java_net_InetAddress$CachedAddresses_seq, "Ljava/util/concurrent/atomic/AtomicLong;", 26 },
	{ "host", &class_java_lang_String, offsetof(java_net_InetAddress$CachedAddresses, F_host), "Ljava/lang/String;", 16 },
	{ "inetAddresses", getArrayClass(&class_java_net_InetAddress, 1), offsetof(java_net_InetAddress$CachedAddresses, F_inetAddresses), "[Ljava/net/InetAddress;", 16 },
	{ "expiryTime", &class_long, offsetof(java_net_InetAddress$CachedAddresses, F_expiryTime), "J", 16 },
	{ "id", &class_long, offsetof(java_net_InetAddress$CachedAddresses, F_id), "J", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_InetAddress$CachedAddresses_java_lang_String_Array1_java_net_InetAddress_long, 0, "(Ljava/lang/String;[Ljava/net/InetAddress;J)V", 0 },
	{ "get", (intptr_t) M_java_net_InetAddress$CachedAddresses_get_R_Array1_java_net_InetAddress, VTABLE_java_net_InetAddress$CachedAddresses_get_R_Array1_java_net_InetAddress, "()[Ljava/net/InetAddress;", 1 },
	{ "compareTo", (intptr_t) M_java_net_InetAddress$CachedAddresses_compareTo_java_net_InetAddress$CachedAddresses_R_int, VTABLE_java_net_InetAddress$CachedAddresses_compareTo_java_net_InetAddress$CachedAddresses_R_int, "(Ljava/net/InetAddress$CachedAddresses;)I", 1 },
	{ "compareTo", (intptr_t) M_java_net_InetAddress$CachedAddresses_compareTo_java_lang_Object_R_int, VTABLE_java_net_InetAddress$CachedAddresses_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_net_InetAddress$CachedAddresses, 0, "()V", 8 },
};

Class class_java_net_InetAddress$CachedAddresses{
		.nativeName = (intptr_t) "java/net/InetAddress$CachedAddresses",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InetAddress$CachedAddresses),
		.classVtable = (intptr_t) vtable_java_net_InetAddress$CachedAddresses,
		.staticInitializer = (intptr_t) clinit_java_net_InetAddress$CachedAddresses,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetAddress$CachedAddresses,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_InetAddress,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetAddress$CachedAddresses = registerClass(&class_java_net_InetAddress$CachedAddresses);

}

