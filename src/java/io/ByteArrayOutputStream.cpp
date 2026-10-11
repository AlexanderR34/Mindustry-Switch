#include "java/io/ByteArrayOutputStream.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/reflect/Method.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/lang/System.h"
#include "java/io/OutputStream.h"
#include "java/lang/Deprecated.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_java_io_ByteArrayOutputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_OutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_ByteArrayOutputStream *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void clinit_java_io_ByteArrayOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_OutputStream(ctx);
}

void init_java_io_ByteArrayOutputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ByteArrayOutputStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(44);
	init_java_io_OutputStream(ctx, (frame[0].o));
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (32));
	((java_io_ByteArrayOutputStream *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_ByteArrayOutputStream_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ByteArrayOutputStream(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(59);
	init_java_io_OutputStream(ctx, (frame[0].o));
	LINE_NUMBER(60);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	((java_io_ByteArrayOutputStream *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(63);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size < 0"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_ByteArrayOutputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	M_java_io_OutputStream_close(ctx, (frame[0].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_ByteArrayOutputStream_expand_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:expand", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(85);
	jint temp0 = ((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count) + (frame[1].i);
	sp[0].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 > (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count) + (frame[1].i)) * (jint(2))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(91);
	((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[2].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_ByteArrayOutputStream_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count = (jint(0));
	LINE_NUMBER(101);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_io_ByteArrayOutputStream_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return ((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count);
	}

	popStackFrame(ctx);
}

jobject M_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:toByteArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count));
	frame[1].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(122);
	popStackFrame(ctx, self);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_ByteArrayOutputStream_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	init_java_lang_String_Array1_byte_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_ByteArrayOutputStream_toString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(154);
	jint temp0 = (jint)((func_java_io_ByteArrayOutputStream_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_size_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject) createArray(ctx, &class_char, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(155);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = ((frame[1].i) & (255)) << (8);
	sp[1].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((temp1 | (((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[3].i))) & (255)))));
	LINE_NUMBER(155);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(158);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_ByteArrayOutputStream_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(173);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	init_java_lang_String_Array1_byte_int_int_java_lang_String(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_io_ByteArrayOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(195);
	SM_java_util_Arrays_checkOffsetAndCount_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i), (frame[3].i));
	LINE_NUMBER(196);
	if ((frame[3].i) != 0) goto label_2;
	}
	LINE_NUMBER(197);
	popStackFrame(ctx, self);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(199);
	M_java_io_ByteArrayOutputStream_expand_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(200);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count), (frame[3].i));
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	((java_io_ByteArrayOutputStream *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK(sp[0].o))->F_count) + (frame[3].i));
	LINE_NUMBER(202);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_ByteArrayOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(213);
	jint temp0 = (jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count;
	sp[0].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(214);
	M_java_io_ByteArrayOutputStream_expand_int(ctx, (frame[0].o), (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_io_ByteArrayOutputStream *) NULL_CHECK(sp[1].o))->F_count;
	((java_io_ByteArrayOutputStream *) NULL_CHECK(sp[1].o))->F_count = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[1].i)));
	LINE_NUMBER(217);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ByteArrayOutputStream:writeTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(230);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_io_ByteArrayOutputStream;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method toString
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_io_ByteArrayOutputStream[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_io_ByteArrayOutputStream_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_io_ByteArrayOutputStream_close,
	(void *) M_java_io_OutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_io_ByteArrayOutputStream_write_Array1_byte_int_int,
	(void *) M_java_io_ByteArrayOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_io_ByteArrayOutputStream_expand_int,
	(void *) M_java_io_ByteArrayOutputStream_reset,
	(void *) M_java_io_ByteArrayOutputStream_size_R_int,
	(void *) M_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte,
	(void *) M_java_io_ByteArrayOutputStream_toString_int_R_java_lang_String,
	(void *) M_java_io_ByteArrayOutputStream_toString_java_lang_String_R_java_lang_String,
	(void *) M_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream,
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
	{ "expand", "(I)V" },
	{ "reset", "()V" },
	{ "size", "()I" },
	{ "toByteArray", "()[B" },
	{ "toString", "(I)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "writeTo", "(Ljava/io/OutputStream;)V" },
};

static FieldMetadata fields[] {
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_io_ByteArrayOutputStream, F_buf), "[B", 4 },
	{ "count", &class_int, offsetof(java_io_ByteArrayOutputStream, F_count), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_ByteArrayOutputStream, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_io_ByteArrayOutputStream_int, 0, "(I)V", 1 },
	{ "close", (intptr_t) M_java_io_ByteArrayOutputStream_close, VTABLE_java_io_ByteArrayOutputStream_close, "()V", 1 },
	{ "expand", (intptr_t) M_java_io_ByteArrayOutputStream_expand_int, VTABLE_java_io_ByteArrayOutputStream_expand_int, "(I)V", 2 },
	{ "reset", (intptr_t) M_java_io_ByteArrayOutputStream_reset, VTABLE_java_io_ByteArrayOutputStream_reset, "()V", 33 },
	{ "size", (intptr_t) M_java_io_ByteArrayOutputStream_size_R_int, VTABLE_java_io_ByteArrayOutputStream_size_R_int, "()I", 1 },
	{ "toByteArray", (intptr_t) M_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte, VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte, "()[B", 33 },
	{ "toString", (intptr_t) M_java_io_ByteArrayOutputStream_toString_R_java_lang_String, VTABLE_java_io_ByteArrayOutputStream_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_java_io_ByteArrayOutputStream_toString_int_R_java_lang_String, VTABLE_java_io_ByteArrayOutputStream_toString_int_R_java_lang_String, "(I)Ljava/lang/String;", 131073 },
	{ "toString", (intptr_t) M_java_io_ByteArrayOutputStream_toString_java_lang_String_R_java_lang_String, VTABLE_java_io_ByteArrayOutputStream_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "write", (intptr_t) M_java_io_ByteArrayOutputStream_write_Array1_byte_int_int, VTABLE_java_io_ByteArrayOutputStream_write_Array1_byte_int_int, "([BII)V", 33 },
	{ "write", (intptr_t) M_java_io_ByteArrayOutputStream_write_int, VTABLE_java_io_ByteArrayOutputStream_write_int, "(I)V", 33 },
	{ "writeTo", (intptr_t) M_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream, VTABLE_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream, "(Ljava/io/OutputStream;)V", 33 },
};

Class class_java_io_ByteArrayOutputStream{
		.nativeName = (intptr_t) "java/io/ByteArrayOutputStream",
		.parentClass = (intptr_t) &class_java_io_OutputStream,
		.size = sizeof(java_io_ByteArrayOutputStream),
		.classVtable = (intptr_t) vtable_java_io_ByteArrayOutputStream,
		.staticInitializer = (intptr_t) clinit_java_io_ByteArrayOutputStream,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_io_ByteArrayOutputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_ByteArrayOutputStream = registerClass(&class_java_io_ByteArrayOutputStream);

}
