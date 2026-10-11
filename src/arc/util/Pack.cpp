#include "arc/util/Pack.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/lang/Float.h"

extern "C" {


void mark_arc_util_Pack(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Pack *) object;
}

void clinit_arc_util_Pack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Pack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_Pack_packUv_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:packUv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(9);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[0].f));
	jint temp1 = jint((temp0 * (jfloat(65535.0f))));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[1].f));
	jfloat temp3 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, (temp1 | ((jint((temp2 * (jfloat(65535.0f))))) << (16))));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Pack_u_byte_R_int(jcontext ctx, jbyte param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:u", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return ((frame[0].i) & (255));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Pack_u_short_R_int(jcontext ctx, jshort param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:u", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return ((frame[0].i) & (jint(65535)));
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Pack_u_int_R_long(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:u", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return ((jlong((frame[0].i))) & (jlong(4294967295ll)));
	}

	popStackFrame(ctx);
}

jbyte SM_arc_util_Pack_byteValue_boolean_R_byte(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:byteValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(28);
	if ((frame[0].i) == 0) goto label_1;
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

jint SM_arc_util_Pack_shortInt_short_short_R_int(jcontext ctx, jshort param0, jshort param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:shortInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (((frame[0].i) << (16)) | ((frame[1].i) & (jint(65535))));
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Pack_longInt_int_int_R_long(jcontext ctx, jint param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:longInt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (((jlong((frame[0].i))) << (32)) | ((jlong((frame[1].i))) & (jlong(4294967295ll))));
	}

	popStackFrame(ctx);
}

jbyte SM_arc_util_Pack_byteByte_byte_byte_R_byte(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:byteByte", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (jbyte((((frame[0].i) << (jint(4))) | (frame[1].i))));
	}

	popStackFrame(ctx);
}

jbyte SM_arc_util_Pack_leftByte_byte_R_byte(jcontext ctx, jbyte param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:leftByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (jbyte((((frame[0].i) >> (jint(4))) & (15))));
	}

	popStackFrame(ctx);
}

jbyte SM_arc_util_Pack_rightByte_byte_R_byte(jcontext ctx, jbyte param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:rightByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jbyte(((frame[0].i) & (15))));
	}

	popStackFrame(ctx);
}

jshort SM_arc_util_Pack_leftShort_int_R_short(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:leftShort", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jshort((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (16)))));
	}

	popStackFrame(ctx);
}

jshort SM_arc_util_Pack_rightShort_int_R_short(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:rightShort", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (jshort(((frame[0].i) & (jint(65535)))));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Pack_leftInt_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:leftInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jint(((frame[0].l) >> (32))));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Pack_rightInt_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:rightInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (jint((frame[0].l)));
	}

	popStackFrame(ctx);
}

jbyte SM_arc_util_Pack_leftByte_short_R_byte(jcontext ctx, jshort param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:leftByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (jbyte(((frame[0].i) >> (8))));
	}

	popStackFrame(ctx);
}

jbyte SM_arc_util_Pack_rightByte_short_R_byte(jcontext ctx, jshort param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:rightByte", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jbyte((frame[0].i)));
	}

	popStackFrame(ctx);
}

