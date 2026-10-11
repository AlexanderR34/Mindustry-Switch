#include "java/net/InetSocketAddress_InetSocketAddressHolder.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/net/InetSocketAddress_1.h"
#include "java/net/InetAddress.h"
#include "java/net/InetSocketAddress_InetSocketAddressHolder.h"
#include "java/net/InetSocketAddress.h"
#include "java/net/InetAddress_InetAddressHolder.h"

extern "C" {


void mark_java_net_InetSocketAddress$InetSocketAddressHolder(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_InetSocketAddress$InetSocketAddressHolder *) object;
	if (self->F_hostname)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hostname)->clazz)->markFunction)((jobject) self->F_hostname, mark, depth + 1);
	if (self->F_addr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_addr)->clazz)->markFunction)((jobject) self->F_addr, mark, depth + 1);
}

void clinit_java_net_InetSocketAddress$InetSocketAddressHolder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_InetSocketAddress$InetSocketAddressHolder_java_lang_String_java_net_InetAddress_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(133);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(134);
	((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname = (jref) (frame[1].o);
	LINE_NUMBER(135);
	((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr = (jref) (frame[2].o);
	LINE_NUMBER(136);
	((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_port = (frame[3].i);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_net_InetSocketAddress$InetSocketAddressHolder_getPort_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:getPort", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return ((jint)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_port);
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetSocketAddress$InetSocketAddressHolder_getAddress_R_java_net_InetAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:getAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetSocketAddress$InetSocketAddressHolder_getHostName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:getHostName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	sp[0].o = (jobject)((func_java_net_InetAddress_getHostName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress_getHostName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ACONST_NULL();
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_net_InetSocketAddress$InetSocketAddressHolder_getHostString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:getHostString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	sp[0].o = (jobject)((func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	sp[0].o = (jobject)((func_java_net_InetAddress_getHostAddress_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetSocketAddress$InetSocketAddressHolder_isUnresolved_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:isUnresolved", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	if (sp[0].o != nullptr) goto label_1;
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

jobject M_java_net_InetSocketAddress$InetSocketAddressHolder_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	jint temp0 = (jint)M_java_net_InetSocketAddress$InetSocketAddressHolder_isUnresolved_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_port));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	sp[1].o = (jobject)((func_java_net_InetAddress_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_InetAddress_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_port));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_java_net_InetSocketAddress$InetSocketAddressHolder_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_net_InetSocketAddress$InetSocketAddressHolder)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(175);
	frame[2].o = (checkCast(ctx, &class_java_net_InetSocketAddress$InetSocketAddressHolder, (frame[1].o)));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	sp[1].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[2].o)))->F_addr;
	jint temp0 = (jint)((func_java_net_InetAddress_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp0;
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[2].o)))->F_addr;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname;
	sp[1].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[2].o)))->F_hostname;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	INST_ISTORE(3);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[2].o)))->F_addr;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[2].o)))->F_hostname;
	if (sp[0].o != nullptr) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	INST_ISTORE(3);
label_7:;
	{
	LINE_NUMBER(185);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	if (((jint)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_port) != ((jint)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[2].o)))->F_port)) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_net_InetSocketAddress$InetSocketAddressHolder_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_addr;
	jint temp0 = (jint)((func_java_net_InetAddress_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + ((jint)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_port));
	}
label_1:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_hostname;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 + ((jint)((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK((frame[0].o)))->F_port);
	sp[0].i = temp1;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(0);
	sp[-1].i = ((java_net_InetSocketAddress$InetSocketAddressHolder *) NULL_CHECK(sp[-1].o))->F_port;
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void init_java_net_InetSocketAddress$InetSocketAddressHolder_java_lang_String_java_net_InetAddress_int_java_net_InetSocketAddress$1(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(128);
	init_java_net_InetSocketAddress$InetSocketAddressHolder_java_lang_String_java_net_InetAddress_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$100_java_net_InetSocketAddress$InetSocketAddressHolder_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)M_java_net_InetSocketAddress$InetSocketAddressHolder_getPort_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$200_java_net_InetSocketAddress$InetSocketAddressHolder_R_java_net_InetAddress(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:access$200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)M_java_net_InetSocketAddress$InetSocketAddressHolder_getAddress_R_java_net_InetAddress(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$300_java_net_InetSocketAddress$InetSocketAddressHolder_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)M_java_net_InetSocketAddress$InetSocketAddressHolder_getHostName_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$400_java_net_InetSocketAddress$InetSocketAddressHolder_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)M_java_net_InetSocketAddress$InetSocketAddressHolder_getHostString_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$500_java_net_InetSocketAddress$InetSocketAddressHolder_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress$InetSocketAddressHolder:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)M_java_net_InetSocketAddress$InetSocketAddressHolder_isUnresolved_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InetSocketAddress$InetSocketAddressHolder[] {
	(void *) M_java_net_InetSocketAddress$InetSocketAddressHolder_hashCode_R_int,
	(void *) M_java_net_InetSocketAddress$InetSocketAddressHolder_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_net_InetSocketAddress$InetSocketAddressHolder_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_net_InetSocketAddress$InetSocketAddressHolder_getPort_R_int,
	(void *) M_java_net_InetSocketAddress$InetSocketAddressHolder_getAddress_R_java_net_InetAddress,
	(void *) M_java_net_InetSocketAddress$InetSocketAddressHolder_getHostName_R_java_lang_String,
	(void *) M_java_net_InetSocketAddress$InetSocketAddressHolder_getHostString_R_java_lang_String,
	(void *) M_java_net_InetSocketAddress$InetSocketAddressHolder_isUnresolved_R_boolean,
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
	{ "getPort", "()I" },
	{ "getAddress", "()Ljava/net/InetAddress;" },
	{ "getHostName", "()Ljava/lang/String;" },
	{ "getHostString", "()Ljava/lang/String;" },
	{ "isUnresolved", "()Z" },
};

