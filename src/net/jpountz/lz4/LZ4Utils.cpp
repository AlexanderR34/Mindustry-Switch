#include "net/jpountz/lz4/LZ4Utils.h"
#include "net/jpountz/lz4/LZ4Exception.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "net/jpountz/lz4/LZ4Utils.h"
#include "java/util/Arrays.h"
#include "java/lang/IllegalArgumentException.h"
#include "net/jpountz/lz4/LZ4Utils_Match.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jint SF_net_jpountz_lz4_LZ4Utils_MAX_INPUT_SIZE;
jobject SF_net_jpountz_lz4_LZ4Utils_$VALUES;

void mark_net_jpountz_lz4_LZ4Utils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_lz4_LZ4Utils_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_lz4_LZ4Utils_$VALUES)->clazz)->markFunction)((jobject) SF_net_jpountz_lz4_LZ4Utils_$VALUES, mark, depth + 1);
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
	auto self = (net_jpountz_lz4_LZ4Utils *) object;
}

jobject SM_net_jpountz_lz4_LZ4Utils_values_R_Array1_net_jpountz_lz4_LZ4Utils(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	{
	LINE_NUMBER(29);
	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Utils_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_net_jpountz_lz4_LZ4Utils, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4Utils_valueOf_java_lang_String_R_net_jpountz_lz4_LZ4Utils(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_net_jpountz_lz4_LZ4Utils)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_net_jpountz_lz4_LZ4Utils, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_net_jpountz_lz4_LZ4Utils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4Utils_maxCompressedLength_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:maxCompressedLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(35);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(36);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"length must be >= 0, got "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(37);
	if ((frame[0].i) < (jint(2113929216))) goto label_3;
	}
	{
	LINE_NUMBER(38);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"length must be < 2113929216"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (((frame[0].i) + ((frame[0].i) / (255))) + (16));
	}

	popStackFrame(ctx);
}

