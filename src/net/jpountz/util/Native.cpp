#include "net/jpountz/util/Native.h"
#include "java/lang/StringBuilder.h"
#include "net/jpountz/util/Native.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/io/FileOutputStream.h"
#include "java/lang/ExceptionInInitializerError.h"
#include "java/lang/Package.h"
#include "java/lang/Enum.h"
#include "java/lang/UnsatisfiedLinkError.h"
#include "net/jpountz/util/Native_OS.h"
#include "java/lang/CharSequence.h"
#include "net/jpountz/util/Native_1.h"
#include "java/io/PrintStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/FilenameFilter.h"
#include "java/io/File.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/lang/SecurityException.h"

extern "C" {

jbool SF_net_jpountz_util_Native_loaded;
jobject SF_net_jpountz_util_Native_$VALUES;

void mark_net_jpountz_util_Native(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_util_Native_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_Native_$VALUES)->clazz)->markFunction)((jobject) SF_net_jpountz_util_Native_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (net_jpountz_util_Native *) object;
}

jobject SM_net_jpountz_util_Native_values_R_Array1_net_jpountz_util_Native(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native(ctx);
	{
	LINE_NUMBER(26);
	clinit_net_jpountz_util_Native(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_Native_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_net_jpountz_util_Native, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_Native_valueOf_java_lang_String_R_net_jpountz_util_Native(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_net_jpountz_util_Native)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_net_jpountz_util_Native, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_net_jpountz_util_Native_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(26);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_Native_arch_R_java_lang_String(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:arch", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native(ctx);
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_Native_os_R_net_jpountz_util_Native$OS(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:os", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native(ctx);
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Linux"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(46);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_Native$OS_LINUX;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Mac"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(48);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_Native$OS_MAC;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Windows"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(50);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_Native$OS_WINDOWS;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(51);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Solaris"_j))));
	if (temp0 != 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"SunOS"_j))));
	if (temp0 == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(52);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_Native$OS_SOLARIS;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(54);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unsupported operating system: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_Native_resourceName_R_java_lang_String(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:resourceName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native(ctx);
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_net_jpountz_util_Native_os_R_net_jpountz_util_Native$OS(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_java_lang_Class_getPackage_R_java_lang_Package) ((void **) nullCheck(ctx, (((jobject) &class_net_jpountz_util_Native)))->vtable)[VTABLE_java_lang_Class_getPackage_R_java_lang_Package])(ctx, (((jobject) &class_net_jpountz_util_Native)));
	sp[0].o = (jobject)((func_java_lang_Package_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Package_getName_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (46), (47));
	frame[1].o = sp[0].o;
	LINE_NUMBER(63);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[1].o = (jobject)((net_jpountz_util_Native$OS *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[1].o = (jobject)SM_net_jpountz_util_Native_arch_R_java_lang_String(ctx);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/liblz4-java."_j))));
	sp[1].o = (jobject)((net_jpountz_util_Native$OS *) NULL_CHECK((frame[0].o)))->F_libExtension;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_net_jpountz_util_Native_isLoaded_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:isLoaded", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_net_jpountz_util_Native);

	clinit_net_jpountz_util_Native(ctx);
	{
	LINE_NUMBER(69);
	popStackFrame(ctx, (jobject) &class_net_jpountz_util_Native);
	return (clinit_net_jpountz_util_Native(ctx), (jint)SF_net_jpountz_util_Native_loaded);
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_Native_cleanupOldTempLibs(jcontext ctx) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:cleanupOldTempLibs", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native(ctx);
	{
	LINE_NUMBER(73);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.io.tmpdir"_j))));
	init_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(74);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = frame[1].o;
	clinit_net_jpountz_util_Native$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_net_jpountz_util_Native$1);
	init_net_jpountz_util_Native$1(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_io_File_listFiles_java_io_FilenameFilter_R_Array1_java_io_File) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_listFiles_java_io_FilenameFilter_R_Array1_java_io_File])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(85);
	if ((frame[2].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(86);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_12:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_8;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(87);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".lck"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_15;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(93);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(91);
	frame[8].o = sp[0].o;
	LINE_NUMBER(92);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_err;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Failed to delete old temp lib: "_j))));
	sp[2].o = (jobject)((func_java_lang_SecurityException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_SecurityException_getMessage_R_java_lang_String])(ctx, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(86);
	INST_IINC(5, 1);
	goto label_12;
	}
label_8:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_net_jpountz_util_Native_load(jcontext ctx) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:load", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_net_jpountz_util_Native);
	volatile bool bypasses[2]{};

	clinit_net_jpountz_util_Native(ctx);
	{
	LINE_NUMBER(100);
	if ((clinit_net_jpountz_util_Native(ctx), (jint)SF_net_jpountz_util_Native_loaded) == 0) goto label_29;
	}
	LINE_NUMBER(101);
	popStackFrame(ctx, (jobject) &class_net_jpountz_util_Native);
	INST_RETURN();
label_29:;
	LINE_NUMBER(104);
	SM_net_jpountz_util_Native_cleanupOldTempLibs(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_UnsatisfiedLinkError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(108);
	SM_java_lang_System_loadLibrary_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"lz4-java"_j))));
	LINE_NUMBER(109);
	clinit_net_jpountz_util_Native(ctx);
	SF_net_jpountz_util_Native_loaded = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(110);
	popStackFrame(ctx, (jobject) &class_net_jpountz_util_Native);
	INST_RETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(111);
	frame[0].o = sp[0].o;
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_net_jpountz_util_Native_resourceName_R_java_lang_String(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, (((jobject) &class_net_jpountz_util_Native)))->vtable)[VTABLE_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream])(ctx, (((jobject) &class_net_jpountz_util_Native)), (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(117);
	if ((frame[1].o) != nullptr) goto label_35;
	}
	{
	LINE_NUMBER(118);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unsupported OS/arch, cannot find "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8". Please try building from source."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_35:;
	{
	LINE_NUMBER(120);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(121);
	frame[3].o = (jobject(nullptr));
	}
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_22; }
	}
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_27; } // goto label_24
	}
	{
	LINE_NUMBER(125);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"liblz4-java-"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[2].o = (jobject)SM_net_jpountz_util_Native_os_R_net_jpountz_util_Native$OS(ctx);
	sp[2].o = (jobject)((net_jpountz_util_Native$OS *) NULL_CHECK(sp[2].o))->F_libExtension;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".lck"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(126);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".lck$"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	init_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(128);
	clinit_java_io_FileOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileOutputStream);
	init_java_io_FileOutputStream_java_io_File(ctx, sp[0].o, (frame[2].o));
	frame[4].o = sp[0].o;
	frame[5].o = (jobject(nullptr));
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_19; } // goto label_12
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (4096));
	frame[6].o = sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[1].o), (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(132);
	if ((frame[7].i) != (jint(-1))) goto label_43;
	}
	LINE_NUMBER(133);
	goto label_9;
