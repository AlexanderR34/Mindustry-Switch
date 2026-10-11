#include "arc/util/io/Reads.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/annotation/Annotation.h"
#include "java/io/UTFDataFormatException.h"
#include "java/io/DataInput.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/util/io/Reads.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_arc_util_io_Reads(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_io_Reads *) object;
	if (self->F_bytearr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bytearr)->clazz)->markFunction)((jobject) self->F_bytearr, mark, depth + 1);
	if (self->F_chararr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chararr)->clazz)->markFunction)((jobject) self->F_chararr, mark, depth + 1);
	if (self->F_input)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_input)->clazz)->markFunction)((jobject) self->F_input, mark, depth + 1);
}

void clinit_arc_util_io_Reads(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_io_Reads_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Reads(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input = (jref) (frame[1].o);
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_io_Reads_get_java_io_DataInput_R_arc_util_io_Reads(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Reads(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(21);
	clinit_arc_util_io_Reads(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Reads);
	init_arc_util_io_Reads_java_io_DataInput(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_util_io_Reads_checkEOF_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:checkEOF", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	if ((isInstance(ctx, sp[0].o, &class_java_io_InputStream)) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_io_InputStream, sp[0].o)))->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, (checkCast(ctx, &class_java_io_InputStream, sp[0].o)));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(30);
	INST_ICONST(-1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(31);
	frame[1].o = sp[0].o;
	LINE_NUMBER(32);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_arc_util_io_Reads_l_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:l", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jlong temp0 = (jlong)((func_java_io_DataInput_readLong_R_long) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readLong_R_long, sp[0].o))(ctx, sp[0].o);
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(40);
	frame[1].o = sp[0].o;
	LINE_NUMBER(41);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_arc_util_io_Reads_i_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:i", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(49);
	frame[1].o = sp[0].o;
	LINE_NUMBER(50);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jshort M_arc_util_io_Reads_s_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:s", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(58);
	frame[1].o = sp[0].o;
	LINE_NUMBER(59);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_arc_util_io_Reads_us_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:us", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(67);
	frame[1].o = sp[0].o;
	LINE_NUMBER(68);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbyte M_arc_util_io_Reads_b_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:b", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(76);
	frame[1].o = sp[0].o;
	LINE_NUMBER(77);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_io_Reads_b_int_R_Array1_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:b", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	((func_java_io_DataInput_readFully_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(86);
	sp[0].o = frame[2].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(87);
	frame[2].o = sp[0].o;
	LINE_NUMBER(88);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_io_Reads_b_Array1_byte_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:b", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	((func_java_io_DataInput_readFully_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(96);
	sp[0].o = frame[1].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(97);
	frame[2].o = sp[0].o;
	LINE_NUMBER(98);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_io_Reads_b_Array1_byte_int_int_R_Array1_byte(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:b", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	((func_java_io_DataInput_readFully_Array1_byte_int_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(106);
	sp[0].o = frame[1].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(107);
	frame[4].o = sp[0].o;
	LINE_NUMBER(108);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_arc_util_io_Reads_ub_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:ub", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(116);
	frame[1].o = sp[0].o;
	LINE_NUMBER(117);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_arc_util_io_Reads_bool_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:bool", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = (jint)((func_java_io_DataInput_readBoolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readBoolean_R_boolean, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(125);
	frame[1].o = sp[0].o;
	LINE_NUMBER(126);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jfloat M_arc_util_io_Reads_f_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:f", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jfloat temp0 = (jfloat)((func_java_io_DataInput_readFloat_R_float) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFloat_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(134);
	frame[1].o = sp[0].o;
	LINE_NUMBER(135);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jdouble M_arc_util_io_Reads_d_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:d", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jdouble temp0 = (jdouble)((func_java_io_DataInput_readDouble_R_double) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readDouble_R_double, sp[0].o))(ctx, sp[0].o);
	sp[0].d = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(143);
	frame[1].o = sp[0].o;
	LINE_NUMBER(144);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_io_Reads_str_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:str", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	sp[0].o = (jobject)((func_java_io_DataInput_readUTF_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUTF_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(152);
	frame[1].o = sp[0].o;
	LINE_NUMBER(153);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_arc_util_io_Reads_skip_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:skip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	jint temp0 = (jint)((func_java_io_DataInput_skipBytes_int_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_skipBytes_int_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(163);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(161);
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(164);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_io_Reads_str_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:str", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	frame[2].o = sp[0].o;
	LINE_NUMBER(171);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(172);
	if ((frame[1].i) <= 0) goto label_6;
	}
	{
	if ((frame[3].i) <= (frame[1].i)) goto label_6;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"String too long: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_bytearr;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_bytearr;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[3].i)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, ((frame[3].i) * (jint(2))));
	((arc_util_io_Reads *) NULL_CHECK(sp[0].o))->F_bytearr = (jref) sp[1].o;
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, ((frame[3].i) * (jint(2))));
	((arc_util_io_Reads *) NULL_CHECK(sp[0].o))->F_chararr = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(179);
	frame[4].i = (jint(0));
	LINE_NUMBER(180);
	frame[5].i = (jint(0));
	LINE_NUMBER(181);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_bytearr;
	((func_java_io_DataInput_readFully_Array1_byte_int_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	}
label_12:;
	{
	LINE_NUMBER(184);
	if ((frame[4].i) >= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_bytearr;
	frame[6].i = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i))) & (255));
	LINE_NUMBER(186);
	if ((frame[6].i) <= (127)) goto label_16;
	}
	LINE_NUMBER(187);
	goto label_13;
label_16:;
	{
	LINE_NUMBER(190);
	INST_IINC(4, 1);
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_chararr;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((frame[6].i)));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(194);
	if ((frame[4].i) >= (frame[3].i)) goto label_19;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_bytearr;
	frame[6].i = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[4].i))) & (255));
	LINE_NUMBER(197);
	switch(((frame[6].i) >> (jint(4)))) {
		case 0: goto label_22;
		case 1: goto label_22;
		case 2: goto label_22;
		case 3: goto label_22;
		case 4: goto label_22;
		case 5: goto label_22;
		case 6: goto label_22;
		case 7: goto label_22;
		case 8: goto label_23;
		case 9: goto label_23;
		case 10: goto label_23;
		case 11: goto label_23;
		case 12: goto label_24;
		case 13: goto label_24;
		case 14: goto label_25;
		default: goto label_23;
	}
	}
label_22:;
	{
	LINE_NUMBER(206);
	INST_IINC(4, 1);
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_chararr;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((frame[6].i)));
	LINE_NUMBER(208);
	goto label_28;
	}
