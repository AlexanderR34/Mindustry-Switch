#include "java/net/NetworkInterface.h"
#include "java/lang/StringBuilder.h"
#include "java/net/NetworkInterface_1.h"
#include "java/net/InterfaceAddress.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/net/NetworkInterface.h"
#include "java/util/ArrayList.h"
#include "java/net/InetAddress_InetAddressHolder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/net/InetAddress.h"
#include "java/lang/NullPointerException.h"
#include "java/net/DefaultInterface.h"
#include "java/util/Enumeration.h"
#include "java/net/Inet4Address.h"
#include "java/net/Inet6Address.h"
#include "java/net/SocketException.h"
#include "java/util/List.h"
#include "java/lang/SecurityException.h"

extern "C" {

jobject SF_java_net_NetworkInterface_defaultInterface;
jint SF_java_net_NetworkInterface_defaultIndex;

void mark_java_net_NetworkInterface(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_NetworkInterface_defaultInterface)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_NetworkInterface_defaultInterface)->clazz)->markFunction)((jobject) SF_java_net_NetworkInterface_defaultInterface, mark, depth + 1);
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
	auto self = (java_net_NetworkInterface *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_displayName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_displayName)->clazz)->markFunction)((jobject) self->F_displayName, mark, depth + 1);
	if (self->F_addrs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_addrs)->clazz)->markFunction)((jobject) self->F_addrs, mark, depth + 1);
	if (self->F_bindings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bindings)->clazz)->markFunction)((jobject) self->F_bindings, mark, depth + 1);
	if (self->F_childs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_childs)->clazz)->markFunction)((jobject) self->F_childs, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
}

void init_java_net_NetworkInterface(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (jobject(nullptr));
	LINE_NUMBER(20);
	((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_virtual = (jint(0));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_NetworkInterface_java_lang_String_int_Array1_java_net_InetAddress(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (jobject(nullptr));
	LINE_NUMBER(20);
	((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_virtual = (jint(0));
	LINE_NUMBER(28);
	((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(29);
	((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(30);
	((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_addrs = (jref) (frame[3].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface_getInetAddresses_R_java_util_Enumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getInetAddresses", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)M_java_net_NetworkInterface_getCheckedInetAddresses_R_Array1_java_net_InetAddress(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_net_NetworkInterface_enumerationFromArray_Array1_java_lang_Object_R_java_util_Enumeration(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface_getCheckedInetAddresses_R_Array1_java_net_InetAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getCheckedInetAddresses", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_addrs;
	sp[0].o = (jobject)createArray(ctx, &class_java_net_InetAddress, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(47);
	frame[2].i = (jint(1));
	LINE_NUMBER(57);
	frame[3].i = (jint(0));
	LINE_NUMBER(59);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_addrs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(65);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_addrs;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(67);
	goto label_10;
label_2:;
	LINE_NUMBER(66);
	INST_ASTORE(5);
label_10:;
	{
	LINE_NUMBER(59);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[1].o), (frame[3].i));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_net_InetAddress, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface_getInterfaceAddresses_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getInterfaceAddresses", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_bindings;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(78);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_bindings;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(84);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_bindings;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(86);
	goto label_9;
label_2:;
	LINE_NUMBER(85);
	INST_ASTORE(3);
label_9:;
	{
	LINE_NUMBER(78);
	INST_IINC(2, 1);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface_getSubInterfaces_R_java_util_Enumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getSubInterfaces", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_childs;
	sp[0].o = (jobject)SM_java_net_NetworkInterface_enumerationFromArray_Array1_java_lang_Object_R_java_util_Enumeration(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface_getParent_R_java_net_NetworkInterface(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_net_NetworkInterface_getIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return ((jint)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_index);
	}

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface_getDisplayName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getDisplayName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[1].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_displayName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((java_net_NetworkInterface *) NULL_CHECK(sp[-1].o))->F_displayName;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_NetworkInterface_getByName_java_lang_String_R_java_net_NetworkInterface(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getByName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(114);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(115);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_NetworkInterface_getByIndex_int_R_java_net_NetworkInterface(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getByIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(122);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(123);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Interface index can't be negative"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_NetworkInterface_getByInetAddress_java_net_InetAddress_R_java_net_NetworkInterface(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getByInetAddress", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(130);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(131);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(133);
	if ((isInstance(ctx, (frame[0].o), &class_java_net_Inet4Address)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(134);
	frame[1].o = (checkCast(ctx, &class_java_net_Inet4Address, (frame[0].o)));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[1].o)))->F_holder;
	if (((jint)((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_family) == (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(136);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid family type: "_j))));
	sp[2].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[1].o)))->F_holder;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[2].o))->F_family));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(138);
	goto label_8;
label_3:;
	{
	LINE_NUMBER(139);
	if ((isInstance(ctx, (frame[0].o), &class_java_net_Inet6Address)) != 0) goto label_9;
	}
	{
	LINE_NUMBER(140);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid address type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(143);
	frame[1].o = (checkCast(ctx, &class_java_net_Inet6Address, (frame[0].o)));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[1].o)))->F_holder;
	if (((jint)((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[0].o))->F_family) == (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(145);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid family type: "_j))));
	sp[2].o = (jobject)((java_net_InetAddress *) NULL_CHECK((frame[1].o)))->F_holder;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_net_InetAddress$InetAddressHolder *) NULL_CHECK(sp[2].o))->F_family));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_NetworkInterface_getNetworkInterfaces_R_java_util_Enumeration(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getNetworkInterfaces", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface(ctx);
	{
	LINE_NUMBER(154);
	clinit_java_net_SocketException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_SocketException);
	init_java_net_SocketException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No network interfaces configured"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_net_NetworkInterface_enumerationFromArray_Array1_java_lang_Object_R_java_util_Enumeration(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:enumerationFromArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(174);
	clinit_java_net_NetworkInterface$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_NetworkInterface$1);
	init_java_net_NetworkInterface$1_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_net_NetworkInterface_isUp_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:isUp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_NetworkInterface_isLoopback_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:isLoopback", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_NetworkInterface_isPointToPoint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:isPointToPoint", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_NetworkInterface_supportsMulticast_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:supportsMulticast", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface_getHardwareAddress_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getHardwareAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_net_NetworkInterface_getMTU_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getMTU", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_NetworkInterface_isVirtual_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:isVirtual", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return ((jint)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_virtual);
	}

	popStackFrame(ctx);
}

jbool M_java_net_NetworkInterface_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:equals", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(266);
	if ((isInstance(ctx, (frame[1].o), &class_java_net_NetworkInterface)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(269);
	frame[2].o = (checkCast(ctx, &class_java_net_NetworkInterface, (frame[1].o)));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[2].o)))->F_name;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_addrs;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[2].o)))->F_addrs;
	if (sp[0].o != nullptr) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[2].o)))->F_addrs;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_addrs;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[2].o)))->F_addrs;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[2].o)))->F_addrs;
	frame[3].o = sp[0].o;
	LINE_NUMBER(286);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(288);
	frame[5].i = (jint(0));
	}
