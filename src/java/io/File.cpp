#include "java/io/File.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "java/net/URL.h"
#include "java/util/ArrayList.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/lang/CharSequence.h"
#include "java/nio/file/Path.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/FileFilter.h"
#include "java/lang/NullPointerException.h"
#include "java/net/URI.h"
#include "java/io/FilenameFilter.h"
#include "java/io/File.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_java_io_File_pathSeparator;
jchar SF_java_io_File_pathSeparatorChar;
jobject SF_java_io_File_separator;
jchar SF_java_io_File_separatorChar;

void mark_java_io_File(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_io_File_pathSeparator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_io_File_pathSeparator)->clazz)->markFunction)((jobject) SF_java_io_File_pathSeparator, mark, depth + 1);
		if (SF_java_io_File_separator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_io_File_separator)->clazz)->markFunction)((jobject) SF_java_io_File_separator, mark, depth + 1);
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
	auto self = (java_io_File *) object;
	if (self->F_path)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_path)->clazz)->markFunction)((jobject) self->F_path, mark, depth + 1);
}

void clinit_java_io_File(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_io_File_pathSeparator = ((jobject) createStringLiteral(ctx, u8":"_j));
	SF_java_io_File_pathSeparatorChar = jint(58);
	SF_java_io_File_separator = ((jobject) createStringLiteral(ctx, u8"/"_j));
	SF_java_io_File_separatorChar = jint(47);
}

void init_java_io_File_java_io_File_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_File(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(48);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(49);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[1].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_io_File_normalizePath_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	((java_io_File *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)((java_io_File *) NULL_CHECK((frame[1].o)))->F_path;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)M_java_io_File_normalizePath_java_lang_String_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	((java_io_File *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_io_File_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_File(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(56);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(57);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_io_File_normalizePath_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	((java_io_File *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_normalizePath_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:normalizePath", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 < (jint(2))) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_ALOAD(1);
	goto label_3;
label_2:;
	{
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void init_java_io_File_java_net_URI(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_File(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(66);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_io_File_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_File(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	INST_ALOAD(2);
	goto label_2;
label_1:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"//"_j))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	init_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_canExecute_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:canExecute", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_canRead_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:canRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_canWrite_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:canWrite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_java_io_File_compareTo_java_io_File_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:compareTo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_createNewFile_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:createNewFile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:createTempFile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_File(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_io_File_createTempFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:createTempFile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_File(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.io.tmpdir"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(99);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(100);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"temp"_j)));
	}
label_2:;
	{
	LINE_NUMBER(101);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (frame[3].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(2);
label_5:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_io_File_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_File_isDirectory_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_8;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_io_File_mkdir_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_File_mkdir_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(104);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	jdouble temp0 = (jdouble)SM_java_lang_Math_random_R_double(ctx);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (jint((temp0 * (jdouble(2,147484e+09))))));
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8".tmp"_j));
	goto label_11;
label_10:;
	INST_ALOAD(1);
label_11:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(105);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[0].o, (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(106);
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[6].o)))->F_path;
	jint temp0 = (jint)SM_java_io_File_createFile_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void M_java_io_File_deleteOnExit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:deleteOnExit", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_io_File_getAbsoluteFile_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getAbsoluteFile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_getAbsolutePath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getAbsolutePath", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_getCanonicalPath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getCanonicalPath", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_getCanonicalFile_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getCanonicalFile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jlong M_java_io_File_getFreeSpace_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getFreeSpace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, sp[0].o, (47));
	frame[1].i = temp0;
	LINE_NUMBER(142);
	if ((frame[1].i) == (jint(-1))) goto label_2;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != (temp1 - (jint(1)))) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, ((frame[1].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_getParent_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getParent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, sp[0].o, (47));
	frame[1].i = temp0;
	LINE_NUMBER(152);
	if ((frame[1].i) != (jint(-1))) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp1 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, sp[1].o, (47));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	}
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_io_File_getParentFile_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getParentFile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_java_io_File_getParent_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_getParent_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(157);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(158);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_getPath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getPath", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_io_File_getTotalSpace_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getTotalSpace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jlong M_java_io_File_getUsableSpace_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:getUsableSpace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_isAbsolute_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:isAbsolute", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_isFile_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:isFile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)((func_java_io_File_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_isDirectory_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool M_java_io_File_isInvalid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:isInvalid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_listFiles_R_Array1_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:listFiles", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((func_java_io_File_list_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_list_R_Array1_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(200);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)createArray(ctx, &class_java_io_File, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(203);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[1].o, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(203);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_listFiles_java_io_FilenameFilter_R_Array1_java_io_File(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:listFiles", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(209);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_java_io_File_list_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_list_R_Array1_java_lang_String])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(211);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_java_io_FilenameFilter_accept_java_io_File_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_java_io_FilenameFilter, INDEX_java_io_FilenameFilter_accept_java_io_File_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o), (frame[6].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(213);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[7].o));
	}
