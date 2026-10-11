#include "java/net/InetAddress_InetAddressHolder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "java/net/InetAddress_InetAddressHolder.h"

extern "C" {


void mark_java_net_InetAddress$InetAddressHolder(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_InetAddress$InetAddressHolder *) object;
	if (self->F_originalHostName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_originalHostName)->clazz)->markFunction)((jobject) self->F_originalHostName, mark, depth + 1);
	if (self->F_hostName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hostName)->clazz)->markFunction)((jobject) self->F_hostName, mark, depth + 1);
}

void clinit_java_net_InetAddress$InetAddressHolder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_InetAddress$InetAddressHolder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$InetAddressHolder:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress$InetAddressHolder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(222);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_InetAddress$InetAddressHolder_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$InetAddressHolder:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress$InetAddressHolder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(224);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(225);
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_originalHostName = (jref) (frame[1].o);
	LINE_NUMBER(226);
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostName = (jref) (frame[1].o);
	LINE_NUMBER(227);
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_address = (frame[2].i);
	LINE_NUMBER(228);
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_family = (frame[3].i);
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$InetAddressHolder:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(232);
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_originalHostName = (jref) (frame[1].o);
	LINE_NUMBER(233);
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostName = (jref) (frame[1].o);
	LINE_NUMBER(234);
	if ((frame[2].i) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(235);
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_family = (frame[2].i);
	}
label_3:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$InetAddressHolder:getHostName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress$InetAddressHolder_getOriginalHostName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$InetAddressHolder:getOriginalHostName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_originalHostName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_net_InetAddress$InetAddressHolder_getAddress_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$InetAddressHolder:getAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return ((jint)((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_address);
	}

	popStackFrame(ctx);
}

jint M_java_net_InetAddress$InetAddressHolder_getFamily_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress$InetAddressHolder:getFamily", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return ((jint)((java_net_InetAddress$InetAddressHolder *) NULL_CHECK((frame[0].o)))->F_family);
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InetAddress$InetAddressHolder[] {
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
	(void *) M_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int,
	(void *) M_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String,
	(void *) M_java_net_InetAddress$InetAddressHolder_getOriginalHostName_R_java_lang_String,
	(void *) M_java_net_InetAddress$InetAddressHolder_getAddress_R_int,
	(void *) M_java_net_InetAddress$InetAddressHolder_getFamily_R_int,
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
	{ "init", "(Ljava/lang/String;I)V" },
	{ "getHostName", "()Ljava/lang/String;" },
	{ "getOriginalHostName", "()Ljava/lang/String;" },
	{ "getAddress", "()I" },
	{ "getFamily", "()I" },
};

static FieldMetadata fields[] {
	{ "originalHostName", &class_java_lang_String, offsetof(java_net_InetAddress$InetAddressHolder, F_originalHostName), "Ljava/lang/String;", 0 },
	{ "hostName", &class_java_lang_String, offsetof(java_net_InetAddress$InetAddressHolder, F_hostName), "Ljava/lang/String;", 0 },
	{ "address", &class_int, offsetof(java_net_InetAddress$InetAddressHolder, F_address), "I", 0 },
	{ "family", &class_int, offsetof(java_net_InetAddress$InetAddressHolder, F_family), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_InetAddress$InetAddressHolder, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_net_InetAddress$InetAddressHolder_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 0 },
	{ "init", (intptr_t) M_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int, VTABLE_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int, "(Ljava/lang/String;I)V", 0 },
	{ "getHostName", (intptr_t) M_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String, VTABLE_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "getOriginalHostName", (intptr_t) M_java_net_InetAddress$InetAddressHolder_getOriginalHostName_R_java_lang_String, VTABLE_java_net_InetAddress$InetAddressHolder_getOriginalHostName_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "getAddress", (intptr_t) M_java_net_InetAddress$InetAddressHolder_getAddress_R_int, VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int, "()I", 0 },
	{ "getFamily", (intptr_t) M_java_net_InetAddress$InetAddressHolder_getFamily_R_int, VTABLE_java_net_InetAddress$InetAddressHolder_getFamily_R_int, "()I", 0 },
};

Class class_java_net_InetAddress$InetAddressHolder{
		.nativeName = (intptr_t) "java/net/InetAddress$InetAddressHolder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InetAddress$InetAddressHolder),
		.classVtable = (intptr_t) vtable_java_net_InetAddress$InetAddressHolder,
		.staticInitializer = (intptr_t) clinit_java_net_InetAddress$InetAddressHolder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetAddress$InetAddressHolder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_InetAddress,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetAddress$InetAddressHolder = registerClass(&class_java_net_InetAddress$InetAddressHolder);

}

