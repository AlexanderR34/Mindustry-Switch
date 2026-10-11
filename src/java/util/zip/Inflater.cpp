#include "java/util/zip/Inflater.h"
#include "java/lang/Object.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/NullPointerException.h"
#include "java/util/zip/Inflater.h"

extern "C" {

jobject SF_java_util_zip_Inflater_defaultBuf;

void mark_java_util_zip_Inflater(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_zip_Inflater_defaultBuf)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_zip_Inflater_defaultBuf)->clazz)->markFunction)((jobject) SF_java_util_zip_Inflater_defaultBuf, mark, depth + 1);
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
	auto self = (java_util_zip_Inflater *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void init_java_util_zip_Inflater_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_Inflater(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(96);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_Inflater(ctx);
	sp[1].o = (jobject)SF_java_util_zip_Inflater_defaultBuf;
	((java_util_zip_Inflater *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_util_zip_Inflater_init_boolean_R_long(ctx, (frame[1].i));
	((java_util_zip_Inflater *) NULL_CHECK(sp[0].o))->F_address = temp0;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_Inflater(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_Inflater(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(104);
	init_java_util_zip_Inflater_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Inflater_setInput_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:setInput", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(117);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(118);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(120);
	if ((frame[2].i) < 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	if ((frame[2].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[3].i))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(121);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(123);
	((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[1].o);
	LINE_NUMBER(124);
	((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_len = (frame[3].i);
	LINE_NUMBER(125);
	((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_off = (frame[2].i);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Inflater_setInput_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:setInput", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	((func_java_util_zip_Inflater_setInput_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Inflater_setInput_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Inflater_setDictionary_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:setDictionary", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(151);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_zip_Inflater_setDictionary_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:setDictionary", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	((func_java_util_zip_Inflater_setDictionary_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Inflater_setDictionary_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Inflater_getRemaining_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:getRemaining", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return ((jint)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_len);
	}

	popStackFrame(ctx);
}

jbool M_java_util_zip_Inflater_needsInput_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:needsInput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	if (((jint)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_len) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_zip_Inflater_needsDictionary_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:needsDictionary", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_zip_Inflater_finished_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:finished", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return ((jint)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_finished);
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:inflate", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(222);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(223);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(225);
	if ((frame[2].i) < 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	if ((frame[2].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[3].i))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(226);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(228);
	M_java_util_zip_Inflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(229);
	frame[4].i = ((jint)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_len);
	LINE_NUMBER(230);
	jint temp0 = (jint)M_java_util_zip_Inflater_inflateBytes_long_Array1_byte_int_int_R_int(ctx, (frame[0].o), ((jlong)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].o), (frame[2].i), (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	((java_util_zip_Inflater *) NULL_CHECK(sp[0].o))->F_bytesWritten = (((jlong)((java_util_zip_Inflater *) NULL_CHECK(sp[0].o))->F_bytesWritten) + (jlong((frame[5].i))));
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	((java_util_zip_Inflater *) NULL_CHECK(sp[0].o))->F_bytesRead = (((jlong)((java_util_zip_Inflater *) NULL_CHECK(sp[0].o))->F_bytesRead) + (jlong(((frame[4].i) - ((jint)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_len)))));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Inflater_inflate_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:inflate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	jint temp0 = (jint)((func_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Inflater_getAdler_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:getAdler", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	M_java_util_zip_Inflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(259);
	jint temp0 = (jint)SM_java_util_zip_Inflater_getAdler_long_R_int(ctx, ((jlong)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Inflater_getTotalIn_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:getTotalIn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	jlong temp0 = (jlong)((func_java_util_zip_Inflater_getBytesRead_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Inflater_getBytesRead_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_Inflater_getBytesRead_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:getBytesRead", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	M_java_util_zip_Inflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return ((jlong)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_bytesRead);
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Inflater_getTotalOut_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:getTotalOut", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(296);
	jlong temp0 = (jlong)((func_java_util_zip_Inflater_getBytesWritten_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Inflater_getBytesWritten_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_Inflater_getBytesWritten_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:getBytesWritten", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	M_java_util_zip_Inflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return ((jlong)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_bytesWritten);
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Inflater_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:reset", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(314);
	M_java_util_zip_Inflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(315);
	SM_java_util_zip_Inflater_reset_long(ctx, ((jlong)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_Inflater(ctx);
	sp[1].o = (jobject)SF_java_util_zip_Inflater_defaultBuf;
	((java_util_zip_Inflater *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(317);
	((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_finished = (jint(0));
	LINE_NUMBER(318);
	((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_len = (jint(0));
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jlong temp0 = jlong(0);
	((java_util_zip_Inflater *) NULL_CHECK(sp[1].o))->F_bytesWritten = temp0;
	((java_util_zip_Inflater *) NULL_CHECK(sp[0].o))->F_bytesRead = temp0;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Inflater_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:end", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	if ((longCompare(((jlong)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_address), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(331);
	SM_java_util_zip_Inflater_end_long(ctx, ((jlong)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(332);
	((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (jobject(nullptr));
	LINE_NUMBER(333);
	((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_address = (jlong(0));
	}
label_1:;
	LINE_NUMBER(335);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_Inflater_finalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:finalize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	((func_java_util_zip_Inflater_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Inflater_end])(ctx, (frame[0].o));
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Inflater_ensureOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:ensureOpen", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	if ((longCompare(((jlong)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_address), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(346);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Inflater has been closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(347);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_zip_Inflater_ended_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:ended", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	if ((longCompare(((jlong)((java_util_zip_Inflater *) NULL_CHECK((frame[0].o)))->F_address), (jlong(0)))) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_java_util_zip_Inflater(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Inflater:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_Inflater(ctx);
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(0)));
	clinit_java_util_zip_Inflater(ctx);
	SF_java_util_zip_Inflater_defaultBuf = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_Inflater[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_util_zip_Inflater_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_zip_Inflater_setInput_Array1_byte_int_int,
	(void *) M_java_util_zip_Inflater_setInput_Array1_byte,
	(void *) M_java_util_zip_Inflater_setDictionary_Array1_byte_int_int,
	(void *) M_java_util_zip_Inflater_setDictionary_Array1_byte,
	(void *) M_java_util_zip_Inflater_getRemaining_R_int,
	(void *) M_java_util_zip_Inflater_needsInput_R_boolean,
	(void *) M_java_util_zip_Inflater_needsDictionary_R_boolean,
	(void *) M_java_util_zip_Inflater_finished_R_boolean,
	(void *) M_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int,
	(void *) M_java_util_zip_Inflater_inflate_Array1_byte_R_int,
	(void *) M_java_util_zip_Inflater_getAdler_R_int,
	(void *) M_java_util_zip_Inflater_getTotalIn_R_int,
	(void *) M_java_util_zip_Inflater_getBytesRead_R_long,
	(void *) M_java_util_zip_Inflater_getTotalOut_R_int,
	(void *) M_java_util_zip_Inflater_getBytesWritten_R_long,
	(void *) M_java_util_zip_Inflater_reset,
	(void *) M_java_util_zip_Inflater_end,
	(void *) M_java_util_zip_Inflater_ensureOpen,
	(void *) M_java_util_zip_Inflater_ended_R_boolean,
	(void *) M_java_util_zip_Inflater_inflateBytes_long_Array1_byte_int_int_R_int,
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
	{ "setInput", "([BII)V" },
	{ "setInput", "([B)V" },
	{ "setDictionary", "([BII)V" },
	{ "setDictionary", "([B)V" },
	{ "getRemaining", "()I" },
	{ "needsInput", "()Z" },
	{ "needsDictionary", "()Z" },
	{ "finished", "()Z" },
	{ "inflate", "([BII)I" },
	{ "inflate", "([B)I" },
	{ "getAdler", "()I" },
	{ "getTotalIn", "()I" },
	{ "getBytesRead", "()J" },
	{ "getTotalOut", "()I" },
	{ "getBytesWritten", "()J" },
	{ "reset", "()V" },
	{ "end", "()V" },
	{ "ensureOpen", "()V" },
	{ "ended", "()Z" },
	{ "inflateBytes", "(J[BII)I" },
};

static FieldMetadata fields[] {
	{ "address", &class_long, offsetof(java_util_zip_Inflater, F_address), "J", 2 },
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_util_zip_Inflater, F_buf), "[B", 2 },
	{ "off", &class_int, offsetof(java_util_zip_Inflater, F_off), "I", 2 },
	{ "len", &class_int, offsetof(java_util_zip_Inflater, F_len), "I", 2 },
	{ "finished", &class_boolean, offsetof(java_util_zip_Inflater, F_finished), "Z", 2 },
	{ "bytesRead", &class_long, offsetof(java_util_zip_Inflater, F_bytesRead), "J", 2 },
	{ "bytesWritten", &class_long, offsetof(java_util_zip_Inflater, F_bytesWritten), "J", 2 },
	{ "defaultBuf", getArrayClass(&class_byte, 1), (intptr_t) &SF_java_util_zip_Inflater_defaultBuf, "[B", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_Inflater_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_Inflater, 0, "()V", 1 },
	{ "setInput", (intptr_t) M_java_util_zip_Inflater_setInput_Array1_byte_int_int, VTABLE_java_util_zip_Inflater_setInput_Array1_byte_int_int, "([BII)V", 1 },
	{ "setInput", (intptr_t) M_java_util_zip_Inflater_setInput_Array1_byte, VTABLE_java_util_zip_Inflater_setInput_Array1_byte, "([B)V", 1 },
	{ "setDictionary", (intptr_t) M_java_util_zip_Inflater_setDictionary_Array1_byte_int_int, VTABLE_java_util_zip_Inflater_setDictionary_Array1_byte_int_int, "([BII)V", 1 },
	{ "setDictionary", (intptr_t) M_java_util_zip_Inflater_setDictionary_Array1_byte, VTABLE_java_util_zip_Inflater_setDictionary_Array1_byte, "([B)V", 1 },
	{ "getRemaining", (intptr_t) M_java_util_zip_Inflater_getRemaining_R_int, VTABLE_java_util_zip_Inflater_getRemaining_R_int, "()I", 1 },
	{ "needsInput", (intptr_t) M_java_util_zip_Inflater_needsInput_R_boolean, VTABLE_java_util_zip_Inflater_needsInput_R_boolean, "()Z", 1 },
	{ "needsDictionary", (intptr_t) M_java_util_zip_Inflater_needsDictionary_R_boolean, VTABLE_java_util_zip_Inflater_needsDictionary_R_boolean, "()Z", 1 },
	{ "finished", (intptr_t) M_java_util_zip_Inflater_finished_R_boolean, VTABLE_java_util_zip_Inflater_finished_R_boolean, "()Z", 1 },
	{ "inflate", (intptr_t) M_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int, VTABLE_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "inflate", (intptr_t) M_java_util_zip_Inflater_inflate_Array1_byte_R_int, VTABLE_java_util_zip_Inflater_inflate_Array1_byte_R_int, "([B)I", 1 },
	{ "getAdler", (intptr_t) M_java_util_zip_Inflater_getAdler_R_int, VTABLE_java_util_zip_Inflater_getAdler_R_int, "()I", 1 },
	{ "getTotalIn", (intptr_t) M_java_util_zip_Inflater_getTotalIn_R_int, VTABLE_java_util_zip_Inflater_getTotalIn_R_int, "()I", 1 },
	{ "getBytesRead", (intptr_t) M_java_util_zip_Inflater_getBytesRead_R_long, VTABLE_java_util_zip_Inflater_getBytesRead_R_long, "()J", 1 },
	{ "getTotalOut", (intptr_t) M_java_util_zip_Inflater_getTotalOut_R_int, VTABLE_java_util_zip_Inflater_getTotalOut_R_int, "()I", 1 },
	{ "getBytesWritten", (intptr_t) M_java_util_zip_Inflater_getBytesWritten_R_long, VTABLE_java_util_zip_Inflater_getBytesWritten_R_long, "()J", 1 },
	{ "reset", (intptr_t) M_java_util_zip_Inflater_reset, VTABLE_java_util_zip_Inflater_reset, "()V", 1 },
	{ "end", (intptr_t) M_java_util_zip_Inflater_end, VTABLE_java_util_zip_Inflater_end, "()V", 1 },
	{ "finalize", (intptr_t) M_java_util_zip_Inflater_finalize, VTABLE_java_util_zip_Inflater_finalize, "()V", 4 },
	{ "ensureOpen", (intptr_t) M_java_util_zip_Inflater_ensureOpen, VTABLE_java_util_zip_Inflater_ensureOpen, "()V", 2 },
	{ "ended", (intptr_t) M_java_util_zip_Inflater_ended_R_boolean, VTABLE_java_util_zip_Inflater_ended_R_boolean, "()Z", 0 },
	{ "init", (intptr_t) SM_java_util_zip_Inflater_init_boolean_R_long, 0, "(Z)J", 266 },
	{ "inflateBytes", (intptr_t) M_java_util_zip_Inflater_inflateBytes_long_Array1_byte_int_int_R_int, VTABLE_java_util_zip_Inflater_inflateBytes_long_Array1_byte_int_int_R_int, "(J[BII)I", 258 },
	{ "getAdler", (intptr_t) SM_java_util_zip_Inflater_getAdler_long_R_int, 0, "(J)I", 266 },
	{ "reset", (intptr_t) SM_java_util_zip_Inflater_reset_long, 0, "(J)V", 266 },
	{ "end", (intptr_t) SM_java_util_zip_Inflater_end_long, 0, "(J)V", 266 },
	{ "<clinit>", (intptr_t) clinit_java_util_zip_Inflater, 0, "()V", 8 },
};

Class class_java_util_zip_Inflater{
		.nativeName = (intptr_t) "java/util/zip/Inflater",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_zip_Inflater),
		.classVtable = (intptr_t) vtable_java_util_zip_Inflater,
		.staticInitializer = (intptr_t) clinit_java_util_zip_Inflater,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_Inflater,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_Inflater = registerClass(&class_java_util_zip_Inflater);

}
