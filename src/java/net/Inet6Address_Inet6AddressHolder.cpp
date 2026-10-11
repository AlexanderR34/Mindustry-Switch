#include "java/net/Inet6Address_Inet6AddressHolder.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/net/Inet6Address_Inet6AddressHolder.h"
#include "java/util/Arrays.h"
#include "java/net/Inet6Address_1.h"
#include "java/net/NetworkInterface.h"
#include "java/net/Inet6Address.h"
#include "java/lang/System.h"

extern "C" {


void mark_java_net_Inet6Address$Inet6AddressHolder(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_Inet6Address$Inet6AddressHolder *) object;
	if (self->F_ipaddress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ipaddress)->clazz)->markFunction)((jobject) self->F_ipaddress, mark, depth + 1);
	if (self->F_scope_ifname)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scope_ifname)->clazz)->markFunction)((jobject) self->F_scope_ifname, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_net_Inet6Address$Inet6AddressHolder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address$Inet6AddressHolder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(310);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (16));
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK(sp[0].o))->F_ipaddress = (jref) sp[1].o;
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_Array1_byte_int_boolean_java_net_NetworkInterface_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3, jobject param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address$Inet6AddressHolder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(314);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(315);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress = (jref) (frame[2].o);
	LINE_NUMBER(316);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_id = (frame[3].i);
	LINE_NUMBER(317);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_id_set = (frame[4].i);
	LINE_NUMBER(318);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_ifname_set = (frame[6].i);
	LINE_NUMBER(319);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_ifname = (jref) (frame[5].o);
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:setAddr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(323);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != (16)) goto label_1;
	}
	{
	LINE_NUMBER(324);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (16));
	}
label_1:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(330);
	((func_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(331);
	if ((frame[2].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(332);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_id = (frame[2].i);
	LINE_NUMBER(333);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_id_set = (jint(1));
	}
label_2:;
	LINE_NUMBER(336);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_java_net_NetworkInterface(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(339);
	((func_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(340);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	jint temp0 = (jint)SM_java_net_Inet6Address_access$100_Array1_byte_java_net_NetworkInterface_R_int(ctx, sp[1].o, (frame[2].o));
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK(sp[0].o))->F_scope_id = temp0;
	LINE_NUMBER(342);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_id_set = (jint(1));
	LINE_NUMBER(343);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_ifname = (jref) (frame[2].o);
	LINE_NUMBER(344);
	((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_ifname_set = (jint(1));
	}
label_2:;
	LINE_NUMBER(347);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_net_Inet6Address$Inet6AddressHolder_getHostAddress_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:getHostAddress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	sp[0].o = (jobject)SM_java_net_Inet6Address_numericToTextFormat_Array1_byte_R_java_lang_String(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(351);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_ifname;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(352);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"%"_j))));
	sp[1].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_ifname;
	sp[1].o = (jobject)((func_java_net_NetworkInterface_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_NetworkInterface_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(353);
	if (((jint)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_id_set) == 0) goto label_4;
	}
	{
	LINE_NUMBER(354);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"%"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_scope_id));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address$Inet6AddressHolder_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	if ((isInstance(ctx, (frame[1].o), &class_java_net_Inet6Address$Inet6AddressHolder)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(364);
	frame[2].o = (checkCast(ctx, &class_java_net_Inet6Address$Inet6AddressHolder, (frame[1].o)));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	sp[1].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[2].o)))->F_ipaddress;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_byte_Array1_byte_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_net_Inet6Address$Inet6AddressHolder_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(373);
	frame[1].i = (jint(0));
	LINE_NUMBER(376);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (16)) goto label_5;
	}
	{
	LINE_NUMBER(377);
	frame[4].i = (jint(0));
	LINE_NUMBER(379);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_9;
	}
	{
	if ((frame[3].i) >= (16)) goto label_9;
	}
	{
	LINE_NUMBER(380);
	jint temp0 = (frame[2].i) << (8);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	frame[2].i = (temp0 + ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))));
	LINE_NUMBER(381);
	INST_IINC(4, 1);
	LINE_NUMBER(379);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(376);
	frame[1].i = ((frame[1].i) + (frame[2].i));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address$Inet6AddressHolder_isIPv4CompatibleAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isIPv4CompatibleAddress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (9))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (10))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (11))) != 0) goto label_1;
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