label_43:;
	{
	LINE_NUMBER(135);
	((func_java_io_FileOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_FileOutputStream_write_Array1_byte_int_int])(ctx, (frame[4].o), (frame[6].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(136);
	goto label_41;
	}
label_9:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(137);
	if ((frame[4].o) == nullptr) goto label_46;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_47;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_io_FileOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_FileOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_46;
label_6:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[6].o));
	goto label_46;
	}
label_47:;
	{
	((func_java_io_FileOutputStream_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_FileOutputStream_close])(ctx, (frame[4].o));
	goto label_46;
	}
label_10:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_12;
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_12; }
	{
	sp -= 1;
	LINE_NUMBER(128);
	frame[6].o = sp[0].o;
	frame[5].o = (frame[6].o);
	throwException(ctx, (frame[6].o));	}
label_12:;
	LINE_NUMBER(137);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_50;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_51;
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_io_FileOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_FileOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_50;
label_16:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[9].o));
	goto label_50;
	}
label_51:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_java_io_FileOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_FileOutputStream_close])(ctx, sp[0].o);
label_50:;
	INST_ALOAD(8);
	INST_ATHROW();
	label_46:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, (frame[2].o));
	SM_java_lang_System_load_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(139);
	clinit_net_jpountz_util_Native(ctx);
	SF_net_jpountz_util_Native_loaded = (jint(1));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(143);
	if ((clinit_net_jpountz_util_Native(ctx), (jint)SF_net_jpountz_util_Native_loaded) != 0) goto label_55;
	}
	{
	LINE_NUMBER(144);
	if ((frame[2].o) == nullptr) goto label_57;
	}
	{
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_57;
	}
	{
	LINE_NUMBER(146);
	clinit_java_lang_ExceptionInInitializerError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ExceptionInInitializerError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot unpack liblz4-java / cannot delete a temporary native library "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ExceptionInInitializerError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_57:;
	{
	LINE_NUMBER(149);
	if ((frame[3].o) == nullptr) goto label_60;
	}
	{
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_60;
	}
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_60;
	}
	{
	LINE_NUMBER(151);
	clinit_java_lang_ExceptionInInitializerError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ExceptionInInitializerError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot unpack liblz4-java / cannot delete a temporary lock file "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ExceptionInInitializerError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_55:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"LZ4JAVA_KEEP_TEMP_JNI_LIB"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(156);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"lz4java.jnilib.temp.keep"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(157);
	if ((frame[4].o) == nullptr) goto label_65;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 != 0) goto label_66;
	}
label_65:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_67;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 != 0) goto label_66;
	}
label_67:;
	{
	LINE_NUMBER(159);
	((func_java_io_File_deleteOnExit) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_deleteOnExit])(ctx, (frame[2].o));
	}
label_66:;
	{
	LINE_NUMBER(160);
	((func_java_io_File_deleteOnExit) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_deleteOnExit])(ctx, (frame[3].o));
	LINE_NUMBER(162);
	goto label_60;
	}
