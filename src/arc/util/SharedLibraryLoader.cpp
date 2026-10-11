#include "arc/util/SharedLibraryLoader.h"
#include "java/lang/StringBuilder.h"
#include "java/io/FileOutputStream.h"
#include "java/io/FileInputStream.h"
#include "java/util/zip/ZipFile.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "java/io/IOException.h"
#include "arc/util/OS.h"
#include "java/io/Closeable.h"
#include "java/util/HashSet.h"
#include "java/util/zip/CRC32.h"
#include "java/lang/Throwable.h"
#include "java/io/File.h"
#include "java/lang/Exception.h"
#include "java/util/zip/ZipEntry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Long.h"
#include "arc/util/SharedLibraryLoader.h"
#include "java/lang/Object.h"
#include "java/io/FileNotFoundException.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/util/io/Streams.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/util/UUID.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_arc_util_SharedLibraryLoader_loadedLibraries;

void mark_arc_util_SharedLibraryLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_SharedLibraryLoader_loadedLibraries)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_SharedLibraryLoader_loadedLibraries)->clazz)->markFunction)((jobject) SF_arc_util_SharedLibraryLoader_loadedLibraries, mark, depth + 1);
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
	auto self = (arc_util_SharedLibraryLoader *) object;
	if (self->F_nativesJar)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nativesJar)->clazz)->markFunction)((jobject) self->F_nativesJar, mark, depth + 1);
}

void init_arc_util_SharedLibraryLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_SharedLibraryLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_SharedLibraryLoader_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_SharedLibraryLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((arc_util_SharedLibraryLoader *) NULL_CHECK((frame[0].o)))->F_nativesJar = (jref) (frame[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_SharedLibraryLoader_setLoaded_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:setLoaded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_arc_util_SharedLibraryLoader);

	clinit_arc_util_SharedLibraryLoader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	clinit_arc_util_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_arc_util_SharedLibraryLoader_loadedLibraries;
	jint temp0 = (jint)((func_java_util_HashSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(34);
	popStackFrame(ctx, (jobject) &class_arc_util_SharedLibraryLoader);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_SharedLibraryLoader_isLoaded_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:isLoaded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_arc_util_SharedLibraryLoader);

	clinit_arc_util_SharedLibraryLoader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(37);
	clinit_arc_util_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_arc_util_SharedLibraryLoader_loadedLibraries;
	jint temp0 = (jint)((func_java_util_HashSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx, (jobject) &class_arc_util_SharedLibraryLoader);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:crc", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	if ((frame[1].o) != nullptr) goto label_11;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"input cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(43);
	clinit_java_util_zip_CRC32(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_CRC32);
	init_java_util_zip_CRC32(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (4096));
	frame[3].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[1].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(48);
	if ((frame[4].i) != (jint(-1))) goto label_14;
	}
	goto label_1;
label_14:;
	{
	LINE_NUMBER(49);
	((func_java_util_zip_CRC32_update_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_zip_CRC32_update_Array1_byte_int_int])(ctx, (frame[2].o), (frame[3].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(50);
	{ popExceptionFrames(frameRef, 2); goto label_0; }
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(53);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(54);
	goto label_17;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(51);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(53);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(54);
	goto label_17;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(53);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(54);
	throwException(ctx, (frame[5].o));	}
label_17:;
	{
	LINE_NUMBER(55);
	jlong temp0 = (jlong)((func_java_util_zip_CRC32_getValue_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_zip_CRC32_getValue_R_long])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_int_R_java_lang_String(ctx, temp0, (16));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:mapLibraryName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isWindows) == 0) goto label_1;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_is64Bit) == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"64.dll"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8".dll"_j));
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(61);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isLinux) == 0) goto label_4;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lib"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isARM) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"arm"_j));
	goto label_6;
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_is64Bit) == 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"64.so"_j));
	goto label_8;
label_7:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8".so"_j));
label_8:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(62);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMac) == 0) goto label_9;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lib"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isARM) == 0) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"arm"_j));
	goto label_11;
label_10:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_11:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_is64Bit) == 0) goto label_12;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"64.dylib"_j));
	goto label_13;
label_12:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8".dylib"_j));
label_13:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_SharedLibraryLoader_load_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	// Nintendo Switch static library loading - no-op
}

