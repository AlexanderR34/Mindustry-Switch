#include "java/net/InetAddress.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Error.h"
#include "java/lang/IllegalAccessException.h"
#include "java/net/InetAddress_Addresses.h"
#include "java/io/PrintStream.h"
#include "java/net/InetAddress_CachedAddresses.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/io/ObjectStreamField.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/net/InetAddress.h"
#include "java/util/concurrent/ConcurrentHashMap.h"
#include "java/net/UnknownHostException.h"
#include "java/lang/Throwable.h"
#include "java/io/ObjectInputStream.h"
#include "java/net/InetAddressImpl.h"
#include "java/lang/Exception.h"
#include "java/net/InetAddress_NameService.h"
#include "java/util/Iterator.h"
#include "java/util/NavigableSet.h"
#include "java/net/InetAddress_PlatformNameService.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/net/NetworkInterface.h"
#include "java/net/InetAddress_InetAddressHolder.h"
#include "java/util/Map.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/net/IPAddressUtil.h"
#include "java/util/concurrent/ConcurrentMap.h"
#include "java/net/InetAddress_1.h"
#include "java/net/InetAddressImplFactory.h"
#include "java/net/Inet4Address.h"
#include "java/net/Inet6Address.h"
#include "java/net/InetAddress_NameServiceAddresses.h"
#include "java/net/InetAddress_HostsFileNameService.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"
#include "java/net/InetAddress_CachedLocalHost.h"
#include "java/lang/System.h"
#include "java/lang/SecurityException.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jint SF_java_net_InetAddress_PREFER_IPV4_VALUE;
jint SF_java_net_InetAddress_PREFER_IPV6_VALUE;
jint SF_java_net_InetAddress_PREFER_SYSTEM_VALUE;
jint SF_java_net_InetAddress_IPv4;
jint SF_java_net_InetAddress_IPv6;
jint SF_java_net_InetAddress_preferIPv6Address;
jobject SF_java_net_InetAddress_nameService;
jlong SF_java_net_InetAddress_serialVersionUID;
jobject SF_java_net_InetAddress_cache;
jobject SF_java_net_InetAddress_expirySet;
jobject SF_java_net_InetAddress_impl;
volatile jobject SF_java_net_InetAddress_cachedLocalHost;
jobject SF_java_net_InetAddress_serialPersistentFields;

void mark_java_net_InetAddress(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_InetAddress_nameService)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_InetAddress_nameService)->clazz)->markFunction)((jobject) SF_java_net_InetAddress_nameService, mark, depth + 1);
		if (SF_java_net_InetAddress_cache)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_InetAddress_cache)->clazz)->markFunction)((jobject) SF_java_net_InetAddress_cache, mark, depth + 1);
		if (SF_java_net_InetAddress_expirySet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_InetAddress_expirySet)->clazz)->markFunction)((jobject) SF_java_net_InetAddress_expirySet, mark, depth + 1);
		if (SF_java_net_InetAddress_impl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_InetAddress_impl)->clazz)->markFunction)((jobject) SF_java_net_InetAddress_impl, mark, depth + 1);
		if (SF_java_net_InetAddress_cachedLocalHost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_InetAddress_cachedLocalHost)->clazz)->markFunction)((jobject) SF_java_net_InetAddress_cachedLocalHost, mark, depth + 1);
		if (SF_java_net_InetAddress_serialPersistentFields)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_InetAddress_serialPersistentFields)->clazz)->markFunction)((jobject) SF_java_net_InetAddress_serialPersistentFields, mark, depth + 1);
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
	auto self = (java_net_InetAddress *) object;
	if (self->F_holder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_holder)->clazz)->markFunction)((jobject) self->F_holder, mark, depth + 1);
	if (self->F_canonicalHostName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_canonicalHostName)->clazz)->markFunction)((jobject) self->F_canonicalHostName, mark, depth + 1);
}

jobject M_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:holder", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_net_InetAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(331);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(280);
	((java_net_InetAddress *) NULL_CHECK((frame[0].o)))->F_canonicalHostName = (jref) (jobject(nullptr));
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	clinit_java_net_InetAddress$InetAddressHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_InetAddress$InetAddressHolder);
	init_java_net_InetAddress$InetAddressHolder(ctx, sp[1].o);
	((java_net_InetAddress *) NULL_CHECK(sp[0].o))->F_holder = (jref) sp[1].o;
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress_readResolve_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:readResolve", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	clinit_java_net_Inet4Address(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_Inet4Address);
	sp[1].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[2].o);
	init_java_net_Inet4Address_java_lang_String_int(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isMulticastAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isMulticastAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isAnyLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isAnyLocalAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isLoopbackAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isLoopbackAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isLinkLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isLinkLocalAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isSiteLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isSiteLocalAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isMCGlobal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isMCGlobal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isMCNodeLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isMCNodeLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isMCLinkLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isMCLinkLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isMCSiteLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isMCSiteLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isMCOrgLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isMCOrgLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isReachable_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isReachable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(485);
	jint temp0 = (jint)((func_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:isReachable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(521);
	if ((frame[2].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(522);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ttl can't be negative"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(523);
	if ((frame[3].i) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(524);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"timeout can't be negative"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(526);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_impl;
	jint temp0 = (jint)((func_java_net_InetAddressImpl_isReachable_java_net_InetAddress_int_java_net_NetworkInterface_int_R_boolean) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_isReachable_java_net_InetAddress_int_java_net_NetworkInterface_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[3].i), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress_getHostName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getHostName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((func_java_net_InetAddress_getHostName_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_getHostName_boolean_R_java_lang_String])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress_getHostName_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getHostName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(582);
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_java_net_InetAddress_getHostFromNameService_java_net_InetAddress_boolean_R_java_lang_String(ctx, (frame[0].o), (frame[1].i));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_hostName = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress_getCanonicalHostName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getCanonicalHostName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[0].o)))->F_canonicalHostName;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(611);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(1);
	LINE_NUMBER(612);
	sp[1].o = (jobject)SM_java_net_InetAddress_getHostFromNameService_java_net_InetAddress_boolean_R_java_lang_String(ctx, sp[1].o, temp0);
	((java_net_InetAddress *) NULL_CHECK(sp[0].o))->F_canonicalHostName = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[0].o)))->F_canonicalHostName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getHostFromNameService_java_net_InetAddress_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getHostFromNameService", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(637);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_UnknownHostException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(640);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_nameService;
	sp[1].o = (jobject)((func_java_net_InetAddress_getAddress_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_getAddress_R_Array1_byte])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_net_InetAddress$NameService_getHostByAddr_Array1_byte_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_net_InetAddress$NameService, INDEX_java_net_InetAddress$NameService_getHostByAddr_Array1_byte_R_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(645);
	if ((frame[1].i) == 0) goto label_8;
	}
