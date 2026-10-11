#include "java/net/Inet6Address.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Boolean.h"
#include "java/net/Inet6Address_1.h"
#include "java/net/NetworkInterface.h"
#include "java/net/InetAddress_InetAddressHolder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/Inet6Address_Inet6AddressHolder.h"
#include "java/io/ObjectStreamField.h"
#include "java/net/InetAddress.h"
#include "java/util/Enumeration.h"
#include "java/net/Inet6Address.h"
#include "java/net/UnknownHostException.h"
#include "java/net/SocketException.h"
#include "java/lang/Class.h"

extern "C" {

jint SF_java_net_Inet6Address_INADDRSZ;
jlong SF_java_net_Inet6Address_serialVersionUID;
jobject SF_java_net_Inet6Address_serialPersistentFields;
jint SF_java_net_Inet6Address_INT16SZ;

void mark_java_net_Inet6Address(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_Inet6Address_serialPersistentFields)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_Inet6Address_serialPersistentFields)->clazz)->markFunction)((jobject) SF_java_net_Inet6Address_serialPersistentFields, mark, depth + 1);
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
	auto self = (java_net_Inet6Address *) object;
	if (self->F_holder6)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_holder6)->clazz)->markFunction)((jobject) self->F_holder6, mark, depth + 1);
}

