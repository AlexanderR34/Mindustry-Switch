#include "net/jpountz/util/SafeUtils.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "net/jpountz/util/SafeUtils.h"
#include "java/nio/ByteOrder.h"
#include "java/lang/IllegalArgumentException.h"
#include "net/jpountz/util/Utils.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_net_jpountz_util_SafeUtils_$VALUES;

void mark_net_jpountz_util_SafeUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_util_SafeUtils_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_SafeUtils_$VALUES)->clazz)->markFunction)((jobject) SF_net_jpountz_util_SafeUtils_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (net_jpountz_util_SafeUtils *) object;
}

jobject SM_net_jpountz_util_SafeUtils_values_R_Array1_net_jpountz_util_SafeUtils(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	{
	LINE_NUMBER(22);
	clinit_net_jpountz_util_SafeUtils(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_SafeUtils_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_net_jpountz_util_SafeUtils, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_SafeUtils_valueOf_java_lang_String_R_net_jpountz_util_SafeUtils(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_net_jpountz_util_SafeUtils)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_net_jpountz_util_SafeUtils, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_net_jpountz_util_SafeUtils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(22);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:checkRange", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(26);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) < (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(27);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:checkRange", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(32);
	SM_net_jpountz_util_SafeUtils_checkLength_int(ctx, (frame[2].i));
	LINE_NUMBER(33);
	if ((frame[2].i) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(34);
	SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(35);
	SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int(ctx, (frame[0].o), (((frame[1].i) + (frame[2].i)) - (jint(1))));
	}
label_2:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_net_jpountz_util_SafeUtils_checkLength_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:checkLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(40);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(41);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lengths must be >= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte SM_net_jpountz_util_SafeUtils_readByte_Array1_byte_int_R_byte(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:readByte", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_util_SafeUtils_readIntBE_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:readIntBE", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (((((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) & (255)) << (24)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (16))) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))) & (255)) << (8))) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))) & (255)));
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_util_SafeUtils_readIntLE_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:readIntLE", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return ((((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) & (255)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (8))) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))) & (255)) << (16))) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))) & (255)) << (24)));
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_util_SafeUtils_readInt_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:readInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(58);
	clinit_net_jpountz_util_Utils(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER;
	clinit_java_nio_ByteOrder(ctx);
	sp[1].o = (jobject)SF_java_nio_ByteOrder_BIG_ENDIAN;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(59);
	jint temp0 = (jint)SM_net_jpountz_util_SafeUtils_readIntBE_Array1_byte_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)SM_net_jpountz_util_SafeUtils_readIntLE_Array1_byte_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_net_jpountz_util_SafeUtils_readLongLE_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:readLongLE", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (((((((((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))))) & (jlong(255ll))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))))) & (jlong(255ll))) << (8))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))))) & (jlong(255ll))) << (16))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))))) & (jlong(255ll))) << (24))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(4))))))) & (jlong(255ll))) << (32))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(5))))))) & (jlong(255ll))) << (40))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (6)))))) & (jlong(255ll))) << (48))) | (((jlong(((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (7)))))) & (jlong(255ll))) << (56)));
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_SafeUtils_writeShortLE_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:writeShortLE", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[2].i)));
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	jint temp1 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (8)))));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_SafeUtils_writeInt_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:writeInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(76);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_util_SafeUtils_readInt_Array1_int_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:readInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[1].i)));
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_SafeUtils_writeByte_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:writeByte", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(84);
	ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i)) = (jbyte((frame[2].i)));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_SafeUtils_writeShort_Array1_short_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:writeShort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(88);
	ARRAY_ACCESS(jshort, (frame[0].o), (frame[1].i)) = (jshort((frame[2].i)));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_util_SafeUtils_readShortLE_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:readShortLE", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) & (255)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (8)));
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_util_SafeUtils_readShort_Array1_short_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:readShort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[1].i))) & (jint(65535)));
	}

	popStackFrame(ctx);
}

