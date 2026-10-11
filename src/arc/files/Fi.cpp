#include <filesystem>
#include <sys/stat.h>
#include <cstdio>
#include <vector>
#include <string>
#include "arc/files/Fi.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Comparable.h"
#include "java/io/Writer.h"
#include "java/io/OutputStreamWriter.h"
#include "arc/files/Fi_2.h"
#include "arc/files/Fi_1.h"
#include "java/io/DataOutput.h"
#include "java/io/BufferedOutputStream.h"
#include "arc/graphics/Pixmap.h"
#include "java/io/RandomAccessFile.h"
#include "java/io/FileFilter.h"
#include "java/util/zip/InflaterInputStream.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "java/io/Reader.h"
#include "java/io/File.h"
#include "java/lang/Throwable.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/nio/channels/FileChannel.h"
#include "arc/func/Boolf.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "arc/Files.h"
#include "java/io/DataInputStream.h"
#include "java/security/NoSuchAlgorithmException.h"
#include "java/io/BufferedReader.h"
#include "java/io/DataInput.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/io/DataOutputStream.h"
#include "arc/files/Fi_invoke_arc_func_Cons_0.h"
#include "java/security/DigestInputStream.h"
#include "arc/files/Fi_invoke_arc_func_Cons_1.h"
#include "arc/util/io/Writes.h"
#include "java/lang/System.h"
#include "java/nio/MappedByteBuffer.h"
#include "java/io/FileOutputStream.h"
#include "java/io/FileInputStream.h"
#include "arc/files/Fi.h"
#include "arc/Files_FileType.h"
#include "java/io/InputStream.h"
#include "java/nio/ByteBuffer.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "java/io/InputStreamReader.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/net/URL.h"
#include "java/nio/ByteOrder.h"
#include "java/io/ByteArrayInputStream.h"
#include "arc/graphics/PixmapIO.h"
#include "java/lang/Enum.h"
#include "java/io/OutputStream.h"
#include "arc/util/io/Reads.h"
#include "java/security/MessageDigest.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "arc/util/io/Streams.h"
#include "java/nio/channels/FileChannel_MapMode.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "java/io/FilenameFilter.h"

