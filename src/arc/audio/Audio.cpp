#include "arc/audio/Audio.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "arc/util/Log.h"
#include "arc/audio/AudioBus.h"
#include "java/lang/Float.h"
#include "arc/audio/Audio_1.h"
#include "arc/files/Fi.h"
#include "arc/audio/AudioSource.h"
#include "arc/Application.h"
#include "arc/audio/Audio.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/ApplicationListener.h"
#include "arc/audio/Sound.h"
#include "arc/audio/Music.h"
#include "arc/audio/AudioFilter.h"
#include "arc/audio/Soloud.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_audio_Audio(jobject object, jint mark, jint depth) {
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
	auto self = (arc_audio_Audio *) object;
	if (self->F_soundBus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_soundBus)->clazz)->markFunction)((jobject) self->F_soundBus, mark, depth + 1);
	if (self->F_musicBus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_musicBus)->clazz)->markFunction)((jobject) self->F_musicBus, mark, depth + 1);
}

void clinit_arc_audio_Audio(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_audio_Audio(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Audio(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_globalPitch = (jfloat(1));
	LINE_NUMBER(13);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_falloff = (jfloat(16000.0f));
	LINE_NUMBER(15);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_defaultSoundMaxConcurrent = (6);
	LINE_NUMBER(19);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_sfxVolume = (jfloat(1.0f));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_audio_AudioBus(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_audio_AudioBus);
	init_arc_audio_AudioBus(ctx, sp[1].o);
	((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_audio_AudioBus(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_audio_AudioBus);
	init_arc_audio_AudioBus(ctx, sp[1].o);
	((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_musicBus = (jref) sp[1].o;
	LINE_NUMBER(27);
	((func_arc_audio_Audio_initialize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Audio_initialize])(ctx, (frame[0].o));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_audio_Audio_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Audio(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_globalPitch = (jfloat(1));
	LINE_NUMBER(13);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_falloff = (jfloat(16000.0f));
	LINE_NUMBER(15);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_defaultSoundMaxConcurrent = (6);
	LINE_NUMBER(19);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_sfxVolume = (jfloat(1.0f));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_audio_AudioBus(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_audio_AudioBus);
	init_arc_audio_AudioBus(ctx, sp[1].o);
	((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_audio_AudioBus(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_audio_AudioBus);
	init_arc_audio_AudioBus(ctx, sp[1].o);
	((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_musicBus = (jref) sp[1].o;
	LINE_NUMBER(32);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(33);
	((func_arc_audio_Audio_initialize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_Audio_initialize])(ctx, (frame[0].o));
	}
label_8:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_audio_Audio_initialized_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:initialized", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return ((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized);
	}

	popStackFrame(ctx);
}

void M_arc_audio_Audio_initialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:initialize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(44);
	SM_arc_audio_Soloud_init(ctx);
	LINE_NUMBER(45);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Audio] Initialized SoLoud @ using @ at @hz / @ samples / @ channels"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(5)));
	jint temp0 = jint(0);
	LINE_NUMBER(46);
	jint temp1 = (jint)SM_arc_audio_Soloud_version_R_int(ctx);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp2 = jint(1);
	sp[2].o = (jobject)SM_arc_audio_Soloud_backendString_R_java_lang_String(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(2);
	jint temp4 = (jint)SM_arc_audio_Soloud_backendSamplerate_R_int(ctx);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp4);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp5 = jint(3);
	jint temp6 = (jint)SM_arc_audio_Soloud_backendBufferSize_R_int(ctx);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp6);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp7 = jint(4);
	jint temp8 = (jint)SM_arc_audio_Soloud_backendChannels_R_int(ctx);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp8);
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	LINE_NUMBER(45);
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized = (jint(1));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_audio_AudioBus(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_audio_AudioBus);
	init_arc_audio_AudioBus(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_audio_AudioBus_init_R_arc_audio_AudioBus) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_audio_AudioBus_init_R_arc_audio_AudioBus])(ctx, sp[1].o);
	((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_soundBus = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_audio_AudioBus(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_audio_AudioBus);
	init_arc_audio_AudioBus(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_audio_AudioBus_init_R_arc_audio_AudioBus) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_audio_AudioBus_init_R_arc_audio_AudioBus])(ctx, sp[1].o);
	((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_musicBus = (jref) sp[1].o;
	LINE_NUMBER(52);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	clinit_arc_audio_Audio$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_audio_Audio$1);
	init_arc_audio_Audio$1_arc_audio_Audio(ctx, sp[1].o, (frame[0].o));
	((func_arc_Application_addListener_arc_ApplicationListener) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_addListener_arc_ApplicationListener, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(75);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(73);
	frame[1].o = sp[0].o;
	LINE_NUMBER(74);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to initialize audio, disabling sound"_j))), (frame[1].o));
	}
label_11:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_audio_Audio_newSound_arc_files_Fi_R_arc_audio_Sound(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:newSound", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_0;
	}
	{
	clinit_arc_audio_Sound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Sound);
	init_arc_audio_Sound(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(82);
	clinit_arc_audio_Sound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Sound);
	init_arc_audio_Sound_arc_files_Fi(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(83);
	frame[2].o = sp[0].o;
	LINE_NUMBER(84);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error loading sound: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(85);
	clinit_arc_audio_Sound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Sound);
	init_arc_audio_Sound(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_audio_Audio_newMusic_arc_files_Fi_R_arc_audio_Music(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:newMusic", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_0;
	}
	{
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(93);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music_arc_files_Fi(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(94);
	frame[2].o = sp[0].o;
	LINE_NUMBER(95);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error loading music: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(96);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_audio_Audio_isPlaying_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:isPlaying", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(101);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(102);
	if ((frame[1].i) <= 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_arc_audio_Soloud_idValid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Audio_protect_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:protect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(106);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(107);
	SM_arc_audio_Soloud_idProtected_int_boolean(ctx, (frame[1].i), (frame[2].i));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Audio_play_arc_audio_AudioSource_float_float_float_boolean_R_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:play", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(111);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[1].o)))->F_handle), (jlong(0)))) != 0) goto label_2;
	}
label_1:;
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)SM_arc_audio_Soloud_sourcePlay_long_float_float_float_boolean_R_int(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[1].o)))->F_handle), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Audio_stop_arc_audio_AudioSource(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:stop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[1].o)))->F_handle), (jlong(0)))) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(117);
	SM_arc_audio_Soloud_sourceStop_long(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[1].o)))->F_handle));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Audio_stop_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(121);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(122);
	SM_arc_audio_Soloud_idStop_int(ctx, (frame[1].i));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Audio_setPaused_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:setPaused", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(126);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(127);
	SM_arc_audio_Soloud_idPause_int_boolean(ctx, (frame[1].i), (frame[2].i));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Audio_setLooping_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:setLooping", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(131);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(132);
	SM_arc_audio_Soloud_idLooping_int_boolean(ctx, (frame[1].i), (frame[2].i));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Audio_setPitch_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:setPitch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(136);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(137);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[2].f));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[2].f));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = frame[1].i;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[2].f), (jfloat(1,000000e-03f)));
	SM_arc_audio_Soloud_idPitch_int_float(ctx, temp0, temp1);
	}
