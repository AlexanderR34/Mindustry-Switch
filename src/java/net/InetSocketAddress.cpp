#include "java/net/InetSocketAddress.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/io/InvalidObjectException.h"
#include "java/net/InetSocketAddress_InetSocketAddressHolder.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/net/SocketAddress.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/InetSocketAddress_1.h"
#include "java/io/ObjectStreamField.h"
#include "java/net/InetAddress.h"
#include "java/net/InetSocketAddress.h"
#include "java/net/UnknownHostException.h"
#include "java/lang/Class.h"

extern "C" {

jlong SF_java_net_InetSocketAddress_serialVersionUID;
jobject SF_java_net_InetSocketAddress_serialPersistentFields;

void mark_java_net_InetSocketAddress(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_InetSocketAddress_serialPersistentFields)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_InetSocketAddress_serialPersistentFields)->clazz)->markFunction)((jobject) SF_java_net_InetSocketAddress_serialPersistentFields, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_net_SocketAddress(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_net_InetSocketAddress *) object;
	if (self->F_holder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_holder)->clazz)->markFunction)((jobject) self->F_holder, mark, depth + 1);
}

jint SM_java_net_InetSocketAddress_checkPort_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:checkPort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(19);
	if ((frame[0].i) < 0) goto label_1;
	}
	{
	if ((frame[0].i) > (jint(65535))) goto label_1;
	}
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (frame[0].i);
	}
label_1:;
	{
	LINE_NUMBER(22);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"port out of range:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetSocketAddress_checkHost_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:checkHost", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(27);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(28);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hostname can't be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void init_java_net_InetSocketAddress_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_net_InetAddress_anyLocalAddress_R_java_net_InetAddress(ctx);
	init_java_net_InetSocketAddress_java_net_InetAddress_int(ctx, sp[0].o, sp[1].o, (frame[1].i));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_InetSocketAddress_java_net_InetAddress_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(38);
	init_java_net_SocketAddress(ctx, (frame[0].o));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_InetSocketAddress$InetSocketAddressHolder);
	sp[2].o = checkCast(ctx, &class_java_lang_String, (jobject(nullptr)));
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((frame[1].o) != nullptr) goto label_3;
	}
	sp->o = (jobject)SM_java_net_InetAddress_anyLocalAddress_R_java_net_InetAddress(ctx);
	sp++;
	goto label_4;
label_3:;
	INST_ALOAD(1);