extern "C" {


void mark_arc_files_Fi(jobject object, jint mark, jint depth) {
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
	auto self = (arc_files_Fi *) object;
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_arc_files_Fi(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_files_Fi_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	((arc_files_Fi *) NULL_CHECK(sp[0].o))->F_file = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_absolute;
	((arc_files_Fi *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_files_Fi_java_io_File(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(51);
	((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_absolute;
	((arc_files_Fi *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_files_Fi_java_lang_String_arc_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(56);
	((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	((arc_files_Fi *) NULL_CHECK(sp[0].o))->F_file = (jref) sp[1].o;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_files_Fi_java_io_File_arc_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(62);
	((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_files_Fi_get_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(66);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_files_Fi_tempFile_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:tempFile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(71);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	sp[1].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(ctx, (frame[0].o), (jobject(nullptr)));
	init_arc_files_Fi_java_io_File(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(72);
	frame[1].o = sp[0].o;
	LINE_NUMBER(73);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unable to create temp file."_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_files_Fi_tempDirectory_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:tempDirectory", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(ctx, (frame[0].o), (jobject(nullptr)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to delete temp file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_java_io_File_mkdir_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_mkdir_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_6;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to create temp directory: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(82);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	init_arc_files_Fi_java_io_File(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(83);
	frame[1].o = sp[0].o;
	LINE_NUMBER(84);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unable to create temp file."_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_arc_files_Fi_emptyDirectory_java_io_File_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:emptyDirectory", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_java_io_File_listFiles_R_Array1_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_listFiles_R_Array1_java_io_File])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(91);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(92);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_1;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_java_io_File_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_File_isDirectory_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[6].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(95);
	if ((frame[1].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(96);
	SM_arc_files_Fi_emptyDirectory_java_io_File_boolean(ctx, (frame[6].o), (jint(1)));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)SM_arc_files_Fi_deleteDirectory_java_io_File_R_boolean(ctx, (frame[6].o));
	}
label_9:;
	{
	LINE_NUMBER(92);
	INST_IINC(5, 1);
	goto label_5;
	}
label_1:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_arc_files_Fi_deleteDirectory_java_io_File_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:deleteDirectory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(105);
	SM_arc_files_Fi_emptyDirectory_java_io_File_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_files_Fi_copyFile_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:copyFile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(111);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_files_Fi_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_read_R_java_io_InputStream])(ctx, (frame[0].o));
	((func_arc_files_Fi_write_java_io_InputStream_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_write_java_io_InputStream_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(115);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(112);
	frame[2].o = sp[0].o;
	LINE_NUMBER(113);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error copying source file: "_j))));
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")\nTo destination: "_j))));
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[1].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_files_Fi_copyDirectory_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:copyDirectory", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_Fi(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_arc_files_Fi_mkdirs_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_mkdirs_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(121);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(122);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(123);
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(124);
	SM_arc_files_Fi_copyDirectory_arc_files_Fi_arc_files_Fi(ctx, (frame[6].o), (frame[7].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(126);
	SM_arc_files_Fi_copyFile_arc_files_Fi_arc_files_Fi(ctx, (frame[6].o), (frame[7].o));
	}
label_9:;
	{
	LINE_NUMBER(121);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_files_Fi_path_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:path", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (92), (47));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_Fi_absolutePath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:absolutePath", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (92), (47));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_Fi_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:name", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_arc_files_Fi_extEquals_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:extEquals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_Fi_extension_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:extension", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(156);
	if ((frame[2].i) != (jint(-1))) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_Fi_nameWithoutExtension_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:nameWithoutExtension", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(164);
	if ((frame[2].i) != (jint(-1))) goto label_3;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_Fi_pathWithoutExtension_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:pathWithoutExtension", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (92), (47));
	frame[1].o = sp[0].o;
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(175);
	if ((frame[2].i) != (jint(-1))) goto label_3;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_Fi_type_R_arc_Files$FileType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:type", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_Fi_file_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/Fi:file", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_external;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_getExternalStoragePath_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_getExternalStoragePath_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static std::string resolveFiNativePath(jcontext ctx, jobject self) {
	if (!self) return "";
	auto fileObj = (jobject)((arc_files_Fi *)self)->F_file;
	if (!fileObj) return "";
	auto pathStr = (jstring)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, fileObj)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, fileObj);
	if (!pathStr) return "";
	const char* nativePath = stringToNative(ctx, pathStr);
	if (!nativePath) return "";
	
	std::string p(nativePath);
	for (char &c : p) {
		if (c == '\\') c = '/';
	}
	if (p.empty()) return p;

	struct stat st;
	if (stat(p.c_str(), &st) == 0) {
		return p;
	}
	
	std::string clean = p;
	while (!clean.empty() && (clean.front() == '/' || clean.front() == '.')) {
		if (clean.rfind("./", 0) == 0) {
			clean = clean.substr(2);
		} else if (clean.front() == '/') {
			clean = clean.substr(1);
		} else {
			break;
		}
	}
	std::string romfsPath = "romfs:/" + clean;
	if (stat(romfsPath.c_str(), &st) == 0) {
		return romfsPath;
	}
	
	return p;
}

jobject M_arc_files_Fi_sha256_R_Array1_byte(jcontext ctx, jobject self) {
	return nullptr;
}

jobject M_arc_files_Fi_read_R_java_io_InputStream(jcontext ctx, jobject self) {
	auto bytes = (jarray)M_arc_files_Fi_readBytes_R_Array1_byte(ctx, self);
	if (!bytes) {
		bytes = createArray(ctx, &class_byte, 0);
	}
	clinit_java_io_ByteArrayInputStream(ctx);
	auto stream = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, stream, (jobject)bytes);
	return stream;
}

jobject M_arc_files_Fi_read_int_R_java_io_BufferedInputStream(jcontext ctx, jobject self, jint bufferSize) {
	auto inStream = M_arc_files_Fi_read_R_java_io_InputStream(ctx, self);
	if (!inStream) return nullptr;
	clinit_java_io_BufferedInputStream(ctx);
	auto stream = gcAlloc(ctx, &class_java_io_BufferedInputStream);
	init_java_io_BufferedInputStream_java_io_InputStream_int(ctx, stream, inStream, bufferSize);
	return stream;
}

jobject M_arc_files_Fi_reader_R_java_io_Reader(jcontext ctx, jobject self) {
	auto inStream = M_arc_files_Fi_read_R_java_io_InputStream(ctx, self);
	if (!inStream) return nullptr;
	clinit_java_io_InputStreamReader(ctx);
	auto reader = gcAlloc(ctx, &class_java_io_InputStreamReader);
	init_java_io_InputStreamReader_java_io_InputStream(ctx, reader, inStream);
	return reader;
}

jobject M_arc_files_Fi_reader_java_lang_String_R_java_io_Reader(jcontext ctx, jobject self, jobject charset) {
	return M_arc_files_Fi_reader_R_java_io_Reader(ctx, self);
}

jobject M_arc_files_Fi_reader_int_R_java_io_BufferedReader(jcontext ctx, jobject self, jint bufferSize) {
	auto r = M_arc_files_Fi_reader_R_java_io_Reader(ctx, self);
	if (!r) return nullptr;
	clinit_java_io_BufferedReader(ctx);
	auto bufReader = gcAlloc(ctx, &class_java_io_BufferedReader);
	init_java_io_BufferedReader_java_io_Reader_int(ctx, bufReader, r, bufferSize);
	return bufReader;
}

jobject M_arc_files_Fi_reader_int_java_lang_String_R_java_io_BufferedReader(jcontext ctx, jobject self, jint bufferSize, jobject charset) {
	return M_arc_files_Fi_reader_int_R_java_io_BufferedReader(ctx, self, bufferSize);
}

jobject M_arc_files_Fi_readString_R_java_lang_String(jcontext ctx, jobject self) {
	if (!self) return nullptr;
	std::string p = resolveFiNativePath(ctx, self);
	FILE* f = fopen(p.c_str(), "rb");
	if (!f) {
		if (p.rfind("romfs:/", 0) != 0) {
			std::string rp = "romfs:/" + (p[0] == '/' ? p.substr(1) : p);
			f = fopen(rp.c_str(), "rb");
		}
	}
	if (!f) {
		clinit_arc_util_ArcRuntimeException(ctx);
		auto exc = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
		jstring msg = stringFromNative(ctx, "File does not exist");
		init_arc_util_ArcRuntimeException_java_lang_String(ctx, exc, (jobject)msg);
		throwException(ctx, exc);
		return nullptr;
	}
	fseek(f, 0, SEEK_END);
	long sz = ftell(f);
	fseek(f, 0, SEEK_SET);
	if (sz < 0) {
		fclose(f);
		return nullptr;
	}
	std::string content(sz, '\0');
	if (sz > 0) {
		fread(&content[0], 1, sz, f);
	}
	fclose(f);
	return (jobject)stringFromNativeLength(ctx, content.data(), (int)content.size());
}

jobject M_arc_files_Fi_readString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject charset) {
	return M_arc_files_Fi_readString_R_java_lang_String(ctx, self);
}

jobject M_arc_files_Fi_readBytes_R_Array1_byte(jcontext ctx, jobject self) {
	if (!self) return nullptr;
	std::string p = resolveFiNativePath(ctx, self);
	FILE* f = fopen(p.c_str(), "rb");
	if (!f) {
		if (p.rfind("romfs:/", 0) != 0) {
			std::string rp = "romfs:/" + (p[0] == '/' ? p.substr(1) : p);
			f = fopen(rp.c_str(), "rb");
		}
	}
	if (!f) {
		return nullptr;
	}
	fseek(f, 0, SEEK_END);
	long sz = ftell(f);
	fseek(f, 0, SEEK_SET);
	if (sz < 0) {
		fclose(f);
		return nullptr;
	}
	auto arr = createArray(ctx, &class_byte, (int)sz);
	if (sz > 0) {
		fread(arr->data, 1, sz, f);
	}
	fclose(f);
	return (jobject)arr;
}

jobject M_arc_files_Fi_readByteStream_R_java_io_ByteArrayInputStream(jcontext ctx, jobject self) {
	return M_arc_files_Fi_read_R_java_io_InputStream(ctx, self);
}

jint M_arc_files_Fi_estimateLength_R_int(jcontext ctx, jobject self) {
	return (jint)M_arc_files_Fi_length_R_long(ctx, self);
}

jint M_arc_files_Fi_readBytes_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject bytes, jint offset, jint length) {
	if (!self || !bytes) return -1;
	std::string p = resolveFiNativePath(ctx, self);
	FILE* f = fopen(p.c_str(), "rb");
	if (!f) return -1;
	auto arr = (jarray)bytes;
	if (offset < 0 || length < 0 || offset + length > arr->length) {
		fclose(f);
		return -1;
	}
	size_t read = fread((char*)arr->data + offset, 1, length, f);
	fclose(f);
	return (jint)read;
}

jobject M_arc_files_Fi_map_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	return nullptr;
}

jobject M_arc_files_Fi_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	return nullptr;
}

jobject M_arc_files_Fi_writes_boolean_R_arc_util_io_Writes(jcontext ctx, jobject self, jbool append) {
	auto outStream = M_arc_files_Fi_write_boolean_R_java_io_OutputStream(ctx, self, append);
	if (!outStream) return nullptr;
	clinit_java_io_DataOutputStream(ctx);
	auto dos = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, dos, outStream);
	clinit_arc_util_io_Writes(ctx);
	auto writes = gcAlloc(ctx, &class_arc_util_io_Writes);
	init_arc_util_io_Writes_java_io_DataOutput(ctx, writes, dos);
	return writes;
}

jobject M_arc_files_Fi_writes_R_arc_util_io_Writes(jcontext ctx, jobject self) {
	return M_arc_files_Fi_writes_boolean_R_arc_util_io_Writes(ctx, self, 0);
}

jobject M_arc_files_Fi_reads_R_arc_util_io_Reads(jcontext ctx, jobject self) {
	auto inStream = M_arc_files_Fi_read_R_java_io_InputStream(ctx, self);
	if (!inStream) return nullptr;
	clinit_java_io_DataInputStream(ctx);
	auto dis = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, dis, inStream);
	clinit_arc_util_io_Reads(ctx);
	auto reads = gcAlloc(ctx, &class_arc_util_io_Reads);
	init_arc_util_io_Reads_java_io_DataInput(ctx, reads, dis);
	return reads;
}

jobject M_arc_files_Fi_writesDeflate_R_arc_util_io_Writes(jcontext ctx, jobject self) {
	return M_arc_files_Fi_writes_R_arc_util_io_Writes(ctx, self);
}

jobject M_arc_files_Fi_readsDeflate_R_arc_util_io_Reads(jcontext ctx, jobject self) {
	return M_arc_files_Fi_reads_R_arc_util_io_Reads(ctx, self);
}

jobject M_arc_files_Fi_write_boolean_R_java_io_OutputStream(jcontext ctx, jobject self, jbool append) {
	if (!self) return nullptr;
	auto fi = (arc_files_Fi*)self;
	clinit_java_io_FileOutputStream(ctx);
	auto fos = gcAlloc(ctx, &class_java_io_FileOutputStream);
	init_java_io_FileOutputStream_java_io_File_boolean(ctx, fos, (jobject)fi->F_file, append);
	return fos;
}

jobject M_arc_files_Fi_write_R_java_io_OutputStream(jcontext ctx, jobject self) {
	return M_arc_files_Fi_write_boolean_R_java_io_OutputStream(ctx, self, 0);
}

jobject M_arc_files_Fi_write_boolean_int_R_java_io_OutputStream(jcontext ctx, jobject self, jbool append, jint bufferSize) {
	auto fos = M_arc_files_Fi_write_boolean_R_java_io_OutputStream(ctx, self, append);
	if (!fos) return nullptr;
	clinit_java_io_BufferedOutputStream(ctx);
	auto bos = gcAlloc(ctx, &class_java_io_BufferedOutputStream);
	init_java_io_BufferedOutputStream_java_io_OutputStream_int(ctx, bos, fos, bufferSize);
	return bos;
}

void M_arc_files_Fi_write_java_io_InputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool append) {
}

jobject M_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer(jcontext ctx, jobject self, jbool append, jobject charset) {
	auto fos = M_arc_files_Fi_write_boolean_R_java_io_OutputStream(ctx, self, append);
	if (!fos) return nullptr;
	clinit_java_io_OutputStreamWriter(ctx);
	auto osw = gcAlloc(ctx, &class_java_io_OutputStreamWriter);
	if (charset) {
		init_java_io_OutputStreamWriter_java_io_OutputStream_java_lang_String(ctx, osw, fos, charset);
	} else {
		init_java_io_OutputStreamWriter_java_io_OutputStream(ctx, osw, fos);
	}
	return osw;
}

jobject M_arc_files_Fi_writer_boolean_R_java_io_Writer(jcontext ctx, jobject self, jbool append) {
	return M_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer(ctx, self, append, nullptr);
}

void M_arc_files_Fi_writePng_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0) {
}

void M_arc_files_Fi_writeString_java_lang_String_boolean_java_lang_String(jcontext ctx, jobject self, jobject str, jbool append, jobject charset) {
	if (!self || !str) return;
	std::string path = resolveFiNativePath(ctx, self);
	const char* nativeStr = stringToNative(ctx, (jstring)str);
	if (!nativeStr) return;
	FILE* f = fopen(path.c_str(), append ? "ab" : "wb");
	if (f) {
		fwrite(nativeStr, 1, strlen(nativeStr), f);
		fclose(f);
	}
}

void M_arc_files_Fi_writeString_java_lang_String_boolean(jcontext ctx, jobject self, jobject str, jbool append) {
	M_arc_files_Fi_writeString_java_lang_String_boolean_java_lang_String(ctx, self, str, append, nullptr);
}

void M_arc_files_Fi_writeString_java_lang_String(jcontext ctx, jobject self, jobject str) {
	M_arc_files_Fi_writeString_java_lang_String_boolean(ctx, self, str, 0);
}

void M_arc_files_Fi_writeBytes_Array1_byte_int_int_boolean(jcontext ctx, jobject self, jobject bytes, jint offset, jint length, jbool append) {
	if (!self || !bytes) return;
	std::string path = resolveFiNativePath(ctx, self);
	auto arr = (jarray)bytes;
	if (offset < 0 || length < 0 || offset + length > arr->length) return;
	FILE* f = fopen(path.c_str(), append ? "ab" : "wb");
	if (f) {
		fwrite((char*)arr->data + offset, 1, length, f);
		fclose(f);
	}
}

void M_arc_files_Fi_writeBytes_Array1_byte_boolean(jcontext ctx, jobject self, jobject bytes, jbool append) {
	if (!bytes) return;
	M_arc_files_Fi_writeBytes_Array1_byte_int_int_boolean(ctx, self, bytes, 0, ((jarray)bytes)->length, append);
}

void M_arc_files_Fi_writeBytes_Array1_byte(jcontext ctx, jobject self, jobject bytes) {
	M_arc_files_Fi_writeBytes_Array1_byte_boolean(ctx, self, bytes, 0);
}

void M_arc_files_Fi_walk_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
}

jobject M_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	return nullptr;
}

