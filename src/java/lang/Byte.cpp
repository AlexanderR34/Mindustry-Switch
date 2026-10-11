#include "java/lang/Byte.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Number.h"
#include "java/lang/Byte.h"
#include "java/lang/Comparable.h"
#include "java/lang/Class.h"
#include "java/nio/NativeUtils.h"

extern "C" {

jobject SF_java_lang_Byte_TYPE;
jint SF_java_lang_Byte_SIZE;
jbyte SF_java_lang_Byte_MAX_VALUE;
jbyte SF_java_lang_Byte_MIN_VALUE;

void mark_java_lang_Byte(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Byte_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Byte_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_Byte_TYPE, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Number(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_Byte *) object;
}

void init_java_lang_Byte_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(55);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(56);
	((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_java_lang_Byte_byteValue_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:byteValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return ((jint)((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Byte_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((java_lang_Byte *) NULL_CHECK((checkCast(ctx, &class_java_lang_Byte, (frame[1].o)))))->F_value) != ((jint)((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value)) goto label_1;
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

jint M_java_lang_Byte_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_java_lang_Byte_intValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Byte_intValue_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Byte_hashCode_byte_R_int(jcontext ctx, jbyte param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jbyte SM_java_lang_Byte_parseByte_java_lang_String_R_byte(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:parseByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)SM_java_lang_Byte_parseByte_java_lang_String_int_R_byte(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte SM_java_lang_Byte_parseByte_java_lang_String_int_R_byte(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:parseByte", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(96);
	frame[3].i = (jbyte((frame[2].i)));
	LINE_NUMBER(97);
	if ((frame[3].i) != (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_3:;
	{
	LINE_NUMBER(100);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Value out of range for byte: \""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Byte_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, ((jint)((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Byte_toString_byte_R_java_lang_String(jcontext ctx, jbyte param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(jcontext ctx, jbyte param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(120);
	clinit_java_lang_Byte(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Byte);
	init_java_lang_Byte_byte(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Byte_valueOf_java_lang_String_R_java_lang_Byte(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Byte_toUnsignedInt_byte_R_int(jcontext ctx, jbyte param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:toUnsignedInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return ((frame[0].i) & (255));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Byte_intValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:intValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return ((jint)((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Byte_longValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:longValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (jlong(((jint)((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jfloat M_java_lang_Byte_floatValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:floatValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jfloat(((jint)((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jdouble M_java_lang_Byte_doubleValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:doubleValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return (jdouble(((jint)((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Byte_compare_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:compare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return ((frame[0].i) - (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Byte_compareUnsigned_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:compareUnsigned", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)SM_java_lang_Byte_toUnsignedInt_byte_R_int(ctx, (frame[0].i));
	jint temp1 = (jint)SM_java_lang_Byte_toUnsignedInt_byte_R_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Byte_toUnsignedLong_byte_R_long(jcontext ctx, jbyte param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:toUnsignedLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return ((jlong((frame[0].i))) & (jlong(255ll)));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Byte_compareTo_java_lang_Byte_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(180);
	if (((jint)((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value) >= ((jint)((java_lang_Byte *) NULL_CHECK((frame[1].o)))->F_value)) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	if (((jint)((java_lang_Byte *) NULL_CHECK((frame[0].o)))->F_value) <= ((jint)((java_lang_Byte *) NULL_CHECK((frame[1].o)))->F_value)) goto label_3;
	}
	INST_ICONST(1);
	goto label_2;
label_3:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_lang_Byte_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)((func_java_lang_Byte_compareTo_java_lang_Byte_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Byte_compareTo_java_lang_Byte_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Byte, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Byte(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Number(ctx);
	SF_java_lang_Byte_SIZE = jint(8);
	SF_java_lang_Byte_MAX_VALUE = jint(127);
	SF_java_lang_Byte_MIN_VALUE = jint(-128);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Byte:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Byte(ctx);
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"B"_j))));
	clinit_java_lang_Byte(ctx);
	SF_java_lang_Byte_TYPE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Byte[] {
	(void *) M_java_lang_Byte_hashCode_R_int,
	(void *) M_java_lang_Byte_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Byte_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Byte_intValue_R_int,
	(void *) M_java_lang_Byte_byteValue_R_byte,
	(void *) M_java_lang_Byte_longValue_R_long,
	(void *) M_java_lang_Byte_floatValue_R_float,
	(void *) M_java_lang_Byte_doubleValue_R_double,
	(void *) M_java_lang_Number_shortValue_R_short,
	(void *) M_java_lang_Byte_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Byte_compareTo_java_lang_Byte_R_int,
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
	{ "intValue", "()I" },
	{ "byteValue", "()B" },
	{ "longValue", "()J" },
	{ "floatValue", "()F" },
	{ "doubleValue", "()D" },
	{ "shortValue", "()S" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Byte;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "TYPE", &class_java_lang_Class, (intptr_t) &SF_java_lang_Byte_TYPE, "Ljava/lang/Class;", 25 },
	{ "SIZE", &class_int, (intptr_t) &SF_java_lang_Byte_SIZE, "I", 25 },
	{ "MAX_VALUE", &class_byte, (intptr_t) &SF_java_lang_Byte_MAX_VALUE, "B", 25 },
	{ "MIN_VALUE", &class_byte, (intptr_t) &SF_java_lang_Byte_MIN_VALUE, "B", 25 },
	{ "value", &class_byte, offsetof(java_lang_Byte, F_value), "B", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Byte_byte, 0, "(B)V", 1 },
	{ "byteValue", (intptr_t) M_java_lang_Byte_byteValue_R_byte, VTABLE_java_lang_Byte_byteValue_R_byte, "()B", 1 },
	{ "equals", (intptr_t) M_java_lang_Byte_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Byte_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_lang_Byte_hashCode_R_int, VTABLE_java_lang_Byte_hashCode_R_int, "()I", 1 },
	{ "hashCode", (intptr_t) SM_java_lang_Byte_hashCode_byte_R_int, 0, "(B)I", 9 },
	{ "parseByte", (intptr_t) SM_java_lang_Byte_parseByte_java_lang_String_R_byte, 0, "(Ljava/lang/String;)B", 9 },
	{ "parseByte", (intptr_t) SM_java_lang_Byte_parseByte_java_lang_String_int_R_byte, 0, "(Ljava/lang/String;I)B", 9 },
	{ "toString", (intptr_t) M_java_lang_Byte_toString_R_java_lang_String, VTABLE_java_lang_Byte_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) SM_java_lang_Byte_toString_byte_R_java_lang_String, 0, "(B)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte, 0, "(B)Ljava/lang/Byte;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Byte_valueOf_java_lang_String_R_java_lang_Byte, 0, "(Ljava/lang/String;)Ljava/lang/Byte;", 9 },
	{ "toUnsignedInt", (intptr_t) SM_java_lang_Byte_toUnsignedInt_byte_R_int, 0, "(B)I", 9 },
	{ "intValue", (intptr_t) M_java_lang_Byte_intValue_R_int, VTABLE_java_lang_Byte_intValue_R_int, "()I", 1 },
	{ "longValue", (intptr_t) M_java_lang_Byte_longValue_R_long, VTABLE_java_lang_Byte_longValue_R_long, "()J", 1 },
	{ "floatValue", (intptr_t) M_java_lang_Byte_floatValue_R_float, VTABLE_java_lang_Byte_floatValue_R_float, "()F", 1 },
	{ "doubleValue", (intptr_t) M_java_lang_Byte_doubleValue_R_double, VTABLE_java_lang_Byte_doubleValue_R_double, "()D", 1 },
	{ "compare", (intptr_t) SM_java_lang_Byte_compare_byte_byte_R_int, 0, "(BB)I", 9 },
	{ "compareUnsigned", (intptr_t) SM_java_lang_Byte_compareUnsigned_byte_byte_R_int, 0, "(BB)I", 9 },
	{ "toUnsignedLong", (intptr_t) SM_java_lang_Byte_toUnsignedLong_byte_R_long, 0, "(B)J", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Byte_compareTo_java_lang_Byte_R_int, VTABLE_java_lang_Byte_compareTo_java_lang_Byte_R_int, "(Ljava/lang/Byte;)I", 1 },
	{ "compareTo", (intptr_t) M_java_lang_Byte_compareTo_java_lang_Object_R_int, VTABLE_java_lang_Byte_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Byte, 0, "()V", 8 },
};

Class class_java_lang_Byte{
		.nativeName = (intptr_t) "java/lang/Byte",
		.parentClass = (intptr_t) &class_java_lang_Number,
		.size = sizeof(java_lang_Byte),
		.classVtable = (intptr_t) vtable_java_lang_Byte,
		.staticInitializer = (intptr_t) clinit_java_lang_Byte,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Byte,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Byte = registerClass(&class_java_lang_Byte);

}