jbool M_java_net_Inet6Address$Inet6AddressHolder_isMulticastAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isMulticastAddress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) != (255)) goto label_1;
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

jbool M_java_net_Inet6Address$Inet6AddressHolder_isAnyLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isAnyLocalAddress", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(398);
	frame[1].i = (jint(0));
	LINE_NUMBER(400);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (16)) goto label_3;
	}
	{
	LINE_NUMBER(401);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	frame[1].i = (jbyte((temp0 | ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i))))));
	LINE_NUMBER(400);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(404);
	if ((frame[1].i) != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address$Inet6AddressHolder_isLoopbackAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isLoopbackAddress", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	frame[1].i = (jint(0));
	LINE_NUMBER(410);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (15)) goto label_3;
	}
	{
	LINE_NUMBER(411);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	frame[1].i = (jbyte((temp0 | ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i))))));
	LINE_NUMBER(410);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(414);
	if ((frame[1].i) != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (15))) != (jint(1))) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address$Inet6AddressHolder_isLinkLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isLinkLocalAddress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) != (254)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (192)) != (128)) goto label_1;
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

jbool M_java_net_Inet6Address$Inet6AddressHolder_isSiteLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isSiteLocalAddress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) != (254)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (192)) != (192)) goto label_1;
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

jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCGlobal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isMCGlobal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) != (255)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (15)) != (14)) goto label_1;
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

jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCNodeLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isMCNodeLocal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) != (255)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (15)) != (jint(1))) goto label_1;
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

jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCLinkLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isMCLinkLocal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) != (255)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (15)) != (jint(2))) goto label_1;
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

jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCSiteLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isMCSiteLocal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) != (255)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (15)) != (jint(5))) goto label_1;
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

jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCOrgLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:isMCOrgLocal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255)) != (255)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK((frame[0].o)))->F_ipaddress;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) & (15)) != (8)) goto label_1;
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

