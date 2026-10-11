#include "arc/audio/Music.h"
#include "java/lang/StringBuilder.h"
#include "arc/audio/AudioBus.h"
#include "arc/files/Fi.h"
#include "arc/Files_FileType.h"
#include "arc/Application.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/audio/Audio.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/OS.h"
#include "arc/Settings.h"
#include "java/lang/Throwable.h"
#include "java/io/File.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Disposable.h"
#include "arc/util/Log.h"
#include "arc/Files.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "arc/audio/AudioSource.h"
#include "java/lang/Object.h"
#include "arc/audio/Music.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/audio/Soloud.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_audio_Music(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_audio_AudioSource(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_audio_Music *) object;
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
}

void clinit_arc_audio_Music(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_audio_AudioSource(ctx);
}

jobject SM_arc_audio_Music_create_arc_files_Fi_R_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:create", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Music(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(41);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(43);
	((arc_audio_Music *) NULL_CHECK((frame[1].o)))->F_file = (jref) (frame[0].o);
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[0].o));
	jlong temp0 = (jlong)SM_arc_audio_Soloud_streamLoadFile_java_lang_String_R_long(ctx, sp[1].o);
	((arc_audio_AudioSource *) NULL_CHECK(sp[0].o))->F_handle = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(47);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(45);
	frame[2].o = sp[0].o;
	LINE_NUMBER(46);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Failed loading music from "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void init_arc_audio_Music_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Music(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	init_arc_audio_AudioSource(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice = (jint(-1));
	LINE_NUMBER(37);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_volume = (jfloat(1));
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_pitch = (jfloat(1));
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_pan = (jfloat(0));
	LINE_NUMBER(53);
	((func_arc_audio_Music_load_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Music_load_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_audio_Music(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Music(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(57);
	init_arc_audio_AudioSource(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice = (jint(-1));
	LINE_NUMBER(37);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_volume = (jfloat(1));
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_pitch = (jfloat(1));
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_pan = (jfloat(0));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Music_load_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_audio_Soloud_streamLoadBytes_Array1_byte_int_R_long(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((arc_audio_AudioSource *) NULL_CHECK(sp[0].o))->F_handle = temp0;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Music_load_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:load", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[1].o));
	jlong temp_m0 = (jlong)SM_arc_audio_Soloud_streamLoadFile_java_lang_String_R_long(ctx, sp[1].o);
	((arc_audio_AudioSource *) NULL_CHECK(sp[0].o))->F_handle = temp_m0;
	popStackFrame(ctx);
	return;
	}
	{
	sp[0].o = (jobject)((func_arc_files_Fi_type_R_arc_Files$FileType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_type_R_arc_Files$FileType])(ctx, (frame[1].o));
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_internal;
	if (sp[0].o != sp[1].o) goto label_14;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(71);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_getInternalStoragePath_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_getInternalStoragePath_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp += 2;
	if (temp0 == 0) goto label_16;
	}
	INST_ALOAD(2);
	goto label_17;
label_16:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_17:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jlong temp0 = (jlong)SM_arc_audio_Soloud_streamLoadFile_java_lang_String_R_long(ctx, sp[1].o);
	((arc_audio_AudioSource *) NULL_CHECK(sp[0].o))->F_handle = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	LINE_NUMBER(74);
	INST_ASTORE(2);
label_14:;
	{
	LINE_NUMBER(77);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(79);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"__"_j))));
	jlong temp0 = (jlong)((func_arc_files_Fi_length_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_length_R_long])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[1].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_audio_Music_caches_java_lang_String_R_Array1_arc_files_Fi(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_19:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_20;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_22;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_22;
	}
	{
	jlong temp0 = (jlong)((func_arc_files_Fi_length_R_long) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_length_R_long])(ctx, (frame[6].o));
	jlong temp1 = (jlong)((func_arc_files_Fi_length_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_length_R_long])(ctx, (frame[1].o));
	if ((longCompare(temp0, temp1)) == 0) goto label_4;
	}
label_22:;
	{
	LINE_NUMBER(83);
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, (frame[1].o), (frame[6].o));
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_file_R_java_io_File])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_io_File_getCanonicalPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_File_getCanonicalPath_R_java_lang_String])(ctx, sp[1].o);
	jlong temp0 = (jlong)SM_arc_audio_Soloud_streamLoadFile_java_lang_String_R_long(ctx, sp[1].o);
	((arc_audio_AudioSource *) NULL_CHECK(sp[0].o))->F_handle = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	LINE_NUMBER(89);
	INST_ASTORE(7);
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_file_R_java_io_File])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, sp[1].o);
	jlong temp0 = (jlong)SM_arc_audio_Soloud_streamLoadFile_java_lang_String_R_long(ctx, sp[1].o);
	((arc_audio_AudioSource *) NULL_CHECK(sp[0].o))->F_handle = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(93);
	frame[8].o = sp[0].o;
	LINE_NUMBER(95);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error loading music: "_j))));
	sp[2].o = (jobject)((func_arc_files_Fi_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_file_R_java_io_File])(ctx, (frame[6].o));
	sp[2].o = (jobject)((func_java_io_File_getCanonicalPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getCanonicalPath_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[7].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	INST_IINC(5, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(99);
	if ((frame[2].o) == nullptr) goto label_25;
	}
	INST_ALOAD(2);
	INST_ATHROW();
	label_25:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Music_play(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:play", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	if (((jint)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_initialized) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)SM_arc_audio_Soloud_idValid_int_R_boolean(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_arc_audio_Soloud_idGetPause_int_R_boolean(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(106);
	((func_arc_audio_Music_pause_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Music_pause_boolean])(ctx, (frame[0].o), (jint(0)));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	sp[1].o = (jobject)((arc_audio_Audio *) NULL_CHECK(sp[1].o))->F_musicBus;
	jint temp1 = (jint)SM_arc_audio_Soloud_sourcePlayBus_long_long_float_float_float_boolean_R_int(ctx, temp0, ((jlong)((arc_audio_AudioSource *) NULL_CHECK(sp[1].o))->F_handle), ((jfloat)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_volume), ((jfloat)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_pitch), ((jfloat)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_pan), ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_looping));
	((arc_audio_Music *) NULL_CHECK(sp[0].o))->F_voice = temp1;
	LINE_NUMBER(110);
	SM_arc_audio_Soloud_idProtected_int_boolean(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice), (jint(1)));
	}
