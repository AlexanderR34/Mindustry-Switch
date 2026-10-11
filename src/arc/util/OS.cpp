#include "arc/util/OS.h"
#include "java/lang/StringBuilder.h"
#include "arc/Core.h"
#include "java/lang/Runtime.h"
#include "java/nio/charset/Charset.h"
#include "arc/Files.h"
#include "java/io/BufferedReader.h"
#include "arc/files/Fi.h"
#include "java/io/PrintStream.h"
#include "java/lang/CharSequence.h"
#include "java/io/InputStream.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/InputStreamReader.h"
#include "java/lang/Process.h"
#include "java/io/IOException.h"
#include "arc/util/OS.h"
#include "java/lang/RuntimeException.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jint SF_arc_util_OS_cores;
jobject SF_arc_util_OS_username;
jobject SF_arc_util_OS_userHome;
jobject SF_arc_util_OS_osName;
jobject SF_arc_util_OS_osVersion;
jobject SF_arc_util_OS_osArch;
jobject SF_arc_util_OS_osArchBits;
jobject SF_arc_util_OS_javaVersion;
jint SF_arc_util_OS_javaVersionNumber;
jbool SF_arc_util_OS_isWindows;
jbool SF_arc_util_OS_isLinux;
jbool SF_arc_util_OS_isMac;
jbool SF_arc_util_OS_isIos;
jbool SF_arc_util_OS_isAndroid;
jbool SF_arc_util_OS_isARM;
jbool SF_arc_util_OS_is64Bit;
jbool SF_arc_util_OS_isMobile;
jbool SF_arc_util_OS_isDesktop;

void mark_arc_util_OS(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_OS_username)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_OS_username)->clazz)->markFunction)((jobject) SF_arc_util_OS_username, mark, depth + 1);
		if (SF_arc_util_OS_userHome)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_OS_userHome)->clazz)->markFunction)((jobject) SF_arc_util_OS_userHome, mark, depth + 1);
		if (SF_arc_util_OS_osName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_OS_osName)->clazz)->markFunction)((jobject) SF_arc_util_OS_osName, mark, depth + 1);
		if (SF_arc_util_OS_osVersion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_OS_osVersion)->clazz)->markFunction)((jobject) SF_arc_util_OS_osVersion, mark, depth + 1);
		if (SF_arc_util_OS_osArch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_OS_osArch)->clazz)->markFunction)((jobject) SF_arc_util_OS_osArch, mark, depth + 1);
		if (SF_arc_util_OS_osArchBits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_OS_osArchBits)->clazz)->markFunction)((jobject) SF_arc_util_OS_osArchBits, mark, depth + 1);
		if (SF_arc_util_OS_javaVersion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_OS_javaVersion)->clazz)->markFunction)((jobject) SF_arc_util_OS_javaVersion, mark, depth + 1);
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
	auto self = (arc_util_OS *) object;
}

void init_arc_util_OS(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_OS_getAppDataDirectoryString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:getAppDataDirectoryString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(61);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isWindows) == 0) goto label_1;
	}
	{
	LINE_NUMBER(62);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)SM_arc_util_OS_env_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"AppData"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\\\\"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(63);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isIos) != 0) goto label_3;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isAndroid;
	if ((--sp)->i == 0) goto label_4;