jbool SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:notEnoughSpace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(52);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(56);
	if ((frame[0].i) >= (frame[1].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4Utils_lengthOfEncodedInteger_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:lengthOfEncodedInteger", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(71);
	if ((frame[0].i) < (15)) goto label_1;
	}
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return ((((frame[0].i) - (15)) / (255)) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4Utils_sequenceLength_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:sequenceLength", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(93);
	jlong temp0 = jlong(1);
	jint temp1 = (jint)SM_net_jpountz_lz4_LZ4Utils_lengthOfEncodedInteger_int_R_int(ctx, (frame[0].i));
	jlong temp2 = ((temp0 + (jlong(temp1))) + (jlong((frame[0].i)))) + (jlong(2ll));
	jint temp3 = (jint)SM_net_jpountz_lz4_LZ4Utils_lengthOfEncodedInteger_int_R_int(ctx, (frame[1].i));
	frame[2].l = (temp2 + (jlong(temp3)));
	LINE_NUMBER(94);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(95);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Sequence length too large"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint((frame[2].l)));
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4Utils_hash_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:hash", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) * (jint(-1640531535)))) >> (20)));
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4Utils_hash64k_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:hash64k", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) * (jint(-1640531535)))) >> (19)));
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4Utils_hashHC_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:hashHC", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) * (jint(-1640531535)))) >> (17)));
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4Utils_zero_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:zero", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(120);
	SM_java_util_Arrays_fill_Array1_byte_int_int_byte(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(0)));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4Utils_zero_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:zero", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(131);
	frame[3].i = (frame[1].i);
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[3].i), (jint(0)));
	LINE_NUMBER(131);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4Utils_copyTo_net_jpountz_lz4_LZ4Utils$Match_net_jpountz_lz4_LZ4Utils$Match(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:copyTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(151);
	((net_jpountz_lz4_LZ4Utils$Match *) NULL_CHECK((frame[1].o)))->F_len = ((jint)((net_jpountz_lz4_LZ4Utils$Match *) NULL_CHECK((frame[0].o)))->F_len);
	LINE_NUMBER(152);
	((net_jpountz_lz4_LZ4Utils$Match *) NULL_CHECK((frame[1].o)))->F_start = ((jint)((net_jpountz_lz4_LZ4Utils$Match *) NULL_CHECK((frame[0].o)))->F_start);
	LINE_NUMBER(153);
	((net_jpountz_lz4_LZ4Utils$Match *) NULL_CHECK((frame[1].o)))->F_ref = ((jint)((net_jpountz_lz4_LZ4Utils$Match *) NULL_CHECK((frame[0].o)))->F_ref);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_net_jpountz_lz4_LZ4Utils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	SF_net_jpountz_lz4_LZ4Utils_MAX_INPUT_SIZE = jint(2113929216);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Utils:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)createArray(ctx, &class_net_jpountz_lz4_LZ4Utils, (jint(0)));
	clinit_net_jpountz_lz4_LZ4Utils(ctx);
	SF_net_jpountz_lz4_LZ4Utils_$VALUES = sp[0].o;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_lz4_LZ4Utils[] {
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

static jclass innerClasses[] {
	&class_net_jpountz_lz4_LZ4Utils$Match,
};

static FieldMetadata fields[] {
	{ "MAX_INPUT_SIZE", &class_int, (intptr_t) &SF_net_jpountz_lz4_LZ4Utils_MAX_INPUT_SIZE, "I", 26 },
	{ "$VALUES", getArrayClass(&class_net_jpountz_lz4_LZ4Utils, 1), (intptr_t) &SF_net_jpountz_lz4_LZ4Utils_$VALUES, "[Lnet/jpountz/lz4/LZ4Utils;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_values_R_Array1_net_jpountz_lz4_LZ4Utils, 0, "()[Lnet/jpountz/lz4/LZ4Utils;", 9 },
	{ "valueOf", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_valueOf_java_lang_String_R_net_jpountz_lz4_LZ4Utils, 0, "(Ljava/lang/String;)Lnet/jpountz/lz4/LZ4Utils;", 9 },
	{ "<init>", (intptr_t) init_net_jpountz_lz4_LZ4Utils_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "maxCompressedLength", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_maxCompressedLength_int_R_int, 0, "(I)I", 8 },
	{ "notEnoughSpace", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean, 0, "(II)Z", 8 },
	{ "lengthOfEncodedInteger", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_lengthOfEncodedInteger_int_R_int, 0, "(I)I", 8 },
	{ "sequenceLength", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_sequenceLength_int_int_R_int, 0, "(II)I", 8 },
	{ "hash", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_hash_int_R_int, 0, "(I)I", 8 },
	{ "hash64k", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_hash64k_int_R_int, 0, "(I)I", 8 },
	{ "hashHC", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_hashHC_int_R_int, 0, "(I)I", 8 },
	{ "zero", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_zero_Array1_byte_int_int, 0, "([BII)V", 8 },
	{ "zero", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_zero_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;II)V", 8 },
	{ "copyTo", (intptr_t) SM_net_jpountz_lz4_LZ4Utils_copyTo_net_jpountz_lz4_LZ4Utils$Match_net_jpountz_lz4_LZ4Utils$Match, 0, "(Lnet/jpountz/lz4/LZ4Utils$Match;Lnet/jpountz/lz4/LZ4Utils$Match;)V", 8 },
	{ "<clinit>", (intptr_t) clinit_net_jpountz_lz4_LZ4Utils, 0, "()V", 8 },
};

Class class_net_jpountz_lz4_LZ4Utils{
		.nativeName = (intptr_t) "net/jpountz/lz4/LZ4Utils",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(net_jpountz_lz4_LZ4Utils),
		.classVtable = (intptr_t) vtable_net_jpountz_lz4_LZ4Utils,
		.staticInitializer = (intptr_t) clinit_net_jpountz_lz4_LZ4Utils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_lz4_LZ4Utils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 16432,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_lz4_LZ4Utils = registerClass(&class_net_jpountz_lz4_LZ4Utils);

}
