#include "java/net/InterfaceAddress.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/net/InterfaceAddress.h"
#include "java/net/InetAddress.h"
#include "java/net/Inet4Address.h"

extern "C" {


void mark_java_net_InterfaceAddress(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_InterfaceAddress *) object;
	if (self->F_address)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_address)->clazz)->markFunction)((jobject) self->F_address, mark, depth + 1);
	if (self->F_broadcast)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_broadcast)->clazz)->markFunction)((jobject) self->F_broadcast, mark, depth + 1);
}

void clinit_java_net_InterfaceAddress(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_InterfaceAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InterfaceAddress:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InterfaceAddress(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(4);
	((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_address = (jref) (jobject(nullptr));
	LINE_NUMBER(5);
	((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_broadcast = (jref) (jobject(nullptr));
	LINE_NUMBER(6);
	((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_maskLength = (jint(0));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InterfaceAddress_getAddress_R_java_net_InetAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InterfaceAddress:getAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_address;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InterfaceAddress_getBroadcast_R_java_net_InetAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InterfaceAddress:getBroadcast", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_broadcast;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jshort M_java_net_InterfaceAddress_getNetworkPrefixLength_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InterfaceAddress:getNetworkPrefixLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return ((jint)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_maskLength);
	}

	popStackFrame(ctx);
}

jbool M_java_net_InterfaceAddress_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InterfaceAddress:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	if ((isInstance(ctx, (frame[1].o), &class_java_net_InterfaceAddress)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(27);
	frame[2].o = (checkCast(ctx, &class_java_net_InterfaceAddress, (frame[1].o)));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_address;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[2].o)))->F_address;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_address;
	sp[1].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[2].o)))->F_address;
	jint temp0 = (jint)((func_java_net_InetAddress_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_broadcast;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[2].o)))->F_broadcast;
	if (sp[0].o != nullptr) goto label_11;
	}
	LINE_NUMBER(39);
	goto label_13;
label_9:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_broadcast;
	sp[1].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[2].o)))->F_broadcast;
	jint temp0 = (jint)((func_java_net_Inet4Address_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet4Address_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	LINE_NUMBER(42);
	goto label_13;
label_11:;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(48);
	if (((jint)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_maskLength) == ((jint)((java_net_InterfaceAddress *) NULL_CHECK((frame[2].o)))->F_maskLength)) goto label_15;
	}
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_java_net_InterfaceAddress_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InterfaceAddress:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_address;
	jint temp0 = (jint)((func_java_net_InetAddress_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress_hashCode_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_broadcast;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_broadcast;
	jint temp0 = (jint)((func_java_net_Inet4Address_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet4Address_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	popStackFrame(ctx);
	return ((sp[0].i + sp[1].i) + ((jint)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_maskLength));
	}

	popStackFrame(ctx);
}

jobject M_java_net_InterfaceAddress_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InterfaceAddress:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_address;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_maskLength));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ["_j))));
	sp[1].o = (jobject)((java_net_InterfaceAddress *) NULL_CHECK((frame[0].o)))->F_broadcast;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InterfaceAddress[] {
	(void *) M_java_net_InterfaceAddress_hashCode_R_int,
	(void *) M_java_net_InterfaceAddress_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_net_InterfaceAddress_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_net_InterfaceAddress_getAddress_R_java_net_InetAddress,
	(void *) M_java_net_InterfaceAddress_getBroadcast_R_java_net_InetAddress,
	(void *) M_java_net_InterfaceAddress_getNetworkPrefixLength_R_short,
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
	{ "getAddress", "()Ljava/net/InetAddress;" },
	{ "getBroadcast", "()Ljava/net/InetAddress;" },
	{ "getNetworkPrefixLength", "()S" },
};

static FieldMetadata fields[] {
	{ "address", &class_java_net_InetAddress, offsetof(java_net_InterfaceAddress, F_address), "Ljava/net/InetAddress;", 2 },
	{ "broadcast", &class_java_net_Inet4Address, offsetof(java_net_InterfaceAddress, F_broadcast), "Ljava/net/Inet4Address;", 2 },
	{ "maskLength", &class_short, offsetof(java_net_InterfaceAddress, F_maskLength), "S", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_InterfaceAddress, 0, "()V", 0 },
	{ "getAddress", (intptr_t) M_java_net_InterfaceAddress_getAddress_R_java_net_InetAddress, VTABLE_java_net_InterfaceAddress_getAddress_R_java_net_InetAddress, "()Ljava/net/InetAddress;", 1 },
	{ "getBroadcast", (intptr_t) M_java_net_InterfaceAddress_getBroadcast_R_java_net_InetAddress, VTABLE_java_net_InterfaceAddress_getBroadcast_R_java_net_InetAddress, "()Ljava/net/InetAddress;", 1 },
	{ "getNetworkPrefixLength", (intptr_t) M_java_net_InterfaceAddress_getNetworkPrefixLength_R_short, VTABLE_java_net_InterfaceAddress_getNetworkPrefixLength_R_short, "()S", 1 },
	{ "equals", (intptr_t) M_java_net_InterfaceAddress_equals_java_lang_Object_R_boolean, VTABLE_java_net_InterfaceAddress_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_net_InterfaceAddress_hashCode_R_int, VTABLE_java_net_InterfaceAddress_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_net_InterfaceAddress_toString_R_java_lang_String, VTABLE_java_net_InterfaceAddress_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_net_InterfaceAddress{
		.nativeName = (intptr_t) "java/net/InterfaceAddress",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InterfaceAddress),
		.classVtable = (intptr_t) vtable_java_net_InterfaceAddress,
		.staticInitializer = (intptr_t) clinit_java_net_InterfaceAddress,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InterfaceAddress,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InterfaceAddress = registerClass(&class_java_net_InterfaceAddress);

}
