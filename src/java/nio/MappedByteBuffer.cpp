#include "java/nio/MappedByteBuffer.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/nio/Buffer.h"

extern "C" {


void mark_java_nio_MappedByteBuffer(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_nio_ByteBuffer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_MappedByteBuffer *) object;
}

void clinit_java_nio_MappedByteBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_ByteBuffer(ctx);
}

void init_java_nio_MappedByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/MappedByteBuffer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_MappedByteBuffer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_nio_ByteBuffer_long_int(ctx, (frame[0].o), (jlong(0)), (jint(0)));
	LINE_NUMBER(7);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_nio_MappedByteBuffer[] {
	(void *) M_java_nio_ByteBuffer_hashCode_R_int,
	(void *) M_java_nio_ByteBuffer_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_nio_ByteBuffer_toString_R_java_lang_String,
	(void *) M_java_nio_ByteBuffer_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_nio_Buffer_capacity_R_int,
	(void *) M_java_nio_Buffer_position_R_int,
	(void *) M_java_nio_ByteBuffer_position_int_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_limit_R_int,
	(void *) M_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_mark_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_reset_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_clear_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_flip_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_rewind_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_remaining_R_int,
	(void *) M_java_nio_Buffer_hasRemaining_R_boolean,
	(void *) M_java_nio_ByteBuffer_isReadOnly_R_boolean,
	(void *) M_java_nio_ByteBuffer_hasArray_R_boolean,
	(void *) M_java_nio_ByteBuffer_array_R_java_lang_Object,
	(void *) M_java_nio_ByteBuffer_arrayOffset_R_int,
	(void *) M_java_nio_ByteBuffer_isDirect_R_boolean,
	(void *) M_java_nio_Buffer_nextGetIndex_R_int,
	(void *) M_java_nio_Buffer_nextGetIndex_int_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_int_R_int,
	(void *) M_java_nio_Buffer_markValue_R_int,
	(void *) M_java_nio_Buffer_truncate,
	(void *) M_java_nio_Buffer_discardMark,
	(void *) M_java_nio_ByteBuffer_compareTo_java_lang_Object_R_int,
	(void *) M_java_nio_ByteBuffer_deallocate,
	(void *) M_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asReadOnlyBuffer_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_clear_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_ix_int_R_long,
	(void *) M_java_nio_ByteBuffer__get_int_R_byte,
	(void *) M_java_nio_ByteBuffer__put_int_byte,
	(void *) M_java_nio_ByteBuffer_get_R_byte,
	(void *) M_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_get_int_R_byte,
	(void *) M_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_array_R_Array1_byte,
	(void *) M_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_mark_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_reset_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_flip_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_rewind_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_compact_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_compareTo_java_nio_ByteBuffer_R_int,
	(void *) M_java_nio_ByteBuffer_order_R_java_nio_ByteOrder,
	(void *) M_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_getChar_long_R_char,
	(void *) M_java_nio_ByteBuffer_getChar_R_char,
	(void *) M_java_nio_ByteBuffer_getChar_int_R_char,
	(void *) M_java_nio_ByteBuffer_putChar_long_char_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putChar_char_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putChar_int_char_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asCharBuffer_R_java_nio_CharBuffer,
	(void *) M_java_nio_ByteBuffer_getShort_long_R_short,
	(void *) M_java_nio_ByteBuffer_getShort_R_short,
	(void *) M_java_nio_ByteBuffer_getShort_int_R_short,
	(void *) M_java_nio_ByteBuffer_putShort_long_short_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putShort_int_short_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer,
	(void *) M_java_nio_ByteBuffer_getInt_long_R_int,
	(void *) M_java_nio_ByteBuffer_getInt_R_int,
	(void *) M_java_nio_ByteBuffer_getInt_int_R_int,
	(void *) M_java_nio_ByteBuffer_putInt_long_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer,
	(void *) M_java_nio_ByteBuffer_getLong_long_R_long,
	(void *) M_java_nio_ByteBuffer_getLong_R_long,
	(void *) M_java_nio_ByteBuffer_getLong_int_R_long,
	(void *) M_java_nio_ByteBuffer_putLong_long_long_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putLong_long_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putLong_int_long_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asLongBuffer_R_java_nio_LongBuffer,
	(void *) M_java_nio_ByteBuffer_getFloat_long_R_float,
	(void *) M_java_nio_ByteBuffer_getFloat_R_float,
	(void *) M_java_nio_ByteBuffer_getFloat_int_R_float,
	(void *) M_java_nio_ByteBuffer_putFloat_long_float_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putFloat_float_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putFloat_int_float_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer,
	(void *) M_java_nio_ByteBuffer_getDouble_long_R_double,
	(void *) M_java_nio_ByteBuffer_getDouble_R_double,
	(void *) M_java_nio_ByteBuffer_getDouble_int_R_double,
	(void *) M_java_nio_ByteBuffer_putDouble_long_double_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putDouble_double_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putDouble_int_double_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer,
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
	{ "capacity", "()I" },
	{ "position", "()I" },
	{ "position", "(I)Ljava/nio/Buffer;" },
	{ "limit", "()I" },
	{ "limit", "(I)Ljava/nio/Buffer;" },
	{ "mark", "()Ljava/nio/Buffer;" },
	{ "reset", "()Ljava/nio/Buffer;" },
	{ "clear", "()Ljava/nio/Buffer;" },
	{ "flip", "()Ljava/nio/Buffer;" },
	{ "rewind", "()Ljava/nio/Buffer;" },
	{ "remaining", "()I" },
	{ "hasRemaining", "()Z" },
	{ "isReadOnly", "()Z" },
	{ "hasArray", "()Z" },
	{ "array", "()Ljava/lang/Object;" },
	{ "arrayOffset", "()I" },
	{ "isDirect", "()Z" },
	{ "nextGetIndex", "()I" },
	{ "nextGetIndex", "(I)I" },
	{ "nextPutIndex", "()I" },
	{ "nextPutIndex", "(I)I" },
	{ "checkIndex", "(I)I" },
	{ "checkIndex", "(II)I" },
	{ "markValue", "()I" },
	{ "truncate", "()V" },
	{ "discardMark", "()V" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "deallocate", "()V" },
	{ "slice", "()Ljava/nio/ByteBuffer;" },
	{ "duplicate", "()Ljava/nio/ByteBuffer;" },
	{ "asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;" },
	{ "clear", "()Ljava/nio/ByteBuffer;" },
	{ "ix", "(I)J" },
	{ "_get", "(I)B" },
	{ "_put", "(IB)V" },
	{ "get", "()B" },
	{ "put", "(B)Ljava/nio/ByteBuffer;" },
	{ "get", "(I)B" },
	{ "put", "(IB)Ljava/nio/ByteBuffer;" },
	{ "get", "([BII)Ljava/nio/ByteBuffer;" },
	{ "get", "([B)Ljava/nio/ByteBuffer;" },
	{ "put", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;" },
	{ "put", "([BII)Ljava/nio/ByteBuffer;" },
	{ "put", "([B)Ljava/nio/ByteBuffer;" },
	{ "array", "()[B" },
	{ "position", "(I)Ljava/nio/ByteBuffer;" },
	{ "limit", "(I)Ljava/nio/ByteBuffer;" },
	{ "mark", "()Ljava/nio/ByteBuffer;" },
	{ "reset", "()Ljava/nio/ByteBuffer;" },
	{ "flip", "()Ljava/nio/ByteBuffer;" },
	{ "rewind", "()Ljava/nio/ByteBuffer;" },
	{ "compact", "()Ljava/nio/ByteBuffer;" },
	{ "compareTo", "(Ljava/nio/ByteBuffer;)I" },
	{ "order", "()Ljava/nio/ByteOrder;" },
	{ "order", "(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;" },
	{ "getChar", "(J)C" },
	{ "getChar", "()C" },
	{ "getChar", "(I)C" },
	{ "putChar", "(JC)Ljava/nio/ByteBuffer;" },
	{ "putChar", "(C)Ljava/nio/ByteBuffer;" },
	{ "putChar", "(IC)Ljava/nio/ByteBuffer;" },
	{ "asCharBuffer", "()Ljava/nio/CharBuffer;" },
	{ "getShort", "(J)S" },
	{ "getShort", "()S" },
	{ "getShort", "(I)S" },
	{ "putShort", "(JS)Ljava/nio/ByteBuffer;" },
	{ "putShort", "(S)Ljava/nio/ByteBuffer;" },
	{ "putShort", "(IS)Ljava/nio/ByteBuffer;" },
	{ "asShortBuffer", "()Ljava/nio/ShortBuffer;" },
	{ "getInt", "(J)I" },
	{ "getInt", "()I" },
	{ "getInt", "(I)I" },
	{ "putInt", "(JI)Ljava/nio/ByteBuffer;" },
	{ "putInt", "(I)Ljava/nio/ByteBuffer;" },
	{ "putInt", "(II)Ljava/nio/ByteBuffer;" },
	{ "asIntBuffer", "()Ljava/nio/IntBuffer;" },
	{ "getLong", "(J)J" },
	{ "getLong", "()J" },
	{ "getLong", "(I)J" },
	{ "putLong", "(JJ)Ljava/nio/ByteBuffer;" },
	{ "putLong", "(J)Ljava/nio/ByteBuffer;" },
	{ "putLong", "(IJ)Ljava/nio/ByteBuffer;" },
	{ "asLongBuffer", "()Ljava/nio/LongBuffer;" },
	{ "getFloat", "(J)F" },
	{ "getFloat", "()F" },
	{ "getFloat", "(I)F" },
	{ "putFloat", "(JF)Ljava/nio/ByteBuffer;" },
	{ "putFloat", "(F)Ljava/nio/ByteBuffer;" },
	{ "putFloat", "(IF)Ljava/nio/ByteBuffer;" },
	{ "asFloatBuffer", "()Ljava/nio/FloatBuffer;" },
	{ "getDouble", "(J)D" },
	{ "getDouble", "()D" },
	{ "getDouble", "(I)D" },
	{ "putDouble", "(JD)Ljava/nio/ByteBuffer;" },
	{ "putDouble", "(D)Ljava/nio/ByteBuffer;" },
	{ "putDouble", "(ID)Ljava/nio/ByteBuffer;" },
	{ "asDoubleBuffer", "()Ljava/nio/DoubleBuffer;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_MappedByteBuffer, 0, "()V", 0 },
};

Class class_java_nio_MappedByteBuffer{
		.nativeName = (intptr_t) "java/nio/MappedByteBuffer",
		.parentClass = (intptr_t) &class_java_nio_ByteBuffer,
		.size = sizeof(java_nio_MappedByteBuffer),
		.classVtable = (intptr_t) vtable_java_nio_MappedByteBuffer,
		.staticInitializer = (intptr_t) clinit_java_nio_MappedByteBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_MappedByteBuffer,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 108,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_MappedByteBuffer = registerClass(&class_java_nio_MappedByteBuffer);

}