jobject M_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:readFile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_util_SharedLibraryLoader *) NULL_CHECK((frame[0].o)))->F_nativesJar;
	if (sp[0].o != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = ((jobject) &class_arc_util_SharedLibraryLoader);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(93);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to read file for extraction: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(99);
	clinit_java_util_zip_ZipFile(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipFile);
	sp[1].o = (jobject)((arc_util_SharedLibraryLoader *) NULL_CHECK((frame[0].o)))->F_nativesJar;
	init_java_util_zip_ZipFile_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_java_util_zip_ZipFile_getEntry_java_lang_String_R_java_util_zip_ZipEntry) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_zip_ZipFile_getEntry_java_lang_String_R_java_util_zip_ZipEntry])(ctx, (frame[2].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(101);
	if ((frame[3].o) != nullptr) goto label_10;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't find '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' in JAR: "_j))));
	sp[2].o = (jobject)((arc_util_SharedLibraryLoader *) NULL_CHECK((frame[0].o)))->F_nativesJar;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream])(ctx, (frame[2].o), (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(103);
	frame[2].o = sp[0].o;
	LINE_NUMBER(104);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' in JAR: "_j))));
	sp[2].o = (jobject)((arc_util_SharedLibraryLoader *) NULL_CHECK((frame[0].o)))->F_nativesJar;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:extractFile", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(118);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	INST_ALOAD(3);
	INST_ASTORE(2);
label_5:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_java_io_File(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)M_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(121);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_UUID_randomUUID_R_java_util_UUID(ctx);
	sp[1].o = (jobject)((func_java_util_UUID_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_UUID_toString_R_java_lang_String])(ctx, sp[1].o);
	clinit_java_io_File(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)M_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(123);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unable to find writable path to extract file. Is the user home directory writable?"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(127);
	frame[3].o = sp[0].o;
	LINE_NUMBER(129);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.library.path"_j))));
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_12;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(131);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

void M_arc_util_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:extractFileTo", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream])(ctx, (frame[0].o), (frame[1].o));
	sp[2].o = (jobject)((func_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	clinit_java_io_File(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_io_File);
	sp[4].o = frame[2].o;
	clinit_java_io_File(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[5].o, (frame[1].o));
	sp[5].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[5].o);
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:getExtractedFile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"java.io.tmpdir"_j));
	LINE_NUMBER(152);
	sp[2].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/arc"_j))));
	clinit_arc_util_OS(ctx);
	sp[2].o = (jobject)SF_arc_util_OS_username;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(153);
	jint temp0 = (jint)M_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_0;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(ctx, (frame[1].o), (jobject(nullptr)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(158);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(159);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(160);
	jint temp0 = (jint)M_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean(ctx, (frame[0].o), (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	INST_ALOAD(4);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	LINE_NUMBER(163);
	goto label_11;
label_2:;
	LINE_NUMBER(162);
	INST_ASTORE(4);
label_11:;
	{
	LINE_NUMBER(166);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	clinit_arc_util_OS(ctx);
	sp[2].o = (jobject)SF_arc_util_OS_userHome;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/.arc/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(167);
	jint temp0 = (jint)M_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean(ctx, (frame[0].o), (frame[4].o));
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(170);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".temp/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(171);
	jint temp0 = (jint)M_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean(ctx, (frame[0].o), (frame[4].o));
	if (temp0 == 0) goto label_15;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_15:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"APP_SANDBOX_CONTAINER_ID"_j))));
	if (sp[0].o == nullptr) goto label_16;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_16:;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:canWrite", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_java_io_File_getParentFile_R_java_io_File) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_getParentFile_R_java_io_File])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(184);
	jint temp0 = (jint)((func_java_io_File_canWrite_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_canWrite_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_14;
	}
	{
	jint temp0 = (jint)M_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_15;
	}
label_14:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(186);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_java_util_UUID_randomUUID_R_java_util_UUID(ctx);
	sp[2].o = (jobject)((func_java_util_UUID_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_UUID_toString_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	goto label_0;
	}
label_12:;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_java_io_File_mkdirs_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_mkdirs_R_boolean])(ctx, (frame[2].o));
	LINE_NUMBER(189);
	jint temp1 = (jint)((func_java_io_File_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_isDirectory_R_boolean])(ctx, (frame[2].o));
	if (temp1 != 0) goto label_18;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(190);
	frame[3].o = (frame[1].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(193);
	clinit_java_io_FileOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileOutputStream);
	init_java_io_FileOutputStream_java_io_File(ctx, sp[0].o, (frame[3].o));
	((func_java_io_FileOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_FileOutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(194);
	jint temp0 = (jint)M_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = temp0;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[3].o));
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(195);
	frame[4].o = sp[0].o;
	LINE_NUMBER(196);
	frame[5].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[3].o));
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(198);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[3].o));
	LINE_NUMBER(199);
	throwException(ctx, (frame[6].o));	}

	popStackFrame(ctx);
}