void clinit_net_jpountz_util_SafeUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/SafeUtils:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_SafeUtils(ctx);
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)createArray(ctx, &class_net_jpountz_util_SafeUtils, (jint(0)));
	clinit_net_jpountz_util_SafeUtils(ctx);
	SF_net_jpountz_util_SafeUtils_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_util_SafeUtils[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "$VALUES", getArrayClass(&class_net_jpountz_util_SafeUtils, 1), (intptr_t) &SF_net_jpountz_util_SafeUtils_$VALUES, "[Lnet/jpountz/util/SafeUtils;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_net_jpountz_util_SafeUtils_values_R_Array1_net_jpountz_util_SafeUtils, 0, "()[Lnet/jpountz/util/SafeUtils;", 9 },
	{ "valueOf", (intptr_t) SM_net_jpountz_util_SafeUtils_valueOf_java_lang_String_R_net_jpountz_util_SafeUtils, 0, "(Ljava/lang/String;)Lnet/jpountz/util/SafeUtils;", 9 },
	{ "<init>", (intptr_t) init_net_jpountz_util_SafeUtils_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "checkRange", (intptr_t) SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int, 0, "([BI)V", 9 },
	{ "checkRange", (intptr_t) SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int_int, 0, "([BII)V", 9 },
	{ "checkLength", (intptr_t) SM_net_jpountz_util_SafeUtils_checkLength_int, 0, "(I)V", 9 },
	{ "readByte", (intptr_t) SM_net_jpountz_util_SafeUtils_readByte_Array1_byte_int_R_byte, 0, "([BI)B", 9 },
	{ "readIntBE", (intptr_t) SM_net_jpountz_util_SafeUtils_readIntBE_Array1_byte_int_R_int, 0, "([BI)I", 9 },
	{ "readIntLE", (intptr_t) SM_net_jpountz_util_SafeUtils_readIntLE_Array1_byte_int_R_int, 0, "([BI)I", 9 },
	{ "readInt", (intptr_t) SM_net_jpountz_util_SafeUtils_readInt_Array1_byte_int_R_int, 0, "([BI)I", 9 },
	{ "readLongLE", (intptr_t) SM_net_jpountz_util_SafeUtils_readLongLE_Array1_byte_int_R_long, 0, "([BI)J", 9 },
	{ "writeShortLE", (intptr_t) SM_net_jpountz_util_SafeUtils_writeShortLE_Array1_byte_int_int, 0, "([BII)V", 9 },
	{ "writeInt", (intptr_t) SM_net_jpountz_util_SafeUtils_writeInt_Array1_int_int_int, 0, "([III)V", 9 },
	{ "readInt", (intptr_t) SM_net_jpountz_util_SafeUtils_readInt_Array1_int_int_R_int, 0, "([II)I", 9 },
	{ "writeByte", (intptr_t) SM_net_jpountz_util_SafeUtils_writeByte_Array1_byte_int_int, 0, "([BII)V", 9 },
	{ "writeShort", (intptr_t) SM_net_jpountz_util_SafeUtils_writeShort_Array1_short_int_int, 0, "([SII)V", 9 },
	{ "readShortLE", (intptr_t) SM_net_jpountz_util_SafeUtils_readShortLE_Array1_byte_int_R_int, 0, "([BI)I", 9 },
	{ "readShort", (intptr_t) SM_net_jpountz_util_SafeUtils_readShort_Array1_short_int_R_int, 0, "([SI)I", 9 },
	{ "<clinit>", (intptr_t) clinit_net_jpountz_util_SafeUtils, 0, "()V", 8 },
};

Class class_net_jpountz_util_SafeUtils{
		.nativeName = (intptr_t) "net/jpountz/util/SafeUtils",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(net_jpountz_util_SafeUtils),
		.classVtable = (intptr_t) vtable_net_jpountz_util_SafeUtils,
		.staticInitializer = (intptr_t) clinit_net_jpountz_util_SafeUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_util_SafeUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_util_SafeUtils = registerClass(&class_net_jpountz_util_SafeUtils);

}