label_5:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Music_pause_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:pause", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(115);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	{
	if (((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice) > 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(117);
	SM_arc_audio_Soloud_idPause_int_boolean(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice), (frame[1].i));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Music_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	M_arc_audio_AudioSource_stop(ctx, (frame[0].o));
	LINE_NUMBER(123);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice = (jint(0));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_audio_Music_isPlaying_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:isPlaying", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	{
	if (((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice) > 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)SM_arc_audio_Soloud_idValid_int_R_boolean(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_arc_audio_Soloud_idGetPause_int_R_boolean(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice));
	if (temp0 != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_audio_Music_isLooping_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:isLooping", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_looping);
	}

	popStackFrame(ctx);
}

void M_arc_audio_Music_setLooping_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:setLooping", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(137);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_looping = (frame[1].i);
	LINE_NUMBER(138);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_2;
	}
	{
	if (((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice) > 0) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(140);
	SM_arc_audio_Soloud_idLooping_int_boolean(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice), (frame[1].i));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_audio_Music_getVolume_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:getVolume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return ((jfloat)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_volume);
	}

	popStackFrame(ctx);
}

void M_arc_audio_Music_setVolume_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:setVolume", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(148);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_volume = (frame[1].f);
	LINE_NUMBER(149);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_2;
	}
	{
	if (((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice) > 0) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(151);
	SM_arc_audio_Soloud_idVolume_int_float(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice), (frame[1].f));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Music_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(155);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_volume = (frame[2].f);
	LINE_NUMBER(156);
	((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_pan = (frame[1].f);
	LINE_NUMBER(158);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_3;
	}
	{
	if (((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice) > 0) goto label_4;
	}
label_3:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(160);
	SM_arc_audio_Soloud_idVolume_int_float(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice), (frame[2].f));
	LINE_NUMBER(161);
	SM_arc_audio_Soloud_idPan_int_float(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice), (frame[1].f));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_audio_Music_getPosition_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:getPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(167);
	jfloat temp0 = (jfloat)SM_arc_audio_Soloud_idPosition_int_R_float(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Music_setPosition_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:setPosition", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(171);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	{
	if (((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice) > 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(173);
	SM_arc_audio_Soloud_idSeek_int_float(ctx, ((jint)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_voice), (frame[1].f));
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_audio_Music_getLength_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:getLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	if (((jint)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_initialized) != 0) goto label_2;
	}
label_1:;
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(180);
	jdouble temp0 = (jdouble)SM_arc_audio_Soloud_streamLength_long_R_double(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_audio_Music_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SoloudMusic: "_j))));
	sp[1].o = (jobject)((arc_audio_Music *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_audio_Music_caches_java_lang_String_R_Array1_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Music:caches", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Music(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.io.tmpdir"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(192);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isAndroid_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isAndroid_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)createArray(ctx, &class_arc_files_Fi, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[2].o = frame[0].o;
	LINE_NUMBER(194);
	sp[1].o = (jobject)((func_arc_Files_cache_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_cache_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"cache"_j))));
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	LINE_NUMBER(195);
	sp[1].o = sp[0].o;
	sp[2].i = temp2;
	sp += 3;
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"mind"_j))));
	sp[1].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	}