void init_java_net_Inet6Address(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_net_InetAddress(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	((func_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (jint(2)));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_java_net_Inet6Address$Inet6AddressHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_Inet6Address$Inet6AddressHolder);
	init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_java_net_Inet6Address$1(ctx, sp[1].o, (frame[0].o), (jobject(nullptr)));
	((java_net_Inet6Address *) NULL_CHECK(sp[0].o))->F_holder6 = (jref) sp[1].o;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_Inet6Address_java_lang_String_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(26);
	init_java_net_InetAddress(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	((func_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int])(ctx, sp[0].o, (frame[1].o), (jint(2)));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_java_net_Inet6Address$Inet6AddressHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_Inet6Address$Inet6AddressHolder);
	init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_java_net_Inet6Address$1(ctx, sp[1].o, (frame[0].o), (jobject(nullptr)));
	((java_net_Inet6Address *) NULL_CHECK(sp[0].o))->F_holder6 = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	((func_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_int])(ctx, sp[0].o, (frame[2].o), (frame[3].i));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_Inet6Address_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	init_java_net_InetAddress(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_java_net_Inet6Address$Inet6AddressHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_Inet6Address$Inet6AddressHolder);
	init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_java_net_Inet6Address$1(ctx, sp[1].o, (frame[0].o), (jobject(nullptr)));
	((java_net_Inet6Address *) NULL_CHECK(sp[0].o))->F_holder6 = (jref) sp[1].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_UnknownHostException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(36);
	M_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_java_net_NetworkInterface, (jobject(nullptr)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(38);
	goto label_6;
label_2:;
	LINE_NUMBER(37);
	INST_ASTORE(3);
label_6:;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_net_Inet6Address_java_lang_String_Array1_byte_java_net_NetworkInterface(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(42);
	init_java_net_InetAddress(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_java_net_Inet6Address$Inet6AddressHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_Inet6Address$Inet6AddressHolder);
	init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_java_net_Inet6Address$1(ctx, sp[1].o, (frame[0].o), (jobject(nullptr)));
	((java_net_Inet6Address *) NULL_CHECK(sp[0].o))->F_holder6 = (jref) sp[1].o;
	LINE_NUMBER(44);
	M_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_Inet6Address_java_lang_String_Array1_byte_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(47);
	init_java_net_InetAddress(ctx, (frame[0].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_java_net_Inet6Address$Inet6AddressHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_Inet6Address$Inet6AddressHolder);
	init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_java_net_Inet6Address$1(ctx, sp[1].o, (frame[0].o), (jobject(nullptr)));
	((java_net_Inet6Address *) NULL_CHECK(sp[0].o))->F_holder6 = (jref) sp[1].o;
	LINE_NUMBER(49);
	M_java_net_Inet6Address_initstr_java_lang_String_Array1_byte_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_Inet6Address_getByAddress_java_lang_String_Array1_byte_java_net_NetworkInterface_R_java_net_Inet6Address(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:getByAddress", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(53);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 != (91)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (93)) goto label_1;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(57);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != (16)) goto label_3;
	}
	{
	LINE_NUMBER(58);
	clinit_java_net_Inet6Address(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_Inet6Address);
	init_java_net_Inet6Address_java_lang_String_Array1_byte_java_net_NetworkInterface(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(60);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"addr is of illegal length"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_net_Inet6Address_getByAddress_java_lang_String_Array1_byte_int_R_java_net_Inet6Address(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:getByAddress", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(65);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 != (91)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (93)) goto label_1;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(69);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != (16)) goto label_3;
	}
	{
	LINE_NUMBER(70);
	clinit_java_net_Inet6Address(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_Inet6Address);
	init_java_net_Inet6Address_java_lang_String_Array1_byte_int(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(72);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"addr is of illegal length"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_net_Inet6Address_initstr_java_lang_String_Array1_byte_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:initstr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_SocketException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)SM_java_net_NetworkInterface_getByName_java_lang_String_R_java_net_NetworkInterface(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(79);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(80);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"no such interface "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(82);
	M_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(86);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(84);
	frame[4].o = sp[0].o;
	LINE_NUMBER(85);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"SocketException thrown"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:initif", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(90);
	frame[4].i = (jint(-1));
	LINE_NUMBER(91);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	((func_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_java_net_NetworkInterface) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_java_net_NetworkInterface])(ctx, sp[0].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(92);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != (16)) goto label_3;
	}
	{
	LINE_NUMBER(93);
	frame[4].i = (jint(2));
	}
label_3:;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	((func_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int])(ctx, sp[0].o, (frame[1].o), (frame[4].i));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_java_net_Inet6Address_isDifferentLocalAddressType_Array1_byte_Array1_byte_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isDifferentLocalAddressType", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(100);
	jint temp0 = (jint)SM_java_net_Inet6Address_isLinkLocalAddress_Array1_byte_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_net_Inet6Address_isLinkLocalAddress_Array1_byte_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)SM_java_net_Inet6Address_isSiteLocalAddress_Array1_byte_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_java_net_Inet6Address_isSiteLocalAddress_Array1_byte_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_net_Inet6Address_deriveNumericScope_Array1_byte_java_net_NetworkInterface_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:deriveNumericScope", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_java_net_NetworkInterface_getInetAddresses_R_java_util_Enumeration) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_NetworkInterface_getInetAddresses_R_java_util_Enumeration])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_java_util_Enumeration_hasMoreElements_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_hasMoreElements_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_java_util_Enumeration_nextElement_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_nextElement_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_net_InetAddress, sp[0].o));
	LINE_NUMBER(112);
	if ((isInstance(ctx, (frame[3].o), &class_java_net_Inet6Address)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(113);
	frame[4].o = (checkCast(ctx, &class_java_net_Inet6Address, (frame[3].o)));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_net_Inet6Address_getAddress_R_Array1_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_net_Inet6Address_getAddress_R_Array1_byte])(ctx, (frame[4].o));
	jint temp0 = (jint)SM_java_net_Inet6Address_isDifferentLocalAddressType_Array1_byte_Array1_byte_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_java_net_Inet6Address_getScopeId_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_net_Inet6Address_getScopeId_R_int])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	LINE_NUMBER(118);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(120);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"no scope_id found"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_net_Inet6Address_deriveNumericScope_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:deriveNumericScope", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_SocketException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)SM_java_net_NetworkInterface_getNetworkInterfaces_R_java_util_Enumeration(ctx);
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(129);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(127);
	frame[3].o = sp[0].o;
	LINE_NUMBER(128);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"could not enumerate local network interfaces"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_java_util_Enumeration_hasMoreElements_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_hasMoreElements_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(134);
	clinit_java_net_UnknownHostException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_UnknownHostException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No matching address found for interface : "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_UnknownHostException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_java_util_Enumeration_nextElement_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_nextElement_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_net_NetworkInterface, sp[0].o));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_java_net_NetworkInterface_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_net_NetworkInterface_getName_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK(sp[0].o))->F_ipaddress;
	jint temp0 = (jint)SM_java_net_Inet6Address_deriveNumericScope_Array1_byte_java_net_NetworkInterface_R_int(ctx, sp[0].o, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_isMulticastAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isMulticastAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isMulticastAddress_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMulticastAddress_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_isAnyLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isAnyLocalAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isAnyLocalAddress_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isAnyLocalAddress_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_isLoopbackAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isLoopbackAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isLoopbackAddress_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isLoopbackAddress_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_isLinkLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isLinkLocalAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isLinkLocalAddress_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isLinkLocalAddress_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_net_Inet6Address_isLinkLocalAddress_Array1_byte_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isLinkLocalAddress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(217);
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) & (255)) != (254)) goto label_1;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1)))) & (192)) != (128)) goto label_1;
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