jobject M_arc_files_Fi_findAll_R_arc_struct_Seq(jcontext ctx, jobject self) {
	return nullptr;
}

jobject M_arc_files_Fi_seq_R_arc_struct_Seq(jcontext ctx, jobject self) {
	return nullptr;
}

jobject M_arc_files_Fi_child_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject name) {
	if (!self || !name) return nullptr;
	auto fi = (arc_files_Fi*)self;
	auto p1 = (jstring)M_arc_files_Fi_path_R_java_lang_String(ctx, self);
	std::string path1 = p1 ? stringToNative(ctx, p1) : "";
	std::string path2 = stringToNative(ctx, (jstring)name);
	std::string fullPath;
	if (path1.empty() || path1 == ".") {
		fullPath = path2;
	} else {
		if (path1.back() == '/' || path1.back() == '\\') path1.pop_back();
		fullPath = path1 + "/" + path2;
	}
	clinit_arc_files_Fi(ctx);
	auto res = gcAlloc(ctx, &class_arc_files_Fi);
	jstring fullPathStr = stringFromNative(ctx, fullPath.c_str());
	init_arc_files_Fi_java_lang_String_arc_Files$FileType(ctx, res, (jobject)fullPathStr, (jobject)fi->F_type);
	return res;
}

jobject M_arc_files_Fi_parent_R_arc_files_Fi(jcontext ctx, jobject self) {
	if (!self) return nullptr;
	auto fi = (arc_files_Fi*)self;
	auto p1 = (jstring)M_arc_files_Fi_path_R_java_lang_String(ctx, self);
	std::string path1 = p1 ? stringToNative(ctx, p1) : "";
	for (char &c : path1) if (c == '\\') c = '/';
	auto lastSlash = path1.rfind('/');
	std::string parentPath = (lastSlash == std::string::npos) ? "" : path1.substr(0, lastSlash);
	clinit_arc_files_Fi(ctx);
	auto res = gcAlloc(ctx, &class_arc_files_Fi);
	jstring parentPathStr = stringFromNative(ctx, parentPath.c_str());
	init_arc_files_Fi_java_lang_String_arc_Files$FileType(ctx, res, (jobject)parentPathStr, (jobject)fi->F_type);
	return res;
}

