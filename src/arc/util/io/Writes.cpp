#include "arc/util/io/Writes.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "java/io/DataOutput.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Throwable.h"
#include "arc/util/io/Writes.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_arc_util_io_Writes(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_io_Writes *) object;
	if (self->F_output)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_output)->clazz)->markFunction)((jobject) self->F_output, mark, depth + 1);
}

void clinit_arc_util_io_Writes(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_io_Writes_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Writes(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output = (jref) (frame[1].o);
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_io_Writes_get_java_io_DataOutput_R_arc_util_io_Writes(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Writes(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	clinit_arc_util_io_Writes(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_l_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:l", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	((func_java_io_DataOutput_writeLong_long) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeLong_long, sp[0].o))(ctx, sp[0].o, (frame[1].l));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(25);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(23);
	frame[3].o = sp[0].o;
	LINE_NUMBER(24);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_i_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:i", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(34);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(32);
	frame[2].o = sp[0].o;
	LINE_NUMBER(33);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_b_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:b", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(43);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(41);
	frame[2].o = sp[0].o;
	LINE_NUMBER(42);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_b_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:b", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	((func_java_io_DataOutput_write_Array1_byte_int_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_write_Array1_byte_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(52);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(50);
	frame[4].o = sp[0].o;
	LINE_NUMBER(51);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_b_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:b", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	((func_arc_util_io_Writes_b_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_Writes_b_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_bool_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:bool", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_s_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:s", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(71);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(69);
	frame[2].o = sp[0].o;
	LINE_NUMBER(70);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_f_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:f", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	((func_java_io_DataOutput_writeFloat_float) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeFloat_float, sp[0].o))(ctx, sp[0].o, (frame[1].f));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(80);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(78);
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_d_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:d", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	((func_java_io_DataOutput_writeDouble_double) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeDouble_double, sp[0].o))(ctx, sp[0].o, (frame[1].d));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(89);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(87);
	frame[3].o = sp[0].o;
	LINE_NUMBER(88);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_str_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:str", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	((func_java_io_DataOutput_writeUTF_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeUTF_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(98);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(96);
	frame[2].o = sp[0].o;
	LINE_NUMBER(97);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_io_Writes_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Writes:close", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	if ((isInstance(ctx, sp[0].o, &class_java_io_Closeable)) == 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[0].o)))->F_output;
	((func_java_io_Closeable_close) resolveInterfaceMethod(ctx, &class_java_io_Closeable, INDEX_java_io_Closeable_close, (checkCast(ctx, &class_java_io_Closeable, sp[0].o))))(ctx, (checkCast(ctx, &class_java_io_Closeable, sp[0].o)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(108);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(106);
	frame[1].o = sp[0].o;
	LINE_NUMBER(107);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_util_io_Writes;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_util_io_Writes[] {
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
	(void *) M_arc_util_io_Writes_close,
	(void *) M_arc_util_io_Writes_l_long,
	(void *) M_arc_util_io_Writes_i_int,
	(void *) M_arc_util_io_Writes_b_int,
	(void *) M_arc_util_io_Writes_b_Array1_byte_int_int,
	(void *) M_arc_util_io_Writes_b_Array1_byte,
	(void *) M_arc_util_io_Writes_bool_boolean,
	(void *) M_arc_util_io_Writes_s_int,
	(void *) M_arc_util_io_Writes_f_float,
	(void *) M_arc_util_io_Writes_d_double,
	(void *) M_arc_util_io_Writes_str_java_lang_String,
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
	{ "l", "(J)V" },
	{ "i", "(I)V" },
	{ "b", "(I)V" },
	{ "b", "([BII)V" },
	{ "b", "([B)V" },
	{ "bool", "(Z)V" },
	{ "s", "(I)V" },
	{ "f", "(F)V" },
	{ "d", "(D)V" },
	{ "str", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_java_io_Closeable, };

static FieldMetadata fields[] {
	{ "output", &class_java_io_DataOutput, offsetof(arc_util_io_Writes, F_output), "Ljava/io/DataOutput;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_Writes_java_io_DataOutput, 0, "(Ljava/io/DataOutput;)V", 1 },
	{ "get", (intptr_t) SM_arc_util_io_Writes_get_java_io_DataOutput_R_arc_util_io_Writes, 0, "(Ljava/io/DataOutput;)Larc/util/io/Writes;", 131081 },
	{ "l", (intptr_t) M_arc_util_io_Writes_l_long, VTABLE_arc_util_io_Writes_l_long, "(J)V", 1 },
	{ "i", (intptr_t) M_arc_util_io_Writes_i_int, VTABLE_arc_util_io_Writes_i_int, "(I)V", 1 },
	{ "b", (intptr_t) M_arc_util_io_Writes_b_int, VTABLE_arc_util_io_Writes_b_int, "(I)V", 1 },
	{ "b", (intptr_t) M_arc_util_io_Writes_b_Array1_byte_int_int, VTABLE_arc_util_io_Writes_b_Array1_byte_int_int, "([BII)V", 1 },
	{ "b", (intptr_t) M_arc_util_io_Writes_b_Array1_byte, VTABLE_arc_util_io_Writes_b_Array1_byte, "([B)V", 1 },
	{ "bool", (intptr_t) M_arc_util_io_Writes_bool_boolean, VTABLE_arc_util_io_Writes_bool_boolean, "(Z)V", 1 },
	{ "s", (intptr_t) M_arc_util_io_Writes_s_int, VTABLE_arc_util_io_Writes_s_int, "(I)V", 1 },
	{ "f", (intptr_t) M_arc_util_io_Writes_f_float, VTABLE_arc_util_io_Writes_f_float, "(F)V", 1 },
	{ "d", (intptr_t) M_arc_util_io_Writes_d_double, VTABLE_arc_util_io_Writes_d_double, "(D)V", 1 },
	{ "str", (intptr_t) M_arc_util_io_Writes_str_java_lang_String, VTABLE_arc_util_io_Writes_str_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "close", (intptr_t) M_arc_util_io_Writes_close, VTABLE_arc_util_io_Writes_close, "()V", 1 },
};

Class class_arc_util_io_Writes{
		.nativeName = (intptr_t) "arc/util/io/Writes",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_io_Writes),
		.classVtable = (intptr_t) vtable_arc_util_io_Writes,
		.staticInitializer = (intptr_t) clinit_arc_util_io_Writes,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_util_io_Writes,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_Writes = registerClass(&class_arc_util_io_Writes);

}