label_23:;
	{
	LINE_NUMBER(214);
	clinit_java_io_UTFDataFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UTFDataFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"malformed input around byte "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_UTFDataFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(217);
	INST_IINC(4, 2);
	LINE_NUMBER(218);
	if ((frame[4].i) <= (frame[3].i)) goto label_30;
	}
	{
	LINE_NUMBER(219);
	clinit_java_io_UTFDataFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UTFDataFormatException);
	init_java_io_UTFDataFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed input: partial character at end"_j))));
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_bytearr;
	frame[7].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((frame[4].i) - (jint(1)))));
	LINE_NUMBER(223);
	if (((frame[7].i) & (192)) == (128)) goto label_33;
	}
	{
	LINE_NUMBER(224);
	clinit_java_io_UTFDataFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UTFDataFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"malformed input around byte "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_UTFDataFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_33:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_chararr;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar(((((frame[6].i) & (31)) << (6)) | ((frame[7].i) & (63)))));
	LINE_NUMBER(228);
	goto label_28;
	}
label_25:;
	{
	LINE_NUMBER(230);
	INST_IINC(4, 3);
	LINE_NUMBER(231);
	if ((frame[4].i) <= (frame[3].i)) goto label_37;
	}
	{
	LINE_NUMBER(232);
	clinit_java_io_UTFDataFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UTFDataFormatException);
	init_java_io_UTFDataFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed input: partial character at end"_j))));
	throwException(ctx, sp[0].o);	}