label_2:;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Audio_setVolume_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:setVolume", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(141);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[2].f));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[2].f));
	if (temp0 != 0) goto label_2;
	}
	{
	SM_arc_audio_Soloud_idVolume_int_float(ctx, (frame[1].i), (frame[2].f));
	}
label_2:;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Audio_set_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(146);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[3].f));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[3].f));
	if (temp0 != 0) goto label_2;
	}
	{
	SM_arc_audio_Soloud_idVolume_int_float(ctx, (frame[1].i), (frame[3].f));
	}
label_2:;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[2].f));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[2].f));
	if (temp0 != 0) goto label_3;
	}
	{
	SM_arc_audio_Soloud_idPan_int_float(ctx, (frame[1].i), (frame[2].f));
	}
label_3:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_audio_Audio_fadeFilterParam_int_int_int_float_float(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:fadeFilterParam", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(152);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(153);
	SM_arc_audio_Soloud_filterFade_int_int_int_float_float(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].f), (frame[5].f));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Audio_setFilterParam_int_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:setFilterParam", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(157);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(158);
	SM_arc_audio_Soloud_filterSet_int_int_int_float(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].f));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Audio_setFilter_int_arc_audio_AudioFilter(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:setFilter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(162);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(163);
	jint temp0 = frame[1].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_LCONST(0);
	goto label_3;
label_2:;
	INST_ALOAD(2);
	sp[-1].l = ((arc_audio_AudioFilter *) NULL_CHECK(sp[-1].o))->F_handle;
label_3:;
	{
	sp -= 2;
	SM_arc_audio_Soloud_setGlobalFilter_int_long(ctx, sp[0].i, sp[1].l);
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Audio_countPlaying_arc_audio_AudioSource_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:countPlaying", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[1].o)))->F_handle), (jlong(0)))) > 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)SM_arc_audio_Soloud_sourceCount_long_R_int(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[1].o)))->F_handle));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_Audio_countTotalPlaying_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:countTotalPlaying", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(173);
	jint temp0 = (jint)SM_arc_audio_Soloud_activeVoiceCount_R_int(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Audio_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Audio:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	if (((jint)((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(179);
	SM_arc_audio_Soloud_stopAll(ctx);
	LINE_NUMBER(180);
	SM_arc_audio_Soloud_deinit(ctx);
	LINE_NUMBER(181);
	((arc_audio_Audio *) NULL_CHECK((frame[0].o)))->F_initialized = (jint(0));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_audio_Audio[] {
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
	(void *) M_arc_audio_Audio_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_audio_Audio_initialized_R_boolean,
	(void *) M_arc_audio_Audio_initialize,
	(void *) M_arc_audio_Audio_newSound_arc_files_Fi_R_arc_audio_Sound,
	(void *) M_arc_audio_Audio_newMusic_arc_files_Fi_R_arc_audio_Music,
	(void *) M_arc_audio_Audio_isPlaying_int_R_boolean,
	(void *) M_arc_audio_Audio_protect_int_boolean,
	(void *) M_arc_audio_Audio_play_arc_audio_AudioSource_float_float_float_boolean_R_int,
	(void *) M_arc_audio_Audio_stop_arc_audio_AudioSource,
	(void *) M_arc_audio_Audio_stop_int,
	(void *) M_arc_audio_Audio_setPaused_int_boolean,
	(void *) M_arc_audio_Audio_setLooping_int_boolean,
	(void *) M_arc_audio_Audio_setPitch_int_float,
	(void *) M_arc_audio_Audio_setVolume_int_float,
	(void *) M_arc_audio_Audio_set_int_float_float,
	(void *) M_arc_audio_Audio_fadeFilterParam_int_int_int_float_float,
	(void *) M_arc_audio_Audio_setFilterParam_int_int_int_float,
	(void *) M_arc_audio_Audio_setFilter_int_arc_audio_AudioFilter,
	(void *) M_arc_audio_Audio_countPlaying_arc_audio_AudioSource_R_int,
	(void *) M_arc_audio_Audio_countTotalPlaying_R_int,
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
	{ "initialized", "()Z" },
	{ "initialize", "()V" },
	{ "newSound", "(Larc/files/Fi;)Larc/audio/Sound;" },
	{ "newMusic", "(Larc/files/Fi;)Larc/audio/Music;" },
	{ "isPlaying", "(I)Z" },
	{ "protect", "(IZ)V" },
	{ "play", "(Larc/audio/AudioSource;FFFZ)I" },
	{ "stop", "(Larc/audio/AudioSource;)V" },
	{ "stop", "(I)V" },
	{ "setPaused", "(IZ)V" },
	{ "setLooping", "(IZ)V" },
	{ "setPitch", "(IF)V" },
	{ "setVolume", "(IF)V" },
	{ "set", "(IFF)V" },
	{ "fadeFilterParam", "(IIIFF)V" },
	{ "setFilterParam", "(IIIF)V" },
	{ "setFilter", "(ILarc/audio/AudioFilter;)V" },
	{ "countPlaying", "(Larc/audio/AudioSource;)I" },
	{ "countTotalPlaying", "()I" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "globalPitch", &class_float, offsetof(arc_audio_Audio, F_globalPitch), "F", 1 },
	{ "falloff", &class_float, offsetof(arc_audio_Audio, F_falloff), "F", 1 },
	{ "defaultSoundMaxConcurrent", &class_int, offsetof(arc_audio_Audio, F_defaultSoundMaxConcurrent), "I", 1 },
	{ "initialized", &class_boolean, offsetof(arc_audio_Audio, F_initialized), "Z", 0 },
	{ "sfxVolume", &class_float, offsetof(arc_audio_Audio, F_sfxVolume), "F", 1 },
	{ "soundBus", &class_arc_audio_AudioBus, offsetof(arc_audio_Audio, F_soundBus), "Larc/audio/AudioBus;", 1 },
	{ "musicBus", &class_arc_audio_AudioBus, offsetof(arc_audio_Audio, F_musicBus), "Larc/audio/AudioBus;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_audio_Audio, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_audio_Audio_boolean, 0, "(Z)V", 1 },
	{ "initialized", (intptr_t) M_arc_audio_Audio_initialized_R_boolean, VTABLE_arc_audio_Audio_initialized_R_boolean, "()Z", 1 },
	{ "initialize", (intptr_t) M_arc_audio_Audio_initialize, VTABLE_arc_audio_Audio_initialize, "()V", 4 },
	{ "newSound", (intptr_t) M_arc_audio_Audio_newSound_arc_files_Fi_R_arc_audio_Sound, VTABLE_arc_audio_Audio_newSound_arc_files_Fi_R_arc_audio_Sound, "(Larc/files/Fi;)Larc/audio/Sound;", 1 },
	{ "newMusic", (intptr_t) M_arc_audio_Audio_newMusic_arc_files_Fi_R_arc_audio_Music, VTABLE_arc_audio_Audio_newMusic_arc_files_Fi_R_arc_audio_Music, "(Larc/files/Fi;)Larc/audio/Music;", 1 },
	{ "isPlaying", (intptr_t) M_arc_audio_Audio_isPlaying_int_R_boolean, VTABLE_arc_audio_Audio_isPlaying_int_R_boolean, "(I)Z", 1 },
	{ "protect", (intptr_t) M_arc_audio_Audio_protect_int_boolean, VTABLE_arc_audio_Audio_protect_int_boolean, "(IZ)V", 1 },
	{ "play", (intptr_t) M_arc_audio_Audio_play_arc_audio_AudioSource_float_float_float_boolean_R_int, VTABLE_arc_audio_Audio_play_arc_audio_AudioSource_float_float_float_boolean_R_int, "(Larc/audio/AudioSource;FFFZ)I", 1 },
	{ "stop", (intptr_t) M_arc_audio_Audio_stop_arc_audio_AudioSource, VTABLE_arc_audio_Audio_stop_arc_audio_AudioSource, "(Larc/audio/AudioSource;)V", 1 },
	{ "stop", (intptr_t) M_arc_audio_Audio_stop_int, VTABLE_arc_audio_Audio_stop_int, "(I)V", 1 },
	{ "setPaused", (intptr_t) M_arc_audio_Audio_setPaused_int_boolean, VTABLE_arc_audio_Audio_setPaused_int_boolean, "(IZ)V", 1 },
	{ "setLooping", (intptr_t) M_arc_audio_Audio_setLooping_int_boolean, VTABLE_arc_audio_Audio_setLooping_int_boolean, "(IZ)V", 1 },
	{ "setPitch", (intptr_t) M_arc_audio_Audio_setPitch_int_float, VTABLE_arc_audio_Audio_setPitch_int_float, "(IF)V", 1 },
	{ "setVolume", (intptr_t) M_arc_audio_Audio_setVolume_int_float, VTABLE_arc_audio_Audio_setVolume_int_float, "(IF)V", 1 },
	{ "set", (intptr_t) M_arc_audio_Audio_set_int_float_float, VTABLE_arc_audio_Audio_set_int_float_float, "(IFF)V", 1 },
	{ "fadeFilterParam", (intptr_t) M_arc_audio_Audio_fadeFilterParam_int_int_int_float_float, VTABLE_arc_audio_Audio_fadeFilterParam_int_int_int_float_float, "(IIIFF)V", 1 },
	{ "setFilterParam", (intptr_t) M_arc_audio_Audio_setFilterParam_int_int_int_float, VTABLE_arc_audio_Audio_setFilterParam_int_int_int_float, "(IIIF)V", 1 },
	{ "setFilter", (intptr_t) M_arc_audio_Audio_setFilter_int_arc_audio_AudioFilter, VTABLE_arc_audio_Audio_setFilter_int_arc_audio_AudioFilter, "(ILarc/audio/AudioFilter;)V", 1 },
	{ "countPlaying", (intptr_t) M_arc_audio_Audio_countPlaying_arc_audio_AudioSource_R_int, VTABLE_arc_audio_Audio_countPlaying_arc_audio_AudioSource_R_int, "(Larc/audio/AudioSource;)I", 1 },
	{ "countTotalPlaying", (intptr_t) M_arc_audio_Audio_countTotalPlaying_R_int, VTABLE_arc_audio_Audio_countTotalPlaying_R_int, "()I", 1 },
	{ "dispose", (intptr_t) M_arc_audio_Audio_dispose, VTABLE_arc_audio_Audio_dispose, "()V", 1 },
};

Class class_arc_audio_Audio{
		.nativeName = (intptr_t) "arc/audio/Audio",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_audio_Audio),
		.classVtable = (intptr_t) vtable_arc_audio_Audio,
		.staticInitializer = (intptr_t) clinit_arc_audio_Audio,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_audio_Audio,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_Audio = registerClass(&class_arc_audio_Audio);

}