label_3:;
	{
	LINE_NUMBER(64);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_getLocalStoragePath_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_getLocalStoragePath_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(65);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isLinux) == 0) goto label_5;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"XDG_DATA_HOME"_j))));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"XDG_DATA_HOME"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(69);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(71);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_arc_util_OS(ctx);
	sp[1].o = (jobject)SF_arc_util_OS_userHome;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/.local/share/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(72);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMac) == 0) goto label_11;
	}
	{
	LINE_NUMBER(73);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_arc_util_OS(ctx);
	sp[1].o = (jobject)SF_arc_util_OS_userHome;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/Library/Application Support/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_OS_getWindowsTmpDir_R_java_lang_String(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:getWindowsTmpDir", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_arc_util_OS_env_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"TEMP"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(81);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_arc_util_OS_env_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"TMP"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(83);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"C:\\Windows\\TEMP"_j)));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_OS_exec_boolean_Array1_java_lang_String_R_java_lang_String(jcontext ctx, jbool param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:exec", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	sp[0].o = (jobject)((func_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(91);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)((func_java_lang_Process_getInputStream_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Process_getInputStream_R_java_io_InputStream])(ctx, (frame[2].o));
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_io_InputStreamReader_java_io_InputStream_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	init_java_io_BufferedReader_java_io_Reader(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(92);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(98);
	if ((frame[0].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(99);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)((func_java_lang_Process_getErrorStream_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Process_getErrorStream_R_java_io_InputStream])(ctx, (frame[2].o));
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_io_InputStreamReader_java_io_InputStream_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	init_java_io_BufferedReader_java_io_Reader(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[6].o));
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[4].o));
	if (temp0 <= 0) goto label_14;
	}
	{
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (10)) goto label_14;
	}
	{
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[4].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp0 - (jint(1))));
	}
label_14:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(108);
	frame[2].o = sp[0].o;
	LINE_NUMBER(109);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_OS_exec_Array1_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:exec", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_arc_util_OS_exec_boolean_Array1_java_lang_String_R_java_lang_String(ctx, (jint(0)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_OS_execSafe_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:execSafe", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(120);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	sp[2].o = (jobject)((func_java_lang_Runtime_exec_java_lang_String_R_java_lang_Process) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Runtime_exec_java_lang_String_R_java_lang_Process])(ctx, sp[2].o, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Process_getInputStream_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Process_getInputStream_R_java_io_InputStream])(ctx, sp[2].o);
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_io_InputStreamReader_java_io_InputStream_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	init_java_io_BufferedReader_java_io_Reader(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(123);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	goto label_4;
	}
label_6:;
	LINE_NUMBER(125);
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(126);
	frame[1].o = sp[0].o;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_OS_execSafe_Array1_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:execSafe", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(133);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	sp[2].o = (jobject)((func_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Runtime_exec_Array1_java_lang_String_R_java_lang_Process])(ctx, sp[2].o, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Process_getInputStream_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Process_getInputStream_R_java_io_InputStream])(ctx, sp[2].o);
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_io_InputStreamReader_java_io_InputStream_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	init_java_io_BufferedReader_java_io_Reader(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(136);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	goto label_4;
	}
label_6:;
	LINE_NUMBER(138);
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(139);
	frame[1].o = sp[0].o;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_OS_getAppDataDirectory_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:getAppDataDirectory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(145);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)SM_arc_util_OS_getAppDataDirectoryString_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_OS_hasProp_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:hasProp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject SM_arc_util_OS_prop_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:prop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_OS_hasEnvFlag_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:hasEnvFlag", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(158);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"1"_j));
	sp[1].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_OS_hasEnv_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:hasEnv", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject SM_arc_util_OS_env_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:env", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:propNoNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)SM_arc_util_OS_prop_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(171);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_3;
label_2:;
	INST_ALOAD(1);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void clinit_arc_util_OS(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/OS:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_OS(ctx);
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jint temp0 = (jint)((func_java_lang_Runtime_availableProcessors_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Runtime_availableProcessors_R_int])(ctx, sp[0].o);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_cores = temp0;
	LINE_NUMBER(11);
	sp[0].o = (jobject)SM_arc_util_OS_prop_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"user.name"_j))));
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_username = sp[0].o;
	LINE_NUMBER(13);
	sp[0].o = (jobject)SM_arc_util_OS_prop_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"user.home"_j))));
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_userHome = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_arc_util_OS_prop_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_osName = sp[0].o;
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_arc_util_OS_prop_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.version"_j))));
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_osVersion = sp[0].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_osArch = sp[0].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"sun.arch.data.model"_j))));
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_osArchBits = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.version"_j))));
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_javaVersion = sp[0].o;
	LINE_NUMBER(25);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isAndroid) != 0) goto label_9;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isIos;
	if ((--sp)->i == 0) goto label_10;
