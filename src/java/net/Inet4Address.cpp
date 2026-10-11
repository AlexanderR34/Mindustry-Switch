#include "java/net/Inet4Address.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "java/net/Inet4Address.h"
#include "java/net/InetAddress_InetAddressHolder.h"

extern "C" {

jint SF_java_net_Inet4Address_INADDRSZ;
jlong SF_java_net_Inet4Address_serialVersionUID;

void mark_java_net_Inet4Address(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_net_InetAddress(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_net_Inet4Address *) object;
}

void clinit_java_net_Inet4Address(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_net_InetAddress(ctx);
	SF_java_net_Inet4Address_INADDRSZ = jint(4);
	SF_java_net_Inet4Address_serialVersionUID = jlong(3286316764910316507ll);
}

void init_java_net_Inet4Address(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet4Address(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_net_InetAddress(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_hostName = (jref) (jobject(nullptr));
	LINE_NUMBER(11);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_address = (jint(0));
	LINE_NUMBER(12);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_family = (jint(1));
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_Inet4Address_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet4Address(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(15);
	init_java_net_InetAddress(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_hostName = (jref) (frame[1].o);
	LINE_NUMBER(17);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_family = (jint(1));
	LINE_NUMBER(18);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(19);
	frame[3].i = (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(3)))) & (255));
	LINE_NUMBER(20);
	frame[3].i = ((frame[3].i) | ((((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(2)))) << (8)) & (jint(65280))));
	LINE_NUMBER(21);
	frame[3].i = ((frame[3].i) | ((((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(1)))) << (16)) & (jint(16711680))));
	LINE_NUMBER(22);
	frame[3].i = ((frame[3].i) | ((((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0)))) << (24)) & (jint(-16777216))));
	LINE_NUMBER(23);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_address = (frame[3].i);
	}
label_4:;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_originalHostName = (jref) (frame[1].o);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_Inet4Address_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet4Address(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	init_java_net_InetAddress(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_hostName = (jref) (frame[1].o);
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_family = (jint(1));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_address = (frame[2].i);
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_originalHostName = (jref) (frame[1].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_Inet4Address_writeReplace_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:writeReplace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	clinit_java_net_InetAddress(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_InetAddress);
	init_java_net_InetAddress(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String])(ctx, sp[1].o);
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_hostName = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[1].o);
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_address = temp0;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[1].o));
	((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_family = (jint(2));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isMulticastAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isMulticastAddress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	if ((temp0 & (jint(-268435456))) != (jint(-536870912))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isAnyLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isAnyLocalAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isLoopbackAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isLoopbackAddress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_java_net_Inet4Address_getAddress_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_getAddress_R_Array1_byte])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(54);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)))) != (127)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isLinkLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isLinkLocalAddress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(59);
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))) & (255)) != (169)) goto label_2;
	}
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) & (255)) != (254)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isSiteLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isSiteLocalAddress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(64);
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))) & (255)) == (10)) goto label_2;
	}
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))) & (255)) != (172)) goto label_3;
	}
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) & (240)) == (16)) goto label_2;
	}
label_3:;
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))) & (255)) != (192)) goto label_4;
	}
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) & (255)) != (168)) goto label_4;
	}
