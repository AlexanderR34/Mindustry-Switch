#include "java/util/zip/DeflaterOutputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/IOException.h"
#include "java/io/FilterOutputStream.h"
#include "java/util/zip/Deflater.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_java_util_zip_DeflaterOutputStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_DeflaterOutputStream *) object;
	if (self->F_def)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_def)->clazz)->markFunction)((jobject) self->F_def, mark, depth + 1);
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void clinit_java_util_zip_DeflaterOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterOutputStream(ctx);
}

void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_DeflaterOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(81);
	init_java_io_FilterOutputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(56);
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(0));
	LINE_NUMBER(144);
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultDeflater = (jint(0));
	LINE_NUMBER(82);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_5;
label_4:;
	{
	LINE_NUMBER(83);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(84);
	if ((frame[3].i) > 0) goto label_6;
	}
	{
	LINE_NUMBER(85);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buffer size <= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(87);
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def = (jref) (frame[2].o);
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(89);
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_syncFlush = (frame[4].i);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_DeflaterOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(106);
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (jint(0)));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_DeflaterOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(126);
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (512), (frame[3].i));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_DeflaterOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(141);
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (512), (jint(0)));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_DeflaterOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_util_zip_Deflater(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_zip_Deflater);
	init_java_util_zip_Deflater(ctx, sp[2].o);
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (512), (frame[2].i));
	LINE_NUMBER(162);
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultDeflater = (jint(1));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_DeflaterOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(175);
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultDeflater = (jint(1));
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_DeflaterOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(186);
	ARRAY_ACCESS(jbyte, (frame[2].o), (jint(0))) = (jbyte(((frame[1].i) & (255))));
	LINE_NUMBER(187);
	((func_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int])(ctx, (frame[0].o), (frame[2].o), (jint(0)), (jint(1)));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp0 = (jint)((func_java_util_zip_Deflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(200);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"write beyond end of stream"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(202);
	if (((((frame[2].i) | (frame[3].i)) | ((frame[2].i) + (frame[3].i))) | ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - ((frame[2].i) + (frame[3].i)))) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(203);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(204);
	if ((frame[3].i) != 0) goto label_5;
	}
	LINE_NUMBER(205);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp0 = (jint)((func_java_util_zip_Deflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	((func_java_util_zip_Deflater_setInput_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_setInput_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	}
label_9:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp0 = (jint)((func_java_util_zip_Deflater_needsInput_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_needsInput_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(210);
	((func_java_util_zip_DeflaterOutputStream_deflate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_DeflaterOutputStream_deflate])(ctx, (frame[0].o));
	goto label_9;
	}
label_7:;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_DeflaterOutputStream_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:finish", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp0 = (jint)((func_java_util_zip_Deflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	((func_java_util_zip_Deflater_finish) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finish])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp0 = (jint)((func_java_util_zip_Deflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(225);
	((func_java_util_zip_DeflaterOutputStream_deflate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_DeflaterOutputStream_deflate])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	LINE_NUMBER(228);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_DeflaterOutputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	if (((jint)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_closed) != 0) goto label_1;
	}
	{
	LINE_NUMBER(237);
	((func_java_util_zip_DeflaterOutputStream_finish) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_DeflaterOutputStream_finish])(ctx, (frame[0].o));
	LINE_NUMBER(238);
	if (((jint)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultDeflater) == 0) goto label_4;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	((func_java_util_zip_Deflater_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_end])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(241);
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	}
label_1:;
	LINE_NUMBER(243);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_DeflaterOutputStream_deflate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:deflate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, (((jarray) nullCheck(ctx, sp[2].o))->length));
	frame[1].i = temp1;
	LINE_NUMBER(251);
	if ((frame[1].i) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[1].i));
	}
label_2:;
	LINE_NUMBER(254);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_DeflaterOutputStream_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/DeflaterOutputStream:flush", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	if (((jint)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_syncFlush) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp0 = (jint)((func_java_util_zip_Deflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(273);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp1 = (jint)((func_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, (((jarray) nullCheck(ctx, sp[2].o))->length), (jint(2)));
	frame[1].i = temp1;
	if (temp1 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[1].i));
	LINE_NUMBER(277);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	LINE_NUMBER(278);
	goto label_1;
label_1:;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_flush])(ctx, sp[0].o);
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_DeflaterOutputStream[] {
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
	(void *) M_java_util_zip_DeflaterOutputStream_write_int,
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
	{ "def", &class_java_util_zip_Deflater, offsetof(java_util_zip_DeflaterOutputStream, F_def), "Ljava/util/zip/Deflater;", 4 },
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_util_zip_DeflaterOutputStream, F_buf), "[B", 4 },
	{ "closed", &class_boolean, offsetof(java_util_zip_DeflaterOutputStream, F_closed), "Z", 2 },
	{ "syncFlush", &class_boolean, offsetof(java_util_zip_DeflaterOutputStream, F_syncFlush), "Z", 18 },
	{ "usesDefaultDeflater", &class_boolean, offsetof(java_util_zip_DeflaterOutputStream, F_usesDefaultDeflater), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int_boolean, 0, "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;IZ)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int, 0, "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_boolean, 0, "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;Z)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater, 0, "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_boolean, 0, "(Ljava/io/OutputStream;Z)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_DeflaterOutputStream_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "write", (intptr_t) M_java_util_zip_DeflaterOutputStream_write_int, VTABLE_java_util_zip_DeflaterOutputStream_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int, VTABLE_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int, "([BII)V", 1 },
	{ "finish", (intptr_t) M_java_util_zip_DeflaterOutputStream_finish, VTABLE_java_util_zip_DeflaterOutputStream_finish, "()V", 1 },
	{ "close", (intptr_t) M_java_util_zip_DeflaterOutputStream_close, VTABLE_java_util_zip_DeflaterOutputStream_close, "()V", 1 },
	{ "deflate", (intptr_t) M_java_util_zip_DeflaterOutputStream_deflate, VTABLE_java_util_zip_DeflaterOutputStream_deflate, "()V", 4 },
	{ "flush", (intptr_t) M_java_util_zip_DeflaterOutputStream_flush, VTABLE_java_util_zip_DeflaterOutputStream_flush, "()V", 1 },
};

Class class_java_util_zip_DeflaterOutputStream{
		.nativeName = (intptr_t) "java/util/zip/DeflaterOutputStream",
		.parentClass = (intptr_t) &class_java_io_FilterOutputStream,
		.size = sizeof(java_util_zip_DeflaterOutputStream),
		.classVtable = (intptr_t) vtable_java_util_zip_DeflaterOutputStream,
		.staticInitializer = (intptr_t) clinit_java_util_zip_DeflaterOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_DeflaterOutputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_DeflaterOutputStream = registerClass(&class_java_util_zip_DeflaterOutputStream);

}