label_19:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_20;
	}
	{
	LINE_NUMBER(289);
	frame[6].i = (jint(0));
	LINE_NUMBER(291);
	frame[7].i = (jint(0));
	}
label_23:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_24;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_addrs;
	jint temp0 = (jint)((func_java_net_InetAddress_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))))->vtable)[VTABLE_java_net_InetAddress_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(293);
	frame[6].i = (jint(1));
	LINE_NUMBER(294);
	goto label_24;
	}
label_26:;
	{
	LINE_NUMBER(291);
	INST_IINC(7, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(298);
	if ((frame[6].i) != 0) goto label_29;
	}
	{
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(288);
	INST_IINC(5, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_java_net_NetworkInterface_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"name:"_j)));
	LINE_NUMBER(314);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	if (sp[0].o != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_3;
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((java_net_NetworkInterface *) NULL_CHECK(sp[-1].o))->F_name;
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_displayName;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(316);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[1].o = (jobject)((java_net_NetworkInterface *) NULL_CHECK((frame[0].o)))->F_displayName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_net_NetworkInterface_getDefault_R_java_net_NetworkInterface(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:getDefault", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface(ctx);
	{
	LINE_NUMBER(325);
	clinit_java_net_NetworkInterface(ctx);
	sp[0].o = (jobject)SF_java_net_NetworkInterface_defaultInterface;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_net_NetworkInterface(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface(ctx);
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)SM_java_net_DefaultInterface_getDefault_R_java_net_NetworkInterface(ctx);
	clinit_java_net_NetworkInterface(ctx);
	SF_java_net_NetworkInterface_defaultInterface = sp[0].o;
	LINE_NUMBER(337);
	clinit_java_net_NetworkInterface(ctx);
	sp[0].o = (jobject)SF_java_net_NetworkInterface_defaultInterface;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(338);
	clinit_java_net_NetworkInterface(ctx);
	sp[0].o = (jobject)SF_java_net_NetworkInterface_defaultInterface;
	jint temp0 = (jint)((func_java_net_NetworkInterface_getIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_NetworkInterface_getIndex_R_int])(ctx, sp[0].o);
	clinit_java_net_NetworkInterface(ctx);
	SF_java_net_NetworkInterface_defaultIndex = temp0;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(340);
	clinit_java_net_NetworkInterface(ctx);
	SF_java_net_NetworkInterface_defaultIndex = (jint(0));
	}
label_4:;
	LINE_NUMBER(343);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_net_NetworkInterface[] {
	(void *) M_java_net_NetworkInterface_hashCode_R_int,
	(void *) M_java_net_NetworkInterface_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_net_NetworkInterface_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_net_NetworkInterface_getName_R_java_lang_String,
	(void *) M_java_net_NetworkInterface_getInetAddresses_R_java_util_Enumeration,
	(void *) M_java_net_NetworkInterface_getCheckedInetAddresses_R_Array1_java_net_InetAddress,
	(void *) M_java_net_NetworkInterface_getInterfaceAddresses_R_java_util_List,
	(void *) M_java_net_NetworkInterface_getSubInterfaces_R_java_util_Enumeration,
	(void *) M_java_net_NetworkInterface_getParent_R_java_net_NetworkInterface,
	(void *) M_java_net_NetworkInterface_getIndex_R_int,
	(void *) M_java_net_NetworkInterface_getDisplayName_R_java_lang_String,
	(void *) M_java_net_NetworkInterface_isUp_R_boolean,
	(void *) M_java_net_NetworkInterface_isLoopback_R_boolean,
	(void *) M_java_net_NetworkInterface_isPointToPoint_R_boolean,
	(void *) M_java_net_NetworkInterface_supportsMulticast_R_boolean,
	(void *) M_java_net_NetworkInterface_getHardwareAddress_R_Array1_byte,
	(void *) M_java_net_NetworkInterface_getMTU_R_int,
	(void *) M_java_net_NetworkInterface_isVirtual_R_boolean,
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
	{ "getName", "()Ljava/lang/String;" },
	{ "getInetAddresses", "()Ljava/util/Enumeration;" },
	{ "getCheckedInetAddresses", "()[Ljava/net/InetAddress;" },
	{ "getInterfaceAddresses", "()Ljava/util/List;" },
	{ "getSubInterfaces", "()Ljava/util/Enumeration;" },
	{ "getParent", "()Ljava/net/NetworkInterface;" },
	{ "getIndex", "()I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "isUp", "()Z" },
	{ "isLoopback", "()Z" },
	{ "isPointToPoint", "()Z" },
	{ "supportsMulticast", "()Z" },
	{ "getHardwareAddress", "()[B" },
	{ "getMTU", "()I" },
	{ "isVirtual", "()Z" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(java_net_NetworkInterface, F_name), "Ljava/lang/String;", 2 },
	{ "displayName", &class_java_lang_String, offsetof(java_net_NetworkInterface, F_displayName), "Ljava/lang/String;", 2 },
	{ "index", &class_int, offsetof(java_net_NetworkInterface, F_index), "I", 2 },
	{ "addrs", getArrayClass(&class_java_net_InetAddress, 1), offsetof(java_net_NetworkInterface, F_addrs), "[Ljava/net/InetAddress;", 2 },
	{ "bindings", getArrayClass(&class_java_net_InterfaceAddress, 1), offsetof(java_net_NetworkInterface, F_bindings), "[Ljava/net/InterfaceAddress;", 2 },
	{ "childs", getArrayClass(&class_java_net_NetworkInterface, 1), offsetof(java_net_NetworkInterface, F_childs), "[Ljava/net/NetworkInterface;", 2 },
	{ "parent", &class_java_net_NetworkInterface, offsetof(java_net_NetworkInterface, F_parent), "Ljava/net/NetworkInterface;", 2 },
	{ "virtual", &class_boolean, offsetof(java_net_NetworkInterface, F_virtual), "Z", 2 },
	{ "defaultInterface", &class_java_net_NetworkInterface, (intptr_t) &SF_java_net_NetworkInterface_defaultInterface, "Ljava/net/NetworkInterface;", 26 },
	{ "defaultIndex", &class_int, (intptr_t) &SF_java_net_NetworkInterface_defaultIndex, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_NetworkInterface, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_net_NetworkInterface_java_lang_String_int_Array1_java_net_InetAddress, 0, "(Ljava/lang/String;I[Ljava/net/InetAddress;)V", 0 },
	{ "getName", (intptr_t) M_java_net_NetworkInterface_getName_R_java_lang_String, VTABLE_java_net_NetworkInterface_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getInetAddresses", (intptr_t) M_java_net_NetworkInterface_getInetAddresses_R_java_util_Enumeration, VTABLE_java_net_NetworkInterface_getInetAddresses_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 1 },
	{ "getCheckedInetAddresses", (intptr_t) M_java_net_NetworkInterface_getCheckedInetAddresses_R_Array1_java_net_InetAddress, VTABLE_java_net_NetworkInterface_getCheckedInetAddresses_R_Array1_java_net_InetAddress, "()[Ljava/net/InetAddress;", 2 },
	{ "getInterfaceAddresses", (intptr_t) M_java_net_NetworkInterface_getInterfaceAddresses_R_java_util_List, VTABLE_java_net_NetworkInterface_getInterfaceAddresses_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "getSubInterfaces", (intptr_t) M_java_net_NetworkInterface_getSubInterfaces_R_java_util_Enumeration, VTABLE_java_net_NetworkInterface_getSubInterfaces_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 1 },
	{ "getParent", (intptr_t) M_java_net_NetworkInterface_getParent_R_java_net_NetworkInterface, VTABLE_java_net_NetworkInterface_getParent_R_java_net_NetworkInterface, "()Ljava/net/NetworkInterface;", 1 },
	{ "getIndex", (intptr_t) M_java_net_NetworkInterface_getIndex_R_int, VTABLE_java_net_NetworkInterface_getIndex_R_int, "()I", 1 },
	{ "getDisplayName", (intptr_t) M_java_net_NetworkInterface_getDisplayName_R_java_lang_String, VTABLE_java_net_NetworkInterface_getDisplayName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getByName", (intptr_t) SM_java_net_NetworkInterface_getByName_java_lang_String_R_java_net_NetworkInterface, 0, "(Ljava/lang/String;)Ljava/net/NetworkInterface;", 9 },
	{ "getByIndex", (intptr_t) SM_java_net_NetworkInterface_getByIndex_int_R_java_net_NetworkInterface, 0, "(I)Ljava/net/NetworkInterface;", 9 },
	{ "getByInetAddress", (intptr_t) SM_java_net_NetworkInterface_getByInetAddress_java_net_InetAddress_R_java_net_NetworkInterface, 0, "(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;", 9 },
	{ "getNetworkInterfaces", (intptr_t) SM_java_net_NetworkInterface_getNetworkInterfaces_R_java_util_Enumeration, 0, "()Ljava/util/Enumeration;", 9 },
	{ "enumerationFromArray", (intptr_t) SM_java_net_NetworkInterface_enumerationFromArray_Array1_java_lang_Object_R_java_util_Enumeration, 0, "([Ljava/lang/Object;)Ljava/util/Enumeration;", 10 },
	{ "isUp", (intptr_t) M_java_net_NetworkInterface_isUp_R_boolean, VTABLE_java_net_NetworkInterface_isUp_R_boolean, "()Z", 1 },
	{ "isLoopback", (intptr_t) M_java_net_NetworkInterface_isLoopback_R_boolean, VTABLE_java_net_NetworkInterface_isLoopback_R_boolean, "()Z", 1 },
	{ "isPointToPoint", (intptr_t) M_java_net_NetworkInterface_isPointToPoint_R_boolean, VTABLE_java_net_NetworkInterface_isPointToPoint_R_boolean, "()Z", 1 },
	{ "supportsMulticast", (intptr_t) M_java_net_NetworkInterface_supportsMulticast_R_boolean, VTABLE_java_net_NetworkInterface_supportsMulticast_R_boolean, "()Z", 1 },
	{ "getHardwareAddress", (intptr_t) M_java_net_NetworkInterface_getHardwareAddress_R_Array1_byte, VTABLE_java_net_NetworkInterface_getHardwareAddress_R_Array1_byte, "()[B", 1 },
	{ "getMTU", (intptr_t) M_java_net_NetworkInterface_getMTU_R_int, VTABLE_java_net_NetworkInterface_getMTU_R_int, "()I", 1 },
	{ "isVirtual", (intptr_t) M_java_net_NetworkInterface_isVirtual_R_boolean, VTABLE_java_net_NetworkInterface_isVirtual_R_boolean, "()Z", 1 },
	{ "equals", (intptr_t) M_java_net_NetworkInterface_equals_java_lang_Object_R_boolean, VTABLE_java_net_NetworkInterface_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_net_NetworkInterface_hashCode_R_int, VTABLE_java_net_NetworkInterface_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_net_NetworkInterface_toString_R_java_lang_String, VTABLE_java_net_NetworkInterface_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getDefault", (intptr_t) SM_java_net_NetworkInterface_getDefault_R_java_net_NetworkInterface, 0, "()Ljava/net/NetworkInterface;", 8 },
	{ "<clinit>", (intptr_t) clinit_java_net_NetworkInterface, 0, "()V", 8 },
};

Class class_java_net_NetworkInterface{
		.nativeName = (intptr_t) "java/net/NetworkInterface",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_NetworkInterface),
		.classVtable = (intptr_t) vtable_java_net_NetworkInterface,
		.staticInitializer = (intptr_t) clinit_java_net_NetworkInterface,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_NetworkInterface,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_NetworkInterface = registerClass(&class_java_net_NetworkInterface);

}