label_9:;
	INST_ICONST(0);
	goto label_11;
label_10:;
	{
	LINE_NUMBER(26);
	clinit_arc_util_OS(ctx);
	sp[0].o = (jobject)SF_arc_util_OS_javaVersion;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"1."_j))));
	if (temp0 == 0) goto label_12;
	}
	INST_BIPUSH(8);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(27);
	clinit_arc_util_OS(ctx);
	sp[0].o = (jobject)SF_arc_util_OS_javaVersion;
	sp[0].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"^(\\d+).*"_j))), (((jobject) createStringLiteral(ctx, u8"$1"_j))));
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, sp[0].o, (8));
	sp[0].i = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_javaVersionNumber = sp[0].i;
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Windows"_j))));
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isWindows = temp0;
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp1 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Linux"_j))));
	if (temp1 != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BSD"_j))));
	if (temp0 == 0) goto label_16;
	}
label_15:;
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isLinux = sp[0].i;
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Mac"_j))));
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isMac = temp0;
	LINE_NUMBER(32);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isIos = (jint(0));
	LINE_NUMBER(33);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isAndroid = (jint(0));
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp1 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arm"_j))));
	if (temp1 != 0) goto label_22;
	}
	{
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"aarch64"_j))));
	if (temp0 == 0) goto label_23;
	}
label_22:;
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isARM = sp[0].i;
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"64"_j))));
	if (temp0 != 0) goto label_26;
	}
	{
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"armv8"_j))));
	if (temp0 == 0) goto label_27;
	}
label_26:;
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_is64Bit = sp[0].i;
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.runtime.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Android Runtime"_j))));
	if (temp0 != 0) goto label_30;
	}
	{
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.vm.vendor"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"The Android Project"_j))));
	if (temp0 != 0) goto label_30;
	}
	{
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.vendor"_j))));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"The Android Project"_j))));
	if (temp0 == 0) goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(41);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isAndroid = (jint(1));
	LINE_NUMBER(42);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isWindows = (jint(0));
	LINE_NUMBER(43);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isLinux = (jint(0));
	LINE_NUMBER(44);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isMac = (jint(0));
	LINE_NUMBER(45);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_is64Bit = (jint(0));
	}
label_31:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"moe.platform.name"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOS"_j))));
	if (temp0 != 0) goto label_36;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isAndroid;
	if ((--sp)->i != 0) goto label_37;
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isWindows;
	if ((--sp)->i != 0) goto label_37;
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isLinux;
	if ((--sp)->i != 0) goto label_37;
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isMac;
	if ((--sp)->i != 0) goto label_37;
label_36:;
	{
	LINE_NUMBER(49);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isIos = (jint(1));
	LINE_NUMBER(50);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isAndroid = (jint(0));
	LINE_NUMBER(51);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isWindows = (jint(0));
	LINE_NUMBER(52);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isLinux = (jint(0));
	LINE_NUMBER(53);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isMac = (jint(0));
	LINE_NUMBER(54);
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_is64Bit = (jint(0));
	}
label_37:;
	{
	LINE_NUMBER(56);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isAndroid) != 0) goto label_43;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isIos;
	if ((--sp)->i == 0) goto label_44;
label_43:;
	INST_ICONST(1);
	goto label_45;
label_44:;
	INST_ICONST(0);
label_45:;
	{
	sp -= 1;
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isMobile = sp[0].i;
	LINE_NUMBER(57);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMobile) != 0) goto label_47;
	}
	INST_ICONST(1);
	goto label_48;
label_47:;
	INST_ICONST(0);