jobject M_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject name) {
	auto parent = M_arc_files_Fi_parent_R_arc_files_Fi(ctx, self);
	return M_arc_files_Fi_child_java_lang_String_R_arc_files_Fi(ctx, parent, name);
}

jobject M_arc_files_Fi_list_R_Array1_arc_files_Fi(jcontext ctx, jobject self) {
	if (!self) return (jobject)createArray(ctx, &class_arc_files_Fi, 0);
	std::string path = resolveFiNativePath(ctx, self);
	std::vector<std::string> names;
	try {
		if (std::filesystem::is_directory(path)) {
			for (const auto & entry : std::filesystem::directory_iterator(path)) {
				names.push_back(entry.path().filename().string());
			}
		}
	} catch (...) {}
	
	auto arr = createArray(ctx, &class_arc_files_Fi, (int)names.size());
	for (size_t i = 0; i < names.size(); i++) {
		jstring nameStr = stringFromNative(ctx, names[i].c_str());
		auto childFi = M_arc_files_Fi_child_java_lang_String_R_arc_files_Fi(ctx, self, (jobject)nameStr);
		((jobject*)arr->data)[i] = childFi;
	}
	return (jobject)arr;
}

jobject M_arc_files_Fi_list_java_io_FileFilter_R_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	return M_arc_files_Fi_list_R_Array1_arc_files_Fi(ctx, self);
}