jbool M_java_net_Inet6Address_isSiteLocalAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isSiteLocalAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isSiteLocalAddress_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isSiteLocalAddress_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_net_Inet6Address_isSiteLocalAddress_Array1_byte_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isSiteLocalAddress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(225);
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) & (255)) != (254)) goto label_1;
	}
	{
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1)))) & (192)) != (192)) goto label_1;
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

jbool M_java_net_Inet6Address_isMCGlobal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isMCGlobal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isMCGlobal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCGlobal_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_isMCNodeLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isMCNodeLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isMCNodeLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCNodeLocal_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_isMCLinkLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isMCLinkLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isMCLinkLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCLinkLocal_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_isMCSiteLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isMCSiteLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isMCSiteLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCSiteLocal_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_isMCOrgLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isMCOrgLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isMCOrgLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCOrgLocal_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_net_Inet6Address_getAddress_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:getAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK(sp[0].o))->F_ipaddress;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_byte, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jint M_java_net_Inet6Address_getScopeId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:getScopeId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	popStackFrame(ctx);
	return ((jint)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK(sp[0].o))->F_scope_id);
	}

	popStackFrame(ctx);
}

jobject M_java_net_Inet6Address_getScopedInterface_R_java_net_NetworkInterface(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:getScopedInterface", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	sp[0].o = (jobject)((java_net_Inet6Address$Inet6AddressHolder *) NULL_CHECK(sp[0].o))->F_scope_ifname;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_Inet6Address_getHostAddress_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:getHostAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	sp[0].o = (jobject)((func_java_net_Inet6Address$Inet6AddressHolder_getHostAddress_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_getHostAddress_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_net_Inet6Address_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(269);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_net_Inet6Address)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(270);
	frame[2].o = (checkCast(ctx, &class_java_net_Inet6Address, (frame[1].o)));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	sp[1].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[2].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_Inet6Address_isIPv4CompatibleAddress_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:isIPv4CompatibleAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((java_net_Inet6Address *) NULL_CHECK((frame[0].o)))->F_holder6;
	jint temp0 = (jint)((func_java_net_Inet6Address$Inet6AddressHolder_isIPv4CompatibleAddress_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_Inet6Address$Inet6AddressHolder_isIPv4CompatibleAddress_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_Inet6Address_numericToTextFormat_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:numericToTextFormat", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(282);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (39));
	frame[1].o = sp[0].o;
	LINE_NUMBER(284);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (8)) goto label_3;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, (((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[2].i) << (jint(1))))) << (8)) & (jint(65280))) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (((frame[2].i) << (jint(1))) + (jint(1))))) & (255))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(286);
	if ((frame[2].i) >= (7)) goto label_6;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	}