label_48:;
	{
	sp -= 1;
	clinit_arc_util_OS(ctx);
	SF_arc_util_OS_isDesktop = sp[0].i;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_OS[] {
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
};

static FieldMetadata fields[] {
	{ "cores", &class_int, (intptr_t) &SF_arc_util_OS_cores, "I", 25 },
	{ "username", &class_java_lang_String, (intptr_t) &SF_arc_util_OS_username, "Ljava/lang/String;", 25 },
	{ "userHome", &class_java_lang_String, (intptr_t) &SF_arc_util_OS_userHome, "Ljava/lang/String;", 25 },
	{ "osName", &class_java_lang_String, (intptr_t) &SF_arc_util_OS_osName, "Ljava/lang/String;", 25 },
	{ "osVersion", &class_java_lang_String, (intptr_t) &SF_arc_util_OS_osVersion, "Ljava/lang/String;", 25 },
	{ "osArch", &class_java_lang_String, (intptr_t) &SF_arc_util_OS_osArch, "Ljava/lang/String;", 25 },
	{ "osArchBits", &class_java_lang_String, (intptr_t) &SF_arc_util_OS_osArchBits, "Ljava/lang/String;", 25 },
	{ "javaVersion", &class_java_lang_String, (intptr_t) &SF_arc_util_OS_javaVersion, "Ljava/lang/String;", 25 },
	{ "javaVersionNumber", &class_int, (intptr_t) &SF_arc_util_OS_javaVersionNumber, "I", 25 },
	{ "isWindows", &class_boolean, (intptr_t) &SF_arc_util_OS_isWindows, "Z", 9 },
	{ "isLinux", &class_boolean, (intptr_t) &SF_arc_util_OS_isLinux, "Z", 9 },
	{ "isMac", &class_boolean, (intptr_t) &SF_arc_util_OS_isMac, "Z", 9 },
	{ "isIos", &class_boolean, (intptr_t) &SF_arc_util_OS_isIos, "Z", 9 },
	{ "isAndroid", &class_boolean, (intptr_t) &SF_arc_util_OS_isAndroid, "Z", 9 },
	{ "isARM", &class_boolean, (intptr_t) &SF_arc_util_OS_isARM, "Z", 9 },
	{ "is64Bit", &class_boolean, (intptr_t) &SF_arc_util_OS_is64Bit, "Z", 9 },
	{ "isMobile", &class_boolean, (intptr_t) &SF_arc_util_OS_isMobile, "Z", 9 },
	{ "isDesktop", &class_boolean, (intptr_t) &SF_arc_util_OS_isDesktop, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_OS, 0, "()V", 1 },
	{ "getAppDataDirectoryString", (intptr_t) SM_arc_util_OS_getAppDataDirectoryString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "getWindowsTmpDir", (intptr_t) SM_arc_util_OS_getWindowsTmpDir_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "exec", (intptr_t) SM_arc_util_OS_exec_boolean_Array1_java_lang_String_R_java_lang_String, 0, "(Z[Ljava/lang/String;)Ljava/lang/String;", 137 },
	{ "exec", (intptr_t) SM_arc_util_OS_exec_Array1_java_lang_String_R_java_lang_String, 0, "([Ljava/lang/String;)Ljava/lang/String;", 137 },
	{ "execSafe", (intptr_t) SM_arc_util_OS_execSafe_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "execSafe", (intptr_t) SM_arc_util_OS_execSafe_Array1_java_lang_String_R_boolean, 0, "([Ljava/lang/String;)Z", 137 },
	{ "getAppDataDirectory", (intptr_t) SM_arc_util_OS_getAppDataDirectory_java_lang_String_R_arc_files_Fi, 0, "(Ljava/lang/String;)Larc/files/Fi;", 9 },
	{ "hasProp", (intptr_t) SM_arc_util_OS_hasProp_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "prop", (intptr_t) SM_arc_util_OS_prop_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "hasEnvFlag", (intptr_t) SM_arc_util_OS_hasEnvFlag_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "hasEnv", (intptr_t) SM_arc_util_OS_hasEnv_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "env", (intptr_t) SM_arc_util_OS_env_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "propNoNull", (intptr_t) SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_util_OS, 0, "()V", 8 },
};

Class class_arc_util_OS{
		.nativeName = (intptr_t) "arc/util/OS",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_OS),
		.classVtable = (intptr_t) vtable_arc_util_OS,
		.staticInitializer = (intptr_t) clinit_arc_util_OS,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_OS,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_OS = registerClass(&class_arc_util_OS);

}
