#include "java/util/zip/Deflater.h"
#include "java/lang/Object.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/zip/Deflater.h"

extern "C" {

jint SF_java_util_zip_Deflater_DEFLATED;
jint SF_java_util_zip_Deflater_NO_COMPRESSION;
jint SF_java_util_zip_Deflater_BEST_SPEED;
jint SF_java_util_zip_Deflater_BEST_COMPRESSION;
jint SF_java_util_zip_Deflater_DEFAULT_COMPRESSION;
jint SF_java_util_zip_Deflater_FILTERED;
jint SF_java_util_zip_Deflater_HUFFMAN_ONLY;
jint SF_java_util_zip_Deflater_DEFAULT_STRATEGY;
jint SF_java_util_zip_Deflater_NO_FLUSH;
jint SF_java_util_zip_Deflater_SYNC_FLUSH;
jint SF_java_util_zip_Deflater_FULL_FLUSH;

void mark_java_util_zip_Deflater(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_Deflater *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void clinit_java_util_zip_Deflater(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_zip_Deflater_DEFLATED = jint(8);
	SF_java_util_zip_Deflater_NO_COMPRESSION = jint(0);
	SF_java_util_zip_Deflater_BEST_SPEED = jint(1);
	SF_java_util_zip_Deflater_BEST_COMPRESSION = jint(9);
	SF_java_util_zip_Deflater_DEFAULT_COMPRESSION = jint(-1);
	SF_java_util_zip_Deflater_FILTERED = jint(1);
	SF_java_util_zip_Deflater_HUFFMAN_ONLY = jint(2);
	SF_java_util_zip_Deflater_DEFAULT_STRATEGY = jint(0);
	SF_java_util_zip_Deflater_NO_FLUSH = jint(0);
	SF_java_util_zip_Deflater_SYNC_FLUSH = jint(2);
	SF_java_util_zip_Deflater_FULL_FLUSH = jint(3);
}

void init_java_util_zip_Deflater_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_Deflater(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(162);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(0)));
	((java_util_zip_Deflater *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(163);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_level = (frame[1].i);
	LINE_NUMBER(164);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_strategy = (jint(0));
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_util_zip_Deflater_init_int_int_boolean_R_long(ctx, (frame[1].i), (jint(0)), (frame[2].i));
	((java_util_zip_Deflater *) NULL_CHECK(sp[0].o))->F_address = temp0;
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_Deflater_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_Deflater(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(174);
	init_java_util_zip_Deflater_int_boolean(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_Deflater(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_Deflater(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(182);
	init_java_util_zip_Deflater_int_boolean(ctx, (frame[0].o), (jint(-1)), (jint(0)));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_setInput_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:setInput", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(194);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(195);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(197);
	if ((frame[2].i) < 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	if ((frame[2].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[3].i))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(198);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(200);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[1].o);
	LINE_NUMBER(201);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_off = (frame[2].i);
	LINE_NUMBER(202);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_len = (frame[3].i);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_setInput_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:setInput", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(212);
	((func_java_util_zip_Deflater_setInput_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Deflater_setInput_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_setDictionary_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:setDictionary", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(227);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_setDictionary_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:setDictionary", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	((func_java_util_zip_Deflater_setDictionary_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Deflater_setDictionary_Array1_byte_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_setStrategy_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:setStrategy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(266);
	switch((frame[1].i)) {
		case 0: goto label_1;
		case 1: goto label_1;
		case 2: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	LINE_NUMBER(270);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(272);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(274);
	if (((jint)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_strategy) == (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(275);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_strategy = (frame[1].i);
	LINE_NUMBER(276);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_setParams = (jint(1));
	}
label_4:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_setLevel_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:setLevel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(292);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) <= (9)) goto label_2;
	}
label_1:;
	{
	if ((frame[1].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(293);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid compression level"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(295);
	if (((jint)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_level) == (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(296);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_level = (frame[1].i);
	LINE_NUMBER(297);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_setParams = (jint(1));
	}
label_4:;
	LINE_NUMBER(299);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_zip_Deflater_needsInput_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:needsInput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	if (((jint)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_len) > 0) goto label_1;
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

void M_java_util_zip_Deflater_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:finish", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_finish = (jint(1));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_zip_Deflater_finished_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:finished", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return ((jint)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_finished);
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:deflate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(347);
	jint temp0 = (jint)((func_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Deflater_deflate_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:deflate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	jint temp0 = (jint)((func_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:deflate", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(414);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(415);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(417);
	if ((frame[2].i) < 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	if ((frame[2].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[3].i))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(418);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(420);
	M_java_util_zip_Deflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(421);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	if ((frame[4].i) == (jint(2))) goto label_6;
	}
	{
	if ((frame[4].i) != (jint(3))) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(422);
	frame[5].i = ((jint)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_len);
	LINE_NUMBER(423);
	jint temp0 = (jint)M_java_util_zip_Deflater_deflateBytes_long_Array1_byte_int_int_int_R_int(ctx, (frame[0].o), ((jlong)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i));
	frame[6].i = temp0;
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	((java_util_zip_Deflater *) NULL_CHECK(sp[0].o))->F_bytesWritten = (((jlong)((java_util_zip_Deflater *) NULL_CHECK(sp[0].o))->F_bytesWritten) + (jlong((frame[6].i))));
	LINE_NUMBER(425);
	sp[0].o = frame[0].o;
	((java_util_zip_Deflater *) NULL_CHECK(sp[0].o))->F_bytesRead = (((jlong)((java_util_zip_Deflater *) NULL_CHECK(sp[0].o))->F_bytesRead) + (jlong(((frame[5].i) - ((jint)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_len)))));
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_7:;
	{
	LINE_NUMBER(428);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Deflater_getAdler_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:getAdler", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	M_java_util_zip_Deflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(437);
	jint temp0 = (jint)SM_java_util_zip_Deflater_getAdler_long_R_int(ctx, ((jlong)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Deflater_getTotalIn_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:getTotalIn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(450);
	jlong temp0 = (jlong)((func_java_util_zip_Deflater_getBytesRead_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Deflater_getBytesRead_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_Deflater_getBytesRead_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:getBytesRead", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	M_java_util_zip_Deflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return ((jlong)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_bytesRead);
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_Deflater_getTotalOut_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:getTotalOut", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(474);
	jlong temp0 = (jlong)((func_java_util_zip_Deflater_getBytesWritten_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Deflater_getBytesWritten_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_Deflater_getBytesWritten_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:getBytesWritten", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(484);
	M_java_util_zip_Deflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return ((jlong)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_bytesWritten);
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:reset", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(493);
	M_java_util_zip_Deflater_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(494);
	SM_java_util_zip_Deflater_reset_long(ctx, ((jlong)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(495);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_finish = (jint(0));
	LINE_NUMBER(496);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_finished = (jint(0));
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_util_zip_Deflater *) NULL_CHECK(sp[1].o))->F_len = temp0;
	((java_util_zip_Deflater *) NULL_CHECK(sp[0].o))->F_off = temp0;
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jlong temp3 = jlong(0);
	((java_util_zip_Deflater *) NULL_CHECK(sp[1].o))->F_bytesWritten = temp3;
	((java_util_zip_Deflater *) NULL_CHECK(sp[0].o))->F_bytesRead = temp3;
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:end", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(509);
	if ((longCompare(((jlong)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_address), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(510);
	SM_java_util_zip_Deflater_end_long(ctx, ((jlong)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(511);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_address = (jlong(0));
	LINE_NUMBER(512);
	((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(514);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_finalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:finalize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(520);
	((func_java_util_zip_Deflater_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_Deflater_end])(ctx, (frame[0].o));
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_Deflater_ensureOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/Deflater:ensureOpen", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(524);
	if ((longCompare(((jlong)((java_util_zip_Deflater *) NULL_CHECK((frame[0].o)))->F_address), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(525);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Deflater has been closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(526);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_zip_Deflater[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_util_zip_Deflater_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_zip_Deflater_setInput_Array1_byte_int_int,
	(void *) M_java_util_zip_Deflater_setInput_Array1_byte,
	(void *) M_java_util_zip_Deflater_setDictionary_Array1_byte_int_int,
	(void *) M_java_util_zip_Deflater_setDictionary_Array1_byte,
	(void *) M_java_util_zip_Deflater_setStrategy_int,
	(void *) M_java_util_zip_Deflater_setLevel_int,
	(void *) M_java_util_zip_Deflater_needsInput_R_boolean,
	(void *) M_java_util_zip_Deflater_finish,
	(void *) M_java_util_zip_Deflater_finished_R_boolean,
	(void *) M_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int,
	(void *) M_java_util_zip_Deflater_deflate_Array1_byte_R_int,
	(void *) M_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int,
	(void *) M_java_util_zip_Deflater_getAdler_R_int,
	(void *) M_java_util_zip_Deflater_getTotalIn_R_int,
	(void *) M_java_util_zip_Deflater_getBytesRead_R_long,
	(void *) M_java_util_zip_Deflater_getTotalOut_R_int,
	(void *) M_java_util_zip_Deflater_getBytesWritten_R_long,
	(void *) M_java_util_zip_Deflater_reset,
	(void *) M_java_util_zip_Deflater_end,
	(void *) M_java_util_zip_Deflater_ensureOpen,
	(void *) M_java_util_zip_Deflater_deflateBytes_long_Array1_byte_int_int_int_R_int,
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
	{ "setStrategy", "(I)V" },
	{ "setLevel", "(I)V" },
	{ "needsInput", "()Z" },
	{ "finish", "()V" },
	{ "finished", "()Z" },
	{ "deflate", "([BII)I" },
	{ "deflate", "([B)I" },
	{ "deflate", "([BIII)I" },
	{ "getAdler", "()I" },
	{ "getTotalIn", "()I" },
	{ "getBytesRead", "()J" },
	{ "getTotalOut", "()I" },
	{ "getBytesWritten", "()J" },
	{ "reset", "()V" },
	{ "end", "()V" },
	{ "ensureOpen", "()V" },
	{ "deflateBytes", "(J[BIII)I" },
};

static FieldMetadata fields[] {
	{ "address", &class_long, offsetof(java_util_zip_Deflater, F_address), "J", 2 },
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_util_zip_Deflater, F_buf), "[B", 2 },
	{ "off", &class_int, offsetof(java_util_zip_Deflater, F_off), "I", 2 },
	{ "len", &class_int, offsetof(java_util_zip_Deflater, F_len), "I", 2 },
	{ "level", &class_int, offsetof(java_util_zip_Deflater, F_level), "I", 2 },
	{ "strategy", &class_int, offsetof(java_util_zip_Deflater, F_strategy), "I", 2 },
	{ "setParams", &class_boolean, offsetof(java_util_zip_Deflater, F_setParams), "Z", 2 },
	{ "finish", &class_boolean, offsetof(java_util_zip_Deflater, F_finish), "Z", 2 },
	{ "finished", &class_boolean, offsetof(java_util_zip_Deflater, F_finished), "Z", 2 },
	{ "bytesRead", &class_long, offsetof(java_util_zip_Deflater, F_bytesRead), "J", 2 },
	{ "bytesWritten", &class_long, offsetof(java_util_zip_Deflater, F_bytesWritten), "J", 2 },
	{ "DEFLATED", &class_int, (intptr_t) &SF_java_util_zip_Deflater_DEFLATED, "I", 25 },
	{ "NO_COMPRESSION", &class_int, (intptr_t) &SF_java_util_zip_Deflater_NO_COMPRESSION, "I", 25 },
	{ "BEST_SPEED", &class_int, (intptr_t) &SF_java_util_zip_Deflater_BEST_SPEED, "I", 25 },
	{ "BEST_COMPRESSION", &class_int, (intptr_t) &SF_java_util_zip_Deflater_BEST_COMPRESSION, "I", 25 },
	{ "DEFAULT_COMPRESSION", &class_int, (intptr_t) &SF_java_util_zip_Deflater_DEFAULT_COMPRESSION, "I", 25 },
	{ "FILTERED", &class_int, (intptr_t) &SF_java_util_zip_Deflater_FILTERED, "I", 25 },
	{ "HUFFMAN_ONLY", &class_int, (intptr_t) &SF_java_util_zip_Deflater_HUFFMAN_ONLY, "I", 25 },
	{ "DEFAULT_STRATEGY", &class_int, (intptr_t) &SF_java_util_zip_Deflater_DEFAULT_STRATEGY, "I", 25 },
	{ "NO_FLUSH", &class_int, (intptr_t) &SF_java_util_zip_Deflater_NO_FLUSH, "I", 25 },
	{ "SYNC_FLUSH", &class_int, (intptr_t) &SF_java_util_zip_Deflater_SYNC_FLUSH, "I", 25 },
	{ "FULL_FLUSH", &class_int, (intptr_t) &SF_java_util_zip_Deflater_FULL_FLUSH, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_Deflater_int_boolean, 0, "(IZ)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_Deflater_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_Deflater, 0, "()V", 1 },
	{ "setInput", (intptr_t) M_java_util_zip_Deflater_setInput_Array1_byte_int_int, VTABLE_java_util_zip_Deflater_setInput_Array1_byte_int_int, "([BII)V", 1 },
	{ "setInput", (intptr_t) M_java_util_zip_Deflater_setInput_Array1_byte, VTABLE_java_util_zip_Deflater_setInput_Array1_byte, "([B)V", 1 },
	{ "setDictionary", (intptr_t) M_java_util_zip_Deflater_setDictionary_Array1_byte_int_int, VTABLE_java_util_zip_Deflater_setDictionary_Array1_byte_int_int, "([BII)V", 1 },
	{ "setDictionary", (intptr_t) M_java_util_zip_Deflater_setDictionary_Array1_byte, VTABLE_java_util_zip_Deflater_setDictionary_Array1_byte, "([B)V", 1 },
	{ "setStrategy", (intptr_t) M_java_util_zip_Deflater_setStrategy_int, VTABLE_java_util_zip_Deflater_setStrategy_int, "(I)V", 1 },
	{ "setLevel", (intptr_t) M_java_util_zip_Deflater_setLevel_int, VTABLE_java_util_zip_Deflater_setLevel_int, "(I)V", 1 },
	{ "needsInput", (intptr_t) M_java_util_zip_Deflater_needsInput_R_boolean, VTABLE_java_util_zip_Deflater_needsInput_R_boolean, "()Z", 1 },
	{ "finish", (intptr_t) M_java_util_zip_Deflater_finish, VTABLE_java_util_zip_Deflater_finish, "()V", 1 },
	{ "finished", (intptr_t) M_java_util_zip_Deflater_finished_R_boolean, VTABLE_java_util_zip_Deflater_finished_R_boolean, "()Z", 1 },
	{ "deflate", (intptr_t) M_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int, VTABLE_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "deflate", (intptr_t) M_java_util_zip_Deflater_deflate_Array1_byte_R_int, VTABLE_java_util_zip_Deflater_deflate_Array1_byte_R_int, "([B)I", 1 },
	{ "deflate", (intptr_t) M_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int, VTABLE_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int, "([BIII)I", 1 },
	{ "getAdler", (intptr_t) M_java_util_zip_Deflater_getAdler_R_int, VTABLE_java_util_zip_Deflater_getAdler_R_int, "()I", 1 },
	{ "getTotalIn", (intptr_t) M_java_util_zip_Deflater_getTotalIn_R_int, VTABLE_java_util_zip_Deflater_getTotalIn_R_int, "()I", 1 },
	{ "getBytesRead", (intptr_t) M_java_util_zip_Deflater_getBytesRead_R_long, VTABLE_java_util_zip_Deflater_getBytesRead_R_long, "()J", 1 },
	{ "getTotalOut", (intptr_t) M_java_util_zip_Deflater_getTotalOut_R_int, VTABLE_java_util_zip_Deflater_getTotalOut_R_int, "()I", 1 },
	{ "getBytesWritten", (intptr_t) M_java_util_zip_Deflater_getBytesWritten_R_long, VTABLE_java_util_zip_Deflater_getBytesWritten_R_long, "()J", 1 },
	{ "reset", (intptr_t) M_java_util_zip_Deflater_reset, VTABLE_java_util_zip_Deflater_reset, "()V", 1 },
	{ "end", (intptr_t) M_java_util_zip_Deflater_end, VTABLE_java_util_zip_Deflater_end, "()V", 1 },
	{ "finalize", (intptr_t) M_java_util_zip_Deflater_finalize, VTABLE_java_util_zip_Deflater_finalize, "()V", 4 },
	{ "ensureOpen", (intptr_t) M_java_util_zip_Deflater_ensureOpen, VTABLE_java_util_zip_Deflater_ensureOpen, "()V", 2 },
	{ "init", (intptr_t) SM_java_util_zip_Deflater_init_int_int_boolean_R_long, 0, "(IIZ)J", 266 },
	{ "deflateBytes", (intptr_t) M_java_util_zip_Deflater_deflateBytes_long_Array1_byte_int_int_int_R_int, VTABLE_java_util_zip_Deflater_deflateBytes_long_Array1_byte_int_int_int_R_int, "(J[BIII)I", 258 },
	{ "getAdler", (intptr_t) SM_java_util_zip_Deflater_getAdler_long_R_int, 0, "(J)I", 266 },
	{ "reset", (intptr_t) SM_java_util_zip_Deflater_reset_long, 0, "(J)V", 266 },
	{ "end", (intptr_t) SM_java_util_zip_Deflater_end_long, 0, "(J)V", 266 },
};

Class class_java_util_zip_Deflater{
		.nativeName = (intptr_t) "java/util/zip/Deflater",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_zip_Deflater),
		.classVtable = (intptr_t) vtable_java_util_zip_Deflater,
		.staticInitializer = (intptr_t) clinit_java_util_zip_Deflater,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_Deflater,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_Deflater = registerClass(&class_java_util_zip_Deflater);

}
