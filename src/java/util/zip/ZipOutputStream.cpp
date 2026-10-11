#include "java/util/zip/ZipOutputStream.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/charset/StandardCharsets.h"
#include "java/util/Vector.h"
#include "java/nio/charset/Charset.h"
#include "java/util/zip/ZipConstants.h"
#include "java/util/zip/ZipException.h"
#include "java/lang/String.h"
#include "java/lang/NullPointerException.h"
#include "java/io/IOException.h"
#include "java/util/HashSet.h"
#include "java/util/zip/CRC32.h"
#include "java/lang/Math.h"
#include "java/util/zip/ZipEntry.h"
#include "java/util/Iterator.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Long.h"
#include "java/util/zip/ZipOutputStream.h"
#include "java/util/zip/Deflater.h"
#include "java/io/OutputStream.h"
#include "java/lang/Object.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "java/util/zip/ZipOutputStream_XEntry.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/util/zip/ZipUtils.h"

extern "C" {

jint SF_java_util_zip_ZipOutputStream_STORED;
jint SF_java_util_zip_ZipOutputStream_DEFLATED;

void mark_java_util_zip_ZipOutputStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_ZipOutputStream *) object;
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_xentries)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xentries)->clazz)->markFunction)((jobject) self->F_xentries, mark, depth + 1);
	if (self->F_names)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_names)->clazz)->markFunction)((jobject) self->F_names, mark, depth + 1);
	if (self->F_crc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_crc)->clazz)->markFunction)((jobject) self->F_crc, mark, depth + 1);
	if (self->F_comment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comment)->clazz)->markFunction)((jobject) self->F_comment, mark, depth + 1);
}

void clinit_java_util_zip_ZipOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_zip_DeflaterOutputStream(ctx);
	SF_java_util_zip_ZipOutputStream_STORED = jint(0);
	SF_java_util_zip_ZipOutputStream_DEFLATED = jint(8);
}

jint SM_java_util_zip_ZipOutputStream_version_java_util_zip_ZipEntry_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:version", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipOutputStream(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(85);
	switch(((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_method)) {
		case 0: goto label_1;
		case 8: goto label_2;
		default: goto label_3;
	}
	}
label_2:;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (20);
	}
label_1:;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (10);
	}
label_3:;
	{
	LINE_NUMBER(88);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unsupported compression method"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_ensureOpen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:ensureOpen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	if (((jint)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_closed) == 0) goto label_1;
	}
	{
	LINE_NUMBER(97);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stream closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_zip_ZipOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_nio_charset_StandardCharsets(ctx);
	sp[2].o = (jobject)SF_java_nio_charset_StandardCharsets_UTF_8;
	init_java_util_zip_ZipOutputStream_java_io_OutputStream_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_ZipOutputStream_java_io_OutputStream_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_util_zip_Deflater(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_zip_Deflater);
	init_java_util_zip_Deflater_int_boolean(ctx, sp[2].o, (jint(-1)), (jint(1)));
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_java_util_Vector(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[1].o);
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_xentries = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_java_util_HashSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[1].o);
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_names = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_CRC32(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_CRC32);
	init_java_util_zip_CRC32(ctx, sp[1].o);
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_crc = (jref) sp[1].o;
	LINE_NUMBER(74);
	((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_written = (jlong(0));
	LINE_NUMBER(75);
	((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_locoff = (jlong(0));
	LINE_NUMBER(77);
	((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_method = (8);
	LINE_NUMBER(80);
	((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(0));
	LINE_NUMBER(134);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(135);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"charset is null"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(137);
	((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_usesDefaultDeflater = (jint(1));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_setComment_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:setComment", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_getBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_getBytes_R_Array1_byte])(ctx, (frame[1].o));
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_comment = (jref) sp[1].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_comment;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(65535))) goto label_1;
	}
	{
	LINE_NUMBER(150);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ZIP file comment too long."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_setMethod_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:setMethod", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(163);
	if ((frame[1].i) == (8)) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(164);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid compression method"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(166);
	((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_method = (frame[1].i);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_setLevel_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:setLevel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	((func_java_util_zip_Deflater_setLevel_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_setLevel_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:putNextEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	M_java_util_zip_ZipOutputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(192);
	((func_java_util_zip_ZipOutputStream_closeEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_closeEntry])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(194);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_xdostime), (jlong(-1ll)))) != 0) goto label_4;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((func_java_util_zip_ZipEntry_setTime_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipEntry_setTime_long])(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(199);
	if (((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_method) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(200);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_method = ((jint)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_method);
	}
label_6:;
	{
	LINE_NUMBER(203);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_flag = (jint(0));
	LINE_NUMBER(204);
	switch(((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_method)) {
		case 0: goto label_9;
		case 8: goto label_10;
		default: goto label_11;
	}
	}
label_10:;
	{
	LINE_NUMBER(208);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size), (jlong(-1ll)))) == 0) goto label_12;
	}
	{
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize), (jlong(-1ll)))) == 0) goto label_12;
	}
	{
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_crc), (jlong(-1ll)))) != 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(209);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_flag = (8);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(215);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size), (jlong(-1ll)))) != 0) goto label_14;
	}
	{
	LINE_NUMBER(216);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size = ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(217);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize), (jlong(-1ll)))) != 0) goto label_17;
	}
	{
	LINE_NUMBER(218);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize = ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(219);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize))) == 0) goto label_16;
	}
	{
	LINE_NUMBER(220);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"STORED entry where compressed != uncompressed size"_j))));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(223);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size), (jlong(-1ll)))) == 0) goto label_20;
	}
	{
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_crc), (jlong(-1ll)))) != 0) goto label_13;
	}