jshort SM_arc_util_Pack_shortByte_byte_byte_R_short(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:shortByte", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (jshort((((frame[0].i) << (8)) | ((frame[1].i) & (255)))));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Pack_bytes_int_Array1_byte_R_Array1_byte(jcontext ctx, jint param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:bytes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(82);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0))) = (jbyte(((frame[0].i) >> (24))));
	LINE_NUMBER(83);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(1))) = (jbyte(((frame[0].i) >> (16))));
	LINE_NUMBER(84);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(2))) = (jbyte(((frame[0].i) >> (8))));
	LINE_NUMBER(85);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(3))) = (jbyte((frame[0].i)));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Pack_shorts_long_Array1_short_R_Array1_short(jcontext ctx, jlong param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:shorts", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(92);
	ARRAY_ACCESS(jshort, (frame[2].o), (jint(0))) = (jshort((jint(((frame[0].l) >> (48))))));
	LINE_NUMBER(93);
	ARRAY_ACCESS(jshort, (frame[2].o), (jint(1))) = (jshort((jint(((frame[0].l) >> (32))))));
	LINE_NUMBER(94);
	ARRAY_ACCESS(jshort, (frame[2].o), (jint(2))) = (jshort((jint(((frame[0].l) >> (16))))));
	LINE_NUMBER(95);
	ARRAY_ACCESS(jshort, (frame[2].o), (jint(3))) = (jshort((jint((frame[0].l)))));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Pack_longShorts_Array1_short_R_long(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:longShorts", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (((((jlong(((jint(65535)) & ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (jint(0))))))) << (48)) | ((jlong(((jint(65535)) & ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (jint(1))))))) << (32))) | ((jlong(((jint(65535)) & ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (jint(2))))))) << (16))) | (jlong(((jint(65535)) & ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (jint(3))))))));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Pack_intBytes_byte_byte_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1, jbyte param2, jbyte param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:intBytes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return ((((((255) & (frame[0].i)) << (24)) | (((255) & (frame[1].i)) << (16))) | (((255) & (frame[2].i)) << (8))) | ((255) & (frame[3].i)));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Pack_intBytes_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:intBytes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return ((((((255) & ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0))))) << (24)) | (((255) & ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1))))) << (16))) | (((255) & ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(2))))) << (8))) | ((255) & ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(3))))));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Pack_bitmask_int_int_boolean_R_int(jcontext ctx, jint param0, jint param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Pack:bitmask", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Pack(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(114);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jint temp0 = (frame[0].i) | (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (frame[0].i) & ((frame[1].i) ^ (jint(-1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_Pack[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Pack, 0, "()V", 1 },
	{ "packUv", (intptr_t) SM_arc_util_Pack_packUv_float_float_R_float, 0, "(FF)F", 9 },
	{ "u", (intptr_t) SM_arc_util_Pack_u_byte_R_int, 0, "(B)I", 9 },
	{ "u", (intptr_t) SM_arc_util_Pack_u_short_R_int, 0, "(S)I", 9 },
	{ "u", (intptr_t) SM_arc_util_Pack_u_int_R_long, 0, "(I)J", 9 },
	{ "byteValue", (intptr_t) SM_arc_util_Pack_byteValue_boolean_R_byte, 0, "(Z)B", 9 },
	{ "shortInt", (intptr_t) SM_arc_util_Pack_shortInt_short_short_R_int, 0, "(SS)I", 9 },
	{ "longInt", (intptr_t) SM_arc_util_Pack_longInt_int_int_R_long, 0, "(II)J", 9 },
	{ "byteByte", (intptr_t) SM_arc_util_Pack_byteByte_byte_byte_R_byte, 0, "(BB)B", 9 },
	{ "leftByte", (intptr_t) SM_arc_util_Pack_leftByte_byte_R_byte, 0, "(B)B", 9 },
	{ "rightByte", (intptr_t) SM_arc_util_Pack_rightByte_byte_R_byte, 0, "(B)B", 9 },
	{ "leftShort", (intptr_t) SM_arc_util_Pack_leftShort_int_R_short, 0, "(I)S", 9 },
	{ "rightShort", (intptr_t) SM_arc_util_Pack_rightShort_int_R_short, 0, "(I)S", 9 },
	{ "leftInt", (intptr_t) SM_arc_util_Pack_leftInt_long_R_int, 0, "(J)I", 9 },
	{ "rightInt", (intptr_t) SM_arc_util_Pack_rightInt_long_R_int, 0, "(J)I", 9 },
	{ "leftByte", (intptr_t) SM_arc_util_Pack_leftByte_short_R_byte, 0, "(S)B", 9 },
	{ "rightByte", (intptr_t) SM_arc_util_Pack_rightByte_short_R_byte, 0, "(S)B", 9 },
	{ "shortByte", (intptr_t) SM_arc_util_Pack_shortByte_byte_byte_R_short, 0, "(BB)S", 9 },
	{ "bytes", (intptr_t) SM_arc_util_Pack_bytes_int_Array1_byte_R_Array1_byte, 0, "(I[B)[B", 9 },
	{ "shorts", (intptr_t) SM_arc_util_Pack_shorts_long_Array1_short_R_Array1_short, 0, "(J[S)[S", 9 },
	{ "longShorts", (intptr_t) SM_arc_util_Pack_longShorts_Array1_short_R_long, 0, "([S)J", 9 },
	{ "intBytes", (intptr_t) SM_arc_util_Pack_intBytes_byte_byte_byte_byte_R_int, 0, "(BBBB)I", 9 },
	{ "intBytes", (intptr_t) SM_arc_util_Pack_intBytes_Array1_byte_R_int, 0, "([B)I", 9 },
	{ "bitmask", (intptr_t) SM_arc_util_Pack_bitmask_int_int_boolean_R_int, 0, "(IIZ)I", 9 },
};

Class class_arc_util_Pack{
		.nativeName = (intptr_t) "arc/util/Pack",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Pack),
		.classVtable = (intptr_t) vtable_arc_util_Pack,
		.staticInitializer = (intptr_t) clinit_arc_util_Pack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Pack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Pack = registerClass(&class_arc_util_Pack);

}