jobject M_arc_files_Fi_list_java_io_FilenameFilter_R_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	return M_arc_files_Fi_list_R_Array1_arc_files_Fi(ctx, self);
}

jobject M_arc_files_Fi_list_java_lang_String_R_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	return M_arc_files_Fi_list_R_Array1_arc_files_Fi(ctx, self);
}

jbool M_arc_files_Fi_isDirectory_R_boolean(jcontext ctx, jobject self) {
	if (!self) return 0;
	std::string p = resolveFiNativePath(ctx, self);
	if (p.empty()) return 0;
	struct stat st;
	if (stat(p.c_str(), &st) == 0) {
		return S_ISDIR(st.st_mode) ? 1 : 0;
	}
	return 0;
}

jbool M_arc_files_Fi_mkdirs_R_boolean(jcontext ctx, jobject self) {
	if (!self) return 0;
	std::string path = resolveFiNativePath(ctx, self);
	if (path.empty()) return 0;
	try {
		return std::filesystem::create_directories(path) ? 1 : 0;
	} catch (...) {
		return 0;
	}
}

jbool M_arc_files_Fi_exists_R_boolean(jcontext ctx, jobject self) {
	if (!self) return 0;
	std::string p = resolveFiNativePath(ctx, self);
	if (p.empty()) return 0;
	struct stat st;
	return stat(p.c_str(), &st) == 0 ? 1 : 0;
}

