#include "java/util/zip/CRC32.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/nio/Buffer.h"
#include "java/lang/AssertionError.h"
#include "java/lang/NullPointerException.h"
#include "java/util/zip/Checksum.h"
#include "java/util/zip/CRC32.h"
#include "java/lang/Class.h"

extern "C" {

jbool SF_java_util_zip_CRC32_$assertionsDisabled;

void mark_java_util_zip_CRC32(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_CRC32 *) object;
}

void init_java_util_zip_CRC32(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CRC32:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_CRC32(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_CRC32_update_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CRC32:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_util_zip_CRC32_update_int_int_R_int(ctx, ((jint)((java_util_zip_CRC32 *) NULL_CHECK((frame[0].o)))->F_crc), (frame[1].i));
	((java_util_zip_CRC32 *) NULL_CHECK(sp[0].o))->F_crc = temp0;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_CRC32_update_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CRC32:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(69);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(70);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(72);
	if ((frame[2].i) < 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	if ((frame[2].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[3].i))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(73);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_util_zip_CRC32_updateBytes_int_Array1_byte_int_int_R_int(ctx, ((jint)((java_util_zip_CRC32 *) NULL_CHECK((frame[0].o)))->F_crc), (frame[1].o), (frame[2].i), (frame[3].i));
	((java_util_zip_CRC32 *) NULL_CHECK(sp[0].o))->F_crc = temp0;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_CRC32_update_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CRC32:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_util_zip_CRC32_updateBytes_int_Array1_byte_int_int_R_int(ctx, ((jint)((java_util_zip_CRC32 *) NULL_CHECK((frame[0].o)))->F_crc), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((java_util_zip_CRC32 *) NULL_CHECK(sp[0].o))->F_crc = temp0;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_CRC32_update_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CRC32:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(102);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(103);
	if ((clinit_java_util_zip_CRC32(ctx), (jint)SF_java_util_zip_CRC32_$assertionsDisabled) != 0) goto label_3;
	}
	{
	if ((frame[2].i) <= (frame[3].i)) goto label_3;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(104);
	frame[4].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(105);
	if ((frame[4].i) > 0) goto label_5;
	}
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_util_zip_CRC32_updateByteBuffer_int_java_nio_ByteBuffer_int_int_R_int(ctx, ((jint)((java_util_zip_CRC32 *) NULL_CHECK((frame[0].o)))->F_crc), (frame[1].o), (frame[2].i), (frame[4].i));
	((java_util_zip_CRC32 *) NULL_CHECK(sp[0].o))->F_crc = temp0;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_CRC32_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CRC32:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	((java_util_zip_CRC32 *) NULL_CHECK((frame[0].o)))->F_crc = (jint(0));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_CRC32_getValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CRC32:getValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return ((jlong(((jint)((java_util_zip_CRC32 *) NULL_CHECK((frame[0].o)))->F_crc))) & (jlong(4294967295ll)));
	}

	popStackFrame(ctx);
}

void clinit_java_util_zip_CRC32(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CRC32:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_CRC32(ctx);
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_util_zip_CRC32)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_util_zip_CRC32)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_java_util_zip_CRC32(ctx);
	SF_java_util_zip_CRC32_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_zip_CRC32[] {
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
	(void *) M_java_util_zip_CRC32_update_int,
	(void *) M_java_util_zip_CRC32_update_Array1_byte_int_int,
	(void *) M_java_util_zip_CRC32_getValue_R_long,
	(void *) M_java_util_zip_CRC32_reset,
	(void *) M_java_util_zip_CRC32_update_Array1_byte,
	(void *) M_java_util_zip_CRC32_update_java_nio_ByteBuffer,
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
	{ "update", "(I)V" },
	{ "update", "([BII)V" },
	{ "getValue", "()J" },
	{ "reset", "()V" },
	{ "update", "([B)V" },
	{ "update", "(Ljava/nio/ByteBuffer;)V" },
};

static jclass interfaces[] { &class_java_util_zip_Checksum, };

static FieldMetadata fields[] {
	{ "crc", &class_int, offsetof(java_util_zip_CRC32, F_crc), "I", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_util_zip_CRC32_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_CRC32, 0, "()V", 1 },
	{ "update", (intptr_t) M_java_util_zip_CRC32_update_int, VTABLE_java_util_zip_CRC32_update_int, "(I)V", 1 },
	{ "update", (intptr_t) M_java_util_zip_CRC32_update_Array1_byte_int_int, VTABLE_java_util_zip_CRC32_update_Array1_byte_int_int, "([BII)V", 1 },
	{ "update", (intptr_t) M_java_util_zip_CRC32_update_Array1_byte, VTABLE_java_util_zip_CRC32_update_Array1_byte, "([B)V", 1 },
	{ "update", (intptr_t) M_java_util_zip_CRC32_update_java_nio_ByteBuffer, VTABLE_java_util_zip_CRC32_update_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;)V", 1 },
	{ "reset", (intptr_t) M_java_util_zip_CRC32_reset, VTABLE_java_util_zip_CRC32_reset, "()V", 1 },
	{ "getValue", (intptr_t) M_java_util_zip_CRC32_getValue_R_long, VTABLE_java_util_zip_CRC32_getValue_R_long, "()J", 1 },
	{ "update", (intptr_t) SM_java_util_zip_CRC32_update_int_int_R_int, 0, "(II)I", 266 },
	{ "updateBytes", (intptr_t) SM_java_util_zip_CRC32_updateBytes_int_Array1_byte_int_int_R_int, 0, "(I[BII)I", 266 },
	{ "updateByteBuffer", (intptr_t) SM_java_util_zip_CRC32_updateByteBuffer_int_java_nio_ByteBuffer_int_int_R_int, 0, "(ILjava/nio/ByteBuffer;II)I", 266 },
	{ "<clinit>", (intptr_t) clinit_java_util_zip_CRC32, 0, "()V", 8 },
};

Class class_java_util_zip_CRC32{
		.nativeName = (intptr_t) "java/util/zip/CRC32",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_zip_CRC32),
		.classVtable = (intptr_t) vtable_java_util_zip_CRC32,
		.staticInitializer = (intptr_t) clinit_java_util_zip_CRC32,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_CRC32,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_CRC32 = registerClass(&class_java_util_zip_CRC32);

}