jbool M_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:canExecute", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)((func_java_io_File_canExecute_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_canExecute_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_java_io_File_setExecutable_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_setExecutable_boolean_boolean_R_boolean])(ctx, (frame[1].o), (jint(1)), (jint(0)));
	LINE_NUMBER(206);
	jint temp1 = (jint)((func_java_io_File_canExecute_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_canExecute_R_boolean])(ctx, (frame[1].o));
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(207);
	frame[2].o = sp[0].o;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:extractFile", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(213);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(214);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_14;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_FileNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	clinit_java_io_FileInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_FileInputStream);
	init_java_io_FileInputStream_java_io_File(ctx, sp[1].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(218);
	goto label_14;
label_2:;
	LINE_NUMBER(217);
	INST_ASTORE(5);
label_14:;
	{
	LINE_NUMBER(222);
	if ((frame[4].o) == nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[2].o));
	if (temp0 != 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(223);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(224);
	frame[6].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_11; } // goto label_8
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream])(ctx, (frame[0].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_java_io_File_getParentFile_R_java_io_File) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_getParentFile_R_java_io_File])(ctx, (frame[3].o));
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((func_java_io_File_getParentFile_R_java_io_File) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_getParentFile_R_java_io_File])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_io_File_mkdirs_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_mkdirs_R_boolean])(ctx, sp[0].o);
	}
label_19:;
	{
	LINE_NUMBER(230);
	clinit_java_io_FileOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileOutputStream);
	init_java_io_FileOutputStream_java_io_File(ctx, sp[0].o, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(231);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (4096));
	frame[7].o = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(233);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[5].o), (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(234);
	if ((frame[8].i) != (jint(-1))) goto label_24;
	}
	goto label_5;
label_24:;
	{
	LINE_NUMBER(235);
	((func_java_io_FileOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_FileOutputStream_write_Array1_byte_int_int])(ctx, (frame[6].o), (frame[7].o), (jint(0)), (frame[8].i));
	LINE_NUMBER(236);
	goto label_22;
	}
label_5:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(240);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(241);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[6].o));
	LINE_NUMBER(242);
	goto label_16;
	}
label_6:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(237);
	frame[7].o = sp[0].o;
	LINE_NUMBER(238);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error extracting file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\nTo: "_j))));
	sp[2].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[7].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(240);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(241);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[6].o));
	LINE_NUMBER(242);
	throwException(ctx, (frame[9].o));	}