label_6:;
	{
	LINE_NUMBER(210);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_io_File, (jint(0)));
	sp[0].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_io_File, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_listFiles_java_io_FileFilter_R_Array1_java_io_File(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:listFiles", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(219);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_io_File_list_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_list_R_Array1_java_lang_String])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(221);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(222);
	jint temp0 = (jint)((func_java_io_FileFilter_accept_java_io_File_R_boolean) resolveInterfaceMethod(ctx, &class_java_io_FileFilter, INDEX_java_io_FileFilter_accept_java_io_File_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[7].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(223);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[7].o));
	}
label_6:;
	{
	LINE_NUMBER(220);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(225);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_io_File, (jint(0)));
	sp[0].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_io_File, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_mkdirs_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:mkdirs", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	frame[1].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(234);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_io_File *) NULL_CHECK((frame[1].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(235);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_io_File_mkdir_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_mkdir_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_java_io_File_getParentFile_R_java_io_File) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_getParentFile_R_java_io_File])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_renameTo_java_io_File_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:renameTo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_setExecutable_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:setExecutable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_setExecutable_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:setExecutable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_setReadable_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:setReadable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_setReadable_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:setReadable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_setReadOnly_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:setReadOnly", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_setWritable_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:setWritable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_io_File_setWritable_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:setWritable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_toURI_R_java_net_URI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:toURI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_toURL_R_java_net_URL(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:toURL", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_toPath_R_java_nio_file_Path(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:toPath", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_io_File_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/File:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"File("_j))));
	sp[1].o = (jobject)((java_io_File *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_File[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_io_File_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_io_File_normalizePath_java_lang_String_R_java_lang_String,
	(void *) M_java_io_File_canExecute_R_boolean,
	(void *) M_java_io_File_canRead_R_boolean,
	(void *) M_java_io_File_canWrite_R_boolean,
	(void *) M_java_io_File_compareTo_java_io_File_R_int,
	(void *) M_java_io_File_createNewFile_R_boolean,
	(void *) M_java_io_File_delete_R_boolean,
	(void *) M_java_io_File_deleteOnExit,
	(void *) M_java_io_File_exists_R_boolean,
	(void *) M_java_io_File_getAbsoluteFile_R_java_io_File,
	(void *) M_java_io_File_getAbsolutePath_R_java_lang_String,
	(void *) M_java_io_File_getCanonicalPath_R_java_lang_String,
	(void *) M_java_io_File_getCanonicalFile_R_java_io_File,
	(void *) M_java_io_File_getFreeSpace_R_long,
	(void *) M_java_io_File_getName_R_java_lang_String,
	(void *) M_java_io_File_getParent_R_java_lang_String,
	(void *) M_java_io_File_getParentFile_R_java_io_File,
	(void *) M_java_io_File_getPath_R_java_lang_String,
	(void *) M_java_io_File_getTotalSpace_R_long,
	(void *) M_java_io_File_getUsableSpace_R_long,
	(void *) M_java_io_File_isAbsolute_R_boolean,
	(void *) M_java_io_File_isDirectory_R_boolean,
	(void *) M_java_io_File_isFile_R_boolean,
	(void *) M_java_io_File_isInvalid_R_boolean,
	(void *) M_java_io_File_isHidden_R_boolean,
	(void *) M_java_io_File_lastModified_R_long,
	(void *) M_java_io_File_length_R_long,
	(void *) M_java_io_File_list_R_Array1_java_lang_String,
	(void *) M_java_io_File_listFiles_R_Array1_java_io_File,
	(void *) M_java_io_File_listFiles_java_io_FilenameFilter_R_Array1_java_io_File,
	(void *) M_java_io_File_listFiles_java_io_FileFilter_R_Array1_java_io_File,
	(void *) M_java_io_File_mkdir_R_boolean,
	(void *) M_java_io_File_mkdirs_R_boolean,
	(void *) M_java_io_File_renameTo_java_io_File_R_boolean,
	(void *) M_java_io_File_setExecutable_boolean_R_boolean,
	(void *) M_java_io_File_setExecutable_boolean_boolean_R_boolean,
	(void *) M_java_io_File_setReadable_boolean_R_boolean,
	(void *) M_java_io_File_setReadable_boolean_boolean_R_boolean,
	(void *) M_java_io_File_setReadOnly_R_boolean,
	(void *) M_java_io_File_setWritable_boolean_R_boolean,
	(void *) M_java_io_File_setWritable_boolean_boolean_R_boolean,
	(void *) M_java_io_File_toURI_R_java_net_URI,
	(void *) M_java_io_File_toURL_R_java_net_URL,
	(void *) M_java_io_File_toPath_R_java_nio_file_Path,
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
	{ "normalizePath", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "canExecute", "()Z" },
	{ "canRead", "()Z" },
	{ "canWrite", "()Z" },
	{ "compareTo", "(Ljava/io/File;)I" },
	{ "createNewFile", "()Z" },
	{ "delete", "()Z" },
	{ "deleteOnExit", "()V" },
	{ "exists", "()Z" },
	{ "getAbsoluteFile", "()Ljava/io/File;" },
	{ "getAbsolutePath", "()Ljava/lang/String;" },
	{ "getCanonicalPath", "()Ljava/lang/String;" },
	{ "getCanonicalFile", "()Ljava/io/File;" },
	{ "getFreeSpace", "()J" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getParent", "()Ljava/lang/String;" },
	{ "getParentFile", "()Ljava/io/File;" },
	{ "getPath", "()Ljava/lang/String;" },
	{ "getTotalSpace", "()J" },
	{ "getUsableSpace", "()J" },
	{ "isAbsolute", "()Z" },
	{ "isDirectory", "()Z" },
	{ "isFile", "()Z" },
	{ "isInvalid", "()Z" },
	{ "isHidden", "()Z" },
	{ "lastModified", "()J" },
	{ "length", "()J" },
	{ "list", "()[Ljava/lang/String;" },
	{ "listFiles", "()[Ljava/io/File;" },
	{ "listFiles", "(Ljava/io/FilenameFilter;)[Ljava/io/File;" },
	{ "listFiles", "(Ljava/io/FileFilter;)[Ljava/io/File;" },
	{ "mkdir", "()Z" },
	{ "mkdirs", "()Z" },
	{ "renameTo", "(Ljava/io/File;)Z" },
	{ "setExecutable", "(Z)Z" },
	{ "setExecutable", "(ZZ)Z" },
	{ "setReadable", "(Z)Z" },
	{ "setReadable", "(ZZ)Z" },
	{ "setReadOnly", "()Z" },
	{ "setWritable", "(Z)Z" },
	{ "setWritable", "(ZZ)Z" },
	{ "toURI", "()Ljava/net/URI;" },
	{ "toURL", "()Ljava/net/URL;" },
	{ "toPath", "()Ljava/nio/file/Path;" },
};

static FieldMetadata fields[] {
	{ "pathSeparator", &class_java_lang_String, (intptr_t) &SF_java_io_File_pathSeparator, "Ljava/lang/String;", 25 },
	{ "pathSeparatorChar", &class_char, (intptr_t) &SF_java_io_File_pathSeparatorChar, "C", 25 },
	{ "separator", &class_java_lang_String, (intptr_t) &SF_java_io_File_separator, "Ljava/lang/String;", 25 },
	{ "separatorChar", &class_char, (intptr_t) &SF_java_io_File_separatorChar, "C", 25 },
	{ "path", &class_java_lang_String, offsetof(java_io_File, F_path), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_File_java_io_File_java_lang_String, 0, "(Ljava/io/File;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_File_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "normalizePath", (intptr_t) M_java_io_File_normalizePath_java_lang_String_R_java_lang_String, VTABLE_java_io_File_normalizePath_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "<init>", (intptr_t) init_java_io_File_java_net_URI, 0, "(Ljava/net/URI;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_File_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "canExecute", (intptr_t) M_java_io_File_canExecute_R_boolean, VTABLE_java_io_File_canExecute_R_boolean, "()Z", 1 },
	{ "canRead", (intptr_t) M_java_io_File_canRead_R_boolean, VTABLE_java_io_File_canRead_R_boolean, "()Z", 1 },
	{ "canWrite", (intptr_t) M_java_io_File_canWrite_R_boolean, VTABLE_java_io_File_canWrite_R_boolean, "()Z", 1 },
	{ "compareTo", (intptr_t) M_java_io_File_compareTo_java_io_File_R_int, VTABLE_java_io_File_compareTo_java_io_File_R_int, "(Ljava/io/File;)I", 1 },
	{ "createNewFile", (intptr_t) M_java_io_File_createNewFile_R_boolean, VTABLE_java_io_File_createNewFile_R_boolean, "()Z", 1 },
	{ "createTempFile", (intptr_t) SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File, 0, "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;", 9 },
	{ "createTempFile", (intptr_t) SM_java_io_File_createTempFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;", 9 },
	{ "createFile", (intptr_t) SM_java_io_File_createFile_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 266 },
	{ "delete", (intptr_t) M_java_io_File_delete_R_boolean, VTABLE_java_io_File_delete_R_boolean, "()Z", 257 },
	{ "deleteOnExit", (intptr_t) M_java_io_File_deleteOnExit, VTABLE_java_io_File_deleteOnExit, "()V", 1 },
	{ "exists", (intptr_t) M_java_io_File_exists_R_boolean, VTABLE_java_io_File_exists_R_boolean, "()Z", 257 },
	{ "getAbsoluteFile", (intptr_t) M_java_io_File_getAbsoluteFile_R_java_io_File, VTABLE_java_io_File_getAbsoluteFile_R_java_io_File, "()Ljava/io/File;", 1 },
	{ "getAbsolutePath", (intptr_t) M_java_io_File_getAbsolutePath_R_java_lang_String, VTABLE_java_io_File_getAbsolutePath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getCanonicalPath", (intptr_t) M_java_io_File_getCanonicalPath_R_java_lang_String, VTABLE_java_io_File_getCanonicalPath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getCanonicalFile", (intptr_t) M_java_io_File_getCanonicalFile_R_java_io_File, VTABLE_java_io_File_getCanonicalFile_R_java_io_File, "()Ljava/io/File;", 1 },
	{ "getFreeSpace", (intptr_t) M_java_io_File_getFreeSpace_R_long, VTABLE_java_io_File_getFreeSpace_R_long, "()J", 1 },
	{ "getName", (intptr_t) M_java_io_File_getName_R_java_lang_String, VTABLE_java_io_File_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getParent", (intptr_t) M_java_io_File_getParent_R_java_lang_String, VTABLE_java_io_File_getParent_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getParentFile", (intptr_t) M_java_io_File_getParentFile_R_java_io_File, VTABLE_java_io_File_getParentFile_R_java_io_File, "()Ljava/io/File;", 1 },
	{ "getPath", (intptr_t) M_java_io_File_getPath_R_java_lang_String, VTABLE_java_io_File_getPath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getTotalSpace", (intptr_t) M_java_io_File_getTotalSpace_R_long, VTABLE_java_io_File_getTotalSpace_R_long, "()J", 1 },
	{ "getUsableSpace", (intptr_t) M_java_io_File_getUsableSpace_R_long, VTABLE_java_io_File_getUsableSpace_R_long, "()J", 1 },
	{ "isAbsolute", (intptr_t) M_java_io_File_isAbsolute_R_boolean, VTABLE_java_io_File_isAbsolute_R_boolean, "()Z", 1 },
	{ "isDirectory", (intptr_t) M_java_io_File_isDirectory_R_boolean, VTABLE_java_io_File_isDirectory_R_boolean, "()Z", 257 },
	{ "isFile", (intptr_t) M_java_io_File_isFile_R_boolean, VTABLE_java_io_File_isFile_R_boolean, "()Z", 1 },
	{ "isInvalid", (intptr_t) M_java_io_File_isInvalid_R_boolean, VTABLE_java_io_File_isInvalid_R_boolean, "()Z", 1 },
	{ "isHidden", (intptr_t) M_java_io_File_isHidden_R_boolean, VTABLE_java_io_File_isHidden_R_boolean, "()Z", 1 },
	{ "lastModified", (intptr_t) M_java_io_File_lastModified_R_long, VTABLE_java_io_File_lastModified_R_long, "()J", 257 },
	{ "length", (intptr_t) M_java_io_File_length_R_long, VTABLE_java_io_File_length_R_long, "()J", 257 },
	{ "list", (intptr_t) M_java_io_File_list_R_Array1_java_lang_String, VTABLE_java_io_File_list_R_Array1_java_lang_String, "()[Ljava/lang/String;", 257 },
	{ "listFiles", (intptr_t) M_java_io_File_listFiles_R_Array1_java_io_File, VTABLE_java_io_File_listFiles_R_Array1_java_io_File, "()[Ljava/io/File;", 1 },
	{ "listFiles", (intptr_t) M_java_io_File_listFiles_java_io_FilenameFilter_R_Array1_java_io_File, VTABLE_java_io_File_listFiles_java_io_FilenameFilter_R_Array1_java_io_File, "(Ljava/io/FilenameFilter;)[Ljava/io/File;", 1 },
	{ "listFiles", (intptr_t) M_java_io_File_listFiles_java_io_FileFilter_R_Array1_java_io_File, VTABLE_java_io_File_listFiles_java_io_FileFilter_R_Array1_java_io_File, "(Ljava/io/FileFilter;)[Ljava/io/File;", 1 },
	{ "listRoots", (intptr_t) SM_java_io_File_listRoots_R_Array1_java_io_File, 0, "()[Ljava/io/File;", 265 },
	{ "mkdir", (intptr_t) M_java_io_File_mkdir_R_boolean, VTABLE_java_io_File_mkdir_R_boolean, "()Z", 257 },
	{ "mkdirs", (intptr_t) M_java_io_File_mkdirs_R_boolean, VTABLE_java_io_File_mkdirs_R_boolean, "()Z", 1 },
	{ "renameTo", (intptr_t) M_java_io_File_renameTo_java_io_File_R_boolean, VTABLE_java_io_File_renameTo_java_io_File_R_boolean, "(Ljava/io/File;)Z", 1 },
	{ "setExecutable", (intptr_t) M_java_io_File_setExecutable_boolean_R_boolean, VTABLE_java_io_File_setExecutable_boolean_R_boolean, "(Z)Z", 1 },
	{ "setExecutable", (intptr_t) M_java_io_File_setExecutable_boolean_boolean_R_boolean, VTABLE_java_io_File_setExecutable_boolean_boolean_R_boolean, "(ZZ)Z", 1 },
	{ "setReadable", (intptr_t) M_java_io_File_setReadable_boolean_R_boolean, VTABLE_java_io_File_setReadable_boolean_R_boolean, "(Z)Z", 1 },
	{ "setReadable", (intptr_t) M_java_io_File_setReadable_boolean_boolean_R_boolean, VTABLE_java_io_File_setReadable_boolean_boolean_R_boolean, "(ZZ)Z", 1 },
	{ "setReadOnly", (intptr_t) M_java_io_File_setReadOnly_R_boolean, VTABLE_java_io_File_setReadOnly_R_boolean, "()Z", 1 },
	{ "setWritable", (intptr_t) M_java_io_File_setWritable_boolean_R_boolean, VTABLE_java_io_File_setWritable_boolean_R_boolean, "(Z)Z", 1 },
	{ "setWritable", (intptr_t) M_java_io_File_setWritable_boolean_boolean_R_boolean, VTABLE_java_io_File_setWritable_boolean_boolean_R_boolean, "(ZZ)Z", 1 },
	{ "toURI", (intptr_t) M_java_io_File_toURI_R_java_net_URI, VTABLE_java_io_File_toURI_R_java_net_URI, "()Ljava/net/URI;", 1 },
	{ "toURL", (intptr_t) M_java_io_File_toURL_R_java_net_URL, VTABLE_java_io_File_toURL_R_java_net_URL, "()Ljava/net/URL;", 1 },
	{ "toPath", (intptr_t) M_java_io_File_toPath_R_java_nio_file_Path, VTABLE_java_io_File_toPath_R_java_nio_file_Path, "()Ljava/nio/file/Path;", 1 },
	{ "toString", (intptr_t) M_java_io_File_toString_R_java_lang_String, VTABLE_java_io_File_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_io_File{
		.nativeName = (intptr_t) "java/io/File",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_io_File),
		.classVtable = (intptr_t) vtable_java_io_File,
		.staticInitializer = (intptr_t) clinit_java_io_File,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_File,
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
		.methodCount = 53,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 55,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_File = registerClass(&class_java_io_File);

}