static FieldMetadata fields[] {
	{ "hostname", &class_java_lang_String, offsetof(java_net_InetSocketAddress$InetSocketAddressHolder, F_hostname), "Ljava/lang/String;", 2 },
	{ "addr", &class_java_net_InetAddress, offsetof(java_net_InetSocketAddress$InetSocketAddressHolder, F_addr), "Ljava/net/InetAddress;", 2 },
	{ "port", &class_int, offsetof(java_net_InetSocketAddress$InetSocketAddressHolder, F_port), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_InetSocketAddress$InetSocketAddressHolder_java_lang_String_java_net_InetAddress_int, 0, "(Ljava/lang/String;Ljava/net/InetAddress;I)V", 2 },
	{ "getPort", (intptr_t) M_java_net_InetSocketAddress$InetSocketAddressHolder_getPort_R_int, VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_getPort_R_int, "()I", 2 },
	{ "getAddress", (intptr_t) M_java_net_InetSocketAddress$InetSocketAddressHolder_getAddress_R_java_net_InetAddress, VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_getAddress_R_java_net_InetAddress, "()Ljava/net/InetAddress;", 2 },
	{ "getHostName", (intptr_t) M_java_net_InetSocketAddress$InetSocketAddressHolder_getHostName_R_java_lang_String, VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_getHostName_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "getHostString", (intptr_t) M_java_net_InetSocketAddress$InetSocketAddressHolder_getHostString_R_java_lang_String, VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_getHostString_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "isUnresolved", (intptr_t) M_java_net_InetSocketAddress$InetSocketAddressHolder_isUnresolved_R_boolean, VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_isUnresolved_R_boolean, "()Z", 2 },
	{ "toString", (intptr_t) M_java_net_InetSocketAddress$InetSocketAddressHolder_toString_R_java_lang_String, VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_java_net_InetSocketAddress$InetSocketAddressHolder_equals_java_lang_Object_R_boolean, VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 17 },
	{ "hashCode", (intptr_t) M_java_net_InetSocketAddress$InetSocketAddressHolder_hashCode_R_int, VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_hashCode_R_int, "()I", 17 },
	{ "<init>", (intptr_t) init_java_net_InetSocketAddress$InetSocketAddressHolder_java_lang_String_java_net_InetAddress_int_java_net_InetSocketAddress$1, 0, "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/net/InetSocketAddress$1;)V", 4096 },
	{ "access$100", (intptr_t) SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$100_java_net_InetSocketAddress$InetSocketAddressHolder_R_int, 0, "(Ljava/net/InetSocketAddress$InetSocketAddressHolder;)I", 4104 },
	{ "access$200", (intptr_t) SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$200_java_net_InetSocketAddress$InetSocketAddressHolder_R_java_net_InetAddress, 0, "(Ljava/net/InetSocketAddress$InetSocketAddressHolder;)Ljava/net/InetAddress;", 4104 },
	{ "access$300", (intptr_t) SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$300_java_net_InetSocketAddress$InetSocketAddressHolder_R_java_lang_String, 0, "(Ljava/net/InetSocketAddress$InetSocketAddressHolder;)Ljava/lang/String;", 4104 },
	{ "access$400", (intptr_t) SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$400_java_net_InetSocketAddress$InetSocketAddressHolder_R_java_lang_String, 0, "(Ljava/net/InetSocketAddress$InetSocketAddressHolder;)Ljava/lang/String;", 4104 },
	{ "access$500", (intptr_t) SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$500_java_net_InetSocketAddress$InetSocketAddressHolder_R_boolean, 0, "(Ljava/net/InetSocketAddress$InetSocketAddressHolder;)Z", 4104 },
};

Class class_java_net_InetSocketAddress$InetSocketAddressHolder{
		.nativeName = (intptr_t) "java/net/InetSocketAddress$InetSocketAddressHolder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_InetSocketAddress$InetSocketAddressHolder),
		.classVtable = (intptr_t) vtable_java_net_InetSocketAddress$InetSocketAddressHolder,
		.staticInitializer = (intptr_t) clinit_java_net_InetSocketAddress$InetSocketAddressHolder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetSocketAddress$InetSocketAddressHolder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_InetSocketAddress,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetSocketAddress$InetSocketAddressHolder = registerClass(&class_java_net_InetSocketAddress$InetSocketAddressHolder);

}