void init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_java_net_Inet6Address$1(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address$Inet6AddressHolder:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address$Inet6AddressHolder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(303);
	init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_Inet6Address$Inet6AddressHolder[] {
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_hashCode_R_int,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_int,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_java_net_NetworkInterface,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_getHostAddress_R_java_lang_String,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isIPv4CompatibleAddress_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isMulticastAddress_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isAnyLocalAddress_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isLoopbackAddress_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isLinkLocalAddress_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isSiteLocalAddress_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isMCGlobal_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isMCNodeLocal_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isMCLinkLocal_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isMCSiteLocal_R_boolean,
	(void *) M_java_net_Inet6Address$Inet6AddressHolder_isMCOrgLocal_R_boolean,
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
	{ "setAddr", "([B)V" },
	{ "init", "([BI)V" },
	{ "init", "([BLjava/net/NetworkInterface;)V" },
	{ "getHostAddress", "()Ljava/lang/String;" },
	{ "isIPv4CompatibleAddress", "()Z" },
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
};

static FieldMetadata fields[] {
	{ "ipaddress", getArrayClass(&class_byte, 1), offsetof(java_net_Inet6Address$Inet6AddressHolder, F_ipaddress), "[B", 0 },
	{ "scope_id", &class_int, offsetof(java_net_Inet6Address$Inet6AddressHolder, F_scope_id), "I", 0 },
	{ "scope_id_set", &class_boolean, offsetof(java_net_Inet6Address$Inet6AddressHolder, F_scope_id_set), "Z", 0 },
	{ "scope_ifname", &class_java_net_NetworkInterface, offsetof(java_net_Inet6Address$Inet6AddressHolder, F_scope_ifname), "Ljava/net/NetworkInterface;", 0 },
	{ "scope_ifname_set", &class_boolean, offsetof(java_net_Inet6Address$Inet6AddressHolder, F_scope_ifname_set), "Z", 0 },
	{ "this$0", &class_java_net_Inet6Address, offsetof(java_net_Inet6Address$Inet6AddressHolder, F_this$0), "Ljava/net/Inet6Address;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address, 0, "(Ljava/net/Inet6Address;)V", 2 },
	{ "<init>", (intptr_t) init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_Array1_byte_int_boolean_java_net_NetworkInterface_boolean, 0, "(Ljava/net/Inet6Address;[BIZLjava/net/NetworkInterface;Z)V", 2 },
	{ "setAddr", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte, VTABLE_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte, "([B)V", 0 },
	{ "init", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_int, VTABLE_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_int, "([BI)V", 0 },
	{ "init", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_java_net_NetworkInterface, VTABLE_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_java_net_NetworkInterface, "([BLjava/net/NetworkInterface;)V", 0 },
	{ "getHostAddress", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_getHostAddress_R_java_lang_String, VTABLE_java_net_Inet6Address$Inet6AddressHolder_getHostAddress_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "equals", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_equals_java_lang_Object_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_hashCode_R_int, VTABLE_java_net_Inet6Address$Inet6AddressHolder_hashCode_R_int, "()I", 1 },
	{ "isIPv4CompatibleAddress", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isIPv4CompatibleAddress_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isIPv4CompatibleAddress_R_boolean, "()Z", 0 },
	{ "isMulticastAddress", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isMulticastAddress_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMulticastAddress_R_boolean, "()Z", 0 },
	{ "isAnyLocalAddress", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isAnyLocalAddress_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isAnyLocalAddress_R_boolean, "()Z", 0 },
	{ "isLoopbackAddress", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isLoopbackAddress_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isLoopbackAddress_R_boolean, "()Z", 0 },
	{ "isLinkLocalAddress", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isLinkLocalAddress_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isLinkLocalAddress_R_boolean, "()Z", 0 },
	{ "isSiteLocalAddress", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isSiteLocalAddress_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isSiteLocalAddress_R_boolean, "()Z", 0 },
	{ "isMCGlobal", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isMCGlobal_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCGlobal_R_boolean, "()Z", 0 },
	{ "isMCNodeLocal", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isMCNodeLocal_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCNodeLocal_R_boolean, "()Z", 0 },
	{ "isMCLinkLocal", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isMCLinkLocal_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCLinkLocal_R_boolean, "()Z", 0 },
	{ "isMCSiteLocal", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isMCSiteLocal_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCSiteLocal_R_boolean, "()Z", 0 },
	{ "isMCOrgLocal", (intptr_t) M_java_net_Inet6Address$Inet6AddressHolder_isMCOrgLocal_R_boolean, VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCOrgLocal_R_boolean, "()Z", 0 },
	{ "<init>", (intptr_t) init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_java_net_Inet6Address$1, 0, "(Ljava/net/Inet6Address;Ljava/net/Inet6Address$1;)V", 4096 },
};

Class class_java_net_Inet6Address$Inet6AddressHolder{
		.nativeName = (intptr_t) "java/net/Inet6Address$Inet6AddressHolder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_Inet6Address$Inet6AddressHolder),
		.classVtable = (intptr_t) vtable_java_net_Inet6Address$Inet6AddressHolder,
		.staticInitializer = (intptr_t) clinit_java_net_Inet6Address$Inet6AddressHolder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_Inet6Address$Inet6AddressHolder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_Inet6Address,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_Inet6Address$Inet6AddressHolder = registerClass(&class_java_net_Inet6Address$Inet6AddressHolder);

}