jbool M_arc_files_Fi_delete_R_boolean(jcontext ctx, jobject self) {
	if (!self) return 0;
	std::string path = resolveFiNativePath(ctx, self);
	return std::remove(path.c_str()) == 0 ? 1 : 0;
}

jbool M_arc_files_Fi_deleteDirectory_R_boolean(jcontext ctx, jobject self) {
	if (!self) return 0;
	std::string path = resolveFiNativePath(ctx, self);
	try {
		return std::filesystem::remove_all(path) > 0 ? 1 : 0;
	} catch (...) {
		return 0;
	}
}

void M_arc_files_Fi_emptyDirectory(jcontext ctx, jobject self) {
	M_arc_files_Fi_emptyDirectory_boolean(ctx, self, 0);
}

void M_arc_files_Fi_emptyDirectory_boolean(jcontext ctx, jobject self, jbool param0) {
}

void M_arc_files_Fi_copyTo_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
}

void M_arc_files_Fi_copyFilesTo_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
}

void M_arc_files_Fi_moveTo_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
}

jlong M_arc_files_Fi_length_R_long(jcontext ctx, jobject self) {
	if (!self) return 0;
	std::string p = resolveFiNativePath(ctx, self);
	if (p.empty()) return 0;
	struct stat st;
	if (stat(p.c_str(), &st) == 0) {
		return (jlong)st.st_size;
	}
	return 0;
}

jlong M_arc_files_Fi_lastModified_R_long(jcontext ctx, jobject self) {
	if (!self) return 0;
	std::string p = resolveFiNativePath(ctx, self);
	if (p.empty()) return 0;
	struct stat st;
	if (stat(p.c_str(), &st) == 0) {
		return (jlong)st.st_mtime;
	}
	return 0;
}

jbool M_arc_files_Fi_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject other) {
	if (self == other) return 1;
	if (!other) return 0;
	if (((jobject)other)->clazz != &class_arc_files_Fi) return 0;
	auto p1 = (jstring)M_arc_files_Fi_path_R_java_lang_String(ctx, self);
	auto p2 = (jstring)M_arc_files_Fi_path_R_java_lang_String(ctx, other);
	if (!p1 || !p2) return p1 == p2 ? 1 : 0;
	return (jbool)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (jobject)p1)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (jobject)p1, (jobject)p2);
}