label_20:;
	{
	LINE_NUMBER(224);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"STORED entry missing size, compressed size, or crc-32"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(229);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unsupported compression method"_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_names;
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_name;
	jint temp0 = (jint)((func_java_util_HashSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_21;
	}
	{
	LINE_NUMBER(232);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"duplicate entry: "_j))));
	sp[2].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_ZipOutputStream$XEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_ZipOutputStream$XEntry);
	init_java_util_zip_ZipOutputStream$XEntry_java_util_zip_ZipEntry_long(ctx, sp[1].o, (frame[1].o), ((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_written));
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(237);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_xentries;
	sp[1].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_java_util_Vector_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_current;
	M_java_util_zip_ZipOutputStream_writeLOC_java_util_zip_ZipOutputStream$XEntry(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_closeEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:closeEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	M_java_util_zip_ZipOutputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(249);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream$XEntry *) NULL_CHECK(sp[0].o))->F_entry;
	frame[1].o = sp[0].o;
	LINE_NUMBER(251);
	switch(((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_method)) {
		case 0: goto label_5;
		case 8: goto label_6;
		default: goto label_7;
	}
	}
label_6:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	((func_java_util_zip_Deflater_finish) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finish])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jint temp0 = (jint)((func_java_util_zip_Deflater_finished_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_finished_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(255);
	((func_java_util_zip_ZipOutputStream_deflate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_deflate])(ctx, (frame[0].o));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(257);
	if ((((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_flag) & (8)) != 0) goto label_11;
	}
	{
	LINE_NUMBER(259);
	jlong temp0 = (jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size;
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jlong temp1 = (jlong)((func_java_util_zip_Deflater_getBytesRead_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_getBytesRead_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(260);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid entry size (expected "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" but got "_j))));
	sp[2].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	LINE_NUMBER(262);
	jlong temp0 = (jlong)((func_java_util_zip_Deflater_getBytesRead_R_long) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_zip_Deflater_getBytesRead_R_long])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" bytes)"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(264);
	jlong temp0 = (jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize;
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jlong temp1 = (jlong)((func_java_util_zip_Deflater_getBytesWritten_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_getBytesWritten_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(265);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid entry compressed size (expected "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" but got "_j))));
	sp[2].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	LINE_NUMBER(267);
	jlong temp0 = (jlong)((func_java_util_zip_Deflater_getBytesWritten_R_long) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_zip_Deflater_getBytesWritten_R_long])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" bytes)"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(269);
	jlong temp0 = (jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_crc;
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	jlong temp1 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(270);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid entry CRC-32 (expected 0x"_j))));
	jlong temp0 = (jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_crc;
	LINE_NUMBER(272);
	sp[2].o = (jobject)SM_java_lang_Long_toHexString_long_R_java_lang_String(ctx, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" but got 0x"_j))));
	sp[2].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	LINE_NUMBER(273);
	jlong temp1 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Long_toHexString_long_R_java_lang_String(ctx, temp1);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(276);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jlong temp0 = (jlong)((func_java_util_zip_Deflater_getBytesRead_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_zip_Deflater_getBytesRead_R_long])(ctx, sp[1].o);
	((java_util_zip_ZipEntry *) NULL_CHECK(sp[0].o))->F_size = temp0;
	LINE_NUMBER(277);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	jlong temp1 = (jlong)((func_java_util_zip_Deflater_getBytesWritten_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_zip_Deflater_getBytesWritten_R_long])(ctx, sp[1].o);
	((java_util_zip_ZipEntry *) NULL_CHECK(sp[0].o))->F_csize = temp1;
	LINE_NUMBER(278);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	jlong temp2 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, sp[1].o);
	((java_util_zip_ZipEntry *) NULL_CHECK(sp[0].o))->F_crc = temp2;
	LINE_NUMBER(279);
	M_java_util_zip_ZipOutputStream_writeEXT_java_util_zip_ZipEntry(ctx, (frame[0].o), (frame[1].o));
	}
label_19:;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((java_util_zip_DeflaterOutputStream *) NULL_CHECK((frame[0].o)))->F_def;
	((func_java_util_zip_Deflater_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_reset])(ctx, sp[0].o);
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written) + ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize));
	LINE_NUMBER(283);
	goto label_28;
	}
label_5:;
	{
	LINE_NUMBER(286);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size), (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_written) - ((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_locoff)))) == 0) goto label_29;
	}
	{
	LINE_NUMBER(287);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid entry size (expected "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" but got "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_written) - ((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_locoff)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" bytes)"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(291);
	jlong temp0 = (jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_crc;
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	jlong temp1 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) == 0) goto label_28;
	}
	{
	LINE_NUMBER(292);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid entry crc-32 (expected 0x"_j))));
	jlong temp0 = (jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_crc;
	LINE_NUMBER(294);
	sp[2].o = (jobject)SM_java_lang_Long_toHexString_long_R_java_lang_String(ctx, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" but got 0x"_j))));
	sp[2].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	LINE_NUMBER(295);
	jlong temp1 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Long_toHexString_long_R_java_lang_String(ctx, temp1);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(299);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid compression method"_j))));
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	((func_java_util_zip_CRC32_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_reset])(ctx, sp[0].o);
	LINE_NUMBER(302);
	((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	}
label_2:;
	LINE_NUMBER(304);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(318);
	M_java_util_zip_ZipOutputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(319);
	if ((frame[2].i) < 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	if ((frame[2].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[3].i))) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(320);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(321);
	if ((frame[3].i) != 0) goto label_4;
	}
	LINE_NUMBER(322);
	popStackFrame(ctx, self);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(326);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"no current ZIP entry"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream$XEntry *) NULL_CHECK(sp[0].o))->F_entry;
	frame[4].o = sp[0].o;
	LINE_NUMBER(329);
	switch(((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[4].o)))->F_method)) {
		case 0: goto label_9;
		case 8: goto label_10;
		default: goto label_11;
	}
	}
