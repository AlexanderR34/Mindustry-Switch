#include "arc/util/io/FastDeflaterOutputStream.h"
#include "java/lang/Object.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "arc/util/io/FastDeflaterOutputStream.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_arc_util_io_FastDeflaterOutputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_zip_DeflaterOutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_io_FastDeflaterOutputStream *) object;
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
}

void clinit_arc_util_io_FastDeflaterOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_zip_DeflaterOutputStream(ctx);
}

void init_arc_util_io_FastDeflaterOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/FastDeflaterOutputStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_FastDeflaterOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(0));
	((arc_util_io_FastDeflaterOutputStream *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_FastDeflaterOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/FastDeflaterOutputStream:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((arc_util_io_FastDeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jbyte(((frame[1].i) & (255))));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_io_FastDeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_tmp;
	((func_arc_util_io_FastDeflaterOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_FastDeflaterOutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(1)));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_io_FastDeflaterOutputStream[] {
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
	(void *) M_java_util_zip_DeflaterOutputStream_close,
	(void *) M_java_util_zip_DeflaterOutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int,
	(void *) M_arc_util_io_FastDeflaterOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_util_zip_DeflaterOutputStream_finish,
	(void *) M_java_util_zip_DeflaterOutputStream_deflate,
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
	{ "finish", "()V" },
	{ "deflate", "()V" },
};

static FieldMetadata fields[] {
	{ "tmp", getArrayClass(&class_byte, 1), offsetof(arc_util_io_FastDeflaterOutputStream, F_tmp), "[B", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_FastDeflaterOutputStream_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "write", (intptr_t) M_arc_util_io_FastDeflaterOutputStream_write_int, VTABLE_arc_util_io_FastDeflaterOutputStream_write_int, "(I)V", 1 },
};

Class class_arc_util_io_FastDeflaterOutputStream{
		.nativeName = (intptr_t) "arc/util/io/FastDeflaterOutputStream",
		.parentClass = (intptr_t) &class_java_util_zip_DeflaterOutputStream,
		.size = sizeof(arc_util_io_FastDeflaterOutputStream),
		.classVtable = (intptr_t) vtable_arc_util_io_FastDeflaterOutputStream,
		.staticInitializer = (intptr_t) clinit_arc_util_io_FastDeflaterOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_io_FastDeflaterOutputStream,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_FastDeflaterOutputStream = registerClass(&class_arc_util_io_FastDeflaterOutputStream);

}