jint M_arc_files_Fi_hashCode_R_int(jcontext ctx, jobject self) {
	auto p = (jstring)M_arc_files_Fi_path_R_java_lang_String(ctx, self);
	if (!p) return 0;
	return (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (jobject)p)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (jobject)p);
}

jint M_arc_files_Fi_compareTo_arc_files_Fi_R_int(jcontext ctx, jobject self, jobject other) {
	if (self == other) return 0;
	if (!other) return 1;
	auto p1 = (jstring)M_arc_files_Fi_path_R_java_lang_String(ctx, self);
	auto p2 = (jstring)M_arc_files_Fi_path_R_java_lang_String(ctx, other);
	if (!p1 || !p2) return p1 ? 1 : -1;
	return (jint)((func_java_lang_String_compareTo_java_lang_Object_R_int) ((void **) nullCheck(ctx, (jobject)p1)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_Object_R_int])(ctx, (jobject)p1, (jobject)p2);
}

jobject M_arc_files_Fi_toString_R_java_lang_String(jcontext ctx, jobject self) {
	return M_arc_files_Fi_path_R_java_lang_String(ctx, self);
}

jint M_arc_files_Fi_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject other) {
	return M_arc_files_Fi_compareTo_arc_files_Fi_R_int(ctx, self, other);
}

void SM_arc_files_Fi_lambda$findAll$0_arc_func_Boolf_arc_struct_Seq_arc_files_Fi(jcontext ctx, jobject param0, jobject param1, jobject param2) {
}