label_37:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_bytearr;
	frame[7].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((frame[4].i) - (jint(2)))));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_bytearr;
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((frame[4].i) - (jint(1)))));
	LINE_NUMBER(237);
	if (((frame[7].i) & (192)) != (128)) goto label_41;
	}
	{
	if (((frame[8].i) & (192)) == (128)) goto label_42;
	}
label_41:;
	{
	LINE_NUMBER(238);
	clinit_java_io_UTFDataFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UTFDataFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"malformed input around byte "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[4].i) - (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_UTFDataFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_42:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_chararr;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((((((frame[6].i) & (15)) << (12)) | (((frame[7].i) & (63)) << (6))) | (((frame[8].i) & (63)) << (jint(0))))));
	}
label_28:;
	goto label_13;
label_19:;
	{
	LINE_NUMBER(245);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_chararr;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[5].i));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(246);
	frame[2].o = sp[0].o;
	LINE_NUMBER(247);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_arc_util_io_Reads_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Reads:close", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	if ((isInstance(ctx, sp[0].o, &class_java_io_Closeable)) == 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_util_io_Reads *) NULL_CHECK((frame[0].o)))->F_input;
	((func_java_io_Closeable_close) resolveInterfaceMethod(ctx, &class_java_io_Closeable, INDEX_java_io_Closeable_close, (checkCast(ctx, &class_java_io_Closeable, sp[0].o))))(ctx, (checkCast(ctx, &class_java_io_Closeable, sp[0].o)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(258);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(256);
	frame[1].o = sp[0].o;
	LINE_NUMBER(257);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(260);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_util_io_Reads;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field bytearr
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field chararr
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_util_io_Reads[] {
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
	(void *) M_arc_util_io_Reads_close,
	(void *) M_arc_util_io_Reads_checkEOF_R_int,
	(void *) M_arc_util_io_Reads_l_R_long,
	(void *) M_arc_util_io_Reads_i_R_int,
	(void *) M_arc_util_io_Reads_s_R_short,
	(void *) M_arc_util_io_Reads_us_R_int,
	(void *) M_arc_util_io_Reads_b_R_byte,
	(void *) M_arc_util_io_Reads_b_int_R_Array1_byte,
	(void *) M_arc_util_io_Reads_b_Array1_byte_R_Array1_byte,
	(void *) M_arc_util_io_Reads_b_Array1_byte_int_int_R_Array1_byte,
	(void *) M_arc_util_io_Reads_ub_R_int,
	(void *) M_arc_util_io_Reads_bool_R_boolean,
	(void *) M_arc_util_io_Reads_f_R_float,
	(void *) M_arc_util_io_Reads_d_R_double,
	(void *) M_arc_util_io_Reads_str_R_java_lang_String,
	(void *) M_arc_util_io_Reads_skip_int,
	(void *) M_arc_util_io_Reads_str_int_R_java_lang_String,
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
	{ "checkEOF", "()I" },
	{ "l", "()J" },
	{ "i", "()I" },
	{ "s", "()S" },
	{ "us", "()I" },
	{ "b", "()B" },
	{ "b", "(I)[B" },
	{ "b", "([B)[B" },
	{ "b", "([BII)[B" },
	{ "ub", "()I" },
	{ "bool", "()Z" },
	{ "f", "()F" },
	{ "d", "()D" },
	{ "str", "()Ljava/lang/String;" },
	{ "skip", "(I)V" },
	{ "str", "(I)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_io_Closeable, };

static FieldMetadata fields[] {
	{ "bytearr", getArrayClass(&class_byte, 1), offsetof(arc_util_io_Reads, F_bytearr), "[B", 2 },
	{ "chararr", getArrayClass(&class_char, 1), offsetof(arc_util_io_Reads, F_chararr), "[C", 2 },
	{ "input", &class_java_io_DataInput, offsetof(arc_util_io_Reads, F_input), "Ljava/io/DataInput;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_Reads_java_io_DataInput, 0, "(Ljava/io/DataInput;)V", 1 },
	{ "get", (intptr_t) SM_arc_util_io_Reads_get_java_io_DataInput_R_arc_util_io_Reads, 0, "(Ljava/io/DataInput;)Larc/util/io/Reads;", 131081 },
	{ "checkEOF", (intptr_t) M_arc_util_io_Reads_checkEOF_R_int, VTABLE_arc_util_io_Reads_checkEOF_R_int, "()I", 1 },
	{ "l", (intptr_t) M_arc_util_io_Reads_l_R_long, VTABLE_arc_util_io_Reads_l_R_long, "()J", 1 },
	{ "i", (intptr_t) M_arc_util_io_Reads_i_R_int, VTABLE_arc_util_io_Reads_i_R_int, "()I", 1 },
	{ "s", (intptr_t) M_arc_util_io_Reads_s_R_short, VTABLE_arc_util_io_Reads_s_R_short, "()S", 1 },
	{ "us", (intptr_t) M_arc_util_io_Reads_us_R_int, VTABLE_arc_util_io_Reads_us_R_int, "()I", 1 },
	{ "b", (intptr_t) M_arc_util_io_Reads_b_R_byte, VTABLE_arc_util_io_Reads_b_R_byte, "()B", 1 },
	{ "b", (intptr_t) M_arc_util_io_Reads_b_int_R_Array1_byte, VTABLE_arc_util_io_Reads_b_int_R_Array1_byte, "(I)[B", 1 },
	{ "b", (intptr_t) M_arc_util_io_Reads_b_Array1_byte_R_Array1_byte, VTABLE_arc_util_io_Reads_b_Array1_byte_R_Array1_byte, "([B)[B", 1 },
	{ "b", (intptr_t) M_arc_util_io_Reads_b_Array1_byte_int_int_R_Array1_byte, VTABLE_arc_util_io_Reads_b_Array1_byte_int_int_R_Array1_byte, "([BII)[B", 1 },
	{ "ub", (intptr_t) M_arc_util_io_Reads_ub_R_int, VTABLE_arc_util_io_Reads_ub_R_int, "()I", 1 },
	{ "bool", (intptr_t) M_arc_util_io_Reads_bool_R_boolean, VTABLE_arc_util_io_Reads_bool_R_boolean, "()Z", 1 },
	{ "f", (intptr_t) M_arc_util_io_Reads_f_R_float, VTABLE_arc_util_io_Reads_f_R_float, "()F", 1 },
	{ "d", (intptr_t) M_arc_util_io_Reads_d_R_double, VTABLE_arc_util_io_Reads_d_R_double, "()D", 1 },
	{ "str", (intptr_t) M_arc_util_io_Reads_str_R_java_lang_String, VTABLE_arc_util_io_Reads_str_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "skip", (intptr_t) M_arc_util_io_Reads_skip_int, VTABLE_arc_util_io_Reads_skip_int, "(I)V", 1 },
	{ "str", (intptr_t) M_arc_util_io_Reads_str_int_R_java_lang_String, VTABLE_arc_util_io_Reads_str_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "close", (intptr_t) M_arc_util_io_Reads_close, VTABLE_arc_util_io_Reads_close, "()V", 1 },
};

Class class_arc_util_io_Reads{
		.nativeName = (intptr_t) "arc/util/io/Reads",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_io_Reads),
		.classVtable = (intptr_t) vtable_arc_util_io_Reads,
		.staticInitializer = (intptr_t) clinit_arc_util_io_Reads,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_util_io_Reads,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_Reads = registerClass(&class_arc_util_io_Reads);

}