label_22:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_24;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_24; }
	{
	sp -= 1;
	LINE_NUMBER(140);
	frame[4].o = sp[0].o;
	LINE_NUMBER(141);
	clinit_java_lang_ExceptionInInitializerError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ExceptionInInitializerError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot unpack liblz4-java: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ExceptionInInitializerError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_24:;
	LINE_NUMBER(143);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	clinit_net_jpountz_util_Native(ctx);
	(sp++)->i = SF_net_jpountz_util_Native_loaded;
	if ((--sp)->i != 0) goto label_70;
	{
	LINE_NUMBER(144);
	if ((frame[2].o) == nullptr) goto label_72;
	}
	{
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_72;
	}
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_72;
	}
	{
	LINE_NUMBER(146);
	clinit_java_lang_ExceptionInInitializerError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ExceptionInInitializerError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot unpack liblz4-java / cannot delete a temporary native library "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ExceptionInInitializerError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_72:;
	{
	LINE_NUMBER(149);
	if ((frame[3].o) == nullptr) goto label_75;
	}
	{
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_75;
	}
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_75;
	}
	{
	LINE_NUMBER(151);
	clinit_java_lang_ExceptionInInitializerError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ExceptionInInitializerError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot unpack liblz4-java / cannot delete a temporary lock file "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ExceptionInInitializerError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_70:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"LZ4JAVA_KEEP_TEMP_JNI_LIB"_j))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(156);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"lz4java.jnilib.temp.keep"_j))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(157);
	if ((frame[11].o) == nullptr) goto label_80;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 != 0) goto label_81;
	}
label_80:;
	INST_ALOAD(12);
	if ((--sp)->o == nullptr) goto label_82;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[12].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 != 0) goto label_81;
	}
label_82:;
	{
	LINE_NUMBER(159);
	((func_java_io_File_deleteOnExit) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_deleteOnExit])(ctx, (frame[2].o));
	}
label_81:;
	{
	LINE_NUMBER(160);
	((func_java_io_File_deleteOnExit) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_deleteOnExit])(ctx, (frame[3].o));
	}
label_75:;
	{
	LINE_NUMBER(161);
	throwException(ctx, (frame[10].o));	}
label_60:;
	LINE_NUMBER(163);
	popStackFrame(ctx, (jobject) &class_net_jpountz_util_Native);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_net_jpountz_util_Native(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native(ctx);
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)createArray(ctx, &class_net_jpountz_util_Native, (jint(0)));
	clinit_net_jpountz_util_Native(ctx);
	SF_net_jpountz_util_Native_$VALUES = sp[0].o;
	LINE_NUMBER(66);
	clinit_net_jpountz_util_Native(ctx);
	SF_net_jpountz_util_Native_loaded = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_util_Native[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static jclass innerClasses[] {
	&class_net_jpountz_util_Native$OS,
};

static FieldMetadata fields[] {
	{ "loaded", &class_boolean, (intptr_t) &SF_net_jpountz_util_Native_loaded, "Z", 10 },
	{ "$VALUES", getArrayClass(&class_net_jpountz_util_Native, 1), (intptr_t) &SF_net_jpountz_util_Native_$VALUES, "[Lnet/jpountz/util/Native;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_net_jpountz_util_Native_values_R_Array1_net_jpountz_util_Native, 0, "()[Lnet/jpountz/util/Native;", 9 },
	{ "valueOf", (intptr_t) SM_net_jpountz_util_Native_valueOf_java_lang_String_R_net_jpountz_util_Native, 0, "(Ljava/lang/String;)Lnet/jpountz/util/Native;", 9 },
	{ "<init>", (intptr_t) init_net_jpountz_util_Native_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "arch", (intptr_t) SM_net_jpountz_util_Native_arch_R_java_lang_String, 0, "()Ljava/lang/String;", 10 },
	{ "os", (intptr_t) SM_net_jpountz_util_Native_os_R_net_jpountz_util_Native$OS, 0, "()Lnet/jpountz/util/Native$OS;", 10 },
	{ "resourceName", (intptr_t) SM_net_jpountz_util_Native_resourceName_R_java_lang_String, 0, "()Ljava/lang/String;", 10 },
	{ "isLoaded", (intptr_t) SM_net_jpountz_util_Native_isLoaded_R_boolean, 0, "()Z", 41 },
	{ "cleanupOldTempLibs", (intptr_t) SM_net_jpountz_util_Native_cleanupOldTempLibs, 0, "()V", 10 },
	{ "load", (intptr_t) SM_net_jpountz_util_Native_load, 0, "()V", 41 },
	{ "<clinit>", (intptr_t) clinit_net_jpountz_util_Native, 0, "()V", 8 },
};

Class class_net_jpountz_util_Native{
		.nativeName = (intptr_t) "net/jpountz/util/Native",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(net_jpountz_util_Native),
		.classVtable = (intptr_t) vtable_net_jpountz_util_Native,
		.staticInitializer = (intptr_t) clinit_net_jpountz_util_Native,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_util_Native,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_util_Native = registerClass(&class_net_jpountz_util_Native);

}