label_6:;
	{
	LINE_NUMBER(284);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_net_Inet6Address_access$100_Array1_byte_java_net_NetworkInterface_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:access$100", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(12);
	jint temp0 = (jint)SM_java_net_Inet6Address_deriveNumericScope_Array1_byte_java_net_NetworkInterface_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_net_Inet6Address(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_net_InetAddress(ctx);
	SF_java_net_Inet6Address_INADDRSZ = jint(16);
	SF_java_net_Inet6Address_serialVersionUID = jlong(6880410070516793377ll);
	SF_java_net_Inet6Address_INT16SZ = jint(2);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Inet6Address:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Inet6Address(ctx);
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)createArray(ctx, &class_java_io_ObjectStreamField, (jint(5)));
	jint temp0 = jint(0);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ipaddress"_j))), (((jobject) getArrayClass(&class_byte, 1))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"scope_id"_j));
	clinit_java_lang_Integer(ctx);
	sp[3].o = (jobject)SF_java_lang_Integer_TYPE;
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"scope_id_set"_j));
	clinit_java_lang_Boolean(ctx);
	sp[3].o = (jobject)SF_java_lang_Boolean_TYPE;
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"scope_ifname_set"_j));
	clinit_java_lang_Boolean(ctx);
	sp[3].o = (jobject)SF_java_lang_Boolean_TYPE;
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ifname"_j))), (((jobject) &class_java_lang_String)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	clinit_java_net_Inet6Address(ctx);
	SF_java_net_Inet6Address_serialPersistentFields = sp[0].o;
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_Inet6Address[] {
	(void *) M_java_net_Inet6Address_hashCode_R_int,
	(void *) M_java_net_Inet6Address_equals_java_lang_Object_R_boolean,
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
	(void *) M_java_net_Inet6Address_isMulticastAddress_R_boolean,
	(void *) M_java_net_Inet6Address_isAnyLocalAddress_R_boolean,
	(void *) M_java_net_Inet6Address_isLoopbackAddress_R_boolean,
	(void *) M_java_net_Inet6Address_isLinkLocalAddress_R_boolean,
	(void *) M_java_net_Inet6Address_isSiteLocalAddress_R_boolean,
	(void *) M_java_net_Inet6Address_isMCGlobal_R_boolean,
	(void *) M_java_net_Inet6Address_isMCNodeLocal_R_boolean,
	(void *) M_java_net_Inet6Address_isMCLinkLocal_R_boolean,
	(void *) M_java_net_Inet6Address_isMCSiteLocal_R_boolean,
	(void *) M_java_net_Inet6Address_isMCOrgLocal_R_boolean,
	(void *) M_java_net_InetAddress_isReachable_int_R_boolean,
	(void *) M_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean,
	(void *) M_java_net_InetAddress_getHostName_R_java_lang_String,
	(void *) M_java_net_InetAddress_getHostName_boolean_R_java_lang_String,
	(void *) M_java_net_InetAddress_getCanonicalHostName_R_java_lang_String,
	(void *) M_java_net_Inet6Address_getAddress_R_Array1_byte,
	(void *) M_java_net_Inet6Address_getHostAddress_R_java_lang_String,
	(void *) M_java_net_InetAddress_readObjectNoData_java_io_ObjectInputStream,
	(void *) M_java_net_Inet6Address_initstr_java_lang_String_Array1_byte_java_lang_String,
	(void *) M_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface,
	(void *) M_java_net_Inet6Address_deriveNumericScope_java_lang_String_R_int,
	(void *) M_java_net_Inet6Address_getScopeId_R_int,
	(void *) M_java_net_Inet6Address_getScopedInterface_R_java_net_NetworkInterface,
	(void *) M_java_net_Inet6Address_isIPv4CompatibleAddress_R_boolean,
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
	{ "initstr", "(Ljava/lang/String;[BLjava/lang/String;)V" },
	{ "initif", "(Ljava/lang/String;[BLjava/net/NetworkInterface;)V" },
	{ "deriveNumericScope", "(Ljava/lang/String;)I" },
	{ "getScopeId", "()I" },
	{ "getScopedInterface", "()Ljava/net/NetworkInterface;" },
	{ "isIPv4CompatibleAddress", "()Z" },
};

static jclass innerClasses[] {
	&class_java_net_Inet6Address$Inet6AddressHolder,
};