label_7:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)createArray(ctx, &class_arc_files_Fi, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	LINE_NUMBER(199);
	sp[1].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"cache"_j))));
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_cache_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_cache_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	LINE_NUMBER(200);
	sp[1].o = sp[0].o;
	sp[2].i = temp2;
	sp += 3;
	if ((frame[1].o) != nullptr) goto label_11;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"mind"_j))));
	sp[1].o = (jobject)((func_java_io_File_getAbsolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_File_getAbsolutePath_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_12;
	}
label_11:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	}
label_12:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_audio_Music;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field file
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_arc_audio_Music[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_audio_Music_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_audio_AudioSource_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_audio_AudioSource_valid_R_boolean,
	(void *) M_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter,
	(void *) M_arc_audio_AudioSource_setFilter_arc_audio_AudioFilter,
	(void *) M_arc_audio_AudioSource_setParamsAfterLoad,
	(void *) M_arc_audio_AudioSource_setPriority_float,
	(void *) M_arc_audio_AudioSource_setMaxConcurrent_int,
	(void *) M_arc_audio_AudioSource_setConcurrentGroup_int,
	(void *) M_arc_audio_AudioSource_setMinConcurrentInterrupt_float,
	(void *) M_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float,
	(void *) M_arc_audio_AudioSource_countPlaying_R_int,
	(void *) M_arc_audio_AudioSource_setSingleInstance_boolean,
	(void *) M_arc_audio_Music_stop,
	(void *) M_arc_audio_Music_getLength_R_float,
	(void *) M_arc_audio_AudioSource_isLazy_R_boolean,
	(void *) M_arc_audio_Music_load_Array1_byte,
	(void *) M_arc_audio_Music_load_arc_files_Fi,
	(void *) M_arc_audio_Music_play,
	(void *) M_arc_audio_Music_pause_boolean,
	(void *) M_arc_audio_Music_isPlaying_R_boolean,
	(void *) M_arc_audio_Music_isLooping_R_boolean,
	(void *) M_arc_audio_Music_setLooping_boolean,
	(void *) M_arc_audio_Music_getVolume_R_float,
	(void *) M_arc_audio_Music_setVolume_float,
	(void *) M_arc_audio_Music_set_float_float,
	(void *) M_arc_audio_Music_getPosition_R_float,
	(void *) M_arc_audio_Music_setPosition_float,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "valid", "()Z" },
	{ "setFilter", "(ILarc/audio/AudioFilter;)V" },
	{ "setFilter", "(Larc/audio/AudioFilter;)V" },
	{ "setParamsAfterLoad", "()V" },
	{ "setPriority", "(F)V" },
	{ "setMaxConcurrent", "(I)V" },
	{ "setConcurrentGroup", "(I)V" },
	{ "setMinConcurrentInterrupt", "(F)V" },
	{ "setMinConcurrentInterruptFraction", "(FF)V" },
	{ "countPlaying", "()I" },
	{ "setSingleInstance", "(Z)V" },
	{ "stop", "()V" },
	{ "getLength", "()F" },
	{ "isLazy", "()Z" },
	{ "load", "([B)V" },
	{ "load", "(Larc/files/Fi;)V" },
	{ "play", "()V" },
	{ "pause", "(Z)V" },
	{ "isPlaying", "()Z" },
	{ "isLooping", "()Z" },
	{ "setLooping", "(Z)V" },
	{ "getVolume", "()F" },
	{ "setVolume", "(F)V" },
	{ "set", "(FF)V" },
	{ "getPosition", "()F" },
	{ "setPosition", "(F)V" },
};

