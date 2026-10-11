#include "java/util/zip/CheckedOutputStream.h"
#include "java/lang/Object.h"
#include "java/util/zip/CheckedOutputStream.h"
#include "java/io/FilterOutputStream.h"
#include "java/util/zip/Checksum.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_java_util_zip_CheckedOutputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_FilterOutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_zip_CheckedOutputStream *) object;
	if (self->F_cksum)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cksum)->clazz)->markFunction)((jobject) self->F_cksum, mark, depth + 1);
}

void clinit_java_util_zip_CheckedOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterOutputStream(ctx);
}

void init_java_util_zip_CheckedOutputStream_java_io_OutputStream_java_util_zip_Checksum(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CheckedOutputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_CheckedOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(50);
	init_java_io_FilterOutputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(51);
	((java_util_zip_CheckedOutputStream *) NULL_CHECK((frame[0].o)))->F_cksum = (jref) (frame[2].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_CheckedOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CheckedOutputStream:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_util_zip_CheckedOutputStream *) NULL_CHECK((frame[0].o)))->F_cksum;
	((func_java_util_zip_Checksum_update_int) resolveInterfaceMethod(ctx, &class_java_util_zip_Checksum, INDEX_java_util_zip_Checksum_update_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_CheckedOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CheckedOutputStream:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((java_util_zip_CheckedOutputStream *) NULL_CHECK((frame[0].o)))->F_cksum;
	((func_java_util_zip_Checksum_update_Array1_byte_int_int) resolveInterfaceMethod(ctx, &class_java_util_zip_Checksum, INDEX_java_util_zip_Checksum_update_Array1_byte_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_CheckedOutputStream_getChecksum_R_java_util_zip_Checksum(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/CheckedOutputStream:getChecksum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((java_util_zip_CheckedOutputStream *) NULL_CHECK((frame[0].o)))->F_cksum;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_CheckedOutputStream[] {
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
	(void *) M_java_io_FilterOutputStream_close,
	(void *) M_java_io_FilterOutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_util_zip_CheckedOutputStream_write_Array1_byte_int_int,
	(void *) M_java_util_zip_CheckedOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_util_zip_CheckedOutputStream_getChecksum_R_java_util_zip_Checksum,
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
	{ "close", "()V" },
	{ "flush", "()V" },
	{ "write", "([B)V" },
	{ "write", "([BII)V" },
	{ "write", "(I)V" },
	{ "checkError", "()Z" },
	{ "getChecksum", "()Ljava/util/zip/Checksum;" },
};

static FieldMetadata fields[] {
	{ "cksum", &class_java_util_zip_Checksum, offsetof(java_util_zip_CheckedOutputStream, F_cksum), "Ljava/util/zip/Checksum;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_CheckedOutputStream_java_io_OutputStream_java_util_zip_Checksum, 0, "(Ljava/io/OutputStream;Ljava/util/zip/Checksum;)V", 1 },
	{ "write", (intptr_t) M_java_util_zip_CheckedOutputStream_write_int, VTABLE_java_util_zip_CheckedOutputStream_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_java_util_zip_CheckedOutputStream_write_Array1_byte_int_int, VTABLE_java_util_zip_CheckedOutputStream_write_Array1_byte_int_int, "([BII)V", 1 },
	{ "getChecksum", (intptr_t) M_java_util_zip_CheckedOutputStream_getChecksum_R_java_util_zip_Checksum, VTABLE_java_util_zip_CheckedOutputStream_getChecksum_R_java_util_zip_Checksum, "()Ljava/util/zip/Checksum;", 1 },
};

Class class_java_util_zip_CheckedOutputStream{
		.nativeName = (intptr_t) "java/util/zip/CheckedOutputStream",
		.parentClass = (intptr_t) &class_java_io_FilterOutputStream,
		.size = sizeof(java_util_zip_CheckedOutputStream),
		.classVtable = (intptr_t) vtable_java_util_zip_CheckedOutputStream,
		.staticInitializer = (intptr_t) clinit_java_util_zip_CheckedOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_CheckedOutputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_CheckedOutputStream = registerClass(&class_java_util_zip_CheckedOutputStream);

}