label_16:;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_SharedLibraryLoader_loadFile_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:loadFile", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(255);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(258);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.io.tmpdir"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/arc/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(ctx, (frame[2].o), (jobject(nullptr)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(265);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	LINE_NUMBER(267);
	goto label_11;
label_2:;
	LINE_NUMBER(266);
	INST_ASTORE(6);
label_11:;
	{
	LINE_NUMBER(270);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	clinit_arc_util_OS(ctx);
	sp[2].o = (jobject)SF_arc_util_OS_userHome;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/.arc/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	if (sp[0].o != nullptr) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(274);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".temp/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	if (sp[0].o != nullptr) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(278);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	if (sp[0].o != nullptr) goto label_17;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	{
	LINE_NUMBER(282);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.library.path"_j))));
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(283);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, (frame[4].o));
	SM_java_lang_System_load_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}
label_19:;
	{
	LINE_NUMBER(288);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:loadFile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, sp[0].o);
	SM_java_lang_System_load_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(295);
	sp[0].o = jobject(nullptr);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(296);
	frame[4].o = sp[0].o;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void clinit_arc_util_SharedLibraryLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/SharedLibraryLoader:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_SharedLibraryLoader(ctx);
	{
	LINE_NUMBER(18);
	clinit_java_util_HashSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[0].o);
	clinit_arc_util_SharedLibraryLoader(ctx);
	SF_arc_util_SharedLibraryLoader_loadedLibraries = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_SharedLibraryLoader[] {
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
	(void *) M_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String,
	(void *) M_arc_util_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_SharedLibraryLoader_load_java_lang_String,
	(void *) M_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream,
	(void *) M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File,
	(void *) M_arc_util_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File,
	(void *) M_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File,
	(void *) M_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean,
	(void *) M_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean,
	(void *) M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File,
	(void *) M_arc_util_SharedLibraryLoader_loadFile_java_lang_String,
	(void *) M_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable,
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
	{ "crc", "(Ljava/io/InputStream;)Ljava/lang/String;" },
	{ "mapLibraryName", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "load", "(Ljava/lang/String;)V" },
	{ "readFile", "(Ljava/lang/String;)Ljava/io/InputStream;" },
	{ "extractFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;" },
	{ "extractFileTo", "(Ljava/lang/String;Ljava/io/File;)V" },
	{ "getExtractedFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;" },
	{ "canWrite", "(Ljava/io/File;)Z" },
	{ "canExecute", "(Ljava/io/File;)Z" },
	{ "extractFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;" },
	{ "loadFile", "(Ljava/lang/String;)V" },
	{ "loadFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/lang/Throwable;" },
};

static FieldMetadata fields[] {
	{ "loadedLibraries", &class_java_util_HashSet, (intptr_t) &SF_arc_util_SharedLibraryLoader_loadedLibraries, "Ljava/util/HashSet;", 26 },
	{ "nativesJar", &class_java_lang_String, offsetof(arc_util_SharedLibraryLoader, F_nativesJar), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_SharedLibraryLoader, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_util_SharedLibraryLoader_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setLoaded", (intptr_t) SM_arc_util_SharedLibraryLoader_setLoaded_java_lang_String, 0, "(Ljava/lang/String;)V", 41 },
	{ "isLoaded", (intptr_t) SM_arc_util_SharedLibraryLoader_isLoaded_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 41 },
	{ "crc", (intptr_t) M_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String, VTABLE_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String, "(Ljava/io/InputStream;)Ljava/lang/String;", 1 },
	{ "mapLibraryName", (intptr_t) M_arc_util_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String, VTABLE_arc_util_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "load", (intptr_t) M_arc_util_SharedLibraryLoader_load_java_lang_String, VTABLE_arc_util_SharedLibraryLoader_load_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "readFile", (intptr_t) M_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream, VTABLE_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream, "(Ljava/lang/String;)Ljava/io/InputStream;", 4 },
	{ "extractFile", (intptr_t) M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File, VTABLE_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File, "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;", 1 },
	{ "extractFileTo", (intptr_t) M_arc_util_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File, VTABLE_arc_util_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File, "(Ljava/lang/String;Ljava/io/File;)V", 1 },
	{ "getExtractedFile", (intptr_t) M_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File, VTABLE_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File, "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;", 2 },
	{ "canWrite", (intptr_t) M_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean, VTABLE_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean, "(Ljava/io/File;)Z", 2 },
	{ "canExecute", (intptr_t) M_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean, VTABLE_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean, "(Ljava/io/File;)Z", 2 },
	{ "extractFile", (intptr_t) M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File, VTABLE_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File, "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;", 4 },
	{ "loadFile", (intptr_t) M_arc_util_SharedLibraryLoader_loadFile_java_lang_String, VTABLE_arc_util_SharedLibraryLoader_loadFile_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "loadFile", (intptr_t) M_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable, VTABLE_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/lang/Throwable;", 4 },
	{ "<clinit>", (intptr_t) clinit_arc_util_SharedLibraryLoader, 0, "()V", 8 },
};

Class class_arc_util_SharedLibraryLoader{
		.nativeName = (intptr_t) "arc/util/SharedLibraryLoader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_SharedLibraryLoader),
		.classVtable = (intptr_t) vtable_arc_util_SharedLibraryLoader,
		.staticInitializer = (intptr_t) clinit_arc_util_SharedLibraryLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_SharedLibraryLoader,
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
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_SharedLibraryLoader = registerClass(&class_arc_util_SharedLibraryLoader);

}