label_4:;
	{
	sp -= 5;
	jint temp0 = (jint)SM_java_net_InetSocketAddress_checkPort_int_R_int(ctx, (frame[2].i));
	init_java_net_InetSocketAddress$InetSocketAddressHolder_java_lang_String_java_net_InetAddress_int_java_net_InetSocketAddress$1(ctx, sp[1].o, sp[3].o, sp[4].o, temp0, (jobject(nullptr)));
	((java_net_InetSocketAddress *) NULL_CHECK(sp[0].o))->F_holder = (jref) sp[1].o;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_InetSocketAddress_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(42);
	init_java_net_SocketAddress(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_java_net_InetSocketAddress_checkHost_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	LINE_NUMBER(44);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(45);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_UnknownHostException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_java_net_InetAddress_getByName_java_lang_String_R_java_net_InetAddress(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(51);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(49);
	frame[5].o = sp[0].o;
	LINE_NUMBER(50);
	frame[4].o = (frame[1].o);
	}
label_8:;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_InetSocketAddress$InetSocketAddressHolder);
	sp[2].o = frame[4].o;
	sp[3].o = frame[3].o;
	jint temp0 = (jint)SM_java_net_InetSocketAddress_checkPort_int_R_int(ctx, (frame[2].i));
	init_java_net_InetSocketAddress$InetSocketAddressHolder_java_lang_String_java_net_InetAddress_int_java_net_InetSocketAddress$1(ctx, sp[1].o, sp[2].o, sp[3].o, temp0, (jobject(nullptr)));
	((java_net_InetSocketAddress *) NULL_CHECK(sp[0].o))->F_holder = (jref) sp[1].o;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_InetSocketAddress_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	init_java_net_SocketAddress(ctx, (frame[0].o));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_java_net_InetSocketAddress$InetSocketAddressHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_InetSocketAddress$InetSocketAddressHolder);
	init_java_net_InetSocketAddress$InetSocketAddressHolder_java_lang_String_java_net_InetAddress_int_java_net_InetSocketAddress$1(ctx, sp[1].o, (frame[2].o), (checkCast(ctx, &class_java_net_InetAddress, (jobject(nullptr)))), (frame[1].i), (jobject(nullptr)));
	((java_net_InetSocketAddress *) NULL_CHECK(sp[0].o))->F_holder = (jref) sp[1].o;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_InetSocketAddress_createUnresolved_java_lang_String_int_R_java_net_InetSocketAddress(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:createUnresolved", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(61);
	clinit_java_net_InetSocketAddress(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_InetSocketAddress);
	jint temp0 = (jint)SM_java_net_InetSocketAddress_checkPort_int_R_int(ctx, (frame[1].i));
	sp[1].o = (jobject)SM_java_net_InetSocketAddress_checkHost_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	init_java_net_InetSocketAddress_int_java_lang_String(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_net_InetSocketAddress_readObjectNoData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:readObjectNoData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	clinit_java_io_InvalidObjectException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InvalidObjectException);
	init_java_io_InvalidObjectException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stream data required"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_net_InetSocketAddress_getPort_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:getPort", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((java_net_InetSocketAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	jint temp0 = (jint)SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$100_java_net_InetSocketAddress$InetSocketAddressHolder_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:getAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((java_net_InetSocketAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	sp[0].o = (jobject)SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$200_java_net_InetSocketAddress$InetSocketAddressHolder_R_java_net_InetAddress(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetSocketAddress_getHostName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:getHostName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((java_net_InetSocketAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	sp[0].o = (jobject)SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$300_java_net_InetSocketAddress$InetSocketAddressHolder_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetSocketAddress_getHostString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:getHostString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((java_net_InetSocketAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	sp[0].o = (jobject)SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$400_java_net_InetSocketAddress$InetSocketAddressHolder_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetSocketAddress_isUnresolved_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:isUnresolved", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((java_net_InetSocketAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	jint temp0 = (jint)SM_java_net_InetSocketAddress$InetSocketAddressHolder_access$500_java_net_InetSocketAddress$InetSocketAddressHolder_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_net_InetSocketAddress_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((java_net_InetSocketAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	sp[0].o = (jobject)((func_java_net_InetSocketAddress$InetSocketAddressHolder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_net_InetSocketAddress_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_net_InetSocketAddress)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_net_InetSocketAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	sp[1].o = (jobject)((java_net_InetSocketAddress *) NULL_CHECK((checkCast(ctx, &class_java_net_InetSocketAddress, (frame[1].o)))))->F_holder;
	jint temp0 = (jint)((func_java_net_InetSocketAddress$InetSocketAddressHolder_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_net_InetSocketAddress_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((java_net_InetSocketAddress *) NULL_CHECK((frame[0].o)))->F_holder;
	jint temp0 = (jint)((func_java_net_InetSocketAddress$InetSocketAddressHolder_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_InetSocketAddress$InetSocketAddressHolder_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_net_InetSocketAddress(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_net_SocketAddress(ctx);
	SF_java_net_InetSocketAddress_serialVersionUID = jlong(5076001401234631237ll);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/InetSocketAddress:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_InetSocketAddress(ctx);
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)createArray(ctx, &class_java_io_ObjectStreamField, (jint(3)));
	jint temp0 = jint(0);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"hostname"_j))), (((jobject) &class_java_lang_String)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"addr"_j))), (((jobject) &class_java_net_InetAddress)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"port"_j));
	clinit_java_lang_Integer(ctx);
	sp[3].o = (jobject)SF_java_lang_Integer_TYPE;
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_java_net_InetSocketAddress(ctx);
	SF_java_net_InetSocketAddress_serialPersistentFields = sp[0].o;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_InetSocketAddress[] {
	(void *) M_java_net_InetSocketAddress_hashCode_R_int,
	(void *) M_java_net_InetSocketAddress_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_net_InetSocketAddress_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_net_InetSocketAddress_readObjectNoData,
	(void *) M_java_net_InetSocketAddress_getPort_R_int,
	(void *) M_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress,
	(void *) M_java_net_InetSocketAddress_getHostName_R_java_lang_String,
	(void *) M_java_net_InetSocketAddress_getHostString_R_java_lang_String,
	(void *) M_java_net_InetSocketAddress_isUnresolved_R_boolean,
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
	{ "readObjectNoData", "()V" },
	{ "getPort", "()I" },
	{ "getAddress", "()Ljava/net/InetAddress;" },
	{ "getHostName", "()Ljava/lang/String;" },
	{ "getHostString", "()Ljava/lang/String;" },
	{ "isUnresolved", "()Z" },
};

static jclass innerClasses[] {
	&class_java_net_InetSocketAddress$InetSocketAddressHolder,
};

static FieldMetadata fields[] {
	{ "holder", &class_java_net_InetSocketAddress$InetSocketAddressHolder, offsetof(java_net_InetSocketAddress, F_holder), "Ljava/net/InetSocketAddress$InetSocketAddressHolder;", 146 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_net_InetSocketAddress_serialVersionUID, "J", 26 },
	{ "serialPersistentFields", getArrayClass(&class_java_io_ObjectStreamField, 1), (intptr_t) &SF_java_net_InetSocketAddress_serialPersistentFields, "[Ljava/io/ObjectStreamField;", 26 },
};

static MethodMetadata methods[] {
	{ "checkPort", (intptr_t) SM_java_net_InetSocketAddress_checkPort_int_R_int, 0, "(I)I", 10 },
	{ "checkHost", (intptr_t) SM_java_net_InetSocketAddress_checkHost_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "<init>", (intptr_t) init_java_net_InetSocketAddress_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_net_InetSocketAddress_java_net_InetAddress_int, 0, "(Ljava/net/InetAddress;I)V", 1 },
	{ "<init>", (intptr_t) init_java_net_InetSocketAddress_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "<init>", (intptr_t) init_java_net_InetSocketAddress_int_java_lang_String, 0, "(ILjava/lang/String;)V", 2 },
	{ "createUnresolved", (intptr_t) SM_java_net_InetSocketAddress_createUnresolved_java_lang_String_int_R_java_net_InetSocketAddress, 0, "(Ljava/lang/String;I)Ljava/net/InetSocketAddress;", 9 },
	{ "readObjectNoData", (intptr_t) M_java_net_InetSocketAddress_readObjectNoData, VTABLE_java_net_InetSocketAddress_readObjectNoData, "()V", 2 },
	{ "getPort", (intptr_t) M_java_net_InetSocketAddress_getPort_R_int, VTABLE_java_net_InetSocketAddress_getPort_R_int, "()I", 17 },
	{ "getAddress", (intptr_t) M_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress, VTABLE_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress, "()Ljava/net/InetAddress;", 17 },
	{ "getHostName", (intptr_t) M_java_net_InetSocketAddress_getHostName_R_java_lang_String, VTABLE_java_net_InetSocketAddress_getHostName_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "getHostString", (intptr_t) M_java_net_InetSocketAddress_getHostString_R_java_lang_String, VTABLE_java_net_InetSocketAddress_getHostString_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "isUnresolved", (intptr_t) M_java_net_InetSocketAddress_isUnresolved_R_boolean, VTABLE_java_net_InetSocketAddress_isUnresolved_R_boolean, "()Z", 17 },
	{ "toString", (intptr_t) M_java_net_InetSocketAddress_toString_R_java_lang_String, VTABLE_java_net_InetSocketAddress_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_java_net_InetSocketAddress_equals_java_lang_Object_R_boolean, VTABLE_java_net_InetSocketAddress_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 17 },
	{ "hashCode", (intptr_t) M_java_net_InetSocketAddress_hashCode_R_int, VTABLE_java_net_InetSocketAddress_hashCode_R_int, "()I", 17 },
	{ "<clinit>", (intptr_t) clinit_java_net_InetSocketAddress, 0, "()V", 8 },
};

Class class_java_net_InetSocketAddress{
		.nativeName = (intptr_t) "java/net/InetSocketAddress",
		.parentClass = (intptr_t) &class_java_net_SocketAddress,
		.size = sizeof(java_net_InetSocketAddress),
		.classVtable = (intptr_t) vtable_java_net_InetSocketAddress,
		.staticInitializer = (intptr_t) clinit_java_net_InetSocketAddress,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_InetSocketAddress,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_InetSocketAddress = registerClass(&class_java_net_InetSocketAddress);

}