static void* vtable_arc_files_Fi[] = {
	(void*) M_arc_files_Fi_hashCode_R_int, // 0
	(void*) M_arc_files_Fi_equals_java_lang_Object_R_boolean, // 1
	(void*) M_java_lang_Object_clone_R_java_lang_Object, // 2
	(void*) M_java_lang_Object_getClass_R_java_lang_Class, // 3
	(void*) M_arc_files_Fi_toString_R_java_lang_String, // 4
	(void*) M_java_lang_Object_finalize, // 5
	(void*) M_java_lang_Object_notify, // 6
	(void*) M_java_lang_Object_notifyAll, // 7
	(void*) M_java_lang_Object_wait, // 8
	(void*) M_java_lang_Object_wait_long, // 9
	(void*) M_java_lang_Object_wait_long_int, // 10
	(void*) M_arc_files_Fi_compareTo_arc_files_Fi_R_int, // 11
	(void*) M_arc_files_Fi_path_R_java_lang_String, // 12
	(void*) M_arc_files_Fi_absolutePath_R_java_lang_String, // 13
	(void*) M_arc_files_Fi_name_R_java_lang_String, // 14
	(void*) M_arc_files_Fi_extEquals_java_lang_String_R_boolean, // 15
	(void*) M_arc_files_Fi_extension_R_java_lang_String, // 16
	(void*) M_arc_files_Fi_nameWithoutExtension_R_java_lang_String, // 17
	(void*) M_arc_files_Fi_pathWithoutExtension_R_java_lang_String, // 18
	(void*) M_arc_files_Fi_type_R_arc_Files$FileType, // 19
	(void*) M_arc_files_Fi_file_R_java_io_File, // 20
	(void*) M_arc_files_Fi_sha256_R_Array1_byte, // 21
	(void*) M_arc_files_Fi_read_R_java_io_InputStream, // 22
	(void*) M_arc_files_Fi_read_int_R_java_io_BufferedInputStream, // 23
	(void*) M_arc_files_Fi_reader_R_java_io_Reader, // 24
	(void*) M_arc_files_Fi_reader_java_lang_String_R_java_io_Reader, // 25
	(void*) M_arc_files_Fi_reader_int_R_java_io_BufferedReader, // 26
	(void*) M_arc_files_Fi_reader_int_java_lang_String_R_java_io_BufferedReader, // 27
	(void*) M_arc_files_Fi_readString_R_java_lang_String, // 28
	(void*) M_arc_files_Fi_readString_java_lang_String_R_java_lang_String, // 29
	(void*) M_arc_files_Fi_readBytes_R_Array1_byte, // 30
	(void*) M_arc_files_Fi_readByteStream_R_java_io_ByteArrayInputStream, // 31
	(void*) M_arc_files_Fi_estimateLength_R_int, // 32
	(void*) M_arc_files_Fi_readBytes_Array1_byte_int_int_R_int, // 33
	(void*) M_arc_files_Fi_map_R_java_nio_ByteBuffer, // 34
	(void*) M_arc_files_Fi_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer, // 35
	(void*) M_arc_files_Fi_writes_boolean_R_arc_util_io_Writes, // 36
	(void*) M_arc_files_Fi_writes_R_arc_util_io_Writes, // 37
	(void*) M_arc_files_Fi_reads_R_arc_util_io_Reads, // 38
	(void*) M_arc_files_Fi_writesDeflate_R_arc_util_io_Writes, // 39
	(void*) M_arc_files_Fi_readsDeflate_R_arc_util_io_Reads, // 40
	(void*) M_arc_files_Fi_write_R_java_io_OutputStream, // 41
	(void*) M_arc_files_Fi_write_boolean_R_java_io_OutputStream, // 42
	(void*) M_arc_files_Fi_write_boolean_int_R_java_io_OutputStream, // 43
	(void*) M_arc_files_Fi_write_java_io_InputStream_boolean, // 44
	(void*) M_arc_files_Fi_writer_boolean_R_java_io_Writer, // 45
	(void*) M_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer, // 46
	(void*) M_arc_files_Fi_writePng_arc_graphics_Pixmap, // 47
	(void*) M_arc_files_Fi_writeString_java_lang_String, // 48
	(void*) M_arc_files_Fi_writeString_java_lang_String_boolean, // 49
	(void*) M_arc_files_Fi_writeString_java_lang_String_boolean_java_lang_String, // 50
	(void*) M_arc_files_Fi_writeBytes_Array1_byte, // 51
	(void*) M_arc_files_Fi_writeBytes_Array1_byte_boolean, // 52
	(void*) M_arc_files_Fi_writeBytes_Array1_byte_int_int_boolean, // 53
	(void*) M_arc_files_Fi_walk_arc_func_Cons, // 54
	(void*) M_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq, // 55
	(void*) M_arc_files_Fi_findAll_R_arc_struct_Seq, // 56
	(void*) M_arc_files_Fi_seq_R_arc_struct_Seq, // 57
	(void*) M_arc_files_Fi_list_R_Array1_arc_files_Fi, // 58
	(void*) M_arc_files_Fi_list_java_io_FileFilter_R_Array1_arc_files_Fi, // 59
	(void*) M_arc_files_Fi_list_java_io_FilenameFilter_R_Array1_arc_files_Fi, // 60
	(void*) M_arc_files_Fi_list_java_lang_String_R_Array1_arc_files_Fi, // 61
	(void*) M_arc_files_Fi_isDirectory_R_boolean, // 62
	(void*) M_arc_files_Fi_child_java_lang_String_R_arc_files_Fi, // 63
	(void*) M_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi, // 64
	(void*) M_arc_files_Fi_parent_R_arc_files_Fi, // 65
	(void*) M_arc_files_Fi_mkdirs_R_boolean, // 66
	(void*) M_arc_files_Fi_exists_R_boolean, // 67
	(void*) M_arc_files_Fi_delete_R_boolean, // 68
	(void*) M_arc_files_Fi_deleteDirectory_R_boolean, // 69
	(void*) M_arc_files_Fi_emptyDirectory, // 70
	(void*) M_arc_files_Fi_emptyDirectory_boolean, // 71
	(void*) M_arc_files_Fi_copyTo_arc_files_Fi, // 72
	(void*) M_arc_files_Fi_copyFilesTo_arc_files_Fi, // 73
	(void*) M_arc_files_Fi_moveTo_arc_files_Fi, // 74
	(void*) M_arc_files_Fi_length_R_long, // 75
	(void*) M_arc_files_Fi_lastModified_R_long, // 76
	(void*) M_arc_files_Fi_compareTo_arc_files_Fi_R_int, // 77
};

Class class_arc_files_Fi = {
	.nativeName = (intptr_t) "arc/files/Fi",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_files_Fi),
	.classVtable = (intptr_t) vtable_arc_files_Fi,
	.staticInitializer = (intptr_t) clinit_arc_files_Fi,
	.markFunction = (intptr_t) mark_arc_files_Fi,
	.access = 0x21,
	.vtableSize = 78,
};
static bool registered_arc_files_Fi = registerClass(&class_arc_files_Fi);

}