static FieldMetadata fields[] {
	{ "INADDRSZ", &class_int, (intptr_t) &SF_java_net_Inet6Address_INADDRSZ, "I", 24 },
	{ "holder6", &class_java_net_Inet6Address$Inet6AddressHolder, offsetof(java_net_Inet6Address, F_holder6), "Ljava/net/Inet6Address$Inet6AddressHolder;", 146 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_net_Inet6Address_serialVersionUID, "J", 26 },
	{ "serialPersistentFields", getArrayClass(&class_java_io_ObjectStreamField, 1), (intptr_t) &SF_java_net_Inet6Address_serialPersistentFields, "[Ljava/io/ObjectStreamField;", 26 },
	{ "INT16SZ", &class_int, (intptr_t) &SF_java_net_Inet6Address_INT16SZ, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_Inet6Address, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_net_Inet6Address_java_lang_String_Array1_byte_int, 0, "(Ljava/lang/String;[BI)V", 0 },
	{ "<init>", (intptr_t) init_java_net_Inet6Address_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 0 },
	{ "<init>", (intptr_t) init_java_net_Inet6Address_java_lang_String_Array1_byte_java_net_NetworkInterface, 0, "(Ljava/lang/String;[BLjava/net/NetworkInterface;)V", 0 },
	{ "<init>", (intptr_t) init_java_net_Inet6Address_java_lang_String_Array1_byte_java_lang_String, 0, "(Ljava/lang/String;[BLjava/lang/String;)V", 0 },
	{ "getByAddress", (intptr_t) SM_java_net_Inet6Address_getByAddress_java_lang_String_Array1_byte_java_net_NetworkInterface_R_java_net_Inet6Address, 0, "(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;", 9 },
	{ "getByAddress", (intptr_t) SM_java_net_Inet6Address_getByAddress_java_lang_String_Array1_byte_int_R_java_net_Inet6Address, 0, "(Ljava/lang/String;[BI)Ljava/net/Inet6Address;", 9 },
	{ "initstr", (intptr_t) M_java_net_Inet6Address_initstr_java_lang_String_Array1_byte_java_lang_String, VTABLE_java_net_Inet6Address_initstr_java_lang_String_Array1_byte_java_lang_String, "(Ljava/lang/String;[BLjava/lang/String;)V", 2 },
	{ "initif", (intptr_t) M_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface, VTABLE_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface, "(Ljava/lang/String;[BLjava/net/NetworkInterface;)V", 2 },
	{ "isDifferentLocalAddressType", (intptr_t) SM_java_net_Inet6Address_isDifferentLocalAddressType_Array1_byte_Array1_byte_R_boolean, 0, "([B[B)Z", 10 },
	{ "deriveNumericScope", (intptr_t) SM_java_net_Inet6Address_deriveNumericScope_Array1_byte_java_net_NetworkInterface_R_int, 0, "([BLjava/net/NetworkInterface;)I", 10 },
	{ "deriveNumericScope", (intptr_t) M_java_net_Inet6Address_deriveNumericScope_java_lang_String_R_int, VTABLE_java_net_Inet6Address_deriveNumericScope_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
	{ "isMulticastAddress", (intptr_t) M_java_net_Inet6Address_isMulticastAddress_R_boolean, VTABLE_java_net_Inet6Address_isMulticastAddress_R_boolean, "()Z", 1 },
	{ "isAnyLocalAddress", (intptr_t) M_java_net_Inet6Address_isAnyLocalAddress_R_boolean, VTABLE_java_net_Inet6Address_isAnyLocalAddress_R_boolean, "()Z", 1 },
	{ "isLoopbackAddress", (intptr_t) M_java_net_Inet6Address_isLoopbackAddress_R_boolean, VTABLE_java_net_Inet6Address_isLoopbackAddress_R_boolean, "()Z", 1 },
	{ "isLinkLocalAddress", (intptr_t) M_java_net_Inet6Address_isLinkLocalAddress_R_boolean, VTABLE_java_net_Inet6Address_isLinkLocalAddress_R_boolean, "()Z", 1 },
	{ "isLinkLocalAddress", (intptr_t) SM_java_net_Inet6Address_isLinkLocalAddress_Array1_byte_R_boolean, 0, "([B)Z", 8 },
	{ "isSiteLocalAddress", (intptr_t) M_java_net_Inet6Address_isSiteLocalAddress_R_boolean, VTABLE_java_net_Inet6Address_isSiteLocalAddress_R_boolean, "()Z", 1 },
	{ "isSiteLocalAddress", (intptr_t) SM_java_net_Inet6Address_isSiteLocalAddress_Array1_byte_R_boolean, 0, "([B)Z", 8 },
	{ "isMCGlobal", (intptr_t) M_java_net_Inet6Address_isMCGlobal_R_boolean, VTABLE_java_net_Inet6Address_isMCGlobal_R_boolean, "()Z", 1 },
	{ "isMCNodeLocal", (intptr_t) M_java_net_Inet6Address_isMCNodeLocal_R_boolean, VTABLE_java_net_Inet6Address_isMCNodeLocal_R_boolean, "()Z", 1 },
	{ "isMCLinkLocal", (intptr_t) M_java_net_Inet6Address_isMCLinkLocal_R_boolean, VTABLE_java_net_Inet6Address_isMCLinkLocal_R_boolean, "()Z", 1 },
	{ "isMCSiteLocal", (intptr_t) M_java_net_Inet6Address_isMCSiteLocal_R_boolean, VTABLE_java_net_Inet6Address_isMCSiteLocal_R_boolean, "()Z", 1 },
	{ "isMCOrgLocal", (intptr_t) M_java_net_Inet6Address_isMCOrgLocal_R_boolean, VTABLE_java_net_Inet6Address_isMCOrgLocal_R_boolean, "()Z", 1 },
	{ "getAddress", (intptr_t) M_java_net_Inet6Address_getAddress_R_Array1_byte, VTABLE_java_net_Inet6Address_getAddress_R_Array1_byte, "()[B", 1 },
	{ "getScopeId", (intptr_t) M_java_net_Inet6Address_getScopeId_R_int, VTABLE_java_net_Inet6Address_getScopeId_R_int, "()I", 1 },
	{ "getScopedInterface", (intptr_t) M_java_net_Inet6Address_getScopedInterface_R_java_net_NetworkInterface, VTABLE_java_net_Inet6Address_getScopedInterface_R_java_net_NetworkInterface, "()Ljava/net/NetworkInterface;", 1 },
	{ "getHostAddress", (intptr_t) M_java_net_Inet6Address_getHostAddress_R_java_lang_String, VTABLE_java_net_Inet6Address_getHostAddress_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_java_net_Inet6Address_hashCode_R_int, VTABLE_java_net_Inet6Address_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_net_Inet6Address_equals_java_lang_Object_R_boolean, VTABLE_java_net_Inet6Address_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "isIPv4CompatibleAddress", (intptr_t) M_java_net_Inet6Address_isIPv4CompatibleAddress_R_boolean, VTABLE_java_net_Inet6Address_isIPv4CompatibleAddress_R_boolean, "()Z", 1 },
	{ "numericToTextFormat", (intptr_t) SM_java_net_Inet6Address_numericToTextFormat_Array1_byte_R_java_lang_String, 0, "([B)Ljava/lang/String;", 8 },
	{ "access$100", (intptr_t) SM_java_net_Inet6Address_access$100_Array1_byte_java_net_NetworkInterface_R_int, 0, "([BLjava/net/NetworkInterface;)I", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_net_Inet6Address, 0, "()V", 8 },
};

Class class_java_net_Inet6Address{
		.nativeName = (intptr_t) "java/net/Inet6Address",
		.parentClass = (intptr_t) &class_java_net_InetAddress,
		.size = sizeof(java_net_Inet6Address),
		.classVtable = (intptr_t) vtable_java_net_Inet6Address,
		.staticInitializer = (intptr_t) clinit_java_net_Inet6Address,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_Inet6Address,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_Inet6Address = registerClass(&class_java_net_Inet6Address);

}