static FieldMetadata fields[] {
	{ "file", &class_arc_files_Fi, offsetof(arc_audio_Music, F_file), "Larc/files/Fi;", 1 },
	{ "voice", &class_int, offsetof(arc_audio_Music, F_voice), "I", 0 },
	{ "looping", &class_boolean, offsetof(arc_audio_Music, F_looping), "Z", 0 },
	{ "volume", &class_float, offsetof(arc_audio_Music, F_volume), "F", 0 },
	{ "pitch", &class_float, offsetof(arc_audio_Music, F_pitch), "F", 0 },
	{ "pan", &class_float, offsetof(arc_audio_Music, F_pan), "F", 0 },
};

static MethodMetadata methods[] {
	{ "create", (intptr_t) SM_arc_audio_Music_create_arc_files_Fi_R_arc_audio_Music, 0, "(Larc/files/Fi;)Larc/audio/Music;", 9 },
	{ "<init>", (intptr_t) init_arc_audio_Music_arc_files_Fi, 0, "(Larc/files/Fi;)V", 1 },
	{ "<init>", (intptr_t) init_arc_audio_Music, 0, "()V", 1 },
	{ "load", (intptr_t) M_arc_audio_Music_load_Array1_byte, VTABLE_arc_audio_Music_load_Array1_byte, "([B)V", 1 },
	{ "load", (intptr_t) M_arc_audio_Music_load_arc_files_Fi, VTABLE_arc_audio_Music_load_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "play", (intptr_t) M_arc_audio_Music_play, VTABLE_arc_audio_Music_play, "()V", 1 },
	{ "pause", (intptr_t) M_arc_audio_Music_pause_boolean, VTABLE_arc_audio_Music_pause_boolean, "(Z)V", 1 },
	{ "stop", (intptr_t) M_arc_audio_Music_stop, VTABLE_arc_audio_Music_stop, "()V", 1 },
	{ "isPlaying", (intptr_t) M_arc_audio_Music_isPlaying_R_boolean, VTABLE_arc_audio_Music_isPlaying_R_boolean, "()Z", 1 },
	{ "isLooping", (intptr_t) M_arc_audio_Music_isLooping_R_boolean, VTABLE_arc_audio_Music_isLooping_R_boolean, "()Z", 1 },
	{ "setLooping", (intptr_t) M_arc_audio_Music_setLooping_boolean, VTABLE_arc_audio_Music_setLooping_boolean, "(Z)V", 1 },
	{ "getVolume", (intptr_t) M_arc_audio_Music_getVolume_R_float, VTABLE_arc_audio_Music_getVolume_R_float, "()F", 1 },
	{ "setVolume", (intptr_t) M_arc_audio_Music_setVolume_float, VTABLE_arc_audio_Music_setVolume_float, "(F)V", 1 },
	{ "set", (intptr_t) M_arc_audio_Music_set_float_float, VTABLE_arc_audio_Music_set_float_float, "(FF)V", 1 },
	{ "getPosition", (intptr_t) M_arc_audio_Music_getPosition_R_float, VTABLE_arc_audio_Music_getPosition_R_float, "()F", 1 },
	{ "setPosition", (intptr_t) M_arc_audio_Music_setPosition_float, VTABLE_arc_audio_Music_setPosition_float, "(F)V", 1 },
	{ "getLength", (intptr_t) M_arc_audio_Music_getLength_R_float, VTABLE_arc_audio_Music_getLength_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_arc_audio_Music_toString_R_java_lang_String, VTABLE_arc_audio_Music_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "caches", (intptr_t) SM_arc_audio_Music_caches_java_lang_String_R_Array1_arc_files_Fi, 0, "(Ljava/lang/String;)[Larc/files/Fi;", 12 },
};

Class class_arc_audio_Music{
		.nativeName = (intptr_t) "arc/audio/Music",
		.parentClass = (intptr_t) &class_arc_audio_AudioSource,
		.size = sizeof(arc_audio_Music),
		.classVtable = (intptr_t) vtable_arc_audio_Music,
		.staticInitializer = (intptr_t) clinit_arc_audio_Music,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_audio_Music,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_Music = registerClass(&class_arc_audio_Music);

}