label_10:;
	{
	LINE_NUMBER(331);
	M_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(332);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jlong((frame[3].i))));
	LINE_NUMBER(335);
	if ((longCompare((((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_written) - ((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_locoff)), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[4].o)))->F_size))) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(336);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"attempt to write past end of STORED entry"_j))));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(340);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(342);
	clinit_java_util_zip_ZipException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipException);
	init_java_util_zip_ZipException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid compression method"_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_crc;
	((func_java_util_zip_CRC32_update_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_CRC32_update_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(345);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:finish", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(355);
	M_java_util_zip_ZipOutputStream_ensureOpen(ctx, (frame[0].o));
	LINE_NUMBER(356);
	if (((jint)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_finished) == 0) goto label_2;
	}
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(360);
	((func_java_util_zip_ZipOutputStream_closeEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_ZipOutputStream_closeEntry])(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(363);
	frame[1].l = ((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_written);
	LINE_NUMBER(364);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_xentries;
	sp[0].o = (jobject)((func_java_util_Vector_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_zip_ZipOutputStream$XEntry, sp[0].o));
	LINE_NUMBER(365);
	M_java_util_zip_ZipOutputStream_writeCEN_java_util_zip_ZipOutputStream$XEntry(ctx, (frame[0].o), (frame[4].o));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(366);
	M_java_util_zip_ZipOutputStream_writeEND_long_long(ctx, (frame[0].o), (frame[1].l), (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_written) - (frame[1].l)));
	LINE_NUMBER(367);
	((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_finished = (jint(1));
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	if (((jint)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_closed) != 0) goto label_1;
	}
	{
	LINE_NUMBER(377);
	M_java_util_zip_DeflaterOutputStream_close(ctx, (frame[0].o));
	LINE_NUMBER(378);
	((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_closed = (jint(1));
	}
label_1:;
	LINE_NUMBER(380);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeLOC_java_util_zip_ZipOutputStream$XEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeLOC", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream$XEntry *) NULL_CHECK((frame[1].o)))->F_entry;
	frame[2].o = sp[0].o;
	LINE_NUMBER(387);
	frame[3].i = ((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_flag);
	LINE_NUMBER(388);
	frame[4].i = (jint(0));
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_extra;
	jint temp0 = (jint)M_java_util_zip_ZipOutputStream_getExtraLen_Array1_byte_R_int(ctx, sp[0].o, sp[1].o);
	frame[5].i = temp0;
	LINE_NUMBER(391);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(67324752ll)));
	LINE_NUMBER(392);
	if (((frame[3].i) & (8)) != (8)) goto label_6;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_util_zip_ZipOutputStream_version_java_util_zip_ZipEntry_R_int(ctx, (frame[2].o));
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(394);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(395);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), ((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_method));
	LINE_NUMBER(396);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_xdostime));
	LINE_NUMBER(399);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(400);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(401);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(0)));
	goto label_14;
	}
label_6:;
	{
	LINE_NUMBER(403);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_csize), (jlong(4294967295ll)))) >= 0) goto label_15;
	}
	{
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_size), (jlong(4294967295ll)))) < 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(404);
	frame[4].i = (jint(1));
	LINE_NUMBER(405);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (45));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(407);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_util_zip_ZipOutputStream_version_java_util_zip_ZipEntry_R_int(ctx, (frame[2].o));
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, sp[0].o, temp0);
	}
label_18:;
	{
	LINE_NUMBER(409);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(410);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), ((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_method));
	LINE_NUMBER(411);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_xdostime));
	LINE_NUMBER(412);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_crc));
	LINE_NUMBER(413);
	if ((frame[4].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(414);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(4294967295ll)));
	LINE_NUMBER(415);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(4294967295ll)));
	LINE_NUMBER(416);
	INST_IINC(5, 20);
	goto label_14;
	}
label_23:;
	{
	LINE_NUMBER(418);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_csize));
	LINE_NUMBER(419);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_size));
	}
label_14:;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_R_Array1_byte])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(423);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	LINE_NUMBER(425);
	frame[7].i = (jint(0));
	LINE_NUMBER(426);
	frame[8].i = (jint(0));
	LINE_NUMBER(427);
	frame[9].l = (jlong(-1ll));
	LINE_NUMBER(428);
	frame[11].l = (jlong(-1ll));
	LINE_NUMBER(429);
	frame[13].l = (jlong(-1ll));
	LINE_NUMBER(445);
	if ((frame[8].i) == 0) goto label_35;
	}
	{
	LINE_NUMBER(447);
	if ((longCompare((frame[9].l), (jlong(2147483647ll)))) > 0) goto label_37;
	}
	{
	if ((longCompare((frame[11].l), (jlong(2147483647ll)))) > 0) goto label_37;
	}
	{
	if ((longCompare((frame[13].l), (jlong(2147483647ll)))) <= 0) goto label_38;
	}