label_2:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isMCGlobal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isMCGlobal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_java_net_Inet4Address_getAddress_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_getAddress_R_Array1_byte])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(69);
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)))) & (255)) < (224)) goto label_2;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)))) & (255)) > (238)) goto label_2;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)))) & (255)) != (224)) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(1)))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(2)))) == 0) goto label_2;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isMCNodeLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isMCNodeLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isMCLinkLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isMCLinkLocal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(78);
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))) & (255)) != (224)) goto label_2;
	}
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) & (255)) != 0) goto label_2;
	}
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (8))) & (255)) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isMCSiteLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isMCSiteLocal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(83);
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))) & (255)) != (239)) goto label_2;
	}
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) & (255)) != (255)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_isMCOrgLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:isMCOrgLocal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(88);
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))) & (255)) != (239)) goto label_2;
	}
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) & (255)) < (192)) goto label_2;
	}
	{
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) & (255)) > (195)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_net_Inet4Address_getAddress_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:getAddress", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(93);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(4)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jbyte(((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))) & (255))));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jbyte(((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) & (255))));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jbyte(((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (8))) & (255))));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jbyte(((frame[1].i) & (255))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_net_Inet4Address_getHostAddress_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:getHostAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_java_net_Inet4Address_getAddress_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_getAddress_R_Array1_byte])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_net_Inet4Address_numericToTextFormat_Array1_byte_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_net_Inet4Address_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet4Address_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_net_Inet4Address)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_net_InetAddress, (frame[1].o))))->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (checkCast(ctx, &class_java_net_InetAddress, (frame[1].o))));
	jint temp0 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_net_InetAddress$InetAddressHolder_getAddress_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_Inet4Address_numericToTextFormat_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet4Address:numericToTextFormat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet4Address(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(110);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) & (255)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1)))) & (255)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(2)))) & (255)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(3)))) & (255)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_Inet4Address[] {
	(void *) M_java_net_Inet4Address_hashCode_R_int,
	(void *) M_java_net_Inet4Address_equals_java_lang_Object_R_boolean,
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
	(void *) M_java_net_Inet4Address_isMulticastAddress_R_boolean,
	(void *) M_java_net_Inet4Address_isAnyLocalAddress_R_boolean,
	(void *) M_java_net_Inet4Address_isLoopbackAddress_R_boolean,
	(void *) M_java_net_Inet4Address_isLinkLocalAddress_R_boolean,
	(void *) M_java_net_Inet4Address_isSiteLocalAddress_R_boolean,
	(void *) M_java_net_Inet4Address_isMCGlobal_R_boolean,
	(void *) M_java_net_Inet4Address_isMCNodeLocal_R_boolean,
	(void *) M_java_net_Inet4Address_isMCLinkLocal_R_boolean,
	(void *) M_java_net_Inet4Address_isMCSiteLocal_R_boolean,
	(void *) M_java_net_Inet4Address_isMCOrgLocal_R_boolean,
	(void *) M_java_net_InetAddress_isReachable_int_R_boolean,
	(void *) M_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean,
	(void *) M_java_net_InetAddress_getHostName_R_java_lang_String,
	(void *) M_java_net_InetAddress_getHostName_boolean_R_java_lang_String,
	(void *) M_java_net_InetAddress_getCanonicalHostName_R_java_lang_String,
	(void *) M_java_net_Inet4Address_getAddress_R_Array1_byte,
	(void *) M_java_net_Inet4Address_getHostAddress_R_java_lang_String,
	(void *) M_java_net_InetAddress_readObjectNoData_java_io_ObjectInputStream,
	(void *) M_java_net_Inet4Address_writeReplace_R_java_lang_Object,
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
	{ "writeReplace", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "INADDRSZ", &class_int, (intptr_t) &SF_java_net_Inet4Address_INADDRSZ, "I", 24 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_net_Inet4Address_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_Inet4Address, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_net_Inet4Address_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 0 },
	{ "<init>", (intptr_t) init_java_net_Inet4Address_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 0 },
	{ "writeReplace", (intptr_t) M_java_net_Inet4Address_writeReplace_R_java_lang_Object, VTABLE_java_net_Inet4Address_writeReplace_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "isMulticastAddress", (intptr_t) M_java_net_Inet4Address_isMulticastAddress_R_boolean, VTABLE_java_net_Inet4Address_isMulticastAddress_R_boolean, "()Z", 1 },
	{ "isAnyLocalAddress", (intptr_t) M_java_net_Inet4Address_isAnyLocalAddress_R_boolean, VTABLE_java_net_Inet4Address_isAnyLocalAddress_R_boolean, "()Z", 1 },
	{ "isLoopbackAddress", (intptr_t) M_java_net_Inet4Address_isLoopbackAddress_R_boolean, VTABLE_java_net_Inet4Address_isLoopbackAddress_R_boolean, "()Z", 1 },
	{ "isLinkLocalAddress", (intptr_t) M_java_net_Inet4Address_isLinkLocalAddress_R_boolean, VTABLE_java_net_Inet4Address_isLinkLocalAddress_R_boolean, "()Z", 1 },
	{ "isSiteLocalAddress", (intptr_t) M_java_net_Inet4Address_isSiteLocalAddress_R_boolean, VTABLE_java_net_Inet4Address_isSiteLocalAddress_R_boolean, "()Z", 1 },
	{ "isMCGlobal", (intptr_t) M_java_net_Inet4Address_isMCGlobal_R_boolean, VTABLE_java_net_Inet4Address_isMCGlobal_R_boolean, "()Z", 1 },
	{ "isMCNodeLocal", (intptr_t) M_java_net_Inet4Address_isMCNodeLocal_R_boolean, VTABLE_java_net_Inet4Address_isMCNodeLocal_R_boolean, "()Z", 1 },
	{ "isMCLinkLocal", (intptr_t) M_java_net_Inet4Address_isMCLinkLocal_R_boolean, VTABLE_java_net_Inet4Address_isMCLinkLocal_R_boolean, "()Z", 1 },
	{ "isMCSiteLocal", (intptr_t) M_java_net_Inet4Address_isMCSiteLocal_R_boolean, VTABLE_java_net_Inet4Address_isMCSiteLocal_R_boolean, "()Z", 1 },
	{ "isMCOrgLocal", (intptr_t) M_java_net_Inet4Address_isMCOrgLocal_R_boolean, VTABLE_java_net_Inet4Address_isMCOrgLocal_R_boolean, "()Z", 1 },
	{ "getAddress", (intptr_t) M_java_net_Inet4Address_getAddress_R_Array1_byte, VTABLE_java_net_Inet4Address_getAddress_R_Array1_byte, "()[B", 1 },
	{ "getHostAddress", (intptr_t) M_java_net_Inet4Address_getHostAddress_R_java_lang_String, VTABLE_java_net_Inet4Address_getHostAddress_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_java_net_Inet4Address_hashCode_R_int, VTABLE_java_net_Inet4Address_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_net_Inet4Address_equals_java_lang_Object_R_boolean, VTABLE_java_net_Inet4Address_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "numericToTextFormat", (intptr_t) SM_java_net_Inet4Address_numericToTextFormat_Array1_byte_R_java_lang_String, 0, "([B)Ljava/lang/String;", 8 },
};

Class class_java_net_Inet4Address{
		.nativeName = (intptr_t) "java/net/Inet4Address",
		.parentClass = (intptr_t) &class_java_net_InetAddress,
		.size = sizeof(java_net_Inet4Address),
		.classVtable = (intptr_t) vtable_java_net_Inet4Address,
		.staticInitializer = (intptr_t) clinit_java_net_Inet4Address,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_Inet4Address,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_Inet4Address = registerClass(&class_java_net_Inet4Address);

}
