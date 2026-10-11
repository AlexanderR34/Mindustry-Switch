#include "java/security/MessageDigestSpi.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/lang/Cloneable.h"
#include "java/security/DigestException.h"
#include "java/security/MessageDigestSpi.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/lang/System.h"

extern "C" {


void mark_java_security_MessageDigestSpi(jobject object, jint mark, jint depth) {
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
	auto self = (java_security_MessageDigestSpi *) object;
	if (self->F_tempArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tempArray)->clazz)->markFunction)((jobject) self->F_tempArray, mark, depth + 1);
}

void clinit_java_security_MessageDigestSpi(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_security_MessageDigestSpi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigestSpi:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigestSpi(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_security_MessageDigestSpi_engineGetDigestLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigestSpi:engineGetDigestLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigestSpi:engineUpdate", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_hasRemaining_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_hasRemaining_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(23);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_hasArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_hasArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_array_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_array_R_Array1_byte])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(25);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_arrayOffset_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_arrayOffset_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(26);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(27);
	jint temp2 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[1].o));
	frame[5].i = temp2;
	LINE_NUMBER(28);
	((func_java_security_MessageDigestSpi_engineUpdate_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigestSpi_engineUpdate_Array1_byte_int_int])(ctx, (frame[0].o), (frame[4].o), ((frame[2].i) + (frame[3].i)), ((frame[5].i) - (frame[3].i)));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(30);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(31);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(32);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (4096), (frame[4].i));
	frame[2].i = temp1;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((java_security_MessageDigestSpi *) NULL_CHECK((frame[0].o)))->F_tempArray;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_security_MessageDigestSpi *) NULL_CHECK((frame[0].o)))->F_tempArray;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	((java_security_MessageDigestSpi *) NULL_CHECK(sp[0].o))->F_tempArray = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(37);
	if ((frame[4].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(38);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_security_MessageDigestSpi *) NULL_CHECK((frame[0].o)))->F_tempArray;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[3].i = temp1;
	LINE_NUMBER(39);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_security_MessageDigestSpi *) NULL_CHECK((frame[0].o)))->F_tempArray;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_security_MessageDigestSpi *) NULL_CHECK((frame[0].o)))->F_tempArray;
	((func_java_security_MessageDigestSpi_engineUpdate_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_MessageDigestSpi_engineUpdate_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(41);
	frame[4].i = ((frame[4].i) - (frame[3].i));
	goto label_14;
	}
label_1:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigestSpi:engineDigest", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_java_security_MessageDigestSpi_engineDigest_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigestSpi_engineDigest_R_Array1_byte])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(52);
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(53);
	clinit_java_security_DigestException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_DigestException);
	init_java_security_DigestException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"partial digests not returned"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(54);
	if (((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i)) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(55);
	clinit_java_security_DigestException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_DigestException);
	init_java_security_DigestException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"insufficient space in the output buffer to store the digest"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(57);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(0)), (frame[1].o), (frame[2].i), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	}

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigestSpi_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigestSpi:clone", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Cloneable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)M_java_lang_Object_clone_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(68);
	clinit_java_lang_CloneNotSupportedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_CloneNotSupportedException);
	init_java_lang_CloneNotSupportedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_security_MessageDigestSpi[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_security_MessageDigestSpi_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_security_MessageDigestSpi_engineGetDigestLength_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer,
	(void *) nullptr,
	(void *) M_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int,
	(void *) nullptr,
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
	{ "engineGetDigestLength", "()I" },
	{ "engineUpdate", "(B)V" },
	{ "engineUpdate", "([BII)V" },
	{ "engineUpdate", "(Ljava/nio/ByteBuffer;)V" },
	{ "engineDigest", "()[B" },
	{ "engineDigest", "([BII)I" },
	{ "engineReset", "()V" },
};

static FieldMetadata fields[] {
	{ "tempArray", getArrayClass(&class_byte, 1), offsetof(java_security_MessageDigestSpi, F_tempArray), "[B", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_MessageDigestSpi, 0, "()V", 1 },
	{ "engineGetDigestLength", (intptr_t) M_java_security_MessageDigestSpi_engineGetDigestLength_R_int, VTABLE_java_security_MessageDigestSpi_engineGetDigestLength_R_int, "()I", 4 },
	{ "engineUpdate", 0, VTABLE_java_security_MessageDigestSpi_engineUpdate_byte, "(B)V", 1028 },
	{ "engineUpdate", 0, VTABLE_java_security_MessageDigestSpi_engineUpdate_Array1_byte_int_int, "([BII)V", 1028 },
	{ "engineUpdate", (intptr_t) M_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer, VTABLE_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;)V", 4 },
	{ "engineDigest", 0, VTABLE_java_security_MessageDigestSpi_engineDigest_R_Array1_byte, "()[B", 1028 },
	{ "engineDigest", (intptr_t) M_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int, VTABLE_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int, "([BII)I", 4 },
	{ "engineReset", 0, VTABLE_java_security_MessageDigestSpi_engineReset, "()V", 1028 },
	{ "clone", (intptr_t) M_java_security_MessageDigestSpi_clone_R_java_lang_Object, VTABLE_java_security_MessageDigestSpi_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_security_MessageDigestSpi{
		.nativeName = (intptr_t) "java/security/MessageDigestSpi",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_security_MessageDigestSpi),
		.classVtable = (intptr_t) vtable_java_security_MessageDigestSpi,
		.staticInitializer = (intptr_t) clinit_java_security_MessageDigestSpi,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_MessageDigestSpi,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_MessageDigestSpi = registerClass(&class_java_security_MessageDigestSpi);

}