label_37:;
	{
	LINE_NUMBER(450);
	INST_IINC(5, 36);
	goto label_35;
	}
label_38:;
	{
	LINE_NUMBER(452);
	frame[5].i = ((frame[5].i) + ((frame[7].i) + (jint(5))));
	}
label_35:;
	{
	LINE_NUMBER(455);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(456);
	M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int(ctx, (frame[0].o), (frame[6].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	LINE_NUMBER(457);
	if ((frame[4].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(458);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(459);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (16));
	LINE_NUMBER(460);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_size));
	LINE_NUMBER(461);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_csize));
	}
label_41:;
	{
	LINE_NUMBER(463);
	if ((frame[8].i) == 0) goto label_46;
	}
	{
	LINE_NUMBER(464);
	if ((longCompare((frame[9].l), (jlong(2147483647ll)))) > 0) goto label_48;
	}
	{
	if ((longCompare((frame[11].l), (jlong(2147483647ll)))) > 0) goto label_48;
	}
	{
	if ((longCompare((frame[13].l), (jlong(2147483647ll)))) <= 0) goto label_49;
	}
label_48:;
	{
	LINE_NUMBER(467);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (10));
	LINE_NUMBER(468);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (32));
	LINE_NUMBER(469);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(470);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(471);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (24));
	goto label_46;
	}
label_49:;
	{
	LINE_NUMBER(479);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (21589));
	LINE_NUMBER(480);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), ((frame[7].i) + (jint(1))));
	LINE_NUMBER(481);
	M_java_util_zip_ZipOutputStream_writeByte_int(ctx, (frame[0].o), (frame[8].i));
	}
label_46:;
	{
	LINE_NUMBER(490);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_extra;
	M_java_util_zip_ZipOutputStream_writeExtra_Array1_byte(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(491);
	((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_locoff = ((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_written);
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeEXT_java_util_zip_ZipEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeEXT", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(498);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(134695760ll)));
	LINE_NUMBER(499);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_crc));
	LINE_NUMBER(500);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize), (jlong(4294967295ll)))) >= 0) goto label_3;
	}
	{
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size), (jlong(4294967295ll)))) < 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(501);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize));
	LINE_NUMBER(502);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(504);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize));
	LINE_NUMBER(505);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size));
	}
label_6:;
	LINE_NUMBER(507);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeCEN_java_util_zip_ZipOutputStream$XEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeCEN", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream$XEntry *) NULL_CHECK((frame[1].o)))->F_entry;
	frame[2].o = sp[0].o;
	LINE_NUMBER(515);
	frame[3].i = ((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_flag);
	LINE_NUMBER(516);
	jint temp0 = (jint)SM_java_util_zip_ZipOutputStream_version_java_util_zip_ZipEntry_R_int(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(517);
	frame[5].l = ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_csize);
	LINE_NUMBER(518);
	frame[7].l = ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_size);
	LINE_NUMBER(519);
	frame[9].l = ((jlong)((java_util_zip_ZipOutputStream$XEntry *) NULL_CHECK((frame[1].o)))->F_offset);
	LINE_NUMBER(520);
	frame[11].i = (jint(0));
	LINE_NUMBER(521);
	frame[12].i = (jint(0));
	LINE_NUMBER(523);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_csize), (jlong(4294967295ll)))) < 0) goto label_9;
	}
	{
	LINE_NUMBER(524);
	frame[5].l = (jlong(4294967295ll));
	LINE_NUMBER(525);
	INST_IINC(11, 8);
	LINE_NUMBER(526);
	frame[12].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(528);
	if ((longCompare(((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_size), (jlong(4294967295ll)))) < 0) goto label_13;
	}
	{
	LINE_NUMBER(529);
	frame[7].l = (jlong(4294967295ll));
	LINE_NUMBER(530);
	INST_IINC(11, 8);
	LINE_NUMBER(531);
	frame[12].i = (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(533);
	if ((longCompare(((jlong)((java_util_zip_ZipOutputStream$XEntry *) NULL_CHECK((frame[1].o)))->F_offset), (jlong(4294967295ll)))) < 0) goto label_17;
	}
	{
	LINE_NUMBER(534);
	frame[9].l = (jlong(4294967295ll));
	LINE_NUMBER(535);
	INST_IINC(11, 8);
	LINE_NUMBER(536);
	frame[12].i = (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(538);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(33639248ll)));
	LINE_NUMBER(539);
	if ((frame[12].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(540);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (45));
	LINE_NUMBER(541);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (45));
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(543);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(544);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[4].i));
	}