label_8:;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)SM_java_net_InetAddress_getAllByName0_java_lang_String_boolean_R_Array1_java_net_InetAddress(ctx, (frame[2].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(658);
	frame[4].i = (jint(0));
	LINE_NUMBER(660);
	if ((frame[3].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(661);
	frame[5].i = (jint(0));
	}
label_13:;
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_11;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(662);
	jint temp0 = (jint)((func_java_net_InetAddress_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))));
	frame[4].i = temp0;
	LINE_NUMBER(661);
	INST_IINC(5, 1);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(667);
	if ((frame[4].i) != 0) { popExceptionFrames(frameRef, 2); goto label_16; }
	}
	{
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_java_net_InetAddress_getHostAddress_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(669);
	sp[0].o = frame[2].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_16:;
	LINE_NUMBER(676);
	goto label_19;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(671);
	frame[3].o = sp[0].o;
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_java_net_InetAddress_getHostAddress_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(676);
	goto label_19;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(673);
	frame[3].o = sp[0].o;
	LINE_NUMBER(674);
	sp[0].o = (jobject)((func_java_net_InetAddress_getHostAddress_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(677);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress_getAddress_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress_getHostAddress_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getHostAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_net_InetAddress_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(707);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetAddress_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:equals", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(727);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetAddress_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(741);
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(742);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)SM_java_util_Objects_toString_java_lang_Object_java_lang_String_R_java_lang_String(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[1].o = frame[0].o;
	LINE_NUMBER(743);
	sp[1].o = (jobject)((func_java_net_InetAddress_getHostAddress_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_createNameService_R_java_net_InetAddress$NameService(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:createNameService", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	{
	LINE_NUMBER(1135);
	frame[0].o = (jobject(nullptr));
	LINE_NUMBER(1137);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1138);
	clinit_java_net_InetAddress$HostsFileNameService(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_InetAddress$HostsFileNameService);
	init_java_net_InetAddress$HostsFileNameService_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(1140);
	clinit_java_net_InetAddress$PlatformNameService(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_InetAddress$PlatformNameService);
	init_java_net_InetAddress$PlatformNameService_java_net_InetAddress$1(ctx, sp[0].o, (jobject(nullptr)));
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1142);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getByAddress_java_lang_String_Array1_byte_R_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getByAddress", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1169);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 <= 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 != (91)) goto label_1;
	}
	{
	LINE_NUMBER(1170);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (93)) goto label_1;
	}
	{
	LINE_NUMBER(1171);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1174);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1175);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != (jint(4))) goto label_6;
	}
	{
	LINE_NUMBER(1176);
	clinit_java_net_Inet4Address(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_Inet4Address);
	init_java_net_Inet4Address_java_lang_String_Array1_byte(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(1177);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != (16)) goto label_4;
	}
	{
	LINE_NUMBER(1178);
	sp[0].o = frame[1].o;
	LINE_NUMBER(1179);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_convertFromIPv4MappedAddress_Array1_byte_R_Array1_byte(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1180);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1181);
	clinit_java_net_Inet4Address(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_Inet4Address);
	init_java_net_Inet4Address_java_lang_String_Array1_byte(ctx, sp[0].o, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1183);
	clinit_java_net_Inet6Address(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_Inet6Address);
	init_java_net_Inet6Address_java_lang_String_Array1_byte(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1187);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"addr is of illegal length"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getByName_java_lang_String_R_java_net_InetAddress(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getByName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1221);
	sp[0].o = (jobject)SM_java_net_InetAddress_getAllByName_java_lang_String_R_Array1_java_net_InetAddress(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getByName_java_lang_String_java_net_InetAddress_R_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getByName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1227);
	sp[0].o = (jobject)SM_java_net_InetAddress_getAllByName_java_lang_String_java_net_InetAddress_R_Array1_java_net_InetAddress(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getAllByName_java_lang_String_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getAllByName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1271);
	sp[0].o = (jobject)SM_java_net_InetAddress_getAllByName_java_lang_String_java_net_InetAddress_R_Array1_java_net_InetAddress(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getAllByName_java_lang_String_java_net_InetAddress_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getAllByName", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1277);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1278);
	sp[0].o = (jobject)createArray(ctx, &class_java_net_InetAddress, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1279);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	clinit_java_net_InetAddress(ctx);
	sp[1].o = (jobject)SF_java_net_InetAddress_impl;
	sp[1].o = (jobject)((func_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress, sp[1].o))(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1280);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(1283);
	frame[2].i = (jint(0));
	LINE_NUMBER(1284);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 != (91)) goto label_6;
	}
	{
	LINE_NUMBER(1286);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 <= (jint(2))) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (93)) goto label_8;
	}
	{
	LINE_NUMBER(1287);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(1288);
	frame[2].i = (jint(1));
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(1291);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": invalid IPv6 address"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1296);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, temp0, (16));
	if (temp1 != (jint(-1))) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	LINE_NUMBER(1297);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 != (58)) goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1298);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1299);
	frame[4].i = (jint(-1));
	LINE_NUMBER(1300);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(1302);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_textToNumericFormatV4_java_lang_String_R_Array1_byte(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1303);
	if ((frame[3].o) != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1307);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (37));
	frame[6].i = temp0;
	if (temp0 == (jint(-1))) goto label_21;
	}
	{
	LINE_NUMBER(1308);
	jint temp0 = (jint)SM_java_net_InetAddress_checkNumericZone_java_lang_String_R_int(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(1309);
	if ((frame[4].i) != (jint(-1))) goto label_21;
	}
	{
	LINE_NUMBER(1310);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[6].i) + (jint(1))));
	frame[5].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(1313);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_textToNumericFormatV6_java_lang_String_R_Array1_byte(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(1314);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": invalid IPv6 address"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_25:;
	LINE_NUMBER(1316);
	goto label_27;
label_18:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_27;
	{
	LINE_NUMBER(1318);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(1320);
	sp[0].o = (jobject)createArray(ctx, &class_java_net_InetAddress, (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1321);
	if ((frame[3].o) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(1322);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != (jint(4))) goto label_32;
	}
	{
	LINE_NUMBER(1323);
	sp[0].o = frame[6].o;
	jint temp0 = jint(0);
	clinit_java_net_Inet4Address(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_Inet4Address);
	init_java_net_Inet4Address_java_lang_String_Array1_byte(ctx, sp[1].o, (jobject(nullptr)), (frame[3].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(1325);
	if ((frame[5].o) == nullptr) goto label_35;
	}
	{
	LINE_NUMBER(1326);
	sp[0].o = frame[6].o;
	jint temp0 = jint(0);
	clinit_java_net_Inet6Address(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_Inet6Address);
	init_java_net_Inet6Address_java_lang_String_Array1_byte_java_lang_String(ctx, sp[1].o, (jobject(nullptr)), (frame[3].o), (frame[5].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(1328);
	sp[0].o = frame[6].o;
	jint temp0 = jint(0);
	clinit_java_net_Inet6Address(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_Inet6Address);
	init_java_net_Inet6Address_java_lang_String_Array1_byte_int(ctx, sp[1].o, (jobject(nullptr)), (frame[3].o), (frame[4].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_34:;
	{
	LINE_NUMBER(1331);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_30:;
	LINE_NUMBER(1333);
	goto label_37;
label_13:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_37;
	{
	LINE_NUMBER(1335);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_37:;
	{
	LINE_NUMBER(1337);
	sp[0].o = (jobject)SM_java_net_InetAddress_getAllByName0_java_lang_String_java_net_InetAddress_boolean_boolean_R_Array1_java_net_InetAddress(ctx, (frame[0].o), (frame[1].o), (jint(1)), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getLoopbackAddress_R_java_net_InetAddress(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getLoopbackAddress", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	{
	LINE_NUMBER(1352);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_impl;
	sp[0].o = (jobject)((func_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_net_InetAddress_checkNumericZone_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:checkNumericZone", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1364);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (37));
	frame[1].i = temp0;
	LINE_NUMBER(1365);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(1366);
	frame[4].i = (jint(0));
	LINE_NUMBER(1367);
	if ((frame[1].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(1368);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_4:;
	{
	LINE_NUMBER(1370);
	frame[5].i = ((frame[1].i) + (jint(1)));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(1371);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(1372);
	if ((frame[6].i) != (93)) goto label_10;
	}
	{
	LINE_NUMBER(1373);
	if ((frame[5].i) != ((frame[1].i) + (jint(1)))) goto label_7;
	}
	{
	LINE_NUMBER(1375);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_10:;
	{
	LINE_NUMBER(1379);
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[6].i), (10));
	frame[3].i = temp0;
	if (temp0 >= 0) goto label_14;
	}
	{
	LINE_NUMBER(1380);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_14:;
	{
	LINE_NUMBER(1382);
	frame[4].i = (((frame[4].i) * (10)) + (frame[3].i));
	LINE_NUMBER(1370);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1384);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getAllByName0_java_lang_String_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getAllByName0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1390);
	sp[0].o = (jobject)SM_java_net_InetAddress_getAllByName0_java_lang_String_boolean_R_Array1_java_net_InetAddress(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getAllByName0_java_lang_String_boolean_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getAllByName0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1398);
	sp[0].o = (jobject)SM_java_net_InetAddress_getAllByName0_java_lang_String_java_net_InetAddress_boolean_boolean_R_Array1_java_net_InetAddress(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getAllByName0_java_lang_String_java_net_InetAddress_boolean_boolean_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getAllByName0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1432);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[4].l = temp0;
	LINE_NUMBER(1433);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_expirySet;
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_net_InetAddress$CachedAddresses, sp[0].o));
	LINE_NUMBER(1437);
	if ((longCompare((((jlong)((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[7].o)))->F_expiryTime) - (frame[4].l)), (jlong(0)))) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(1440);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_expirySet;
	jint temp0 = (jint)((func_java_util_Set_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[7].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1442);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_cache;
	sp[1].o = (jobject)((java_net_InetAddress$CachedAddresses *) NULL_CHECK((frame[7].o)))->F_host;
	jint temp0 = (jint)((func_java_util_concurrent_ConcurrentMap_remove_java_lang_Object_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ConcurrentMap, INDEX_java_util_concurrent_ConcurrentMap_remove_java_lang_Object_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[7].o));
	}
label_6:;
	LINE_NUMBER(1448);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(1452);
	if ((frame[3].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1453);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_cache;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[6].o = (checkCast(ctx, &class_java_net_InetAddress$Addresses, sp[0].o));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(1455);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_cache;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[6].o = (checkCast(ctx, &class_java_net_InetAddress$Addresses, sp[0].o));
	LINE_NUMBER(1456);
	if ((frame[6].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1457);
	if ((isInstance(ctx, (frame[6].o), &class_java_net_InetAddress$CachedAddresses)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1459);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_expirySet;
	jint temp0 = (jint)((func_java_util_Set_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[6].o));
	}
label_14:;
	{
	LINE_NUMBER(1461);
	frame[6].o = (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(1465);
	if ((frame[6].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(1468);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_cache;
	sp[1].o = frame[0].o;
	clinit_java_net_InetAddress$NameServiceAddresses(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_net_InetAddress$NameServiceAddresses);
	init_java_net_InetAddress$NameServiceAddresses_java_lang_String_java_net_InetAddress(ctx, sp[2].o, (frame[0].o), (frame[1].o));
	frame[6].o = sp[2].o;
	sp[0].o = (jobject)((func_java_util_concurrent_ConcurrentMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ConcurrentMap, INDEX_java_util_concurrent_ConcurrentMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[7].o = (checkCast(ctx, &class_java_net_InetAddress$Addresses, sp[0].o));
	LINE_NUMBER(1472);
	if ((frame[7].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(1473);
	frame[6].o = (frame[7].o);
	}
label_16:;
	{
	LINE_NUMBER(1478);
	sp[0].o = (jobject)((func_java_net_InetAddress$Addresses_get_R_Array1_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddress$Addresses, INDEX_java_net_InetAddress$Addresses_get_R_Array1_java_net_InetAddress, (frame[6].o)))(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_net_InetAddress, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getAddressesFromNameService_java_lang_String_java_net_InetAddress_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getAddressesFromNameService", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1484);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(1485);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_UnknownHostException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1488);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_nameService;
	sp[0].o = (jobject)((func_java_net_InetAddress$NameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddress$NameService, INDEX_java_net_InetAddress$NameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1496);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1489);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1490);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"localhost"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1491);
	sp[0].o = (jobject)createArray(ctx, &class_java_net_InetAddress, (jint(1)));
	jint temp0 = jint(0);
	clinit_java_net_InetAddress(ctx);
	sp[1].o = (jobject)SF_java_net_InetAddress_impl;
	sp[1].o = (jobject)((func_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress, sp[1].o))(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[2].o = sp[0].o;
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(1494);
	frame[3].o = (frame[4].o);
	}
label_6:;
	{
	LINE_NUMBER(1498);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1499);
	if ((frame[3].o) != nullptr) goto label_12;
	}
	{
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ALOAD(3);
label_13:;
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(1503);
	if ((frame[1].o) == nullptr) goto label_14;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) <= (jint(1))) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_net_InetAddress_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_java_net_InetAddress_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (frame[1].o));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(1505);
	frame[4].i = (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(1506);
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_17;
	}
	{
	LINE_NUMBER(1507);
	jint temp0 = (jint)((func_java_net_InetAddress_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_java_net_InetAddress_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))), (frame[1].o));
	if (temp0 == 0) goto label_19;
	}
	LINE_NUMBER(1508);
	goto label_17;
label_19:;
	{
	LINE_NUMBER(1506);
	INST_IINC(4, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(1512);
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_14;
	}
	{
	LINE_NUMBER(1513);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(1514);
	frame[7].i = (jint(0));
	}
label_23:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_24;
	}
	{
	LINE_NUMBER(1515);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(1516);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[7].i)) = (frame[6].o);
	LINE_NUMBER(1517);
	frame[6].o = (frame[5].o);
	LINE_NUMBER(1514);
	INST_IINC(7, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(1519);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)) = (frame[6].o);
	}
label_14:;
	{
	LINE_NUMBER(1523);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getByAddress_Array1_byte_R_java_net_InetAddress(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getByAddress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1544);
	sp[0].o = (jobject)SM_java_net_InetAddress_getByAddress_java_lang_String_Array1_byte_R_java_net_InetAddress(ctx, (jobject(nullptr)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_getLocalHost_R_java_net_InetAddress(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:getLocalHost", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1588);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_cachedLocalHost;
	frame[0].o = sp[0].o;
	LINE_NUMBER(1589);
	if ((frame[0].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	jlong temp0 = (jlong)((java_net_InetAddress$CachedLocalHost *) NULL_CHECK((frame[0].o)))->F_expiryTime;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	if ((longCompare((temp0 - temp1), (jlong(0)))) < 0) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(1593);
	sp[0].o = (jobject)((java_net_InetAddress$CachedLocalHost *) NULL_CHECK((frame[0].o)))->F_addr;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1596);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_impl;
	sp[0].o = (jobject)((func_java_net_InetAddressImpl_getLocalHostName_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_getLocalHostName_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1603);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"localhost"_j))));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(1605);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_impl;
	sp[0].o = (jobject)((func_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	goto label_16;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_UnknownHostException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1610);
	sp[0].o = (jobject)SM_java_net_InetAddress_getAllByName0_java_lang_String_java_net_InetAddress_boolean_boolean_R_Array1_java_net_InetAddress(ctx, (frame[1].o), (jobject(nullptr)), (jint(0)), (jint(0)));
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1618);
	goto label_16;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1611);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1613);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[2].o = frame[3].o;
	LINE_NUMBER(1615);
	sp[2].o = (jobject)((func_java_net_UnknownHostException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_net_UnknownHostException_getMessage_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1616);
	sp[0].o = (jobject)((func_java_net_UnknownHostException_initCause_java_lang_Throwable_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_net_UnknownHostException_initCause_java_lang_Throwable_R_java_lang_Throwable])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(1617);
	throwException(ctx, (frame[4].o));	}
label_16:;
	{
	LINE_NUMBER(1620);
	clinit_java_net_InetAddress$CachedLocalHost(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_InetAddress$CachedLocalHost);
	init_java_net_InetAddress$CachedLocalHost_java_lang_String_java_net_InetAddress(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_cachedLocalHost = sp[0].o;
	LINE_NUMBER(1621);
	sp[0].o = frame[2].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(1622);
	frame[0].o = sp[0].o;
	LINE_NUMBER(1623);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_impl;
	sp[0].o = (jobject)((func_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_anyLocalAddress_R_java_net_InetAddress(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:anyLocalAddress", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	{
	LINE_NUMBER(1638);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_impl;
	sp[0].o = (jobject)((func_java_net_InetAddressImpl_anyLocalAddress_R_java_net_InetAddress) resolveInterfaceMethod(ctx, &class_java_net_InetAddressImpl, INDEX_java_net_InetAddressImpl_anyLocalAddress_R_java_net_InetAddress, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_loadImpl_java_lang_String_R_java_net_InetAddressImpl(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:loadImpl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1645);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(1654);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InstantiationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(1657);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"java.net."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_newInstance_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_newInstance_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1658);
	frame[1].o = (frame[3].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1671);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1659);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1660);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_err;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Class not found: java.net."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8":\ncheck impl.prefix property in your properties file."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1671);
	goto label_15;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1663);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1664);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_err;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Could not instantiate: java.net."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8":\ncheck impl.prefix property in your properties file."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1671);
	goto label_15;
	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(1667);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1668);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_err;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot access class: java.net."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8":\ncheck impl.prefix property in your properties file."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(1673);
	if ((frame[1].o) != nullptr) goto label_21;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(1676);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_newInstance_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_newInstance_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1677);
	frame[1].o = (frame[3].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1680);
	goto label_21;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(1678);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1679);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	init_java_lang_Error_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"System property impl.prefix incorrect"_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(1683);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_net_InetAddressImpl, (frame[1].o)));
	}

	popStackFrame(ctx);
}

void M_java_net_InetAddress_readObjectNoData_java_io_ObjectInputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:readObjectNoData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1688);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1689);
	clinit_java_lang_SecurityException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_SecurityException);
	init_java_lang_SecurityException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid address type"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(1691);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_InetAddress_access$000_R_java_util_concurrent_ConcurrentMap(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:access$000", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	{
	LINE_NUMBER(184);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = (jobject)SF_java_net_InetAddress_cache;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_net_InetAddress(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_net_InetAddress_PREFER_IPV4_VALUE = jint(0);
	SF_java_net_InetAddress_PREFER_IPV6_VALUE = jint(1);
	SF_java_net_InetAddress_PREFER_SYSTEM_VALUE = jint(2);
	SF_java_net_InetAddress_IPv4 = jint(1);
	SF_java_net_InetAddress_IPv6 = jint(2);
	SF_java_net_InetAddress_serialVersionUID = jlong(3286316764910316507ll);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetAddress:<clinit>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetAddress(ctx);
	{
	LINE_NUMBER(277);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_nameService = (jobject(nullptr));
	LINE_NUMBER(289);
	frame[0].o = (jobject(nullptr));
	LINE_NUMBER(290);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(291);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_preferIPv6Address = (jint(0));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(293);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_preferIPv6Address = (jint(1));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(295);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_preferIPv6Address = (jint(0));
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"system"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(297);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_preferIPv6Address = (jint(2));
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(299);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_preferIPv6Address = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(748);
	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ConcurrentHashMap);
	init_java_util_concurrent_ConcurrentHashMap(ctx, sp[0].o);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_cache = sp[0].o;
	LINE_NUMBER(753);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_expirySet = (jobject(nullptr));
	LINE_NUMBER(1112);
	sp[0].o = (jobject)SM_java_net_InetAddressImplFactory_create_R_java_net_InetAddressImpl(ctx);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_impl = sp[0].o;
	LINE_NUMBER(1115);
	sp[0].o = (jobject)SM_java_net_InetAddress_createNameService_R_java_net_InetAddress$NameService(ctx);
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_nameService = sp[0].o;
	LINE_NUMBER(1728);
	sp[0].o = (jobject)createArray(ctx, &class_java_io_ObjectStreamField, (jint(3)));
	jint temp0 = jint(0);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"hostName"_j))), (((jobject) &class_java_lang_String)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"address"_j));
	clinit_java_lang_Integer(ctx);
	sp[3].o = (jobject)SF_java_lang_Integer_TYPE;
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"family"_j));
	clinit_java_lang_Integer(ctx);
	sp[3].o = (jobject)SF_java_lang_Integer_TYPE;
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_java_net_InetAddress(ctx);
	SF_java_net_InetAddress_serialPersistentFields = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InetAddress[] {
	(void *) M_java_net_InetAddress_hashCode_R_int,
	(void *) M_java_net_InetAddress_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_net_InetAddress_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder,
	(void *) M_java_net_InetAddress_readResolve_R_java_lang_Object,
	(void *) M_java_net_InetAddress_isMulticastAddress_R_boolean,
	(void *) M_java_net_InetAddress_isAnyLocalAddress_R_boolean,
	(void *) M_java_net_InetAddress_isLoopbackAddress_R_boolean,
	(void *) M_java_net_InetAddress_isLinkLocalAddress_R_boolean,
	(void *) M_java_net_InetAddress_isSiteLocalAddress_R_boolean,
	(void *) M_java_net_InetAddress_isMCGlobal_R_boolean,
	(void *) M_java_net_InetAddress_isMCNodeLocal_R_boolean,
	(void *) M_java_net_InetAddress_isMCLinkLocal_R_boolean,
	(void *) M_java_net_InetAddress_isMCSiteLocal_R_boolean,
	(void *) M_java_net_InetAddress_isMCOrgLocal_R_boolean,
	(void *) M_java_net_InetAddress_isReachable_int_R_boolean,
	(void *) M_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean,
	(void *) M_java_net_InetAddress_getHostName_R_java_lang_String,
	(void *) M_java_net_InetAddress_getHostName_boolean_R_java_lang_String,
	(void *) M_java_net_InetAddress_getCanonicalHostName_R_java_lang_String,
	(void *) M_java_net_InetAddress_getAddress_R_Array1_byte,
	(void *) M_java_net_InetAddress_getHostAddress_R_java_lang_String,
	(void *) M_java_net_InetAddress_readObjectNoData_java_io_ObjectInputStream,
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
	{ "holder", "()Ljava/net/InetAddress$InetAddressHolder;" },
	{ "readResolve", "()Ljava/lang/Object;" },
	{ "isMulticastAddress", "()Z" },
	{ "isAnyLocalAddress", "()Z" },
	{ "isLoopbackAddress", "()Z" },
	{ "isLinkLocalAddress", "()Z" },
	{ "isSiteLocalAddress", "()Z" },
	{ "isMCGlobal", "()Z" },
	{ "isMCNodeLocal", "()Z" },
	{ "isMCLinkLocal", "()Z" },
	{ "isMCSiteLocal", "()Z" },
	{ "isMCOrgLocal", "()Z" },
	{ "isReachable", "(I)Z" },
	{ "isReachable", "(Ljava/net/NetworkInterface;II)Z" },
	{ "getHostName", "()Ljava/lang/String;" },
	{ "getHostName", "(Z)Ljava/lang/String;" },
	{ "getCanonicalHostName", "()Ljava/lang/String;" },
	{ "getAddress", "()[B" },
	{ "getHostAddress", "()Ljava/lang/String;" },
	{ "readObjectNoData", "(Ljava/io/ObjectInputStream;)V" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_java_net_InetAddress$InetAddressHolder,
	&class_java_net_InetAddress$NameService,
	&class_java_net_InetAddress$HostsFileNameService,
	&class_java_net_InetAddress$PlatformNameService,
	&class_java_net_InetAddress$CachedAddresses,
	&class_java_net_InetAddress$Addresses,
	&class_java_net_InetAddress$NameServiceAddresses,
	&class_java_net_InetAddress$CachedLocalHost,
};

static FieldMetadata fields[] {
	{ "PREFER_IPV4_VALUE", &class_int, (intptr_t) &SF_java_net_InetAddress_PREFER_IPV4_VALUE, "I", 24 },
	{ "PREFER_IPV6_VALUE", &class_int, (intptr_t) &SF_java_net_InetAddress_PREFER_IPV6_VALUE, "I", 24 },
	{ "PREFER_SYSTEM_VALUE", &class_int, (intptr_t) &SF_java_net_InetAddress_PREFER_SYSTEM_VALUE, "I", 24 },
	{ "IPv4", &class_int, (intptr_t) &SF_java_net_InetAddress_IPv4, "I", 24 },
	{ "IPv6", &class_int, (intptr_t) &SF_java_net_InetAddress_IPv6, "I", 24 },
	{ "preferIPv6Address", &class_int, (intptr_t) &SF_java_net_InetAddress_preferIPv6Address, "I", 152 },
	{ "holder", &class_java_net_InetAddress$InetAddressHolder, offsetof(java_net_InetAddress, F_holder), "Ljava/net/InetAddress$InetAddressHolder;", 144 },
	{ "nameService", &class_java_net_InetAddress$NameService, (intptr_t) &SF_java_net_InetAddress_nameService, "Ljava/net/InetAddress$NameService;", 138 },
	{ "canonicalHostName", &class_java_lang_String, offsetof(java_net_InetAddress, F_canonicalHostName), "Ljava/lang/String;", 130 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_net_InetAddress_serialVersionUID, "J", 26 },
	{ "cache", &class_java_util_concurrent_ConcurrentMap, (intptr_t) &SF_java_net_InetAddress_cache, "Ljava/util/concurrent/ConcurrentMap;", 26 },
	{ "expirySet", &class_java_util_NavigableSet, (intptr_t) &SF_java_net_InetAddress_expirySet, "Ljava/util/NavigableSet;", 26 },
	{ "impl", &class_java_net_InetAddressImpl, (intptr_t) &SF_java_net_InetAddress_impl, "Ljava/net/InetAddressImpl;", 24 },
	{ "cachedLocalHost", &class_java_net_InetAddress$CachedLocalHost, (intptr_t) &SF_java_net_InetAddress_cachedLocalHost, "Ljava/net/InetAddress$CachedLocalHost;", 74 },
	{ "serialPersistentFields", getArrayClass(&class_java_io_ObjectStreamField, 1), (intptr_t) &SF_java_net_InetAddress_serialPersistentFields, "[Ljava/io/ObjectStreamField;", 26 },
};

static MethodMetadata methods[] {
	{ "holder", (intptr_t) M_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder, VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder, "()Ljava/net/InetAddress$InetAddressHolder;", 0 },
	{ "<init>", (intptr_t) init_java_net_InetAddress, 0, "()V", 0 },
	{ "readResolve", (intptr_t) M_java_net_InetAddress_readResolve_R_java_lang_Object, VTABLE_java_net_InetAddress_readResolve_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "isMulticastAddress", (intptr_t) M_java_net_InetAddress_isMulticastAddress_R_boolean, VTABLE_java_net_InetAddress_isMulticastAddress_R_boolean, "()Z", 1 },
	{ "isAnyLocalAddress", (intptr_t) M_java_net_InetAddress_isAnyLocalAddress_R_boolean, VTABLE_java_net_InetAddress_isAnyLocalAddress_R_boolean, "()Z", 1 },
	{ "isLoopbackAddress", (intptr_t) M_java_net_InetAddress_isLoopbackAddress_R_boolean, VTABLE_java_net_InetAddress_isLoopbackAddress_R_boolean, "()Z", 1 },
	{ "isLinkLocalAddress", (intptr_t) M_java_net_InetAddress_isLinkLocalAddress_R_boolean, VTABLE_java_net_InetAddress_isLinkLocalAddress_R_boolean, "()Z", 1 },
	{ "isSiteLocalAddress", (intptr_t) M_java_net_InetAddress_isSiteLocalAddress_R_boolean, VTABLE_java_net_InetAddress_isSiteLocalAddress_R_boolean, "()Z", 1 },
	{ "isMCGlobal", (intptr_t) M_java_net_InetAddress_isMCGlobal_R_boolean, VTABLE_java_net_InetAddress_isMCGlobal_R_boolean, "()Z", 1 },
	{ "isMCNodeLocal", (intptr_t) M_java_net_InetAddress_isMCNodeLocal_R_boolean, VTABLE_java_net_InetAddress_isMCNodeLocal_R_boolean, "()Z", 1 },
	{ "isMCLinkLocal", (intptr_t) M_java_net_InetAddress_isMCLinkLocal_R_boolean, VTABLE_java_net_InetAddress_isMCLinkLocal_R_boolean, "()Z", 1 },
	{ "isMCSiteLocal", (intptr_t) M_java_net_InetAddress_isMCSiteLocal_R_boolean, VTABLE_java_net_InetAddress_isMCSiteLocal_R_boolean, "()Z", 1 },
	{ "isMCOrgLocal", (intptr_t) M_java_net_InetAddress_isMCOrgLocal_R_boolean, VTABLE_java_net_InetAddress_isMCOrgLocal_R_boolean, "()Z", 1 },
	{ "isReachable", (intptr_t) M_java_net_InetAddress_isReachable_int_R_boolean, VTABLE_java_net_InetAddress_isReachable_int_R_boolean, "(I)Z", 1 },
	{ "isReachable", (intptr_t) M_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean, VTABLE_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean, "(Ljava/net/NetworkInterface;II)Z", 1 },
	{ "getHostName", (intptr_t) M_java_net_InetAddress_getHostName_R_java_lang_String, VTABLE_java_net_InetAddress_getHostName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getHostName", (intptr_t) M_java_net_InetAddress_getHostName_boolean_R_java_lang_String, VTABLE_java_net_InetAddress_getHostName_boolean_R_java_lang_String, "(Z)Ljava/lang/String;", 0 },
	{ "getCanonicalHostName", (intptr_t) M_java_net_InetAddress_getCanonicalHostName_R_java_lang_String, VTABLE_java_net_InetAddress_getCanonicalHostName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getHostFromNameService", (intptr_t) SM_java_net_InetAddress_getHostFromNameService_java_net_InetAddress_boolean_R_java_lang_String, 0, "(Ljava/net/InetAddress;Z)Ljava/lang/String;", 10 },
	{ "getAddress", (intptr_t) M_java_net_InetAddress_getAddress_R_Array1_byte, VTABLE_java_net_InetAddress_getAddress_R_Array1_byte, "()[B", 1 },
	{ "getHostAddress", (intptr_t) M_java_net_InetAddress_getHostAddress_R_java_lang_String, VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_java_net_InetAddress_hashCode_R_int, VTABLE_java_net_InetAddress_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_net_InetAddress_equals_java_lang_Object_R_boolean, VTABLE_java_net_InetAddress_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_java_net_InetAddress_toString_R_java_lang_String, VTABLE_java_net_InetAddress_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "createNameService", (intptr_t) SM_java_net_InetAddress_createNameService_R_java_net_InetAddress$NameService, 0, "()Ljava/net/InetAddress$NameService;", 10 },
	{ "getByAddress", (intptr_t) SM_java_net_InetAddress_getByAddress_java_lang_String_Array1_byte_R_java_net_InetAddress, 0, "(Ljava/lang/String;[B)Ljava/net/InetAddress;", 9 },
	{ "getByName", (intptr_t) SM_java_net_InetAddress_getByName_java_lang_String_R_java_net_InetAddress, 0, "(Ljava/lang/String;)Ljava/net/InetAddress;", 9 },
	{ "getByName", (intptr_t) SM_java_net_InetAddress_getByName_java_lang_String_java_net_InetAddress_R_java_net_InetAddress, 0, "(Ljava/lang/String;Ljava/net/InetAddress;)Ljava/net/InetAddress;", 10 },
	{ "getAllByName", (intptr_t) SM_java_net_InetAddress_getAllByName_java_lang_String_R_Array1_java_net_InetAddress, 0, "(Ljava/lang/String;)[Ljava/net/InetAddress;", 9 },
	{ "getAllByName", (intptr_t) SM_java_net_InetAddress_getAllByName_java_lang_String_java_net_InetAddress_R_Array1_java_net_InetAddress, 0, "(Ljava/lang/String;Ljava/net/InetAddress;)[Ljava/net/InetAddress;", 10 },
	{ "getLoopbackAddress", (intptr_t) SM_java_net_InetAddress_getLoopbackAddress_R_java_net_InetAddress, 0, "()Ljava/net/InetAddress;", 9 },
	{ "checkNumericZone", (intptr_t) SM_java_net_InetAddress_checkNumericZone_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 10 },
	{ "getAllByName0", (intptr_t) SM_java_net_InetAddress_getAllByName0_java_lang_String_R_Array1_java_net_InetAddress, 0, "(Ljava/lang/String;)[Ljava/net/InetAddress;", 10 },
	{ "getAllByName0", (intptr_t) SM_java_net_InetAddress_getAllByName0_java_lang_String_boolean_R_Array1_java_net_InetAddress, 0, "(Ljava/lang/String;Z)[Ljava/net/InetAddress;", 8 },
	{ "getAllByName0", (intptr_t) SM_java_net_InetAddress_getAllByName0_java_lang_String_java_net_InetAddress_boolean_boolean_R_Array1_java_net_InetAddress, 0, "(Ljava/lang/String;Ljava/net/InetAddress;ZZ)[Ljava/net/InetAddress;", 10 },
	{ "getAddressesFromNameService", (intptr_t) SM_java_net_InetAddress_getAddressesFromNameService_java_lang_String_java_net_InetAddress_R_Array1_java_net_InetAddress, 0, "(Ljava/lang/String;Ljava/net/InetAddress;)[Ljava/net/InetAddress;", 8 },
	{ "getByAddress", (intptr_t) SM_java_net_InetAddress_getByAddress_Array1_byte_R_java_net_InetAddress, 0, "([B)Ljava/net/InetAddress;", 9 },
	{ "getLocalHost", (intptr_t) SM_java_net_InetAddress_getLocalHost_R_java_net_InetAddress, 0, "()Ljava/net/InetAddress;", 9 },
	{ "anyLocalAddress", (intptr_t) SM_java_net_InetAddress_anyLocalAddress_R_java_net_InetAddress, 0, "()Ljava/net/InetAddress;", 8 },
	{ "loadImpl", (intptr_t) SM_java_net_InetAddress_loadImpl_java_lang_String_R_java_net_InetAddressImpl, 0, "(Ljava/lang/String;)Ljava/net/InetAddressImpl;", 8 },
	{ "readObjectNoData", (intptr_t) M_java_net_InetAddress_readObjectNoData_java_io_ObjectInputStream, VTABLE_java_net_InetAddress_readObjectNoData_java_io_ObjectInputStream, "(Ljava/io/ObjectInputStream;)V", 2 },
	{ "access$000", (intptr_t) SM_java_net_InetAddress_access$000_R_java_util_concurrent_ConcurrentMap, 0, "()Ljava/util/concurrent/ConcurrentMap;", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_net_InetAddress, 0, "()V", 8 },
};

Class class_java_net_InetAddress{
		.nativeName = (intptr_t) "java/net/InetAddress",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InetAddress),
		.classVtable = (intptr_t) vtable_java_net_InetAddress,
		.staticInitializer = (intptr_t) clinit_java_net_InetAddress,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetAddress,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 8,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetAddress = registerClass(&class_java_net_InetAddress);

}