label_25:;
	{
	LINE_NUMBER(546);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(547);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), ((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_method));
	LINE_NUMBER(548);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_xdostime));
	LINE_NUMBER(549);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_crc));
	LINE_NUMBER(550);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (frame[5].l));
	LINE_NUMBER(551);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (frame[7].l));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_R_Array1_byte])(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(553);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[13].o)))->length));
	LINE_NUMBER(555);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_extra;
	jint temp0 = (jint)M_java_util_zip_ZipOutputStream_getExtraLen_Array1_byte_R_int(ctx, sp[0].o, sp[1].o);
	frame[14].i = temp0;
	LINE_NUMBER(556);
	if ((frame[12].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(557);
	frame[14].i = ((frame[14].i) + ((frame[11].i) + (jint(4))));
	}
label_36:;
	{
	LINE_NUMBER(561);
	frame[15].i = (jint(0));
	LINE_NUMBER(562);
	frame[16].l = (jlong(-1ll));
	LINE_NUMBER(563);
	frame[18].l = (jlong(-1ll));
	LINE_NUMBER(564);
	frame[20].l = (jlong(-1ll));
	LINE_NUMBER(577);
	if ((frame[15].i) == 0) goto label_42;
	}
	{
	LINE_NUMBER(579);
	if ((longCompare((frame[16].l), (jlong(2147483647ll)))) > 0) goto label_44;
	}
	{
	if ((longCompare((frame[18].l), (jlong(2147483647ll)))) > 0) goto label_44;
	}
	{
	if ((longCompare((frame[20].l), (jlong(2147483647ll)))) <= 0) goto label_45;
	}
label_44:;
	{
	LINE_NUMBER(582);
	INST_IINC(14, 36);
	goto label_42;
	}
label_45:;
	LINE_NUMBER(584);
	INST_IINC(14, 9);
label_42:;
	{
	LINE_NUMBER(587);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[14].i));
	LINE_NUMBER(589);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_comment;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_comment;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_R_Array1_byte])(ctx, sp[0].o);
	frame[22].o = sp[0].o;
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[22].o)))->length), (jint(65535)));
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, sp[0].o, temp0);
	goto label_50;
	}
label_47:;
	{
	LINE_NUMBER(593);
	frame[22].o = (jobject(nullptr));
	LINE_NUMBER(594);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(0)));
	}
label_50:;
	{
	LINE_NUMBER(596);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(597);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(598);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(599);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (frame[9].l));
	LINE_NUMBER(600);
	M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int(ctx, (frame[0].o), (frame[13].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[13].o)))->length));
	LINE_NUMBER(603);
	if ((frame[12].i) == 0) goto label_57;
	}
	{
	LINE_NUMBER(604);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(605);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[11].i));
	LINE_NUMBER(606);
	if ((longCompare((frame[7].l), (jlong(4294967295ll)))) != 0) goto label_61;
	}
	{
	LINE_NUMBER(607);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_size));
	}
label_61:;
	{
	LINE_NUMBER(608);
	if ((longCompare((frame[5].l), (jlong(4294967295ll)))) != 0) goto label_63;
	}
	{
	LINE_NUMBER(609);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_csize));
	}
label_63:;
	{
	LINE_NUMBER(610);
	if ((longCompare((frame[9].l), (jlong(4294967295ll)))) != 0) goto label_57;
	}
	{
	LINE_NUMBER(611);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), ((jlong)((java_util_zip_ZipOutputStream$XEntry *) NULL_CHECK((frame[1].o)))->F_offset));
	}
label_57:;
	{
	LINE_NUMBER(613);
	if ((frame[15].i) == 0) goto label_66;
	}
	{
	LINE_NUMBER(614);
	if ((longCompare((frame[16].l), (jlong(2147483647ll)))) > 0) goto label_68;
	}
	{
	if ((longCompare((frame[18].l), (jlong(2147483647ll)))) > 0) goto label_68;
	}
	{
	if ((longCompare((frame[20].l), (jlong(2147483647ll)))) <= 0) goto label_69;
	}
label_68:;
	{
	LINE_NUMBER(617);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (10));
	LINE_NUMBER(618);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (32));
	LINE_NUMBER(619);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(620);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(621);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (24));
	goto label_66;
	}
label_69:;
	{
	LINE_NUMBER(629);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (21589));
	}
label_66:;
	{
	LINE_NUMBER(640);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_extra;
	M_java_util_zip_ZipOutputStream_writeExtra_Array1_byte(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(641);
	if ((frame[22].o) == nullptr) goto label_75;
	}
	{
	LINE_NUMBER(642);
	sp[0].o = frame[0].o;
	sp[1].o = frame[22].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[22].o)))->length), (jint(65535)));
	M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	}
label_75:;
	LINE_NUMBER(644);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeEND_long_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeEND", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(650);
	frame[5].i = (jint(0));
	LINE_NUMBER(651);
	frame[6].l = (frame[3].l);
	LINE_NUMBER(652);
	frame[8].l = (frame[1].l);
	LINE_NUMBER(653);
	if ((longCompare((frame[6].l), (jlong(4294967295ll)))) < 0) goto label_4;
	}
	{
	LINE_NUMBER(654);
	frame[6].l = (jlong(4294967295ll));
	LINE_NUMBER(655);
	frame[5].i = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(657);
	if ((longCompare((frame[8].l), (jlong(4294967295ll)))) < 0) goto label_7;
	}
	{
	LINE_NUMBER(658);
	frame[8].l = (jlong(4294967295ll));
	LINE_NUMBER(659);
	frame[5].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_xentries;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	frame[10].i = temp0;
	LINE_NUMBER(662);
	if ((frame[10].i) < (jint(65535))) goto label_11;
	}
	{
	LINE_NUMBER(664);
	if ((frame[5].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(665);
	frame[10].i = (jint(65535));
	}
label_11:;
	{
	LINE_NUMBER(668);
	if ((frame[5].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(669);
	frame[11].l = ((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_written);
	LINE_NUMBER(671);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(101075792ll)));
	LINE_NUMBER(672);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), (jlong(44ll)));
	LINE_NUMBER(673);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (45));
	LINE_NUMBER(674);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (45));
	LINE_NUMBER(675);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(676);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(677);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_xentries;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[1].o);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, sp[0].o, (jlong(temp0)));
	LINE_NUMBER(678);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_xentries;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[1].o);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, sp[0].o, (jlong(temp1)));
	LINE_NUMBER(679);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), (frame[3].l));
	LINE_NUMBER(680);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(683);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(117853008ll)));
	LINE_NUMBER(684);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(685);
	M_java_util_zip_ZipOutputStream_writeLong_long(ctx, (frame[0].o), (frame[11].l));
	LINE_NUMBER(686);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(1)));
	}
label_14:;
	{
	LINE_NUMBER(688);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (jlong(101010256ll)));
	LINE_NUMBER(689);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(690);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(691);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[10].i));
	LINE_NUMBER(692);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (frame[10].i));
	LINE_NUMBER(693);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (frame[6].l));
	LINE_NUMBER(694);
	M_java_util_zip_ZipOutputStream_writeInt_long(ctx, (frame[0].o), (frame[8].l));
	LINE_NUMBER(695);
	sp[0].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_comment;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	LINE_NUMBER(696);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_comment;
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(697);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_comment;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((java_util_zip_ZipOutputStream *) NULL_CHECK((frame[0].o)))->F_comment;
	M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int(ctx, sp[0].o, sp[1].o, temp0, (((jarray) nullCheck(ctx, sp[2].o))->length));
	goto label_40;
	}
label_37:;
	{
	LINE_NUMBER(699);
	M_java_util_zip_ZipOutputStream_writeShort_int(ctx, (frame[0].o), (jint(0)));
	}
label_40:;
	LINE_NUMBER(701);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_zip_ZipOutputStream_getExtraLen_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:getExtraLen", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(707);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(708);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(709);
	frame[2].i = (jint(0));
	LINE_NUMBER(710);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(711);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(712);
	if (((frame[4].i) + (jint(4))) > (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(713);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(ctx, (frame[1].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(714);
	jint temp1 = (jint)SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(ctx, (frame[1].o), ((frame[4].i) + (jint(2))));
	frame[6].i = temp1;
	LINE_NUMBER(715);
	if ((frame[6].i) < 0) goto label_6;
	}
	{
	if ((((frame[4].i) + (jint(4))) + (frame[6].i)) <= (frame[3].i)) goto label_10;
	}
	LINE_NUMBER(716);
	goto label_6;
label_10:;
	{
	LINE_NUMBER(718);
	if ((frame[5].i) == (21589)) goto label_12;
	}
	{
	if ((frame[5].i) != (jint(1))) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(719);
	frame[2].i = ((frame[2].i) + ((frame[6].i) + (jint(4))));
	}
label_13:;
	{
	LINE_NUMBER(721);
	frame[4].i = ((frame[4].i) + ((frame[6].i) + (jint(4))));
	LINE_NUMBER(722);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(723);
	popStackFrame(ctx);
	return ((frame[3].i) - (frame[2].i));
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeExtra_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeExtra", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(733);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(734);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(735);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(736);
	if (((frame[3].i) + (jint(4))) > (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(737);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(ctx, (frame[1].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(738);
	jint temp1 = (jint)SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(ctx, (frame[1].o), ((frame[3].i) + (jint(2))));
	frame[5].i = temp1;
	LINE_NUMBER(739);
	if ((frame[5].i) < 0) goto label_9;
	}
	{
	if ((((frame[3].i) + (jint(4))) + (frame[5].i)) <= (frame[2].i)) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(740);
	M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].o), (frame[3].i), ((frame[2].i) - (frame[3].i)));
	LINE_NUMBER(741);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(743);
	if ((frame[4].i) == (21589)) goto label_12;
	}
	{
	if ((frame[4].i) == (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(744);
	M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].o), (frame[3].i), ((frame[5].i) + (jint(4))));
	}
label_12:;
	{
	LINE_NUMBER(746);
	frame[3].i = ((frame[3].i) + ((frame[5].i) + (jint(4))));
	LINE_NUMBER(747);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(748);
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(749);
	M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].o), (frame[3].i), ((frame[2].i) - (frame[3].i)));
	}
label_1:;
	LINE_NUMBER(752);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeByte_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeByte", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	frame[2].o = sp[0].o;
	LINE_NUMBER(759);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[2].o), ((frame[1].i) & (255)));
	LINE_NUMBER(760);
	sp[0].o = frame[0].o;
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jlong(1)));
	LINE_NUMBER(761);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeShort_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeShort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	frame[2].o = sp[0].o;
	LINE_NUMBER(768);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[2].o), ((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(0)))) & (255)));
	LINE_NUMBER(769);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[2].o), ((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (8))) & (255)));
	LINE_NUMBER(770);
	sp[0].o = frame[0].o;
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jlong(2ll)));
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeInt_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeInt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(777);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	frame[3].o = sp[0].o;
	LINE_NUMBER(778);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (jint(0)))) & (jlong(255ll))))));
	LINE_NUMBER(779);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (8))) & (jlong(255ll))))));
	LINE_NUMBER(780);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (16))) & (jlong(255ll))))));
	LINE_NUMBER(781);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (24))) & (jlong(255ll))))));
	LINE_NUMBER(782);
	sp[0].o = frame[0].o;
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jlong(4ll)));
	LINE_NUMBER(783);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeLong_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeLong", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(789);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	frame[3].o = sp[0].o;
	LINE_NUMBER(790);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (jint(0)))) & (jlong(255ll))))));
	LINE_NUMBER(791);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (8))) & (jlong(255ll))))));
	LINE_NUMBER(792);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (16))) & (jlong(255ll))))));
	LINE_NUMBER(793);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (24))) & (jlong(255ll))))));
	LINE_NUMBER(794);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32))) & (jlong(255ll))))));
	LINE_NUMBER(795);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (40))) & (jlong(255ll))))));
	LINE_NUMBER(796);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (48))) & (jlong(255ll))))));
	LINE_NUMBER(797);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[3].o), (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (56))) & (jlong(255ll))))));
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jlong(8ll)));
	LINE_NUMBER(799);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipOutputStream:writeBytes", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(806);
	sp[0].o = frame[0].o;
	((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written = (((jlong)((java_util_zip_ZipOutputStream *) NULL_CHECK(sp[0].o))->F_written) + (jlong((frame[3].i))));
	LINE_NUMBER(807);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_ZipOutputStream[] {
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
	(void *) M_java_util_zip_ZipOutputStream_close,
	(void *) M_java_util_zip_DeflaterOutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_util_zip_ZipOutputStream_write_Array1_byte_int_int,
	(void *) M_java_util_zip_DeflaterOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_util_zip_ZipOutputStream_finish,
	(void *) M_java_util_zip_DeflaterOutputStream_deflate,
	(void *) M_java_util_zip_ZipOutputStream_ensureOpen,
	(void *) M_java_util_zip_ZipOutputStream_setComment_java_lang_String,
	(void *) M_java_util_zip_ZipOutputStream_setMethod_int,
	(void *) M_java_util_zip_ZipOutputStream_setLevel_int,
	(void *) M_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry,
	(void *) M_java_util_zip_ZipOutputStream_closeEntry,
	(void *) M_java_util_zip_ZipOutputStream_writeLOC_java_util_zip_ZipOutputStream$XEntry,
	(void *) M_java_util_zip_ZipOutputStream_writeEXT_java_util_zip_ZipEntry,
	(void *) M_java_util_zip_ZipOutputStream_writeCEN_java_util_zip_ZipOutputStream$XEntry,
	(void *) M_java_util_zip_ZipOutputStream_writeEND_long_long,
	(void *) M_java_util_zip_ZipOutputStream_getExtraLen_Array1_byte_R_int,
	(void *) M_java_util_zip_ZipOutputStream_writeExtra_Array1_byte,
	(void *) M_java_util_zip_ZipOutputStream_writeByte_int,
	(void *) M_java_util_zip_ZipOutputStream_writeShort_int,
	(void *) M_java_util_zip_ZipOutputStream_writeInt_long,
	(void *) M_java_util_zip_ZipOutputStream_writeLong_long,
	(void *) M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int,
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
	{ "ensureOpen", "()V" },
	{ "setComment", "(Ljava/lang/String;)V" },
	{ "setMethod", "(I)V" },
	{ "setLevel", "(I)V" },
	{ "putNextEntry", "(Ljava/util/zip/ZipEntry;)V" },
	{ "closeEntry", "()V" },
	{ "writeLOC", "(Ljava/util/zip/ZipOutputStream$XEntry;)V" },
	{ "writeEXT", "(Ljava/util/zip/ZipEntry;)V" },
	{ "writeCEN", "(Ljava/util/zip/ZipOutputStream$XEntry;)V" },
	{ "writeEND", "(JJ)V" },
	{ "getExtraLen", "([B)I" },
	{ "writeExtra", "([B)V" },
	{ "writeByte", "(I)V" },
	{ "writeShort", "(I)V" },
	{ "writeInt", "(J)V" },
	{ "writeLong", "(J)V" },
	{ "writeBytes", "([BII)V" },
};

static jclass interfaces[] { &class_java_util_zip_ZipConstants, };

static jclass innerClasses[] {
	&class_java_util_zip_ZipOutputStream$XEntry,
};

static FieldMetadata fields[] {
	{ "current", &class_java_util_zip_ZipOutputStream$XEntry, offsetof(java_util_zip_ZipOutputStream, F_current), "Ljava/util/zip/ZipOutputStream$XEntry;", 2 },
	{ "xentries", &class_java_util_Vector, offsetof(java_util_zip_ZipOutputStream, F_xentries), "Ljava/util/Vector;", 2 },
	{ "names", &class_java_util_HashSet, offsetof(java_util_zip_ZipOutputStream, F_names), "Ljava/util/HashSet;", 2 },
	{ "crc", &class_java_util_zip_CRC32, offsetof(java_util_zip_ZipOutputStream, F_crc), "Ljava/util/zip/CRC32;", 2 },
	{ "written", &class_long, offsetof(java_util_zip_ZipOutputStream, F_written), "J", 2 },
	{ "locoff", &class_long, offsetof(java_util_zip_ZipOutputStream, F_locoff), "J", 2 },
	{ "comment", getArrayClass(&class_byte, 1), offsetof(java_util_zip_ZipOutputStream, F_comment), "[B", 2 },
	{ "method", &class_int, offsetof(java_util_zip_ZipOutputStream, F_method), "I", 2 },
	{ "finished", &class_boolean, offsetof(java_util_zip_ZipOutputStream, F_finished), "Z", 2 },
	{ "closed", &class_boolean, offsetof(java_util_zip_ZipOutputStream, F_closed), "Z", 2 },
	{ "STORED", &class_int, (intptr_t) &SF_java_util_zip_ZipOutputStream_STORED, "I", 25 },
	{ "DEFLATED", &class_int, (intptr_t) &SF_java_util_zip_ZipOutputStream_DEFLATED, "I", 25 },
};

static MethodMetadata methods[] {
	{ "version", (intptr_t) SM_java_util_zip_ZipOutputStream_version_java_util_zip_ZipEntry_R_int, 0, "(Ljava/util/zip/ZipEntry;)I", 10 },
	{ "ensureOpen", (intptr_t) M_java_util_zip_ZipOutputStream_ensureOpen, VTABLE_java_util_zip_ZipOutputStream_ensureOpen, "()V", 2 },
	{ "<init>", (intptr_t) init_java_util_zip_ZipOutputStream_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_ZipOutputStream_java_io_OutputStream_java_nio_charset_Charset, 0, "(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V", 1 },
	{ "setComment", (intptr_t) M_java_util_zip_ZipOutputStream_setComment_java_lang_String, VTABLE_java_util_zip_ZipOutputStream_setComment_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setMethod", (intptr_t) M_java_util_zip_ZipOutputStream_setMethod_int, VTABLE_java_util_zip_ZipOutputStream_setMethod_int, "(I)V", 1 },
	{ "setLevel", (intptr_t) M_java_util_zip_ZipOutputStream_setLevel_int, VTABLE_java_util_zip_ZipOutputStream_setLevel_int, "(I)V", 1 },
	{ "putNextEntry", (intptr_t) M_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry, VTABLE_java_util_zip_ZipOutputStream_putNextEntry_java_util_zip_ZipEntry, "(Ljava/util/zip/ZipEntry;)V", 1 },
	{ "closeEntry", (intptr_t) M_java_util_zip_ZipOutputStream_closeEntry, VTABLE_java_util_zip_ZipOutputStream_closeEntry, "()V", 1 },
	{ "write", (intptr_t) M_java_util_zip_ZipOutputStream_write_Array1_byte_int_int, VTABLE_java_util_zip_ZipOutputStream_write_Array1_byte_int_int, "([BII)V", 33 },
	{ "finish", (intptr_t) M_java_util_zip_ZipOutputStream_finish, VTABLE_java_util_zip_ZipOutputStream_finish, "()V", 1 },
	{ "close", (intptr_t) M_java_util_zip_ZipOutputStream_close, VTABLE_java_util_zip_ZipOutputStream_close, "()V", 1 },
	{ "writeLOC", (intptr_t) M_java_util_zip_ZipOutputStream_writeLOC_java_util_zip_ZipOutputStream$XEntry, VTABLE_java_util_zip_ZipOutputStream_writeLOC_java_util_zip_ZipOutputStream$XEntry, "(Ljava/util/zip/ZipOutputStream$XEntry;)V", 2 },
	{ "writeEXT", (intptr_t) M_java_util_zip_ZipOutputStream_writeEXT_java_util_zip_ZipEntry, VTABLE_java_util_zip_ZipOutputStream_writeEXT_java_util_zip_ZipEntry, "(Ljava/util/zip/ZipEntry;)V", 2 },
	{ "writeCEN", (intptr_t) M_java_util_zip_ZipOutputStream_writeCEN_java_util_zip_ZipOutputStream$XEntry, VTABLE_java_util_zip_ZipOutputStream_writeCEN_java_util_zip_ZipOutputStream$XEntry, "(Ljava/util/zip/ZipOutputStream$XEntry;)V", 2 },
	{ "writeEND", (intptr_t) M_java_util_zip_ZipOutputStream_writeEND_long_long, VTABLE_java_util_zip_ZipOutputStream_writeEND_long_long, "(JJ)V", 2 },
	{ "getExtraLen", (intptr_t) M_java_util_zip_ZipOutputStream_getExtraLen_Array1_byte_R_int, VTABLE_java_util_zip_ZipOutputStream_getExtraLen_Array1_byte_R_int, "([B)I", 2 },
	{ "writeExtra", (intptr_t) M_java_util_zip_ZipOutputStream_writeExtra_Array1_byte, VTABLE_java_util_zip_ZipOutputStream_writeExtra_Array1_byte, "([B)V", 2 },
	{ "writeByte", (intptr_t) M_java_util_zip_ZipOutputStream_writeByte_int, VTABLE_java_util_zip_ZipOutputStream_writeByte_int, "(I)V", 2 },
	{ "writeShort", (intptr_t) M_java_util_zip_ZipOutputStream_writeShort_int, VTABLE_java_util_zip_ZipOutputStream_writeShort_int, "(I)V", 2 },
	{ "writeInt", (intptr_t) M_java_util_zip_ZipOutputStream_writeInt_long, VTABLE_java_util_zip_ZipOutputStream_writeInt_long, "(J)V", 2 },
	{ "writeLong", (intptr_t) M_java_util_zip_ZipOutputStream_writeLong_long, VTABLE_java_util_zip_ZipOutputStream_writeLong_long, "(J)V", 2 },
	{ "writeBytes", (intptr_t) M_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int, VTABLE_java_util_zip_ZipOutputStream_writeBytes_Array1_byte_int_int, "([BII)V", 2 },
};

Class class_java_util_zip_ZipOutputStream{
		.nativeName = (intptr_t) "java/util/zip/ZipOutputStream",
		.parentClass = (intptr_t) &class_java_util_zip_DeflaterOutputStream,
		.size = sizeof(java_util_zip_ZipOutputStream),
		.classVtable = (intptr_t) vtable_java_util_zip_ZipOutputStream,
		.staticInitializer = (intptr_t) clinit_java_util_zip_ZipOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_ZipOutputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_ZipOutputStream = registerClass(&class_java_util_zip_ZipOutputStream);

}
